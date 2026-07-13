#include "recomp.h"

/* FUN_10007b90 @ 0x10527b90 (490 bytes, 165 insns) */
void f_10527b90(void) {
  FTRACE(0x10527b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10527b91 mov ebp, esp */
  EBP = (ESP);
  /* 10527b93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527b96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527b9a jne 0x10527bad */
  if (!C.zf) goto L_10527bad;
  /* 10527b9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527b9f push eax */
  push32((uint32_t)(EAX));
  /* 10527ba0 call 0x105279e0 */
  push32(0x10527ba5u); f_105279e0();
  /* 10527ba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527ba8 jmp 0x10527d76 */
  goto L_10527d76;
L_10527bad:;
  /* 10527bad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527bb1 jne 0x10527bc6 */
  if (!C.zf) goto L_10527bc6;
  /* 10527bb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10527bb7 call 0x10527d80 */
  push32(0x10527bbcu); f_10527d80();
  /* 10527bbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527bbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527bc1 jmp 0x10527d76 */
  goto L_10527d76;
L_10527bc6:;
  /* 10527bc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10527bcd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527bd1 ja 0x10527d49 */
  if ((!C.cf&&!C.zf)) goto L_10527d49;
  /* 10527bd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527bd9 call 0x10527610 */
  push32(0x10527bdeu); f_10527610();
  /* 10527bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527be1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527be4 push edx */
  push32((uint32_t)(EDX));
  /* 10527be5 call 0x10527f10 */
  push32(0x10527beau); f_10527f10();
  /* 10527bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527bed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10527bf0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527bf4 je 0x10527d0c */
  if (C.zf) goto L_10527d0c;
  /* 10527bfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527bfd cmp eax, dword ptr [0x1054dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527c03 ja 0x10527c80 */
  if ((!C.cf&&!C.zf)) goto L_10527c80;
  /* 10527c05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527c08 push ecx */
  push32((uint32_t)(ECX));
  /* 10527c09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527c0c push edx */
  push32((uint32_t)(EDX));
  /* 10527c0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10527c10 push eax */
  push32((uint32_t)(EAX));
  /* 10527c11 call 0x10528de0 */
  push32(0x10527c16u); f_10528de0();
  /* 10527c16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10527c1b je 0x10527c25 */
  if (C.zf) goto L_10527c25;
  /* 10527c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527c20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10527c23 jmp 0x10527c80 */
  goto L_10527c80;
L_10527c25:;
  /* 10527c25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527c28 push edx */
  push32((uint32_t)(EDX));
  /* 10527c29 call 0x105285a0 */
  push32(0x10527c2eu); f_105285a0();
  /* 10527c2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527c31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10527c34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527c38 je 0x10527c80 */
  if (C.zf) goto L_10527c80;
  /* 10527c3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527c3d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10527c40 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527c43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10527c46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527c49 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527c4c jae 0x10527c56 */
  if (!C.cf) goto L_10527c56;
  /* 10527c4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527c51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10527c54 jmp 0x10527c5c */
  goto L_10527c5c;
L_10527c56:;
  /* 10527c56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527c59 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10527c5c:;
  /* 10527c5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527c5f push edx */
  push32((uint32_t)(EDX));
  /* 10527c60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527c63 push eax */
  push32((uint32_t)(EAX));
  /* 10527c64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527c67 push ecx */
  push32((uint32_t)(ECX));
  /* 10527c68 call 0x1052a4f0 */
  push32(0x10527c6du); f_1052a4f0();
  /* 10527c6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527c70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527c73 push edx */
  push32((uint32_t)(EDX));
  /* 10527c74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10527c77 push eax */
  push32((uint32_t)(EAX));
  /* 10527c78 call 0x10527fd0 */
  push32(0x10527c7du); f_10527fd0();
  /* 10527c7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10527c80:;
  /* 10527c80 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527c84 jne 0x10527d00 */
  if (!C.zf) goto L_10527d00;
  /* 10527c86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527c8a jne 0x10527c93 */
  if (!C.zf) goto L_10527c93;
  /* 10527c8c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10527c93:;
  /* 10527c93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527c96 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527c99 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10527c9c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10527c9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527ca2 push edx */
  push32((uint32_t)(EDX));
  /* 10527ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10527ca5 mov eax, dword ptr [0x10550ecc] */
  EAX = (r32((uint32_t)(0x10550ecc)));
  /* 10527caa push eax */
  push32((uint32_t)(EAX));
  /* 10527cab call dword ptr [0x10552314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552314))), 0x10527cb1u);
  /* 10527cb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10527cb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527cb8 je 0x10527d00 */
  if (C.zf) goto L_10527d00;
  /* 10527cba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527cbd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10527cc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527cc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10527cc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527cc9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527ccc jae 0x10527cd6 */
  if (!C.cf) goto L_10527cd6;
  /* 10527cce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527cd1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10527cd4 jmp 0x10527cdc */
  goto L_10527cdc;
L_10527cd6:;
  /* 10527cd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527cd9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10527cdc:;
  /* 10527cdc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10527cdf push eax */
  push32((uint32_t)(EAX));
  /* 10527ce0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 10527ce4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527ce7 push edx */
  push32((uint32_t)(EDX));
  /* 10527ce8 call 0x1052a4f0 */
  push32(0x10527cedu); f_1052a4f0();
  /* 10527ced add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527cf3 push eax */
  push32((uint32_t)(EAX));
  /* 10527cf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10527cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10527cf8 call 0x10527fd0 */
  push32(0x10527cfdu); f_10527fd0();
  /* 10527cfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10527d00:;
  /* 10527d00 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527d02 call 0x105276b0 */
  push32(0x10527d07u); f_105276b0();
  /* 10527d07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527d0a jmp 0x10527d49 */
  goto L_10527d49;
L_10527d0c:;
  /* 10527d0c push 9 */
  push32((uint32_t)(0x9u));
  /* 10527d0e call 0x105276b0 */
  push32(0x10527d13u); f_105276b0();
  /* 10527d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527d16 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527d1a jne 0x10527d23 */
  if (!C.zf) goto L_10527d23;
  /* 10527d1c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10527d23:;
  /* 10527d23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527d26 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527d29 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10527d2c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10527d2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527d32 push eax */
  push32((uint32_t)(EAX));
  /* 10527d33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527d36 push ecx */
  push32((uint32_t)(ECX));
  /* 10527d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10527d39 mov edx, dword ptr [0x10550ecc] */
  EDX = (r32((uint32_t)(0x10550ecc)));
  /* 10527d3f push edx */
  push32((uint32_t)(EDX));
  /* 10527d40 call dword ptr [0x1055231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055231c))), 0x10527d46u);
  /* 10527d46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10527d49:;
  /* 10527d49 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527d4d jne 0x10527d58 */
  if (!C.zf) goto L_10527d58;
  /* 10527d4f cmp dword ptr [0x1054f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527d56 jne 0x10527d5d */
  if (!C.zf) goto L_10527d5d;
L_10527d58:;
  /* 10527d58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527d5b jmp 0x10527d76 */
  goto L_10527d76;
L_10527d5d:;
  /* 10527d5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527d60 push eax */
  push32((uint32_t)(EAX));
  /* 10527d61 call 0x10527950 */
  push32(0x10527d66u); f_10527950();
  /* 10527d66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527d69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10527d6b jne 0x10527d71 */
  if (!C.zf) goto L_10527d71;
  /* 10527d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527d6f jmp 0x10527d76 */
  goto L_10527d76;
L_10527d71:;
  /* 10527d71 jmp 0x10527bc6 */
  goto L_10527bc6;
L_10527d76:;
  /* 10527d76 mov esp, ebp */
  ESP = (EBP);
  /* 10527d78 pop ebp */
  EBP = (pop32());
  /* 10527d79 ret  */
  ESPCHK(0x10527b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d80 @ 0x10527d80 (104 bytes, 38 insns) */
void f_10527d80(void) {
  FTRACE(0x10527d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10527d81 mov ebp, esp */
  EBP = (ESP);
  /* 10527d83 push ecx */
  push32((uint32_t)(ECX));
  /* 10527d84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527d88 jne 0x10527d8c */
  if (!C.zf) goto L_10527d8c;
  /* 10527d8a jmp 0x10527de4 */
  goto L_10527de4;
L_10527d8c:;
  /* 10527d8c push 9 */
  push32((uint32_t)(0x9u));
  /* 10527d8e call 0x10527610 */
  push32(0x10527d93u); f_10527610();
  /* 10527d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527d99 push eax */
  push32((uint32_t)(EAX));
  /* 10527d9a call 0x10527f10 */
  push32(0x10527d9fu); f_10527f10();
  /* 10527d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527da2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10527da5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527da9 je 0x10527dc7 */
  if (C.zf) goto L_10527dc7;
  /* 10527dab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527dae push ecx */
  push32((uint32_t)(ECX));
  /* 10527daf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527db2 push edx */
  push32((uint32_t)(EDX));
  /* 10527db3 call 0x10527fd0 */
  push32(0x10527db8u); f_10527fd0();
  /* 10527db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527dbb push 9 */
  push32((uint32_t)(0x9u));
  /* 10527dbd call 0x105276b0 */
  push32(0x10527dc2u); f_105276b0();
  /* 10527dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527dc5 jmp 0x10527de4 */
  goto L_10527de4;
L_10527dc7:;
  /* 10527dc7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527dc9 call 0x105276b0 */
  push32(0x10527dceu); f_105276b0();
  /* 10527dce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527dd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527dd4 push eax */
  push32((uint32_t)(EAX));
  /* 10527dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10527dd7 mov ecx, dword ptr [0x10550ecc] */
  ECX = (r32((uint32_t)(0x10550ecc)));
  /* 10527ddd push ecx */
  push32((uint32_t)(ECX));
  /* 10527dde call dword ptr [0x10552384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552384))), 0x10527de4u);
L_10527de4:;
  /* 10527de4 mov esp, ebp */
  ESP = (EBP);
  /* 10527de6 pop ebp */
  EBP = (pop32());
  /* 10527de7 ret  */
  ESPCHK(0x10527d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007df0 @ 0x10527df0 (116 bytes, 34 insns) */
void f_10527df0(void) {
  FTRACE(0x10527df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10527df1 mov ebp, esp */
  EBP = (ESP);
  /* 10527df3 push ecx */
  push32((uint32_t)(ECX));
  /* 10527df4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10527dfb push 9 */
  push32((uint32_t)(0x9u));
  /* 10527dfd call 0x10527610 */
  push32(0x10527e02u); f_10527610();
  /* 10527e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527e05 call 0x10529500 */
  push32(0x10527e0au); f_10529500();
  /* 10527e0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10527e0c jge 0x10527e15 */
  if ((C.sf==C.of)) goto L_10527e15;
  /* 10527e0e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10527e15:;
  /* 10527e15 push 9 */
  push32((uint32_t)(0x9u));
  /* 10527e17 call 0x105276b0 */
  push32(0x10527e1cu); f_105276b0();
  /* 10527e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10527e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10527e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10527e23 mov eax, dword ptr [0x10550ecc] */
  EAX = (r32((uint32_t)(0x10550ecc)));
  /* 10527e28 push eax */
  push32((uint32_t)(EAX));
  /* 10527e29 call dword ptr [0x105523b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b0))), 0x10527e2fu);
  /* 10527e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10527e31 jne 0x10527e5d */
  if (!C.zf) goto L_10527e5d;
  /* 10527e33 call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x10527e39u);
  /* 10527e39 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527e3c jne 0x10527e56 */
  if (!C.zf) goto L_10527e56;
  /* 10527e3e call 0x1052baf0 */
  push32(0x10527e43u); f_1052baf0();
  /* 10527e43 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10527e49 call 0x1052bae0 */
  push32(0x10527e4eu); f_1052bae0();
  /* 10527e4e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10527e54 jmp 0x10527e5d */
  goto L_10527e5d;
L_10527e56:;
  /* 10527e56 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10527e5d:;
  /* 10527e5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527e60 mov esp, ebp */
  ESP = (EBP);
  /* 10527e62 pop ebp */
  EBP = (pop32());
  /* 10527e63 ret  */
  ESPCHK(0x10527df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e70 @ 0x10527e70 (10 bytes, 5 insns) */
void f_10527e70(void) {
  FTRACE(0x10527e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10527e71 mov ebp, esp */
  EBP = (ESP);
  /* 10527e73 call 0x10527df0 */
  push32(0x10527e78u); f_10527df0();
  /* 10527e78 pop ebp */
  EBP = (pop32());
  /* 10527e79 ret  */
  ESPCHK(0x10527e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x10527e80 (10 bytes, 5 insns) */
void f_10527e80(void) {
  FTRACE(0x10527e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10527e81 mov ebp, esp */
  EBP = (ESP);
  /* 10527e83 mov eax, dword ptr [0x1054dc94] */
  EAX = (r32((uint32_t)(0x1054dc94)));
  /* 10527e88 pop ebp */
  EBP = (pop32());
  /* 10527e89 ret  */
  ESPCHK(0x10527e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e90 @ 0x10527e90 (31 bytes, 11 insns) */
void f_10527e90(void) {
  FTRACE(0x10527e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10527e91 mov ebp, esp */
  EBP = (ESP);
  /* 10527e93 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527e9a jbe 0x10527ea0 */
  if ((C.cf||C.zf)) goto L_10527ea0;
  /* 10527e9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527e9e jmp 0x10527ead */
  goto L_10527ead;
L_10527ea0:;
  /* 10527ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527ea3 mov dword ptr [0x1054dc94], eax */
  w32((uint32_t)(0x1054dc94), (EAX));
  /* 10527ea8 mov eax, 1 */
  EAX = (0x1u);
L_10527ead:;
  /* 10527ead pop ebp */
  EBP = (pop32());
  /* 10527eae ret  */
  ESPCHK(0x10527e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007eb0 @ 0x10527eb0 (89 bytes, 20 insns) */
void f_10527eb0(void) {
  FTRACE(0x10527eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10527eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10527eb3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10527eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10527eba mov eax, dword ptr [0x10550ecc] */
  EAX = (r32((uint32_t)(0x10550ecc)));
  /* 10527ebf push eax */
  push32((uint32_t)(EAX));
  /* 10527ec0 call dword ptr [0x10552314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552314))), 0x10527ec6u);
  /* 10527ec6 mov dword ptr [0x10550ec8], eax */
  w32((uint32_t)(0x10550ec8), (EAX));
  /* 10527ecb cmp dword ptr [0x10550ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10550ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527ed2 jne 0x10527ed8 */
  if (!C.zf) goto L_10527ed8;
  /* 10527ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10527ed6 jmp 0x10527f07 */
  goto L_10527f07;
L_10527ed8:;
  /* 10527ed8 mov ecx, dword ptr [0x10550ec8] */
  ECX = (r32((uint32_t)(0x10550ec8)));
  /* 10527ede mov dword ptr [0x10550ebc], ecx */
  w32((uint32_t)(0x10550ebc), (ECX));
  /* 10527ee4 mov dword ptr [0x10550ec0], 0 */
  w32((uint32_t)(0x10550ec0), (0x0u));
  /* 10527eee mov dword ptr [0x10550ec4], 0 */
  w32((uint32_t)(0x10550ec4), (0x0u));
  /* 10527ef8 mov dword ptr [0x10550ea8], 0x10 */
  w32((uint32_t)(0x10550ea8), (0x10u));
  /* 10527f02 mov eax, 1 */
  EAX = (0x1u);
L_10527f07:;
  /* 10527f07 pop ebp */
  EBP = (pop32());
  /* 10527f08 ret  */
  ESPCHK(0x10527eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f10 @ 0x10527f10 (85 bytes, 29 insns) */
void f_10527f10(void) {
  FTRACE(0x10527f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10527f11 mov ebp, esp */
  EBP = (ESP);
  /* 10527f13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527f16 mov eax, dword ptr [0x10550ec4] */
  EAX = (r32((uint32_t)(0x10550ec4)));
  /* 10527f1b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10527f1e mov ecx, dword ptr [0x10550ec8] */
  ECX = (r32((uint32_t)(0x10550ec8)));
  /* 10527f24 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527f26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10527f29 mov edx, dword ptr [0x10550ec8] */
  EDX = (r32((uint32_t)(0x10550ec8)));
  /* 10527f2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10527f32:;
  /* 10527f32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527f35 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527f38 jae 0x10527f5f */
  if (!C.cf) goto L_10527f5f;
  /* 10527f3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527f3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527f40 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527f43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10527f46 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10527f4d jae 0x10527f54 */
  if (!C.cf) goto L_10527f54;
  /* 10527f4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527f52 jmp 0x10527f61 */
  goto L_10527f61;
L_10527f54:;
  /* 10527f54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527f57 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10527f5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10527f5d jmp 0x10527f32 */
  goto L_10527f32;
L_10527f5f:;
  /* 10527f5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10527f61:;
  /* 10527f61 mov esp, ebp */
  ESP = (EBP);
  /* 10527f63 pop ebp */
  EBP = (pop32());
  /* 10527f64 ret  */
  ESPCHK(0x10527f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f70 @ 0x10527f70 (95 bytes, 33 insns) */
void f_10527f70(void) {
  FTRACE(0x10527f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10527f71 mov ebp, esp */
  EBP = (ESP);
  /* 10527f73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527f79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527f7c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527f7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10527f82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527f85 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10527f88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10527f8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10527f90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527f93 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10527f95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527f98 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10527f9b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10527f9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10527f9f jne 0x10527fc1 */
  if (!C.zf) goto L_10527fc1;
  /* 10527fa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527fa4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10527fa7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10527fa9 jne 0x10527fc1 */
  if (!C.zf) goto L_10527fc1;
  /* 10527fab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10527fae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10527fb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10527fb6 je 0x10527fc1 */
  if (C.zf) goto L_10527fc1;
  /* 10527fb8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10527fbf jmp 0x10527fc8 */
  goto L_10527fc8;
L_10527fc1:;
  /* 10527fc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10527fc8:;
  /* 10527fc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10527fcb mov esp, ebp */
  ESP = (EBP);
  /* 10527fcd pop ebp */
  EBP = (pop32());
  /* 10527fce ret  */
  ESPCHK(0x10527f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fd0 @ 0x10527fd0 (1485 bytes, 453 insns) */
void f_10527fd0(void) {
  FTRACE(0x10527fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10527fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10527fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10527fd3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527fd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527fd9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10527fdc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10527fdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10527fe2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10527fe5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10527fe8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10527feb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10527fee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10527ff1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10527ff4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10527ff7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10527ffd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528000 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10528007 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052800a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052800d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528010 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10528013 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528016 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10528018 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052801b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1052801e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528021 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528024 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10528027 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1052802a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052802c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1052802f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528032 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10528035 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10528038 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052803b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1052803e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10528040 jne 0x10528168 */
  if (!C.zf) goto L_10528168;
  /* 10528046 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528049 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1052804c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052804f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10528052 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528056 jbe 0x1052805f */
  if ((C.cf||C.zf)) goto L_1052805f;
  /* 10528058 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1052805f:;
  /* 1052805f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528062 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528065 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10528068 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052806b jne 0x10528141 */
  if (!C.zf) goto L_10528141;
  /* 10528071 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528075 jae 0x105280d6 */
  if (!C.cf) goto L_105280d6;
  /* 10528077 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1052807c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052807f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10528081 not eax */
  EAX = (~(EAX));
  /* 10528083 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528086 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528089 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1052808d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052808f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528092 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528095 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10528099 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1052809c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052809f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 105280a2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105280a5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105280a8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105280ab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 105280ae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105280b1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105280b4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105280b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105280ba jne 0x105280d4 */
  if (!C.zf) goto L_105280d4;
  /* 105280bc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105280c1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105280c4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105280c6 not eax */
  EAX = (~(EAX));
  /* 105280c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105280cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105280cd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105280cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105280d2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105280d4:;
  /* 105280d4 jmp 0x10528141 */
  goto L_10528141;
L_105280d6:;
  /* 105280d6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105280d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105280dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105280e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105280e3 not edx */
  EDX = (~(EDX));
  /* 105280e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105280e8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105280eb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105280f2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105280f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105280f7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105280fa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10528101 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528104 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528107 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1052810a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1052810d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528110 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528113 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10528116 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528119 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052811c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10528120 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10528122 jne 0x10528141 */
  if (!C.zf) goto L_10528141;
  /* 10528124 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10528127 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052812a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1052812f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10528131 not edx */
  EDX = (~(EDX));
  /* 10528133 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528136 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10528139 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1052813b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052813e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10528141:;
  /* 10528141 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528144 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10528147 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1052814a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1052814d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10528150 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528153 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10528156 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528159 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1052815c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1052815f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528162 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528165 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10528168:;
  /* 10528168 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052816b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1052816e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528171 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10528174 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528178 jbe 0x10528181 */
  if ((C.cf||C.zf)) goto L_10528181;
  /* 1052817a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10528181:;
  /* 10528181 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10528184 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10528187 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10528189 jne 0x105282e5 */
  if (!C.zf) goto L_105282e5;
  /* 1052818f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528192 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528195 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10528198 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052819b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1052819e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105281a1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 105281a4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105281a8 jbe 0x105281b1 */
  if ((C.cf||C.zf)) goto L_105281b1;
  /* 105281aa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_105281b1:;
  /* 105281b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105281b4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105281b7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 105281ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105281bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 105281c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105281c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105281c6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105281ca jbe 0x105281d3 */
  if ((C.cf||C.zf)) goto L_105281d3;
  /* 105281cc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_105281d3:;
  /* 105281d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105281d6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105281d9 je 0x105282df */
  if (C.zf) goto L_105282df;
  /* 105281df mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105281e2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105281e5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 105281e8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105281eb jne 0x105282c1 */
  if (!C.zf) goto L_105282c1;
  /* 105281f1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105281f5 jae 0x10528256 */
  if (!C.cf) goto L_10528256;
  /* 105281f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105281fc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105281ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10528201 not edx */
  EDX = (~(EDX));
  /* 10528203 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528206 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528209 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1052820d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1052820f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528212 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528215 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10528219 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1052821c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052821f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10528222 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10528225 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528228 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052822b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1052822e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528231 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528234 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10528238 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052823a jne 0x10528254 */
  if (!C.zf) goto L_10528254;
  /* 1052823c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10528241 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528244 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10528246 not edx */
  EDX = (~(EDX));
  /* 10528248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052824b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052824d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1052824f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528252 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10528254:;
  /* 10528254 jmp 0x105282c1 */
  goto L_105282c1;
L_10528256:;
  /* 10528256 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528259 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052825c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10528261 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10528263 not eax */
  EAX = (~(EAX));
  /* 10528265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528268 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1052826b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10528272 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10528274 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528277 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1052827a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10528281 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528284 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528287 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1052828a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1052828d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528290 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528293 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10528296 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528299 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052829c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105282a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105282a2 jne 0x105282c1 */
  if (!C.zf) goto L_105282c1;
  /* 105282a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105282a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105282aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105282af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105282b1 not eax */
  EAX = (~(EAX));
  /* 105282b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105282b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105282b9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105282bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105282be mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_105282c1:;
  /* 105282c1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105282c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105282c7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105282ca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105282cd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105282d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105282d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105282d6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105282d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105282dc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_105282df:;
  /* 105282df mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 105282e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_105282e5:;
  /* 105282e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105282e8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105282eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105282ed jne 0x105282fb */
  if (!C.zf) goto L_105282fb;
  /* 105282ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105282f2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105282f5 je 0x1052840b */
  if (C.zf) goto L_1052840b;
L_105282fb:;
  /* 105282fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105282fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10528301 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10528304 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10528307 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052830a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052830d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10528310 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10528313 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528316 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528319 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1052831c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052831f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528322 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10528325 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528328 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1052832b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052832e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10528331 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528334 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528337 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1052833a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052833d jne 0x1052840b */
  if (!C.zf) goto L_1052840b;
  /* 10528343 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528347 jae 0x105283a4 */
  if (!C.cf) goto L_105283a4;
  /* 10528349 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1052834c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052834f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10528353 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528356 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528359 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1052835c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1052835f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528362 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528365 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10528368 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052836a jne 0x10528382 */
  if (!C.zf) goto L_10528382;
  /* 1052836c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10528371 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528374 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10528376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528379 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052837b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1052837d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528380 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10528382:;
  /* 10528382 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10528387 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052838a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1052838c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052838f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528392 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10528396 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10528398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052839b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1052839e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 105283a2 jmp 0x1052840b */
  goto L_1052840b;
L_105283a4:;
  /* 105283a4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105283a7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105283aa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 105283ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105283b1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105283b4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105283b7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 105283ba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105283bd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105283c0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 105283c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105283c5 jne 0x105283e2 */
  if (!C.zf) goto L_105283e2;
  /* 105283c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105283ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105283cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105283d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105283d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105283d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105283da or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105283dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105283df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105283e2:;
  /* 105283e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105283e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105283e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105283ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105283ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105283f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 105283f5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105283fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105283fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528401 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10528404 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1052840b:;
  /* 1052840b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052840e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528411 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10528413 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528416 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528419 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052841c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1052841f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10528422 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10528424 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052842a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1052842c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052842f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528432 jne 0x10528599 */
  if (!C.zf) goto L_10528599;
  /* 10528438 cmp dword ptr [0x10550ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10550ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052843f je 0x10528588 */
  if (C.zf) goto L_10528588;
  /* 10528445 mov eax, dword ptr [0x10550eb8] */
  EAX = (r32((uint32_t)(0x10550eb8)));
  /* 1052844a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1052844d mov ecx, dword ptr [0x10550ec0] */
  ECX = (r32((uint32_t)(0x10550ec0)));
  /* 10528453 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10528456 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528458 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1052845b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10528460 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10528465 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528468 push eax */
  push32((uint32_t)(EAX));
  /* 10528469 call dword ptr [0x10552330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552330))), 0x1052846fu);
  /* 1052846f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10528474 mov ecx, dword ptr [0x10550eb8] */
  ECX = (r32((uint32_t)(0x10550eb8)));
  /* 1052847a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1052847c mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 10528481 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10528484 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10528486 mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 1052848c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1052848f mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 10528494 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10528497 mov edx, dword ptr [0x10550eb8] */
  EDX = (r32((uint32_t)(0x10550eb8)));
  /* 1052849d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 105284a8 mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 105284ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105284b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 105284b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105284b6 mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 105284bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105284be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 105284c1 mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 105284c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 105284ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 105284ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105284d0 jne 0x105284e6 */
  if (!C.zf) goto L_105284e6;
  /* 105284d2 mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 105284d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 105284db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 105284dd mov ecx, dword ptr [0x10550ec0] */
  ECX = (r32((uint32_t)(0x10550ec0)));
  /* 105284e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_105284e6:;
  /* 105284e6 mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 105284ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105284f0 jne 0x10528588 */
  if (!C.zf) goto L_10528588;
  /* 105284f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 105284fb push 0 */
  push32((uint32_t)(0x0u));
  /* 105284fd mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 10528502 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10528505 push ecx */
  push32((uint32_t)(ECX));
  /* 10528506 call dword ptr [0x10552330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552330))), 0x1052850cu);
  /* 1052850c mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 10528512 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10528515 push eax */
  push32((uint32_t)(EAX));
  /* 10528516 push 0 */
  push32((uint32_t)(0x0u));
  /* 10528518 mov ecx, dword ptr [0x10550ecc] */
  ECX = (r32((uint32_t)(0x10550ecc)));
  /* 1052851e push ecx */
  push32((uint32_t)(ECX));
  /* 1052851f call dword ptr [0x10552384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552384))), 0x10528525u);
  /* 10528525 mov edx, dword ptr [0x10550ec4] */
  EDX = (r32((uint32_t)(0x10550ec4)));
  /* 1052852b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052852e mov eax, dword ptr [0x10550ec8] */
  EAX = (r32((uint32_t)(0x10550ec8)));
  /* 10528533 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528535 mov ecx, dword ptr [0x10550ec0] */
  ECX = (r32((uint32_t)(0x10550ec0)));
  /* 1052853b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052853e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528540 push eax */
  push32((uint32_t)(EAX));
  /* 10528541 mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 10528547 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052854a push edx */
  push32((uint32_t)(EDX));
  /* 1052854b mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 10528550 push eax */
  push32((uint32_t)(EAX));
  /* 10528551 call 0x1052bb00 */
  push32(0x10528556u); f_1052bb00();
  /* 10528556 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10528559 mov ecx, dword ptr [0x10550ec4] */
  ECX = (r32((uint32_t)(0x10550ec4)));
  /* 1052855f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528562 mov dword ptr [0x10550ec4], ecx */
  w32((uint32_t)(0x10550ec4), (ECX));
  /* 10528568 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052856b cmp edx, dword ptr [0x10550ec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10550ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528571 jbe 0x1052857c */
  if ((C.cf||C.zf)) goto L_1052857c;
  /* 10528573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528576 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528579 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1052857c:;
  /* 1052857c mov ecx, dword ptr [0x10550ec8] */
  ECX = (r32((uint32_t)(0x10550ec8)));
  /* 10528582 mov dword ptr [0x10550ebc], ecx */
  w32((uint32_t)(0x10550ebc), (ECX));
L_10528588:;
  /* 10528588 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052858b mov dword ptr [0x10550ec0], edx */
  w32((uint32_t)(0x10550ec0), (EDX));
  /* 10528591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528594 mov dword ptr [0x10550eb8], eax */
  w32((uint32_t)(0x10550eb8), (EAX));
L_10528599:;
  /* 10528599 mov esp, ebp */
  ESP = (EBP);
  /* 1052859b pop ebp */
  EBP = (pop32());
  /* 1052859c ret  */
  ESPCHK(0x10527fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085a0 @ 0x105285a0 (1334 bytes, 427 insns) */
void f_105285a0(void) {
  FTRACE(0x105285a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105285a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105285a1 mov ebp, esp */
  EBP = (ESP);
  /* 105285a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105285a6 push esi */
  push32((uint32_t)(ESI));
  /* 105285a7 mov eax, dword ptr [0x10550ec4] */
  EAX = (r32((uint32_t)(0x10550ec4)));
  /* 105285ac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105285af mov ecx, dword ptr [0x10550ec8] */
  ECX = (r32((uint32_t)(0x10550ec8)));
  /* 105285b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105285b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105285ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105285bd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105285c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 105285c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 105285c6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105285c9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 105285cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105285cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105285d2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105285d6 jge 0x105285ec */
  if ((C.sf==C.of)) goto L_105285ec;
  /* 105285d8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105285db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105285de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105285e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 105285e3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 105285ea jmp 0x10528601 */
  goto L_10528601;
L_105285ec:;
  /* 105285ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105285f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105285f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105285f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105285fc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105285fe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10528601:;
  /* 10528601 mov ecx, dword ptr [0x10550ebc] */
  ECX = (r32((uint32_t)(0x10550ebc)));
  /* 10528607 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1052860a:;
  /* 1052860a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052860d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528610 jae 0x10528636 */
  if (!C.cf) goto L_10528636;
  /* 10528612 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528615 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10528618 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1052861a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052861d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10528620 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10528623 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10528625 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10528627 je 0x1052862b */
  if (C.zf) goto L_1052862b;
  /* 10528629 jmp 0x10528636 */
  goto L_10528636;
L_1052862b:;
  /* 1052862b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052862e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528631 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10528634 jmp 0x1052860a */
  goto L_1052860a;
L_10528636:;
  /* 10528636 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528639 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052863c jne 0x1052871d */
  if (!C.zf) goto L_1052871d;
  /* 10528642 mov eax, dword ptr [0x10550ec8] */
  EAX = (r32((uint32_t)(0x10550ec8)));
  /* 10528647 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1052864a:;
  /* 1052864a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052864d cmp ecx, dword ptr [0x10550ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528653 jae 0x10528679 */
  if (!C.cf) goto L_10528679;
  /* 10528655 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528658 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052865b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1052865d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528660 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10528663 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10528666 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10528668 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052866a je 0x1052866e */
  if (C.zf) goto L_1052866e;
  /* 1052866c jmp 0x10528679 */
  goto L_10528679;
L_1052866e:;
  /* 1052866e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528671 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528674 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10528677 jmp 0x1052864a */
  goto L_1052864a;
L_10528679:;
  /* 10528679 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052867c cmp ecx, dword ptr [0x10550ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528682 jne 0x1052871d */
  if (!C.zf) goto L_1052871d;
L_10528688:;
  /* 10528688 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052868b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052868e jae 0x105286a6 */
  if (!C.cf) goto L_105286a6;
  /* 10528690 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528693 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528697 je 0x1052869b */
  if (C.zf) goto L_1052869b;
  /* 10528699 jmp 0x105286a6 */
  goto L_105286a6;
L_1052869b:;
  /* 1052869b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052869e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105286a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105286a4 jmp 0x10528688 */
  goto L_10528688;
L_105286a6:;
  /* 105286a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105286a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105286ac jne 0x105286f7 */
  if (!C.zf) goto L_105286f7;
  /* 105286ae mov eax, dword ptr [0x10550ec8] */
  EAX = (r32((uint32_t)(0x10550ec8)));
  /* 105286b3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_105286b6:;
  /* 105286b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105286b9 cmp ecx, dword ptr [0x10550ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105286bf jae 0x105286d7 */
  if (!C.cf) goto L_105286d7;
  /* 105286c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105286c4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105286c8 je 0x105286cc */
  if (C.zf) goto L_105286cc;
  /* 105286ca jmp 0x105286d7 */
  goto L_105286d7;
L_105286cc:;
  /* 105286cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105286cf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105286d2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105286d5 jmp 0x105286b6 */
  goto L_105286b6;
L_105286d7:;
  /* 105286d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105286da cmp ecx, dword ptr [0x10550ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105286e0 jne 0x105286f7 */
  if (!C.zf) goto L_105286f7;
  /* 105286e2 call 0x10528ae0 */
  push32(0x105286e7u); f_10528ae0();
  /* 105286e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105286ea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105286ee jne 0x105286f7 */
  if (!C.zf) goto L_105286f7;
  /* 105286f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105286f2 jmp 0x10528ad1 */
  goto L_10528ad1;
L_105286f7:;
  /* 105286f7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105286fa push edx */
  push32((uint32_t)(EDX));
  /* 105286fb call 0x10528bf0 */
  push32(0x10528700u); f_10528bf0();
  /* 10528700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10528703 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528706 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10528709 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1052870b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052870e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10528711 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528714 jne 0x1052871d */
  if (!C.zf) goto L_1052871d;
  /* 10528716 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10528718 jmp 0x10528ad1 */
  goto L_10528ad1;
L_1052871d:;
  /* 1052871d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528720 mov dword ptr [0x10550ebc], edx */
  w32((uint32_t)(0x10550ebc), (EDX));
  /* 10528726 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528729 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1052872c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1052872f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528732 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10528734 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10528737 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052873b je 0x10528760 */
  if (C.zf) goto L_10528760;
  /* 1052873d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528740 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528743 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10528746 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1052874a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052874d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528750 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10528753 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1052875a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1052875c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052875e jne 0x10528795 */
  if (!C.zf) goto L_10528795;
L_10528760:;
  /* 10528760 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10528767:;
  /* 10528767 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052876a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1052876d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10528770 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10528774 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528777 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1052877a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1052877d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10528784 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10528786 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10528788 jne 0x10528795 */
  if (!C.zf) goto L_10528795;
  /* 1052878a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052878d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528790 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10528793 jmp 0x10528767 */
  goto L_10528767;
L_10528795:;
  /* 10528795 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528798 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052879e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105287a1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 105287a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105287ab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105287b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105287b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105287b8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105287bb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 105287bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105287c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105287c6 jne 0x105287e2 */
  if (!C.zf) goto L_105287e2;
  /* 105287c8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 105287cf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105287d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105287d5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105287d8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 105287df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_105287e2:;
  /* 105287e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105287e6 jl 0x105287fb */
  if ((C.sf!=C.of)) goto L_105287fb;
  /* 105287e8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105287eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105287ed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105287f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105287f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105287f6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105287f9 jmp 0x105287e2 */
  goto L_105287e2;
L_105287fb:;
  /* 105287fb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105287fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528801 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10528805 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10528808 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052880b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1052880d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528810 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10528813 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10528816 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10528819 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052881c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1052881f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528823 jle 0x1052882c */
  if ((C.zf||C.sf!=C.of)) goto L_1052882c;
  /* 10528825 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1052882c:;
  /* 1052882c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052882f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528832 je 0x10528a50 */
  if (C.zf) goto L_10528a50;
  /* 10528838 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052883b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052883e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10528841 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528844 jne 0x1052891a */
  if (!C.zf) goto L_1052891a;
  /* 1052884a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052884e jge 0x105288af */
  if ((C.sf==C.of)) goto L_105288af;
  /* 10528850 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10528855 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528858 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1052885a not eax */
  EAX = (~(EAX));
  /* 1052885c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052885f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528862 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10528866 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10528868 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052886b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1052886e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10528872 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528875 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528878 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1052887b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1052887e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528881 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528884 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10528887 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1052888a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052888d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10528891 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10528893 jne 0x105288ad */
  if (!C.zf) goto L_105288ad;
  /* 10528895 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1052889a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052889d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1052889f not eax */
  EAX = (~(EAX));
  /* 105288a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105288a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105288a6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105288a8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105288ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105288ad:;
  /* 105288ad jmp 0x1052891a */
  goto L_1052891a;
L_105288af:;
  /* 105288af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105288b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105288b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105288ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105288bc not edx */
  EDX = (~(EDX));
  /* 105288be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105288c1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105288c4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 105288cb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105288cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105288d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105288d3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 105288da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105288dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105288e0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105288e3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105288e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105288e9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105288ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105288ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105288f2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105288f5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105288f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105288fb jne 0x1052891a */
  if (!C.zf) goto L_1052891a;
  /* 105288fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528900 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528903 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10528908 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1052890a not edx */
  EDX = (~(EDX));
  /* 1052890c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052890f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10528912 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10528914 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528917 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1052891a:;
  /* 1052891a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052891d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10528920 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528923 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10528926 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10528929 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052892c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1052892f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528932 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10528935 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10528938 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052893c je 0x10528a50 */
  if (C.zf) goto L_10528a50;
  /* 10528942 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528948 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1052894b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052894e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528951 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10528954 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10528957 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1052895a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052895d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10528960 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10528963 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10528966 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528969 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1052896c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052896f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10528972 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528975 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10528978 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052897b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052897e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10528981 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528984 jne 0x10528a50 */
  if (!C.zf) goto L_10528a50;
  /* 1052898a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052898e jge 0x105289ea */
  if ((C.sf==C.of)) goto L_105289ea;
  /* 10528990 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528993 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528996 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1052899a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1052899d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105289a0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105289a3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105289a5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105289a8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105289ab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 105289ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105289b0 jne 0x105289c8 */
  if (!C.zf) goto L_105289c8;
  /* 105289b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105289b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105289ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105289bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105289bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105289c1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105289c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105289c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105289c8:;
  /* 105289c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105289cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105289d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105289d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105289d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 105289d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105289dc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105289de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105289e1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105289e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105289e8 jmp 0x10528a50 */
  goto L_10528a50;
L_105289ea:;
  /* 105289ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 105289ed add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105289f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105289f4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 105289f7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105289fa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 105289fd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105289ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528a02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528a05 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10528a08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10528a0a jne 0x10528a27 */
  if (!C.zf) goto L_10528a27;
  /* 10528a0c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528a0f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528a12 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10528a17 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10528a19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528a1c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10528a1f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10528a21 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528a24 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10528a27:;
  /* 10528a27 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528a2a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528a2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10528a32 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10528a34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528a37 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528a3a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10528a41 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10528a43 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528a46 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528a49 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10528a50:;
  /* 10528a50 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528a54 je 0x10528a6a */
  if (C.zf) goto L_10528a6a;
  /* 10528a56 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528a59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10528a5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10528a5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528a61 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528a64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10528a67 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10528a6a:;
  /* 10528a6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528a6d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528a70 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10528a73 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528a76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528a79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528a7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10528a7e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528a81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528a84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528a87 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528a8a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10528a8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528a90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10528a92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528a95 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10528a97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528a9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528a9d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10528a9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10528aa1 jne 0x10528ac3 */
  if (!C.zf) goto L_10528ac3;
  /* 10528aa3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528aa6 cmp eax, dword ptr [0x10550ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10550ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528aac jne 0x10528ac3 */
  if (!C.zf) goto L_10528ac3;
  /* 10528aae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528ab1 cmp ecx, dword ptr [0x10550eb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550eb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528ab7 jne 0x10528ac3 */
  if (!C.zf) goto L_10528ac3;
  /* 10528ab9 mov dword ptr [0x10550ec0], 0 */
  w32((uint32_t)(0x10550ec0), (0x0u));
L_10528ac3:;
  /* 10528ac3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10528ac6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528ac9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10528acb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528ace add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10528ad1:;
  /* 10528ad1 pop esi */
  ESI = (pop32());
  /* 10528ad2 mov esp, ebp */
  ESP = (EBP);
  /* 10528ad4 pop ebp */
  EBP = (pop32());
  /* 10528ad5 ret  */
  ESPCHK(0x105285a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x10528ae0 (271 bytes, 78 insns) */
void f_10528ae0(void) {
  FTRACE(0x10528ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10528ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10528ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10528ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10528ae4 mov eax, dword ptr [0x10550ec4] */
  EAX = (r32((uint32_t)(0x10550ec4)));
  /* 10528ae9 cmp eax, dword ptr [0x10550ea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10550ea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528aef jne 0x10528b3b */
  if (!C.zf) goto L_10528b3b;
  /* 10528af1 mov ecx, dword ptr [0x10550ea8] */
  ECX = (r32((uint32_t)(0x10550ea8)));
  /* 10528af7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528afa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10528afd push ecx */
  push32((uint32_t)(ECX));
  /* 10528afe mov edx, dword ptr [0x10550ec8] */
  EDX = (r32((uint32_t)(0x10550ec8)));
  /* 10528b04 push edx */
  push32((uint32_t)(EDX));
  /* 10528b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10528b07 mov eax, dword ptr [0x10550ecc] */
  EAX = (r32((uint32_t)(0x10550ecc)));
  /* 10528b0c push eax */
  push32((uint32_t)(EAX));
  /* 10528b0d call dword ptr [0x1055231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055231c))), 0x10528b13u);
  /* 10528b13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10528b16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528b1a jne 0x10528b23 */
  if (!C.zf) goto L_10528b23;
  /* 10528b1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10528b1e jmp 0x10528beb */
  goto L_10528beb;
L_10528b23:;
  /* 10528b23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528b26 mov dword ptr [0x10550ec8], ecx */
  w32((uint32_t)(0x10550ec8), (ECX));
  /* 10528b2c mov edx, dword ptr [0x10550ea8] */
  EDX = (r32((uint32_t)(0x10550ea8)));
  /* 10528b32 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528b35 mov dword ptr [0x10550ea8], edx */
  w32((uint32_t)(0x10550ea8), (EDX));
L_10528b3b:;
  /* 10528b3b mov eax, dword ptr [0x10550ec4] */
  EAX = (r32((uint32_t)(0x10550ec4)));
  /* 10528b40 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10528b43 mov ecx, dword ptr [0x10550ec8] */
  ECX = (r32((uint32_t)(0x10550ec8)));
  /* 10528b49 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528b4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10528b4e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10528b53 push 8 */
  push32((uint32_t)(0x8u));
  /* 10528b55 mov edx, dword ptr [0x10550ecc] */
  EDX = (r32((uint32_t)(0x10550ecc)));
  /* 10528b5b push edx */
  push32((uint32_t)(EDX));
  /* 10528b5c call dword ptr [0x10552314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552314))), 0x10528b62u);
  /* 10528b62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528b65 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10528b68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528b6b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528b6f jne 0x10528b75 */
  if (!C.zf) goto L_10528b75;
  /* 10528b71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10528b73 jmp 0x10528beb */
  goto L_10528beb;
L_10528b75:;
  /* 10528b75 push 4 */
  push32((uint32_t)(0x4u));
  /* 10528b77 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10528b7c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10528b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10528b83 call dword ptr [0x1055230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055230c))), 0x10528b89u);
  /* 10528b89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528b8c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10528b8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528b92 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528b96 jne 0x10528bb2 */
  if (!C.zf) goto L_10528bb2;
  /* 10528b98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528b9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10528b9e push ecx */
  push32((uint32_t)(ECX));
  /* 10528b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10528ba1 mov edx, dword ptr [0x10550ecc] */
  EDX = (r32((uint32_t)(0x10550ecc)));
  /* 10528ba7 push edx */
  push32((uint32_t)(EDX));
  /* 10528ba8 call dword ptr [0x10552384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552384))), 0x10528baeu);
  /* 10528bae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10528bb0 jmp 0x10528beb */
  goto L_10528beb;
L_10528bb2:;
  /* 10528bb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528bb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10528bbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528bbe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10528bc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528bc8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10528bcf mov eax, dword ptr [0x10550ec4] */
  EAX = (r32((uint32_t)(0x10550ec4)));
  /* 10528bd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528bd7 mov dword ptr [0x10550ec4], eax */
  w32((uint32_t)(0x10550ec4), (EAX));
  /* 10528bdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528bdf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10528be2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10528be8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10528beb:;
  /* 10528beb mov esp, ebp */
  ESP = (EBP);
  /* 10528bed pop ebp */
  EBP = (pop32());
  /* 10528bee ret  */
  ESPCHK(0x10528ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bf0 @ 0x10528bf0 (494 bytes, 149 insns) */
void f_10528bf0(void) {
  FTRACE(0x10528bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10528bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10528bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10528bf3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528bf9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10528bfc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10528bff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528c02 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10528c05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10528c08 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10528c0f:;
  /* 10528c0f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528c13 jl 0x10528c28 */
  if ((C.sf!=C.of)) goto L_10528c28;
  /* 10528c15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10528c18 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10528c1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10528c1d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528c20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528c23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10528c26 jmp 0x10528c0f */
  goto L_10528c0f;
L_10528c28:;
  /* 10528c28 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528c2b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10528c31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528c34 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10528c3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10528c3e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10528c45 jmp 0x10528c50 */
  goto L_10528c50;
L_10528c47:;
  /* 10528c47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528c4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528c4d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10528c50:;
  /* 10528c50 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528c54 jge 0x10528c76 */
  if ((C.sf==C.of)) goto L_10528c76;
  /* 10528c56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528c59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10528c5c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10528c5f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10528c62 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528c65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528c68 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10528c6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528c6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528c71 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10528c74 jmp 0x10528c47 */
  goto L_10528c47;
L_10528c76:;
  /* 10528c76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528c79 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10528c7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528c7f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10528c82 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528c84 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10528c87 push 4 */
  push32((uint32_t)(0x4u));
  /* 10528c89 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10528c8e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10528c93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528c96 push edx */
  push32((uint32_t)(EDX));
  /* 10528c97 call dword ptr [0x1055230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055230c))), 0x10528c9du);
  /* 10528c9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10528c9f jne 0x10528ca9 */
  if (!C.zf) goto L_10528ca9;
  /* 10528ca1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10528ca4 jmp 0x10528dda */
  goto L_10528dda;
L_10528ca9:;
  /* 10528ca9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528cac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528cb1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10528cb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528cb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10528cba jmp 0x10528cc8 */
  goto L_10528cc8;
L_10528cbc:;
  /* 10528cbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528cbf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528cc5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10528cc8:;
  /* 10528cc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528ccb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528cce ja 0x10528d2d */
  if ((!C.cf&&!C.zf)) goto L_10528d2d;
  /* 10528cd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528cd3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10528cda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528cdd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10528ce7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528cea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528ced mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10528cf0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528cf3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10528cf9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528cfc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528d02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528d05 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10528d08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528d0b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528d11 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528d14 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10528d17 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528d1a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528d1f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10528d22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10528d25 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10528d2b jmp 0x10528cbc */
  goto L_10528cbc;
L_10528d2d:;
  /* 10528d2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10528d30 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528d36 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10528d39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528d3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528d3f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528d42 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10528d45 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528d48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10528d4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10528d4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528d51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528d54 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10528d57 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528d5a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528d5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528d60 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10528d63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528d66 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10528d69 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10528d6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528d6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528d72 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10528d75 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528d78 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528d7b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10528d83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528d86 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528d89 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10528d94 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528d97 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10528d9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528d9e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10528da1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10528da4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528da7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10528daa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10528dac jne 0x10528dbd */
  if (!C.zf) goto L_10528dbd;
  /* 10528dae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528db1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10528db4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10528db7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528dba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10528dbd:;
  /* 10528dbd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10528dc2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528dc5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10528dc7 not edx */
  EDX = (~(EDX));
  /* 10528dc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528dcc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10528dcf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10528dd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528dd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10528dd7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10528dda:;
  /* 10528dda mov esp, ebp */
  ESP = (EBP);
  /* 10528ddc pop ebp */
  EBP = (pop32());
  /* 10528ddd ret  */
  ESPCHK(0x10528bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008de0 @ 0x10528de0 (1515 bytes, 489 insns) */
void f_10528de0(void) {
  FTRACE(0x10528de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10528de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10528de1 mov ebp, esp */
  EBP = (ESP);
  /* 10528de3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528de6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10528de9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528dec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10528dee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10528df1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528df4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10528df7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10528dfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528dfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10528e00 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528e03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10528e06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10528e09 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10528e0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10528e0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528e12 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10528e18 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528e1b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10528e22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10528e25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10528e28 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528e2b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10528e2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528e31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10528e33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528e36 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10528e39 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528e3c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528e3f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10528e42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528e45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10528e47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10528e4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10528e4d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528e50 jle 0x10529106 */
  if ((C.zf||C.sf!=C.of)) goto L_10529106;
  /* 10528e56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528e59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10528e5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10528e5e jne 0x10528e6b */
  if (!C.zf) goto L_10528e6b;
  /* 10528e60 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528e63 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528e66 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528e69 jle 0x10528e72 */
  if ((C.zf||C.sf!=C.of)) goto L_10528e72;
L_10528e6b:;
  /* 10528e6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10528e6d jmp 0x105293c7 */
  goto L_105293c7;
L_10528e72:;
  /* 10528e72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528e75 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10528e78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528e7b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10528e7e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528e82 jbe 0x10528e8b */
  if ((C.cf||C.zf)) goto L_10528e8b;
  /* 10528e84 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10528e8b:;
  /* 10528e8b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528e8e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528e91 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10528e94 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528e97 jne 0x10528f6d */
  if (!C.zf) goto L_10528f6d;
  /* 10528e9d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528ea1 jae 0x10528f02 */
  if (!C.cf) goto L_10528f02;
  /* 10528ea3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10528ea8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528eab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10528ead not edx */
  EDX = (~(EDX));
  /* 10528eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528eb2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528eb5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10528eb9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10528ebb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528ebe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528ec1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10528ec5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528ec8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528ecb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10528ece sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10528ed1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528ed4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528ed7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10528eda mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528edd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528ee0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10528ee4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10528ee6 jne 0x10528f00 */
  if (!C.zf) goto L_10528f00;
  /* 10528ee8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10528eed mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528ef0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10528ef2 not edx */
  EDX = (~(EDX));
  /* 10528ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528ef7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10528ef9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10528efb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528efe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10528f00:;
  /* 10528f00 jmp 0x10528f6d */
  goto L_10528f6d;
L_10528f02:;
  /* 10528f02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528f05 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528f08 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10528f0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10528f0f not eax */
  EAX = (~(EAX));
  /* 10528f11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528f14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528f17 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10528f1e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10528f20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10528f23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528f26 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10528f2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528f30 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528f33 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10528f36 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10528f39 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528f3c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528f3f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10528f42 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10528f45 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528f48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10528f4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10528f4e jne 0x10528f6d */
  if (!C.zf) goto L_10528f6d;
  /* 10528f50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528f53 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528f56 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10528f5b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10528f5d not eax */
  EAX = (~(EAX));
  /* 10528f5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528f62 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10528f65 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10528f67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10528f6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10528f6d:;
  /* 10528f6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528f70 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10528f73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528f76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10528f79 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10528f7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528f7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10528f82 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528f85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10528f88 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10528f8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10528f8e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528f91 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528f94 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10528f97 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528f9b jle 0x105290e7 */
  if ((C.zf||C.sf!=C.of)) goto L_105290e7;
  /* 10528fa1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10528fa4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10528fa7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10528faa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10528fad sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10528fb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10528fb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10528fb6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10528fba jbe 0x10528fc3 */
  if ((C.cf||C.zf)) goto L_10528fc3;
  /* 10528fbc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10528fc3:;
  /* 10528fc3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10528fc6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10528fc9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10528fcc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10528fcf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528fd2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528fd5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10528fd8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10528fdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528fde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528fe1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10528fe4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10528fe7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528fea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10528fed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528ff0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10528ff3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528ff6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10528ff9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528ffc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10528fff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10529002 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529005 jne 0x105290d3 */
  if (!C.zf) goto L_105290d3;
  /* 1052900b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052900f jae 0x1052906c */
  if (!C.cf) goto L_1052906c;
  /* 10529011 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529014 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529017 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1052901b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052901e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529021 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10529024 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10529027 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052902a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052902d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10529030 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10529032 jne 0x1052904a */
  if (!C.zf) goto L_1052904a;
  /* 10529034 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10529039 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052903c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1052903e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529041 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10529043 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10529045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529048 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1052904a:;
  /* 1052904a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1052904f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10529052 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10529054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529057 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052905a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1052905e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10529060 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529063 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529066 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1052906a jmp 0x105290d3 */
  goto L_105290d3;
L_1052906c:;
  /* 1052906c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052906f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529072 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10529076 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529079 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052907c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1052907f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10529082 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529085 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529088 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1052908b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052908d jne 0x105290aa */
  if (!C.zf) goto L_105290aa;
  /* 1052908f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10529092 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529095 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1052909a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1052909c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052909f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105290a2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105290a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105290a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_105290aa:;
  /* 105290aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105290ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105290b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 105290b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 105290b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105290ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105290bd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 105290c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105290c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105290c9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105290cc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_105290d3:;
  /* 105290d3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105290d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105290d9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105290db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105290de add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105290e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105290e4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_105290e7:;
  /* 105290e7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105290ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105290ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105290f0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105290f2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105290f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105290f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105290fb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105290fe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10529101 jmp 0x105293c2 */
  goto L_105293c2;
L_10529106:;
  /* 10529106 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10529109 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052910c jge 0x105293c2 */
  if ((C.sf==C.of)) goto L_105293c2;
  /* 10529112 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10529115 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529118 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052911b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1052911d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10529120 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529123 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10529126 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529129 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1052912c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052912f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529132 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10529135 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529138 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052913b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1052913e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529141 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10529144 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529147 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1052914a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052914e jbe 0x10529157 */
  if ((C.cf||C.zf)) goto L_10529157;
  /* 10529150 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10529157:;
  /* 10529157 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052915a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1052915d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052915f jne 0x105292a0 */
  if (!C.zf) goto L_105292a0;
  /* 10529165 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10529168 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1052916b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052916e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10529171 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529175 jbe 0x1052917e */
  if ((C.cf||C.zf)) goto L_1052917e;
  /* 10529177 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1052917e:;
  /* 1052917e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10529181 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10529184 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10529187 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052918a jne 0x10529260 */
  if (!C.zf) goto L_10529260;
  /* 10529190 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529194 jae 0x105291f5 */
  if (!C.cf) goto L_105291f5;
  /* 10529196 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1052919b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052919e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105291a0 not edx */
  EDX = (~(EDX));
  /* 105291a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105291a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105291a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 105291ac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105291ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105291b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105291b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 105291b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105291bb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105291be mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 105291c1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105291c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105291c7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105291ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 105291cd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105291d0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105291d3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105291d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105291d9 jne 0x105291f3 */
  if (!C.zf) goto L_105291f3;
  /* 105291db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105291e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105291e3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105291e5 not edx */
  EDX = (~(EDX));
  /* 105291e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105291ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105291ec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 105291ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105291f1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105291f3:;
  /* 105291f3 jmp 0x10529260 */
  goto L_10529260;
L_105291f5:;
  /* 105291f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105291f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105291fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10529200 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10529202 not eax */
  EAX = (~(EAX));
  /* 10529204 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529207 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052920a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10529211 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10529213 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529216 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529219 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10529220 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529223 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529226 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10529229 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1052922c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052922f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529232 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10529235 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529238 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052923b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1052923f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10529241 jne 0x10529260 */
  if (!C.zf) goto L_10529260;
  /* 10529243 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10529246 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529249 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1052924e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10529250 not eax */
  EAX = (~(EAX));
  /* 10529252 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529255 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10529258 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1052925a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052925d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10529260:;
  /* 10529260 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10529263 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10529266 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10529269 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1052926c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1052926f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10529272 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10529275 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10529278 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1052927b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1052927e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529281 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529284 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10529287 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052928a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1052928d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529290 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10529293 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529297 jbe 0x105292a0 */
  if ((C.cf||C.zf)) goto L_105292a0;
  /* 10529299 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_105292a0:;
  /* 105292a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105292a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105292a6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 105292a9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105292ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105292af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105292b2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105292b5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 105292b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105292bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105292be mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105292c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105292c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105292c7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 105292ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105292cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105292d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105292d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 105292d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105292d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105292dc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 105292df cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105292e2 jne 0x105293ae */
  if (!C.zf) goto L_105293ae;
  /* 105292e8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105292ec jae 0x10529348 */
  if (!C.cf) goto L_10529348;
  /* 105292ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105292f1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105292f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 105292f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105292fb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105292fe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10529301 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10529303 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529306 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529309 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1052930c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052930e jne 0x10529326 */
  if (!C.zf) goto L_10529326;
  /* 10529310 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10529315 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529318 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1052931a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052931d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052931f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10529321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529324 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10529326:;
  /* 10529326 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1052932b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052932e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10529330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529333 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529336 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1052933a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1052933c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052933f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529342 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10529346 jmp 0x105293ae */
  goto L_105293ae;
L_10529348:;
  /* 10529348 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052934b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052934e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10529352 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529355 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529358 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1052935b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1052935d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529360 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529363 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10529366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10529368 jne 0x10529385 */
  if (!C.zf) goto L_10529385;
  /* 1052936a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052936d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529370 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10529375 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10529377 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052937a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1052937d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1052937f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529382 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10529385:;
  /* 10529385 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529388 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052938b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10529390 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10529392 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529395 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10529398 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1052939f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105293a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105293a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105293a7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_105293ae:;
  /* 105293ae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105293b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105293b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 105293b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105293b9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105293bc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105293bf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_105293c2:;
  /* 105293c2 mov eax, 1 */
  EAX = (0x1u);
L_105293c7:;
  /* 105293c7 mov esp, ebp */
  ESP = (EBP);
  /* 105293c9 pop ebp */
  EBP = (pop32());
  /* 105293ca ret  */
  ESPCHK(0x10528de0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x105293d0 (304 bytes, 79 insns) */
void f_105293d0(void) {
  FTRACE(0x105293d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105293d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105293d1 mov ebp, esp */
  EBP = (ESP);
  /* 105293d3 push ecx */
  push32((uint32_t)(ECX));
  /* 105293d4 cmp dword ptr [0x10550ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10550ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105293db je 0x105294fc */
  if (C.zf) goto L_105294fc;
  /* 105293e1 mov eax, dword ptr [0x10550eb8] */
  EAX = (r32((uint32_t)(0x10550eb8)));
  /* 105293e6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 105293e9 mov ecx, dword ptr [0x10550ec0] */
  ECX = (r32((uint32_t)(0x10550ec0)));
  /* 105293ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105293f2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105293f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105293f7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 105293fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10529401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529404 push eax */
  push32((uint32_t)(EAX));
  /* 10529405 call dword ptr [0x10552330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552330))), 0x1052940bu);
  /* 1052940b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10529410 mov ecx, dword ptr [0x10550eb8] */
  ECX = (r32((uint32_t)(0x10550eb8)));
  /* 10529416 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10529418 mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 1052941d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10529420 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10529422 mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 10529428 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1052942b mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 10529430 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10529433 mov edx, dword ptr [0x10550eb8] */
  EDX = (r32((uint32_t)(0x10550eb8)));
  /* 10529439 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10529444 mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 10529449 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1052944c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1052944f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10529452 mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 10529457 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1052945a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1052945d mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 10529463 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10529466 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1052946a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052946c jne 0x10529482 */
  if (!C.zf) goto L_10529482;
  /* 1052946e mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 10529474 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10529477 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10529479 mov ecx, dword ptr [0x10550ec0] */
  ECX = (r32((uint32_t)(0x10550ec0)));
  /* 1052947f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10529482:;
  /* 10529482 mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 10529488 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052948c jne 0x105294f2 */
  if (!C.zf) goto L_105294f2;
  /* 1052948e cmp dword ptr [0x10550ec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10550ec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529495 jle 0x105294f2 */
  if ((C.zf||C.sf!=C.of)) goto L_105294f2;
  /* 10529497 mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 1052949c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1052949f push ecx */
  push32((uint32_t)(ECX));
  /* 105294a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105294a2 mov edx, dword ptr [0x10550ecc] */
  EDX = (r32((uint32_t)(0x10550ecc)));
  /* 105294a8 push edx */
  push32((uint32_t)(EDX));
  /* 105294a9 call dword ptr [0x10552384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552384))), 0x105294afu);
  /* 105294af mov eax, dword ptr [0x10550ec4] */
  EAX = (r32((uint32_t)(0x10550ec4)));
  /* 105294b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105294b7 mov ecx, dword ptr [0x10550ec8] */
  ECX = (r32((uint32_t)(0x10550ec8)));
  /* 105294bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105294bf mov edx, dword ptr [0x10550ec0] */
  EDX = (r32((uint32_t)(0x10550ec0)));
  /* 105294c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105294c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105294ca push ecx */
  push32((uint32_t)(ECX));
  /* 105294cb mov eax, dword ptr [0x10550ec0] */
  EAX = (r32((uint32_t)(0x10550ec0)));
  /* 105294d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105294d3 push eax */
  push32((uint32_t)(EAX));
  /* 105294d4 mov ecx, dword ptr [0x10550ec0] */
  ECX = (r32((uint32_t)(0x10550ec0)));
  /* 105294da push ecx */
  push32((uint32_t)(ECX));
  /* 105294db call 0x1052bb00 */
  push32(0x105294e0u); f_1052bb00();
  /* 105294e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105294e3 mov edx, dword ptr [0x10550ec4] */
  EDX = (r32((uint32_t)(0x10550ec4)));
  /* 105294e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105294ec mov dword ptr [0x10550ec4], edx */
  w32((uint32_t)(0x10550ec4), (EDX));
L_105294f2:;
  /* 105294f2 mov dword ptr [0x10550ec0], 0 */
  w32((uint32_t)(0x10550ec0), (0x0u));
L_105294fc:;
  /* 105294fc mov esp, ebp */
  ESP = (EBP);
  /* 105294fe pop ebp */
  EBP = (pop32());
  /* 105294ff ret  */
  ESPCHK(0x105293d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009500 @ 0x10529500 (1565 bytes, 343 insns) */
void f_10529500(void) {
  FTRACE(0x10529500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10529500 push ebp */
  push32((uint32_t)(EBP));
  /* 10529501 mov ebp, esp */
  EBP = (ESP);
  /* 10529503 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529509 mov eax, dword ptr [0x10550ec4] */
  EAX = (r32((uint32_t)(0x10550ec4)));
  /* 1052950e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10529511 push eax */
  push32((uint32_t)(EAX));
  /* 10529512 mov ecx, dword ptr [0x10550ec8] */
  ECX = (r32((uint32_t)(0x10550ec8)));
  /* 10529518 push ecx */
  push32((uint32_t)(ECX));
  /* 10529519 call dword ptr [0x105523a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523a8))), 0x1052951fu);
  /* 1052951f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10529521 je 0x1052952b */
  if (C.zf) goto L_1052952b;
  /* 10529523 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10529526 jmp 0x10529b19 */
  goto L_10529b19;
L_1052952b:;
  /* 1052952b mov edx, dword ptr [0x10550ec8] */
  EDX = (r32((uint32_t)(0x10550ec8)));
  /* 10529531 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10529537 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10529541 jmp 0x10529552 */
  goto L_10529552;
L_10529543:;
  /* 10529543 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10529549 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052954c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10529552:;
  /* 10529552 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10529558 cmp ecx, dword ptr [0x10550ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052955e jge 0x10529b17 */
  if ((C.sf==C.of)) goto L_10529b17;
  /* 10529564 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1052956a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1052956d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10529573 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10529578 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1052957e push ecx */
  push32((uint32_t)(ECX));
  /* 1052957f call dword ptr [0x105523a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523a8))), 0x10529585u);
  /* 10529585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10529587 je 0x10529593 */
  if (C.zf) goto L_10529593;
  /* 10529589 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1052958e jmp 0x10529b19 */
  goto L_10529b19;
L_10529593:;
  /* 10529593 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10529599 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1052959c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 105295a2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 105295a8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105295ae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105295b1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 105295b7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105295ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105295bd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 105295c7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 105295d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105295d8 jmp 0x105295e3 */
  goto L_105295e3;
L_105295da:;
  /* 105295da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105295dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105295e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105295e3:;
  /* 105295e3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105295e7 jge 0x10529adb */
  if ((C.sf==C.of)) goto L_10529adb;
  /* 105295ed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 105295f7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10529601 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1052960b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10529615 jmp 0x10529626 */
  goto L_10529626;
L_10529617:;
  /* 10529617 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1052961d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529620 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10529626:;
  /* 10529626 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052962d jge 0x10529642 */
  if ((C.sf==C.of)) goto L_10529642;
  /* 1052962f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10529635 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10529640 jmp 0x10529617 */
  goto L_10529617;
L_10529642:;
  /* 10529642 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529646 jl 0x10529a7d */
  if ((C.sf!=C.of)) goto L_10529a7d;
  /* 1052964c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10529651 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10529657 push ecx */
  push32((uint32_t)(ECX));
  /* 10529658 call dword ptr [0x105523a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523a8))), 0x1052965eu);
  /* 1052965e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10529660 je 0x1052966c */
  if (C.zf) goto L_1052966c;
  /* 10529662 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10529667 jmp 0x10529b19 */
  goto L_10529b19;
L_1052966c:;
  /* 1052966c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10529672 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10529675 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1052967f jmp 0x10529690 */
  goto L_10529690;
L_10529681:;
  /* 10529681 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10529687 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052968a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10529690:;
  /* 10529690 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529697 jge 0x10529814 */
  if ((C.sf==C.of)) goto L_10529814;
  /* 1052969d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105296a0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105296a3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 105296a9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105296af add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105296b5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 105296bb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105296c1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105296c5 jne 0x105296d2 */
  if (!C.zf) goto L_105296d2;
  /* 105296c7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 105296cd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105296d0 je 0x105296dc */
  if (C.zf) goto L_105296dc;
L_105296d2:;
  /* 105296d2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 105296d7 jmp 0x10529b19 */
  goto L_10529b19;
L_105296dc:;
  /* 105296dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105296e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105296e4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 105296ea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 105296f0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 105296f6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 105296fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 105296ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10529701 je 0x10529739 */
  if (C.zf) goto L_10529739;
  /* 10529703 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10529709 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052970c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10529712 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052971c jle 0x10529728 */
  if ((C.zf||C.sf!=C.of)) goto L_10529728;
  /* 1052971e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10529723 jmp 0x10529b19 */
  goto L_10529b19;
L_10529728:;
  /* 10529728 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1052972e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529731 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10529737 jmp 0x1052977b */
  goto L_1052977b;
L_10529739:;
  /* 10529739 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1052973f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10529742 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529745 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1052974b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529752 jle 0x1052975e */
  if ((C.zf||C.sf!=C.of)) goto L_1052975e;
  /* 10529754 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1052975e:;
  /* 1052975e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10529764 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1052976b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052976e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10529774 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1052977b:;
  /* 1052977b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529782 jl 0x1052979d */
  if ((C.sf!=C.of)) goto L_1052979d;
  /* 10529784 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1052978a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1052978d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052978f jne 0x1052979d */
  if (!C.zf) goto L_1052979d;
  /* 10529791 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052979b jle 0x105297a7 */
  if ((C.zf||C.sf!=C.of)) goto L_105297a7;
L_1052979d:;
  /* 1052979d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 105297a2 jmp 0x10529b19 */
  goto L_10529b19;
L_105297a7:;
  /* 105297a7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105297ad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105297b3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 105297b6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105297bc je 0x105297c8 */
  if (C.zf) goto L_105297c8;
  /* 105297be mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 105297c3 jmp 0x10529b19 */
  goto L_10529b19;
L_105297c8:;
  /* 105297c8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 105297ce add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105297d4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 105297da mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 105297e0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105297e6 jb 0x105296dc */
  if (C.cf) goto L_105296dc;
  /* 105297ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 105297f2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105297f8 je 0x10529804 */
  if (C.zf) goto L_10529804;
  /* 105297fa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 105297ff jmp 0x10529b19 */
  goto L_10529b19;
L_10529804:;
  /* 10529804 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10529807 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052980c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052980f jmp 0x10529681 */
  goto L_10529681;
L_10529814:;
  /* 10529814 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10529817 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10529819 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052981f je 0x1052982b */
  if (C.zf) goto L_1052982b;
  /* 10529821 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10529826 jmp 0x10529b19 */
  goto L_10529b19;
L_1052982b:;
  /* 1052982b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052982e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10529834 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1052983b jmp 0x10529846 */
  goto L_10529846;
L_1052983d:;
  /* 1052983d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10529840 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529843 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10529846:;
  /* 10529846 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052984a jge 0x10529a7d */
  if ((C.sf==C.of)) goto L_10529a7d;
  /* 10529850 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1052985a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10529860 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10529866:;
  /* 10529866 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1052986c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1052986f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10529875 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1052987b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529881 je 0x105299aa */
  if (C.zf) goto L_105299aa;
  /* 10529887 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052988a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10529890 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529897 je 0x105299aa */
  if (C.zf) goto L_105299aa;
  /* 1052989d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105298a3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105298a9 jb 0x105298be */
  if (C.cf) goto L_105298be;
  /* 105298ab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 105298b1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105298b6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105298bc jb 0x105298c8 */
  if (C.cf) goto L_105298c8;
L_105298be:;
  /* 105298be mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 105298c3 jmp 0x10529b19 */
  goto L_10529b19;
L_105298c8:;
  /* 105298c8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 105298ce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 105298d4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 105298da mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 105298e0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105298e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105298e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105298e9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105298ee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_105298f4:;
  /* 105298f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105298f7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105298fd je 0x1052991e */
  if (C.zf) goto L_1052991e;
  /* 105298ff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10529902 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529908 jne 0x1052990c */
  if (!C.zf) goto L_1052990c;
  /* 1052990a jmp 0x1052991e */
  goto L_1052991e;
L_1052990c:;
  /* 1052990c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052990f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10529911 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10529914 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10529917 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529919 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1052991c jmp 0x105298f4 */
  goto L_105298f4;
L_1052991e:;
  /* 1052991e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10529921 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529927 jne 0x10529933 */
  if (!C.zf) goto L_10529933;
  /* 10529929 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1052992e jmp 0x10529b19 */
  goto L_10529b19;
L_10529933:;
  /* 10529933 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10529939 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052993b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1052993e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529941 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10529947 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052994e jle 0x1052995a */
  if ((C.zf||C.sf!=C.of)) goto L_1052995a;
  /* 10529950 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1052995a:;
  /* 1052995a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10529960 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529963 je 0x1052996f */
  if (C.zf) goto L_1052996f;
  /* 10529965 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1052996a jmp 0x10529b19 */
  goto L_10529b19;
L_1052996f:;
  /* 1052996f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10529975 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10529978 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052997e je 0x1052998a */
  if (C.zf) goto L_1052998a;
  /* 10529980 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10529985 jmp 0x10529b19 */
  goto L_10529b19;
L_1052998a:;
  /* 1052998a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10529990 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10529996 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1052999c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052999f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 105299a5 jmp 0x10529866 */
  goto L_10529866;
L_105299aa:;
  /* 105299aa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105299b1 je 0x10529a21 */
  if (C.zf) goto L_10529a21;
  /* 105299b3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105299b7 jge 0x105299eb */
  if ((C.sf==C.of)) goto L_105299eb;
  /* 105299b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105299be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105299c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105299c3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 105299c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105299cb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 105299d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105299d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105299d9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105299db mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 105299e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 105299e3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 105299e9 jmp 0x10529a21 */
  goto L_10529a21;
L_105299eb:;
  /* 105299eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105299ee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105299f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 105299f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 105299f8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 105299fe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10529a00 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10529a06 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10529a09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529a0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10529a11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10529a13 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10529a19 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10529a1b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10529a21:;
  /* 10529a21 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10529a27 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10529a2a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529a30 jne 0x10529a44 */
  if (!C.zf) goto L_10529a44;
  /* 10529a32 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10529a35 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10529a3b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529a42 je 0x10529a4e */
  if (C.zf) goto L_10529a4e;
L_10529a44:;
  /* 10529a44 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10529a49 jmp 0x10529b19 */
  goto L_10529b19;
L_10529a4e:;
  /* 10529a4e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10529a54 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10529a57 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529a5d je 0x10529a69 */
  if (C.zf) goto L_10529a69;
  /* 10529a5f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10529a64 jmp 0x10529b19 */
  goto L_10529b19;
L_10529a69:;
  /* 10529a69 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10529a6f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529a72 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10529a78 jmp 0x1052983d */
  goto L_1052983d;
L_10529a7d:;
  /* 10529a7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529a80 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10529a86 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10529a8c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529a90 jne 0x10529aaa */
  if (!C.zf) goto L_10529aaa;
  /* 10529a92 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529a95 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10529a9b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10529aa1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529aa8 je 0x10529ab1 */
  if (C.zf) goto L_10529ab1;
L_10529aaa:;
  /* 10529aaa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10529aaf jmp 0x10529b19 */
  goto L_10529b19;
L_10529ab1:;
  /* 10529ab1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10529ab7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529abd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10529ac3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10529ac6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529acb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10529ace mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529ad1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10529ad3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10529ad6 jmp 0x105295da */
  goto L_105295da;
L_10529adb:;
  /* 10529adb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10529ae1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10529ae7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529ae9 jne 0x10529afc */
  if (!C.zf) goto L_10529afc;
  /* 10529aeb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10529af1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10529af7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529afa je 0x10529b03 */
  if (C.zf) goto L_10529b03;
L_10529afc:;
  /* 10529afc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10529b01 jmp 0x10529b19 */
  goto L_10529b19;
L_10529b03:;
  /* 10529b03 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10529b09 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529b0c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10529b12 jmp 0x10529543 */
  goto L_10529543;
L_10529b17:;
  /* 10529b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10529b19:;
  /* 10529b19 mov esp, ebp */
  ESP = (EBP);
  /* 10529b1b pop ebp */
  EBP = (pop32());
  /* 10529b1c ret  */
  ESPCHK(0x10529500u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b20 @ 0x10529b20 (250 bytes, 92 insns) */
void f_10529b20(void) {
  FTRACE(0x10529b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10529b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10529b21 mov ebp, esp */
  EBP = (ESP);
  /* 10529b23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529b26 push ebx */
  push32((uint32_t)(EBX));
  /* 10529b27 push esi */
  push32((uint32_t)(ESI));
  /* 10529b28 push edi */
  push32((uint32_t)(EDI));
  /* 10529b29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10529b2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10529b2f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10529b32 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10529b35:;
  /* 10529b35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529b39 jne 0x10529b59 */
  if (!C.zf) goto L_10529b59;
  /* 10529b3b push 0x1054af88 */
  push32((uint32_t)(0x1054af88u));
  /* 10529b40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10529b42 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10529b44 push 0x1054af7c */
  push32((uint32_t)(0x1054af7cu));
  /* 10529b49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10529b4b call 0x10522cd0 */
  push32(0x10529b50u); f_10522cd0();
  /* 10529b50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529b53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529b56 jne 0x10529b59 */
  if (!C.zf) goto L_10529b59;
  /* 10529b58 int3  */
  x86_unimpl("int3 @ 0x10529b58");
L_10529b59:;
  /* 10529b59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10529b5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10529b5d jne 0x10529b35 */
  if (!C.zf) goto L_10529b35;
L_10529b5f:;
  /* 10529b5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529b63 jne 0x10529b83 */
  if (!C.zf) goto L_10529b83;
  /* 10529b65 push 0x1054af6c */
  push32((uint32_t)(0x1054af6cu));
  /* 10529b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10529b6c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10529b6e push 0x1054af7c */
  push32((uint32_t)(0x1054af7cu));
  /* 10529b73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10529b75 call 0x10522cd0 */
  push32(0x10529b7au); f_10522cd0();
  /* 10529b7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529b7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529b80 jne 0x10529b83 */
  if (!C.zf) goto L_10529b83;
  /* 10529b82 int3  */
  x86_unimpl("int3 @ 0x10529b82");
L_10529b83:;
  /* 10529b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529b85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10529b87 jne 0x10529b5f */
  if (!C.zf) goto L_10529b5f;
  /* 10529b89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529b8c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10529b93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529b99 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10529b9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529b9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529ba2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10529ba4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529ba7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10529bae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10529bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10529bb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10529bb5 push edx */
  push32((uint32_t)(EDX));
  /* 10529bb6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529bb9 push eax */
  push32((uint32_t)(EAX));
  /* 10529bba call 0x1052aba0 */
  push32(0x10529bbfu); f_1052aba0();
  /* 10529bbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529bc2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10529bc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529bc8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10529bcb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529bce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529bd1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10529bd4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529bd7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529bdb jl 0x10529bff */
  if ((C.sf!=C.of)) goto L_10529bff;
  /* 10529bdd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529be0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10529be2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10529be5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10529be7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10529bed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10529bf0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529bf3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10529bf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529bf8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529bfb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10529bfd jmp 0x10529c10 */
  goto L_10529c10;
L_10529bff:;
  /* 10529bff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529c02 push edx */
  push32((uint32_t)(EDX));
  /* 10529c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10529c05 call 0x1052a920 */
  push32(0x10529c0au); f_1052a920();
  /* 10529c0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529c0d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10529c10:;
  /* 10529c10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529c13 pop edi */
  EDI = (pop32());
  /* 10529c14 pop esi */
  ESI = (pop32());
  /* 10529c15 pop ebx */
  EBX = (pop32());
  /* 10529c16 mov esp, ebp */
  ESP = (EBP);
  /* 10529c18 pop ebp */
  EBP = (pop32());
  /* 10529c19 ret  */
  ESPCHK(0x10529b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c20 @ 0x10529c20 (183 bytes, 58 insns) */
void f_10529c20(void) {
  FTRACE(0x10529c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10529c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10529c21 mov ebp, esp */
  EBP = (ESP);
  /* 10529c23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529c29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529c2c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529c31 ja 0x10529c4a */
  if ((!C.cf&&!C.zf)) goto L_10529c4a;
  /* 10529c33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529c36 mov edx, dword ptr [0x1054dc98] */
  EDX = (r32((uint32_t)(0x1054dc98)));
  /* 10529c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529c3e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10529c42 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10529c45 jmp 0x10529cd3 */
  goto L_10529cd3;
L_10529c4a:;
  /* 10529c4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529c4d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10529c50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10529c56 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10529c5c mov edx, dword ptr [0x1054dc98] */
  EDX = (r32((uint32_t)(0x1054dc98)));
  /* 10529c62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529c64 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10529c68 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10529c6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10529c6f je 0x10529c93 */
  if (C.zf) goto L_10529c93;
  /* 10529c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529c74 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10529c77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10529c7d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10529c80 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10529c83 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10529c86 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10529c8a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10529c91 jmp 0x10529ca4 */
  goto L_10529ca4;
L_10529c93:;
  /* 10529c93 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10529c96 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10529c99 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10529c9d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10529ca4:;
  /* 10529ca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10529ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10529ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10529caa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10529cad push ecx */
  push32((uint32_t)(ECX));
  /* 10529cae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10529cb1 push edx */
  push32((uint32_t)(EDX));
  /* 10529cb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10529cb5 push eax */
  push32((uint32_t)(EAX));
  /* 10529cb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10529cb8 call 0x1052be40 */
  push32(0x10529cbdu); f_1052be40();
  /* 10529cbd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529cc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10529cc2 jne 0x10529cc8 */
  if (!C.zf) goto L_10529cc8;
  /* 10529cc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529cc6 jmp 0x10529cd3 */
  goto L_10529cd3;
L_10529cc8:;
  /* 10529cc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529ccb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10529cd0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10529cd3:;
  /* 10529cd3 mov esp, ebp */
  ESP = (EBP);
  /* 10529cd5 pop ebp */
  EBP = (pop32());
  /* 10529cd6 ret  */
  ESPCHK(0x10529c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x10529ce0 (836 bytes, 238 insns) */
void f_10529ce0(void) {
  FTRACE(0x10529ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10529ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10529ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10529ce3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10529ce6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10529ce8 call 0x10527610 */
  push32(0x10529cedu); f_10527610();
  /* 10529ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529cf3 push eax */
  push32((uint32_t)(EAX));
  /* 10529cf4 call 0x1052a030 */
  push32(0x10529cf9u); f_1052a030();
  /* 10529cf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529cfc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10529cff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529d02 cmp ecx, dword ptr [0x10550c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529d08 jne 0x10529d1b */
  if (!C.zf) goto L_10529d1b;
  /* 10529d0a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10529d0c call 0x105276b0 */
  push32(0x10529d11u); f_105276b0();
  /* 10529d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529d16 jmp 0x1052a020 */
  goto L_1052a020;
L_10529d1b:;
  /* 10529d1b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529d1f jne 0x10529d3c */
  if (!C.zf) goto L_10529d3c;
  /* 10529d21 call 0x1052a110 */
  push32(0x10529d26u); f_1052a110();
  /* 10529d26 call 0x1052a190 */
  push32(0x10529d2bu); f_1052a190();
  /* 10529d2b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10529d2d call 0x105276b0 */
  push32(0x10529d32u); f_105276b0();
  /* 10529d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529d35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529d37 jmp 0x1052a020 */
  goto L_1052a020;
L_10529d3c:;
  /* 10529d3c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10529d43 jmp 0x10529d4e */
  goto L_10529d4e;
L_10529d45:;
  /* 10529d45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529d48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529d4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10529d4e:;
  /* 10529d4e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529d52 jae 0x10529e9f */
  if (!C.cf) goto L_10529e9f;
  /* 10529d58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529d5b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10529d5e mov ecx, dword ptr [eax + 0x1054deb8] */
  ECX = (r32((uint32_t)(EAX + 0x1054deb8)));
  /* 10529d64 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529d67 jne 0x10529e9a */
  if (!C.zf) goto L_10529e9a;
  /* 10529d6d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10529d74 jmp 0x10529d7f */
  goto L_10529d7f;
L_10529d76:;
  /* 10529d76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529d79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529d7c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10529d7f:;
  /* 10529d7f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529d86 jae 0x10529d94 */
  if (!C.cf) goto L_10529d94;
  /* 10529d88 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529d8b mov byte ptr [eax + 0x10550da0], 0 */
  w8((uint32_t)(EAX + 0x10550da0), (0x0u));
  /* 10529d92 jmp 0x10529d76 */
  goto L_10529d76;
L_10529d94:;
  /* 10529d94 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10529d9b jmp 0x10529da6 */
  goto L_10529da6;
L_10529d9d:;
  /* 10529d9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529da0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529da3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10529da6:;
  /* 10529da6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529daa jae 0x10529e27 */
  if (!C.cf) goto L_10529e27;
  /* 10529dac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529daf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10529db2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529db5 lea ecx, [edx + eax*8 + 0x1054dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1054dec8));
  /* 10529dbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10529dbf jmp 0x10529dca */
  goto L_10529dca;
L_10529dc1:;
  /* 10529dc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10529dc4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529dc7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10529dca:;
  /* 10529dca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10529dcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10529dcf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10529dd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10529dd3 je 0x10529e22 */
  if (C.zf) goto L_10529e22;
  /* 10529dd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10529dd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529dda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10529ddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10529ddf je 0x10529e22 */
  if (C.zf) goto L_10529e22;
  /* 10529de1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10529de4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10529de6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10529de8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10529deb jmp 0x10529df6 */
  goto L_10529df6;
L_10529ded:;
  /* 10529ded mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529df0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529df3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10529df6:;
  /* 10529df6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10529df9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10529dfb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10529dfe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529e01 ja 0x10529e20 */
  if ((!C.cf&&!C.zf)) goto L_10529e20;
  /* 10529e03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529e06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529e09 mov dl, byte ptr [eax + 0x10550da1] */
  DL = (r8((uint32_t)(EAX + 0x10550da1)));
  /* 10529e0f or dl, byte ptr [ecx + 0x1054deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1054deb0))); DL = (_r); fl_logic(_r,8); }
  /* 10529e15 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529e18 mov byte ptr [eax + 0x10550da1], dl */
  w8((uint32_t)(EAX + 0x10550da1), (DL));
  /* 10529e1e jmp 0x10529ded */
  goto L_10529ded;
L_10529e20:;
  /* 10529e20 jmp 0x10529dc1 */
  goto L_10529dc1;
L_10529e22:;
  /* 10529e22 jmp 0x10529d9d */
  goto L_10529d9d;
L_10529e27:;
  /* 10529e27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529e2a mov dword ptr [0x10550c04], ecx */
  w32((uint32_t)(0x10550c04), (ECX));
  /* 10529e30 mov dword ptr [0x10550c8c], 1 */
  w32((uint32_t)(0x10550c8c), (0x1u));
  /* 10529e3a mov edx, dword ptr [0x10550c04] */
  EDX = (r32((uint32_t)(0x10550c04)));
  /* 10529e40 push edx */
  push32((uint32_t)(EDX));
  /* 10529e41 call 0x1052a090 */
  push32(0x10529e46u); f_1052a090();
  /* 10529e46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529e49 mov dword ptr [0x10550ea4], eax */
  w32((uint32_t)(0x10550ea4), (EAX));
  /* 10529e4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10529e55 jmp 0x10529e60 */
  goto L_10529e60;
L_10529e57:;
  /* 10529e57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529e5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10529e60:;
  /* 10529e60 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529e64 jae 0x10529e84 */
  if (!C.cf) goto L_10529e84;
  /* 10529e66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10529e69 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10529e6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529e6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529e72 mov cx, word ptr [ecx + eax*2 + 0x1054debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1054debc)));
  /* 10529e7a mov word ptr [edx*2 + 0x10550c80], cx */
  w16((uint32_t)(EDX*2 + 0x10550c80), (CX));
  /* 10529e82 jmp 0x10529e57 */
  goto L_10529e57;
L_10529e84:;
  /* 10529e84 call 0x1052a190 */
  push32(0x10529e89u); f_1052a190();
  /* 10529e89 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10529e8b call 0x105276b0 */
  push32(0x10529e90u); f_105276b0();
  /* 10529e90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529e93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529e95 jmp 0x1052a020 */
  goto L_1052a020;
L_10529e9a:;
  /* 10529e9a jmp 0x10529d45 */
  goto L_10529d45;
L_10529e9f:;
  /* 10529e9f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10529ea2 push edx */
  push32((uint32_t)(EDX));
  /* 10529ea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529ea6 push eax */
  push32((uint32_t)(EAX));
  /* 10529ea7 call dword ptr [0x10552308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552308))), 0x10529eadu);
  /* 10529ead cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529eb0 jne 0x10529ff2 */
  if (!C.zf) goto L_10529ff2;
  /* 10529eb6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10529ebd jmp 0x10529ec8 */
  goto L_10529ec8;
L_10529ebf:;
  /* 10529ebf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529ec2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529ec5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10529ec8:;
  /* 10529ec8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529ecf jae 0x10529edd */
  if (!C.cf) goto L_10529edd;
  /* 10529ed1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529ed4 mov byte ptr [edx + 0x10550da0], 0 */
  w8((uint32_t)(EDX + 0x10550da0), (0x0u));
  /* 10529edb jmp 0x10529ebf */
  goto L_10529ebf;
L_10529edd:;
  /* 10529edd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10529ee0 mov dword ptr [0x10550c04], eax */
  w32((uint32_t)(0x10550c04), (EAX));
  /* 10529ee5 mov dword ptr [0x10550ea4], 0 */
  w32((uint32_t)(0x10550ea4), (0x0u));
  /* 10529eef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529ef3 jbe 0x10529fae */
  if ((C.cf||C.zf)) goto L_10529fae;
  /* 10529ef9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10529efc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10529eff jmp 0x10529f0a */
  goto L_10529f0a;
L_10529f01:;
  /* 10529f01 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529f04 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529f07 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10529f0a:;
  /* 10529f0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529f0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10529f0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10529f11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10529f13 je 0x10529f5c */
  if (C.zf) goto L_10529f5c;
  /* 10529f15 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529f18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529f1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10529f1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10529f1f je 0x10529f5c */
  if (C.zf) goto L_10529f5c;
  /* 10529f21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529f24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10529f26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10529f28 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10529f2b jmp 0x10529f36 */
  goto L_10529f36;
L_10529f2d:;
  /* 10529f2d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529f30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529f33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10529f36:;
  /* 10529f36 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10529f39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10529f3b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10529f3e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529f41 ja 0x10529f5a */
  if ((!C.cf&&!C.zf)) goto L_10529f5a;
  /* 10529f43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529f46 mov cl, byte ptr [eax + 0x10550da1] */
  CL = (r8((uint32_t)(EAX + 0x10550da1)));
  /* 10529f4c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10529f4f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529f52 mov byte ptr [edx + 0x10550da1], cl */
  w8((uint32_t)(EDX + 0x10550da1), (CL));
  /* 10529f58 jmp 0x10529f2d */
  goto L_10529f2d;
L_10529f5a:;
  /* 10529f5a jmp 0x10529f01 */
  goto L_10529f01;
L_10529f5c:;
  /* 10529f5c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10529f63 jmp 0x10529f6e */
  goto L_10529f6e;
L_10529f65:;
  /* 10529f65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529f68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529f6b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10529f6e:;
  /* 10529f6e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529f75 jae 0x10529f8e */
  if (!C.cf) goto L_10529f8e;
  /* 10529f77 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529f7a mov dl, byte ptr [ecx + 0x10550da1] */
  DL = (r8((uint32_t)(ECX + 0x10550da1)));
  /* 10529f80 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10529f83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10529f86 mov byte ptr [eax + 0x10550da1], dl */
  w8((uint32_t)(EAX + 0x10550da1), (DL));
  /* 10529f8c jmp 0x10529f65 */
  goto L_10529f65;
L_10529f8e:;
  /* 10529f8e mov ecx, dword ptr [0x10550c04] */
  ECX = (r32((uint32_t)(0x10550c04)));
  /* 10529f94 push ecx */
  push32((uint32_t)(ECX));
  /* 10529f95 call 0x1052a090 */
  push32(0x10529f9au); f_1052a090();
  /* 10529f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529f9d mov dword ptr [0x10550ea4], eax */
  w32((uint32_t)(0x10550ea4), (EAX));
  /* 10529fa2 mov dword ptr [0x10550c8c], 1 */
  w32((uint32_t)(0x10550c8c), (0x1u));
  /* 10529fac jmp 0x10529fb8 */
  goto L_10529fb8;
L_10529fae:;
  /* 10529fae mov dword ptr [0x10550c8c], 0 */
  w32((uint32_t)(0x10550c8c), (0x0u));
L_10529fb8:;
  /* 10529fb8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10529fbf jmp 0x10529fca */
  goto L_10529fca;
L_10529fc1:;
  /* 10529fc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529fc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10529fc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10529fca:;
  /* 10529fca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529fce jae 0x10529fdf */
  if (!C.cf) goto L_10529fdf;
  /* 10529fd0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10529fd3 mov word ptr [eax*2 + 0x10550c80], 0 */
  w16((uint32_t)(EAX*2 + 0x10550c80), (0x0u));
  /* 10529fdd jmp 0x10529fc1 */
  goto L_10529fc1;
L_10529fdf:;
  /* 10529fdf call 0x1052a190 */
  push32(0x10529fe4u); f_1052a190();
  /* 10529fe4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10529fe6 call 0x105276b0 */
  push32(0x10529febu); f_105276b0();
  /* 10529feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10529fee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10529ff0 jmp 0x1052a020 */
  goto L_1052a020;
L_10529ff2:;
  /* 10529ff2 cmp dword ptr [0x1054f720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10529ff9 je 0x1052a013 */
  if (C.zf) goto L_1052a013;
  /* 10529ffb call 0x1052a110 */
  push32(0x1052a000u); f_1052a110();
  /* 1052a000 call 0x1052a190 */
  push32(0x1052a005u); f_1052a190();
  /* 1052a005 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1052a007 call 0x105276b0 */
  push32(0x1052a00cu); f_105276b0();
  /* 1052a00c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052a011 jmp 0x1052a020 */
  goto L_1052a020;
L_1052a013:;
  /* 1052a013 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1052a015 call 0x105276b0 */
  push32(0x1052a01au); f_105276b0();
  /* 1052a01a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a01d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1052a020:;
  /* 1052a020 mov esp, ebp */
  ESP = (EBP);
  /* 1052a022 pop ebp */
  EBP = (pop32());
  /* 1052a023 ret  */
  ESPCHK(0x10529ce0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1052a030 (89 bytes, 21 insns) */
void f_1052a030(void) {
  FTRACE(0x1052a030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a030 push ebp */
  push32((uint32_t)(EBP));
  /* 1052a031 mov ebp, esp */
  EBP = (ESP);
  /* 1052a033 mov dword ptr [0x1054f720], 0 */
  w32((uint32_t)(0x1054f720), (0x0u));
  /* 1052a03d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a041 jne 0x1052a055 */
  if (!C.zf) goto L_1052a055;
  /* 1052a043 mov dword ptr [0x1054f720], 1 */
  w32((uint32_t)(0x1054f720), (0x1u));
  /* 1052a04d call dword ptr [0x10552300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552300))), 0x1052a053u);
  /* 1052a053 jmp 0x1052a087 */
  goto L_1052a087;
L_1052a055:;
  /* 1052a055 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a059 jne 0x1052a06d */
  if (!C.zf) goto L_1052a06d;
  /* 1052a05b mov dword ptr [0x1054f720], 1 */
  w32((uint32_t)(0x1054f720), (0x1u));
  /* 1052a065 call dword ptr [0x10552310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552310))), 0x1052a06bu);
  /* 1052a06b jmp 0x1052a087 */
  goto L_1052a087;
L_1052a06d:;
  /* 1052a06d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a071 jne 0x1052a084 */
  if (!C.zf) goto L_1052a084;
  /* 1052a073 mov dword ptr [0x1054f720], 1 */
  w32((uint32_t)(0x1054f720), (0x1u));
  /* 1052a07d mov eax, dword ptr [0x1054f740] */
  EAX = (r32((uint32_t)(0x1054f740)));
  /* 1052a082 jmp 0x1052a087 */
  goto L_1052a087;
L_1052a084:;
  /* 1052a084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1052a087:;
  /* 1052a087 pop ebp */
  EBP = (pop32());
  /* 1052a088 ret  */
  ESPCHK(0x1052a030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a090 @ 0x1052a090 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1052a090(void) {
  FTRACE(0x1052a090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a090 push ebp */
  push32((uint32_t)(EBP));
  /* 1052a091 mov ebp, esp */
  EBP = (ESP);
  /* 1052a093 push ecx */
  push32((uint32_t)(ECX));
  /* 1052a094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a097 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052a09a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a09d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a0a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052a0a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a0aa ja 0x1052a0da */
  if ((!C.cf&&!C.zf)) goto L_1052a0da;
  /* 1052a0ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a0af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a0b1 mov dl, byte ptr [eax + 0x1052a0f4] */
  DL = (r8((uint32_t)(EAX + 0x1052a0f4)));
  /* 1052a0b7 jmp dword ptr [edx*4 + 0x1052a0e0] */
  switch (EDX) {
    case 0: goto L_1052a0be;
    case 1: goto L_1052a0c5;
    case 2: goto L_1052a0cc;
    case 3: goto L_1052a0d3;
    case 4: goto L_1052a0da;
    default: x86_unimpl("switch@0x1052a0b7 out of table"); return;
  }
L_1052a0be:;
  /* 1052a0be mov eax, 0x411 */
  EAX = (0x411u);
  /* 1052a0c3 jmp 0x1052a0dc */
  goto L_1052a0dc;
L_1052a0c5:;
  /* 1052a0c5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1052a0ca jmp 0x1052a0dc */
  goto L_1052a0dc;
L_1052a0cc:;
  /* 1052a0cc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1052a0d1 jmp 0x1052a0dc */
  goto L_1052a0dc;
L_1052a0d3:;
  /* 1052a0d3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1052a0d8 jmp 0x1052a0dc */
  goto L_1052a0dc;
L_1052a0da:;
  /* 1052a0da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052a0dc:;
  /* 1052a0dc mov esp, ebp */
  ESP = (EBP);
  /* 1052a0de pop ebp */
  EBP = (pop32());
  /* 1052a0df ret  */
  ESPCHK(0x1052a090u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1052a110 (116 bytes, 29 insns) */
void f_1052a110(void) {
  FTRACE(0x1052a110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a110 push ebp */
  push32((uint32_t)(EBP));
  /* 1052a111 mov ebp, esp */
  EBP = (ESP);
  /* 1052a113 push ecx */
  push32((uint32_t)(ECX));
  /* 1052a114 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052a11b jmp 0x1052a126 */
  goto L_1052a126;
L_1052a11d:;
  /* 1052a11d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a120 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a123 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052a126:;
  /* 1052a126 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a12d jge 0x1052a13b */
  if ((C.sf==C.of)) goto L_1052a13b;
  /* 1052a12f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a132 mov byte ptr [ecx + 0x10550da0], 0 */
  w8((uint32_t)(ECX + 0x10550da0), (0x0u));
  /* 1052a139 jmp 0x1052a11d */
  goto L_1052a11d;
L_1052a13b:;
  /* 1052a13b mov dword ptr [0x10550c04], 0 */
  w32((uint32_t)(0x10550c04), (0x0u));
  /* 1052a145 mov dword ptr [0x10550c8c], 0 */
  w32((uint32_t)(0x10550c8c), (0x0u));
  /* 1052a14f mov dword ptr [0x10550ea4], 0 */
  w32((uint32_t)(0x10550ea4), (0x0u));
  /* 1052a159 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052a160 jmp 0x1052a16b */
  goto L_1052a16b;
L_1052a162:;
  /* 1052a162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a165 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a168 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1052a16b:;
  /* 1052a16b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a16f jge 0x1052a180 */
  if ((C.sf==C.of)) goto L_1052a180;
  /* 1052a171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a174 mov word ptr [eax*2 + 0x10550c80], 0 */
  w16((uint32_t)(EAX*2 + 0x10550c80), (0x0u));
  /* 1052a17e jmp 0x1052a162 */
  goto L_1052a162;
L_1052a180:;
  /* 1052a180 mov esp, ebp */
  ESP = (EBP);
  /* 1052a182 pop ebp */
  EBP = (pop32());
  /* 1052a183 ret  */
  ESPCHK(0x1052a110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a190 @ 0x1052a190 (770 bytes, 175 insns) */
void f_1052a190(void) {
  FTRACE(0x1052a190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a190 push ebp */
  push32((uint32_t)(EBP));
  /* 1052a191 mov ebp, esp */
  EBP = (ESP);
  /* 1052a193 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a199 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1052a19f push eax */
  push32((uint32_t)(EAX));
  /* 1052a1a0 mov ecx, dword ptr [0x10550c04] */
  ECX = (r32((uint32_t)(0x10550c04)));
  /* 1052a1a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1052a1a7 call dword ptr [0x10552308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552308))), 0x1052a1adu);
  /* 1052a1ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a1b0 jne 0x1052a3c9 */
  if (!C.zf) goto L_1052a3c9;
  /* 1052a1b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1052a1c0 jmp 0x1052a1d1 */
  goto L_1052a1d1;
L_1052a1c2:;
  /* 1052a1c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a1c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a1cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1052a1d1:;
  /* 1052a1d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a1db jae 0x1052a1f2 */
  if (!C.cf) goto L_1052a1f2;
  /* 1052a1dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a1e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1052a1e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1052a1f0 jmp 0x1052a1c2 */
  goto L_1052a1c2;
L_1052a1f2:;
  /* 1052a1f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1052a1f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1052a1ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052a202 jmp 0x1052a20d */
  goto L_1052a20d;
L_1052a204:;
  /* 1052a204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a207 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a20a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052a20d:;
  /* 1052a20d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a210 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a212 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1052a214 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052a216 je 0x1052a258 */
  if (C.zf) goto L_1052a258;
  /* 1052a218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a21b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052a21d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1052a21f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1052a225 jmp 0x1052a236 */
  goto L_1052a236;
L_1052a227:;
  /* 1052a227 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a22d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a230 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1052a236:;
  /* 1052a236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052a239 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052a23b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1052a23e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a244 ja 0x1052a256 */
  if ((!C.cf&&!C.zf)) goto L_1052a256;
  /* 1052a246 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a24c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1052a254 jmp 0x1052a227 */
  goto L_1052a227;
L_1052a256:;
  /* 1052a256 jmp 0x1052a204 */
  goto L_1052a204;
L_1052a258:;
  /* 1052a258 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052a25a mov eax, dword ptr [0x10550ea4] */
  EAX = (r32((uint32_t)(0x10550ea4)));
  /* 1052a25f push eax */
  push32((uint32_t)(EAX));
  /* 1052a260 mov ecx, dword ptr [0x10550c04] */
  ECX = (r32((uint32_t)(0x10550c04)));
  /* 1052a266 push ecx */
  push32((uint32_t)(ECX));
  /* 1052a267 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1052a26d push edx */
  push32((uint32_t)(EDX));
  /* 1052a26e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052a273 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1052a279 push eax */
  push32((uint32_t)(EAX));
  /* 1052a27a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052a27c call 0x1052be40 */
  push32(0x1052a281u); f_1052be40();
  /* 1052a281 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a284 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052a286 mov ecx, dword ptr [0x10550c04] */
  ECX = (r32((uint32_t)(0x10550c04)));
  /* 1052a28c push ecx */
  push32((uint32_t)(ECX));
  /* 1052a28d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052a292 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1052a298 push edx */
  push32((uint32_t)(EDX));
  /* 1052a299 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052a29e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1052a2a4 push eax */
  push32((uint32_t)(EAX));
  /* 1052a2a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052a2aa mov ecx, dword ptr [0x10550ea4] */
  ECX = (r32((uint32_t)(0x10550ea4)));
  /* 1052a2b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1052a2b1 call 0x1052c000 */
  push32(0x1052a2b6u); f_1052c000();
  /* 1052a2b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a2b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052a2bb mov edx, dword ptr [0x10550c04] */
  EDX = (r32((uint32_t)(0x10550c04)));
  /* 1052a2c1 push edx */
  push32((uint32_t)(EDX));
  /* 1052a2c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052a2c7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1052a2cd push eax */
  push32((uint32_t)(EAX));
  /* 1052a2ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052a2d3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1052a2d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1052a2da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1052a2df mov edx, dword ptr [0x10550ea4] */
  EDX = (r32((uint32_t)(0x10550ea4)));
  /* 1052a2e5 push edx */
  push32((uint32_t)(EDX));
  /* 1052a2e6 call 0x1052c000 */
  push32(0x1052a2ebu); f_1052c000();
  /* 1052a2eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a2ee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1052a2f8 jmp 0x1052a309 */
  goto L_1052a309;
L_1052a2fa:;
  /* 1052a2fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a300 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a303 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1052a309:;
  /* 1052a309 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a313 jae 0x1052a3c4 */
  if (!C.cf) goto L_1052a3c4;
  /* 1052a319 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a31f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a321 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1052a329 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1052a32c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052a32e je 0x1052a366 */
  if (C.zf) goto L_1052a366;
  /* 1052a330 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a336 mov cl, byte ptr [eax + 0x10550da1] */
  CL = (r8((uint32_t)(EAX + 0x10550da1)));
  /* 1052a33c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1052a33f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a345 mov byte ptr [edx + 0x10550da1], cl */
  w8((uint32_t)(EDX + 0x10550da1), (CL));
  /* 1052a34b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a351 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a357 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1052a35e mov byte ptr [eax + 0x10550ca0], dl */
  w8((uint32_t)(EAX + 0x10550ca0), (DL));
  /* 1052a364 jmp 0x1052a3bf */
  goto L_1052a3bf;
L_1052a366:;
  /* 1052a366 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a36c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052a36e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1052a376 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1052a379 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052a37b je 0x1052a3b2 */
  if (C.zf) goto L_1052a3b2;
  /* 1052a37d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a383 mov al, byte ptr [edx + 0x10550da1] */
  AL = (r8((uint32_t)(EDX + 0x10550da1)));
  /* 1052a389 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1052a38b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a391 mov byte ptr [ecx + 0x10550da1], al */
  w8((uint32_t)(ECX + 0x10550da1), (AL));
  /* 1052a397 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a39d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a3a3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1052a3aa mov byte ptr [edx + 0x10550ca0], cl */
  w8((uint32_t)(EDX + 0x10550ca0), (CL));
  /* 1052a3b0 jmp 0x1052a3bf */
  goto L_1052a3bf;
L_1052a3b2:;
  /* 1052a3b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a3b8 mov byte ptr [edx + 0x10550ca0], 0 */
  w8((uint32_t)(EDX + 0x10550ca0), (0x0u));
L_1052a3bf:;
  /* 1052a3bf jmp 0x1052a2fa */
  goto L_1052a2fa;
L_1052a3c4:;
  /* 1052a3c4 jmp 0x1052a48e */
  goto L_1052a48e;
L_1052a3c9:;
  /* 1052a3c9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1052a3d3 jmp 0x1052a3e4 */
  goto L_1052a3e4;
L_1052a3d5:;
  /* 1052a3d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a3db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a3de mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1052a3e4:;
  /* 1052a3e4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a3ee jae 0x1052a48e */
  if (!C.cf) goto L_1052a48e;
  /* 1052a3f4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a3fb jb 0x1052a438 */
  if (C.cf) goto L_1052a438;
  /* 1052a3fd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a404 ja 0x1052a438 */
  if ((!C.cf&&!C.zf)) goto L_1052a438;
  /* 1052a406 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a40c mov dl, byte ptr [ecx + 0x10550da1] */
  DL = (r8((uint32_t)(ECX + 0x10550da1)));
  /* 1052a412 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1052a415 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a41b mov byte ptr [eax + 0x10550da1], dl */
  w8((uint32_t)(EAX + 0x10550da1), (DL));
  /* 1052a421 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a427 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a42a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a430 mov byte ptr [edx + 0x10550ca0], cl */
  w8((uint32_t)(EDX + 0x10550ca0), (CL));
  /* 1052a436 jmp 0x1052a489 */
  goto L_1052a489;
L_1052a438:;
  /* 1052a438 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a43f jb 0x1052a47c */
  if (C.cf) goto L_1052a47c;
  /* 1052a441 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a448 ja 0x1052a47c */
  if ((!C.cf&&!C.zf)) goto L_1052a47c;
  /* 1052a44a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a450 mov cl, byte ptr [eax + 0x10550da1] */
  CL = (r8((uint32_t)(EAX + 0x10550da1)));
  /* 1052a456 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1052a459 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a45f mov byte ptr [edx + 0x10550da1], cl */
  w8((uint32_t)(EDX + 0x10550da1), (CL));
  /* 1052a465 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a46b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a46e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a474 mov byte ptr [ecx + 0x10550ca0], al */
  w8((uint32_t)(ECX + 0x10550ca0), (AL));
  /* 1052a47a jmp 0x1052a489 */
  goto L_1052a489;
L_1052a47c:;
  /* 1052a47c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1052a482 mov byte ptr [edx + 0x10550ca0], 0 */
  w8((uint32_t)(EDX + 0x10550ca0), (0x0u));
L_1052a489:;
  /* 1052a489 jmp 0x1052a3d5 */
  goto L_1052a3d5;
L_1052a48e:;
  /* 1052a48e mov esp, ebp */
  ESP = (EBP);
  /* 1052a490 pop ebp */
  EBP = (pop32());
  /* 1052a491 ret  */
  ESPCHK(0x1052a190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4a0 @ 0x1052a4a0 (23 bytes, 9 insns) */
void f_1052a4a0(void) {
  FTRACE(0x1052a4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052a4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1052a4a3 cmp dword ptr [0x10550c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10550c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a4aa je 0x1052a4b3 */
  if (C.zf) goto L_1052a4b3;
  /* 1052a4ac mov eax, dword ptr [0x10550c04] */
  EAX = (r32((uint32_t)(0x10550c04)));
  /* 1052a4b1 jmp 0x1052a4b5 */
  goto L_1052a4b5;
L_1052a4b3:;
  /* 1052a4b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052a4b5:;
  /* 1052a4b5 pop ebp */
  EBP = (pop32());
  /* 1052a4b6 ret  */
  ESPCHK(0x1052a4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4c0 @ 0x1052a4c0 (34 bytes, 10 insns) */
void f_1052a4c0(void) {
  FTRACE(0x1052a4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052a4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1052a4c3 cmp dword ptr [0x10551050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10551050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a4ca jne 0x1052a4e0 */
  if (!C.zf) goto L_1052a4e0;
  /* 1052a4cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1052a4ce call 0x10529ce0 */
  push32(0x1052a4d3u); f_10529ce0();
  /* 1052a4d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a4d6 mov dword ptr [0x10551050], 1 */
  w32((uint32_t)(0x10551050), (0x1u));
L_1052a4e0:;
  /* 1052a4e0 pop ebp */
  EBP = (pop32());
  /* 1052a4e1 ret  */
  ESPCHK(0x1052a4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4f0 @ 0x1052a4f0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_1052a4f0(void) {
  FTRACE(0x1052a4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052a4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1052a4f3 push edi */
  push32((uint32_t)(EDI));
  /* 1052a4f4 push esi */
  push32((uint32_t)(ESI));
  /* 1052a4f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1052a4f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052a4fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a4fe mov eax, ecx */
  EAX = (ECX);
  /* 1052a500 mov edx, ecx */
  EDX = (ECX);
  /* 1052a502 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a504 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a506 jbe 0x1052a510 */
  if ((C.cf||C.zf)) goto L_1052a510;
  /* 1052a508 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a50a jb 0x1052a688 */
  if (C.cf) goto L_1052a688;
L_1052a510:;
  /* 1052a510 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1052a516 jne 0x1052a52c */
  if (!C.zf) goto L_1052a52c;
  /* 1052a518 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052a51b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1052a51e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a521 jb 0x1052a54c */
  if (C.cf) goto L_1052a54c;
  /* 1052a523 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052a525 jmp dword ptr [edx*4 + 0x1052a638] */
  switch (EDX) {
    case 0: goto L_1052a648;
    case 1: goto L_1052a650;
    case 2: goto L_1052a65c;
    case 3: goto L_1052a670;
    default: x86_unimpl("switch@0x1052a525 out of table"); return;
  }
L_1052a52c:;
  /* 1052a52c mov eax, edi */
  EAX = (EDI);
  /* 1052a52e mov edx, 3 */
  EDX = (0x3u);
  /* 1052a533 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a536 jb 0x1052a544 */
  if (C.cf) goto L_1052a544;
  /* 1052a538 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1052a53b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a53d jmp dword ptr [eax*4 + 0x1052a550] */
  switch (EAX) {
    case 1: goto L_1052a560;
    case 2: goto L_1052a58c;
    case 3: goto L_1052a5b0;
    default: x86_unimpl("switch@0x1052a53d out of table"); return;
  }
L_1052a544:;
  /* 1052a544 jmp dword ptr [ecx*4 + 0x1052a648] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1052a648)))); return;
  /* 1052a54b nop  */
  /* nop */
L_1052a54c:;
  /* 1052a54c jmp dword ptr [ecx*4 + 0x1052a5cc] */
  switch (ECX) {
    case 0: goto L_1052a62f;
    case 1: goto L_1052a61c;
    case 2: goto L_1052a614;
    case 3: goto L_1052a60c;
    case 4: goto L_1052a604;
    case 5: goto L_1052a5fc;
    case 6: goto L_1052a5f4;
    case 7: goto L_1052a5ec;
    default: x86_unimpl("switch@0x1052a54c out of table"); return;
  }
  /* 1052a553 nop  */
  /* nop */
L_1052a560:;
  /* 1052a560 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a562 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052a564 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052a566 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052a569 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052a56c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052a56f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052a572 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052a575 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a578 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a57b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a57e jb 0x1052a54c */
  if (C.cf) goto L_1052a54c;
  /* 1052a580 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052a582 jmp dword ptr [edx*4 + 0x1052a638] */
  switch (EDX) {
    case 0: goto L_1052a648;
    case 1: goto L_1052a650;
    case 2: goto L_1052a65c;
    case 3: goto L_1052a670;
    default: x86_unimpl("switch@0x1052a582 out of table"); return;
  }
  /* 1052a589 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052a58c:;
  /* 1052a58c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a58e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052a590 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052a592 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052a595 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052a598 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052a59b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a59e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a5a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a5a4 jb 0x1052a54c */
  if (C.cf) goto L_1052a54c;
  /* 1052a5a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052a5a8 jmp dword ptr [edx*4 + 0x1052a638] */
  switch (EDX) {
    case 0: goto L_1052a648;
    case 1: goto L_1052a650;
    case 2: goto L_1052a65c;
    case 3: goto L_1052a670;
    default: x86_unimpl("switch@0x1052a5a8 out of table"); return;
  }
  /* 1052a5af nop  */
  /* nop */
L_1052a5b0:;
  /* 1052a5b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a5b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052a5b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052a5b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1052a5b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052a5ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1052a5bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a5be jb 0x1052a54c */
  if (C.cf) goto L_1052a54c;
  /* 1052a5c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052a5c2 jmp dword ptr [edx*4 + 0x1052a638] */
  switch (EDX) {
    case 0: goto L_1052a648;
    case 1: goto L_1052a650;
    case 2: goto L_1052a65c;
    case 3: goto L_1052a670;
    default: x86_unimpl("switch@0x1052a5c2 out of table"); return;
  }
  /* 1052a5c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052a5ec:;
  /* 1052a5ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1052a5f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1052a5f4:;
  /* 1052a5f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1052a5f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1052a5fc:;
  /* 1052a5fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1052a600 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1052a604:;
  /* 1052a604 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1052a608 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1052a60c:;
  /* 1052a60c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1052a610 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1052a614:;
  /* 1052a614 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1052a618 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1052a61c:;
  /* 1052a61c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1052a620 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1052a624 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1052a62b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a62d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1052a62f:;
  /* 1052a62f jmp dword ptr [edx*4 + 0x1052a638] */
  switch (EDX) {
    case 0: goto L_1052a648;
    case 1: goto L_1052a650;
    case 2: goto L_1052a65c;
    case 3: goto L_1052a670;
    default: x86_unimpl("switch@0x1052a62f out of table"); return;
  }
  /* 1052a636 mov edi, edi */
  EDI = (EDI);
L_1052a648:;
  /* 1052a648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a64b pop esi */
  ESI = (pop32());
  /* 1052a64c pop edi */
  EDI = (pop32());
  /* 1052a64d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052a64e ret  */
  ESPCHK(0x1052a4f0u, _esp0);
  ESP += 4; return;
  /* 1052a64f nop  */
  /* nop */
L_1052a650:;
  /* 1052a650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052a652 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052a654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a657 pop esi */
  ESI = (pop32());
  /* 1052a658 pop edi */
  EDI = (pop32());
  /* 1052a659 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052a65a ret  */
  ESPCHK(0x1052a4f0u, _esp0);
  ESP += 4; return;
  /* 1052a65b nop  */
  /* nop */
L_1052a65c:;
  /* 1052a65c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052a65e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052a660 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052a663 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052a666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a669 pop esi */
  ESI = (pop32());
  /* 1052a66a pop edi */
  EDI = (pop32());
  /* 1052a66b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052a66c ret  */
  ESPCHK(0x1052a4f0u, _esp0);
  ESP += 4; return;
  /* 1052a66d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052a670:;
  /* 1052a670 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052a672 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052a674 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052a677 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052a67a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052a67d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052a680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a683 pop esi */
  ESI = (pop32());
  /* 1052a684 pop edi */
  EDI = (pop32());
  /* 1052a685 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052a686 ret  */
  ESPCHK(0x1052a4f0u, _esp0);
  ESP += 4; return;
  /* 1052a687 nop  */
  /* nop */
L_1052a688:;
  /* 1052a688 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1052a68c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1052a690 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1052a696 jne 0x1052a6bc */
  if (!C.zf) goto L_1052a6bc;
  /* 1052a698 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052a69b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1052a69e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a6a1 jb 0x1052a6b0 */
  if (C.cf) goto L_1052a6b0;
  /* 1052a6a3 std  */
  C.df=1;
  /* 1052a6a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052a6a6 cld  */
  C.df=0;
  /* 1052a6a7 jmp dword ptr [edx*4 + 0x1052a7d0] */
  switch (EDX) {
    case 0: goto L_1052a7e0;
    case 1: goto L_1052a7e8;
    case 2: goto L_1052a7f8;
    case 3: goto L_1052a80c;
    default: x86_unimpl("switch@0x1052a6a7 out of table"); return;
  }
  /* 1052a6ae mov edi, edi */
  EDI = (EDI);
L_1052a6b0:;
  /* 1052a6b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052a6b2 jmp dword ptr [ecx*4 + 0x1052a780] */
  switch (ECX) {
    case 0: goto L_1052a7c7;
    default: x86_unimpl("switch@0x1052a6b2 out of table"); return;
  }
  /* 1052a6b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052a6bc:;
  /* 1052a6bc mov eax, edi */
  EAX = (EDI);
  /* 1052a6be mov edx, 3 */
  EDX = (0x3u);
  /* 1052a6c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a6c6 jb 0x1052a6d4 */
  if (C.cf) goto L_1052a6d4;
  /* 1052a6c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1052a6cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a6cd jmp dword ptr [eax*4 + 0x1052a6d8] */
  switch (EAX) {
    case 1: goto L_1052a6e8;
    case 2: goto L_1052a708;
    case 3: goto L_1052a730;
    default: x86_unimpl("switch@0x1052a6cd out of table"); return;
  }
L_1052a6d4:;
  /* 1052a6d4 jmp dword ptr [ecx*4 + 0x1052a7d0] */
  switch (ECX) {
    case 0: goto L_1052a7e0;
    case 1: goto L_1052a7e8;
    case 2: goto L_1052a7f8;
    case 3: goto L_1052a80c;
    default: x86_unimpl("switch@0x1052a6d4 out of table"); return;
  }
  /* 1052a6db nop  */
  /* nop */
L_1052a6e8:;
  /* 1052a6e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052a6eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a6ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052a6f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1052a6f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052a6f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1052a6f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a6f8 jb 0x1052a6b0 */
  if (C.cf) goto L_1052a6b0;
  /* 1052a6fa std  */
  C.df=1;
  /* 1052a6fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052a6fd cld  */
  C.df=0;
  /* 1052a6fe jmp dword ptr [edx*4 + 0x1052a7d0] */
  switch (EDX) {
    case 0: goto L_1052a7e0;
    case 1: goto L_1052a7e8;
    case 2: goto L_1052a7f8;
    case 3: goto L_1052a80c;
    default: x86_unimpl("switch@0x1052a6fe out of table"); return;
  }
  /* 1052a705 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052a708:;
  /* 1052a708 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052a70b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a70d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052a710 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052a713 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052a716 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052a719 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a71c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a71f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a722 jb 0x1052a6b0 */
  if (C.cf) goto L_1052a6b0;
  /* 1052a724 std  */
  C.df=1;
  /* 1052a725 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052a727 cld  */
  C.df=0;
  /* 1052a728 jmp dword ptr [edx*4 + 0x1052a7d0] */
  switch (EDX) {
    case 0: goto L_1052a7e0;
    case 1: goto L_1052a7e8;
    case 2: goto L_1052a7f8;
    case 3: goto L_1052a80c;
    default: x86_unimpl("switch@0x1052a728 out of table"); return;
  }
  /* 1052a72f nop  */
  /* nop */
L_1052a730:;
  /* 1052a730 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052a733 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a735 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052a738 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052a73b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052a73e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052a741 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052a744 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052a747 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a74a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a74d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a750 jb 0x1052a6b0 */
  if (C.cf) goto L_1052a6b0;
  /* 1052a756 std  */
  C.df=1;
  /* 1052a757 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052a759 cld  */
  C.df=0;
  /* 1052a75a jmp dword ptr [edx*4 + 0x1052a7d0] */
  switch (EDX) {
    case 0: goto L_1052a7e0;
    case 1: goto L_1052a7e8;
    case 2: goto L_1052a7f8;
    case 3: goto L_1052a80c;
    default: x86_unimpl("switch@0x1052a75a out of table"); return;
  }
  /* 1052a761 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1052a764 test byte ptr [edi - 0x5873efae], ah */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x5873efae)))&(AH); fl_logic(_r,8); }
  /* 1052a76a push edx */
  push32((uint32_t)(EDX));
  /* 1052a76b adc byte ptr [edi - 0x5863efae], dl */
  { uint32_t _a=(r8((uint32_t)(EDI + -0x5863efae))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + -0x5863efae), (_r)); fl_add(_a,_b,_r,8); }
  /* 1052a772 push edx */
  push32((uint32_t)(EDX));
  /* 1052a773 adc byte ptr [edi - 0x5853efae], ah */
  { uint32_t _a=(r8((uint32_t)(EDI + -0x5853efae))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDI + -0x5853efae), (_r)); fl_add(_a,_b,_r,8); }
  /* 1052a77a push edx */
  push32((uint32_t)(EDX));
  /* 1052a77c mov ah, 0xa7 */
  AH = (0xa7u);
  /* 1052a77e push edx */
  push32((uint32_t)(EDX));
  /* 1052a784 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1052a788 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1052a78c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1052a790 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1052a794 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1052a798 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1052a79c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1052a7a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1052a7a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1052a7a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1052a7ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1052a7b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1052a7b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1052a7b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1052a7bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1052a7c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a7c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1052a7c7:;
  /* 1052a7c7 jmp dword ptr [edx*4 + 0x1052a7d0] */
  switch (EDX) {
    case 0: goto L_1052a7e0;
    case 1: goto L_1052a7e8;
    case 2: goto L_1052a7f8;
    case 3: goto L_1052a80c;
    default: x86_unimpl("switch@0x1052a7c7 out of table"); return;
  }
  /* 1052a7ce mov edi, edi */
  EDI = (EDI);
L_1052a7e0:;
  /* 1052a7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a7e3 pop esi */
  ESI = (pop32());
  /* 1052a7e4 pop edi */
  EDI = (pop32());
  /* 1052a7e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052a7e6 ret  */
  ESPCHK(0x1052a4f0u, _esp0);
  ESP += 4; return;
  /* 1052a7e7 nop  */
  /* nop */
L_1052a7e8:;
  /* 1052a7e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052a7eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052a7ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a7f1 pop esi */
  ESI = (pop32());
  /* 1052a7f2 pop edi */
  EDI = (pop32());
  /* 1052a7f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052a7f4 ret  */
  ESPCHK(0x1052a4f0u, _esp0);
  ESP += 4; return;
  /* 1052a7f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052a7f8:;
  /* 1052a7f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052a7fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052a7fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052a801 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052a804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a807 pop esi */
  ESI = (pop32());
  /* 1052a808 pop edi */
  EDI = (pop32());
  /* 1052a809 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052a80a ret  */
  ESPCHK(0x1052a4f0u, _esp0);
  ESP += 4; return;
  /* 1052a80b nop  */
  /* nop */
L_1052a80c:;
  /* 1052a80c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052a80f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052a812 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052a815 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052a818 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052a81b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052a81e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052a821 pop esi */
  ESI = (pop32());
  /* 1052a822 pop edi */
  EDI = (pop32());
  /* 1052a823 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052a824 ret  */
  ESPCHK(0x1052a4f0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1052a830 (104 bytes, 43 insns) */
void f_1052a830(void) {
  FTRACE(0x1052a830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a830 push ebx */
  push32((uint32_t)(EBX));
  /* 1052a831 push esi */
  push32((uint32_t)(ESI));
  /* 1052a832 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1052a836 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052a838 jne 0x1052a852 */
  if (!C.zf) goto L_1052a852;
  /* 1052a83a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1052a83e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1052a842 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a844 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1052a846 mov ebx, eax */
  EBX = (EAX);
  /* 1052a848 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1052a84c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1052a84e mov edx, ebx */
  EDX = (EBX);
  /* 1052a850 jmp 0x1052a893 */
  goto L_1052a893;
L_1052a852:;
  /* 1052a852 mov ecx, eax */
  ECX = (EAX);
  /* 1052a854 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1052a858 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1052a85c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1052a860:;
  /* 1052a860 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1052a862 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1052a864 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1052a866 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1052a868 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052a86a jne 0x1052a860 */
  if (!C.zf) goto L_1052a860;
  /* 1052a86c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1052a86e mov esi, eax */
  ESI = (EAX);
  /* 1052a870 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1052a874 mov ecx, eax */
  ECX = (EAX);
  /* 1052a876 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1052a87a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1052a87c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a87e jb 0x1052a88e */
  if (C.cf) goto L_1052a88e;
  /* 1052a880 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a884 ja 0x1052a88e */
  if ((!C.cf&&!C.zf)) goto L_1052a88e;
  /* 1052a886 jb 0x1052a88f */
  if (C.cf) goto L_1052a88f;
  /* 1052a888 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a88c jbe 0x1052a88f */
  if ((C.cf||C.zf)) goto L_1052a88f;
L_1052a88e:;
  /* 1052a88e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1052a88f:;
  /* 1052a88f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a891 mov eax, esi */
  EAX = (ESI);
L_1052a893:;
  /* 1052a893 pop esi */
  ESI = (pop32());
  /* 1052a894 pop ebx */
  EBX = (pop32());
  /* 1052a895 ret 0x10 */
  ESPCHK(0x1052a830u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1052a8a0 (117 bytes, 44 insns) */
void f_1052a8a0(void) {
  FTRACE(0x1052a8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a8a0 push ebx */
  push32((uint32_t)(EBX));
  /* 1052a8a1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1052a8a5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052a8a7 jne 0x1052a8c1 */
  if (!C.zf) goto L_1052a8c1;
  /* 1052a8a9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1052a8ad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1052a8b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a8b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1052a8b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1052a8b9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1052a8bb mov eax, edx */
  EAX = (EDX);
  /* 1052a8bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052a8bf jmp 0x1052a911 */
  goto L_1052a911;
L_1052a8c1:;
  /* 1052a8c1 mov ecx, eax */
  ECX = (EAX);
  /* 1052a8c3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1052a8c7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1052a8cb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1052a8cf:;
  /* 1052a8cf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1052a8d1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1052a8d3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1052a8d5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1052a8d7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052a8d9 jne 0x1052a8cf */
  if (!C.zf) goto L_1052a8cf;
  /* 1052a8db div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1052a8dd mov ecx, eax */
  ECX = (EAX);
  /* 1052a8df mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1052a8e3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1052a8e4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1052a8e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a8ea jb 0x1052a8fa */
  if (C.cf) goto L_1052a8fa;
  /* 1052a8ec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a8f0 ja 0x1052a8fa */
  if ((!C.cf&&!C.zf)) goto L_1052a8fa;
  /* 1052a8f2 jb 0x1052a902 */
  if (C.cf) goto L_1052a902;
  /* 1052a8f4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a8f8 jbe 0x1052a902 */
  if ((C.cf||C.zf)) goto L_1052a902;
L_1052a8fa:;
  /* 1052a8fa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a8fe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1052a902:;
  /* 1052a902 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a906 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a90a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052a90c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052a90e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1052a911:;
  /* 1052a911 pop ebx */
  EBX = (pop32());
  /* 1052a912 ret 0x10 */
  ESPCHK(0x1052a8a0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a920 @ 0x1052a920 (628 bytes, 214 insns) */
void f_1052a920(void) {
  FTRACE(0x1052a920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052a920 push ebp */
  push32((uint32_t)(EBP));
  /* 1052a921 mov ebp, esp */
  EBP = (ESP);
  /* 1052a923 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052a926 push ebx */
  push32((uint32_t)(EBX));
  /* 1052a927 push esi */
  push32((uint32_t)(ESI));
  /* 1052a928 push edi */
  push32((uint32_t)(EDI));
L_1052a929:;
  /* 1052a929 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a92d jne 0x1052a94d */
  if (!C.zf) goto L_1052a94d;
  /* 1052a92f push 0x1054b034 */
  push32((uint32_t)(0x1054b034u));
  /* 1052a934 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052a936 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1052a938 push 0x1054b028 */
  push32((uint32_t)(0x1054b028u));
  /* 1052a93d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052a93f call 0x10522cd0 */
  push32(0x1052a944u); f_10522cd0();
  /* 1052a944 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052a947 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052a94a jne 0x1052a94d */
  if (!C.zf) goto L_1052a94d;
  /* 1052a94c int3  */
  x86_unimpl("int3 @ 0x1052a94c");
L_1052a94d:;
  /* 1052a94d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052a94f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052a951 jne 0x1052a929 */
  if (!C.zf) goto L_1052a929;
  /* 1052a953 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052a956 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052a959 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a95c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1052a95f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1052a962 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a965 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052a968 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1052a96e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052a970 je 0x1052a97f */
  if (C.zf) goto L_1052a97f;
  /* 1052a972 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a975 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052a978 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1052a97b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052a97d je 0x1052a995 */
  if (C.zf) goto L_1052a995;
L_1052a97f:;
  /* 1052a97f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a982 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1052a985 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1052a987 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a98a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1052a98d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052a990 jmp 0x1052ab8d */
  goto L_1052ab8d;
L_1052a995:;
  /* 1052a995 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a998 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1052a99b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1052a99e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052a9a0 je 0x1052a9ec */
  if (C.zf) goto L_1052a9ec;
  /* 1052a9a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9a5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1052a9ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9af mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1052a9b2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1052a9b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052a9b7 je 0x1052a9d5 */
  if (C.zf) goto L_1052a9d5;
  /* 1052a9b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9bf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1052a9c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1052a9c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052a9ca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1052a9cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9d0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1052a9d3 jmp 0x1052a9ec */
  goto L_1052a9ec;
L_1052a9d5:;
  /* 1052a9d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9d8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052a9db or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1052a9de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9e1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1052a9e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052a9e7 jmp 0x1052ab8d */
  goto L_1052ab8d;
L_1052a9ec:;
  /* 1052a9ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052a9f2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1052a9f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9f8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1052a9fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052a9fe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052aa01 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1052aa04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aa07 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1052aa0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aa0d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1052aa14 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052aa1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052aa1e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1052aa21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aa24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052aa27 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1052aa2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052aa2f jne 0x1052aa5f */
  if (!C.zf) goto L_1052aa5f;
  /* 1052aa31 cmp dword ptr [ebp - 8], 0x1054e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1054e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052aa38 je 0x1052aa43 */
  if (C.zf) goto L_1052aa43;
  /* 1052aa3a cmp dword ptr [ebp - 8], 0x1054e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1054e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052aa41 jne 0x1052aa53 */
  if (!C.zf) goto L_1052aa53;
L_1052aa43:;
  /* 1052aa43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052aa46 push edx */
  push32((uint32_t)(EDX));
  /* 1052aa47 call 0x1052c890 */
  push32(0x1052aa4cu); f_1052c890();
  /* 1052aa4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052aa4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052aa51 jne 0x1052aa5f */
  if (!C.zf) goto L_1052aa5f;
L_1052aa53:;
  /* 1052aa53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aa56 push eax */
  push32((uint32_t)(EAX));
  /* 1052aa57 call 0x1052c7c0 */
  push32(0x1052aa5cu); f_1052c7c0();
  /* 1052aa5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052aa5f:;
  /* 1052aa5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aa62 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052aa65 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1052aa6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052aa6d je 0x1052ab4b */
  if (C.zf) goto L_1052ab4b;
L_1052aa73:;
  /* 1052aa73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aa76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aa79 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1052aa7b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052aa7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052aa80 jge 0x1052aaa3 */
  if ((C.sf==C.of)) goto L_1052aaa3;
  /* 1052aa82 push 0x1054afe8 */
  push32((uint32_t)(0x1054afe8u));
  /* 1052aa87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052aa89 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1052aa8e push 0x1054b028 */
  push32((uint32_t)(0x1054b028u));
  /* 1052aa93 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052aa95 call 0x10522cd0 */
  push32(0x1052aa9au); f_10522cd0();
  /* 1052aa9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052aa9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052aaa0 jne 0x1052aaa3 */
  if (!C.zf) goto L_1052aaa3;
  /* 1052aaa2 int3  */
  x86_unimpl("int3 @ 0x1052aaa2");
L_1052aaa3:;
  /* 1052aaa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052aaa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052aaa7 jne 0x1052aa73 */
  if (!C.zf) goto L_1052aa73;
  /* 1052aaa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aaac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aaaf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1052aab1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052aab4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052aab7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aaba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1052aabd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052aac0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aac3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1052aac5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aac8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1052aacb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052aace mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aad1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1052aad4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052aad8 jle 0x1052aaf6 */
  if ((C.zf||C.sf!=C.of)) goto L_1052aaf6;
  /* 1052aada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052aadd push ecx */
  push32((uint32_t)(ECX));
  /* 1052aade mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052aae1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1052aae4 push eax */
  push32((uint32_t)(EAX));
  /* 1052aae5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052aae8 push ecx */
  push32((uint32_t)(ECX));
  /* 1052aae9 call 0x1052c4b0 */
  push32(0x1052aaeeu); f_1052c4b0();
  /* 1052aaee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052aaf1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1052aaf4 jmp 0x1052ab3e */
  goto L_1052ab3e;
L_1052aaf6:;
  /* 1052aaf6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052aafa je 0x1052ab19 */
  if (C.zf) goto L_1052ab19;
  /* 1052aafc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052aaff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1052ab02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052ab05 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1052ab08 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052ab0b mov ecx, dword ptr [edx*4 + 0x10550f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 1052ab12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ab14 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1052ab17 jmp 0x1052ab20 */
  goto L_1052ab20;
L_1052ab19:;
  /* 1052ab19 mov dword ptr [ebp - 0x14], 0x1054da60 */
  w32((uint32_t)(EBP + -0x14), (0x1054da60u));
L_1052ab20:;
  /* 1052ab20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052ab23 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1052ab27 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1052ab2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052ab2c je 0x1052ab3e */
  if (C.zf) goto L_1052ab3e;
  /* 1052ab2e push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ab30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052ab32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052ab35 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ab36 call 0x1052c360 */
  push32(0x1052ab3bu); f_1052c360();
  /* 1052ab3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052ab3e:;
  /* 1052ab3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052ab41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1052ab44 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1052ab47 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1052ab49 jmp 0x1052ab69 */
  goto L_1052ab69;
L_1052ab4b:;
  /* 1052ab4b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1052ab52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ab55 push edx */
  push32((uint32_t)(EDX));
  /* 1052ab56 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1052ab59 push eax */
  push32((uint32_t)(EAX));
  /* 1052ab5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052ab5d push ecx */
  push32((uint32_t)(ECX));
  /* 1052ab5e call 0x1052c4b0 */
  push32(0x1052ab63u); f_1052c4b0();
  /* 1052ab63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ab66 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1052ab69:;
  /* 1052ab69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052ab6c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ab6f je 0x1052ab85 */
  if (C.zf) goto L_1052ab85;
  /* 1052ab71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052ab74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052ab77 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1052ab7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052ab7d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1052ab80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052ab83 jmp 0x1052ab8d */
  goto L_1052ab8d;
L_1052ab85:;
  /* 1052ab85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ab88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1052ab8d:;
  /* 1052ab8d pop edi */
  EDI = (pop32());
  /* 1052ab8e pop esi */
  ESI = (pop32());
  /* 1052ab8f pop ebx */
  EBX = (pop32());
  /* 1052ab90 mov esp, ebp */
  ESP = (EBP);
  /* 1052ab92 pop ebp */
  EBP = (pop32());
  /* 1052ab93 ret  */
  ESPCHK(0x1052a920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x1052aba0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1052aba0(void) {
  FTRACE(0x1052aba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052aba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052aba1 mov ebp, esp */
  EBP = (ESP);
  /* 1052aba3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052aba9 push ebx */
  push32((uint32_t)(EBX));
  /* 1052abaa push esi */
  push32((uint32_t)(ESI));
  /* 1052abab push edi */
  push32((uint32_t)(EDI));
  /* 1052abac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1052abb3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1052abbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1052abc4:;
  /* 1052abc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052abc7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1052abc9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1052abcc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052abd0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052abd3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052abd6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1052abd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052abdb je 0x1052b7b7 */
  if (C.zf) goto L_1052b7b7;
  /* 1052abe1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052abe8 jl 0x1052b7b7 */
  if ((C.sf!=C.of)) goto L_1052b7b7;
  /* 1052abee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052abf2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052abf5 jl 0x1052ac16 */
  if ((C.sf!=C.of)) goto L_1052ac16;
  /* 1052abf7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052abfb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052abfe jg 0x1052ac16 */
  if ((!C.zf&&C.sf==C.of)) goto L_1052ac16;
  /* 1052ac00 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052ac04 movsx ecx, byte ptr [eax + 0x1054b020] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1054b020))));
  /* 1052ac0b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1052ac0e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1052ac14 jmp 0x1052ac20 */
  goto L_1052ac20;
L_1052ac16:;
  /* 1052ac16 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1052ac20:;
  /* 1052ac20 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1052ac26 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1052ac29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052ac2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052ac2f movsx edx, byte ptr [ecx + eax*8 + 0x1054b040] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1054b040))));
  /* 1052ac37 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1052ac3a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1052ac3d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052ac40 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1052ac46 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ac4d ja 0x1052b7b2 */
  if ((!C.cf&&!C.zf)) goto L_1052b7b2;
  /* 1052ac53 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1052ac59 jmp dword ptr [ecx*4 + 0x1052b7c4] */
  switch (ECX) {
    case 0: goto L_1052ac60;
    case 1: goto L_1052acfa;
    case 2: goto L_1052ad3c;
    case 3: goto L_1052adab;
    case 4: goto L_1052ae03;
    case 5: goto L_1052ae12;
    case 6: goto L_1052ae5e;
    case 7: goto L_1052aef1;
    case 8: goto L_1052ad88;
    case 9: goto L_1052ad93;
    case 10: goto L_1052ad7e;
    case 11: goto L_1052ad73;
    case 12: goto L_1052ad9e;
    case 13: goto L_1052ada6;
    default: x86_unimpl("switch@0x1052ac59 out of table"); return;
  }
L_1052ac60:;
  /* 1052ac60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1052ac67 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052ac6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1052ac70 mov eax, dword ptr [0x1054dc98] */
  EAX = (r32((uint32_t)(0x1054dc98)));
  /* 1052ac75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052ac77 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1052ac7b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1052ac81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052ac83 je 0x1052acdd */
  if (C.zf) goto L_1052acdd;
  /* 1052ac85 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1052ac8b push edx */
  push32((uint32_t)(EDX));
  /* 1052ac8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ac8f push eax */
  push32((uint32_t)(EAX));
  /* 1052ac90 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052ac94 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ac95 call 0x1052b8d0 */
  push32(0x1052ac9au); f_1052b8d0();
  /* 1052ac9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ac9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052aca0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1052aca2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1052aca5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052aca8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052acab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1052acae:;
  /* 1052acae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052acb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052acb4 jne 0x1052acd7 */
  if (!C.zf) goto L_1052acd7;
  /* 1052acb6 push 0x1054b0c0 */
  push32((uint32_t)(0x1054b0c0u));
  /* 1052acbb push 0 */
  push32((uint32_t)(0x0u));
  /* 1052acbd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1052acc2 push 0x1054b0b4 */
  push32((uint32_t)(0x1054b0b4u));
  /* 1052acc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052acc9 call 0x10522cd0 */
  push32(0x1052acceu); f_10522cd0();
  /* 1052acce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052acd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052acd4 jne 0x1052acd7 */
  if (!C.zf) goto L_1052acd7;
  /* 1052acd6 int3  */
  x86_unimpl("int3 @ 0x1052acd6");
L_1052acd7:;
  /* 1052acd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052acd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052acdb jne 0x1052acae */
  if (!C.zf) goto L_1052acae;
L_1052acdd:;
  /* 1052acdd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1052ace3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ace4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ace7 push edx */
  push32((uint32_t)(EDX));
  /* 1052ace8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052acec push eax */
  push32((uint32_t)(EAX));
  /* 1052aced call 0x1052b8d0 */
  push32(0x1052acf2u); f_1052b8d0();
  /* 1052acf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052acf5 jmp 0x1052b7b2 */
  goto L_1052b7b2;
L_1052acfa:;
  /* 1052acfa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1052ad01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052ad04 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1052ad0a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1052ad10 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1052ad16 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1052ad1c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1052ad1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052ad26 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1052ad30 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1052ad37 jmp 0x1052b7b2 */
  goto L_1052b7b2;
L_1052ad3c:;
  /* 1052ad3c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052ad40 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1052ad46 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1052ad4c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052ad4f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1052ad55 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ad5c ja 0x1052ada6 */
  if ((!C.cf&&!C.zf)) goto L_1052ada6;
  /* 1052ad5e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1052ad64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052ad66 mov al, byte ptr [ecx + 0x1052b7fc] */
  AL = (r8((uint32_t)(ECX + 0x1052b7fc)));
  /* 1052ad6c jmp dword ptr [eax*4 + 0x1052b7e4] */
  switch (EAX) {
    case 0: goto L_1052ad88;
    case 1: goto L_1052ad93;
    case 2: goto L_1052ad7e;
    case 3: goto L_1052ad73;
    case 4: goto L_1052ad9e;
    case 5: goto L_1052ada6;
    default: x86_unimpl("switch@0x1052ad6c out of table"); return;
  }
L_1052ad73:;
  /* 1052ad73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ad76 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1052ad79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052ad7c jmp 0x1052ada6 */
  goto L_1052ada6;
L_1052ad7e:;
  /* 1052ad7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ad81 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1052ad83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052ad86 jmp 0x1052ada6 */
  goto L_1052ada6;
L_1052ad88:;
  /* 1052ad88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ad8b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1052ad8e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052ad91 jmp 0x1052ada6 */
  goto L_1052ada6;
L_1052ad93:;
  /* 1052ad93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ad96 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1052ad99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052ad9c jmp 0x1052ada6 */
  goto L_1052ada6;
L_1052ad9e:;
  /* 1052ad9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ada1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1052ada3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052ada6:;
  /* 1052ada6 jmp 0x1052b7b2 */
  goto L_1052b7b2;
L_1052adab:;
  /* 1052adab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052adaf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052adb2 jne 0x1052ade7 */
  if (!C.zf) goto L_1052ade7;
  /* 1052adb4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1052adb7 push edx */
  push32((uint32_t)(EDX));
  /* 1052adb8 call 0x1052b9e0 */
  push32(0x1052adbdu); f_1052b9e0();
  /* 1052adbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052adc0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1052adc6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052adcd jge 0x1052ade5 */
  if ((C.sf==C.of)) goto L_1052ade5;
  /* 1052adcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052add2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1052add4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052add7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1052addd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052addf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1052ade5:;
  /* 1052ade5 jmp 0x1052adfe */
  goto L_1052adfe;
L_1052ade7:;
  /* 1052ade7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1052aded imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052adf0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052adf4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1052adf8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1052adfe:;
  /* 1052adfe jmp 0x1052b7b2 */
  goto L_1052b7b2;
L_1052ae03:;
  /* 1052ae03 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1052ae0d jmp 0x1052b7b2 */
  goto L_1052b7b2;
L_1052ae12:;
  /* 1052ae12 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052ae16 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ae19 jne 0x1052ae42 */
  if (!C.zf) goto L_1052ae42;
  /* 1052ae1b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1052ae1e push eax */
  push32((uint32_t)(EAX));
  /* 1052ae1f call 0x1052b9e0 */
  push32(0x1052ae24u); f_1052b9e0();
  /* 1052ae24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ae27 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1052ae2d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ae34 jge 0x1052ae40 */
  if ((C.sf==C.of)) goto L_1052ae40;
  /* 1052ae36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1052ae40:;
  /* 1052ae40 jmp 0x1052ae59 */
  goto L_1052ae59;
L_1052ae42:;
  /* 1052ae42 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1052ae48 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052ae4b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052ae4f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1052ae53 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1052ae59:;
  /* 1052ae59 jmp 0x1052b7b2 */
  goto L_1052b7b2;
L_1052ae5e:;
  /* 1052ae5e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052ae62 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1052ae68 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1052ae6e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052ae71 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1052ae77 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ae7e ja 0x1052aeec */
  if ((!C.cf&&!C.zf)) goto L_1052aeec;
  /* 1052ae80 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1052ae86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052ae88 mov al, byte ptr [ecx + 0x1052b821] */
  AL = (r8((uint32_t)(ECX + 0x1052b821)));
  /* 1052ae8e jmp dword ptr [eax*4 + 0x1052b80d] */
  switch (EAX) {
    case 0: goto L_1052aea0;
    case 1: goto L_1052aed9;
    case 2: goto L_1052ae95;
    case 3: goto L_1052aee3;
    case 4: goto L_1052aeec;
    default: x86_unimpl("switch@0x1052ae8e out of table"); return;
  }
L_1052ae95:;
  /* 1052ae95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ae98 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1052ae9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052ae9e jmp 0x1052aeec */
  goto L_1052aeec;
L_1052aea0:;
  /* 1052aea0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052aea3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052aea6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052aea9 jne 0x1052aecb */
  if (!C.zf) goto L_1052aecb;
  /* 1052aeab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052aeae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1052aeb2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052aeb5 jne 0x1052aecb */
  if (!C.zf) goto L_1052aecb;
  /* 1052aeb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052aeba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052aebd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1052aec0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052aec3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1052aec6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052aec9 jmp 0x1052aed7 */
  goto L_1052aed7;
L_1052aecb:;
  /* 1052aecb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1052aed2 jmp 0x1052ac60 */
  goto L_1052ac60;
L_1052aed7:;
  /* 1052aed7 jmp 0x1052aeec */
  goto L_1052aeec;
L_1052aed9:;
  /* 1052aed9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052aedc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1052aede mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052aee1 jmp 0x1052aeec */
  goto L_1052aeec;
L_1052aee3:;
  /* 1052aee3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052aee6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1052aee9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1052aeec:;
  /* 1052aeec jmp 0x1052b7b2 */
  goto L_1052b7b2;
L_1052aef1:;
  /* 1052aef1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052aef5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1052aefb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1052af01 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052af04 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1052af0a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052af11 ja 0x1052b5d7 */
  if ((!C.cf&&!C.zf)) goto L_1052b5d7;
  /* 1052af17 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1052af1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052af1f mov cl, byte ptr [edx + 0x1052b88c] */
  CL = (r8((uint32_t)(EDX + 0x1052b88c)));
  /* 1052af25 jmp dword ptr [ecx*4 + 0x1052b850] */
  switch (ECX) {
    case 0: goto L_1052af2c;
    case 1: goto L_1052b1c0;
    case 2: goto L_1052b050;
    case 3: goto L_1052b2f9;
    case 4: goto L_1052afbb;
    case 5: goto L_1052af41;
    case 6: goto L_1052b2cb;
    case 7: goto L_1052b1d0;
    case 8: goto L_1052b175;
    case 9: goto L_1052b345;
    case 10: goto L_1052b2ef;
    case 11: goto L_1052b066;
    case 12: goto L_1052b2e3;
    case 13: goto L_1052b305;
    case 14: goto L_1052b5d7;
    default: x86_unimpl("switch@0x1052af25 out of table"); return;
  }
L_1052af2c:;
  /* 1052af2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052af2f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1052af34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052af36 jne 0x1052af41 */
  if (!C.zf) goto L_1052af41;
  /* 1052af38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052af3b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1052af3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1052af41:;
  /* 1052af41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052af44 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1052af4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052af4c je 0x1052af87 */
  if (C.zf) goto L_1052af87;
  /* 1052af4e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1052af51 push eax */
  push32((uint32_t)(EAX));
  /* 1052af52 call 0x1052ba20 */
  push32(0x1052af57u); f_1052ba20();
  /* 1052af57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052af5a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1052af5e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1052af62 push ecx */
  push32((uint32_t)(ECX));
  /* 1052af63 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1052af69 push edx */
  push32((uint32_t)(EDX));
  /* 1052af6a call 0x1052cb00 */
  push32(0x1052af6fu); f_1052cb00();
  /* 1052af6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052af72 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1052af75 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052af79 jge 0x1052af85 */
  if ((C.sf==C.of)) goto L_1052af85;
  /* 1052af7b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1052af85:;
  /* 1052af85 jmp 0x1052afad */
  goto L_1052afad;
L_1052af87:;
  /* 1052af87 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1052af8a push eax */
  push32((uint32_t)(EAX));
  /* 1052af8b call 0x1052b9e0 */
  push32(0x1052af90u); f_1052b9e0();
  /* 1052af90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052af93 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1052af9a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1052afa0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1052afa6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1052afad:;
  /* 1052afad lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1052afb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1052afb6 jmp 0x1052b5d7 */
  goto L_1052b5d7;
L_1052afbb:;
  /* 1052afbb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1052afbe push eax */
  push32((uint32_t)(EAX));
  /* 1052afbf call 0x1052b9e0 */
  push32(0x1052afc4u); f_1052b9e0();
  /* 1052afc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052afc7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1052afcd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052afd4 je 0x1052afe2 */
  if (C.zf) goto L_1052afe2;
  /* 1052afd6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1052afdc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052afe0 jne 0x1052affc */
  if (!C.zf) goto L_1052affc;
L_1052afe2:;
  /* 1052afe2 mov edx, dword ptr [0x1054dfb0] */
  EDX = (r32((uint32_t)(0x1054dfb0)));
  /* 1052afe8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1052afeb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052afee push eax */
  push32((uint32_t)(EAX));
  /* 1052afef call 0x10526a40 */
  push32(0x1052aff4u); f_10526a40();
  /* 1052aff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052aff7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1052affa jmp 0x1052b04b */
  goto L_1052b04b;
L_1052affc:;
  /* 1052affc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052afff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1052b005 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052b007 je 0x1052b02c */
  if (C.zf) goto L_1052b02c;
  /* 1052b009 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1052b00f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1052b012 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1052b015 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1052b01b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1052b01e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1052b020 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1052b023 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1052b02a jmp 0x1052b04b */
  goto L_1052b04b;
L_1052b02c:;
  /* 1052b02c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1052b033 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1052b039 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1052b03c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1052b03f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1052b045 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1052b048 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1052b04b:;
  /* 1052b04b jmp 0x1052b5d7 */
  goto L_1052b5d7;
L_1052b050:;
  /* 1052b050 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b053 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1052b059 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052b05b jne 0x1052b066 */
  if (!C.zf) goto L_1052b066;
  /* 1052b05d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b060 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1052b063 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1052b066:;
  /* 1052b066 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b06d jne 0x1052b07b */
  if (!C.zf) goto L_1052b07b;
  /* 1052b06f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1052b079 jmp 0x1052b087 */
  goto L_1052b087;
L_1052b07b:;
  /* 1052b07b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1052b081 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1052b087:;
  /* 1052b087 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1052b08d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1052b093 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1052b096 push edx */
  push32((uint32_t)(EDX));
  /* 1052b097 call 0x1052b9e0 */
  push32(0x1052b09cu); f_1052b9e0();
  /* 1052b09c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b09f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1052b0a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b0a5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b0aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b0ac je 0x1052b116 */
  if (C.zf) goto L_1052b116;
  /* 1052b0ae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b0b2 jne 0x1052b0bd */
  if (!C.zf) goto L_1052b0bd;
  /* 1052b0b4 mov ecx, dword ptr [0x1054dfb4] */
  ECX = (r32((uint32_t)(0x1054dfb4)));
  /* 1052b0ba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1052b0bd:;
  /* 1052b0bd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1052b0c4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b0c7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1052b0cd:;
  /* 1052b0cd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1052b0d3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1052b0d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b0dc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1052b0e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b0e4 je 0x1052b106 */
  if (C.zf) goto L_1052b106;
  /* 1052b0e6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1052b0ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052b0ee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1052b0f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b0f3 je 0x1052b106 */
  if (C.zf) goto L_1052b106;
  /* 1052b0f5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1052b0fb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b0fe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1052b104 jmp 0x1052b0cd */
  goto L_1052b0cd;
L_1052b106:;
  /* 1052b106 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1052b10c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b10f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1052b111 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1052b114 jmp 0x1052b170 */
  goto L_1052b170;
L_1052b116:;
  /* 1052b116 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b11a jne 0x1052b124 */
  if (!C.zf) goto L_1052b124;
  /* 1052b11c mov eax, dword ptr [0x1054dfb0] */
  EAX = (r32((uint32_t)(0x1054dfb0)));
  /* 1052b121 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1052b124:;
  /* 1052b124 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b127 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1052b12d:;
  /* 1052b12d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1052b133 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1052b139 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b13c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1052b142 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b144 je 0x1052b164 */
  if (C.zf) goto L_1052b164;
  /* 1052b146 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1052b14c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052b14f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b151 je 0x1052b164 */
  if (C.zf) goto L_1052b164;
  /* 1052b153 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1052b159 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b15c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1052b162 jmp 0x1052b12d */
  goto L_1052b12d;
L_1052b164:;
  /* 1052b164 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1052b16a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b16d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1052b170:;
  /* 1052b170 jmp 0x1052b5d7 */
  goto L_1052b5d7;
L_1052b175:;
  /* 1052b175 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1052b178 push edx */
  push32((uint32_t)(EDX));
  /* 1052b179 call 0x1052b9e0 */
  push32(0x1052b17eu); f_1052b9e0();
  /* 1052b17e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b181 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1052b187 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b18a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b18d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b18f je 0x1052b1a3 */
  if (C.zf) goto L_1052b1a3;
  /* 1052b191 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1052b197 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1052b19e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1052b1a1 jmp 0x1052b1b1 */
  goto L_1052b1b1;
L_1052b1a3:;
  /* 1052b1a3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1052b1a9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1052b1af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1052b1b1:;
  /* 1052b1b1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1052b1bb jmp 0x1052b5d7 */
  goto L_1052b5d7;
L_1052b1c0:;
  /* 1052b1c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1052b1c7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1052b1ca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1052b1cd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1052b1d0:;
  /* 1052b1d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b1d3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1052b1d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052b1d8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1052b1de mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1052b1e1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b1e8 jge 0x1052b1f6 */
  if ((C.sf==C.of)) goto L_1052b1f6;
  /* 1052b1ea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1052b1f4 jmp 0x1052b212 */
  goto L_1052b212;
L_1052b1f6:;
  /* 1052b1f6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b1fd jne 0x1052b212 */
  if (!C.zf) goto L_1052b212;
  /* 1052b1ff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052b203 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b206 jne 0x1052b212 */
  if (!C.zf) goto L_1052b212;
  /* 1052b208 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1052b212:;
  /* 1052b212 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052b215 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b218 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1052b21b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052b21e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b221 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052b223 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1052b226 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1052b22c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1052b232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052b235 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b236 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1052b23c push edx */
  push32((uint32_t)(EDX));
  /* 1052b23d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052b241 push eax */
  push32((uint32_t)(EAX));
  /* 1052b242 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b245 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b246 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1052b24c push edx */
  push32((uint32_t)(EDX));
  /* 1052b24d call dword ptr [0x1054e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054e3a0))), 0x1052b253u);
  /* 1052b253 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b256 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b259 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b25e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b260 je 0x1052b278 */
  if (C.zf) goto L_1052b278;
  /* 1052b262 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b269 jne 0x1052b278 */
  if (!C.zf) goto L_1052b278;
  /* 1052b26b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b26e push ecx */
  push32((uint32_t)(ECX));
  /* 1052b26f call dword ptr [0x1054e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054e3ac))), 0x1052b275u);
  /* 1052b275 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052b278:;
  /* 1052b278 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1052b27c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b27f jne 0x1052b29a */
  if (!C.zf) goto L_1052b29a;
  /* 1052b281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b284 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b28b jne 0x1052b29a */
  if (!C.zf) goto L_1052b29a;
  /* 1052b28d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b290 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b291 call dword ptr [0x1054e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054e3a4))), 0x1052b297u);
  /* 1052b297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052b29a:;
  /* 1052b29a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b29d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1052b2a0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b2a3 jne 0x1052b2b7 */
  if (!C.zf) goto L_1052b2b7;
  /* 1052b2a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b2a8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1052b2ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052b2ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b2b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b2b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1052b2b7:;
  /* 1052b2b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b2ba push eax */
  push32((uint32_t)(EAX));
  /* 1052b2bb call 0x10526a40 */
  push32(0x1052b2c0u); f_10526a40();
  /* 1052b2c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b2c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1052b2c6 jmp 0x1052b5d7 */
  goto L_1052b5d7;
L_1052b2cb:;
  /* 1052b2cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b2ce or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1052b2d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052b2d4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1052b2de jmp 0x1052b365 */
  goto L_1052b365;
L_1052b2e3:;
  /* 1052b2e3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1052b2ed jmp 0x1052b365 */
  goto L_1052b365;
L_1052b2ef:;
  /* 1052b2ef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1052b2f9:;
  /* 1052b2f9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1052b303 jmp 0x1052b30f */
  goto L_1052b30f;
L_1052b305:;
  /* 1052b305 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1052b30f:;
  /* 1052b30f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1052b319 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b31c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1052b322 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b324 je 0x1052b343 */
  if (C.zf) goto L_1052b343;
  /* 1052b326 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1052b32d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1052b333 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b336 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1052b33c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1052b343:;
  /* 1052b343 jmp 0x1052b365 */
  goto L_1052b365;
L_1052b345:;
  /* 1052b345 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1052b34f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b352 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1052b358 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052b35a je 0x1052b365 */
  if (C.zf) goto L_1052b365;
  /* 1052b35c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b35f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1052b362 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1052b365:;
  /* 1052b365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b368 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b36d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b36f je 0x1052b38e */
  if (C.zf) goto L_1052b38e;
  /* 1052b371 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1052b374 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b375 call 0x1052ba00 */
  push32(0x1052b37au); f_1052ba00();
  /* 1052b37a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b37d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1052b383 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1052b389 jmp 0x1052b41f */
  goto L_1052b41f;
L_1052b38e:;
  /* 1052b38e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b391 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1052b394 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b396 je 0x1052b3e0 */
  if (C.zf) goto L_1052b3e0;
  /* 1052b398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b39b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b39e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b3a0 je 0x1052b3c0 */
  if (C.zf) goto L_1052b3c0;
  /* 1052b3a2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1052b3a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b3a6 call 0x1052b9e0 */
  push32(0x1052b3abu); f_1052b9e0();
  /* 1052b3ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b3ae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1052b3b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1052b3b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1052b3b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1052b3be jmp 0x1052b3de */
  goto L_1052b3de;
L_1052b3c0:;
  /* 1052b3c0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1052b3c3 push edx */
  push32((uint32_t)(EDX));
  /* 1052b3c4 call 0x1052b9e0 */
  push32(0x1052b3c9u); f_1052b9e0();
  /* 1052b3c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b3cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052b3d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1052b3d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1052b3d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1052b3de:;
  /* 1052b3de jmp 0x1052b41f */
  goto L_1052b41f;
L_1052b3e0:;
  /* 1052b3e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b3e3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b3e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b3e8 je 0x1052b405 */
  if (C.zf) goto L_1052b405;
  /* 1052b3ea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1052b3ed push ecx */
  push32((uint32_t)(ECX));
  /* 1052b3ee call 0x1052b9e0 */
  push32(0x1052b3f3u); f_1052b9e0();
  /* 1052b3f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b3f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1052b3f7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1052b3fd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1052b403 jmp 0x1052b41f */
  goto L_1052b41f;
L_1052b405:;
  /* 1052b405 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1052b408 push edx */
  push32((uint32_t)(EDX));
  /* 1052b409 call 0x1052b9e0 */
  push32(0x1052b40eu); f_1052b9e0();
  /* 1052b40e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b411 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052b413 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1052b419 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1052b41f:;
  /* 1052b41f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b422 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1052b425 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b427 je 0x1052b467 */
  if (C.zf) goto L_1052b467;
  /* 1052b429 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b430 jg 0x1052b467 */
  if ((!C.zf&&C.sf==C.of)) goto L_1052b467;
  /* 1052b432 jl 0x1052b43d */
  if ((C.sf!=C.of)) goto L_1052b43d;
  /* 1052b434 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b43b jae 0x1052b467 */
  if (!C.cf) goto L_1052b467;
L_1052b43d:;
  /* 1052b43d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1052b443 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052b445 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1052b44b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b44e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052b450 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1052b456 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1052b45c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b45f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1052b462 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052b465 jmp 0x1052b47f */
  goto L_1052b47f;
L_1052b467:;
  /* 1052b467 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1052b46d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1052b473 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1052b479 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1052b47f:;
  /* 1052b47f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b482 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1052b488 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b48a jne 0x1052b4a7 */
  if (!C.zf) goto L_1052b4a7;
  /* 1052b48c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1052b492 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1052b498 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1052b49b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1052b4a1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1052b4a7:;
  /* 1052b4a7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b4ae jge 0x1052b4bc */
  if ((C.sf==C.of)) goto L_1052b4bc;
  /* 1052b4b0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1052b4ba jmp 0x1052b4c5 */
  goto L_1052b4c5;
L_1052b4bc:;
  /* 1052b4bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b4bf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1052b4c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1052b4c5:;
  /* 1052b4c5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1052b4cb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1052b4d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b4d3 jne 0x1052b4dc */
  if (!C.zf) goto L_1052b4dc;
  /* 1052b4d5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1052b4dc:;
  /* 1052b4dc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1052b4df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1052b4e2:;
  /* 1052b4e2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1052b4e8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1052b4ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b4f1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1052b4f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b4f9 jg 0x1052b50f */
  if ((!C.zf&&C.sf==C.of)) goto L_1052b50f;
  /* 1052b4fb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1052b501 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1052b507 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052b509 je 0x1052b590 */
  if (C.zf) goto L_1052b590;
L_1052b50f:;
  /* 1052b50f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1052b515 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1052b516 push edx */
  push32((uint32_t)(EDX));
  /* 1052b517 push eax */
  push32((uint32_t)(EAX));
  /* 1052b518 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1052b51e push edx */
  push32((uint32_t)(EDX));
  /* 1052b51f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1052b525 push eax */
  push32((uint32_t)(EAX));
  /* 1052b526 call 0x1052a8a0 */
  push32(0x1052b52bu); f_1052a8a0();
  /* 1052b52b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b52e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1052b534 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1052b53a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1052b53b push edx */
  push32((uint32_t)(EDX));
  /* 1052b53c push eax */
  push32((uint32_t)(EAX));
  /* 1052b53d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1052b543 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b544 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1052b54a push edx */
  push32((uint32_t)(EDX));
  /* 1052b54b call 0x1052a830 */
  push32(0x1052b550u); f_1052a830();
  /* 1052b550 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1052b556 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1052b55c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b563 jle 0x1052b577 */
  if ((C.zf||C.sf!=C.of)) goto L_1052b577;
  /* 1052b565 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1052b56b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b571 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1052b577:;
  /* 1052b577 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b57a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1052b580 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1052b582 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b585 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b588 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1052b58b jmp 0x1052b4e2 */
  goto L_1052b4e2;
L_1052b590:;
  /* 1052b590 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1052b593 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b596 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1052b599 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b59c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b59f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1052b5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b5a5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b5aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b5ac je 0x1052b5d7 */
  if (C.zf) goto L_1052b5d7;
  /* 1052b5ae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b5b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052b5b4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b5b7 jne 0x1052b5bf */
  if (!C.zf) goto L_1052b5bf;
  /* 1052b5b9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b5bd jne 0x1052b5d7 */
  if (!C.zf) goto L_1052b5d7;
L_1052b5bf:;
  /* 1052b5bf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b5c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b5c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1052b5c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b5cb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1052b5ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052b5d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b5d4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1052b5d7:;
  /* 1052b5d7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b5de jne 0x1052b7b2 */
  if (!C.zf) goto L_1052b7b2;
  /* 1052b5e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b5e7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b5ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b5ec je 0x1052b63d */
  if (C.zf) goto L_1052b63d;
  /* 1052b5ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b5f1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1052b5f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052b5f9 je 0x1052b60b */
  if (C.zf) goto L_1052b60b;
  /* 1052b5fb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1052b602 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1052b609 jmp 0x1052b63d */
  goto L_1052b63d;
L_1052b60b:;
  /* 1052b60b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b60e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1052b611 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b613 je 0x1052b625 */
  if (C.zf) goto L_1052b625;
  /* 1052b615 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1052b61c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1052b623 jmp 0x1052b63d */
  goto L_1052b63d;
L_1052b625:;
  /* 1052b625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b628 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1052b62b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b62d je 0x1052b63d */
  if (C.zf) goto L_1052b63d;
  /* 1052b62f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1052b636 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1052b63d:;
  /* 1052b63d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1052b643 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b646 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b649 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1052b64f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b652 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1052b655 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b657 jne 0x1052b675 */
  if (!C.zf) goto L_1052b675;
  /* 1052b659 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1052b65f push eax */
  push32((uint32_t)(EAX));
  /* 1052b660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b663 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b664 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1052b66a push edx */
  push32((uint32_t)(EDX));
  /* 1052b66b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1052b66d call 0x1052b950 */
  push32(0x1052b672u); f_1052b950();
  /* 1052b672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052b675:;
  /* 1052b675 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1052b67b push eax */
  push32((uint32_t)(EAX));
  /* 1052b67c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b67f push ecx */
  push32((uint32_t)(ECX));
  /* 1052b680 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052b683 push edx */
  push32((uint32_t)(EDX));
  /* 1052b684 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1052b68a push eax */
  push32((uint32_t)(EAX));
  /* 1052b68b call 0x1052b990 */
  push32(0x1052b690u); f_1052b990();
  /* 1052b690 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b696 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1052b699 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052b69b je 0x1052b6c3 */
  if (C.zf) goto L_1052b6c3;
  /* 1052b69d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b6a0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1052b6a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b6a5 jne 0x1052b6c3 */
  if (!C.zf) goto L_1052b6c3;
  /* 1052b6a7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1052b6ad push eax */
  push32((uint32_t)(EAX));
  /* 1052b6ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b6b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b6b2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1052b6b8 push edx */
  push32((uint32_t)(EDX));
  /* 1052b6b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1052b6bb call 0x1052b950 */
  push32(0x1052b6c0u); f_1052b950();
  /* 1052b6c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052b6c3:;
  /* 1052b6c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b6c7 je 0x1052b771 */
  if (C.zf) goto L_1052b771;
  /* 1052b6cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b6d1 jle 0x1052b771 */
  if ((C.zf||C.sf!=C.of)) goto L_1052b771;
  /* 1052b6d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b6da mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1052b6e0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052b6e3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1052b6e9:;
  /* 1052b6e9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1052b6ef mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1052b6f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b6f8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1052b6fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b700 je 0x1052b76f */
  if (C.zf) goto L_1052b76f;
  /* 1052b702 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1052b708 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1052b70b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1052b712 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1052b719 push eax */
  push32((uint32_t)(EAX));
  /* 1052b71a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1052b720 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b721 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1052b727 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b72a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1052b730 call 0x1052cb00 */
  push32(0x1052b735u); f_1052cb00();
  /* 1052b735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b738 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1052b73e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b745 jg 0x1052b749 */
  if ((!C.zf&&C.sf==C.of)) goto L_1052b749;
  /* 1052b747 jmp 0x1052b76f */
  goto L_1052b76f;
L_1052b749:;
  /* 1052b749 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1052b74f push eax */
  push32((uint32_t)(EAX));
  /* 1052b750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b753 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b754 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1052b75a push edx */
  push32((uint32_t)(EDX));
  /* 1052b75b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1052b761 push eax */
  push32((uint32_t)(EAX));
  /* 1052b762 call 0x1052b990 */
  push32(0x1052b767u); f_1052b990();
  /* 1052b767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b76a jmp 0x1052b6e9 */
  goto L_1052b6e9;
L_1052b76f:;
  /* 1052b76f jmp 0x1052b78c */
  goto L_1052b78c;
L_1052b771:;
  /* 1052b771 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1052b777 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b77b push edx */
  push32((uint32_t)(EDX));
  /* 1052b77c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052b77f push eax */
  push32((uint32_t)(EAX));
  /* 1052b780 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052b783 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b784 call 0x1052b990 */
  push32(0x1052b789u); f_1052b990();
  /* 1052b789 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052b78c:;
  /* 1052b78c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b78f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1052b792 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052b794 je 0x1052b7b2 */
  if (C.zf) goto L_1052b7b2;
  /* 1052b796 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1052b79c push eax */
  push32((uint32_t)(EAX));
  /* 1052b79d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b7a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b7a1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1052b7a7 push edx */
  push32((uint32_t)(EDX));
  /* 1052b7a8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1052b7aa call 0x1052b950 */
  push32(0x1052b7afu); f_1052b950();
  /* 1052b7af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052b7b2:;
  /* 1052b7b2 jmp 0x1052abc4 */
  goto L_1052abc4;
L_1052b7b7:;
  /* 1052b7b7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1052b7bd pop edi */
  EDI = (pop32());
  /* 1052b7be pop esi */
  ESI = (pop32());
  /* 1052b7bf pop ebx */
  EBX = (pop32());
  /* 1052b7c0 mov esp, ebp */
  ESP = (EBP);
  /* 1052b7c2 pop ebp */
  EBP = (pop32());
  /* 1052b7c3 ret  */
  ESPCHK(0x1052aba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8d0 @ 0x1052b8d0 (119 bytes, 44 insns) */
void f_1052b8d0(void) {
  FTRACE(0x1052b8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052b8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052b8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1052b8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052b8d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b8d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1052b8da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b8dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b8e0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1052b8e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b8e6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b8ea jl 0x1052b912 */
  if ((C.sf!=C.of)) goto L_1052b912;
  /* 1052b8ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b8ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052b8f1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1052b8f4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1052b8f6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1052b8fa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1052b900 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052b903 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b906 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1052b908 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b90b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b90e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1052b910 jmp 0x1052b925 */
  goto L_1052b925;
L_1052b912:;
  /* 1052b912 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b915 push edx */
  push32((uint32_t)(EDX));
  /* 1052b916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b919 push eax */
  push32((uint32_t)(EAX));
  /* 1052b91a call 0x1052a920 */
  push32(0x1052b91fu); f_1052a920();
  /* 1052b91f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b922 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052b925:;
  /* 1052b925 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b929 jne 0x1052b936 */
  if (!C.zf) goto L_1052b936;
  /* 1052b92b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052b92e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1052b934 jmp 0x1052b943 */
  goto L_1052b943;
L_1052b936:;
  /* 1052b936 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052b939 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1052b93b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b93e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052b941 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1052b943:;
  /* 1052b943 mov esp, ebp */
  ESP = (EBP);
  /* 1052b945 pop ebp */
  EBP = (pop32());
  /* 1052b946 ret  */
  ESPCHK(0x1052b8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x1052b950 (53 bytes, 23 insns) */
void f_1052b950(void) {
  FTRACE(0x1052b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052b950 push ebp */
  push32((uint32_t)(EBP));
  /* 1052b951 mov ebp, esp */
  EBP = (ESP);
L_1052b953:;
  /* 1052b953 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b956 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b959 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b95c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1052b95f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b961 jle 0x1052b983 */
  if ((C.zf||C.sf!=C.of)) goto L_1052b983;
  /* 1052b963 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052b966 push edx */
  push32((uint32_t)(EDX));
  /* 1052b967 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052b96a push eax */
  push32((uint32_t)(EAX));
  /* 1052b96b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b96e push ecx */
  push32((uint32_t)(ECX));
  /* 1052b96f call 0x1052b8d0 */
  push32(0x1052b974u); f_1052b8d0();
  /* 1052b974 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b977 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052b97a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b97d jne 0x1052b981 */
  if (!C.zf) goto L_1052b981;
  /* 1052b97f jmp 0x1052b983 */
  goto L_1052b983;
L_1052b981:;
  /* 1052b981 jmp 0x1052b953 */
  goto L_1052b953;
L_1052b983:;
  /* 1052b983 pop ebp */
  EBP = (pop32());
  /* 1052b984 ret  */
  ESPCHK(0x1052b950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b990 @ 0x1052b990 (74 bytes, 31 insns) */
void f_1052b990(void) {
  FTRACE(0x1052b990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052b990 push ebp */
  push32((uint32_t)(EBP));
  /* 1052b991 mov ebp, esp */
  EBP = (ESP);
  /* 1052b993 push ecx */
  push32((uint32_t)(ECX));
L_1052b994:;
  /* 1052b994 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b997 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052b99a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052b99d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1052b9a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052b9a2 jle 0x1052b9d6 */
  if ((C.zf||C.sf!=C.of)) goto L_1052b9d6;
  /* 1052b9a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052b9a7 push edx */
  push32((uint32_t)(EDX));
  /* 1052b9a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052b9ab push eax */
  push32((uint32_t)(EAX));
  /* 1052b9ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b9af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052b9b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052b9b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052b9b8 push eax */
  push32((uint32_t)(EAX));
  /* 1052b9b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b9bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b9bf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1052b9c2 call 0x1052b8d0 */
  push32(0x1052b9c7u); f_1052b8d0();
  /* 1052b9c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b9ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052b9cd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052b9d0 jne 0x1052b9d4 */
  if (!C.zf) goto L_1052b9d4;
  /* 1052b9d2 jmp 0x1052b9d6 */
  goto L_1052b9d6;
L_1052b9d4:;
  /* 1052b9d4 jmp 0x1052b994 */
  goto L_1052b994;
L_1052b9d6:;
  /* 1052b9d6 mov esp, ebp */
  ESP = (EBP);
  /* 1052b9d8 pop ebp */
  EBP = (pop32());
  /* 1052b9d9 ret  */
  ESPCHK(0x1052b990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e0 @ 0x1052b9e0 (26 bytes, 12 insns) */
void f_1052b9e0(void) {
  FTRACE(0x1052b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1052b9e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b9e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052b9e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052b9eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b9ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1052b9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052b9f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052b9f5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1052b9f8 pop ebp */
  EBP = (pop32());
  /* 1052b9f9 ret  */
  ESPCHK(0x1052b9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba00 @ 0x1052ba00 (31 bytes, 14 insns) */
void f_1052ba00(void) {
  FTRACE(0x1052ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ba01 mov ebp, esp */
  EBP = (ESP);
  /* 1052ba03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ba06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052ba08 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ba0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ba0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1052ba10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ba13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052ba15 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052ba18 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1052ba1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1052ba1d pop ebp */
  EBP = (pop32());
  /* 1052ba1e ret  */
  ESPCHK(0x1052ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba20 @ 0x1052ba20 (27 bytes, 12 insns) */
void f_1052ba20(void) {
  FTRACE(0x1052ba20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ba20 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ba21 mov ebp, esp */
  EBP = (ESP);
  /* 1052ba23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ba26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052ba28 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ba2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ba2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1052ba30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ba33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052ba35 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1052ba39 pop ebp */
  EBP = (pop32());
  /* 1052ba3a ret  */
  ESPCHK(0x1052ba20u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1052ba40 (145 bytes, 42 insns) */
void f_1052ba40(void) {
  FTRACE(0x1052ba40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ba40 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ba41 mov ebp, esp */
  EBP = (ESP);
  /* 1052ba43 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ba44 call 0x1052baf0 */
  push32(0x1052ba49u); f_1052baf0();
  /* 1052ba49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ba4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1052ba4e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052ba55 jmp 0x1052ba60 */
  goto L_1052ba60;
L_1052ba57:;
  /* 1052ba57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ba5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ba5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1052ba60:;
  /* 1052ba60 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ba64 jae 0x1052ba8a */
  if (!C.cf) goto L_1052ba8a;
  /* 1052ba66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ba69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ba6c cmp ecx, dword ptr [eax*8 + 0x1054dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1054dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ba73 jne 0x1052ba88 */
  if (!C.zf) goto L_1052ba88;
  /* 1052ba75 call 0x1052bae0 */
  push32(0x1052ba7au); f_1052bae0();
  /* 1052ba7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ba7d mov ecx, dword ptr [edx*8 + 0x1054dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1054dfbc)));
  /* 1052ba84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1052ba86 jmp 0x1052bacd */
  goto L_1052bacd;
L_1052ba88:;
  /* 1052ba88 jmp 0x1052ba57 */
  goto L_1052ba57;
L_1052ba8a:;
  /* 1052ba8a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ba8e jb 0x1052baa3 */
  if (C.cf) goto L_1052baa3;
  /* 1052ba90 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ba94 ja 0x1052baa3 */
  if ((!C.cf&&!C.zf)) goto L_1052baa3;
  /* 1052ba96 call 0x1052bae0 */
  push32(0x1052ba9bu); f_1052bae0();
  /* 1052ba9b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1052baa1 jmp 0x1052bacd */
  goto L_1052bacd;
L_1052baa3:;
  /* 1052baa3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052baaa jb 0x1052bac2 */
  if (C.cf) goto L_1052bac2;
  /* 1052baac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bab3 ja 0x1052bac2 */
  if ((!C.cf&&!C.zf)) goto L_1052bac2;
  /* 1052bab5 call 0x1052bae0 */
  push32(0x1052babau); f_1052bae0();
  /* 1052baba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1052bac0 jmp 0x1052bacd */
  goto L_1052bacd;
L_1052bac2:;
  /* 1052bac2 call 0x1052bae0 */
  push32(0x1052bac7u); f_1052bae0();
  /* 1052bac7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1052bacd:;
  /* 1052bacd mov esp, ebp */
  ESP = (EBP);
  /* 1052bacf pop ebp */
  EBP = (pop32());
  /* 1052bad0 ret  */
  ESPCHK(0x1052ba40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x1052bae0 (13 bytes, 6 insns) */
void f_1052bae0(void) {
  FTRACE(0x1052bae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052bae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052bae1 mov ebp, esp */
  EBP = (ESP);
  /* 1052bae3 call 0x10523650 */
  push32(0x1052bae8u); f_10523650();
  /* 1052bae8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052baeb pop ebp */
  EBP = (pop32());
  /* 1052baec ret  */
  ESPCHK(0x1052bae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baf0 @ 0x1052baf0 (13 bytes, 6 insns) */
void f_1052baf0(void) {
  FTRACE(0x1052baf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052baf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052baf1 mov ebp, esp */
  EBP = (ESP);
  /* 1052baf3 call 0x10523650 */
  push32(0x1052baf8u); f_10523650();
  /* 1052baf8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bafb pop ebp */
  EBP = (pop32());
  /* 1052bafc ret  */
  ESPCHK(0x1052baf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb00 @ 0x1052bb00 (664 bytes, 260 insns) [15 switch table(s)] */
void f_1052bb00(void) {
  FTRACE(0x1052bb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052bb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1052bb01 mov ebp, esp */
  EBP = (ESP);
  /* 1052bb03 push edi */
  push32((uint32_t)(EDI));
  /* 1052bb04 push esi */
  push32((uint32_t)(ESI));
  /* 1052bb05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1052bb08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052bb0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1052bb0e mov eax, ecx */
  EAX = (ECX);
  /* 1052bb10 mov edx, ecx */
  EDX = (ECX);
  /* 1052bb12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bb14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bb16 jbe 0x1052bb20 */
  if ((C.cf||C.zf)) goto L_1052bb20;
  /* 1052bb18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bb1a jb 0x1052bc98 */
  if (C.cf) goto L_1052bc98;
L_1052bb20:;
  /* 1052bb20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1052bb26 jne 0x1052bb3c */
  if (!C.zf) goto L_1052bb3c;
  /* 1052bb28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052bb2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1052bb2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bb31 jb 0x1052bb5c */
  if (C.cf) goto L_1052bb5c;
  /* 1052bb33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052bb35 jmp dword ptr [edx*4 + 0x1052bc48] */
  switch (EDX) {
    case 0: goto L_1052bc58;
    case 1: goto L_1052bc60;
    case 2: goto L_1052bc6c;
    case 3: goto L_1052bc80;
    default: x86_unimpl("switch@0x1052bb35 out of table"); return;
  }
L_1052bb3c:;
  /* 1052bb3c mov eax, edi */
  EAX = (EDI);
  /* 1052bb3e mov edx, 3 */
  EDX = (0x3u);
  /* 1052bb43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052bb46 jb 0x1052bb54 */
  if (C.cf) goto L_1052bb54;
  /* 1052bb48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1052bb4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bb4d jmp dword ptr [eax*4 + 0x1052bb60] */
  switch (EAX) {
    case 1: goto L_1052bb70;
    case 2: goto L_1052bb9c;
    case 3: goto L_1052bbc0;
    default: x86_unimpl("switch@0x1052bb4d out of table"); return;
  }
L_1052bb54:;
  /* 1052bb54 jmp dword ptr [ecx*4 + 0x1052bc58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1052bc58)))); return;
  /* 1052bb5b nop  */
  /* nop */
L_1052bb5c:;
  /* 1052bb5c jmp dword ptr [ecx*4 + 0x1052bbdc] */
  switch (ECX) {
    case 0: goto L_1052bc3f;
    case 1: goto L_1052bc2c;
    case 2: goto L_1052bc24;
    case 3: goto L_1052bc1c;
    case 4: goto L_1052bc14;
    case 5: goto L_1052bc0c;
    case 6: goto L_1052bc04;
    case 7: goto L_1052bbfc;
    default: x86_unimpl("switch@0x1052bb5c out of table"); return;
  }
  /* 1052bb63 nop  */
  /* nop */
L_1052bb70:;
  /* 1052bb70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052bb72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052bb74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052bb76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052bb79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052bb7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052bb7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052bb82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052bb85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bb88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bb8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bb8e jb 0x1052bb5c */
  if (C.cf) goto L_1052bb5c;
  /* 1052bb90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052bb92 jmp dword ptr [edx*4 + 0x1052bc48] */
  switch (EDX) {
    case 0: goto L_1052bc58;
    case 1: goto L_1052bc60;
    case 2: goto L_1052bc6c;
    case 3: goto L_1052bc80;
    default: x86_unimpl("switch@0x1052bb92 out of table"); return;
  }
  /* 1052bb99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052bb9c:;
  /* 1052bb9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052bb9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052bba0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052bba2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052bba5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052bba8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052bbab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bbae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bbb1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bbb4 jb 0x1052bb5c */
  if (C.cf) goto L_1052bb5c;
  /* 1052bbb6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052bbb8 jmp dword ptr [edx*4 + 0x1052bc48] */
  switch (EDX) {
    case 0: goto L_1052bc58;
    case 1: goto L_1052bc60;
    case 2: goto L_1052bc6c;
    case 3: goto L_1052bc80;
    default: x86_unimpl("switch@0x1052bbb8 out of table"); return;
  }
  /* 1052bbbf nop  */
  /* nop */
L_1052bbc0:;
  /* 1052bbc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052bbc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052bbc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052bbc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1052bbc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052bbca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1052bbcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bbce jb 0x1052bb5c */
  if (C.cf) goto L_1052bb5c;
  /* 1052bbd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052bbd2 jmp dword ptr [edx*4 + 0x1052bc48] */
  switch (EDX) {
    case 0: goto L_1052bc58;
    case 1: goto L_1052bc60;
    case 2: goto L_1052bc6c;
    case 3: goto L_1052bc80;
    default: x86_unimpl("switch@0x1052bbd2 out of table"); return;
  }
  /* 1052bbd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052bbfc:;
  /* 1052bbfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1052bc00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1052bc04:;
  /* 1052bc04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1052bc08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1052bc0c:;
  /* 1052bc0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1052bc10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1052bc14:;
  /* 1052bc14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1052bc18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1052bc1c:;
  /* 1052bc1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1052bc20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1052bc24:;
  /* 1052bc24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1052bc28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1052bc2c:;
  /* 1052bc2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1052bc30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1052bc34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1052bc3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bc3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1052bc3f:;
  /* 1052bc3f jmp dword ptr [edx*4 + 0x1052bc48] */
  switch (EDX) {
    case 0: goto L_1052bc58;
    case 1: goto L_1052bc60;
    case 2: goto L_1052bc6c;
    case 3: goto L_1052bc80;
    default: x86_unimpl("switch@0x1052bc3f out of table"); return;
  }
  /* 1052bc46 mov edi, edi */
  EDI = (EDI);
L_1052bc58:;
  /* 1052bc58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052bc5b pop esi */
  ESI = (pop32());
  /* 1052bc5c pop edi */
  EDI = (pop32());
  /* 1052bc5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052bc5e ret  */
  ESPCHK(0x1052bb00u, _esp0);
  ESP += 4; return;
  /* 1052bc5f nop  */
  /* nop */
L_1052bc60:;
  /* 1052bc60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052bc62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052bc64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052bc67 pop esi */
  ESI = (pop32());
  /* 1052bc68 pop edi */
  EDI = (pop32());
  /* 1052bc69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052bc6a ret  */
  ESPCHK(0x1052bb00u, _esp0);
  ESP += 4; return;
  /* 1052bc6b nop  */
  /* nop */
L_1052bc6c:;
  /* 1052bc6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052bc6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052bc70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052bc73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052bc76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052bc79 pop esi */
  ESI = (pop32());
  /* 1052bc7a pop edi */
  EDI = (pop32());
  /* 1052bc7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052bc7c ret  */
  ESPCHK(0x1052bb00u, _esp0);
  ESP += 4; return;
  /* 1052bc7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052bc80:;
  /* 1052bc80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052bc82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1052bc84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052bc87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052bc8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052bc8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052bc90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052bc93 pop esi */
  ESI = (pop32());
  /* 1052bc94 pop edi */
  EDI = (pop32());
  /* 1052bc95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052bc96 ret  */
  ESPCHK(0x1052bb00u, _esp0);
  ESP += 4; return;
  /* 1052bc97 nop  */
  /* nop */
L_1052bc98:;
  /* 1052bc98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1052bc9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1052bca0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1052bca6 jne 0x1052bccc */
  if (!C.zf) goto L_1052bccc;
  /* 1052bca8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052bcab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1052bcae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bcb1 jb 0x1052bcc0 */
  if (C.cf) goto L_1052bcc0;
  /* 1052bcb3 std  */
  C.df=1;
  /* 1052bcb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052bcb6 cld  */
  C.df=0;
  /* 1052bcb7 jmp dword ptr [edx*4 + 0x1052bde0] */
  switch (EDX) {
    case 0: goto L_1052bdf0;
    case 1: goto L_1052bdf8;
    case 2: goto L_1052be08;
    case 3: goto L_1052be1c;
    default: x86_unimpl("switch@0x1052bcb7 out of table"); return;
  }
  /* 1052bcbe mov edi, edi */
  EDI = (EDI);
L_1052bcc0:;
  /* 1052bcc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052bcc2 jmp dword ptr [ecx*4 + 0x1052bd90] */
  switch (ECX) {
    case 0: goto L_1052bdd7;
    default: x86_unimpl("switch@0x1052bcc2 out of table"); return;
  }
  /* 1052bcc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052bccc:;
  /* 1052bccc mov eax, edi */
  EAX = (EDI);
  /* 1052bcce mov edx, 3 */
  EDX = (0x3u);
  /* 1052bcd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bcd6 jb 0x1052bce4 */
  if (C.cf) goto L_1052bce4;
  /* 1052bcd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1052bcdb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052bcdd jmp dword ptr [eax*4 + 0x1052bce8] */
  switch (EAX) {
    case 1: goto L_1052bcf8;
    case 2: goto L_1052bd18;
    case 3: goto L_1052bd40;
    default: x86_unimpl("switch@0x1052bcdd out of table"); return;
  }
L_1052bce4:;
  /* 1052bce4 jmp dword ptr [ecx*4 + 0x1052bde0] */
  switch (ECX) {
    case 0: goto L_1052bdf0;
    case 1: goto L_1052bdf8;
    case 2: goto L_1052be08;
    case 3: goto L_1052be1c;
    default: x86_unimpl("switch@0x1052bce4 out of table"); return;
  }
  /* 1052bceb nop  */
  /* nop */
L_1052bcf8:;
  /* 1052bcf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052bcfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052bcfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052bd00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1052bd01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052bd04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1052bd05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bd08 jb 0x1052bcc0 */
  if (C.cf) goto L_1052bcc0;
  /* 1052bd0a std  */
  C.df=1;
  /* 1052bd0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052bd0d cld  */
  C.df=0;
  /* 1052bd0e jmp dword ptr [edx*4 + 0x1052bde0] */
  switch (EDX) {
    case 0: goto L_1052bdf0;
    case 1: goto L_1052bdf8;
    case 2: goto L_1052be08;
    case 3: goto L_1052be1c;
    default: x86_unimpl("switch@0x1052bd0e out of table"); return;
  }
  /* 1052bd15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052bd18:;
  /* 1052bd18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052bd1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052bd1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052bd20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052bd23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052bd26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052bd29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052bd2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052bd2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bd32 jb 0x1052bcc0 */
  if (C.cf) goto L_1052bcc0;
  /* 1052bd34 std  */
  C.df=1;
  /* 1052bd35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052bd37 cld  */
  C.df=0;
  /* 1052bd38 jmp dword ptr [edx*4 + 0x1052bde0] */
  switch (EDX) {
    case 0: goto L_1052bdf0;
    case 1: goto L_1052bdf8;
    case 2: goto L_1052be08;
    case 3: goto L_1052be1c;
    default: x86_unimpl("switch@0x1052bd38 out of table"); return;
  }
  /* 1052bd3f nop  */
  /* nop */
L_1052bd40:;
  /* 1052bd40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052bd43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1052bd45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052bd48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052bd4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052bd4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052bd51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1052bd54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052bd57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052bd5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052bd5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bd60 jb 0x1052bcc0 */
  if (C.cf) goto L_1052bcc0;
  /* 1052bd66 std  */
  C.df=1;
  /* 1052bd67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1052bd69 cld  */
  C.df=0;
  /* 1052bd6a jmp dword ptr [edx*4 + 0x1052bde0] */
  switch (EDX) {
    case 0: goto L_1052bdf0;
    case 1: goto L_1052bdf8;
    case 2: goto L_1052be08;
    case 3: goto L_1052be1c;
    default: x86_unimpl("switch@0x1052bd6a out of table"); return;
  }
  /* 1052bd71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1052bd74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1052bd75 mov ebp, 0xbd9c1052 */
  EBP = (0xbd9c1052u);
  /* 1052bd7a push edx */
  push32((uint32_t)(EDX));
  /* 1052bd7b adc byte ptr [ebp + edi*4 - 0x4253efae], ah */
  { uint32_t _a=(r8((uint32_t)(EBP + EDI*4 + -0x4253efae))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EDI*4 + -0x4253efae), (_r)); fl_add(_a,_b,_r,8); }
  /* 1052bd82 push edx */
  push32((uint32_t)(EDX));
  /* 1052bd83 adc byte ptr [ebp + edi*4 - 0x4243efae], dh */
  { uint32_t _a=(r8((uint32_t)(EBP + EDI*4 + -0x4243efae))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBP + EDI*4 + -0x4243efae), (_r)); fl_add(_a,_b,_r,8); }
  /* 1052bd8a push edx */
  push32((uint32_t)(EDX));
  /* 1052bd8b adc ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1052bd8e push edx */
  push32((uint32_t)(EDX));
  /* 1052bd94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1052bd98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1052bd9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1052bda0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1052bda4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1052bda8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1052bdac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1052bdb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1052bdb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1052bdb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1052bdbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1052bdc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1052bdc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1052bdc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1052bdcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1052bdd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bdd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1052bdd7:;
  /* 1052bdd7 jmp dword ptr [edx*4 + 0x1052bde0] */
  switch (EDX) {
    case 0: goto L_1052bdf0;
    case 1: goto L_1052bdf8;
    case 2: goto L_1052be08;
    case 3: goto L_1052be1c;
    default: x86_unimpl("switch@0x1052bdd7 out of table"); return;
  }
  /* 1052bdde mov edi, edi */
  EDI = (EDI);
L_1052bdf0:;
  /* 1052bdf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052bdf3 pop esi */
  ESI = (pop32());
  /* 1052bdf4 pop edi */
  EDI = (pop32());
  /* 1052bdf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052bdf6 ret  */
  ESPCHK(0x1052bb00u, _esp0);
  ESP += 4; return;
  /* 1052bdf7 nop  */
  /* nop */
L_1052bdf8:;
  /* 1052bdf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052bdfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052bdfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052be01 pop esi */
  ESI = (pop32());
  /* 1052be02 pop edi */
  EDI = (pop32());
  /* 1052be03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052be04 ret  */
  ESPCHK(0x1052bb00u, _esp0);
  ESP += 4; return;
  /* 1052be05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052be08:;
  /* 1052be08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052be0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052be0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052be11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052be14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052be17 pop esi */
  ESI = (pop32());
  /* 1052be18 pop edi */
  EDI = (pop32());
  /* 1052be19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052be1a ret  */
  ESPCHK(0x1052bb00u, _esp0);
  ESP += 4; return;
  /* 1052be1b nop  */
  /* nop */
L_1052be1c:;
  /* 1052be1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1052be1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1052be22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1052be25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1052be28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1052be2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1052be2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052be31 pop esi */
  ESI = (pop32());
  /* 1052be32 pop edi */
  EDI = (pop32());
  /* 1052be33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052be34 ret  */
  ESPCHK(0x1052bb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be40 @ 0x1052be40 (421 bytes, 148 insns) */
void f_1052be40(void) {
  FTRACE(0x1052be40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052be40 push ebp */
  push32((uint32_t)(EBP));
  /* 1052be41 mov ebp, esp */
  EBP = (ESP);
  /* 1052be43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1052be45 push 0x1054b0d8 */
  push32((uint32_t)(0x1054b0d8u));
  /* 1052be4a push 0x1052cd18 */
  push32((uint32_t)(0x1052cd18u));
  /* 1052be4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1052be55 push eax */
  push32((uint32_t)(EAX));
  /* 1052be56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1052be5d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052be60 push ebx */
  push32((uint32_t)(EBX));
  /* 1052be61 push esi */
  push32((uint32_t)(ESI));
  /* 1052be62 push edi */
  push32((uint32_t)(EDI));
  /* 1052be63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1052be66 cmp dword ptr [0x1054f724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052be6d jne 0x1052bebe */
  if (!C.zf) goto L_1052bebe;
  /* 1052be6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1052be72 push eax */
  push32((uint32_t)(EAX));
  /* 1052be73 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052be75 push 0x1054b0d4 */
  push32((uint32_t)(0x1054b0d4u));
  /* 1052be7a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052be7c call dword ptr [0x105522f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f4))), 0x1052be82u);
  /* 1052be82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052be84 je 0x1052be92 */
  if (C.zf) goto L_1052be92;
  /* 1052be86 mov dword ptr [0x1054f724], 1 */
  w32((uint32_t)(0x1054f724), (0x1u));
  /* 1052be90 jmp 0x1052bebe */
  goto L_1052bebe;
L_1052be92:;
  /* 1052be92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1052be95 push ecx */
  push32((uint32_t)(ECX));
  /* 1052be96 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052be98 push 0x1054b0d0 */
  push32((uint32_t)(0x1054b0d0u));
  /* 1052be9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1052be9f push 0 */
  push32((uint32_t)(0x0u));
  /* 1052bea1 call dword ptr [0x10552304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552304))), 0x1052bea7u);
  /* 1052bea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052bea9 je 0x1052beb7 */
  if (C.zf) goto L_1052beb7;
  /* 1052beab mov dword ptr [0x1054f724], 2 */
  w32((uint32_t)(0x1054f724), (0x2u));
  /* 1052beb5 jmp 0x1052bebe */
  goto L_1052bebe;
L_1052beb7:;
  /* 1052beb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052beb9 jmp 0x1052bfe8 */
  goto L_1052bfe8;
L_1052bebe:;
  /* 1052bebe cmp dword ptr [0x1054f724], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1054f724))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bec5 jne 0x1052bef5 */
  if (!C.zf) goto L_1052bef5;
  /* 1052bec7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052becb jne 0x1052bed6 */
  if (!C.zf) goto L_1052bed6;
  /* 1052becd mov edx, dword ptr [0x1054f730] */
  EDX = (r32((uint32_t)(0x1054f730)));
  /* 1052bed3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1052bed6:;
  /* 1052bed6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052bed9 push eax */
  push32((uint32_t)(EAX));
  /* 1052beda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052bedd push ecx */
  push32((uint32_t)(ECX));
  /* 1052bede mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052bee1 push edx */
  push32((uint32_t)(EDX));
  /* 1052bee2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052bee5 push eax */
  push32((uint32_t)(EAX));
  /* 1052bee6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1052bee9 push ecx */
  push32((uint32_t)(ECX));
  /* 1052beea call dword ptr [0x10552304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552304))), 0x1052bef0u);
  /* 1052bef0 jmp 0x1052bfe8 */
  goto L_1052bfe8;
L_1052bef5:;
  /* 1052bef5 cmp dword ptr [0x1054f724], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f724))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052befc jne 0x1052bfe6 */
  if (!C.zf) goto L_1052bfe6;
  /* 1052bf02 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bf06 jne 0x1052bf11 */
  if (!C.zf) goto L_1052bf11;
  /* 1052bf08 mov edx, dword ptr [0x1054f740] */
  EDX = (r32((uint32_t)(0x1054f740)));
  /* 1052bf0e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1052bf11:;
  /* 1052bf11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052bf13 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052bf15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052bf18 push eax */
  push32((uint32_t)(EAX));
  /* 1052bf19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052bf1c push ecx */
  push32((uint32_t)(ECX));
  /* 1052bf1d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1052bf20 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052bf22 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052bf24 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1052bf27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bf2a push edx */
  push32((uint32_t)(EDX));
  /* 1052bf2b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052bf2e push eax */
  push32((uint32_t)(EAX));
  /* 1052bf2f call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x1052bf35u);
  /* 1052bf35 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1052bf38 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bf3c jne 0x1052bf45 */
  if (!C.zf) goto L_1052bf45;
  /* 1052bf3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052bf40 jmp 0x1052bfe8 */
  goto L_1052bfe8;
L_1052bf45:;
  /* 1052bf45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052bf4c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052bf4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1052bf51 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bf54 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1052bf56 call 0x10526db0 */
  push32(0x1052bf5bu); f_10526db0();
  /* 1052bf5b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1052bf5e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1052bf61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052bf64 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1052bf67 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052bf6a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1052bf6c push edx */
  push32((uint32_t)(EDX));
  /* 1052bf6d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052bf6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052bf72 push eax */
  push32((uint32_t)(EAX));
  /* 1052bf73 call 0x10527980 */
  push32(0x1052bf78u); f_10527980();
  /* 1052bf78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052bf7b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1052bf82 jmp 0x1052bf9b */
  goto L_1052bf9b;
  /* 1052bf84 mov eax, 1 */
  EAX = (0x1u);
  /* 1052bf89 ret  */
  ESPCHK(0x1052be40u, _esp0);
  ESP += 4; return;
  /* 1052bf8a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1052bf8d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1052bf94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1052bf9b:;
  /* 1052bf9b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bf9f jne 0x1052bfa5 */
  if (!C.zf) goto L_1052bfa5;
  /* 1052bfa1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052bfa3 jmp 0x1052bfe8 */
  goto L_1052bfe8;
L_1052bfa5:;
  /* 1052bfa5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052bfa8 push ecx */
  push32((uint32_t)(ECX));
  /* 1052bfa9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052bfac push edx */
  push32((uint32_t)(EDX));
  /* 1052bfad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052bfb0 push eax */
  push32((uint32_t)(EAX));
  /* 1052bfb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052bfb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1052bfb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052bfb7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052bfba push edx */
  push32((uint32_t)(EDX));
  /* 1052bfbb call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x1052bfc1u);
  /* 1052bfc1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1052bfc4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052bfc8 jne 0x1052bfce */
  if (!C.zf) goto L_1052bfce;
  /* 1052bfca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052bfcc jmp 0x1052bfe8 */
  goto L_1052bfe8;
L_1052bfce:;
  /* 1052bfce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052bfd1 push eax */
  push32((uint32_t)(EAX));
  /* 1052bfd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052bfd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1052bfd6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052bfd9 push edx */
  push32((uint32_t)(EDX));
  /* 1052bfda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052bfdd push eax */
  push32((uint32_t)(EAX));
  /* 1052bfde call dword ptr [0x105522f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f4))), 0x1052bfe4u);
  /* 1052bfe4 jmp 0x1052bfe8 */
  goto L_1052bfe8;
L_1052bfe6:;
  /* 1052bfe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052bfe8:;
  /* 1052bfe8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1052bfeb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052bfee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1052bff5 pop edi */
  EDI = (pop32());
  /* 1052bff6 pop esi */
  ESI = (pop32());
  /* 1052bff7 pop ebx */
  EBX = (pop32());
  /* 1052bff8 mov esp, ebp */
  ESP = (EBP);
  /* 1052bffa pop ebp */
  EBP = (pop32());
  /* 1052bffb ret  */
  ESPCHK(0x1052be40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c000 @ 0x1052c000 (727 bytes, 263 insns) */
void f_1052c000(void) {
  FTRACE(0x1052c000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c000 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c001 mov ebp, esp */
  EBP = (ESP);
  /* 1052c003 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1052c005 push 0x1054b0e8 */
  push32((uint32_t)(0x1054b0e8u));
  /* 1052c00a push 0x1052cd18 */
  push32((uint32_t)(0x1052cd18u));
  /* 1052c00f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1052c015 push eax */
  push32((uint32_t)(EAX));
  /* 1052c016 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1052c01d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c020 push ebx */
  push32((uint32_t)(EBX));
  /* 1052c021 push esi */
  push32((uint32_t)(ESI));
  /* 1052c022 push edi */
  push32((uint32_t)(EDI));
  /* 1052c023 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1052c026 cmp dword ptr [0x1054f748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c02d jne 0x1052c086 */
  if (!C.zf) goto L_1052c086;
  /* 1052c02f push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c031 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c033 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052c035 push 0x1054b0d4 */
  push32((uint32_t)(0x1054b0d4u));
  /* 1052c03a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052c03f push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c041 call dword ptr [0x105522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f8))), 0x1052c047u);
  /* 1052c047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c049 je 0x1052c057 */
  if (C.zf) goto L_1052c057;
  /* 1052c04b mov dword ptr [0x1054f748], 1 */
  w32((uint32_t)(0x1054f748), (0x1u));
  /* 1052c055 jmp 0x1052c086 */
  goto L_1052c086;
L_1052c057:;
  /* 1052c057 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c059 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c05b push 1 */
  push32((uint32_t)(0x1u));
  /* 1052c05d push 0x1054b0d0 */
  push32((uint32_t)(0x1054b0d0u));
  /* 1052c062 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052c067 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c069 call dword ptr [0x105522f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f0))), 0x1052c06fu);
  /* 1052c06f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c071 je 0x1052c07f */
  if (C.zf) goto L_1052c07f;
  /* 1052c073 mov dword ptr [0x1054f748], 2 */
  w32((uint32_t)(0x1054f748), (0x2u));
  /* 1052c07d jmp 0x1052c086 */
  goto L_1052c086;
L_1052c07f:;
  /* 1052c07f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c081 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c086:;
  /* 1052c086 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c08a jle 0x1052c09f */
  if ((C.zf||C.sf!=C.of)) goto L_1052c09f;
  /* 1052c08c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052c08f push eax */
  push32((uint32_t)(EAX));
  /* 1052c090 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052c093 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c094 call 0x1052c310 */
  push32(0x1052c099u); f_1052c310();
  /* 1052c099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c09c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1052c09f:;
  /* 1052c09f cmp dword ptr [0x1054f748], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1054f748))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c0a6 jne 0x1052c0cb */
  if (!C.zf) goto L_1052c0cb;
  /* 1052c0a8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1052c0ab push edx */
  push32((uint32_t)(EDX));
  /* 1052c0ac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052c0af push eax */
  push32((uint32_t)(EAX));
  /* 1052c0b0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052c0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c0b4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052c0b7 push edx */
  push32((uint32_t)(EDX));
  /* 1052c0b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c0bb push eax */
  push32((uint32_t)(EAX));
  /* 1052c0bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c0bf push ecx */
  push32((uint32_t)(ECX));
  /* 1052c0c0 call dword ptr [0x105522f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f0))), 0x1052c0c6u);
  /* 1052c0c6 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c0cb:;
  /* 1052c0cb cmp dword ptr [0x1054f748], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f748))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c0d2 jne 0x1052c2ef */
  if (!C.zf) goto L_1052c2ef;
  /* 1052c0d8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c0dc jne 0x1052c0e7 */
  if (!C.zf) goto L_1052c0e7;
  /* 1052c0de mov edx, dword ptr [0x1054f740] */
  EDX = (r32((uint32_t)(0x1054f740)));
  /* 1052c0e4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1052c0e7:;
  /* 1052c0e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c0e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c0eb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052c0ee push eax */
  push32((uint32_t)(EAX));
  /* 1052c0ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052c0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c0f3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1052c0f6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052c0f8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c0fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1052c0fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c100 push edx */
  push32((uint32_t)(EDX));
  /* 1052c101 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1052c104 push eax */
  push32((uint32_t)(EAX));
  /* 1052c105 call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x1052c10bu);
  /* 1052c10b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1052c10e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c112 jne 0x1052c11b */
  if (!C.zf) goto L_1052c11b;
  /* 1052c114 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c116 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c11b:;
  /* 1052c11b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052c122 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052c125 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1052c127 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c12a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1052c12c call 0x10526db0 */
  push32(0x1052c131u); f_10526db0();
  /* 1052c131 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1052c134 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1052c137 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052c13a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1052c13d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1052c144 jmp 0x1052c15d */
  goto L_1052c15d;
  /* 1052c146 mov eax, 1 */
  EAX = (0x1u);
  /* 1052c14b ret  */
  ESPCHK(0x1052c000u, _esp0);
  ESP += 4; return;
  /* 1052c14c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1052c14f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1052c156 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1052c15d:;
  /* 1052c15d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c161 jne 0x1052c16a */
  if (!C.zf) goto L_1052c16a;
  /* 1052c163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c165 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c16a:;
  /* 1052c16a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052c16d push edx */
  push32((uint32_t)(EDX));
  /* 1052c16e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052c171 push eax */
  push32((uint32_t)(EAX));
  /* 1052c172 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052c175 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c176 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052c179 push edx */
  push32((uint32_t)(EDX));
  /* 1052c17a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052c17c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1052c17f push eax */
  push32((uint32_t)(EAX));
  /* 1052c180 call dword ptr [0x105522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522fc))), 0x1052c186u);
  /* 1052c186 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c188 jne 0x1052c191 */
  if (!C.zf) goto L_1052c191;
  /* 1052c18a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c18c jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c191:;
  /* 1052c191 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c193 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c195 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052c198 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c199 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052c19c push edx */
  push32((uint32_t)(EDX));
  /* 1052c19d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c1a0 push eax */
  push32((uint32_t)(EAX));
  /* 1052c1a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c1a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c1a5 call dword ptr [0x105522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f8))), 0x1052c1abu);
  /* 1052c1ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1052c1ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c1b2 jne 0x1052c1bb */
  if (!C.zf) goto L_1052c1bb;
  /* 1052c1b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c1b6 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c1bb:;
  /* 1052c1bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c1be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1052c1c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052c1c6 je 0x1052c20b */
  if (C.zf) goto L_1052c20b;
  /* 1052c1c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c1cc je 0x1052c206 */
  if (C.zf) goto L_1052c206;
  /* 1052c1ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052c1d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c1d4 jle 0x1052c1dd */
  if ((C.zf||C.sf!=C.of)) goto L_1052c1dd;
  /* 1052c1d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c1d8 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c1dd:;
  /* 1052c1dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1052c1e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c1e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052c1e4 push edx */
  push32((uint32_t)(EDX));
  /* 1052c1e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052c1e8 push eax */
  push32((uint32_t)(EAX));
  /* 1052c1e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052c1ec push ecx */
  push32((uint32_t)(ECX));
  /* 1052c1ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c1f0 push edx */
  push32((uint32_t)(EDX));
  /* 1052c1f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c1f4 push eax */
  push32((uint32_t)(EAX));
  /* 1052c1f5 call dword ptr [0x105522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f8))), 0x1052c1fbu);
  /* 1052c1fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c1fd jne 0x1052c206 */
  if (!C.zf) goto L_1052c206;
  /* 1052c1ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c201 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c206:;
  /* 1052c206 jmp 0x1052c2ea */
  goto L_1052c2ea;
L_1052c20b:;
  /* 1052c20b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052c20e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1052c211 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1052c218 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052c21b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1052c21d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c220 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1052c222 call 0x10526db0 */
  push32(0x1052c227u); f_10526db0();
  /* 1052c227 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1052c22a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1052c22d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1052c230 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1052c233 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1052c23a jmp 0x1052c253 */
  goto L_1052c253;
  /* 1052c23c mov eax, 1 */
  EAX = (0x1u);
  /* 1052c241 ret  */
  ESPCHK(0x1052c000u, _esp0);
  ESP += 4; return;
  /* 1052c242 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1052c245 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1052c24c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1052c253:;
  /* 1052c253 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c257 jne 0x1052c260 */
  if (!C.zf) goto L_1052c260;
  /* 1052c259 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c25b jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c260:;
  /* 1052c260 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052c263 push eax */
  push32((uint32_t)(EAX));
  /* 1052c264 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052c267 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c268 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052c26b push edx */
  push32((uint32_t)(EDX));
  /* 1052c26c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052c26f push eax */
  push32((uint32_t)(EAX));
  /* 1052c270 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c273 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c274 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c277 push edx */
  push32((uint32_t)(EDX));
  /* 1052c278 call dword ptr [0x105522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522f8))), 0x1052c27eu);
  /* 1052c27e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c280 jne 0x1052c286 */
  if (!C.zf) goto L_1052c286;
  /* 1052c282 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c284 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c286:;
  /* 1052c286 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c28a jne 0x1052c2ba */
  if (!C.zf) goto L_1052c2ba;
  /* 1052c28c push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c28e push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c290 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c292 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c294 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052c297 push eax */
  push32((uint32_t)(EAX));
  /* 1052c298 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052c29b push ecx */
  push32((uint32_t)(ECX));
  /* 1052c29c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1052c2a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1052c2a4 push edx */
  push32((uint32_t)(EDX));
  /* 1052c2a5 call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x1052c2abu);
  /* 1052c2ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1052c2ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c2b2 jne 0x1052c2b8 */
  if (!C.zf) goto L_1052c2b8;
  /* 1052c2b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c2b6 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c2b8:;
  /* 1052c2b8 jmp 0x1052c2ea */
  goto L_1052c2ea;
L_1052c2ba:;
  /* 1052c2ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c2bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c2be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1052c2c1 push eax */
  push32((uint32_t)(EAX));
  /* 1052c2c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1052c2c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c2c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052c2c9 push edx */
  push32((uint32_t)(EDX));
  /* 1052c2ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052c2cd push eax */
  push32((uint32_t)(EAX));
  /* 1052c2ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1052c2d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1052c2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c2d7 call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x1052c2ddu);
  /* 1052c2dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1052c2e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c2e4 jne 0x1052c2ea */
  if (!C.zf) goto L_1052c2ea;
  /* 1052c2e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c2e8 jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c2ea:;
  /* 1052c2ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052c2ed jmp 0x1052c2f1 */
  goto L_1052c2f1;
L_1052c2ef:;
  /* 1052c2ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052c2f1:;
  /* 1052c2f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1052c2f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052c2f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1052c2fe pop edi */
  EDI = (pop32());
  /* 1052c2ff pop esi */
  ESI = (pop32());
  /* 1052c300 pop ebx */
  EBX = (pop32());
  /* 1052c301 mov esp, ebp */
  ESP = (EBP);
  /* 1052c303 pop ebp */
  EBP = (pop32());
  /* 1052c304 ret  */
  ESPCHK(0x1052c000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x1052c310 (80 bytes, 32 insns) */
void f_1052c310(void) {
  FTRACE(0x1052c310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c310 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c311 mov ebp, esp */
  EBP = (ESP);
  /* 1052c313 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c316 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c319 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052c31c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c31f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1052c322:;
  /* 1052c322 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c325 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c328 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c32b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052c32e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052c330 je 0x1052c347 */
  if (C.zf) goto L_1052c347;
  /* 1052c332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c335 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052c338 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052c33a je 0x1052c347 */
  if (C.zf) goto L_1052c347;
  /* 1052c33c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c33f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c342 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052c345 jmp 0x1052c322 */
  goto L_1052c322;
L_1052c347:;
  /* 1052c347 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c34a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052c34d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052c34f jne 0x1052c359 */
  if (!C.zf) goto L_1052c359;
  /* 1052c351 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c354 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c357 jmp 0x1052c35c */
  goto L_1052c35c;
L_1052c359:;
  /* 1052c359 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1052c35c:;
  /* 1052c35c mov esp, ebp */
  ESP = (EBP);
  /* 1052c35e pop ebp */
  EBP = (pop32());
  /* 1052c35f ret  */
  ESPCHK(0x1052c310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c360 @ 0x1052c360 (130 bytes, 43 insns) */
void f_1052c360(void) {
  FTRACE(0x1052c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c360 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c361 mov ebp, esp */
  EBP = (ESP);
  /* 1052c363 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c367 cmp eax, dword ptr [0x1055103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1055103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c36d jae 0x1052c391 */
  if (!C.cf) goto L_1052c391;
  /* 1052c36f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c372 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052c375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c378 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052c37b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c37e mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052c385 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1052c38a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1052c38d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052c38f jne 0x1052c3ac */
  if (!C.zf) goto L_1052c3ac;
L_1052c391:;
  /* 1052c391 call 0x1052bae0 */
  push32(0x1052c396u); f_1052bae0();
  /* 1052c396 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052c39c call 0x1052baf0 */
  push32(0x1052c3a1u); f_1052baf0();
  /* 1052c3a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1052c3a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052c3aa jmp 0x1052c3de */
  goto L_1052c3de;
L_1052c3ac:;
  /* 1052c3ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c3af push edx */
  push32((uint32_t)(EDX));
  /* 1052c3b0 call 0x1052d300 */
  push32(0x1052c3b5u); f_1052d300();
  /* 1052c3b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c3b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052c3bb push eax */
  push32((uint32_t)(EAX));
  /* 1052c3bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c3bf push ecx */
  push32((uint32_t)(ECX));
  /* 1052c3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c3c3 push edx */
  push32((uint32_t)(EDX));
  /* 1052c3c4 call 0x1052c3f0 */
  push32(0x1052c3c9u); f_1052c3f0();
  /* 1052c3c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c3cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052c3cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c3d2 push eax */
  push32((uint32_t)(EAX));
  /* 1052c3d3 call 0x1052d390 */
  push32(0x1052c3d8u); f_1052d390();
  /* 1052c3d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c3db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1052c3de:;
  /* 1052c3de mov esp, ebp */
  ESP = (EBP);
  /* 1052c3e0 pop ebp */
  EBP = (pop32());
  /* 1052c3e1 ret  */
  ESPCHK(0x1052c360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3f0 @ 0x1052c3f0 (178 bytes, 56 insns) */
void f_1052c3f0(void) {
  FTRACE(0x1052c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1052c3f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1052c3fa call 0x1052d180 */
  push32(0x1052c3ffu); f_1052d180();
  /* 1052c3ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c402 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1052c405 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c409 jne 0x1052c41e */
  if (!C.zf) goto L_1052c41e;
  /* 1052c40b call 0x1052bae0 */
  push32(0x1052c410u); f_1052bae0();
  /* 1052c410 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052c416 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052c419 jmp 0x1052c49e */
  goto L_1052c49e;
L_1052c41e:;
  /* 1052c41e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052c421 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c422 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c424 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c427 push edx */
  push32((uint32_t)(EDX));
  /* 1052c428 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052c42b push eax */
  push32((uint32_t)(EAX));
  /* 1052c42c call dword ptr [0x105522e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522e8))), 0x1052c432u);
  /* 1052c432 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052c435 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c439 jne 0x1052c446 */
  if (!C.zf) goto L_1052c446;
  /* 1052c43b call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x1052c441u);
  /* 1052c441 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052c444 jmp 0x1052c44d */
  goto L_1052c44d;
L_1052c446:;
  /* 1052c446 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1052c44d:;
  /* 1052c44d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c451 je 0x1052c464 */
  if (C.zf) goto L_1052c464;
  /* 1052c453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c456 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c457 call 0x1052ba40 */
  push32(0x1052c45cu); f_1052ba40();
  /* 1052c45c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c45f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052c462 jmp 0x1052c49e */
  goto L_1052c49e;
L_1052c464:;
  /* 1052c464 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c467 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1052c46a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c46d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1052c470 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c473 mov ecx, dword ptr [edx*4 + 0x10550f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 1052c47a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1052c47e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1052c481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c484 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052c487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c48a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052c48d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c490 mov eax, dword ptr [eax*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052c497 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1052c49b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1052c49e:;
  /* 1052c49e mov esp, ebp */
  ESP = (EBP);
  /* 1052c4a0 pop ebp */
  EBP = (pop32());
  /* 1052c4a1 ret  */
  ESPCHK(0x1052c3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4b0 @ 0x1052c4b0 (130 bytes, 43 insns) */
void f_1052c4b0(void) {
  FTRACE(0x1052c4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1052c4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c4b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c4b7 cmp eax, dword ptr [0x1055103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1055103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c4bd jae 0x1052c4e1 */
  if (!C.cf) goto L_1052c4e1;
  /* 1052c4bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c4c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052c4c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c4c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052c4cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c4ce mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052c4d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1052c4da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1052c4dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052c4df jne 0x1052c4fc */
  if (!C.zf) goto L_1052c4fc;
L_1052c4e1:;
  /* 1052c4e1 call 0x1052bae0 */
  push32(0x1052c4e6u); f_1052bae0();
  /* 1052c4e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052c4ec call 0x1052baf0 */
  push32(0x1052c4f1u); f_1052baf0();
  /* 1052c4f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1052c4f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052c4fa jmp 0x1052c52e */
  goto L_1052c52e;
L_1052c4fc:;
  /* 1052c4fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c4ff push edx */
  push32((uint32_t)(EDX));
  /* 1052c500 call 0x1052d300 */
  push32(0x1052c505u); f_1052d300();
  /* 1052c505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c508 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052c50b push eax */
  push32((uint32_t)(EAX));
  /* 1052c50c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c50f push ecx */
  push32((uint32_t)(ECX));
  /* 1052c510 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c513 push edx */
  push32((uint32_t)(EDX));
  /* 1052c514 call 0x1052c540 */
  push32(0x1052c519u); f_1052c540();
  /* 1052c519 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c51c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052c51f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c522 push eax */
  push32((uint32_t)(EAX));
  /* 1052c523 call 0x1052d390 */
  push32(0x1052c528u); f_1052d390();
  /* 1052c528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c52b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1052c52e:;
  /* 1052c52e mov esp, ebp */
  ESP = (EBP);
  /* 1052c530 pop ebp */
  EBP = (pop32());
  /* 1052c531 ret  */
  ESPCHK(0x1052c4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c540 @ 0x1052c540 (627 bytes, 182 insns) */
void f_1052c540(void) {
  FTRACE(0x1052c540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c540 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c541 mov ebp, esp */
  EBP = (ESP);
  /* 1052c543 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c549 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1052c550 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052c553 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1052c559 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c55d jne 0x1052c566 */
  if (!C.zf) goto L_1052c566;
  /* 1052c55f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c561 jmp 0x1052c7af */
  goto L_1052c7af;
L_1052c566:;
  /* 1052c566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c569 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052c56c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c56f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052c572 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c575 mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052c57c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1052c581 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1052c584 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052c586 je 0x1052c598 */
  if (C.zf) goto L_1052c598;
  /* 1052c588 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052c58a push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c58c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c58f push edx */
  push32((uint32_t)(EDX));
  /* 1052c590 call 0x1052c3f0 */
  push32(0x1052c595u); f_1052c3f0();
  /* 1052c595 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052c598:;
  /* 1052c598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c59b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052c59e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c5a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052c5a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c5a7 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052c5ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1052c5b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1052c5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c5ba je 0x1052c6cc */
  if (C.zf) goto L_1052c6cc;
  /* 1052c5c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c5c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052c5c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1052c5cd:;
  /* 1052c5cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c5d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c5d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c5d6 jae 0x1052c6ca */
  if (!C.cf) goto L_1052c6ca;
  /* 1052c5dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1052c5e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1052c5e5:;
  /* 1052c5e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c5e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1052c5ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c5f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c5f6 jge 0x1052c657 */
  if ((C.sf==C.of)) goto L_1052c657;
  /* 1052c5f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c5fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c5fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c601 jae 0x1052c657 */
  if (!C.cf) goto L_1052c657;
  /* 1052c603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c606 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1052c608 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1052c60e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c611 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c614 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052c617 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1052c61e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c621 jne 0x1052c641 */
  if (!C.zf) goto L_1052c641;
  /* 1052c623 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1052c629 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c62c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1052c632 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c635 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1052c638 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c63b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c63e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1052c641:;
  /* 1052c641 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c644 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1052c64a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1052c64c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c64f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c652 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052c655 jmp 0x1052c5e5 */
  goto L_1052c5e5;
L_1052c657:;
  /* 1052c657 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c659 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1052c65f push edx */
  push32((uint32_t)(EDX));
  /* 1052c660 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c663 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1052c669 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c66b push eax */
  push32((uint32_t)(EAX));
  /* 1052c66c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1052c672 push edx */
  push32((uint32_t)(EDX));
  /* 1052c673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c676 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052c679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c67c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052c67f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c682 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052c689 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1052c68c push eax */
  push32((uint32_t)(EAX));
  /* 1052c68d call dword ptr [0x10552350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552350))), 0x1052c693u);
  /* 1052c693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c695 je 0x1052c6ba */
  if (C.zf) goto L_1052c6ba;
  /* 1052c697 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052c69a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c6a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1052c6a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052c6a6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1052c6ac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052c6ae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c6b4 jge 0x1052c6b8 */
  if ((C.sf==C.of)) goto L_1052c6b8;
  /* 1052c6b6 jmp 0x1052c6ca */
  goto L_1052c6ca;
L_1052c6b8:;
  /* 1052c6b8 jmp 0x1052c6c5 */
  goto L_1052c6c5;
L_1052c6ba:;
  /* 1052c6ba call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x1052c6c0u);
  /* 1052c6c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1052c6c3 jmp 0x1052c6ca */
  goto L_1052c6ca;
L_1052c6c5:;
  /* 1052c6c5 jmp 0x1052c5cd */
  goto L_1052c5cd;
L_1052c6ca:;
  /* 1052c6ca jmp 0x1052c71c */
  goto L_1052c71c;
L_1052c6cc:;
  /* 1052c6cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c6ce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1052c6d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c6d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052c6d8 push edx */
  push32((uint32_t)(EDX));
  /* 1052c6d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c6dc push eax */
  push32((uint32_t)(EAX));
  /* 1052c6dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c6e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052c6e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c6e6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052c6e9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c6ec mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052c6f3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1052c6f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c6f7 call dword ptr [0x10552350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552350))), 0x1052c6fdu);
  /* 1052c6fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c6ff je 0x1052c713 */
  if (C.zf) goto L_1052c713;
  /* 1052c701 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1052c708 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1052c70e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1052c711 jmp 0x1052c71c */
  goto L_1052c71c;
L_1052c713:;
  /* 1052c713 call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x1052c719u);
  /* 1052c719 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1052c71c:;
  /* 1052c71c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c720 jne 0x1052c7a6 */
  if (!C.zf) goto L_1052c7a6;
  /* 1052c726 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c72a je 0x1052c75a */
  if (C.zf) goto L_1052c75a;
  /* 1052c72c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c730 jne 0x1052c749 */
  if (!C.zf) goto L_1052c749;
  /* 1052c732 call 0x1052bae0 */
  push32(0x1052c737u); f_1052bae0();
  /* 1052c737 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052c73d call 0x1052baf0 */
  push32(0x1052c742u); f_1052baf0();
  /* 1052c742 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052c745 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1052c747 jmp 0x1052c755 */
  goto L_1052c755;
L_1052c749:;
  /* 1052c749 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052c74c push edx */
  push32((uint32_t)(EDX));
  /* 1052c74d call 0x1052ba40 */
  push32(0x1052c752u); f_1052ba40();
  /* 1052c752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052c755:;
  /* 1052c755 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052c758 jmp 0x1052c7af */
  goto L_1052c7af;
L_1052c75a:;
  /* 1052c75a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c75d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052c760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c763 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052c766 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c769 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052c770 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1052c775 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1052c778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c77a je 0x1052c78b */
  if (C.zf) goto L_1052c78b;
  /* 1052c77c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052c77f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052c782 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c785 jne 0x1052c78b */
  if (!C.zf) goto L_1052c78b;
  /* 1052c787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c789 jmp 0x1052c7af */
  goto L_1052c7af;
L_1052c78b:;
  /* 1052c78b call 0x1052bae0 */
  push32(0x1052c790u); f_1052bae0();
  /* 1052c790 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1052c796 call 0x1052baf0 */
  push32(0x1052c79bu); f_1052baf0();
  /* 1052c79b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1052c7a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052c7a4 jmp 0x1052c7af */
  goto L_1052c7af;
L_1052c7a6:;
  /* 1052c7a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052c7a9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1052c7af:;
  /* 1052c7af mov esp, ebp */
  ESP = (EBP);
  /* 1052c7b1 pop ebp */
  EBP = (pop32());
  /* 1052c7b2 ret  */
  ESPCHK(0x1052c540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x1052c7c0 (199 bytes, 68 insns) */
void f_1052c7c0(void) {
  FTRACE(0x1052c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1052c7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c7c4 push ebx */
  push32((uint32_t)(EBX));
  /* 1052c7c5 push esi */
  push32((uint32_t)(ESI));
  /* 1052c7c6 push edi */
  push32((uint32_t)(EDI));
L_1052c7c7:;
  /* 1052c7c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c7cb jne 0x1052c7eb */
  if (!C.zf) goto L_1052c7eb;
  /* 1052c7cd push 0x1054b034 */
  push32((uint32_t)(0x1054b034u));
  /* 1052c7d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052c7d4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1052c7d6 push 0x1054b100 */
  push32((uint32_t)(0x1054b100u));
  /* 1052c7db push 2 */
  push32((uint32_t)(0x2u));
  /* 1052c7dd call 0x10522cd0 */
  push32(0x1052c7e2u); f_10522cd0();
  /* 1052c7e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c7e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c7e8 jne 0x1052c7eb */
  if (!C.zf) goto L_1052c7eb;
  /* 1052c7ea int3  */
  x86_unimpl("int3 @ 0x1052c7ea");
L_1052c7eb:;
  /* 1052c7eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c7ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052c7ef jne 0x1052c7c7 */
  if (!C.zf) goto L_1052c7c7;
  /* 1052c7f1 mov ecx, dword ptr [0x1054f74c] */
  ECX = (r32((uint32_t)(0x1054f74c)));
  /* 1052c7f7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c7fa mov dword ptr [0x1054f74c], ecx */
  w32((uint32_t)(0x1054f74c), (ECX));
  /* 1052c800 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c803 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052c806 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1052c808 push 0x1054b100 */
  push32((uint32_t)(0x1054b100u));
  /* 1052c80d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052c80f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1052c814 call 0x10523c10 */
  push32(0x1052c819u); f_10523c10();
  /* 1052c819 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c81c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c81f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1052c822 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c825 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c829 je 0x1052c846 */
  if (C.zf) goto L_1052c846;
  /* 1052c82b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c82e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052c831 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1052c834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c837 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1052c83a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c83d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1052c844 jmp 0x1052c86b */
  goto L_1052c86b;
L_1052c846:;
  /* 1052c846 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c849 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052c84c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1052c84f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c852 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1052c855 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c858 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c85b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c85e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1052c861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c864 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1052c86b:;
  /* 1052c86b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c86e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c871 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1052c874 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1052c876 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c879 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1052c880 pop edi */
  EDI = (pop32());
  /* 1052c881 pop esi */
  ESI = (pop32());
  /* 1052c882 pop ebx */
  EBX = (pop32());
  /* 1052c883 mov esp, ebp */
  ESP = (EBP);
  /* 1052c885 pop ebp */
  EBP = (pop32());
  /* 1052c886 ret  */
  ESPCHK(0x1052c7c0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1052c890 (50 bytes, 17 insns) */
void f_1052c890(void) {
  FTRACE(0x1052c890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c890 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c891 mov ebp, esp */
  EBP = (ESP);
  /* 1052c893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c896 cmp eax, dword ptr [0x1055103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1055103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c89c jb 0x1052c8a2 */
  if (C.cf) goto L_1052c8a2;
  /* 1052c89e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052c8a0 jmp 0x1052c8c0 */
  goto L_1052c8c0;
L_1052c8a2:;
  /* 1052c8a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c8a5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052c8a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052c8ab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052c8ae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c8b1 mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052c8b8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1052c8bd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1052c8c0:;
  /* 1052c8c0 pop ebp */
  EBP = (pop32());
  /* 1052c8c1 ret  */
  ESPCHK(0x1052c890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8d0 @ 0x1052c8d0 (300 bytes, 80 insns) */
void f_1052c8d0(void) {
  FTRACE(0x1052c8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052c8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052c8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1052c8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c8d4 cmp dword ptr [0x10550c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10550c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c8db jne 0x1052c8e9 */
  if (!C.zf) goto L_1052c8e9;
  /* 1052c8dd mov dword ptr [0x10550c00], 0x200 */
  w32((uint32_t)(0x10550c00), (0x200u));
  /* 1052c8e7 jmp 0x1052c8fc */
  goto L_1052c8fc;
L_1052c8e9:;
  /* 1052c8e9 cmp dword ptr [0x10550c00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10550c00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c8f0 jge 0x1052c8fc */
  if ((C.sf==C.of)) goto L_1052c8fc;
  /* 1052c8f2 mov dword ptr [0x10550c00], 0x14 */
  w32((uint32_t)(0x10550c00), (0x14u));
L_1052c8fc:;
  /* 1052c8fc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1052c901 push 0x1054b10c */
  push32((uint32_t)(0x1054b10cu));
  /* 1052c906 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052c908 push 4 */
  push32((uint32_t)(0x4u));
  /* 1052c90a mov eax, dword ptr [0x10550c00] */
  EAX = (r32((uint32_t)(0x10550c00)));
  /* 1052c90f push eax */
  push32((uint32_t)(EAX));
  /* 1052c910 call 0x10524020 */
  push32(0x1052c915u); f_10524020();
  /* 1052c915 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c918 mov dword ptr [0x1054f8c0], eax */
  w32((uint32_t)(0x1054f8c0), (EAX));
  /* 1052c91d cmp dword ptr [0x1054f8c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c924 jne 0x1052c965 */
  if (!C.zf) goto L_1052c965;
  /* 1052c926 mov dword ptr [0x10550c00], 0x14 */
  w32((uint32_t)(0x10550c00), (0x14u));
  /* 1052c930 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1052c935 push 0x1054b10c */
  push32((uint32_t)(0x1054b10cu));
  /* 1052c93a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052c93c push 4 */
  push32((uint32_t)(0x4u));
  /* 1052c93e mov ecx, dword ptr [0x10550c00] */
  ECX = (r32((uint32_t)(0x10550c00)));
  /* 1052c944 push ecx */
  push32((uint32_t)(ECX));
  /* 1052c945 call 0x10524020 */
  push32(0x1052c94au); f_10524020();
  /* 1052c94a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c94d mov dword ptr [0x1054f8c0], eax */
  w32((uint32_t)(0x1054f8c0), (EAX));
  /* 1052c952 cmp dword ptr [0x1054f8c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c959 jne 0x1052c965 */
  if (!C.zf) goto L_1052c965;
  /* 1052c95b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1052c95d call 0x10522b80 */
  push32(0x1052c962u); f_10522b80();
  /* 1052c962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052c965:;
  /* 1052c965 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052c96c jmp 0x1052c977 */
  goto L_1052c977;
L_1052c96e:;
  /* 1052c96e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c971 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c974 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1052c977:;
  /* 1052c977 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c97b jge 0x1052c996 */
  if ((C.sf==C.of)) goto L_1052c996;
  /* 1052c97d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c980 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052c983 add eax, 0x1054e120 */
  { uint32_t _a=(EAX),_b=(0x1054e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c988 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c98b mov edx, dword ptr [0x1054f8c0] */
  EDX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052c991 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1052c994 jmp 0x1052c96e */
  goto L_1052c96e;
L_1052c996:;
  /* 1052c996 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052c99d jmp 0x1052c9a8 */
  goto L_1052c9a8;
L_1052c99f:;
  /* 1052c99f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c9a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052c9a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052c9a8:;
  /* 1052c9a8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c9ac jge 0x1052c9f8 */
  if ((C.sf==C.of)) goto L_1052c9f8;
  /* 1052c9ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c9b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052c9b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c9b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052c9ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c9bd mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052c9c4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c9c8 je 0x1052c9e6 */
  if (C.zf) goto L_1052c9e6;
  /* 1052c9ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c9cd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052c9d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c9d3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052c9d6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052c9d9 mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052c9e0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052c9e4 jne 0x1052c9f6 */
  if (!C.zf) goto L_1052c9f6;
L_1052c9e6:;
  /* 1052c9e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052c9e9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052c9ec mov dword ptr [ecx + 0x1054e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1054e130), (0xffffffffu));
L_1052c9f6:;
  /* 1052c9f6 jmp 0x1052c99f */
  goto L_1052c99f;
L_1052c9f8:;
  /* 1052c9f8 mov esp, ebp */
  ESP = (EBP);
  /* 1052c9fa pop ebp */
  EBP = (pop32());
  /* 1052c9fb ret  */
  ESPCHK(0x1052c8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca00 @ 0x1052ca00 (26 bytes, 9 insns) */
void f_1052ca00(void) {
  FTRACE(0x1052ca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ca00 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ca01 mov ebp, esp */
  EBP = (ESP);
  /* 1052ca03 call 0x1052d600 */
  push32(0x1052ca08u); f_1052d600();
  /* 1052ca08 movsx eax, byte ptr [0x1054f568] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x1054f568))));
  /* 1052ca0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052ca11 je 0x1052ca18 */
  if (C.zf) goto L_1052ca18;
  /* 1052ca13 call 0x1052d3c0 */
  push32(0x1052ca18u); f_1052d3c0();
L_1052ca18:;
  /* 1052ca18 pop ebp */
  EBP = (pop32());
  /* 1052ca19 ret  */
  ESPCHK(0x1052ca00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca20 @ 0x1052ca20 (61 bytes, 20 insns) */
void f_1052ca20(void) {
  FTRACE(0x1052ca20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ca20 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ca21 mov ebp, esp */
  EBP = (ESP);
  /* 1052ca23 cmp dword ptr [ebp + 8], 0x1054e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1054e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ca2a jb 0x1052ca4e */
  if (C.cf) goto L_1052ca4e;
  /* 1052ca2c cmp dword ptr [ebp + 8], 0x1054e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1054e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ca33 ja 0x1052ca4e */
  if ((!C.cf&&!C.zf)) goto L_1052ca4e;
  /* 1052ca35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ca38 sub eax, 0x1054e120 */
  { uint32_t _a=(EAX),_b=(0x1054e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052ca3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052ca40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ca43 push eax */
  push32((uint32_t)(EAX));
  /* 1052ca44 call 0x10527610 */
  push32(0x1052ca49u); f_10527610();
  /* 1052ca49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ca4c jmp 0x1052ca5b */
  goto L_1052ca5b;
L_1052ca4e:;
  /* 1052ca4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ca51 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ca54 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ca55 call dword ptr [0x10552324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552324))), 0x1052ca5bu);
L_1052ca5b:;
  /* 1052ca5b pop ebp */
  EBP = (pop32());
  /* 1052ca5c ret  */
  ESPCHK(0x1052ca20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca60 @ 0x1052ca60 (41 bytes, 16 insns) */
void f_1052ca60(void) {
  FTRACE(0x1052ca60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ca60 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ca61 mov ebp, esp */
  EBP = (ESP);
  /* 1052ca63 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ca67 jge 0x1052ca7a */
  if ((C.sf==C.of)) goto L_1052ca7a;
  /* 1052ca69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ca6c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ca6f push eax */
  push32((uint32_t)(EAX));
  /* 1052ca70 call 0x10527610 */
  push32(0x1052ca75u); f_10527610();
  /* 1052ca75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ca78 jmp 0x1052ca87 */
  goto L_1052ca87;
L_1052ca7a:;
  /* 1052ca7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052ca7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ca80 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ca81 call dword ptr [0x10552324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552324))), 0x1052ca87u);
L_1052ca87:;
  /* 1052ca87 pop ebp */
  EBP = (pop32());
  /* 1052ca88 ret  */
  ESPCHK(0x1052ca60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca90 @ 0x1052ca90 (61 bytes, 20 insns) */
void f_1052ca90(void) {
  FTRACE(0x1052ca90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ca90 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ca91 mov ebp, esp */
  EBP = (ESP);
  /* 1052ca93 cmp dword ptr [ebp + 8], 0x1054e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1054e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ca9a jb 0x1052cabe */
  if (C.cf) goto L_1052cabe;
  /* 1052ca9c cmp dword ptr [ebp + 8], 0x1054e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1054e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052caa3 ja 0x1052cabe */
  if ((!C.cf&&!C.zf)) goto L_1052cabe;
  /* 1052caa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052caa8 sub eax, 0x1054e120 */
  { uint32_t _a=(EAX),_b=(0x1054e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052caad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052cab0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cab3 push eax */
  push32((uint32_t)(EAX));
  /* 1052cab4 call 0x105276b0 */
  push32(0x1052cab9u); f_105276b0();
  /* 1052cab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cabc jmp 0x1052cacb */
  goto L_1052cacb;
L_1052cabe:;
  /* 1052cabe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cac1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cac4 push ecx */
  push32((uint32_t)(ECX));
  /* 1052cac5 call dword ptr [0x10552320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552320))), 0x1052cacbu);
L_1052cacb:;
  /* 1052cacb pop ebp */
  EBP = (pop32());
  /* 1052cacc ret  */
  ESPCHK(0x1052ca90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cad0 @ 0x1052cad0 (41 bytes, 16 insns) */
void f_1052cad0(void) {
  FTRACE(0x1052cad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052cad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052cad1 mov ebp, esp */
  EBP = (ESP);
  /* 1052cad3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cad7 jge 0x1052caea */
  if ((C.sf==C.of)) goto L_1052caea;
  /* 1052cad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cadc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cadf push eax */
  push32((uint32_t)(EAX));
  /* 1052cae0 call 0x105276b0 */
  push32(0x1052cae5u); f_105276b0();
  /* 1052cae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cae8 jmp 0x1052caf7 */
  goto L_1052caf7;
L_1052caea:;
  /* 1052caea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052caed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052caf0 push ecx */
  push32((uint32_t)(ECX));
  /* 1052caf1 call dword ptr [0x10552320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552320))), 0x1052caf7u);
L_1052caf7:;
  /* 1052caf7 pop ebp */
  EBP = (pop32());
  /* 1052caf8 ret  */
  ESPCHK(0x1052cad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb00 @ 0x1052cb00 (119 bytes, 34 insns) */
void f_1052cb00(void) {
  FTRACE(0x1052cb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052cb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1052cb01 mov ebp, esp */
  EBP = (ESP);
  /* 1052cb03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052cb06 push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 1052cb0b call dword ptr [0x10552364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552364))), 0x1052cb11u);
  /* 1052cb11 cmp dword ptr [0x1054f8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cb18 je 0x1052cb38 */
  if (C.zf) goto L_1052cb38;
  /* 1052cb1a push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 1052cb1f call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x1052cb25u);
  /* 1052cb25 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1052cb27 call 0x10527610 */
  push32(0x1052cb2cu); f_10527610();
  /* 1052cb2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cb2f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1052cb36 jmp 0x1052cb3f */
  goto L_1052cb3f;
L_1052cb38:;
  /* 1052cb38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1052cb3f:;
  /* 1052cb3f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1052cb43 push eax */
  push32((uint32_t)(EAX));
  /* 1052cb44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cb47 push ecx */
  push32((uint32_t)(ECX));
  /* 1052cb48 call 0x1052cb80 */
  push32(0x1052cb4du); f_1052cb80();
  /* 1052cb4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cb50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052cb53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cb57 je 0x1052cb65 */
  if (C.zf) goto L_1052cb65;
  /* 1052cb59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1052cb5b call 0x105276b0 */
  push32(0x1052cb60u); f_105276b0();
  /* 1052cb60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cb63 jmp 0x1052cb70 */
  goto L_1052cb70;
L_1052cb65:;
  /* 1052cb65 push 0x1054f8bc */
  push32((uint32_t)(0x1054f8bcu));
  /* 1052cb6a call dword ptr [0x10552354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552354))), 0x1052cb70u);
L_1052cb70:;
  /* 1052cb70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052cb73 mov esp, ebp */
  ESP = (EBP);
  /* 1052cb75 pop ebp */
  EBP = (pop32());
  /* 1052cb76 ret  */
  ESPCHK(0x1052cb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb80 @ 0x1052cb80 (160 bytes, 50 insns) */
void f_1052cb80(void) {
  FTRACE(0x1052cb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052cb80 push ebp */
  push32((uint32_t)(EBP));
  /* 1052cb81 mov ebp, esp */
  EBP = (ESP);
  /* 1052cb83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052cb86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cb8a jne 0x1052cb93 */
  if (!C.zf) goto L_1052cb93;
  /* 1052cb8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052cb8e jmp 0x1052cc1c */
  goto L_1052cc1c;
L_1052cb93:;
  /* 1052cb93 cmp dword ptr [0x1054f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cb9a jne 0x1052cbca */
  if (!C.zf) goto L_1052cbca;
  /* 1052cb9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052cb9f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052cba4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cba9 jle 0x1052cbbb */
  if ((C.zf||C.sf!=C.of)) goto L_1052cbbb;
  /* 1052cbab call 0x1052bae0 */
  push32(0x1052cbb0u); f_1052bae0();
  /* 1052cbb0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1052cbb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052cbb9 jmp 0x1052cc1c */
  goto L_1052cc1c;
L_1052cbbb:;
  /* 1052cbbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cbbe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1052cbc1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1052cbc3 mov eax, 1 */
  EAX = (0x1u);
  /* 1052cbc8 jmp 0x1052cc1c */
  goto L_1052cc1c;
L_1052cbca:;
  /* 1052cbca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1052cbd1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1052cbd4 push eax */
  push32((uint32_t)(EAX));
  /* 1052cbd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052cbd7 mov ecx, dword ptr [0x1054dea4] */
  ECX = (r32((uint32_t)(0x1054dea4)));
  /* 1052cbdd push ecx */
  push32((uint32_t)(ECX));
  /* 1052cbde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cbe1 push edx */
  push32((uint32_t)(EDX));
  /* 1052cbe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052cbe4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1052cbe7 push eax */
  push32((uint32_t)(EAX));
  /* 1052cbe8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1052cbed mov ecx, dword ptr [0x1054f740] */
  ECX = (r32((uint32_t)(0x1054f740)));
  /* 1052cbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052cbf4 call dword ptr [0x105523b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105523b8))), 0x1052cbfau);
  /* 1052cbfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052cbfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cc01 je 0x1052cc09 */
  if (C.zf) goto L_1052cc09;
  /* 1052cc03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cc07 je 0x1052cc19 */
  if (C.zf) goto L_1052cc19;
L_1052cc09:;
  /* 1052cc09 call 0x1052bae0 */
  push32(0x1052cc0eu); f_1052bae0();
  /* 1052cc0e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1052cc14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052cc17 jmp 0x1052cc1c */
  goto L_1052cc1c;
L_1052cc19:;
  /* 1052cc19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1052cc1c:;
  /* 1052cc1c mov esp, ebp */
  ESP = (EBP);
  /* 1052cc1e pop ebp */
  EBP = (pop32());
  /* 1052cc1f ret  */
  ESPCHK(0x1052cb80u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1052cc20 (32 bytes, 18 insns) */
void f_1052cc20(void) {
  FTRACE(0x1052cc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052cc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1052cc21 mov ebp, esp */
  EBP = (ESP);
  /* 1052cc23 push ebx */
  push32((uint32_t)(EBX));
  /* 1052cc24 push esi */
  push32((uint32_t)(ESI));
  /* 1052cc25 push edi */
  push32((uint32_t)(EDI));
  /* 1052cc26 push ebp */
  push32((uint32_t)(EBP));
  /* 1052cc27 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052cc29 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052cc2b push 0x1052cc38 */
  push32((uint32_t)(0x1052cc38u));
  /* 1052cc30 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1052cc33 call 0x1053436c */
  push32(0x1052cc38u); f_1053436c();
  /* 1052cc38 pop ebp */
  EBP = (pop32());
  /* 1052cc39 pop edi */
  EDI = (pop32());
  /* 1052cc3a pop esi */
  ESI = (pop32());
  /* 1052cc3b pop ebx */
  EBX = (pop32());
  /* 1052cc3c mov esp, ebp */
  ESP = (EBP);
  /* 1052cc3e pop ebp */
  EBP = (pop32());
  /* 1052cc3f ret  */
  ESPCHK(0x1052cc20u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1052cc62 (104 bytes, 33 insns) */
void f_1052cc62(void) {
  FTRACE(0x1052cc62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052cc62 push ebx */
  push32((uint32_t)(EBX));
  /* 1052cc63 push esi */
  push32((uint32_t)(ESI));
  /* 1052cc64 push edi */
  push32((uint32_t)(EDI));
  /* 1052cc65 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1052cc69 push eax */
  push32((uint32_t)(EAX));
  /* 1052cc6a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1052cc6c push 0x1052cc40 */
  push32((uint32_t)(0x1052cc40u));
  /* 1052cc71 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1052cc78 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1052cc7f:;
  /* 1052cc7f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1052cc83 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1052cc86 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1052cc89 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cc8c je 0x1052ccbc */
  if (C.zf) goto L_1052ccbc;
  /* 1052cc8e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cc92 je 0x1052ccbc */
  if (C.zf) goto L_1052ccbc;
  /* 1052cc94 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1052cc97 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1052cc9a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1052cc9e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1052cca1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cca6 jne 0x1052ccba */
  if (!C.zf) goto L_1052ccba;
  /* 1052cca8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1052ccad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1052ccb1 call 0x1052ccf6 */
  push32(0x1052ccb6u); f_1052ccf6();
  /* 1052ccb6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1052ccbau);
L_1052ccba:;
  /* 1052ccba jmp 0x1052cc7f */
  goto L_1052cc7f;
L_1052ccbc:;
  /* 1052ccbc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1052ccc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ccc6 pop edi */
  EDI = (pop32());
  /* 1052ccc7 pop esi */
  ESI = (pop32());
  /* 1052ccc8 pop ebx */
  EBX = (pop32());
  /* 1052ccc9 ret  */
  ESPCHK(0x1052cc62u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf6 @ 0x1052ccf6 (24 bytes, 10 insns) */
void f_1052ccf6(void) {
  FTRACE(0x1052ccf6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ccf6 push ebx */
  push32((uint32_t)(EBX));
  /* 1052ccf7 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ccf8 mov ebx, 0x1054e3b8 */
  EBX = (0x1054e3b8u);
  /* 1052ccfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cd00 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1052cd03 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1052cd06 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1052cd09 pop ecx */
  ECX = (pop32());
  /* 1052cd0a pop ebx */
  EBX = (pop32());
  /* 1052cd0b ret 4 */
  ESPCHK(0x1052ccf6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cdd5 @ 0x1052cdd5 (27 bytes, 11 insns) */
void f_1052cdd5(void) {
  FTRACE(0x1052cdd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052cdd5 push ebp */
  push32((uint32_t)(EBP));
  /* 1052cdd6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1052cdda mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1052cddc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1052cddf push eax */
  push32((uint32_t)(EAX));
  /* 1052cde0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1052cde3 push eax */
  push32((uint32_t)(EAX));
  /* 1052cde4 call 0x1052cc62 */
  push32(0x1052cde9u); f_1052cc62();
  /* 1052cde9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cdec pop ebp */
  EBP = (pop32());
  /* 1052cded ret 4 */
  ESPCHK(0x1052cdd5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cdf0 @ 0x1052cdf0 (482 bytes, 138 insns) */
void f_1052cdf0(void) {
  FTRACE(0x1052cdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052cdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052cdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1052cdf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052cdf6 push esi */
  push32((uint32_t)(ESI));
  /* 1052cdf7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1052cdfe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1052ce00 call 0x10527610 */
  push32(0x1052ce05u); f_10527610();
  /* 1052ce05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ce08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1052ce0f jmp 0x1052ce1a */
  goto L_1052ce1a;
L_1052ce11:;
  /* 1052ce11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052ce14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ce17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1052ce1a:;
  /* 1052ce1a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ce1e jge 0x1052cfc0 */
  if ((C.sf==C.of)) goto L_1052cfc0;
  /* 1052ce24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052ce27 cmp dword ptr [ecx*4 + 0x10550f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10550f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ce2f je 0x1052cf26 */
  if (C.zf) goto L_1052cf26;
  /* 1052ce35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052ce38 mov eax, dword ptr [edx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 1052ce3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052ce42 jmp 0x1052ce4d */
  goto L_1052ce4d;
L_1052ce44:;
  /* 1052ce44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ce47 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ce4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1052ce4d:;
  /* 1052ce4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052ce50 mov eax, dword ptr [edx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 1052ce57 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ce5c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ce5f jae 0x1052cf16 */
  if (!C.cf) goto L_1052cf16;
  /* 1052ce65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ce68 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1052ce6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1052ce6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052ce71 jne 0x1052cf11 */
  if (!C.zf) goto L_1052cf11;
  /* 1052ce77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ce7a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ce7e jne 0x1052ceb9 */
  if (!C.zf) goto L_1052ceb9;
  /* 1052ce80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1052ce82 call 0x10527610 */
  push32(0x1052ce87u); f_10527610();
  /* 1052ce87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ce8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ce8d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ce91 jne 0x1052ceaf */
  if (!C.zf) goto L_1052ceaf;
  /* 1052ce93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ce96 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ce99 push edx */
  push32((uint32_t)(EDX));
  /* 1052ce9a call dword ptr [0x10552334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552334))), 0x1052cea0u);
  /* 1052cea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cea3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1052cea6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cea9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ceac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1052ceaf:;
  /* 1052ceaf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1052ceb1 call 0x105276b0 */
  push32(0x1052ceb6u); f_105276b0();
  /* 1052ceb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052ceb9:;
  /* 1052ceb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cebc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cebf push eax */
  push32((uint32_t)(EAX));
  /* 1052cec0 call dword ptr [0x10552324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552324))), 0x1052cec6u);
  /* 1052cec6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cec9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1052cecd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1052ced0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052ced2 je 0x1052cee6 */
  if (C.zf) goto L_1052cee6;
  /* 1052ced4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ced7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ceda push eax */
  push32((uint32_t)(EAX));
  /* 1052cedb call dword ptr [0x10552320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552320))), 0x1052cee1u);
  /* 1052cee1 jmp 0x1052ce44 */
  goto L_1052ce44;
L_1052cee6:;
  /* 1052cee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cee9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1052ceef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052cef2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052cef5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052cef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cefb sub eax, dword ptr [edx*4 + 0x10550f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10550f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052cf02 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1052cf03 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1052cf08 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1052cf0a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cf0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052cf0f jmp 0x1052cf16 */
  goto L_1052cf16;
L_1052cf11:;
  /* 1052cf11 jmp 0x1052ce44 */
  goto L_1052ce44;
L_1052cf16:;
  /* 1052cf16 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cf1a je 0x1052cf21 */
  if (C.zf) goto L_1052cf21;
  /* 1052cf1c jmp 0x1052cfc0 */
  goto L_1052cfc0;
L_1052cf21:;
  /* 1052cf21 jmp 0x1052cfbb */
  goto L_1052cfbb;
L_1052cf26:;
  /* 1052cf26 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1052cf28 push 0x1054b114 */
  push32((uint32_t)(0x1054b114u));
  /* 1052cf2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052cf2f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1052cf34 call 0x10523c10 */
  push32(0x1052cf39u); f_10523c10();
  /* 1052cf39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cf3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052cf3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cf43 je 0x1052cfb9 */
  if (C.zf) goto L_1052cfb9;
  /* 1052cf45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052cf48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cf4b mov dword ptr [eax*4 + 0x10550f00], ecx */
  w32((uint32_t)(EAX*4 + 0x10550f00), (ECX));
  /* 1052cf52 mov edx, dword ptr [0x1055103c] */
  EDX = (r32((uint32_t)(0x1055103c)));
  /* 1052cf58 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cf5b mov dword ptr [0x1055103c], edx */
  w32((uint32_t)(0x1055103c), (EDX));
  /* 1052cf61 jmp 0x1052cf6c */
  goto L_1052cf6c;
L_1052cf63:;
  /* 1052cf63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cf66 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cf69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052cf6c:;
  /* 1052cf6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052cf6f mov edx, dword ptr [ecx*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052cf76 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cf7c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cf7f jae 0x1052cfa4 */
  if (!C.cf) goto L_1052cfa4;
  /* 1052cf81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cf84 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1052cf88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cf8b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1052cf91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cf94 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1052cf98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052cf9b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1052cfa2 jmp 0x1052cf63 */
  goto L_1052cf63;
L_1052cfa4:;
  /* 1052cfa4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052cfa7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052cfaa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052cfad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052cfb0 push edx */
  push32((uint32_t)(EDX));
  /* 1052cfb1 call 0x1052d300 */
  push32(0x1052cfb6u); f_1052d300();
  /* 1052cfb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052cfb9:;
  /* 1052cfb9 jmp 0x1052cfc0 */
  goto L_1052cfc0;
L_1052cfbb:;
  /* 1052cfbb jmp 0x1052ce11 */
  goto L_1052ce11;
L_1052cfc0:;
  /* 1052cfc0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1052cfc2 call 0x105276b0 */
  push32(0x1052cfc7u); f_105276b0();
  /* 1052cfc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052cfca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052cfcd pop esi */
  ESI = (pop32());
  /* 1052cfce mov esp, ebp */
  ESP = (EBP);
  /* 1052cfd0 pop ebp */
  EBP = (pop32());
  /* 1052cfd1 ret  */
  ESPCHK(0x1052cdf0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1052cfe0 (183 bytes, 57 insns) */
void f_1052cfe0(void) {
  FTRACE(0x1052cfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052cfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052cfe1 mov ebp, esp */
  EBP = (ESP);
  /* 1052cfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052cfe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cfe7 cmp eax, dword ptr [0x1055103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1055103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052cfed jae 0x1052d07a */
  if (!C.cf) goto L_1052d07a;
  /* 1052cff3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cff6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052cff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052cffc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052cfff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d002 mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052d009 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d00d jne 0x1052d07a */
  if (!C.zf) goto L_1052d07a;
  /* 1052d00f cmp dword ptr [0x1054f528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d016 jne 0x1052d05a */
  if (!C.zf) goto L_1052d05a;
  /* 1052d018 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d01b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052d01e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d022 je 0x1052d032 */
  if (C.zf) goto L_1052d032;
  /* 1052d024 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d028 je 0x1052d040 */
  if (C.zf) goto L_1052d040;
  /* 1052d02a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d02e je 0x1052d04e */
  if (C.zf) goto L_1052d04e;
  /* 1052d030 jmp 0x1052d05a */
  goto L_1052d05a;
L_1052d032:;
  /* 1052d032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d035 push edx */
  push32((uint32_t)(EDX));
  /* 1052d036 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1052d038 call dword ptr [0x105522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522ec))), 0x1052d03eu);
  /* 1052d03e jmp 0x1052d05a */
  goto L_1052d05a;
L_1052d040:;
  /* 1052d040 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d043 push eax */
  push32((uint32_t)(EAX));
  /* 1052d044 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1052d046 call dword ptr [0x105522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522ec))), 0x1052d04cu);
  /* 1052d04c jmp 0x1052d05a */
  goto L_1052d05a;
L_1052d04e:;
  /* 1052d04e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d051 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d052 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1052d054 call dword ptr [0x105522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522ec))), 0x1052d05au);
L_1052d05a:;
  /* 1052d05a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d05d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1052d060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d063 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1052d066 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d069 mov ecx, dword ptr [edx*4 + 0x10550f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 1052d070 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d073 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1052d076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052d078 jmp 0x1052d093 */
  goto L_1052d093;
L_1052d07a:;
  /* 1052d07a call 0x1052bae0 */
  push32(0x1052d07fu); f_1052bae0();
  /* 1052d07f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052d085 call 0x1052baf0 */
  push32(0x1052d08au); f_1052baf0();
  /* 1052d08a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1052d090 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1052d093:;
  /* 1052d093 mov esp, ebp */
  ESP = (EBP);
  /* 1052d095 pop ebp */
  EBP = (pop32());
  /* 1052d096 ret  */
  ESPCHK(0x1052cfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x1052d0a0 (216 bytes, 63 insns) */
void f_1052d0a0(void) {
  FTRACE(0x1052d0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1052d0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d0a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d0a7 cmp eax, dword ptr [0x1055103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1055103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d0ad jae 0x1052d15b */
  if (!C.cf) goto L_1052d15b;
  /* 1052d0b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d0b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052d0b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d0bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052d0bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d0c2 mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052d0c9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1052d0ce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1052d0d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052d0d3 je 0x1052d15b */
  if (C.zf) goto L_1052d15b;
  /* 1052d0d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d0dc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1052d0df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d0e2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1052d0e5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d0e8 mov ecx, dword ptr [edx*4 + 0x10550f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 1052d0ef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d0f3 je 0x1052d15b */
  if (C.zf) goto L_1052d15b;
  /* 1052d0f5 cmp dword ptr [0x1054f528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054f528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d0fc jne 0x1052d13a */
  if (!C.zf) goto L_1052d13a;
  /* 1052d0fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d101 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052d104 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d108 je 0x1052d118 */
  if (C.zf) goto L_1052d118;
  /* 1052d10a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d10e je 0x1052d124 */
  if (C.zf) goto L_1052d124;
  /* 1052d110 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d114 je 0x1052d130 */
  if (C.zf) goto L_1052d130;
  /* 1052d116 jmp 0x1052d13a */
  goto L_1052d13a;
L_1052d118:;
  /* 1052d118 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052d11a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1052d11c call dword ptr [0x105522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522ec))), 0x1052d122u);
  /* 1052d122 jmp 0x1052d13a */
  goto L_1052d13a;
L_1052d124:;
  /* 1052d124 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052d126 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1052d128 call dword ptr [0x105522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522ec))), 0x1052d12eu);
  /* 1052d12e jmp 0x1052d13a */
  goto L_1052d13a;
L_1052d130:;
  /* 1052d130 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052d132 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1052d134 call dword ptr [0x105522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522ec))), 0x1052d13au);
L_1052d13a:;
  /* 1052d13a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d13d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052d140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d143 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052d146 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d149 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052d150 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1052d157 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052d159 jmp 0x1052d174 */
  goto L_1052d174;
L_1052d15b:;
  /* 1052d15b call 0x1052bae0 */
  push32(0x1052d160u); f_1052bae0();
  /* 1052d160 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052d166 call 0x1052baf0 */
  push32(0x1052d16bu); f_1052baf0();
  /* 1052d16b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1052d171 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1052d174:;
  /* 1052d174 mov esp, ebp */
  ESP = (EBP);
  /* 1052d176 pop ebp */
  EBP = (pop32());
  /* 1052d177 ret  */
  ESPCHK(0x1052d0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x1052d180 (102 bytes, 30 insns) */
void f_1052d180(void) {
  FTRACE(0x1052d180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d180 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d181 mov ebp, esp */
  EBP = (ESP);
  /* 1052d183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d186 cmp eax, dword ptr [0x1055103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1055103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d18c jae 0x1052d1cb */
  if (!C.cf) goto L_1052d1cb;
  /* 1052d18e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d191 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052d194 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d197 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052d19a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d19d mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052d1a4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1052d1a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1052d1ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052d1ae je 0x1052d1cb */
  if (C.zf) goto L_1052d1cb;
  /* 1052d1b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d1b3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1052d1b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d1b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1052d1bc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d1bf mov ecx, dword ptr [edx*4 + 0x10550f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10550f00)));
  /* 1052d1c6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1052d1c9 jmp 0x1052d1e4 */
  goto L_1052d1e4;
L_1052d1cb:;
  /* 1052d1cb call 0x1052bae0 */
  push32(0x1052d1d0u); f_1052bae0();
  /* 1052d1d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052d1d6 call 0x1052baf0 */
  push32(0x1052d1dbu); f_1052baf0();
  /* 1052d1db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1052d1e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1052d1e4:;
  /* 1052d1e4 pop ebp */
  EBP = (pop32());
  /* 1052d1e5 ret  */
  ESPCHK(0x1052d180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x1052d1f0 (260 bytes, 83 insns) */
void f_1052d1f0(void) {
  FTRACE(0x1052d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1052d1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d1f6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1052d1fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d1fd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1052d200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052d202 je 0x1052d20d */
  if (C.zf) goto L_1052d20d;
  /* 1052d204 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1052d207 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1052d20a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1052d20d:;
  /* 1052d20d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d210 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1052d216 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052d218 je 0x1052d222 */
  if (C.zf) goto L_1052d222;
  /* 1052d21a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1052d21d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1052d21f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1052d222:;
  /* 1052d222 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d225 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1052d22b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052d22d je 0x1052d238 */
  if (C.zf) goto L_1052d238;
  /* 1052d22f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1052d232 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1052d235 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1052d238:;
  /* 1052d238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d23b push eax */
  push32((uint32_t)(EAX));
  /* 1052d23c call dword ptr [0x1055239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1055239c))), 0x1052d242u);
  /* 1052d242 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052d245 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d249 jne 0x1052d262 */
  if (!C.zf) goto L_1052d262;
  /* 1052d24b call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x1052d251u);
  /* 1052d251 push eax */
  push32((uint32_t)(EAX));
  /* 1052d252 call 0x1052ba40 */
  push32(0x1052d257u); f_1052ba40();
  /* 1052d257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d25a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052d25d jmp 0x1052d2f0 */
  goto L_1052d2f0;
L_1052d262:;
  /* 1052d262 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d266 jne 0x1052d273 */
  if (!C.zf) goto L_1052d273;
  /* 1052d268 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1052d26b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1052d26e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1052d271 jmp 0x1052d282 */
  goto L_1052d282;
L_1052d273:;
  /* 1052d273 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d277 jne 0x1052d282 */
  if (!C.zf) goto L_1052d282;
  /* 1052d279 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1052d27c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1052d27f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1052d282:;
  /* 1052d282 call 0x1052cdf0 */
  push32(0x1052d287u); f_1052cdf0();
  /* 1052d287 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052d28a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d28e jne 0x1052d2ab */
  if (!C.zf) goto L_1052d2ab;
  /* 1052d290 call 0x1052bae0 */
  push32(0x1052d295u); f_1052bae0();
  /* 1052d295 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1052d29b call 0x1052baf0 */
  push32(0x1052d2a0u); f_1052baf0();
  /* 1052d2a0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1052d2a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052d2a9 jmp 0x1052d2f0 */
  goto L_1052d2f0;
L_1052d2ab:;
  /* 1052d2ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d2ae push eax */
  push32((uint32_t)(EAX));
  /* 1052d2af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d2b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d2b3 call 0x1052cfe0 */
  push32(0x1052d2b8u); f_1052cfe0();
  /* 1052d2b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d2bb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1052d2be or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1052d2c1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1052d2c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d2c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052d2ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d2cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052d2d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d2d3 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052d2da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1052d2dd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1052d2e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d2e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d2e5 call 0x1052d390 */
  push32(0x1052d2eau); f_1052d390();
  /* 1052d2ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d2ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1052d2f0:;
  /* 1052d2f0 mov esp, ebp */
  ESP = (EBP);
  /* 1052d2f2 pop ebp */
  EBP = (pop32());
  /* 1052d2f3 ret  */
  ESPCHK(0x1052d1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x1052d300 (134 bytes, 44 insns) */
void f_1052d300(void) {
  FTRACE(0x1052d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d300 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d301 mov ebp, esp */
  EBP = (ESP);
  /* 1052d303 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d307 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052d30a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d30d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052d310 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d313 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052d31a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d31c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1052d31f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d322 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d326 jne 0x1052d361 */
  if (!C.zf) goto L_1052d361;
  /* 1052d328 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1052d32a call 0x10527610 */
  push32(0x1052d32fu); f_10527610();
  /* 1052d32f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d335 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d339 jne 0x1052d357 */
  if (!C.zf) goto L_1052d357;
  /* 1052d33b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d33e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d341 push edx */
  push32((uint32_t)(EDX));
  /* 1052d342 call dword ptr [0x10552334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552334))), 0x1052d348u);
  /* 1052d348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d34b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1052d34e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d351 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d354 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1052d357:;
  /* 1052d357 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1052d359 call 0x105276b0 */
  push32(0x1052d35eu); f_105276b0();
  /* 1052d35e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052d361:;
  /* 1052d361 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d364 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052d367 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d36a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052d36d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d370 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052d377 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1052d37b push eax */
  push32((uint32_t)(EAX));
  /* 1052d37c call dword ptr [0x10552324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552324))), 0x1052d382u);
  /* 1052d382 mov esp, ebp */
  ESP = (EBP);
  /* 1052d384 pop ebp */
  EBP = (pop32());
  /* 1052d385 ret  */
  ESPCHK(0x1052d300u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1052d390 (38 bytes, 13 insns) */
void f_1052d390(void) {
  FTRACE(0x1052d390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d390 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d391 mov ebp, esp */
  EBP = (ESP);
  /* 1052d393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d396 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052d399 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d39c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052d39f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d3a2 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052d3a9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1052d3ad push eax */
  push32((uint32_t)(EAX));
  /* 1052d3ae call dword ptr [0x10552320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552320))), 0x1052d3b4u);
  /* 1052d3b4 pop ebp */
  EBP = (pop32());
  /* 1052d3b5 ret  */
  ESPCHK(0x1052d390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x1052d3c0 (218 bytes, 63 insns) */
void f_1052d3c0(void) {
  FTRACE(0x1052d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1052d3c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d3c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052d3cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1052d3cf call 0x10527610 */
  push32(0x1052d3d4u); f_10527610();
  /* 1052d3d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d3d7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1052d3de jmp 0x1052d3e9 */
  goto L_1052d3e9;
L_1052d3e0:;
  /* 1052d3e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d3e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d3e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1052d3e9:;
  /* 1052d3e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d3ec cmp ecx, dword ptr [0x10550c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d3f2 jge 0x1052d489 */
  if ((C.sf==C.of)) goto L_1052d489;
  /* 1052d3f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d3fb mov eax, dword ptr [0x1054f8c0] */
  EAX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d400 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d404 je 0x1052d484 */
  if (C.zf) goto L_1052d484;
  /* 1052d406 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d409 mov edx, dword ptr [0x1054f8c0] */
  EDX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d40f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1052d412 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052d415 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1052d41b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052d41d je 0x1052d441 */
  if (C.zf) goto L_1052d441;
  /* 1052d41f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d422 mov eax, dword ptr [0x1054f8c0] */
  EAX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d427 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1052d42a push ecx */
  push32((uint32_t)(ECX));
  /* 1052d42b call 0x1052e1b0 */
  push32(0x1052d430u); f_1052e1b0();
  /* 1052d430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d433 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d436 je 0x1052d441 */
  if (C.zf) goto L_1052d441;
  /* 1052d438 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d43b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d43e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1052d441:;
  /* 1052d441 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d445 jl 0x1052d484 */
  if ((C.sf!=C.of)) goto L_1052d484;
  /* 1052d447 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d44a mov ecx, dword ptr [0x1054f8c0] */
  ECX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d450 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1052d453 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d456 push edx */
  push32((uint32_t)(EDX));
  /* 1052d457 call dword ptr [0x10552380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552380))), 0x1052d45du);
  /* 1052d45d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052d45f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d462 mov ecx, dword ptr [0x1054f8c0] */
  ECX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d468 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1052d46b push edx */
  push32((uint32_t)(EDX));
  /* 1052d46c call 0x105246a0 */
  push32(0x1052d471u); f_105246a0();
  /* 1052d471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d474 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d477 mov ecx, dword ptr [0x1054f8c0] */
  ECX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d47d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1052d484:;
  /* 1052d484 jmp 0x1052d3e0 */
  goto L_1052d3e0;
L_1052d489:;
  /* 1052d489 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052d48b call 0x105276b0 */
  push32(0x1052d490u); f_105276b0();
  /* 1052d490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d496 mov esp, ebp */
  ESP = (EBP);
  /* 1052d498 pop ebp */
  EBP = (pop32());
  /* 1052d499 ret  */
  ESPCHK(0x1052d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4a0 @ 0x1052d4a0 (68 bytes, 26 insns) */
void f_1052d4a0(void) {
  FTRACE(0x1052d4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1052d4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d4a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d4a8 jne 0x1052d4b6 */
  if (!C.zf) goto L_1052d4b6;
  /* 1052d4aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1052d4ac call 0x1052d610 */
  push32(0x1052d4b1u); f_1052d610();
  /* 1052d4b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d4b4 jmp 0x1052d4e0 */
  goto L_1052d4e0;
L_1052d4b6:;
  /* 1052d4b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d4b9 push eax */
  push32((uint32_t)(EAX));
  /* 1052d4ba call 0x1052ca20 */
  push32(0x1052d4bfu); f_1052ca20();
  /* 1052d4bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d4c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d4c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d4c6 call 0x1052d4f0 */
  push32(0x1052d4cbu); f_1052d4f0();
  /* 1052d4cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d4ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052d4d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d4d4 push edx */
  push32((uint32_t)(EDX));
  /* 1052d4d5 call 0x1052ca90 */
  push32(0x1052d4dau); f_1052ca90();
  /* 1052d4da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d4dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1052d4e0:;
  /* 1052d4e0 mov esp, ebp */
  ESP = (EBP);
  /* 1052d4e2 pop ebp */
  EBP = (pop32());
  /* 1052d4e3 ret  */
  ESPCHK(0x1052d4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4f0 @ 0x1052d4f0 (65 bytes, 26 insns) */
void f_1052d4f0(void) {
  FTRACE(0x1052d4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1052d4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d4f6 push eax */
  push32((uint32_t)(EAX));
  /* 1052d4f7 call 0x1052d540 */
  push32(0x1052d4fcu); f_1052d540();
  /* 1052d4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d4ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052d501 je 0x1052d508 */
  if (C.zf) goto L_1052d508;
  /* 1052d503 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052d506 jmp 0x1052d52f */
  goto L_1052d52f;
L_1052d508:;
  /* 1052d508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d50b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052d50e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1052d514 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052d516 je 0x1052d52d */
  if (C.zf) goto L_1052d52d;
  /* 1052d518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d51b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1052d51e push ecx */
  push32((uint32_t)(ECX));
  /* 1052d51f call 0x1052e300 */
  push32(0x1052d524u); f_1052e300();
  /* 1052d524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d527 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052d529 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d52b jmp 0x1052d52f */
  goto L_1052d52f;
L_1052d52d:;
  /* 1052d52d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052d52f:;
  /* 1052d52f pop ebp */
  EBP = (pop32());
  /* 1052d530 ret  */
  ESPCHK(0x1052d4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d540 @ 0x1052d540 (183 bytes, 62 insns) */
void f_1052d540(void) {
  FTRACE(0x1052d540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d540 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d541 mov ebp, esp */
  EBP = (ESP);
  /* 1052d543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d546 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052d54d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d550 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052d553 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d556 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052d559 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1052d55c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d55f jne 0x1052d5db */
  if (!C.zf) goto L_1052d5db;
  /* 1052d561 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d564 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052d567 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1052d56d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052d56f je 0x1052d5db */
  if (C.zf) goto L_1052d5db;
  /* 1052d571 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d574 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d577 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1052d579 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d57c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052d57f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d583 jle 0x1052d5db */
  if ((C.zf||C.sf!=C.of)) goto L_1052d5db;
  /* 1052d585 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d588 push edx */
  push32((uint32_t)(EDX));
  /* 1052d589 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d58c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1052d58f push ecx */
  push32((uint32_t)(ECX));
  /* 1052d590 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d593 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1052d596 push eax */
  push32((uint32_t)(EAX));
  /* 1052d597 call 0x1052c4b0 */
  push32(0x1052d59cu); f_1052c4b0();
  /* 1052d59c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d59f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d5a2 jne 0x1052d5c5 */
  if (!C.zf) goto L_1052d5c5;
  /* 1052d5a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d5a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052d5aa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1052d5b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052d5b2 je 0x1052d5c3 */
  if (C.zf) goto L_1052d5c3;
  /* 1052d5b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d5b7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052d5ba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1052d5bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d5c0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1052d5c3:;
  /* 1052d5c3 jmp 0x1052d5db */
  goto L_1052d5db;
L_1052d5c5:;
  /* 1052d5c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d5c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052d5cb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1052d5ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d5d1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1052d5d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1052d5db:;
  /* 1052d5db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d5de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d5e1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1052d5e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1052d5e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052d5e9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1052d5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d5f3 mov esp, ebp */
  ESP = (EBP);
  /* 1052d5f5 pop ebp */
  EBP = (pop32());
  /* 1052d5f6 ret  */
  ESPCHK(0x1052d540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d600 @ 0x1052d600 (15 bytes, 7 insns) */
void f_1052d600(void) {
  FTRACE(0x1052d600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d600 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d601 mov ebp, esp */
  EBP = (ESP);
  /* 1052d603 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052d605 call 0x1052d610 */
  push32(0x1052d60au); f_1052d610();
  /* 1052d60a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d60d pop ebp */
  EBP = (pop32());
  /* 1052d60e ret  */
  ESPCHK(0x1052d600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d610 @ 0x1052d610 (319 bytes, 94 insns) */
void f_1052d610(void) {
  FTRACE(0x1052d610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d610 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d611 mov ebp, esp */
  EBP = (ESP);
  /* 1052d613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d616 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052d61d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1052d624 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052d626 call 0x10527610 */
  push32(0x1052d62bu); f_10527610();
  /* 1052d62b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d62e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1052d635 jmp 0x1052d640 */
  goto L_1052d640;
L_1052d637:;
  /* 1052d637 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d63a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d63d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1052d640:;
  /* 1052d640 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d643 cmp ecx, dword ptr [0x10550c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10550c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d649 jge 0x1052d733 */
  if ((C.sf==C.of)) goto L_1052d733;
  /* 1052d64f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d652 mov eax, dword ptr [0x1054f8c0] */
  EAX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d657 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d65b je 0x1052d72e */
  if (C.zf) goto L_1052d72e;
  /* 1052d661 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d664 mov edx, dword ptr [0x1054f8c0] */
  EDX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d66a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1052d66d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1052d670 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1052d676 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052d678 je 0x1052d72e */
  if (C.zf) goto L_1052d72e;
  /* 1052d67e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d681 mov eax, dword ptr [0x1054f8c0] */
  EAX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d686 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1052d689 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d68a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d68d push edx */
  push32((uint32_t)(EDX));
  /* 1052d68e call 0x1052ca60 */
  push32(0x1052d693u); f_1052ca60();
  /* 1052d693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d696 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d699 mov ecx, dword ptr [0x1054f8c0] */
  ECX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d69f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1052d6a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1052d6a5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1052d6aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052d6ac je 0x1052d715 */
  if (C.zf) goto L_1052d715;
  /* 1052d6ae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d6b2 jne 0x1052d6d9 */
  if (!C.zf) goto L_1052d6d9;
  /* 1052d6b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d6b7 mov edx, dword ptr [0x1054f8c0] */
  EDX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d6bd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1052d6c0 push eax */
  push32((uint32_t)(EAX));
  /* 1052d6c1 call 0x1052d4f0 */
  push32(0x1052d6c6u); f_1052d4f0();
  /* 1052d6c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d6c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d6cc je 0x1052d6d7 */
  if (C.zf) goto L_1052d6d7;
  /* 1052d6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d6d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d6d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1052d6d7:;
  /* 1052d6d7 jmp 0x1052d715 */
  goto L_1052d715;
L_1052d6d9:;
  /* 1052d6d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d6dd jne 0x1052d715 */
  if (!C.zf) goto L_1052d715;
  /* 1052d6df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d6e2 mov eax, dword ptr [0x1054f8c0] */
  EAX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d6e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1052d6ea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052d6ed and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1052d6f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052d6f2 je 0x1052d715 */
  if (C.zf) goto L_1052d715;
  /* 1052d6f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d6f7 mov ecx, dword ptr [0x1054f8c0] */
  ECX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d6fd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1052d700 push edx */
  push32((uint32_t)(EDX));
  /* 1052d701 call 0x1052d4f0 */
  push32(0x1052d706u); f_1052d4f0();
  /* 1052d706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d709 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d70c jne 0x1052d715 */
  if (!C.zf) goto L_1052d715;
  /* 1052d70e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1052d715:;
  /* 1052d715 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d718 mov ecx, dword ptr [0x1054f8c0] */
  ECX = (r32((uint32_t)(0x1054f8c0)));
  /* 1052d71e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1052d721 push edx */
  push32((uint32_t)(EDX));
  /* 1052d722 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d725 push eax */
  push32((uint32_t)(EAX));
  /* 1052d726 call 0x1052cad0 */
  push32(0x1052d72bu); f_1052cad0();
  /* 1052d72b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052d72e:;
  /* 1052d72e jmp 0x1052d637 */
  goto L_1052d637;
L_1052d733:;
  /* 1052d733 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052d735 call 0x105276b0 */
  push32(0x1052d73au); f_105276b0();
  /* 1052d73a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d73d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d741 jne 0x1052d748 */
  if (!C.zf) goto L_1052d748;
  /* 1052d743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052d746 jmp 0x1052d74b */
  goto L_1052d74b;
L_1052d748:;
  /* 1052d748 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1052d74b:;
  /* 1052d74b mov esp, ebp */
  ESP = (EBP);
  /* 1052d74d pop ebp */
  EBP = (pop32());
  /* 1052d74e ret  */
  ESPCHK(0x1052d610u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1052d750 (15 bytes, 7 insns) */
void f_1052d750(void) {
  FTRACE(0x1052d750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d750 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d751 mov ebp, esp */
  EBP = (ESP);
  /* 1052d753 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052d755 call 0x10522b80 */
  push32(0x1052d75au); f_10522b80();
  /* 1052d75a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d75d pop ebp */
  EBP = (pop32());
  /* 1052d75e ret  */
  ESPCHK(0x1052d750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x1052d760 (1007 bytes, 269 insns) */
void f_1052d760(void) {
  FTRACE(0x1052d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052d760 push ebp */
  push32((uint32_t)(EBP));
  /* 1052d761 mov ebp, esp */
  EBP = (ESP);
  /* 1052d763 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d769 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d76d jl 0x1052d775 */
  if ((C.sf!=C.of)) goto L_1052d775;
  /* 1052d76f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d773 jle 0x1052d77c */
  if ((C.zf||C.sf!=C.of)) goto L_1052d77c;
L_1052d775:;
  /* 1052d775 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052d777 jmp 0x1052db4b */
  goto L_1052db4b;
L_1052d77c:;
  /* 1052d77c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1052d77e call 0x10527610 */
  push32(0x1052d783u); f_10527610();
  /* 1052d783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d786 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1052d78d mov eax, dword ptr [0x1054f8ac] */
  EAX = (r32((uint32_t)(0x1054f8ac)));
  /* 1052d792 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d795 mov dword ptr [0x1054f8ac], eax */
  w32((uint32_t)(0x1054f8ac), (EAX));
L_1052d79a:;
  /* 1052d79a cmp dword ptr [0x1054f8bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f8bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d7a1 je 0x1052d7ad */
  if (C.zf) goto L_1052d7ad;
  /* 1052d7a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052d7a5 call dword ptr [0x105522dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522dc))), 0x1052d7abu);
  /* 1052d7ab jmp 0x1052d79a */
  goto L_1052d79a;
L_1052d7ad:;
  /* 1052d7ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d7b1 je 0x1052d7f1 */
  if (C.zf) goto L_1052d7f1;
  /* 1052d7b3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d7b7 je 0x1052d7d1 */
  if (C.zf) goto L_1052d7d1;
  /* 1052d7b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d7bc push ecx */
  push32((uint32_t)(ECX));
  /* 1052d7bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d7c0 push edx */
  push32((uint32_t)(EDX));
  /* 1052d7c1 call 0x1052db50 */
  push32(0x1052d7c6u); f_1052db50();
  /* 1052d7c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d7c9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1052d7cf jmp 0x1052d7e3 */
  goto L_1052d7e3;
L_1052d7d1:;
  /* 1052d7d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052d7d4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d7d7 mov ecx, dword ptr [eax + 0x1054e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1054e4dc)));
  /* 1052d7dd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1052d7e3:;
  /* 1052d7e3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1052d7e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1052d7ec jmp 0x1052db2b */
  goto L_1052db2b;
L_1052d7f1:;
  /* 1052d7f1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1052d7f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1052d7ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d803 je 0x1052db23 */
  if (C.zf) goto L_1052db23;
  /* 1052d809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d80c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052d80f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d812 jne 0x1052da34 */
  if (!C.zf) goto L_1052da34;
  /* 1052d818 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d81b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1052d81f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d822 jne 0x1052da34 */
  if (!C.zf) goto L_1052da34;
  /* 1052d828 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d82b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1052d82f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d832 jne 0x1052da34 */
  if (!C.zf) goto L_1052da34;
  /* 1052d838 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052d83b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1052d841:;
  /* 1052d841 push 0x1054b164 */
  push32((uint32_t)(0x1054b164u));
  /* 1052d846 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1052d84c push ecx */
  push32((uint32_t)(ECX));
  /* 1052d84d call 0x1052f9b0 */
  push32(0x1052d852u); f_1052f9b0();
  /* 1052d852 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d855 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1052d85b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d862 je 0x1052d88d */
  if (C.zf) goto L_1052d88d;
  /* 1052d864 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052d86a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d870 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1052d876 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d87d je 0x1052d88d */
  if (C.zf) goto L_1052d88d;
  /* 1052d87f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052d885 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052d888 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d88b jne 0x1052d8b3 */
  if (!C.zf) goto L_1052d8b3;
L_1052d88d:;
  /* 1052d88d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d891 je 0x1052d8ac */
  if (C.zf) goto L_1052d8ac;
  /* 1052d893 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1052d895 call 0x105276b0 */
  push32(0x1052d89au); f_105276b0();
  /* 1052d89a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d89d mov edx, dword ptr [0x1054f8ac] */
  EDX = (r32((uint32_t)(0x1054f8ac)));
  /* 1052d8a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d8a6 mov dword ptr [0x1054f8ac], edx */
  w32((uint32_t)(0x1054f8ac), (EDX));
L_1052d8ac:;
  /* 1052d8ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052d8ae jmp 0x1052db4b */
  goto L_1052db4b;
L_1052d8b3:;
  /* 1052d8b3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1052d8ba jmp 0x1052d8c5 */
  goto L_1052d8c5;
L_1052d8bc:;
  /* 1052d8bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052d8bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d8c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1052d8c5:;
  /* 1052d8c5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d8c9 jg 0x1052d913 */
  if ((!C.zf&&C.sf==C.of)) goto L_1052d913;
  /* 1052d8cb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1052d8d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d8d2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1052d8d8 push edx */
  push32((uint32_t)(EDX));
  /* 1052d8d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052d8dc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d8df mov ecx, dword ptr [eax + 0x1054e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1054e4d8)));
  /* 1052d8e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d8e6 call 0x1052f970 */
  push32(0x1052d8ebu); f_1052f970();
  /* 1052d8eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d8ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052d8f0 jne 0x1052d911 */
  if (!C.zf) goto L_1052d911;
  /* 1052d8f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052d8f5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052d8f8 mov eax, dword ptr [edx + 0x1054e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1054e4d8)));
  /* 1052d8fe push eax */
  push32((uint32_t)(EAX));
  /* 1052d8ff call 0x10526a40 */
  push32(0x1052d904u); f_10526a40();
  /* 1052d904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d907 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d90d jne 0x1052d911 */
  if (!C.zf) goto L_1052d911;
  /* 1052d90f jmp 0x1052d913 */
  goto L_1052d913;
L_1052d911:;
  /* 1052d911 jmp 0x1052d8bc */
  goto L_1052d8bc;
L_1052d913:;
  /* 1052d913 push 0x1054b160 */
  push32((uint32_t)(0x1054b160u));
  /* 1052d918 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052d91e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d921 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1052d927 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052d92d push edx */
  push32((uint32_t)(EDX));
  /* 1052d92e call 0x1052f930 */
  push32(0x1052d933u); f_1052f930();
  /* 1052d933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d936 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1052d93c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d943 jne 0x1052d979 */
  if (!C.zf) goto L_1052d979;
  /* 1052d945 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052d94b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052d94e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d951 je 0x1052d979 */
  if (C.zf) goto L_1052d979;
  /* 1052d953 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d957 je 0x1052d972 */
  if (C.zf) goto L_1052d972;
  /* 1052d959 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1052d95b call 0x105276b0 */
  push32(0x1052d960u); f_105276b0();
  /* 1052d960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d963 mov edx, dword ptr [0x1054f8ac] */
  EDX = (r32((uint32_t)(0x1054f8ac)));
  /* 1052d969 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052d96c mov dword ptr [0x1054f8ac], edx */
  w32((uint32_t)(0x1054f8ac), (EDX));
L_1052d972:;
  /* 1052d972 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052d974 jmp 0x1052db4b */
  goto L_1052db4b;
L_1052d979:;
  /* 1052d979 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052d97d jg 0x1052d9ca */
  if ((!C.zf&&C.sf==C.of)) goto L_1052d9ca;
  /* 1052d97f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1052d985 push eax */
  push32((uint32_t)(EAX));
  /* 1052d986 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052d98c push ecx */
  push32((uint32_t)(ECX));
  /* 1052d98d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1052d993 push edx */
  push32((uint32_t)(EDX));
  /* 1052d994 call 0x10527430 */
  push32(0x1052d999u); f_10527430();
  /* 1052d999 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d99c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1052d9a2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1052d9aa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1052d9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1052d9b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052d9b4 push edx */
  push32((uint32_t)(EDX));
  /* 1052d9b5 call 0x1052db50 */
  push32(0x1052d9bau); f_1052db50();
  /* 1052d9ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d9bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052d9bf je 0x1052d9ca */
  if (C.zf) goto L_1052d9ca;
  /* 1052d9c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052d9c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d9c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1052d9ca:;
  /* 1052d9ca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052d9d0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d9d6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1052d9dc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1052d9e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1052d9e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052d9e7 je 0x1052d9f8 */
  if (C.zf) goto L_1052d9f8;
  /* 1052d9e9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1052d9ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052d9f2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1052d9f8:;
  /* 1052d9f8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1052d9fe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1052da01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052da03 jne 0x1052d841 */
  if (!C.zf) goto L_1052d841;
  /* 1052da09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052da0d je 0x1052da1c */
  if (C.zf) goto L_1052da1c;
  /* 1052da0f call 0x1052dcf0 */
  push32(0x1052da14u); f_1052dcf0();
  /* 1052da14 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1052da1a jmp 0x1052da26 */
  goto L_1052da26;
L_1052da1c:;
  /* 1052da1c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1052da26:;
  /* 1052da26 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1052da2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052da2f jmp 0x1052db21 */
  goto L_1052db21;
L_1052da34:;
  /* 1052da34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052da37 push edx */
  push32((uint32_t)(EDX));
  /* 1052da38 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052da3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1052da3c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1052da42 push eax */
  push32((uint32_t)(EAX));
  /* 1052da43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052da46 push ecx */
  push32((uint32_t)(ECX));
  /* 1052da47 call 0x1052ddf0 */
  push32(0x1052da4cu); f_1052ddf0();
  /* 1052da4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052da4f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052da52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052da56 je 0x1052db21 */
  if (C.zf) goto L_1052db21;
  /* 1052da5c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1052da63 jmp 0x1052da6e */
  goto L_1052da6e;
L_1052da65:;
  /* 1052da65 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052da68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052da6b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1052da6e:;
  /* 1052da6e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052da72 jg 0x1052dad0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1052dad0;
  /* 1052da74 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052da78 je 0x1052dace */
  if (C.zf) goto L_1052dace;
  /* 1052da7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052da7d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052da80 mov ecx, dword ptr [eax + 0x1054e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1054e4dc)));
  /* 1052da86 push ecx */
  push32((uint32_t)(ECX));
  /* 1052da87 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1052da8d push edx */
  push32((uint32_t)(EDX));
  /* 1052da8e call 0x1052f8a0 */
  push32(0x1052da93u); f_1052f8a0();
  /* 1052da93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052da96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052da98 je 0x1052dac5 */
  if (C.zf) goto L_1052dac5;
  /* 1052da9a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1052daa0 push eax */
  push32((uint32_t)(EAX));
  /* 1052daa1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1052daa4 push ecx */
  push32((uint32_t)(ECX));
  /* 1052daa5 call 0x1052db50 */
  push32(0x1052daaau); f_1052db50();
  /* 1052daaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052daad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052daaf je 0x1052dabc */
  if (C.zf) goto L_1052dabc;
  /* 1052dab1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052dab4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dab7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1052daba jmp 0x1052dac3 */
  goto L_1052dac3;
L_1052dabc:;
  /* 1052dabc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1052dac3:;
  /* 1052dac3 jmp 0x1052dace */
  goto L_1052dace;
L_1052dac5:;
  /* 1052dac5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052dac8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dacb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1052dace:;
  /* 1052dace jmp 0x1052da65 */
  goto L_1052da65;
L_1052dad0:;
  /* 1052dad0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052dad4 je 0x1052dafb */
  if (C.zf) goto L_1052dafb;
  /* 1052dad6 call 0x1052dcf0 */
  push32(0x1052dadbu); f_1052dcf0();
  /* 1052dadb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052dade push 2 */
  push32((uint32_t)(0x2u));
  /* 1052dae0 mov ecx, dword ptr [0x1054e4dc] */
  ECX = (r32((uint32_t)(0x1054e4dc)));
  /* 1052dae6 push ecx */
  push32((uint32_t)(ECX));
  /* 1052dae7 call 0x105246a0 */
  push32(0x1052daecu); f_105246a0();
  /* 1052daec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052daef mov dword ptr [0x1054e4dc], 0 */
  w32((uint32_t)(0x1054e4dc), (0x0u));
  /* 1052daf9 jmp 0x1052db21 */
  goto L_1052db21;
L_1052dafb:;
  /* 1052dafb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052daff je 0x1052db0e */
  if (C.zf) goto L_1052db0e;
  /* 1052db01 call 0x1052dcf0 */
  push32(0x1052db06u); f_1052dcf0();
  /* 1052db06 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1052db0c jmp 0x1052db18 */
  goto L_1052db18;
L_1052db0e:;
  /* 1052db0e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1052db18:;
  /* 1052db18 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1052db1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1052db21:;
  /* 1052db21 jmp 0x1052db2b */
  goto L_1052db2b;
L_1052db23:;
  /* 1052db23 call 0x1052dcf0 */
  push32(0x1052db28u); f_1052dcf0();
  /* 1052db28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1052db2b:;
  /* 1052db2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052db2f je 0x1052db48 */
  if (C.zf) goto L_1052db48;
  /* 1052db31 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1052db33 call 0x105276b0 */
  push32(0x1052db38u); f_105276b0();
  /* 1052db38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052db3b mov eax, dword ptr [0x1054f8ac] */
  EAX = (r32((uint32_t)(0x1054f8ac)));
  /* 1052db40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052db43 mov dword ptr [0x1054f8ac], eax */
  w32((uint32_t)(0x1054f8ac), (EAX));
L_1052db48:;
  /* 1052db48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1052db4b:;
  /* 1052db4b mov esp, ebp */
  ESP = (EBP);
  /* 1052db4d pop ebp */
  EBP = (pop32());
  /* 1052db4e ret  */
  ESPCHK(0x1052d760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db50 @ 0x1052db50 (403 bytes, 117 insns) */
void f_1052db50(void) {
  FTRACE(0x1052db50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052db50 push ebp */
  push32((uint32_t)(EBP));
  /* 1052db51 mov ebp, esp */
  EBP = (ESP);
  /* 1052db53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052db59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052db5c push eax */
  push32((uint32_t)(EAX));
  /* 1052db5d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1052db63 push ecx */
  push32((uint32_t)(ECX));
  /* 1052db64 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1052db6a push edx */
  push32((uint32_t)(EDX));
  /* 1052db6b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1052db71 push eax */
  push32((uint32_t)(EAX));
  /* 1052db72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052db75 push ecx */
  push32((uint32_t)(ECX));
  /* 1052db76 call 0x1052ddf0 */
  push32(0x1052db7bu); f_1052ddf0();
  /* 1052db7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052db7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052db80 jne 0x1052db89 */
  if (!C.zf) goto L_1052db89;
  /* 1052db82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052db84 jmp 0x1052dcdf */
  goto L_1052dcdf;
L_1052db89:;
  /* 1052db89 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1052db8e push 0x1054b168 */
  push32((uint32_t)(0x1054b168u));
  /* 1052db93 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052db95 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1052db9b push edx */
  push32((uint32_t)(EDX));
  /* 1052db9c call 0x10526a40 */
  push32(0x1052dba1u); f_10526a40();
  /* 1052dba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dba4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dba7 push eax */
  push32((uint32_t)(EAX));
  /* 1052dba8 call 0x10523c10 */
  push32(0x1052dbadu); f_10523c10();
  /* 1052dbad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dbb0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052dbb3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052dbb7 jne 0x1052dbc0 */
  if (!C.zf) goto L_1052dbc0;
  /* 1052dbb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052dbbb jmp 0x1052dcdf */
  goto L_1052dcdf;
L_1052dbc0:;
  /* 1052dbc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dbc3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dbc6 mov ecx, dword ptr [eax + 0x1054e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1054e4dc)));
  /* 1052dbcc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052dbcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dbd2 mov eax, dword ptr [edx*4 + 0x1054f728] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1054f728)));
  /* 1052dbd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052dbdc push 6 */
  push32((uint32_t)(0x6u));
  /* 1052dbde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dbe1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dbe4 add ecx, 0x1054f778 */
  { uint32_t _a=(ECX),_b=(0x1054f778u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dbea push ecx */
  push32((uint32_t)(ECX));
  /* 1052dbeb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1052dbee push edx */
  push32((uint32_t)(EDX));
  /* 1052dbef call 0x1052a4f0 */
  push32(0x1052dbf4u); f_1052a4f0();
  /* 1052dbf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dbf7 mov eax, dword ptr [0x1054f740] */
  EAX = (r32((uint32_t)(0x1054f740)));
  /* 1052dbfc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1052dbff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1052dc05 push ecx */
  push32((uint32_t)(ECX));
  /* 1052dc06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052dc09 push edx */
  push32((uint32_t)(EDX));
  /* 1052dc0a call 0x10526bc0 */
  push32(0x1052dc0fu); f_10526bc0();
  /* 1052dc0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dc12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dc15 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dc18 mov dword ptr [ecx + 0x1054e4dc], eax */
  w32((uint32_t)(ECX + 0x1054e4dc), (EAX));
  /* 1052dc1e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1052dc24 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1052dc2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dc2d mov dword ptr [eax*4 + 0x1054f728], edx */
  w32((uint32_t)(EAX*4 + 0x1054f728), (EDX));
  /* 1052dc34 push 6 */
  push32((uint32_t)(0x6u));
  /* 1052dc36 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1052dc3c push ecx */
  push32((uint32_t)(ECX));
  /* 1052dc3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dc40 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dc43 add edx, 0x1054f778 */
  { uint32_t _a=(EDX),_b=(0x1054f778u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dc49 push edx */
  push32((uint32_t)(EDX));
  /* 1052dc4a call 0x1052a4f0 */
  push32(0x1052dc4fu); f_1052a4f0();
  /* 1052dc4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dc52 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052dc56 jne 0x1052dc63 */
  if (!C.zf) goto L_1052dc63;
  /* 1052dc58 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052dc5e mov dword ptr [0x1054f740], eax */
  w32((uint32_t)(0x1054f740), (EAX));
L_1052dc63:;
  /* 1052dc63 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052dc67 jne 0x1052dc75 */
  if (!C.zf) goto L_1052dc75;
  /* 1052dc69 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1052dc6f mov dword ptr [0x1054f744], ecx */
  w32((uint32_t)(0x1054f744), (ECX));
L_1052dc75:;
  /* 1052dc75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dc78 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dc7b call dword ptr [edx + 0x1054e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1054e4e0))), 0x1052dc81u);
  /* 1052dc81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052dc83 je 0x1052dcbc */
  if (C.zf) goto L_1052dcbc;
  /* 1052dc85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dc88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dc8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052dc8e mov dword ptr [eax + 0x1054e4dc], ecx */
  w32((uint32_t)(EAX + 0x1054e4dc), (ECX));
  /* 1052dc94 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052dc96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052dc99 push edx */
  push32((uint32_t)(EDX));
  /* 1052dc9a call 0x105246a0 */
  push32(0x1052dc9fu); f_105246a0();
  /* 1052dc9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dca5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052dca8 mov dword ptr [eax*4 + 0x1054f728], ecx */
  w32((uint32_t)(EAX*4 + 0x1054f728), (ECX));
  /* 1052dcaf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052dcb2 mov dword ptr [0x1054f740], edx */
  w32((uint32_t)(0x1054f740), (EDX));
  /* 1052dcb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052dcba jmp 0x1052dcdf */
  goto L_1052dcdf;
L_1052dcbc:;
  /* 1052dcbc cmp dword ptr [ebp - 0xc], 0x1054e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1054e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052dcc3 je 0x1052dcd3 */
  if (C.zf) goto L_1052dcd3;
  /* 1052dcc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052dcc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052dcca push eax */
  push32((uint32_t)(EAX));
  /* 1052dccb call 0x105246a0 */
  push32(0x1052dcd0u); f_105246a0();
  /* 1052dcd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052dcd3:;
  /* 1052dcd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dcd6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dcd9 mov eax, dword ptr [ecx + 0x1054e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1054e4dc)));
L_1052dcdf:;
  /* 1052dcdf mov esp, ebp */
  ESP = (EBP);
  /* 1052dce1 pop ebp */
  EBP = (pop32());
  /* 1052dce2 ret  */
  ESPCHK(0x1052db50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcf0 @ 0x1052dcf0 (256 bytes, 72 insns) */
void f_1052dcf0(void) {
  FTRACE(0x1052dcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052dcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052dcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1052dcf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052dcf6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1052dcfd cmp dword ptr [0x1054e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052dd04 jne 0x1052dd24 */
  if (!C.zf) goto L_1052dd24;
  /* 1052dd06 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1052dd0b push 0x1054b168 */
  push32((uint32_t)(0x1054b168u));
  /* 1052dd10 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052dd12 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1052dd17 call 0x10523c10 */
  push32(0x1052dd1cu); f_10523c10();
  /* 1052dd1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dd1f mov dword ptr [0x1054e4dc], eax */
  w32((uint32_t)(0x1054e4dc), (EAX));
L_1052dd24:;
  /* 1052dd24 mov eax, dword ptr [0x1054e4dc] */
  EAX = (r32((uint32_t)(0x1054e4dc)));
  /* 1052dd29 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1052dd2c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1052dd33 jmp 0x1052dd3e */
  goto L_1052dd3e;
L_1052dd35:;
  /* 1052dd35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052dd38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dd3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1052dd3e:;
  /* 1052dd3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052dd41 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dd44 mov eax, dword ptr [edx + 0x1054e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1054e4dc)));
  /* 1052dd4a push eax */
  push32((uint32_t)(EAX));
  /* 1052dd4b push 0x1054b174 */
  push32((uint32_t)(0x1054b174u));
  /* 1052dd50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052dd53 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dd56 mov edx, dword ptr [ecx + 0x1054e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1054e4d8)));
  /* 1052dd5c push edx */
  push32((uint32_t)(EDX));
  /* 1052dd5d push 3 */
  push32((uint32_t)(0x3u));
  /* 1052dd5f mov eax, dword ptr [0x1054e4dc] */
  EAX = (r32((uint32_t)(0x1054e4dc)));
  /* 1052dd64 push eax */
  push32((uint32_t)(EAX));
  /* 1052dd65 call 0x1052df90 */
  push32(0x1052dd6au); f_1052df90();
  /* 1052dd6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dd6d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052dd71 jge 0x1052ddb9 */
  if ((C.sf==C.of)) goto L_1052ddb9;
  /* 1052dd73 push 0x1054b160 */
  push32((uint32_t)(0x1054b160u));
  /* 1052dd78 mov ecx, dword ptr [0x1054e4dc] */
  ECX = (r32((uint32_t)(0x1054e4dc)));
  /* 1052dd7e push ecx */
  push32((uint32_t)(ECX));
  /* 1052dd7f call 0x10526bd0 */
  push32(0x1052dd84u); f_10526bd0();
  /* 1052dd84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dd87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052dd8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dd8d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dd90 mov eax, dword ptr [edx + 0x1054e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1054e4dc)));
  /* 1052dd96 push eax */
  push32((uint32_t)(EAX));
  /* 1052dd97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052dd9a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052dd9d mov edx, dword ptr [ecx + 0x1054e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1054e4dc)));
  /* 1052dda3 push edx */
  push32((uint32_t)(EDX));
  /* 1052dda4 call 0x1052f8a0 */
  push32(0x1052dda9u); f_1052f8a0();
  /* 1052dda9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ddac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052ddae je 0x1052ddb7 */
  if (C.zf) goto L_1052ddb7;
  /* 1052ddb0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1052ddb7:;
  /* 1052ddb7 jmp 0x1052dde7 */
  goto L_1052dde7;
L_1052ddb9:;
  /* 1052ddb9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ddbd jne 0x1052ddc6 */
  if (!C.zf) goto L_1052ddc6;
  /* 1052ddbf mov eax, dword ptr [0x1054e4dc] */
  EAX = (r32((uint32_t)(0x1054e4dc)));
  /* 1052ddc4 jmp 0x1052ddec */
  goto L_1052ddec;
L_1052ddc6:;
  /* 1052ddc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ddc8 mov eax, dword ptr [0x1054e4dc] */
  EAX = (r32((uint32_t)(0x1054e4dc)));
  /* 1052ddcd push eax */
  push32((uint32_t)(EAX));
  /* 1052ddce call 0x105246a0 */
  push32(0x1052ddd3u); f_105246a0();
  /* 1052ddd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ddd6 mov dword ptr [0x1054e4dc], 0 */
  w32((uint32_t)(0x1054e4dc), (0x0u));
  /* 1052dde0 mov eax, dword ptr [0x1054e4f4] */
  EAX = (r32((uint32_t)(0x1054e4f4)));
  /* 1052dde5 jmp 0x1052ddec */
  goto L_1052ddec;
L_1052dde7:;
  /* 1052dde7 jmp 0x1052dd35 */
  goto L_1052dd35;
L_1052ddec:;
  /* 1052ddec mov esp, ebp */
  ESP = (EBP);
  /* 1052ddee pop ebp */
  EBP = (pop32());
  /* 1052ddef ret  */
  ESPCHK(0x1052dcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x1052ddf0 (388 bytes, 115 insns) */
void f_1052ddf0(void) {
  FTRACE(0x1052ddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ddf1 mov ebp, esp */
  EBP = (ESP);
  /* 1052ddf3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052ddf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ddfd jne 0x1052de06 */
  if (!C.zf) goto L_1052de06;
  /* 1052ddff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052de01 jmp 0x1052df70 */
  goto L_1052df70;
L_1052de06:;
  /* 1052de06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052de09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052de0c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052de0f jne 0x1052de60 */
  if (!C.zf) goto L_1052de60;
  /* 1052de11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052de14 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1052de18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052de1a jne 0x1052de60 */
  if (!C.zf) goto L_1052de60;
  /* 1052de1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052de1f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1052de22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052de25 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1052de29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052de2d je 0x1052de49 */
  if (C.zf) goto L_1052de49;
  /* 1052de2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052de32 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1052de37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052de3a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1052de40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052de43 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1052de49:;
  /* 1052de49 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052de4d je 0x1052de58 */
  if (C.zf) goto L_1052de58;
  /* 1052de4f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052de52 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1052de58:;
  /* 1052de58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052de5b jmp 0x1052df70 */
  goto L_1052df70;
L_1052de60:;
  /* 1052de60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052de63 push ecx */
  push32((uint32_t)(ECX));
  /* 1052de64 push 0x1054e450 */
  push32((uint32_t)(0x1054e450u));
  /* 1052de69 call 0x1052f8a0 */
  push32(0x1052de6eu); f_1052f8a0();
  /* 1052de6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052de71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052de73 je 0x1052df28 */
  if (C.zf) goto L_1052df28;
  /* 1052de79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052de7c push edx */
  push32((uint32_t)(EDX));
  /* 1052de7d push 0x1054e3cc */
  push32((uint32_t)(0x1054e3ccu));
  /* 1052de82 call 0x1052f8a0 */
  push32(0x1052de87u); f_1052f8a0();
  /* 1052de87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052de8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052de8c je 0x1052df28 */
  if (C.zf) goto L_1052df28;
  /* 1052de92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052de95 push eax */
  push32((uint32_t)(EAX));
  /* 1052de96 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1052de9c push ecx */
  push32((uint32_t)(ECX));
  /* 1052de9d call 0x1052dfe0 */
  push32(0x1052dea2u); f_1052dfe0();
  /* 1052dea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052dea7 je 0x1052deb0 */
  if (C.zf) goto L_1052deb0;
  /* 1052dea9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052deab jmp 0x1052df70 */
  goto L_1052df70;
L_1052deb0:;
  /* 1052deb0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1052deb6 push edx */
  push32((uint32_t)(EDX));
  /* 1052deb7 push 0x1054f750 */
  push32((uint32_t)(0x1054f750u));
  /* 1052debc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1052dec2 push eax */
  push32((uint32_t)(EAX));
  /* 1052dec3 call 0x1052f9f0 */
  push32(0x1052dec8u); f_1052f9f0();
  /* 1052dec8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052decb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052decd jne 0x1052ded6 */
  if (!C.zf) goto L_1052ded6;
  /* 1052decf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052ded1 jmp 0x1052df70 */
  goto L_1052df70;
L_1052ded6:;
  /* 1052ded6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052ded8 mov cx, word ptr [0x1054f754] */
  CX = (r16((uint32_t)(0x1054f754)));
  /* 1052dedf mov dword ptr [0x1054f758], ecx */
  w32((uint32_t)(0x1054f758), (ECX));
  /* 1052dee5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1052deeb push edx */
  push32((uint32_t)(EDX));
  /* 1052deec push 0x1054e450 */
  push32((uint32_t)(0x1054e450u));
  /* 1052def1 call 0x1052e140 */
  push32(0x1052def6u); f_1052e140();
  /* 1052def6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052def9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052defc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052deff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052df01 je 0x1052df16 */
  if (C.zf) goto L_1052df16;
  /* 1052df03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052df06 push edx */
  push32((uint32_t)(EDX));
  /* 1052df07 push 0x1054e3cc */
  push32((uint32_t)(0x1054e3ccu));
  /* 1052df0c call 0x10526bc0 */
  push32(0x1052df11u); f_10526bc0();
  /* 1052df11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052df14 jmp 0x1052df28 */
  goto L_1052df28;
L_1052df16:;
  /* 1052df16 push 0x1054e450 */
  push32((uint32_t)(0x1054e450u));
  /* 1052df1b push 0x1054e3cc */
  push32((uint32_t)(0x1054e3ccu));
  /* 1052df20 call 0x10526bc0 */
  push32(0x1052df25u); f_10526bc0();
  /* 1052df25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052df28:;
  /* 1052df28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052df2c je 0x1052df41 */
  if (C.zf) goto L_1052df41;
  /* 1052df2e push 6 */
  push32((uint32_t)(0x6u));
  /* 1052df30 push 0x1054f750 */
  push32((uint32_t)(0x1054f750u));
  /* 1052df35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052df38 push eax */
  push32((uint32_t)(EAX));
  /* 1052df39 call 0x1052a4f0 */
  push32(0x1052df3eu); f_1052a4f0();
  /* 1052df3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052df41:;
  /* 1052df41 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052df45 je 0x1052df5a */
  if (C.zf) goto L_1052df5a;
  /* 1052df47 push 4 */
  push32((uint32_t)(0x4u));
  /* 1052df49 push 0x1054f758 */
  push32((uint32_t)(0x1054f758u));
  /* 1052df4e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1052df51 push ecx */
  push32((uint32_t)(ECX));
  /* 1052df52 call 0x1052a4f0 */
  push32(0x1052df57u); f_1052a4f0();
  /* 1052df57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052df5a:;
  /* 1052df5a push 0x1054e450 */
  push32((uint32_t)(0x1054e450u));
  /* 1052df5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052df62 push edx */
  push32((uint32_t)(EDX));
  /* 1052df63 call 0x10526bc0 */
  push32(0x1052df68u); f_10526bc0();
  /* 1052df68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052df6b mov eax, 0x1054e450 */
  EAX = (0x1054e450u);
L_1052df70:;
  /* 1052df70 mov esp, ebp */
  ESP = (EBP);
  /* 1052df72 pop ebp */
  EBP = (pop32());
  /* 1052df73 ret  */
  ESPCHK(0x1052ddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df80 @ 0x1052df80 (7 bytes, 5 insns) */
void f_1052df80(void) {
  FTRACE(0x1052df80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052df80 push ebp */
  push32((uint32_t)(EBP));
  /* 1052df81 mov ebp, esp */
  EBP = (ESP);
  /* 1052df83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052df85 pop ebp */
  EBP = (pop32());
  /* 1052df86 ret  */
  ESPCHK(0x1052df80u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1052df90 (79 bytes, 28 insns) */
void f_1052df90(void) {
  FTRACE(0x1052df90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052df90 push ebp */
  push32((uint32_t)(EBP));
  /* 1052df91 mov ebp, esp */
  EBP = (ESP);
  /* 1052df93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052df96 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1052df99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052df9c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1052dfa3 jmp 0x1052dfae */
  goto L_1052dfae;
L_1052dfa5:;
  /* 1052dfa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052dfa8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dfab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1052dfae:;
  /* 1052dfae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052dfb1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052dfb4 jge 0x1052dfd4 */
  if ((C.sf==C.of)) goto L_1052dfd4;
  /* 1052dfb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052dfb9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dfbc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052dfbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052dfc2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1052dfc5 push edx */
  push32((uint32_t)(EDX));
  /* 1052dfc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dfc9 push eax */
  push32((uint32_t)(EAX));
  /* 1052dfca call 0x10526bd0 */
  push32(0x1052dfcfu); f_10526bd0();
  /* 1052dfcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dfd2 jmp 0x1052dfa5 */
  goto L_1052dfa5;
L_1052dfd4:;
  /* 1052dfd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052dfdb mov esp, ebp */
  ESP = (EBP);
  /* 1052dfdd pop ebp */
  EBP = (pop32());
  /* 1052dfde ret  */
  ESPCHK(0x1052df90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfe0 @ 0x1052dfe0 (349 bytes, 122 insns) */
void f_1052dfe0(void) {
  FTRACE(0x1052dfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052dfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052dfe1 mov ebp, esp */
  EBP = (ESP);
  /* 1052dfe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052dfe6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1052dfeb push 0 */
  push32((uint32_t)(0x0u));
  /* 1052dfed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052dff0 push eax */
  push32((uint32_t)(EAX));
  /* 1052dff1 call 0x10527980 */
  push32(0x1052dff6u); f_10527980();
  /* 1052dff6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052dff9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052dffc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052dfff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052e001 jne 0x1052e00a */
  if (!C.zf) goto L_1052e00a;
  /* 1052e003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052e005 jmp 0x1052e139 */
  goto L_1052e139;
L_1052e00a:;
  /* 1052e00a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e00d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052e010 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e013 jne 0x1052e040 */
  if (!C.zf) goto L_1052e040;
  /* 1052e015 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e018 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1052e01c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e01e je 0x1052e040 */
  if (C.zf) goto L_1052e040;
  /* 1052e020 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e023 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e026 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e027 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e02a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e030 push edx */
  push32((uint32_t)(EDX));
  /* 1052e031 call 0x10526bc0 */
  push32(0x1052e036u); f_10526bc0();
  /* 1052e036 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e039 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052e03b jmp 0x1052e139 */
  goto L_1052e139;
L_1052e040:;
  /* 1052e040 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1052e047 jmp 0x1052e052 */
  goto L_1052e052;
L_1052e049:;
  /* 1052e049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e04c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e04f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052e052:;
  /* 1052e052 push 0x1054b178 */
  push32((uint32_t)(0x1054b178u));
  /* 1052e057 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e05a push ecx */
  push32((uint32_t)(ECX));
  /* 1052e05b call 0x1052f930 */
  push32(0x1052e060u); f_1052f930();
  /* 1052e060 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e063 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1052e066 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e06a jne 0x1052e074 */
  if (!C.zf) goto L_1052e074;
  /* 1052e06c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052e06f jmp 0x1052e139 */
  goto L_1052e139;
L_1052e074:;
  /* 1052e074 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e077 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e07a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1052e07c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1052e07f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e083 jne 0x1052e0aa */
  if (!C.zf) goto L_1052e0aa;
  /* 1052e085 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e089 jge 0x1052e0aa */
  if ((C.sf==C.of)) goto L_1052e0aa;
  /* 1052e08b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1052e08f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e092 je 0x1052e0aa */
  if (C.zf) goto L_1052e0aa;
  /* 1052e094 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e097 push edx */
  push32((uint32_t)(EDX));
  /* 1052e098 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e09b push eax */
  push32((uint32_t)(EAX));
  /* 1052e09c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e09f push ecx */
  push32((uint32_t)(ECX));
  /* 1052e0a0 call 0x10527430 */
  push32(0x1052e0a5u); f_10527430();
  /* 1052e0a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e0a8 jmp 0x1052e110 */
  goto L_1052e110;
L_1052e0aa:;
  /* 1052e0aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e0ae jne 0x1052e0d8 */
  if (!C.zf) goto L_1052e0d8;
  /* 1052e0b0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e0b4 jge 0x1052e0d8 */
  if ((C.sf==C.of)) goto L_1052e0d8;
  /* 1052e0b6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1052e0ba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e0bd je 0x1052e0d8 */
  if (C.zf) goto L_1052e0d8;
  /* 1052e0bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e0c2 push eax */
  push32((uint32_t)(EAX));
  /* 1052e0c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e0c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e0c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e0ca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e0cd push edx */
  push32((uint32_t)(EDX));
  /* 1052e0ce call 0x10527430 */
  push32(0x1052e0d3u); f_10527430();
  /* 1052e0d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e0d6 jmp 0x1052e110 */
  goto L_1052e110;
L_1052e0d8:;
  /* 1052e0d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e0dc jne 0x1052e10b */
  if (!C.zf) goto L_1052e10b;
  /* 1052e0de movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1052e0e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e0e4 je 0x1052e0ef */
  if (C.zf) goto L_1052e0ef;
  /* 1052e0e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1052e0ea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e0ed jne 0x1052e10b */
  if (!C.zf) goto L_1052e10b;
L_1052e0ef:;
  /* 1052e0ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e0f2 push edx */
  push32((uint32_t)(EDX));
  /* 1052e0f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e0f6 push eax */
  push32((uint32_t)(EAX));
  /* 1052e0f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e0fa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e100 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e101 call 0x10527430 */
  push32(0x1052e106u); f_10527430();
  /* 1052e106 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e109 jmp 0x1052e110 */
  goto L_1052e110;
L_1052e10b:;
  /* 1052e10b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052e10e jmp 0x1052e139 */
  goto L_1052e139;
L_1052e110:;
  /* 1052e110 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1052e114 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e117 jne 0x1052e11b */
  if (!C.zf) goto L_1052e11b;
  /* 1052e119 jmp 0x1052e137 */
  goto L_1052e137;
L_1052e11b:;
  /* 1052e11b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1052e11f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e121 jne 0x1052e125 */
  if (!C.zf) goto L_1052e125;
  /* 1052e123 jmp 0x1052e137 */
  goto L_1052e137;
L_1052e125:;
  /* 1052e125 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e128 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e12b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1052e12f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1052e132 jmp 0x1052e049 */
  goto L_1052e049;
L_1052e137:;
  /* 1052e137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052e139:;
  /* 1052e139 mov esp, ebp */
  ESP = (EBP);
  /* 1052e13b pop ebp */
  EBP = (pop32());
  /* 1052e13c ret  */
  ESPCHK(0x1052dfe0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1052e140 (101 bytes, 36 insns) */
void f_1052e140(void) {
  FTRACE(0x1052e140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052e140 push ebp */
  push32((uint32_t)(EBP));
  /* 1052e141 mov ebp, esp */
  EBP = (ESP);
  /* 1052e143 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e146 push eax */
  push32((uint32_t)(EAX));
  /* 1052e147 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e14a push ecx */
  push32((uint32_t)(ECX));
  /* 1052e14b call 0x10526bc0 */
  push32(0x1052e150u); f_10526bc0();
  /* 1052e150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e153 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e156 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1052e15a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e15c je 0x1052e178 */
  if (C.zf) goto L_1052e178;
  /* 1052e15e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e161 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e164 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e165 push 0x1054b180 */
  push32((uint32_t)(0x1054b180u));
  /* 1052e16a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e16c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e16f push edx */
  push32((uint32_t)(EDX));
  /* 1052e170 call 0x1052df90 */
  push32(0x1052e175u); f_1052df90();
  /* 1052e175 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052e178:;
  /* 1052e178 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e17b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1052e182 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052e184 je 0x1052e1a3 */
  if (C.zf) goto L_1052e1a3;
  /* 1052e186 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052e189 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e18f push edx */
  push32((uint32_t)(EDX));
  /* 1052e190 push 0x1054b17c */
  push32((uint32_t)(0x1054b17cu));
  /* 1052e195 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e197 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e19a push eax */
  push32((uint32_t)(EAX));
  /* 1052e19b call 0x1052df90 */
  push32(0x1052e1a0u); f_1052df90();
  /* 1052e1a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052e1a3:;
  /* 1052e1a3 pop ebp */
  EBP = (pop32());
  /* 1052e1a4 ret  */
  ESPCHK(0x1052e140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1b0 @ 0x1052e1b0 (130 bytes, 50 insns) */
void f_1052e1b0(void) {
  FTRACE(0x1052e1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052e1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052e1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1052e1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e1b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1052e1b5 push esi */
  push32((uint32_t)(ESI));
  /* 1052e1b6 push edi */
  push32((uint32_t)(EDI));
  /* 1052e1b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1052e1be:;
  /* 1052e1be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e1c2 jne 0x1052e1e2 */
  if (!C.zf) goto L_1052e1e2;
  /* 1052e1c4 push 0x1054b190 */
  push32((uint32_t)(0x1054b190u));
  /* 1052e1c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052e1cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1052e1cd push 0x1054b184 */
  push32((uint32_t)(0x1054b184u));
  /* 1052e1d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e1d4 call 0x10522cd0 */
  push32(0x1052e1d9u); f_10522cd0();
  /* 1052e1d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e1dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e1df jne 0x1052e1e2 */
  if (!C.zf) goto L_1052e1e2;
  /* 1052e1e1 int3  */
  x86_unimpl("int3 @ 0x1052e1e1");
L_1052e1e2:;
  /* 1052e1e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052e1e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e1e6 jne 0x1052e1be */
  if (!C.zf) goto L_1052e1be;
  /* 1052e1e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e1eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052e1ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1052e1f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052e1f3 je 0x1052e201 */
  if (C.zf) goto L_1052e201;
  /* 1052e1f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e1f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1052e1ff jmp 0x1052e228 */
  goto L_1052e228;
L_1052e201:;
  /* 1052e201 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e204 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e205 call 0x1052ca20 */
  push32(0x1052e20au); f_1052ca20();
  /* 1052e20a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e20d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e210 push edx */
  push32((uint32_t)(EDX));
  /* 1052e211 call 0x1052e240 */
  push32(0x1052e216u); f_1052e240();
  /* 1052e216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e219 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052e21c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e21f push eax */
  push32((uint32_t)(EAX));
  /* 1052e220 call 0x1052ca90 */
  push32(0x1052e225u); f_1052ca90();
  /* 1052e225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052e228:;
  /* 1052e228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e22b pop edi */
  EDI = (pop32());
  /* 1052e22c pop esi */
  ESI = (pop32());
  /* 1052e22d pop ebx */
  EBX = (pop32());
  /* 1052e22e mov esp, ebp */
  ESP = (EBP);
  /* 1052e230 pop ebp */
  EBP = (pop32());
  /* 1052e231 ret  */
  ESPCHK(0x1052e1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e240 @ 0x1052e240 (190 bytes, 67 insns) */
void f_1052e240(void) {
  FTRACE(0x1052e240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052e240 push ebp */
  push32((uint32_t)(EBP));
  /* 1052e241 mov ebp, esp */
  EBP = (ESP);
  /* 1052e243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052e246 push ebx */
  push32((uint32_t)(EBX));
  /* 1052e247 push esi */
  push32((uint32_t)(ESI));
  /* 1052e248 push edi */
  push32((uint32_t)(EDI));
  /* 1052e249 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1052e250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e253 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1052e256:;
  /* 1052e256 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e25a jne 0x1052e27a */
  if (!C.zf) goto L_1052e27a;
  /* 1052e25c push 0x1054b034 */
  push32((uint32_t)(0x1054b034u));
  /* 1052e261 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052e263 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1052e265 push 0x1054b184 */
  push32((uint32_t)(0x1054b184u));
  /* 1052e26a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e26c call 0x10522cd0 */
  push32(0x1052e271u); f_10522cd0();
  /* 1052e271 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e274 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e277 jne 0x1052e27a */
  if (!C.zf) goto L_1052e27a;
  /* 1052e279 int3  */
  x86_unimpl("int3 @ 0x1052e279");
L_1052e27a:;
  /* 1052e27a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e27c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052e27e jne 0x1052e256 */
  if (!C.zf) goto L_1052e256;
  /* 1052e280 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e283 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1052e286 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1052e28b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e28d je 0x1052e2ea */
  if (C.zf) goto L_1052e2ea;
  /* 1052e28f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e292 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e293 call 0x1052d540 */
  push32(0x1052e298u); f_1052d540();
  /* 1052e298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e29b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052e29e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e2a1 push edx */
  push32((uint32_t)(EDX));
  /* 1052e2a2 call 0x105308c0 */
  push32(0x1052e2a7u); f_105308c0();
  /* 1052e2a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e2aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e2ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1052e2b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e2b1 call 0x10530790 */
  push32(0x1052e2b6u); f_10530790();
  /* 1052e2b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e2b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e2bb jge 0x1052e2c6 */
  if ((C.sf==C.of)) goto L_1052e2c6;
  /* 1052e2bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1052e2c4 jmp 0x1052e2ea */
  goto L_1052e2ea;
L_1052e2c6:;
  /* 1052e2c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e2c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e2cd je 0x1052e2ea */
  if (C.zf) goto L_1052e2ea;
  /* 1052e2cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e2d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e2d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1052e2d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e2d8 call 0x105246a0 */
  push32(0x1052e2ddu); f_105246a0();
  /* 1052e2dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e2e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e2e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1052e2ea:;
  /* 1052e2ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e2ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1052e2f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e2f7 pop edi */
  EDI = (pop32());
  /* 1052e2f8 pop esi */
  ESI = (pop32());
  /* 1052e2f9 pop ebx */
  EBX = (pop32());
  /* 1052e2fa mov esp, ebp */
  ESP = (EBP);
  /* 1052e2fc pop ebp */
  EBP = (pop32());
  /* 1052e2fd ret  */
  ESPCHK(0x1052e240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e300 @ 0x1052e300 (210 bytes, 63 insns) */
void f_1052e300(void) {
  FTRACE(0x1052e300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052e300 push ebp */
  push32((uint32_t)(EBP));
  /* 1052e301 mov ebp, esp */
  EBP = (ESP);
  /* 1052e303 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e307 cmp eax, dword ptr [0x1055103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1055103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e30d jae 0x1052e331 */
  if (!C.cf) goto L_1052e331;
  /* 1052e30f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e312 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1052e315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e318 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1052e31b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052e31e mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 1052e325 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1052e32a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1052e32d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052e32f jne 0x1052e344 */
  if (!C.zf) goto L_1052e344;
L_1052e331:;
  /* 1052e331 call 0x1052bae0 */
  push32(0x1052e336u); f_1052bae0();
  /* 1052e336 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052e33c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052e33f jmp 0x1052e3ce */
  goto L_1052e3ce;
L_1052e344:;
  /* 1052e344 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e347 push edx */
  push32((uint32_t)(EDX));
  /* 1052e348 call 0x1052d300 */
  push32(0x1052e34du); f_1052d300();
  /* 1052e34d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e350 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e353 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1052e356 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e359 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1052e35c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1052e35f mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 1052e366 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1052e36b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1052e36e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e370 je 0x1052e3ad */
  if (C.zf) goto L_1052e3ad;
  /* 1052e372 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e375 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e376 call 0x1052d180 */
  push32(0x1052e37bu); f_1052d180();
  /* 1052e37b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e37e push eax */
  push32((uint32_t)(EAX));
  /* 1052e37f call dword ptr [0x105522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522d8))), 0x1052e385u);
  /* 1052e385 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e387 jne 0x1052e394 */
  if (!C.zf) goto L_1052e394;
  /* 1052e389 call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x1052e38fu);
  /* 1052e38f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052e392 jmp 0x1052e39b */
  goto L_1052e39b;
L_1052e394:;
  /* 1052e394 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1052e39b:;
  /* 1052e39b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e39f jne 0x1052e3a3 */
  if (!C.zf) goto L_1052e3a3;
  /* 1052e3a1 jmp 0x1052e3bf */
  goto L_1052e3bf;
L_1052e3a3:;
  /* 1052e3a3 call 0x1052baf0 */
  push32(0x1052e3a8u); f_1052baf0();
  /* 1052e3a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e3ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1052e3ad:;
  /* 1052e3ad call 0x1052bae0 */
  push32(0x1052e3b2u); f_1052bae0();
  /* 1052e3b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1052e3b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1052e3bf:;
  /* 1052e3bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e3c2 push eax */
  push32((uint32_t)(EAX));
  /* 1052e3c3 call 0x1052d390 */
  push32(0x1052e3c8u); f_1052d390();
  /* 1052e3c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e3cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1052e3ce:;
  /* 1052e3ce mov esp, ebp */
  ESP = (EBP);
  /* 1052e3d0 pop ebp */
  EBP = (pop32());
  /* 1052e3d1 ret  */
  ESPCHK(0x1052e300u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1052e3e0 (219 bytes, 64 insns) */
void f_1052e3e0(void) {
  FTRACE(0x1052e3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052e3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052e3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1052e3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e3e4 cmp dword ptr [0x1054f73c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f73c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e3eb je 0x1052e481 */
  if (C.zf) goto L_1052e481;
  /* 1052e3f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1052e3f3 push 0x1054b1a0 */
  push32((uint32_t)(0x1054b1a0u));
  /* 1052e3f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e3fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 1052e3ff push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e401 call 0x10524020 */
  push32(0x1052e406u); f_10524020();
  /* 1052e406 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e409 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052e40c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e410 jne 0x1052e41c */
  if (!C.zf) goto L_1052e41c;
  /* 1052e412 mov eax, 1 */
  EAX = (0x1u);
  /* 1052e417 jmp 0x1052e4b7 */
  goto L_1052e4b7;
L_1052e41c:;
  /* 1052e41c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e41f push eax */
  push32((uint32_t)(EAX));
  /* 1052e420 call 0x1052e4c0 */
  push32(0x1052e425u); f_1052e4c0();
  /* 1052e425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052e42a je 0x1052e44d */
  if (C.zf) goto L_1052e44d;
  /* 1052e42c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e42f push ecx */
  push32((uint32_t)(ECX));
  /* 1052e430 call 0x1052ea50 */
  push32(0x1052e435u); f_1052ea50();
  /* 1052e435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e438 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e43a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e43d push edx */
  push32((uint32_t)(EDX));
  /* 1052e43e call 0x105246a0 */
  push32(0x1052e443u); f_105246a0();
  /* 1052e443 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e446 mov eax, 1 */
  EAX = (0x1u);
  /* 1052e44b jmp 0x1052e4b7 */
  goto L_1052e4b7;
L_1052e44d:;
  /* 1052e44d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e450 mov dword ptr [0x1054ec98], eax */
  w32((uint32_t)(0x1054ec98), (EAX));
  /* 1052e455 mov ecx, dword ptr [0x1054f75c] */
  ECX = (r32((uint32_t)(0x1054f75c)));
  /* 1052e45b push ecx */
  push32((uint32_t)(ECX));
  /* 1052e45c call 0x1052ea50 */
  push32(0x1052e461u); f_1052ea50();
  /* 1052e461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e464 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e466 mov edx, dword ptr [0x1054f75c] */
  EDX = (r32((uint32_t)(0x1054f75c)));
  /* 1052e46c push edx */
  push32((uint32_t)(EDX));
  /* 1052e46d call 0x105246a0 */
  push32(0x1052e472u); f_105246a0();
  /* 1052e472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e478 mov dword ptr [0x1054f75c], eax */
  w32((uint32_t)(0x1054f75c), (EAX));
  /* 1052e47d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052e47f jmp 0x1052e4b7 */
  goto L_1052e4b7;
L_1052e481:;
  /* 1052e481 mov dword ptr [0x1054ec98], 0x1054eca0 */
  w32((uint32_t)(0x1054ec98), (0x1054eca0u));
  /* 1052e48b mov ecx, dword ptr [0x1054f75c] */
  ECX = (r32((uint32_t)(0x1054f75c)));
  /* 1052e491 push ecx */
  push32((uint32_t)(ECX));
  /* 1052e492 call 0x1052ea50 */
  push32(0x1052e497u); f_1052ea50();
  /* 1052e497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e49a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052e49c mov edx, dword ptr [0x1054f75c] */
  EDX = (r32((uint32_t)(0x1054f75c)));
  /* 1052e4a2 push edx */
  push32((uint32_t)(EDX));
  /* 1052e4a3 call 0x105246a0 */
  push32(0x1052e4a8u); f_105246a0();
  /* 1052e4a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e4ab mov dword ptr [0x1054f75c], 0 */
  w32((uint32_t)(0x1054f75c), (0x0u));
  /* 1052e4b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052e4b7:;
  /* 1052e4b7 mov esp, ebp */
  ESP = (EBP);
  /* 1052e4b9 pop ebp */
  EBP = (pop32());
  /* 1052e4ba ret  */
  ESPCHK(0x1052e3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4c0 @ 0x1052e4c0 (1423 bytes, 533 insns) */
void f_1052e4c0(void) {
  FTRACE(0x1052e4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052e4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052e4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1052e4c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052e4c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1052e4cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052e4cf mov ax, word ptr [0x1054f796] */
  AX = (r16((uint32_t)(0x1054f796)));
  /* 1052e4d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052e4d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e4da mov cx, word ptr [0x1054f798] */
  CX = (r16((uint32_t)(0x1054f798)));
  /* 1052e4e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052e4e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052e4e8 jne 0x1052e4f2 */
  if (!C.zf) goto L_1052e4f2;
  /* 1052e4ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052e4ed jmp 0x1052ea4b */
  goto L_1052ea4b;
L_1052e4f2:;
  /* 1052e4f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e4f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e4f8 push edx */
  push32((uint32_t)(EDX));
  /* 1052e4f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1052e4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e4fe push eax */
  push32((uint32_t)(EAX));
  /* 1052e4ff push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e501 call 0x10531dd0 */
  push32(0x1052e506u); f_10531dd0();
  /* 1052e506 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e509 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e50c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e50e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e511 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e514 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e517 push edx */
  push32((uint32_t)(EDX));
  /* 1052e518 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1052e51a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e51d push eax */
  push32((uint32_t)(EAX));
  /* 1052e51e push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e520 call 0x10531dd0 */
  push32(0x1052e525u); f_10531dd0();
  /* 1052e525 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e528 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e52b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e52d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e530 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e533 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e536 push edx */
  push32((uint32_t)(EDX));
  /* 1052e537 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1052e539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e53c push eax */
  push32((uint32_t)(EAX));
  /* 1052e53d push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e53f call 0x10531dd0 */
  push32(0x1052e544u); f_10531dd0();
  /* 1052e544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e547 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e54a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e54c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e54f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e552 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e555 push edx */
  push32((uint32_t)(EDX));
  /* 1052e556 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1052e558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e55b push eax */
  push32((uint32_t)(EAX));
  /* 1052e55c push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e55e call 0x10531dd0 */
  push32(0x1052e563u); f_10531dd0();
  /* 1052e563 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e566 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e569 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e56b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e56e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e571 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e574 push edx */
  push32((uint32_t)(EDX));
  /* 1052e575 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1052e577 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e57a push eax */
  push32((uint32_t)(EAX));
  /* 1052e57b push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e57d call 0x10531dd0 */
  push32(0x1052e582u); f_10531dd0();
  /* 1052e582 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e585 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e588 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e58a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e58d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e590 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e593 push edx */
  push32((uint32_t)(EDX));
  /* 1052e594 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1052e596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e599 push eax */
  push32((uint32_t)(EAX));
  /* 1052e59a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e59c call 0x10531dd0 */
  push32(0x1052e5a1u); f_10531dd0();
  /* 1052e5a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e5a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e5a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e5a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e5ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e5af push edx */
  push32((uint32_t)(EDX));
  /* 1052e5b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1052e5b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e5b5 push eax */
  push32((uint32_t)(EAX));
  /* 1052e5b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e5b8 call 0x10531dd0 */
  push32(0x1052e5bdu); f_10531dd0();
  /* 1052e5bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e5c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e5c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e5c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e5c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e5cb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e5ce push edx */
  push32((uint32_t)(EDX));
  /* 1052e5cf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1052e5d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e5d4 push eax */
  push32((uint32_t)(EAX));
  /* 1052e5d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e5d7 call 0x10531dd0 */
  push32(0x1052e5dcu); f_10531dd0();
  /* 1052e5dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e5df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e5e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e5e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e5e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e5ea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e5ed push edx */
  push32((uint32_t)(EDX));
  /* 1052e5ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1052e5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e5f3 push eax */
  push32((uint32_t)(EAX));
  /* 1052e5f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e5f6 call 0x10531dd0 */
  push32(0x1052e5fbu); f_10531dd0();
  /* 1052e5fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e5fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e601 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e603 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e606 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e609 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e60c push edx */
  push32((uint32_t)(EDX));
  /* 1052e60d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1052e60f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e612 push eax */
  push32((uint32_t)(EAX));
  /* 1052e613 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e615 call 0x10531dd0 */
  push32(0x1052e61au); f_10531dd0();
  /* 1052e61a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e61d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e620 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e622 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e625 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e628 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e62b push edx */
  push32((uint32_t)(EDX));
  /* 1052e62c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1052e62e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e631 push eax */
  push32((uint32_t)(EAX));
  /* 1052e632 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e634 call 0x10531dd0 */
  push32(0x1052e639u); f_10531dd0();
  /* 1052e639 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e63c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e63f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e641 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e647 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e64a push edx */
  push32((uint32_t)(EDX));
  /* 1052e64b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1052e64d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e650 push eax */
  push32((uint32_t)(EAX));
  /* 1052e651 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e653 call 0x10531dd0 */
  push32(0x1052e658u); f_10531dd0();
  /* 1052e658 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e65b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e65e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e660 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e663 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e666 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e669 push edx */
  push32((uint32_t)(EDX));
  /* 1052e66a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1052e66c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e66f push eax */
  push32((uint32_t)(EAX));
  /* 1052e670 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e672 call 0x10531dd0 */
  push32(0x1052e677u); f_10531dd0();
  /* 1052e677 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e67a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e67d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e67f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e685 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e688 push edx */
  push32((uint32_t)(EDX));
  /* 1052e689 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1052e68b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e68e push eax */
  push32((uint32_t)(EAX));
  /* 1052e68f push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e691 call 0x10531dd0 */
  push32(0x1052e696u); f_10531dd0();
  /* 1052e696 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e699 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e69c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e69e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e6a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e6a4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e6a7 push edx */
  push32((uint32_t)(EDX));
  /* 1052e6a8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1052e6aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e6ad push eax */
  push32((uint32_t)(EAX));
  /* 1052e6ae push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e6b0 call 0x10531dd0 */
  push32(0x1052e6b5u); f_10531dd0();
  /* 1052e6b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e6b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e6bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e6bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e6c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e6c3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e6c6 push edx */
  push32((uint32_t)(EDX));
  /* 1052e6c7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1052e6c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e6cc push eax */
  push32((uint32_t)(EAX));
  /* 1052e6cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e6cf call 0x10531dd0 */
  push32(0x1052e6d4u); f_10531dd0();
  /* 1052e6d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e6d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e6da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e6dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e6df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e6e2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e6e5 push edx */
  push32((uint32_t)(EDX));
  /* 1052e6e6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1052e6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e6eb push eax */
  push32((uint32_t)(EAX));
  /* 1052e6ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e6ee call 0x10531dd0 */
  push32(0x1052e6f3u); f_10531dd0();
  /* 1052e6f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e6f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e6f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e6fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e6fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e701 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e704 push edx */
  push32((uint32_t)(EDX));
  /* 1052e705 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1052e707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e70a push eax */
  push32((uint32_t)(EAX));
  /* 1052e70b push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e70d call 0x10531dd0 */
  push32(0x1052e712u); f_10531dd0();
  /* 1052e712 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e715 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e718 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e71a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e71d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e720 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e723 push edx */
  push32((uint32_t)(EDX));
  /* 1052e724 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1052e726 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e729 push eax */
  push32((uint32_t)(EAX));
  /* 1052e72a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e72c call 0x10531dd0 */
  push32(0x1052e731u); f_10531dd0();
  /* 1052e731 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e734 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e737 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e739 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e73c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e73f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e742 push edx */
  push32((uint32_t)(EDX));
  /* 1052e743 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1052e745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e748 push eax */
  push32((uint32_t)(EAX));
  /* 1052e749 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e74b call 0x10531dd0 */
  push32(0x1052e750u); f_10531dd0();
  /* 1052e750 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e753 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e756 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e758 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e75b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e75e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e761 push edx */
  push32((uint32_t)(EDX));
  /* 1052e762 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1052e764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e767 push eax */
  push32((uint32_t)(EAX));
  /* 1052e768 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e76a call 0x10531dd0 */
  push32(0x1052e76fu); f_10531dd0();
  /* 1052e76f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e772 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e775 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e777 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e77a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e77d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e780 push edx */
  push32((uint32_t)(EDX));
  /* 1052e781 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1052e783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e786 push eax */
  push32((uint32_t)(EAX));
  /* 1052e787 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e789 call 0x10531dd0 */
  push32(0x1052e78eu); f_10531dd0();
  /* 1052e78e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e791 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e794 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e796 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e799 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e79c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e79f push edx */
  push32((uint32_t)(EDX));
  /* 1052e7a0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1052e7a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e7a5 push eax */
  push32((uint32_t)(EAX));
  /* 1052e7a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e7a8 call 0x10531dd0 */
  push32(0x1052e7adu); f_10531dd0();
  /* 1052e7ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e7b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e7b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e7b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e7b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e7bb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e7be push edx */
  push32((uint32_t)(EDX));
  /* 1052e7bf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1052e7c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e7c4 push eax */
  push32((uint32_t)(EAX));
  /* 1052e7c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e7c7 call 0x10531dd0 */
  push32(0x1052e7ccu); f_10531dd0();
  /* 1052e7cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e7cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e7d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e7d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e7da add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e7dd push edx */
  push32((uint32_t)(EDX));
  /* 1052e7de push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1052e7e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e7e3 push eax */
  push32((uint32_t)(EAX));
  /* 1052e7e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e7e6 call 0x10531dd0 */
  push32(0x1052e7ebu); f_10531dd0();
  /* 1052e7eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e7ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e7f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e7f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e7f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e7f9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e7fc push edx */
  push32((uint32_t)(EDX));
  /* 1052e7fd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1052e7ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e802 push eax */
  push32((uint32_t)(EAX));
  /* 1052e803 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e805 call 0x10531dd0 */
  push32(0x1052e80au); f_10531dd0();
  /* 1052e80a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e80d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e810 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e812 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e818 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e81b push edx */
  push32((uint32_t)(EDX));
  /* 1052e81c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1052e81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e821 push eax */
  push32((uint32_t)(EAX));
  /* 1052e822 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e824 call 0x10531dd0 */
  push32(0x1052e829u); f_10531dd0();
  /* 1052e829 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e82c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e82f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e831 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e837 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e83a push edx */
  push32((uint32_t)(EDX));
  /* 1052e83b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1052e83d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e840 push eax */
  push32((uint32_t)(EAX));
  /* 1052e841 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e843 call 0x10531dd0 */
  push32(0x1052e848u); f_10531dd0();
  /* 1052e848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e84b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e84e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e850 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e856 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e859 push edx */
  push32((uint32_t)(EDX));
  /* 1052e85a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1052e85c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e85f push eax */
  push32((uint32_t)(EAX));
  /* 1052e860 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e862 call 0x10531dd0 */
  push32(0x1052e867u); f_10531dd0();
  /* 1052e867 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e86a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e86d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e86f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e872 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e875 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e878 push edx */
  push32((uint32_t)(EDX));
  /* 1052e879 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1052e87b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e87e push eax */
  push32((uint32_t)(EAX));
  /* 1052e87f push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e881 call 0x10531dd0 */
  push32(0x1052e886u); f_10531dd0();
  /* 1052e886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e889 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e88c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e88e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e894 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e897 push edx */
  push32((uint32_t)(EDX));
  /* 1052e898 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1052e89a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e89d push eax */
  push32((uint32_t)(EAX));
  /* 1052e89e push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e8a0 call 0x10531dd0 */
  push32(0x1052e8a5u); f_10531dd0();
  /* 1052e8a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e8a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e8ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e8ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e8b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e8b3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e8b6 push edx */
  push32((uint32_t)(EDX));
  /* 1052e8b7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1052e8b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e8bc push eax */
  push32((uint32_t)(EAX));
  /* 1052e8bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e8bf call 0x10531dd0 */
  push32(0x1052e8c4u); f_10531dd0();
  /* 1052e8c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e8c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e8ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e8cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e8cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e8d2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e8d8 push edx */
  push32((uint32_t)(EDX));
  /* 1052e8d9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1052e8db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e8de push eax */
  push32((uint32_t)(EAX));
  /* 1052e8df push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e8e1 call 0x10531dd0 */
  push32(0x1052e8e6u); f_10531dd0();
  /* 1052e8e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e8e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e8ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e8ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e8f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e8f4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e8fa push edx */
  push32((uint32_t)(EDX));
  /* 1052e8fb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1052e8fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e900 push eax */
  push32((uint32_t)(EAX));
  /* 1052e901 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e903 call 0x10531dd0 */
  push32(0x1052e908u); f_10531dd0();
  /* 1052e908 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e90b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e90e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e910 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e913 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e916 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e91c push edx */
  push32((uint32_t)(EDX));
  /* 1052e91d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1052e91f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e922 push eax */
  push32((uint32_t)(EAX));
  /* 1052e923 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e925 call 0x10531dd0 */
  push32(0x1052e92au); f_10531dd0();
  /* 1052e92a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e92d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e930 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e932 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e935 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e938 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e93e push edx */
  push32((uint32_t)(EDX));
  /* 1052e93f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1052e941 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e944 push eax */
  push32((uint32_t)(EAX));
  /* 1052e945 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e947 call 0x10531dd0 */
  push32(0x1052e94cu); f_10531dd0();
  /* 1052e94c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e94f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e952 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e954 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e95a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e960 push edx */
  push32((uint32_t)(EDX));
  /* 1052e961 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1052e963 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e966 push eax */
  push32((uint32_t)(EAX));
  /* 1052e967 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e969 call 0x10531dd0 */
  push32(0x1052e96eu); f_10531dd0();
  /* 1052e96e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e971 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e974 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e976 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e97c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e982 push edx */
  push32((uint32_t)(EDX));
  /* 1052e983 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1052e985 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e988 push eax */
  push32((uint32_t)(EAX));
  /* 1052e989 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e98b call 0x10531dd0 */
  push32(0x1052e990u); f_10531dd0();
  /* 1052e990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e993 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e996 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e998 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e99b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e99e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e9a4 push edx */
  push32((uint32_t)(EDX));
  /* 1052e9a5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1052e9a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e9aa push eax */
  push32((uint32_t)(EAX));
  /* 1052e9ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e9ad call 0x10531dd0 */
  push32(0x1052e9b2u); f_10531dd0();
  /* 1052e9b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e9b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e9b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e9ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e9bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e9c0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e9c6 push edx */
  push32((uint32_t)(EDX));
  /* 1052e9c7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1052e9c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052e9cc push eax */
  push32((uint32_t)(EAX));
  /* 1052e9cd push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e9cf call 0x10531dd0 */
  push32(0x1052e9d4u); f_10531dd0();
  /* 1052e9d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e9d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e9da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e9dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052e9df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052e9e2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e9e8 push edx */
  push32((uint32_t)(EDX));
  /* 1052e9e9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1052e9eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052e9ee push eax */
  push32((uint32_t)(EAX));
  /* 1052e9ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1052e9f1 call 0x10531dd0 */
  push32(0x1052e9f6u); f_10531dd0();
  /* 1052e9f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052e9f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052e9fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052e9fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052ea01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ea04 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ea0a push edx */
  push32((uint32_t)(EDX));
  /* 1052ea0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1052ea0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052ea10 push eax */
  push32((uint32_t)(EAX));
  /* 1052ea11 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052ea13 call 0x10531dd0 */
  push32(0x1052ea18u); f_10531dd0();
  /* 1052ea18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ea1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052ea1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052ea20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052ea23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ea26 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ea2c push edx */
  push32((uint32_t)(EDX));
  /* 1052ea2d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1052ea32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052ea35 push eax */
  push32((uint32_t)(EAX));
  /* 1052ea36 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052ea38 call 0x10531dd0 */
  push32(0x1052ea3du); f_10531dd0();
  /* 1052ea3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ea40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052ea43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052ea45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1052ea48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1052ea4b:;
  /* 1052ea4b mov esp, ebp */
  ESP = (EBP);
  /* 1052ea4d pop ebp */
  EBP = (pop32());
  /* 1052ea4e ret  */
  ESPCHK(0x1052e4c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1052ea50 (779 bytes, 265 insns) */
void f_1052ea50(void) {
  FTRACE(0x1052ea50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ea50 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ea51 mov ebp, esp */
  EBP = (ESP);
  /* 1052ea53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ea57 jne 0x1052ea5e */
  if (!C.zf) goto L_1052ea5e;
  /* 1052ea59 jmp 0x1052ed59 */
  goto L_1052ed59;
L_1052ea5e:;
  /* 1052ea5e push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ea60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ea63 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1052ea66 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ea67 call 0x105246a0 */
  push32(0x1052ea6cu); f_105246a0();
  /* 1052ea6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ea6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ea71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ea74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1052ea77 push eax */
  push32((uint32_t)(EAX));
  /* 1052ea78 call 0x105246a0 */
  push32(0x1052ea7du); f_105246a0();
  /* 1052ea7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ea80 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ea82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ea85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052ea88 push edx */
  push32((uint32_t)(EDX));
  /* 1052ea89 call 0x105246a0 */
  push32(0x1052ea8eu); f_105246a0();
  /* 1052ea8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ea91 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ea93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ea96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1052ea99 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ea9a call 0x105246a0 */
  push32(0x1052ea9fu); f_105246a0();
  /* 1052ea9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eaa2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eaa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eaa7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1052eaaa push eax */
  push32((uint32_t)(EAX));
  /* 1052eaab call 0x105246a0 */
  push32(0x1052eab0u); f_105246a0();
  /* 1052eab0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eab3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eab5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eab8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1052eabb push edx */
  push32((uint32_t)(EDX));
  /* 1052eabc call 0x105246a0 */
  push32(0x1052eac1u); f_105246a0();
  /* 1052eac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eac4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eac9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052eacb push ecx */
  push32((uint32_t)(ECX));
  /* 1052eacc call 0x105246a0 */
  push32(0x1052ead1u); f_105246a0();
  /* 1052ead1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ead4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ead6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ead9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1052eadc push eax */
  push32((uint32_t)(EAX));
  /* 1052eadd call 0x105246a0 */
  push32(0x1052eae2u); f_105246a0();
  /* 1052eae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eae5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eae7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eaea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1052eaed push edx */
  push32((uint32_t)(EDX));
  /* 1052eaee call 0x105246a0 */
  push32(0x1052eaf3u); f_105246a0();
  /* 1052eaf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eaf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eaf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eafb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1052eafe push ecx */
  push32((uint32_t)(ECX));
  /* 1052eaff call 0x105246a0 */
  push32(0x1052eb04u); f_105246a0();
  /* 1052eb04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb07 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb0c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1052eb0f push eax */
  push32((uint32_t)(EAX));
  /* 1052eb10 call 0x105246a0 */
  push32(0x1052eb15u); f_105246a0();
  /* 1052eb15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb18 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb1d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1052eb20 push edx */
  push32((uint32_t)(EDX));
  /* 1052eb21 call 0x105246a0 */
  push32(0x1052eb26u); f_105246a0();
  /* 1052eb26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb29 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb2e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1052eb31 push ecx */
  push32((uint32_t)(ECX));
  /* 1052eb32 call 0x105246a0 */
  push32(0x1052eb37u); f_105246a0();
  /* 1052eb37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb3f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1052eb42 push eax */
  push32((uint32_t)(EAX));
  /* 1052eb43 call 0x105246a0 */
  push32(0x1052eb48u); f_105246a0();
  /* 1052eb48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb4b push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb50 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1052eb53 push edx */
  push32((uint32_t)(EDX));
  /* 1052eb54 call 0x105246a0 */
  push32(0x1052eb59u); f_105246a0();
  /* 1052eb59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb5c push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb61 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1052eb64 push ecx */
  push32((uint32_t)(ECX));
  /* 1052eb65 call 0x105246a0 */
  push32(0x1052eb6au); f_105246a0();
  /* 1052eb6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb72 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1052eb75 push eax */
  push32((uint32_t)(EAX));
  /* 1052eb76 call 0x105246a0 */
  push32(0x1052eb7bu); f_105246a0();
  /* 1052eb7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb83 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1052eb86 push edx */
  push32((uint32_t)(EDX));
  /* 1052eb87 call 0x105246a0 */
  push32(0x1052eb8cu); f_105246a0();
  /* 1052eb8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eb8f push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eb91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eb94 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1052eb97 push ecx */
  push32((uint32_t)(ECX));
  /* 1052eb98 call 0x105246a0 */
  push32(0x1052eb9du); f_105246a0();
  /* 1052eb9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eba0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052eba5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1052eba8 push eax */
  push32((uint32_t)(EAX));
  /* 1052eba9 call 0x105246a0 */
  push32(0x1052ebaeu); f_105246a0();
  /* 1052ebae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ebb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ebb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ebb6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1052ebb9 push edx */
  push32((uint32_t)(EDX));
  /* 1052ebba call 0x105246a0 */
  push32(0x1052ebbfu); f_105246a0();
  /* 1052ebbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ebc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ebc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ebc7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1052ebca push ecx */
  push32((uint32_t)(ECX));
  /* 1052ebcb call 0x105246a0 */
  push32(0x1052ebd0u); f_105246a0();
  /* 1052ebd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ebd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ebd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ebd8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1052ebdb push eax */
  push32((uint32_t)(EAX));
  /* 1052ebdc call 0x105246a0 */
  push32(0x1052ebe1u); f_105246a0();
  /* 1052ebe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ebe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ebe6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ebe9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1052ebec push edx */
  push32((uint32_t)(EDX));
  /* 1052ebed call 0x105246a0 */
  push32(0x1052ebf2u); f_105246a0();
  /* 1052ebf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ebf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ebf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ebfa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1052ebfd push ecx */
  push32((uint32_t)(ECX));
  /* 1052ebfe call 0x105246a0 */
  push32(0x1052ec03u); f_105246a0();
  /* 1052ec03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec06 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec0b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1052ec0e push eax */
  push32((uint32_t)(EAX));
  /* 1052ec0f call 0x105246a0 */
  push32(0x1052ec14u); f_105246a0();
  /* 1052ec14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec17 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec1c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1052ec1f push edx */
  push32((uint32_t)(EDX));
  /* 1052ec20 call 0x105246a0 */
  push32(0x1052ec25u); f_105246a0();
  /* 1052ec25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec2d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1052ec30 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ec31 call 0x105246a0 */
  push32(0x1052ec36u); f_105246a0();
  /* 1052ec36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec3e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1052ec41 push eax */
  push32((uint32_t)(EAX));
  /* 1052ec42 call 0x105246a0 */
  push32(0x1052ec47u); f_105246a0();
  /* 1052ec47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec4a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec4f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1052ec52 push edx */
  push32((uint32_t)(EDX));
  /* 1052ec53 call 0x105246a0 */
  push32(0x1052ec58u); f_105246a0();
  /* 1052ec58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec5b push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec60 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1052ec63 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ec64 call 0x105246a0 */
  push32(0x1052ec69u); f_105246a0();
  /* 1052ec69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec6c push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec71 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1052ec74 push eax */
  push32((uint32_t)(EAX));
  /* 1052ec75 call 0x105246a0 */
  push32(0x1052ec7au); f_105246a0();
  /* 1052ec7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec7d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec82 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1052ec88 push edx */
  push32((uint32_t)(EDX));
  /* 1052ec89 call 0x105246a0 */
  push32(0x1052ec8eu); f_105246a0();
  /* 1052ec8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ec91 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ec93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ec96 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1052ec9c push ecx */
  push32((uint32_t)(ECX));
  /* 1052ec9d call 0x105246a0 */
  push32(0x1052eca2u); f_105246a0();
  /* 1052eca2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eca5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eca7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ecaa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1052ecb0 push eax */
  push32((uint32_t)(EAX));
  /* 1052ecb1 call 0x105246a0 */
  push32(0x1052ecb6u); f_105246a0();
  /* 1052ecb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ecb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ecbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ecbe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1052ecc4 push edx */
  push32((uint32_t)(EDX));
  /* 1052ecc5 call 0x105246a0 */
  push32(0x1052eccau); f_105246a0();
  /* 1052ecca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eccd push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ecd2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1052ecd8 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ecd9 call 0x105246a0 */
  push32(0x1052ecdeu); f_105246a0();
  /* 1052ecde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ece1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ece3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ece6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1052ecec push eax */
  push32((uint32_t)(EAX));
  /* 1052eced call 0x105246a0 */
  push32(0x1052ecf2u); f_105246a0();
  /* 1052ecf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ecf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ecf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ecfa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1052ed00 push edx */
  push32((uint32_t)(EDX));
  /* 1052ed01 call 0x105246a0 */
  push32(0x1052ed06u); f_105246a0();
  /* 1052ed06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ed09 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ed0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ed0e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1052ed14 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ed15 call 0x105246a0 */
  push32(0x1052ed1au); f_105246a0();
  /* 1052ed1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ed1d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ed1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ed22 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1052ed28 push eax */
  push32((uint32_t)(EAX));
  /* 1052ed29 call 0x105246a0 */
  push32(0x1052ed2eu); f_105246a0();
  /* 1052ed2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ed31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ed33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ed36 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1052ed3c push edx */
  push32((uint32_t)(EDX));
  /* 1052ed3d call 0x105246a0 */
  push32(0x1052ed42u); f_105246a0();
  /* 1052ed42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ed45 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ed47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052ed4a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1052ed50 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ed51 call 0x105246a0 */
  push32(0x1052ed56u); f_105246a0();
  /* 1052ed56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052ed59:;
  /* 1052ed59 pop ebp */
  EBP = (pop32());
  /* 1052ed5a ret  */
  ESPCHK(0x1052ea50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed60 @ 0x1052ed60 (678 bytes, 180 insns) */
void f_1052ed60(void) {
  FTRACE(0x1052ed60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052ed60 push ebp */
  push32((uint32_t)(EBP));
  /* 1052ed61 mov ebp, esp */
  EBP = (ESP);
  /* 1052ed63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052ed66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1052ed6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052ed6f mov ax, word ptr [0x1054f792] */
  AX = (r16((uint32_t)(0x1054f792)));
  /* 1052ed75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052ed78 cmp dword ptr [0x1054f738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ed7f je 0x1052eeda */
  if (C.zf) goto L_1052eeda;
  /* 1052ed85 push 0x1054f760 */
  push32((uint32_t)(0x1054f760u));
  /* 1052ed8a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1052ed8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052ed8f push ecx */
  push32((uint32_t)(ECX));
  /* 1052ed90 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052ed92 call 0x10531dd0 */
  push32(0x1052ed97u); f_10531dd0();
  /* 1052ed97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ed9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052ed9d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1052ed9f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1052eda2 push 0x1054f764 */
  push32((uint32_t)(0x1054f764u));
  /* 1052eda7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1052eda9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052edac push eax */
  push32((uint32_t)(EAX));
  /* 1052edad push 1 */
  push32((uint32_t)(0x1u));
  /* 1052edaf call 0x10531dd0 */
  push32(0x1052edb4u); f_10531dd0();
  /* 1052edb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052edb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052edba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052edbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052edbf push 0x1054f768 */
  push32((uint32_t)(0x1054f768u));
  /* 1052edc4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1052edc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052edc9 push edx */
  push32((uint32_t)(EDX));
  /* 1052edca push 1 */
  push32((uint32_t)(0x1u));
  /* 1052edcc call 0x10531dd0 */
  push32(0x1052edd1u); f_10531dd0();
  /* 1052edd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052edd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052edd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052edd9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052eddc mov edx, dword ptr [0x1054f768] */
  EDX = (r32((uint32_t)(0x1054f768)));
  /* 1052ede2 push edx */
  push32((uint32_t)(EDX));
  /* 1052ede3 call 0x1052f010 */
  push32(0x1052ede8u); f_1052f010();
  /* 1052ede8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052edeb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052edef je 0x1052ee49 */
  if (C.zf) goto L_1052ee49;
  /* 1052edf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052edf3 mov eax, dword ptr [0x1054f760] */
  EAX = (r32((uint32_t)(0x1054f760)));
  /* 1052edf8 push eax */
  push32((uint32_t)(EAX));
  /* 1052edf9 call 0x105246a0 */
  push32(0x1052edfeu); f_105246a0();
  /* 1052edfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ee01 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ee03 mov ecx, dword ptr [0x1054f764] */
  ECX = (r32((uint32_t)(0x1054f764)));
  /* 1052ee09 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ee0a call 0x105246a0 */
  push32(0x1052ee0fu); f_105246a0();
  /* 1052ee0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ee12 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ee14 mov edx, dword ptr [0x1054f768] */
  EDX = (r32((uint32_t)(0x1054f768)));
  /* 1052ee1a push edx */
  push32((uint32_t)(EDX));
  /* 1052ee1b call 0x105246a0 */
  push32(0x1052ee20u); f_105246a0();
  /* 1052ee20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ee23 mov dword ptr [0x1054f760], 0 */
  w32((uint32_t)(0x1054f760), (0x0u));
  /* 1052ee2d mov dword ptr [0x1054f764], 0 */
  w32((uint32_t)(0x1054f764), (0x0u));
  /* 1052ee37 mov dword ptr [0x1054f768], 0 */
  w32((uint32_t)(0x1054f768), (0x0u));
  /* 1052ee41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052ee44 jmp 0x1052f002 */
  goto L_1052f002;
L_1052ee49:;
  /* 1052ee49 mov eax, dword ptr [0x1054ed88] */
  EAX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ee4e cmp dword ptr [eax], 0x1054ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1054ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ee54 je 0x1052ee90 */
  if (C.zf) goto L_1052ee90;
  /* 1052ee56 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ee58 mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ee5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052ee60 push edx */
  push32((uint32_t)(EDX));
  /* 1052ee61 call 0x105246a0 */
  push32(0x1052ee66u); f_105246a0();
  /* 1052ee66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ee69 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ee6b mov eax, dword ptr [0x1054ed88] */
  EAX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ee70 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1052ee73 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ee74 call 0x105246a0 */
  push32(0x1052ee79u); f_105246a0();
  /* 1052ee79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ee7c push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ee7e mov edx, dword ptr [0x1054ed88] */
  EDX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ee84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1052ee87 push eax */
  push32((uint32_t)(EAX));
  /* 1052ee88 call 0x105246a0 */
  push32(0x1052ee8du); f_105246a0();
  /* 1052ee8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052ee90:;
  /* 1052ee90 mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ee96 mov edx, dword ptr [0x1054f760] */
  EDX = (r32((uint32_t)(0x1054f760)));
  /* 1052ee9c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1052ee9e mov eax, dword ptr [0x1054ed88] */
  EAX = (r32((uint32_t)(0x1054ed88)));
  /* 1052eea3 mov ecx, dword ptr [0x1054f764] */
  ECX = (r32((uint32_t)(0x1054f764)));
  /* 1052eea9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1052eeac mov edx, dword ptr [0x1054ed88] */
  EDX = (r32((uint32_t)(0x1054ed88)));
  /* 1052eeb2 mov eax, dword ptr [0x1054f768] */
  EAX = (r32((uint32_t)(0x1054f768)));
  /* 1052eeb7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1052eeba mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052eec0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052eec2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1052eec4 mov byte ptr [0x1054dea8], al */
  w8((uint32_t)(0x1054dea8), (AL));
  /* 1052eec9 mov dword ptr [0x1054deac], 1 */
  w32((uint32_t)(0x1054deac), (0x1u));
  /* 1052eed3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052eed5 jmp 0x1052f002 */
  goto L_1052f002;
L_1052eeda:;
  /* 1052eeda push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eedc mov ecx, dword ptr [0x1054f760] */
  ECX = (r32((uint32_t)(0x1054f760)));
  /* 1052eee2 push ecx */
  push32((uint32_t)(ECX));
  /* 1052eee3 call 0x105246a0 */
  push32(0x1052eee8u); f_105246a0();
  /* 1052eee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eeeb push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eeed mov edx, dword ptr [0x1054f764] */
  EDX = (r32((uint32_t)(0x1054f764)));
  /* 1052eef3 push edx */
  push32((uint32_t)(EDX));
  /* 1052eef4 call 0x105246a0 */
  push32(0x1052eef9u); f_105246a0();
  /* 1052eef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052eefc push 2 */
  push32((uint32_t)(0x2u));
  /* 1052eefe mov eax, dword ptr [0x1054f768] */
  EAX = (r32((uint32_t)(0x1054f768)));
  /* 1052ef03 push eax */
  push32((uint32_t)(EAX));
  /* 1052ef04 call 0x105246a0 */
  push32(0x1052ef09u); f_105246a0();
  /* 1052ef09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ef0c mov dword ptr [0x1054f760], 0 */
  w32((uint32_t)(0x1054f760), (0x0u));
  /* 1052ef16 mov dword ptr [0x1054f764], 0 */
  w32((uint32_t)(0x1054f764), (0x0u));
  /* 1052ef20 mov dword ptr [0x1054f768], 0 */
  w32((uint32_t)(0x1054f768), (0x0u));
  /* 1052ef2a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1052ef2f push 0x1054b1ac */
  push32((uint32_t)(0x1054b1acu));
  /* 1052ef34 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ef36 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ef38 call 0x10523c10 */
  push32(0x1052ef3du); f_10523c10();
  /* 1052ef3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ef40 mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ef46 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1052ef48 mov edx, dword ptr [0x1054ed88] */
  EDX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ef4e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ef51 jne 0x1052ef5b */
  if (!C.zf) goto L_1052ef5b;
  /* 1052ef53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052ef56 jmp 0x1052f002 */
  goto L_1052f002;
L_1052ef5b:;
  /* 1052ef5b push 0x1054b17c */
  push32((uint32_t)(0x1054b17cu));
  /* 1052ef60 mov eax, dword ptr [0x1054ed88] */
  EAX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ef65 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1052ef67 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ef68 call 0x10526bc0 */
  push32(0x1052ef6du); f_10526bc0();
  /* 1052ef6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ef70 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1052ef75 push 0x1054b1ac */
  push32((uint32_t)(0x1054b1acu));
  /* 1052ef7a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ef7c push 2 */
  push32((uint32_t)(0x2u));
  /* 1052ef7e call 0x10523c10 */
  push32(0x1052ef83u); f_10523c10();
  /* 1052ef83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ef86 mov edx, dword ptr [0x1054ed88] */
  EDX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ef8c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1052ef8f mov eax, dword ptr [0x1054ed88] */
  EAX = (r32((uint32_t)(0x1054ed88)));
  /* 1052ef94 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ef98 jne 0x1052ef9f */
  if (!C.zf) goto L_1052ef9f;
  /* 1052ef9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052ef9d jmp 0x1052f002 */
  goto L_1052f002;
L_1052ef9f:;
  /* 1052ef9f mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052efa5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1052efa8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1052efab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1052efb0 push 0x1054b1ac */
  push32((uint32_t)(0x1054b1acu));
  /* 1052efb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052efb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052efb9 call 0x10523c10 */
  push32(0x1052efbeu); f_10523c10();
  /* 1052efbe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052efc1 mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052efc7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1052efca mov edx, dword ptr [0x1054ed88] */
  EDX = (r32((uint32_t)(0x1054ed88)));
  /* 1052efd0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052efd4 jne 0x1052efdb */
  if (!C.zf) goto L_1052efdb;
  /* 1052efd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052efd9 jmp 0x1052f002 */
  goto L_1052f002;
L_1052efdb:;
  /* 1052efdb mov eax, dword ptr [0x1054ed88] */
  EAX = (r32((uint32_t)(0x1054ed88)));
  /* 1052efe0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1052efe3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1052efe6 mov edx, dword ptr [0x1054ed88] */
  EDX = (r32((uint32_t)(0x1054ed88)));
  /* 1052efec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1052efee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1052eff0 mov byte ptr [0x1054dea8], cl */
  w8((uint32_t)(0x1054dea8), (CL));
  /* 1052eff6 mov dword ptr [0x1054deac], 1 */
  w32((uint32_t)(0x1054deac), (0x1u));
  /* 1052f000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052f002:;
  /* 1052f002 mov esp, ebp */
  ESP = (EBP);
  /* 1052f004 pop ebp */
  EBP = (pop32());
  /* 1052f005 ret  */
  ESPCHK(0x1052ed60u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1052f010 (125 bytes, 49 insns) */
void f_1052f010(void) {
  FTRACE(0x1052f010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f010 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f011 mov ebp, esp */
  EBP = (ESP);
  /* 1052f013 push ecx */
  push32((uint32_t)(ECX));
L_1052f014:;
  /* 1052f014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f017 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052f01a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052f01c je 0x1052f089 */
  if (C.zf) goto L_1052f089;
  /* 1052f01e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f021 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1052f024 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f027 jl 0x1052f04d */
  if ((C.sf!=C.of)) goto L_1052f04d;
  /* 1052f029 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f02c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052f02f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f032 jg 0x1052f04d */
  if ((!C.zf&&C.sf==C.of)) goto L_1052f04d;
  /* 1052f034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f037 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052f03a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052f03d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f040 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1052f042 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f045 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f048 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1052f04b jmp 0x1052f087 */
  goto L_1052f087;
L_1052f04d:;
  /* 1052f04d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f050 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052f053 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f056 jne 0x1052f07e */
  if (!C.zf) goto L_1052f07e;
  /* 1052f058 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f05b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052f05e:;
  /* 1052f05e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f064 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1052f067 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1052f069 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f06c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f06f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052f072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f075 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1052f078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052f07a jne 0x1052f05e */
  if (!C.zf) goto L_1052f05e;
  /* 1052f07c jmp 0x1052f087 */
  goto L_1052f087;
L_1052f07e:;
  /* 1052f07e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f081 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f084 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1052f087:;
  /* 1052f087 jmp 0x1052f014 */
  goto L_1052f014;
L_1052f089:;
  /* 1052f089 mov esp, ebp */
  ESP = (EBP);
  /* 1052f08b pop ebp */
  EBP = (pop32());
  /* 1052f08c ret  */
  ESPCHK(0x1052f010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f090 @ 0x1052f090 (304 bytes, 85 insns) */
void f_1052f090(void) {
  FTRACE(0x1052f090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f090 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f091 mov ebp, esp */
  EBP = (ESP);
  /* 1052f093 push ecx */
  push32((uint32_t)(ECX));
  /* 1052f094 cmp dword ptr [0x1054f734], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f734))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f09b je 0x1052f15c */
  if (C.zf) goto L_1052f15c;
  /* 1052f0a1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1052f0a3 push 0x1054b1b8 */
  push32((uint32_t)(0x1054b1b8u));
  /* 1052f0a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f0aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1052f0ac push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f0ae call 0x10524020 */
  push32(0x1052f0b3u); f_10524020();
  /* 1052f0b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f0b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052f0b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f0bd jne 0x1052f0c9 */
  if (!C.zf) goto L_1052f0c9;
  /* 1052f0bf mov eax, 1 */
  EAX = (0x1u);
  /* 1052f0c4 jmp 0x1052f1bc */
  goto L_1052f1bc;
L_1052f0c9:;
  /* 1052f0c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f0cc push eax */
  push32((uint32_t)(EAX));
  /* 1052f0cd call 0x1052f1c0 */
  push32(0x1052f0d2u); f_1052f1c0();
  /* 1052f0d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f0d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052f0d7 je 0x1052f0fd */
  if (C.zf) goto L_1052f0fd;
  /* 1052f0d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f0dc push ecx */
  push32((uint32_t)(ECX));
  /* 1052f0dd call 0x1052f450 */
  push32(0x1052f0e2u); f_1052f450();
  /* 1052f0e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f0e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f0e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f0ea push edx */
  push32((uint32_t)(EDX));
  /* 1052f0eb call 0x105246a0 */
  push32(0x1052f0f0u); f_105246a0();
  /* 1052f0f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f0f3 mov eax, 1 */
  EAX = (0x1u);
  /* 1052f0f8 jmp 0x1052f1bc */
  goto L_1052f1bc;
L_1052f0fd:;
  /* 1052f0fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f100 mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052f106 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052f108 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1052f10a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f10d mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052f113 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1052f116 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1052f119 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f11c mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052f122 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1052f125 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1052f128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f12b mov dword ptr [0x1054ed88], eax */
  w32((uint32_t)(0x1054ed88), (EAX));
  /* 1052f130 mov ecx, dword ptr [0x1054f76c] */
  ECX = (r32((uint32_t)(0x1054f76c)));
  /* 1052f136 push ecx */
  push32((uint32_t)(ECX));
  /* 1052f137 call 0x1052f450 */
  push32(0x1052f13cu); f_1052f450();
  /* 1052f13c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f13f push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f141 mov edx, dword ptr [0x1054f76c] */
  EDX = (r32((uint32_t)(0x1054f76c)));
  /* 1052f147 push edx */
  push32((uint32_t)(EDX));
  /* 1052f148 call 0x105246a0 */
  push32(0x1052f14du); f_105246a0();
  /* 1052f14d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f153 mov dword ptr [0x1054f76c], eax */
  w32((uint32_t)(0x1054f76c), (EAX));
  /* 1052f158 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f15a jmp 0x1052f1bc */
  goto L_1052f1bc;
L_1052f15c:;
  /* 1052f15c mov ecx, dword ptr [0x1054ed88] */
  ECX = (r32((uint32_t)(0x1054ed88)));
  /* 1052f162 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052f164 mov dword ptr [0x1054ed58], edx */
  w32((uint32_t)(0x1054ed58), (EDX));
  /* 1052f16a mov eax, dword ptr [0x1054ed88] */
  EAX = (r32((uint32_t)(0x1054ed88)));
  /* 1052f16f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1052f172 mov dword ptr [0x1054ed5c], ecx */
  w32((uint32_t)(0x1054ed5c), (ECX));
  /* 1052f178 mov edx, dword ptr [0x1054ed88] */
  EDX = (r32((uint32_t)(0x1054ed88)));
  /* 1052f17e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1052f181 mov dword ptr [0x1054ed60], eax */
  w32((uint32_t)(0x1054ed60), (EAX));
  /* 1052f186 mov dword ptr [0x1054ed88], 0x1054ed58 */
  w32((uint32_t)(0x1054ed88), (0x1054ed58u));
  /* 1052f190 mov ecx, dword ptr [0x1054f76c] */
  ECX = (r32((uint32_t)(0x1054f76c)));
  /* 1052f196 push ecx */
  push32((uint32_t)(ECX));
  /* 1052f197 call 0x1052f450 */
  push32(0x1052f19cu); f_1052f450();
  /* 1052f19c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f19f push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f1a1 mov edx, dword ptr [0x1054f76c] */
  EDX = (r32((uint32_t)(0x1054f76c)));
  /* 1052f1a7 push edx */
  push32((uint32_t)(EDX));
  /* 1052f1a8 call 0x105246a0 */
  push32(0x1052f1adu); f_105246a0();
  /* 1052f1ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f1b0 mov dword ptr [0x1054f76c], 0 */
  w32((uint32_t)(0x1054f76c), (0x0u));
  /* 1052f1ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052f1bc:;
  /* 1052f1bc mov esp, ebp */
  ESP = (EBP);
  /* 1052f1be pop ebp */
  EBP = (pop32());
  /* 1052f1bf ret  */
  ESPCHK(0x1052f090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1c0 @ 0x1052f1c0 (525 bytes, 200 insns) */
void f_1052f1c0(void) {
  FTRACE(0x1052f1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1052f1c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052f1c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1052f1cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f1cf mov ax, word ptr [0x1054f78c] */
  AX = (r16((uint32_t)(0x1054f78c)));
  /* 1052f1d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052f1d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f1dc jne 0x1052f1e6 */
  if (!C.zf) goto L_1052f1e6;
  /* 1052f1de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052f1e1 jmp 0x1052f3c9 */
  goto L_1052f3c9;
L_1052f1e6:;
  /* 1052f1e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f1e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f1ec push ecx */
  push32((uint32_t)(ECX));
  /* 1052f1ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1052f1ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f1f2 push edx */
  push32((uint32_t)(EDX));
  /* 1052f1f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f1f5 call 0x10531dd0 */
  push32(0x1052f1fau); f_10531dd0();
  /* 1052f1fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f1fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f200 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f202 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f208 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f20b push edx */
  push32((uint32_t)(EDX));
  /* 1052f20c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1052f20e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f211 push eax */
  push32((uint32_t)(EAX));
  /* 1052f212 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f214 call 0x10531dd0 */
  push32(0x1052f219u); f_10531dd0();
  /* 1052f219 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f21c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f21f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f221 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f227 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f22a push edx */
  push32((uint32_t)(EDX));
  /* 1052f22b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1052f22d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f230 push eax */
  push32((uint32_t)(EAX));
  /* 1052f231 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f233 call 0x10531dd0 */
  push32(0x1052f238u); f_10531dd0();
  /* 1052f238 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f23b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f23e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f240 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f246 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f249 push edx */
  push32((uint32_t)(EDX));
  /* 1052f24a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1052f24c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f24f push eax */
  push32((uint32_t)(EAX));
  /* 1052f250 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f252 call 0x10531dd0 */
  push32(0x1052f257u); f_10531dd0();
  /* 1052f257 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f25a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f25d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f25f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f262 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f265 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f268 push edx */
  push32((uint32_t)(EDX));
  /* 1052f269 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1052f26b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f26e push eax */
  push32((uint32_t)(EAX));
  /* 1052f26f push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f271 call 0x10531dd0 */
  push32(0x1052f276u); f_10531dd0();
  /* 1052f276 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f279 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f27c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f27e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f284 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1052f287 push eax */
  push32((uint32_t)(EAX));
  /* 1052f288 call 0x1052f3d0 */
  push32(0x1052f28du); f_1052f3d0();
  /* 1052f28d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f293 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f296 push ecx */
  push32((uint32_t)(ECX));
  /* 1052f297 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1052f299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f29c push edx */
  push32((uint32_t)(EDX));
  /* 1052f29d push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f29f call 0x10531dd0 */
  push32(0x1052f2a4u); f_10531dd0();
  /* 1052f2a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f2a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f2aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f2ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f2af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f2b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f2b5 push edx */
  push32((uint32_t)(EDX));
  /* 1052f2b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1052f2b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f2bb push eax */
  push32((uint32_t)(EAX));
  /* 1052f2bc push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f2be call 0x10531dd0 */
  push32(0x1052f2c3u); f_10531dd0();
  /* 1052f2c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f2c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f2c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f2cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f2ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f2d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f2d4 push edx */
  push32((uint32_t)(EDX));
  /* 1052f2d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1052f2d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f2da push eax */
  push32((uint32_t)(EAX));
  /* 1052f2db push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f2dd call 0x10531dd0 */
  push32(0x1052f2e2u); f_10531dd0();
  /* 1052f2e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f2e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f2e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f2ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f2f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f2f3 push edx */
  push32((uint32_t)(EDX));
  /* 1052f2f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1052f2f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f2f9 push eax */
  push32((uint32_t)(EAX));
  /* 1052f2fa push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f2fc call 0x10531dd0 */
  push32(0x1052f301u); f_10531dd0();
  /* 1052f301 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f304 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f307 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f309 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f30c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f30f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f312 push edx */
  push32((uint32_t)(EDX));
  /* 1052f313 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1052f315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f318 push eax */
  push32((uint32_t)(EAX));
  /* 1052f319 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f31b call 0x10531dd0 */
  push32(0x1052f320u); f_10531dd0();
  /* 1052f320 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f323 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f326 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f328 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f32b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f32e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f331 push edx */
  push32((uint32_t)(EDX));
  /* 1052f332 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1052f334 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f337 push eax */
  push32((uint32_t)(EAX));
  /* 1052f338 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f33a call 0x10531dd0 */
  push32(0x1052f33fu); f_10531dd0();
  /* 1052f33f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f342 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f345 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f347 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f34a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f34d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f350 push edx */
  push32((uint32_t)(EDX));
  /* 1052f351 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1052f353 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f356 push eax */
  push32((uint32_t)(EAX));
  /* 1052f357 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f359 call 0x10531dd0 */
  push32(0x1052f35eu); f_10531dd0();
  /* 1052f35e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f361 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f364 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f366 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f369 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f36c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f36f push edx */
  push32((uint32_t)(EDX));
  /* 1052f370 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1052f372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f375 push eax */
  push32((uint32_t)(EAX));
  /* 1052f376 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f378 call 0x10531dd0 */
  push32(0x1052f37du); f_10531dd0();
  /* 1052f37d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f380 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f383 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f385 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f38b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f38e push edx */
  push32((uint32_t)(EDX));
  /* 1052f38f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1052f391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f394 push eax */
  push32((uint32_t)(EAX));
  /* 1052f395 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f397 call 0x10531dd0 */
  push32(0x1052f39cu); f_10531dd0();
  /* 1052f39c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f39f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f3a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f3a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f3a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f3aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f3ad push edx */
  push32((uint32_t)(EDX));
  /* 1052f3ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1052f3b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f3b3 push eax */
  push32((uint32_t)(EAX));
  /* 1052f3b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f3b6 call 0x10531dd0 */
  push32(0x1052f3bbu); f_10531dd0();
  /* 1052f3bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f3be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052f3c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f3c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1052f3c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1052f3c9:;
  /* 1052f3c9 mov esp, ebp */
  ESP = (EBP);
  /* 1052f3cb pop ebp */
  EBP = (pop32());
  /* 1052f3cc ret  */
  ESPCHK(0x1052f1c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1052f3d0 (125 bytes, 49 insns) */
void f_1052f3d0(void) {
  FTRACE(0x1052f3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1052f3d3 push ecx */
  push32((uint32_t)(ECX));
L_1052f3d4:;
  /* 1052f3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f3d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052f3da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052f3dc je 0x1052f449 */
  if (C.zf) goto L_1052f449;
  /* 1052f3de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f3e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1052f3e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f3e7 jl 0x1052f40d */
  if ((C.sf!=C.of)) goto L_1052f40d;
  /* 1052f3e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f3ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052f3ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f3f2 jg 0x1052f40d */
  if ((!C.zf&&C.sf==C.of)) goto L_1052f40d;
  /* 1052f3f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f3f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052f3fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052f3fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f400 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1052f402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f405 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f408 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1052f40b jmp 0x1052f447 */
  goto L_1052f447;
L_1052f40d:;
  /* 1052f40d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f410 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052f413 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f416 jne 0x1052f43e */
  if (!C.zf) goto L_1052f43e;
  /* 1052f418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f41b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052f41e:;
  /* 1052f41e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f421 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f424 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1052f427 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1052f429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f42c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f42f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1052f432 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052f435 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1052f438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052f43a jne 0x1052f41e */
  if (!C.zf) goto L_1052f41e;
  /* 1052f43c jmp 0x1052f447 */
  goto L_1052f447;
L_1052f43e:;
  /* 1052f43e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f441 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f444 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1052f447:;
  /* 1052f447 jmp 0x1052f3d4 */
  goto L_1052f3d4;
L_1052f449:;
  /* 1052f449 mov esp, ebp */
  ESP = (EBP);
  /* 1052f44b pop ebp */
  EBP = (pop32());
  /* 1052f44c ret  */
  ESPCHK(0x1052f3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f450 @ 0x1052f450 (147 bytes, 52 insns) */
void f_1052f450(void) {
  FTRACE(0x1052f450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f450 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f451 mov ebp, esp */
  EBP = (ESP);
  /* 1052f453 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f457 jne 0x1052f45e */
  if (!C.zf) goto L_1052f45e;
  /* 1052f459 jmp 0x1052f4e1 */
  goto L_1052f4e1;
L_1052f45e:;
  /* 1052f45e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f461 cmp dword ptr [eax + 0xc], 0x1054f7c8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x1054f7c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f468 je 0x1052f4e1 */
  if (C.zf) goto L_1052f4e1;
  /* 1052f46a push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f46c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f46f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1052f472 push edx */
  push32((uint32_t)(EDX));
  /* 1052f473 call 0x105246a0 */
  push32(0x1052f478u); f_105246a0();
  /* 1052f478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f47b push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f47d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f480 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1052f483 push ecx */
  push32((uint32_t)(ECX));
  /* 1052f484 call 0x105246a0 */
  push32(0x1052f489u); f_105246a0();
  /* 1052f489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f48c push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f48e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f491 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1052f494 push eax */
  push32((uint32_t)(EAX));
  /* 1052f495 call 0x105246a0 */
  push32(0x1052f49au); f_105246a0();
  /* 1052f49a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f49d push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f49f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f4a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1052f4a5 push edx */
  push32((uint32_t)(EDX));
  /* 1052f4a6 call 0x105246a0 */
  push32(0x1052f4abu); f_105246a0();
  /* 1052f4ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f4ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f4b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f4b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1052f4b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1052f4b7 call 0x105246a0 */
  push32(0x1052f4bcu); f_105246a0();
  /* 1052f4bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f4bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f4c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f4c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1052f4c7 push eax */
  push32((uint32_t)(EAX));
  /* 1052f4c8 call 0x105246a0 */
  push32(0x1052f4cdu); f_105246a0();
  /* 1052f4cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f4d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f4d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f4d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1052f4d8 push edx */
  push32((uint32_t)(EDX));
  /* 1052f4d9 call 0x105246a0 */
  push32(0x1052f4deu); f_105246a0();
  /* 1052f4de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052f4e1:;
  /* 1052f4e1 pop ebp */
  EBP = (pop32());
  /* 1052f4e2 ret  */
  ESPCHK(0x1052f450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4f0 @ 0x1052f4f0 (928 bytes, 284 insns) */
void f_1052f4f0(void) {
  FTRACE(0x1052f4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1052f4f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052f4f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1052f4fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1052f504 cmp dword ptr [0x1054f730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f50b je 0x1052f841 */
  if (C.zf) goto L_1052f841;
  /* 1052f511 cmp dword ptr [0x1054f740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f518 jne 0x1052f540 */
  if (!C.zf) goto L_1052f540;
  /* 1052f51a push 0x1054f740 */
  push32((uint32_t)(0x1054f740u));
  /* 1052f51f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1052f524 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f526 mov ax, word ptr [0x1054f784] */
  AX = (r16((uint32_t)(0x1054f784)));
  /* 1052f52c push eax */
  push32((uint32_t)(EAX));
  /* 1052f52d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f52f call 0x10531dd0 */
  push32(0x1052f534u); f_10531dd0();
  /* 1052f534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f537 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052f539 je 0x1052f540 */
  if (C.zf) goto L_1052f540;
  /* 1052f53b jmp 0x1052f802 */
  goto L_1052f802;
L_1052f540:;
  /* 1052f540 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1052f542 push 0x1054b1c4 */
  push32((uint32_t)(0x1054b1c4u));
  /* 1052f547 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f549 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1052f54e call 0x10523c10 */
  push32(0x1052f553u); f_10523c10();
  /* 1052f553 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f556 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1052f559 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1052f55b push 0x1054b1c4 */
  push32((uint32_t)(0x1054b1c4u));
  /* 1052f560 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f562 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1052f567 call 0x10523c10 */
  push32(0x1052f56cu); f_10523c10();
  /* 1052f56c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f56f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1052f572 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1052f574 push 0x1054b1c4 */
  push32((uint32_t)(0x1054b1c4u));
  /* 1052f579 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f57b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1052f580 call 0x10523c10 */
  push32(0x1052f585u); f_10523c10();
  /* 1052f585 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f588 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1052f58b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1052f58d push 0x1054b1c4 */
  push32((uint32_t)(0x1054b1c4u));
  /* 1052f592 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f594 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1052f599 call 0x10523c10 */
  push32(0x1052f59eu); f_10523c10();
  /* 1052f59e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f5a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1052f5a4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f5a8 je 0x1052f5bc */
  if (C.zf) goto L_1052f5bc;
  /* 1052f5aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f5ae je 0x1052f5bc */
  if (C.zf) goto L_1052f5bc;
  /* 1052f5b0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f5b4 je 0x1052f5bc */
  if (C.zf) goto L_1052f5bc;
  /* 1052f5b6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f5ba jne 0x1052f5c1 */
  if (!C.zf) goto L_1052f5c1;
L_1052f5bc:;
  /* 1052f5bc jmp 0x1052f802 */
  goto L_1052f802;
L_1052f5c1:;
  /* 1052f5c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052f5c4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1052f5c7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1052f5ce jmp 0x1052f5d9 */
  goto L_1052f5d9;
L_1052f5d0:;
  /* 1052f5d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052f5d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f5d6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1052f5d9:;
  /* 1052f5d9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f5e0 jge 0x1052f5f5 */
  if ((C.sf==C.of)) goto L_1052f5f5;
  /* 1052f5e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f5e5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1052f5e8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1052f5ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f5ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f5f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1052f5f3 jmp 0x1052f5d0 */
  goto L_1052f5d0;
L_1052f5f5:;
  /* 1052f5f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1052f5f8 push eax */
  push32((uint32_t)(EAX));
  /* 1052f5f9 mov ecx, dword ptr [0x1054f740] */
  ECX = (r32((uint32_t)(0x1054f740)));
  /* 1052f5ff push ecx */
  push32((uint32_t)(ECX));
  /* 1052f600 call dword ptr [0x10552308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552308))), 0x1052f606u);
  /* 1052f606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052f608 jne 0x1052f60f */
  if (!C.zf) goto L_1052f60f;
  /* 1052f60a jmp 0x1052f802 */
  goto L_1052f802;
L_1052f60f:;
  /* 1052f60f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f613 jbe 0x1052f61a */
  if ((C.cf||C.zf)) goto L_1052f61a;
  /* 1052f615 jmp 0x1052f802 */
  goto L_1052f802;
L_1052f61a:;
  /* 1052f61a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1052f61d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1052f623 mov dword ptr [0x1054dea4], edx */
  w32((uint32_t)(0x1054dea4), (EDX));
  /* 1052f629 cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f630 jle 0x1052f689 */
  if ((C.zf||C.sf!=C.of)) goto L_1052f689;
  /* 1052f632 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1052f635 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1052f638 jmp 0x1052f643 */
  goto L_1052f643;
L_1052f63a:;
  /* 1052f63a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f63d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f640 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1052f643:;
  /* 1052f643 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f648 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1052f64a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052f64c je 0x1052f689 */
  if (C.zf) goto L_1052f689;
  /* 1052f64e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f651 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052f653 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1052f656 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052f658 je 0x1052f689 */
  if (C.zf) goto L_1052f689;
  /* 1052f65a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f65d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f65f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1052f661 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1052f664 jmp 0x1052f66f */
  goto L_1052f66f;
L_1052f666:;
  /* 1052f666 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052f669 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f66c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1052f66f:;
  /* 1052f66f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f672 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f674 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1052f677 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f67a jg 0x1052f687 */
  if ((!C.zf&&C.sf==C.of)) goto L_1052f687;
  /* 1052f67c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052f67f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f682 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1052f685 jmp 0x1052f666 */
  goto L_1052f666;
L_1052f687:;
  /* 1052f687 jmp 0x1052f63a */
  goto L_1052f63a;
L_1052f689:;
  /* 1052f689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f68b push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f68d push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f68f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052f692 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f695 push eax */
  push32((uint32_t)(EAX));
  /* 1052f696 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052f69b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052f69e push ecx */
  push32((uint32_t)(ECX));
  /* 1052f69f push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f6a1 call 0x1052be40 */
  push32(0x1052f6a6u); f_1052be40();
  /* 1052f6a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f6a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052f6ab jne 0x1052f6b2 */
  if (!C.zf) goto L_1052f6b2;
  /* 1052f6ad jmp 0x1052f802 */
  goto L_1052f802;
L_1052f6b2:;
  /* 1052f6b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052f6b5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1052f6ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052f6bd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1052f6c0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1052f6c7 jmp 0x1052f6d2 */
  goto L_1052f6d2;
L_1052f6c9:;
  /* 1052f6c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052f6cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f6cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1052f6d2:;
  /* 1052f6d2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f6d9 jge 0x1052f6f0 */
  if ((C.sf==C.of)) goto L_1052f6f0;
  /* 1052f6db mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052f6de mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1052f6e2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1052f6e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1052f6e8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f6eb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1052f6ee jmp 0x1052f6c9 */
  goto L_1052f6c9;
L_1052f6f0:;
  /* 1052f6f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f6f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1052f6f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052f6f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f6fa push edx */
  push32((uint32_t)(EDX));
  /* 1052f6fb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1052f700 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052f703 push eax */
  push32((uint32_t)(EAX));
  /* 1052f704 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052f706 call 0x10532070 */
  push32(0x1052f70bu); f_10532070();
  /* 1052f70b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f70e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052f710 jne 0x1052f717 */
  if (!C.zf) goto L_1052f717;
  /* 1052f712 jmp 0x1052f802 */
  goto L_1052f802;
L_1052f717:;
  /* 1052f717 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052f71a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1052f71f cmp dword ptr [0x1054dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1054dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f726 jle 0x1052f783 */
  if ((C.zf||C.sf!=C.of)) goto L_1052f783;
  /* 1052f728 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1052f72b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1052f72e jmp 0x1052f739 */
  goto L_1052f739;
L_1052f730:;
  /* 1052f730 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f733 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f736 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1052f739:;
  /* 1052f739 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f73c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1052f73e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1052f740 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052f742 je 0x1052f783 */
  if (C.zf) goto L_1052f783;
  /* 1052f744 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f747 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f749 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1052f74c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052f74e je 0x1052f783 */
  if (C.zf) goto L_1052f783;
  /* 1052f750 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f755 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1052f757 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1052f75a jmp 0x1052f765 */
  goto L_1052f765;
L_1052f75c:;
  /* 1052f75c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052f75f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f762 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1052f765:;
  /* 1052f765 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1052f768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f76a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1052f76d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f770 jg 0x1052f781 */
  if ((!C.zf&&C.sf==C.of)) goto L_1052f781;
  /* 1052f772 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1052f775 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052f778 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1052f77f jmp 0x1052f75c */
  goto L_1052f75c;
L_1052f781:;
  /* 1052f781 jmp 0x1052f730 */
  goto L_1052f730;
L_1052f783:;
  /* 1052f783 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052f786 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f789 mov dword ptr [0x1054dc98], eax */
  w32((uint32_t)(0x1054dc98), (EAX));
  /* 1052f78e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052f791 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f794 mov dword ptr [0x1054dc9c], ecx */
  w32((uint32_t)(0x1054dc9c), (ECX));
  /* 1052f79a cmp dword ptr [0x1054f770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f7a1 je 0x1052f7b4 */
  if (C.zf) goto L_1052f7b4;
  /* 1052f7a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f7a5 mov edx, dword ptr [0x1054f770] */
  EDX = (r32((uint32_t)(0x1054f770)));
  /* 1052f7ab push edx */
  push32((uint32_t)(EDX));
  /* 1052f7ac call 0x105246a0 */
  push32(0x1052f7b1u); f_105246a0();
  /* 1052f7b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052f7b4:;
  /* 1052f7b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052f7b7 mov dword ptr [0x1054f770], eax */
  w32((uint32_t)(0x1054f770), (EAX));
  /* 1052f7bc cmp dword ptr [0x1054f774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f7c3 je 0x1052f7d6 */
  if (C.zf) goto L_1052f7d6;
  /* 1052f7c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f7c7 mov ecx, dword ptr [0x1054f774] */
  ECX = (r32((uint32_t)(0x1054f774)));
  /* 1052f7cd push ecx */
  push32((uint32_t)(ECX));
  /* 1052f7ce call 0x105246a0 */
  push32(0x1052f7d3u); f_105246a0();
  /* 1052f7d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052f7d6:;
  /* 1052f7d6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052f7d9 mov dword ptr [0x1054f774], edx */
  w32((uint32_t)(0x1054f774), (EDX));
  /* 1052f7df push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f7e1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052f7e4 push eax */
  push32((uint32_t)(EAX));
  /* 1052f7e5 call 0x105246a0 */
  push32(0x1052f7eau); f_105246a0();
  /* 1052f7ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f7ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f7ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052f7f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1052f7f3 call 0x105246a0 */
  push32(0x1052f7f8u); f_105246a0();
  /* 1052f7f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f7fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f7fd jmp 0x1052f88c */
  goto L_1052f88c;
L_1052f802:;
  /* 1052f802 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f804 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1052f807 push edx */
  push32((uint32_t)(EDX));
  /* 1052f808 call 0x105246a0 */
  push32(0x1052f80du); f_105246a0();
  /* 1052f80d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f810 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f812 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1052f815 push eax */
  push32((uint32_t)(EAX));
  /* 1052f816 call 0x105246a0 */
  push32(0x1052f81bu); f_105246a0();
  /* 1052f81b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f81e push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f820 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1052f823 push ecx */
  push32((uint32_t)(ECX));
  /* 1052f824 call 0x105246a0 */
  push32(0x1052f829u); f_105246a0();
  /* 1052f829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f82c push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f82e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1052f831 push edx */
  push32((uint32_t)(EDX));
  /* 1052f832 call 0x105246a0 */
  push32(0x1052f837u); f_105246a0();
  /* 1052f837 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f83a mov eax, 1 */
  EAX = (0x1u);
  /* 1052f83f jmp 0x1052f88c */
  goto L_1052f88c;
L_1052f841:;
  /* 1052f841 mov dword ptr [0x1054dc98], 0x1054dca2 */
  w32((uint32_t)(0x1054dc98), (0x1054dca2u));
  /* 1052f84b mov dword ptr [0x1054dc9c], 0x1054dca2 */
  w32((uint32_t)(0x1054dc9c), (0x1054dca2u));
  /* 1052f855 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f857 mov eax, dword ptr [0x1054f770] */
  EAX = (r32((uint32_t)(0x1054f770)));
  /* 1052f85c push eax */
  push32((uint32_t)(EAX));
  /* 1052f85d call 0x105246a0 */
  push32(0x1052f862u); f_105246a0();
  /* 1052f862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f865 push 2 */
  push32((uint32_t)(0x2u));
  /* 1052f867 mov ecx, dword ptr [0x1054f774] */
  ECX = (r32((uint32_t)(0x1054f774)));
  /* 1052f86d push ecx */
  push32((uint32_t)(ECX));
  /* 1052f86e call 0x105246a0 */
  push32(0x1052f873u); f_105246a0();
  /* 1052f873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f876 mov dword ptr [0x1054f770], 0 */
  w32((uint32_t)(0x1054f770), (0x0u));
  /* 1052f880 mov dword ptr [0x1054f774], 0 */
  w32((uint32_t)(0x1054f774), (0x0u));
  /* 1052f88a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1052f88c:;
  /* 1052f88c mov esp, ebp */
  ESP = (EBP);
  /* 1052f88e pop ebp */
  EBP = (pop32());
  /* 1052f88f ret  */
  ESPCHK(0x1052f4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x1052f890 (7 bytes, 5 insns) */
void f_1052f890(void) {
  FTRACE(0x1052f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f891 mov ebp, esp */
  EBP = (ESP);
  /* 1052f893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f895 pop ebp */
  EBP = (pop32());
  /* 1052f896 ret  */
  ESPCHK(0x1052f890u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1052f8a0 (129 bytes, 56 insns) */
void f_1052f8a0(void) {
  FTRACE(0x1052f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f8a0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1052f8a4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1052f8a8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1052f8ae jne 0x1052f8ec */
  if (!C.zf) goto L_1052f8ec;
L_1052f8b0:;
  /* 1052f8b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1052f8b2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1052f8b4 jne 0x1052f8e4 */
  if (!C.zf) goto L_1052f8e4;
  /* 1052f8b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1052f8b8 je 0x1052f8e0 */
  if (C.zf) goto L_1052f8e0;
  /* 1052f8ba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1052f8bd jne 0x1052f8e4 */
  if (!C.zf) goto L_1052f8e4;
  /* 1052f8bf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1052f8c1 je 0x1052f8e0 */
  if (C.zf) goto L_1052f8e0;
  /* 1052f8c3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1052f8c6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1052f8c9 jne 0x1052f8e4 */
  if (!C.zf) goto L_1052f8e4;
  /* 1052f8cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1052f8cd je 0x1052f8e0 */
  if (C.zf) goto L_1052f8e0;
  /* 1052f8cf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1052f8d2 jne 0x1052f8e4 */
  if (!C.zf) goto L_1052f8e4;
  /* 1052f8d4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f8d7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f8da or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1052f8dc jne 0x1052f8b0 */
  if (!C.zf) goto L_1052f8b0;
  /* 1052f8de mov edi, edi */
  EDI = (EDI);
L_1052f8e0:;
  /* 1052f8e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f8e2 ret  */
  ESPCHK(0x1052f8a0u, _esp0);
  ESP += 4; return;
  /* 1052f8e3 nop  */
  /* nop */
L_1052f8e4:;
  /* 1052f8e4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052f8e6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1052f8e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1052f8e9 ret  */
  ESPCHK(0x1052f8a0u, _esp0);
  ESP += 4; return;
  /* 1052f8ea mov edi, edi */
  EDI = (EDI);
L_1052f8ec:;
  /* 1052f8ec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1052f8f2 je 0x1052f908 */
  if (C.zf) goto L_1052f908;
  /* 1052f8f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1052f8f6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1052f8f7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1052f8f9 jne 0x1052f8e4 */
  if (!C.zf) goto L_1052f8e4;
  /* 1052f8fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1052f8fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1052f8fe je 0x1052f8e0 */
  if (C.zf) goto L_1052f8e0;
  /* 1052f900 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1052f906 je 0x1052f8b0 */
  if (C.zf) goto L_1052f8b0;
L_1052f908:;
  /* 1052f908 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1052f90b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f90e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1052f910 jne 0x1052f8e4 */
  if (!C.zf) goto L_1052f8e4;
  /* 1052f912 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1052f914 je 0x1052f8e0 */
  if (C.zf) goto L_1052f8e0;
  /* 1052f916 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1052f919 jne 0x1052f8e4 */
  if (!C.zf) goto L_1052f8e4;
  /* 1052f91b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1052f91d je 0x1052f8e0 */
  if (C.zf) goto L_1052f8e0;
  /* 1052f91f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f922 jmp 0x1052f8b0 */
  goto L_1052f8b0;
}

/* FUN_1000f930 @ 0x1052f930 (62 bytes, 35 insns) */
void f_1052f930(void) {
  FTRACE(0x1052f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f930 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f931 mov ebp, esp */
  EBP = (ESP);
  /* 1052f933 push esi */
  push32((uint32_t)(ESI));
  /* 1052f934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f936 push eax */
  push32((uint32_t)(EAX));
  /* 1052f937 push eax */
  push32((uint32_t)(EAX));
  /* 1052f938 push eax */
  push32((uint32_t)(EAX));
  /* 1052f939 push eax */
  push32((uint32_t)(EAX));
  /* 1052f93a push eax */
  push32((uint32_t)(EAX));
  /* 1052f93b push eax */
  push32((uint32_t)(EAX));
  /* 1052f93c push eax */
  push32((uint32_t)(EAX));
  /* 1052f93d push eax */
  push32((uint32_t)(EAX));
  /* 1052f93e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052f941 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052f944:;
  /* 1052f944 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1052f946 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1052f948 je 0x1052f951 */
  if (C.zf) goto L_1052f951;
  /* 1052f94a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1052f94b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1052f94b");
  /* 1052f94f jmp 0x1052f944 */
  goto L_1052f944;
L_1052f951:;
  /* 1052f951 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f954 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1052f957 nop  */
  /* nop */
L_1052f958:;
  /* 1052f958 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1052f959 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052f95b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1052f95d je 0x1052f966 */
  if (C.zf) goto L_1052f966;
  /* 1052f95f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1052f960 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1052f960");
  /* 1052f964 jae 0x1052f958 */
  if (!C.cf) goto L_1052f958;
L_1052f966:;
  /* 1052f966 mov eax, ecx */
  EAX = (ECX);
  /* 1052f968 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f96b pop esi */
  ESI = (pop32());
  /* 1052f96c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052f96d ret  */
  ESPCHK(0x1052f930u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1052f970 (56 bytes, 31 insns) */
void f_1052f970(void) {
  FTRACE(0x1052f970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f970 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f971 mov ebp, esp */
  EBP = (ESP);
  /* 1052f973 push edi */
  push32((uint32_t)(EDI));
  /* 1052f974 push esi */
  push32((uint32_t)(ESI));
  /* 1052f975 push ebx */
  push32((uint32_t)(EBX));
  /* 1052f976 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052f979 jecxz 0x1052f9a1 */
  x86_unimpl("jecxz @ 0x1052f979");
  /* 1052f97b mov ebx, ecx */
  EBX = (ECX);
  /* 1052f97d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1052f980 mov esi, edi */
  ESI = (EDI);
  /* 1052f982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f984 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1052f986 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052f988 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f98a mov edi, esi */
  EDI = (ESI);
  /* 1052f98c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1052f98f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1052f991 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1052f994 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052f996 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1052f999 ja 0x1052f99f */
  if ((!C.cf&&!C.zf)) goto L_1052f99f;
  /* 1052f99b je 0x1052f9a1 */
  if (C.zf) goto L_1052f9a1;
  /* 1052f99d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1052f99e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1052f99f:;
  /* 1052f99f not ecx */
  ECX = (~(ECX));
L_1052f9a1:;
  /* 1052f9a1 mov eax, ecx */
  EAX = (ECX);
  /* 1052f9a3 pop ebx */
  EBX = (pop32());
  /* 1052f9a4 pop esi */
  ESI = (pop32());
  /* 1052f9a5 pop edi */
  EDI = (pop32());
  /* 1052f9a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052f9a7 ret  */
  ESPCHK(0x1052f970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9b0 @ 0x1052f9b0 (58 bytes, 32 insns) */
void f_1052f9b0(void) {
  FTRACE(0x1052f9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1052f9b3 push esi */
  push32((uint32_t)(ESI));
  /* 1052f9b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052f9b6 push eax */
  push32((uint32_t)(EAX));
  /* 1052f9b7 push eax */
  push32((uint32_t)(EAX));
  /* 1052f9b8 push eax */
  push32((uint32_t)(EAX));
  /* 1052f9b9 push eax */
  push32((uint32_t)(EAX));
  /* 1052f9ba push eax */
  push32((uint32_t)(EAX));
  /* 1052f9bb push eax */
  push32((uint32_t)(EAX));
  /* 1052f9bc push eax */
  push32((uint32_t)(EAX));
  /* 1052f9bd push eax */
  push32((uint32_t)(EAX));
  /* 1052f9be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052f9c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1052f9c4:;
  /* 1052f9c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1052f9c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1052f9c8 je 0x1052f9d1 */
  if (C.zf) goto L_1052f9d1;
  /* 1052f9ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1052f9cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1052f9cb");
  /* 1052f9cf jmp 0x1052f9c4 */
  goto L_1052f9c4;
L_1052f9d1:;
  /* 1052f9d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1052f9d4:;
  /* 1052f9d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1052f9d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1052f9d8 je 0x1052f9e4 */
  if (C.zf) goto L_1052f9e4;
  /* 1052f9da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1052f9db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1052f9db");
  /* 1052f9df jae 0x1052f9d4 */
  if (!C.cf) goto L_1052f9d4;
  /* 1052f9e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1052f9e4:;
  /* 1052f9e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052f9e7 pop esi */
  ESI = (pop32());
  /* 1052f9e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1052f9e9 ret  */
  ESPCHK(0x1052f9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x1052f9f0 (512 bytes, 147 insns) */
void f_1052f9f0(void) {
  FTRACE(0x1052f9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052f9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052f9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1052f9f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052f9f6 cmp dword ptr [0x1054f7bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052f9fd jne 0x1052fa22 */
  if (!C.zf) goto L_1052fa22;
  /* 1052f9ff call 0x105304c0 */
  push32(0x1052fa04u); f_105304c0();
  /* 1052fa04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fa06 je 0x1052fa12 */
  if (C.zf) goto L_1052fa12;
  /* 1052fa08 mov eax, dword ptr [0x105522cc] */
  EAX = (r32((uint32_t)(0x105522cc)));
  /* 1052fa0d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052fa10 jmp 0x1052fa19 */
  goto L_1052fa19;
L_1052fa12:;
  /* 1052fa12 mov dword ptr [ebp - 8], 0x10530510 */
  w32((uint32_t)(EBP + -0x8), (0x10530510u));
L_1052fa19:;
  /* 1052fa19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1052fa1c mov dword ptr [0x1054f7bc], ecx */
  w32((uint32_t)(0x1054f7bc), (ECX));
L_1052fa22:;
  /* 1052fa22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fa26 jne 0x1052fa32 */
  if (!C.zf) goto L_1052fa32;
  /* 1052fa28 call 0x10530310 */
  push32(0x1052fa2du); f_10530310();
  /* 1052fa2d jmp 0x1052fafe */
  goto L_1052fafe;
L_1052fa32:;
  /* 1052fa32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052fa35 mov dword ptr [0x1054f7ac], edx */
  w32((uint32_t)(0x1054f7ac), (EDX));
  /* 1052fa3b cmp dword ptr [0x1054f7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fa42 je 0x1052fa64 */
  if (C.zf) goto L_1052fa64;
  /* 1052fa44 mov eax, dword ptr [0x1054f7ac] */
  EAX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052fa49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052fa4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052fa4e je 0x1052fa64 */
  if (C.zf) goto L_1052fa64;
  /* 1052fa50 push 0x1054f7ac */
  push32((uint32_t)(0x1054f7acu));
  /* 1052fa55 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1052fa57 push 0x1054ea90 */
  push32((uint32_t)(0x1054ea90u));
  /* 1052fa5c call 0x1052fbf0 */
  push32(0x1052fa61u); f_1052fbf0();
  /* 1052fa61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052fa64:;
  /* 1052fa64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052fa67 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fa6a mov dword ptr [0x1054f7b0], edx */
  w32((uint32_t)(0x1054f7b0), (EDX));
  /* 1052fa70 cmp dword ptr [0x1054f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fa77 je 0x1052fa99 */
  if (C.zf) goto L_1052fa99;
  /* 1052fa79 mov eax, dword ptr [0x1054f7b0] */
  EAX = (r32((uint32_t)(0x1054f7b0)));
  /* 1052fa7e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052fa81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052fa83 je 0x1052fa99 */
  if (C.zf) goto L_1052fa99;
  /* 1052fa85 push 0x1054f7b0 */
  push32((uint32_t)(0x1054f7b0u));
  /* 1052fa8a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1052fa8c push 0x1054e9d8 */
  push32((uint32_t)(0x1054e9d8u));
  /* 1052fa91 call 0x1052fbf0 */
  push32(0x1052fa96u); f_1052fbf0();
  /* 1052fa96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052fa99:;
  /* 1052fa99 mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
  /* 1052faa3 cmp dword ptr [0x1054f7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052faaa je 0x1052fadd */
  if (C.zf) goto L_1052fadd;
  /* 1052faac mov edx, dword ptr [0x1054f7ac] */
  EDX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052fab2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1052fab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fab7 je 0x1052fadd */
  if (C.zf) goto L_1052fadd;
  /* 1052fab9 cmp dword ptr [0x1054f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fac0 je 0x1052fad6 */
  if (C.zf) goto L_1052fad6;
  /* 1052fac2 mov ecx, dword ptr [0x1054f7b0] */
  ECX = (r32((uint32_t)(0x1054f7b0)));
  /* 1052fac8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1052facb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052facd je 0x1052fad6 */
  if (C.zf) goto L_1052fad6;
  /* 1052facf call 0x1052fc80 */
  push32(0x1052fad4u); f_1052fc80();
  /* 1052fad4 jmp 0x1052fadb */
  goto L_1052fadb;
L_1052fad6:;
  /* 1052fad6 call 0x10530070 */
  push32(0x1052fadbu); f_10530070();
L_1052fadb:;
  /* 1052fadb jmp 0x1052fafe */
  goto L_1052fafe;
L_1052fadd:;
  /* 1052fadd cmp dword ptr [0x1054f7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fae4 je 0x1052faf9 */
  if (C.zf) goto L_1052faf9;
  /* 1052fae6 mov eax, dword ptr [0x1054f7b0] */
  EAX = (r32((uint32_t)(0x1054f7b0)));
  /* 1052faeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1052faee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052faf0 je 0x1052faf9 */
  if (C.zf) goto L_1052faf9;
  /* 1052faf2 call 0x10530210 */
  push32(0x1052faf7u); f_10530210();
  /* 1052faf7 jmp 0x1052fafe */
  goto L_1052fafe;
L_1052faf9:;
  /* 1052faf9 call 0x10530310 */
  push32(0x1052fafeu); f_10530310();
L_1052fafe:;
  /* 1052fafe cmp dword ptr [0x1054f7b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fb05 jne 0x1052fb0e */
  if (!C.zf) goto L_1052fb0e;
  /* 1052fb07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052fb09 jmp 0x1052fbec */
  goto L_1052fbec;
L_1052fb0e:;
  /* 1052fb0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052fb11 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fb17 push edx */
  push32((uint32_t)(EDX));
  /* 1052fb18 call 0x10530340 */
  push32(0x1052fb1du); f_10530340();
  /* 1052fb1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fb20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052fb23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fb27 je 0x1052fb3c */
  if (C.zf) goto L_1052fb3c;
  /* 1052fb29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052fb2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1052fb31 push eax */
  push32((uint32_t)(EAX));
  /* 1052fb32 call dword ptr [0x105522d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522d0))), 0x1052fb38u);
  /* 1052fb38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fb3a jne 0x1052fb43 */
  if (!C.zf) goto L_1052fb43;
L_1052fb3c:;
  /* 1052fb3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052fb3e jmp 0x1052fbec */
  goto L_1052fbec;
L_1052fb43:;
  /* 1052fb43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052fb45 mov ecx, dword ptr [0x1054f79c] */
  ECX = (r32((uint32_t)(0x1054f79c)));
  /* 1052fb4b push ecx */
  push32((uint32_t)(ECX));
  /* 1052fb4c call dword ptr [0x105522e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522e0))), 0x1052fb52u);
  /* 1052fb52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fb54 jne 0x1052fb5d */
  if (!C.zf) goto L_1052fb5d;
  /* 1052fb56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052fb58 jmp 0x1052fbec */
  goto L_1052fbec;
L_1052fb5d:;
  /* 1052fb5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fb61 je 0x1052fb88 */
  if (C.zf) goto L_1052fb88;
  /* 1052fb63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052fb66 mov ax, word ptr [0x1054f79c] */
  AX = (r16((uint32_t)(0x1054f79c)));
  /* 1052fb6c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1052fb6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052fb72 mov dx, word ptr [0x1054f7b8] */
  DX = (r16((uint32_t)(0x1054f7b8)));
  /* 1052fb79 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1052fb7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1052fb80 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1052fb84 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1052fb88:;
  /* 1052fb88 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fb8c je 0x1052fbe7 */
  if (C.zf) goto L_1052fbe7;
  /* 1052fb8e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1052fb90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052fb93 push edx */
  push32((uint32_t)(EDX));
  /* 1052fb94 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1052fb99 mov eax, dword ptr [0x1054f79c] */
  EAX = (r32((uint32_t)(0x1054f79c)));
  /* 1052fb9e push eax */
  push32((uint32_t)(EAX));
  /* 1052fb9f call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x1052fba5u);
  /* 1052fba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fba7 jne 0x1052fbad */
  if (!C.zf) goto L_1052fbad;
  /* 1052fba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052fbab jmp 0x1052fbec */
  goto L_1052fbec;
L_1052fbad:;
  /* 1052fbad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1052fbaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052fbb2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fbb5 push ecx */
  push32((uint32_t)(ECX));
  /* 1052fbb6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1052fbbb mov edx, dword ptr [0x1054f7b8] */
  EDX = (r32((uint32_t)(0x1054f7b8)));
  /* 1052fbc1 push edx */
  push32((uint32_t)(EDX));
  /* 1052fbc2 call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x1052fbc8u);
  /* 1052fbc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fbca jne 0x1052fbd0 */
  if (!C.zf) goto L_1052fbd0;
  /* 1052fbcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1052fbce jmp 0x1052fbec */
  goto L_1052fbec;
L_1052fbd0:;
  /* 1052fbd0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1052fbd2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052fbd5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fbda push eax */
  push32((uint32_t)(EAX));
  /* 1052fbdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052fbde push ecx */
  push32((uint32_t)(ECX));
  /* 1052fbdf call 0x10526750 */
  push32(0x1052fbe4u); f_10526750();
  /* 1052fbe4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1052fbe7:;
  /* 1052fbe7 mov eax, 1 */
  EAX = (0x1u);
L_1052fbec:;
  /* 1052fbec mov esp, ebp */
  ESP = (EBP);
  /* 1052fbee pop ebp */
  EBP = (pop32());
  /* 1052fbef ret  */
  ESPCHK(0x1052f9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbf0 @ 0x1052fbf0 (130 bytes, 47 insns) */
void f_1052fbf0(void) {
  FTRACE(0x1052fbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052fbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1052fbf1 mov ebp, esp */
  EBP = (ESP);
  /* 1052fbf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052fbf6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1052fbfd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1052fc04:;
  /* 1052fc04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052fc07 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fc0a jg 0x1052fc6e */
  if ((!C.zf&&C.sf==C.of)) goto L_1052fc6e;
  /* 1052fc0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fc10 je 0x1052fc6e */
  if (C.zf) goto L_1052fc6e;
  /* 1052fc12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1052fc15 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fc18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1052fc19 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052fc1b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1052fc1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1052fc20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052fc23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052fc26 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1052fc29 push eax */
  push32((uint32_t)(EAX));
  /* 1052fc2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052fc2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1052fc2f push edx */
  push32((uint32_t)(EDX));
  /* 1052fc30 call 0x105322e0 */
  push32(0x1052fc35u); f_105322e0();
  /* 1052fc35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fc38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1052fc3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fc3f jne 0x1052fc52 */
  if (!C.zf) goto L_1052fc52;
  /* 1052fc41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052fc44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052fc47 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1052fc4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1052fc4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1052fc50 jmp 0x1052fc6c */
  goto L_1052fc6c;
L_1052fc52:;
  /* 1052fc52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fc56 jge 0x1052fc63 */
  if ((C.sf==C.of)) goto L_1052fc63;
  /* 1052fc58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052fc5b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052fc5e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1052fc61 jmp 0x1052fc6c */
  goto L_1052fc6c;
L_1052fc63:;
  /* 1052fc63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052fc66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fc69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1052fc6c:;
  /* 1052fc6c jmp 0x1052fc04 */
  goto L_1052fc04;
L_1052fc6e:;
  /* 1052fc6e mov esp, ebp */
  ESP = (EBP);
  /* 1052fc70 pop ebp */
  EBP = (pop32());
  /* 1052fc71 ret  */
  ESPCHK(0x1052fbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc80 @ 0x1052fc80 (186 bytes, 50 insns) */
void f_1052fc80(void) {
  FTRACE(0x1052fc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052fc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1052fc81 mov ebp, esp */
  EBP = (ESP);
  /* 1052fc83 push ecx */
  push32((uint32_t)(ECX));
  /* 1052fc84 mov eax, dword ptr [0x1054f7ac] */
  EAX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052fc89 push eax */
  push32((uint32_t)(EAX));
  /* 1052fc8a call 0x10526a40 */
  push32(0x1052fc8fu); f_10526a40();
  /* 1052fc8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fc92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052fc94 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fc97 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1052fc9a mov dword ptr [0x1054f7a8], ecx */
  w32((uint32_t)(0x1054f7a8), (ECX));
  /* 1052fca0 mov edx, dword ptr [0x1054f7b0] */
  EDX = (r32((uint32_t)(0x1054f7b0)));
  /* 1052fca6 push edx */
  push32((uint32_t)(EDX));
  /* 1052fca7 call 0x10526a40 */
  push32(0x1052fcacu); f_10526a40();
  /* 1052fcac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fcaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1052fcb1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fcb4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1052fcb7 mov dword ptr [0x1054f7a0], ecx */
  w32((uint32_t)(0x1054f7a0), (ECX));
  /* 1052fcbd mov dword ptr [0x1054f79c], 0 */
  w32((uint32_t)(0x1054f79c), (0x0u));
  /* 1052fcc7 cmp dword ptr [0x1054f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fcce je 0x1052fcd9 */
  if (C.zf) goto L_1052fcd9;
  /* 1052fcd0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1052fcd7 jmp 0x1052fceb */
  goto L_1052fceb;
L_1052fcd9:;
  /* 1052fcd9 mov edx, dword ptr [0x1054f7ac] */
  EDX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052fcdf push edx */
  push32((uint32_t)(EDX));
  /* 1052fce0 call 0x10530720 */
  push32(0x1052fce5u); f_10530720();
  /* 1052fce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fce8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1052fceb:;
  /* 1052fceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1052fcee mov dword ptr [0x1054f7a4], eax */
  w32((uint32_t)(0x1054f7a4), (EAX));
  /* 1052fcf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1052fcf5 push 0x1052fd40 */
  push32((uint32_t)(0x1052fd40u));
  /* 1052fcfa call dword ptr [0x105522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522d4))), 0x1052fd00u);
  /* 1052fd00 mov ecx, dword ptr [0x1054f7b4] */
  ECX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052fd06 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1052fd0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052fd0e je 0x1052fd2c */
  if (C.zf) goto L_1052fd2c;
  /* 1052fd10 mov edx, dword ptr [0x1054f7b4] */
  EDX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052fd16 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1052fd1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052fd1e je 0x1052fd2c */
  if (C.zf) goto L_1052fd2c;
  /* 1052fd20 mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052fd25 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1052fd28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fd2a jne 0x1052fd36 */
  if (!C.zf) goto L_1052fd36;
L_1052fd2c:;
  /* 1052fd2c mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
L_1052fd36:;
  /* 1052fd36 mov esp, ebp */
  ESP = (EBP);
  /* 1052fd38 pop ebp */
  EBP = (pop32());
  /* 1052fd39 ret  */
  ESPCHK(0x1052fc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd40 @ 0x1052fd40 (804 bytes, 220 insns) */
void f_1052fd40(void) {
  FTRACE(0x1052fd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1052fd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1052fd41 mov ebp, esp */
  EBP = (ESP);
  /* 1052fd43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052fd46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1052fd49 push eax */
  push32((uint32_t)(EAX));
  /* 1052fd4a call 0x105306a0 */
  push32(0x1052fd4fu); f_105306a0();
  /* 1052fd4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fd52 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1052fd55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1052fd57 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1052fd5a push ecx */
  push32((uint32_t)(ECX));
  /* 1052fd5b mov edx, dword ptr [0x1054f7a0] */
  EDX = (r32((uint32_t)(0x1054f7a0)));
  /* 1052fd61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052fd63 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052fd65 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1052fd6b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fd71 push edx */
  push32((uint32_t)(EDX));
  /* 1052fd72 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052fd75 push eax */
  push32((uint32_t)(EAX));
  /* 1052fd76 call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x1052fd7cu);
  /* 1052fd7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fd7e jne 0x1052fd94 */
  if (!C.zf) goto L_1052fd94;
  /* 1052fd80 mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
  /* 1052fd8a mov eax, 1 */
  EAX = (0x1u);
  /* 1052fd8f jmp 0x1053005e */
  goto L_1053005e;
L_1052fd94:;
  /* 1052fd94 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1052fd97 push ecx */
  push32((uint32_t)(ECX));
  /* 1052fd98 mov edx, dword ptr [0x1054f7b0] */
  EDX = (r32((uint32_t)(0x1054f7b0)));
  /* 1052fd9e push edx */
  push32((uint32_t)(EDX));
  /* 1052fd9f call 0x105322e0 */
  push32(0x1052fda4u); f_105322e0();
  /* 1052fda4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fda7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fda9 jne 0x1052fecf */
  if (!C.zf) goto L_1052fecf;
  /* 1052fdaf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1052fdb1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1052fdb4 push eax */
  push32((uint32_t)(EAX));
  /* 1052fdb5 mov ecx, dword ptr [0x1054f7a8] */
  ECX = (r32((uint32_t)(0x1054f7a8)));
  /* 1052fdbb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052fdbd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052fdbf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1052fdc5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fdcb push ecx */
  push32((uint32_t)(ECX));
  /* 1052fdcc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052fdcf push edx */
  push32((uint32_t)(EDX));
  /* 1052fdd0 call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x1052fdd6u);
  /* 1052fdd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fdd8 jne 0x1052fdee */
  if (!C.zf) goto L_1052fdee;
  /* 1052fdda mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
  /* 1052fde4 mov eax, 1 */
  EAX = (0x1u);
  /* 1052fde9 jmp 0x1053005e */
  goto L_1053005e;
L_1052fdee:;
  /* 1052fdee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1052fdf1 push eax */
  push32((uint32_t)(EAX));
  /* 1052fdf2 mov ecx, dword ptr [0x1054f7ac] */
  ECX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052fdf8 push ecx */
  push32((uint32_t)(ECX));
  /* 1052fdf9 call 0x105322e0 */
  push32(0x1052fdfeu); f_105322e0();
  /* 1052fdfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fe01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fe03 jne 0x1052fe30 */
  if (!C.zf) goto L_1052fe30;
  /* 1052fe05 mov edx, dword ptr [0x1054f7b4] */
  EDX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052fe0b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1052fe11 mov dword ptr [0x1054f7b4], edx */
  w32((uint32_t)(0x1054f7b4), (EDX));
  /* 1052fe17 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052fe1a mov dword ptr [0x1054f7b8], eax */
  w32((uint32_t)(0x1054f7b8), (EAX));
  /* 1052fe1f mov ecx, dword ptr [0x1054f7b8] */
  ECX = (r32((uint32_t)(0x1054f7b8)));
  /* 1052fe25 mov dword ptr [0x1054f79c], ecx */
  w32((uint32_t)(0x1054f79c), (ECX));
  /* 1052fe2b jmp 0x1052fecf */
  goto L_1052fecf;
L_1052fe30:;
  /* 1052fe30 mov edx, dword ptr [0x1054f7b4] */
  EDX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052fe36 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1052fe39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1052fe3b jne 0x1052fecf */
  if (!C.zf) goto L_1052fecf;
  /* 1052fe41 cmp dword ptr [0x1054f7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fe48 je 0x1052fe9d */
  if (C.zf) goto L_1052fe9d;
  /* 1052fe4a mov eax, dword ptr [0x1054f7a4] */
  EAX = (r32((uint32_t)(0x1054f7a4)));
  /* 1052fe4f push eax */
  push32((uint32_t)(EAX));
  /* 1052fe50 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1052fe53 push ecx */
  push32((uint32_t)(ECX));
  /* 1052fe54 mov edx, dword ptr [0x1054f7ac] */
  EDX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052fe5a push edx */
  push32((uint32_t)(EDX));
  /* 1052fe5b call 0x105323b0 */
  push32(0x1052fe60u); f_105323b0();
  /* 1052fe60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fe63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052fe65 jne 0x1052fe9d */
  if (!C.zf) goto L_1052fe9d;
  /* 1052fe67 mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052fe6c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1052fe6e mov dword ptr [0x1054f7b4], eax */
  w32((uint32_t)(0x1054f7b4), (EAX));
  /* 1052fe73 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052fe76 mov dword ptr [0x1054f7b8], ecx */
  w32((uint32_t)(0x1054f7b8), (ECX));
  /* 1052fe7c mov edx, dword ptr [0x1054f7ac] */
  EDX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052fe82 push edx */
  push32((uint32_t)(EDX));
  /* 1052fe83 call 0x10526a40 */
  push32(0x1052fe88u); f_10526a40();
  /* 1052fe88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052fe8b cmp eax, dword ptr [0x1054f7a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054f7a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fe91 jne 0x1052fe9b */
  if (!C.zf) goto L_1052fe9b;
  /* 1052fe93 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052fe96 mov dword ptr [0x1054f79c], eax */
  w32((uint32_t)(0x1054f79c), (EAX));
L_1052fe9b:;
  /* 1052fe9b jmp 0x1052fecf */
  goto L_1052fecf;
L_1052fe9d:;
  /* 1052fe9d mov ecx, dword ptr [0x1054f7b4] */
  ECX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052fea3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1052fea6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1052fea8 jne 0x1052fecf */
  if (!C.zf) goto L_1052fecf;
  /* 1052feaa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052fead push edx */
  push32((uint32_t)(EDX));
  /* 1052feae call 0x105303e0 */
  push32(0x1052feb3u); f_105303e0();
  /* 1052feb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052feb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052feb8 je 0x1052fecf */
  if (C.zf) goto L_1052fecf;
  /* 1052feba mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052febf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1052fec1 mov dword ptr [0x1054f7b4], eax */
  w32((uint32_t)(0x1054f7b4), (EAX));
  /* 1052fec6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052fec9 mov dword ptr [0x1054f7b8], ecx */
  w32((uint32_t)(0x1054f7b8), (ECX));
L_1052fecf:;
  /* 1052fecf mov edx, dword ptr [0x1054f7b4] */
  EDX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052fed5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1052fedb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fee1 je 0x10530051 */
  if (C.zf) goto L_10530051;
  /* 1052fee7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1052fee9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1052feec push eax */
  push32((uint32_t)(EAX));
  /* 1052feed mov ecx, dword ptr [0x1054f7a8] */
  ECX = (r32((uint32_t)(0x1054f7a8)));
  /* 1052fef3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1052fef5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1052fef7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1052fefd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ff03 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ff04 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052ff07 push edx */
  push32((uint32_t)(EDX));
  /* 1052ff08 call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x1052ff0eu);
  /* 1052ff0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052ff10 jne 0x1052ff26 */
  if (!C.zf) goto L_1052ff26;
  /* 1052ff12 mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
  /* 1052ff1c mov eax, 1 */
  EAX = (0x1u);
  /* 1052ff21 jmp 0x1053005e */
  goto L_1053005e;
L_1052ff26:;
  /* 1052ff26 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1052ff29 push eax */
  push32((uint32_t)(EAX));
  /* 1052ff2a mov ecx, dword ptr [0x1054f7ac] */
  ECX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052ff30 push ecx */
  push32((uint32_t)(ECX));
  /* 1052ff31 call 0x105322e0 */
  push32(0x1052ff36u); f_105322e0();
  /* 1052ff36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ff39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052ff3b jne 0x1052fff0 */
  if (!C.zf) goto L_1052fff0;
  /* 1052ff41 mov edx, dword ptr [0x1054f7b4] */
  EDX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052ff47 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1052ff4a mov dword ptr [0x1054f7b4], edx */
  w32((uint32_t)(0x1054f7b4), (EDX));
  /* 1052ff50 cmp dword ptr [0x1054f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ff57 je 0x1052ff7a */
  if (C.zf) goto L_1052ff7a;
  /* 1052ff59 mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052ff5e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1052ff61 mov dword ptr [0x1054f7b4], eax */
  w32((uint32_t)(0x1054f7b4), (EAX));
  /* 1052ff66 cmp dword ptr [0x1054f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ff6d jne 0x1052ff78 */
  if (!C.zf) goto L_1052ff78;
  /* 1052ff6f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052ff72 mov dword ptr [0x1054f79c], ecx */
  w32((uint32_t)(0x1054f79c), (ECX));
L_1052ff78:;
  /* 1052ff78 jmp 0x1052ffee */
  goto L_1052ffee;
L_1052ff7a:;
  /* 1052ff7a cmp dword ptr [0x1054f7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ff81 je 0x1052ffcf */
  if (C.zf) goto L_1052ffcf;
  /* 1052ff83 mov edx, dword ptr [0x1054f7ac] */
  EDX = (r32((uint32_t)(0x1054f7ac)));
  /* 1052ff89 push edx */
  push32((uint32_t)(EDX));
  /* 1052ff8a call 0x10526a40 */
  push32(0x1052ff8fu); f_10526a40();
  /* 1052ff8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ff92 cmp eax, dword ptr [0x1054f7a4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1054f7a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ff98 jne 0x1052ffcf */
  if (!C.zf) goto L_1052ffcf;
  /* 1052ff9a push 1 */
  push32((uint32_t)(0x1u));
  /* 1052ff9c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052ff9f push eax */
  push32((uint32_t)(EAX));
  /* 1052ffa0 call 0x10530430 */
  push32(0x1052ffa5u); f_10530430();
  /* 1052ffa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1052ffa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1052ffaa je 0x1052ffcd */
  if (C.zf) goto L_1052ffcd;
  /* 1052ffac mov ecx, dword ptr [0x1054f7b4] */
  ECX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052ffb2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1052ffb5 mov dword ptr [0x1054f7b4], ecx */
  w32((uint32_t)(0x1054f7b4), (ECX));
  /* 1052ffbb cmp dword ptr [0x1054f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ffc2 jne 0x1052ffcd */
  if (!C.zf) goto L_1052ffcd;
  /* 1052ffc4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052ffc7 mov dword ptr [0x1054f79c], edx */
  w32((uint32_t)(0x1054f79c), (EDX));
L_1052ffcd:;
  /* 1052ffcd jmp 0x1052ffee */
  goto L_1052ffee;
L_1052ffcf:;
  /* 1052ffcf mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 1052ffd4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1052ffd7 mov dword ptr [0x1054f7b4], eax */
  w32((uint32_t)(0x1054f7b4), (EAX));
  /* 1052ffdc cmp dword ptr [0x1054f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052ffe3 jne 0x1052ffee */
  if (!C.zf) goto L_1052ffee;
  /* 1052ffe5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1052ffe8 mov dword ptr [0x1054f79c], ecx */
  w32((uint32_t)(0x1054f79c), (ECX));
L_1052ffee:;
  /* 1052ffee jmp 0x10530051 */
  goto L_10530051;
L_1052fff0:;
  /* 1052fff0 cmp dword ptr [0x1054f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1052fff7 jne 0x10530051 */
  if (!C.zf) goto L_10530051;
  /* 1052fff9 cmp dword ptr [0x1054f7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530000 je 0x10530051 */
  if (C.zf) goto L_10530051;
  /* 10530002 mov edx, dword ptr [0x1054f7a4] */
  EDX = (r32((uint32_t)(0x1054f7a4)));
  /* 10530008 push edx */
  push32((uint32_t)(EDX));
  /* 10530009 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1053000c push eax */
  push32((uint32_t)(EAX));
  /* 1053000d mov ecx, dword ptr [0x1054f7ac] */
  ECX = (r32((uint32_t)(0x1054f7ac)));
  /* 10530013 push ecx */
  push32((uint32_t)(ECX));
  /* 10530014 call 0x105323b0 */
  push32(0x10530019u); f_105323b0();
  /* 10530019 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053001c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053001e jne 0x10530051 */
  if (!C.zf) goto L_10530051;
  /* 10530020 push 0 */
  push32((uint32_t)(0x0u));
  /* 10530022 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10530025 push edx */
  push32((uint32_t)(EDX));
  /* 10530026 call 0x10530430 */
  push32(0x1053002bu); f_10530430();
  /* 1053002b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053002e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10530030 je 0x10530051 */
  if (C.zf) goto L_10530051;
  /* 10530032 mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 10530037 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1053003a mov dword ptr [0x1054f7b4], eax */
  w32((uint32_t)(0x1054f7b4), (EAX));
  /* 1053003f cmp dword ptr [0x1054f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530046 jne 0x10530051 */
  if (!C.zf) goto L_10530051;
  /* 10530048 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1053004b mov dword ptr [0x1054f79c], ecx */
  w32((uint32_t)(0x1054f79c), (ECX));
L_10530051:;
  /* 10530051 mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 10530056 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10530059 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1053005b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053005d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1053005e:;
  /* 1053005e mov esp, ebp */
  ESP = (EBP);
  /* 10530060 pop ebp */
  EBP = (pop32());
  /* 10530061 ret 4 */
  ESPCHK(0x1052fd40u, _esp0);
  ESP += 8; return;
}

/* FUN_10010070 @ 0x10530070 (116 bytes, 33 insns) */
void f_10530070(void) {
  FTRACE(0x10530070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530070 push ebp */
  push32((uint32_t)(EBP));
  /* 10530071 mov ebp, esp */
  EBP = (ESP);
  /* 10530073 push ecx */
  push32((uint32_t)(ECX));
  /* 10530074 mov eax, dword ptr [0x1054f7ac] */
  EAX = (r32((uint32_t)(0x1054f7ac)));
  /* 10530079 push eax */
  push32((uint32_t)(EAX));
  /* 1053007a call 0x10526a40 */
  push32(0x1053007fu); f_10526a40();
  /* 1053007f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530082 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10530084 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530087 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1053008a mov dword ptr [0x1054f7a8], ecx */
  w32((uint32_t)(0x1054f7a8), (ECX));
  /* 10530090 cmp dword ptr [0x1054f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530097 je 0x105300a2 */
  if (C.zf) goto L_105300a2;
  /* 10530099 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105300a0 jmp 0x105300b4 */
  goto L_105300b4;
L_105300a2:;
  /* 105300a2 mov edx, dword ptr [0x1054f7ac] */
  EDX = (r32((uint32_t)(0x1054f7ac)));
  /* 105300a8 push edx */
  push32((uint32_t)(EDX));
  /* 105300a9 call 0x10530720 */
  push32(0x105300aeu); f_10530720();
  /* 105300ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105300b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105300b4:;
  /* 105300b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105300b7 mov dword ptr [0x1054f7a4], eax */
  w32((uint32_t)(0x1054f7a4), (EAX));
  /* 105300bc push 1 */
  push32((uint32_t)(0x1u));
  /* 105300be push 0x105300f0 */
  push32((uint32_t)(0x105300f0u));
  /* 105300c3 call dword ptr [0x105522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522d4))), 0x105300c9u);
  /* 105300c9 mov ecx, dword ptr [0x1054f7b4] */
  ECX = (r32((uint32_t)(0x1054f7b4)));
  /* 105300cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105300d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105300d4 jne 0x105300e0 */
  if (!C.zf) goto L_105300e0;
  /* 105300d6 mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
L_105300e0:;
  /* 105300e0 mov esp, ebp */
  ESP = (EBP);
  /* 105300e2 pop ebp */
  EBP = (pop32());
  /* 105300e3 ret  */
  ESPCHK(0x10530070u, _esp0);
  ESP += 4; return;
}

/* FUN_100100f0 @ 0x105300f0 (287 bytes, 86 insns) */
void f_105300f0(void) {
  FTRACE(0x105300f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105300f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105300f1 mov ebp, esp */
  EBP = (ESP);
  /* 105300f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105300f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105300f9 push eax */
  push32((uint32_t)(EAX));
  /* 105300fa call 0x105306a0 */
  push32(0x105300ffu); f_105306a0();
  /* 105300ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530102 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10530105 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10530107 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1053010a push ecx */
  push32((uint32_t)(ECX));
  /* 1053010b mov edx, dword ptr [0x1054f7a8] */
  EDX = (r32((uint32_t)(0x1054f7a8)));
  /* 10530111 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10530113 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530115 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1053011b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530121 push edx */
  push32((uint32_t)(EDX));
  /* 10530122 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10530125 push eax */
  push32((uint32_t)(EAX));
  /* 10530126 call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x1053012cu);
  /* 1053012c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053012e jne 0x10530144 */
  if (!C.zf) goto L_10530144;
  /* 10530130 mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
  /* 1053013a mov eax, 1 */
  EAX = (0x1u);
  /* 1053013f jmp 0x10530209 */
  goto L_10530209;
L_10530144:;
  /* 10530144 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10530147 push ecx */
  push32((uint32_t)(ECX));
  /* 10530148 mov edx, dword ptr [0x1054f7ac] */
  EDX = (r32((uint32_t)(0x1054f7ac)));
  /* 1053014e push edx */
  push32((uint32_t)(EDX));
  /* 1053014f call 0x105322e0 */
  push32(0x10530154u); f_105322e0();
  /* 10530154 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10530159 jne 0x10530199 */
  if (!C.zf) goto L_10530199;
  /* 1053015b cmp dword ptr [0x1054f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530162 jne 0x10530176 */
  if (!C.zf) goto L_10530176;
  /* 10530164 push 1 */
  push32((uint32_t)(0x1u));
  /* 10530166 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10530169 push eax */
  push32((uint32_t)(EAX));
  /* 1053016a call 0x10530430 */
  push32(0x1053016fu); f_10530430();
  /* 1053016f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10530174 je 0x10530197 */
  if (C.zf) goto L_10530197;
L_10530176:;
  /* 10530176 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10530179 mov dword ptr [0x1054f7b8], ecx */
  w32((uint32_t)(0x1054f7b8), (ECX));
  /* 1053017f mov edx, dword ptr [0x1054f7b8] */
  EDX = (r32((uint32_t)(0x1054f7b8)));
  /* 10530185 mov dword ptr [0x1054f79c], edx */
  w32((uint32_t)(0x1054f79c), (EDX));
  /* 1053018b mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 10530190 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10530192 mov dword ptr [0x1054f7b4], eax */
  w32((uint32_t)(0x1054f7b4), (EAX));
L_10530197:;
  /* 10530197 jmp 0x105301fc */
  goto L_105301fc;
L_10530199:;
  /* 10530199 cmp dword ptr [0x1054f7a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105301a0 jne 0x105301fc */
  if (!C.zf) goto L_105301fc;
  /* 105301a2 cmp dword ptr [0x1054f7a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1054f7a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105301a9 je 0x105301fc */
  if (C.zf) goto L_105301fc;
  /* 105301ab mov ecx, dword ptr [0x1054f7a4] */
  ECX = (r32((uint32_t)(0x1054f7a4)));
  /* 105301b1 push ecx */
  push32((uint32_t)(ECX));
  /* 105301b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 105301b5 push edx */
  push32((uint32_t)(EDX));
  /* 105301b6 mov eax, dword ptr [0x1054f7ac] */
  EAX = (r32((uint32_t)(0x1054f7ac)));
  /* 105301bb push eax */
  push32((uint32_t)(EAX));
  /* 105301bc call 0x105323b0 */
  push32(0x105301c1u); f_105323b0();
  /* 105301c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105301c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105301c6 jne 0x105301fc */
  if (!C.zf) goto L_105301fc;
  /* 105301c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105301ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105301cd push ecx */
  push32((uint32_t)(ECX));
  /* 105301ce call 0x10530430 */
  push32(0x105301d3u); f_10530430();
  /* 105301d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105301d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105301d8 je 0x105301fc */
  if (C.zf) goto L_105301fc;
  /* 105301da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105301dd mov dword ptr [0x1054f7b8], edx */
  w32((uint32_t)(0x1054f7b8), (EDX));
  /* 105301e3 mov eax, dword ptr [0x1054f7b8] */
  EAX = (r32((uint32_t)(0x1054f7b8)));
  /* 105301e8 mov dword ptr [0x1054f79c], eax */
  w32((uint32_t)(0x1054f79c), (EAX));
  /* 105301ed mov ecx, dword ptr [0x1054f7b4] */
  ECX = (r32((uint32_t)(0x1054f7b4)));
  /* 105301f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105301f6 mov dword ptr [0x1054f7b4], ecx */
  w32((uint32_t)(0x1054f7b4), (ECX));
L_105301fc:;
  /* 105301fc mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 10530201 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10530204 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10530206 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530208 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10530209:;
  /* 10530209 mov esp, ebp */
  ESP = (EBP);
  /* 1053020b pop ebp */
  EBP = (pop32());
  /* 1053020c ret 4 */
  ESPCHK(0x105300f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010210 @ 0x10530210 (69 bytes, 20 insns) */
void f_10530210(void) {
  FTRACE(0x10530210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530210 push ebp */
  push32((uint32_t)(EBP));
  /* 10530211 mov ebp, esp */
  EBP = (ESP);
  /* 10530213 mov eax, dword ptr [0x1054f7b0] */
  EAX = (r32((uint32_t)(0x1054f7b0)));
  /* 10530218 push eax */
  push32((uint32_t)(EAX));
  /* 10530219 call 0x10526a40 */
  push32(0x1053021eu); f_10526a40();
  /* 1053021e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530221 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10530223 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530226 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10530229 mov dword ptr [0x1054f7a0], ecx */
  w32((uint32_t)(0x1054f7a0), (ECX));
  /* 1053022f push 1 */
  push32((uint32_t)(0x1u));
  /* 10530231 push 0x10530260 */
  push32((uint32_t)(0x10530260u));
  /* 10530236 call dword ptr [0x105522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522d4))), 0x1053023cu);
  /* 1053023c mov edx, dword ptr [0x1054f7b4] */
  EDX = (r32((uint32_t)(0x1054f7b4)));
  /* 10530242 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10530245 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10530247 jne 0x10530253 */
  if (!C.zf) goto L_10530253;
  /* 10530249 mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
L_10530253:;
  /* 10530253 pop ebp */
  EBP = (pop32());
  /* 10530254 ret  */
  ESPCHK(0x10530210u, _esp0);
  ESP += 4; return;
}

/* FUN_10010260 @ 0x10530260 (172 bytes, 54 insns) */
void f_10530260(void) {
  FTRACE(0x10530260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530260 push ebp */
  push32((uint32_t)(EBP));
  /* 10530261 mov ebp, esp */
  EBP = (ESP);
  /* 10530263 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530269 push eax */
  push32((uint32_t)(EAX));
  /* 1053026a call 0x105306a0 */
  push32(0x1053026fu); f_105306a0();
  /* 1053026f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530272 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10530275 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10530277 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1053027a push ecx */
  push32((uint32_t)(ECX));
  /* 1053027b mov edx, dword ptr [0x1054f7a0] */
  EDX = (r32((uint32_t)(0x1054f7a0)));
  /* 10530281 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10530283 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530285 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1053028b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530291 push edx */
  push32((uint32_t)(EDX));
  /* 10530292 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10530295 push eax */
  push32((uint32_t)(EAX));
  /* 10530296 call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x1053029cu);
  /* 1053029c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1053029e jne 0x105302b1 */
  if (!C.zf) goto L_105302b1;
  /* 105302a0 mov dword ptr [0x1054f7b4], 0 */
  w32((uint32_t)(0x1054f7b4), (0x0u));
  /* 105302aa mov eax, 1 */
  EAX = (0x1u);
  /* 105302af jmp 0x10530306 */
  goto L_10530306;
L_105302b1:;
  /* 105302b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105302b4 push ecx */
  push32((uint32_t)(ECX));
  /* 105302b5 mov edx, dword ptr [0x1054f7b0] */
  EDX = (r32((uint32_t)(0x1054f7b0)));
  /* 105302bb push edx */
  push32((uint32_t)(EDX));
  /* 105302bc call 0x105322e0 */
  push32(0x105302c1u); f_105322e0();
  /* 105302c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105302c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105302c6 jne 0x105302f9 */
  if (!C.zf) goto L_105302f9;
  /* 105302c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105302cb push eax */
  push32((uint32_t)(EAX));
  /* 105302cc call 0x105303e0 */
  push32(0x105302d1u); f_105303e0();
  /* 105302d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105302d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105302d6 je 0x105302f9 */
  if (C.zf) goto L_105302f9;
  /* 105302d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105302db mov dword ptr [0x1054f7b8], ecx */
  w32((uint32_t)(0x1054f7b8), (ECX));
  /* 105302e1 mov edx, dword ptr [0x1054f7b8] */
  EDX = (r32((uint32_t)(0x1054f7b8)));
  /* 105302e7 mov dword ptr [0x1054f79c], edx */
  w32((uint32_t)(0x1054f79c), (EDX));
  /* 105302ed mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 105302f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 105302f4 mov dword ptr [0x1054f7b4], eax */
  w32((uint32_t)(0x1054f7b4), (EAX));
L_105302f9:;
  /* 105302f9 mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 105302fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10530301 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10530303 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530305 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10530306:;
  /* 10530306 mov esp, ebp */
  ESP = (EBP);
  /* 10530308 pop ebp */
  EBP = (pop32());
  /* 10530309 ret 4 */
  ESPCHK(0x10530260u, _esp0);
  ESP += 8; return;
}

/* FUN_10010310 @ 0x10530310 (43 bytes, 11 insns) */
void f_10530310(void) {
  FTRACE(0x10530310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530310 push ebp */
  push32((uint32_t)(EBP));
  /* 10530311 mov ebp, esp */
  EBP = (ESP);
  /* 10530313 mov eax, dword ptr [0x1054f7b4] */
  EAX = (r32((uint32_t)(0x1054f7b4)));
  /* 10530318 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1053031d mov dword ptr [0x1054f7b4], eax */
  w32((uint32_t)(0x1054f7b4), (EAX));
  /* 10530322 call dword ptr [0x105522c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522c4))), 0x10530328u);
  /* 10530328 mov dword ptr [0x1054f7b8], eax */
  w32((uint32_t)(0x1054f7b8), (EAX));
  /* 1053032d mov ecx, dword ptr [0x1054f7b8] */
  ECX = (r32((uint32_t)(0x1054f7b8)));
  /* 10530333 mov dword ptr [0x1054f79c], ecx */
  w32((uint32_t)(0x1054f79c), (ECX));
  /* 10530339 pop ebp */
  EBP = (pop32());
  /* 1053033a ret  */
  ESPCHK(0x10530310u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x10530340 (155 bytes, 57 insns) */
void f_10530340(void) {
  FTRACE(0x10530340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530340 push ebp */
  push32((uint32_t)(EBP));
  /* 10530341 mov ebp, esp */
  EBP = (ESP);
  /* 10530343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530346 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053034a je 0x1053036b */
  if (C.zf) goto L_1053036b;
  /* 1053034c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053034f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10530352 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10530354 je 0x1053036b */
  if (C.zf) goto L_1053036b;
  /* 10530356 push 0x1054b854 */
  push32((uint32_t)(0x1054b854u));
  /* 1053035b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053035e push edx */
  push32((uint32_t)(EDX));
  /* 1053035f call 0x1052f8a0 */
  push32(0x10530364u); f_1052f8a0();
  /* 10530364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10530369 jne 0x10530393 */
  if (!C.zf) goto L_10530393;
L_1053036b:;
  /* 1053036b push 8 */
  push32((uint32_t)(0x8u));
  /* 1053036d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10530370 push eax */
  push32((uint32_t)(EAX));
  /* 10530371 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10530376 mov ecx, dword ptr [0x1054f7b8] */
  ECX = (r32((uint32_t)(0x1054f7b8)));
  /* 1053037c push ecx */
  push32((uint32_t)(ECX));
  /* 1053037d call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x10530383u);
  /* 10530383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10530385 jne 0x1053038b */
  if (!C.zf) goto L_1053038b;
  /* 10530387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10530389 jmp 0x105303d7 */
  goto L_105303d7;
L_1053038b:;
  /* 1053038b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1053038e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10530391 jmp 0x105303cb */
  goto L_105303cb;
L_10530393:;
  /* 10530393 push 0x1054b850 */
  push32((uint32_t)(0x1054b850u));
  /* 10530398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053039b push eax */
  push32((uint32_t)(EAX));
  /* 1053039c call 0x1052f8a0 */
  push32(0x105303a1u); f_1052f8a0();
  /* 105303a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105303a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105303a6 jne 0x105303cb */
  if (!C.zf) goto L_105303cb;
  /* 105303a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 105303aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 105303ad push ecx */
  push32((uint32_t)(ECX));
  /* 105303ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 105303b0 mov edx, dword ptr [0x1054f7b8] */
  EDX = (r32((uint32_t)(0x1054f7b8)));
  /* 105303b6 push edx */
  push32((uint32_t)(EDX));
  /* 105303b7 call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x105303bdu);
  /* 105303bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105303bf jne 0x105303c5 */
  if (!C.zf) goto L_105303c5;
  /* 105303c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105303c3 jmp 0x105303d7 */
  goto L_105303d7;
L_105303c5:;
  /* 105303c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105303c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105303cb:;
  /* 105303cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105303ce push ecx */
  push32((uint32_t)(ECX));
  /* 105303cf call 0x105324c0 */
  push32(0x105303d4u); f_105324c0();
  /* 105303d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105303d7:;
  /* 105303d7 mov esp, ebp */
  ESP = (EBP);
  /* 105303d9 pop ebp */
  EBP = (pop32());
  /* 105303da ret  */
  ESPCHK(0x10530340u, _esp0);
  ESP += 4; return;
}

/* FUN_100103e0 @ 0x105303e0 (79 bytes, 26 insns) */
void f_105303e0(void) {
  FTRACE(0x105303e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105303e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105303e1 mov ebp, esp */
  EBP = (ESP);
  /* 105303e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105303e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 105303ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 105303ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105303f5 jmp 0x10530400 */
  goto L_10530400;
L_105303f7:;
  /* 105303f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105303fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105303fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10530400:;
  /* 10530400 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530404 jae 0x10530426 */
  if (!C.cf) goto L_10530426;
  /* 10530406 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530409 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1053040f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530412 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10530414 mov cx, word ptr [eax*2 + 0x1054e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1054e9c4)));
  /* 1053041c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053041e jne 0x10530424 */
  if (!C.zf) goto L_10530424;
  /* 10530420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10530422 jmp 0x1053042b */
  goto L_1053042b;
L_10530424:;
  /* 10530424 jmp 0x105303f7 */
  goto L_105303f7;
L_10530426:;
  /* 10530426 mov eax, 1 */
  EAX = (0x1u);
L_1053042b:;
  /* 1053042b mov esp, ebp */
  ESP = (EBP);
  /* 1053042d pop ebp */
  EBP = (pop32());
  /* 1053042e ret  */
  ESPCHK(0x105303e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010430 @ 0x10530430 (135 bytes, 48 insns) */
void f_10530430(void) {
  FTRACE(0x10530430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530430 push ebp */
  push32((uint32_t)(EBP));
  /* 10530431 mov ebp, esp */
  EBP = (ESP);
  /* 10530433 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530436 push esi */
  push32((uint32_t)(ESI));
  /* 10530437 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053043a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1053043f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10530444 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10530449 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1053044c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10530451 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10530454 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10530456 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10530459 push ecx */
  push32((uint32_t)(ECX));
  /* 1053045a push 1 */
  push32((uint32_t)(0x1u));
  /* 1053045c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1053045f push edx */
  push32((uint32_t)(EDX));
  /* 10530460 call dword ptr [0x1054f7bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1054f7bc))), 0x10530466u);
  /* 10530466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10530468 jne 0x1053046e */
  if (!C.zf) goto L_1053046e;
  /* 1053046a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1053046c jmp 0x105304b2 */
  goto L_105304b2;
L_1053046e:;
  /* 1053046e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10530471 push eax */
  push32((uint32_t)(EAX));
  /* 10530472 call 0x105306a0 */
  push32(0x10530477u); f_105306a0();
  /* 10530477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053047a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053047d je 0x105304ad */
  if (C.zf) goto L_105304ad;
  /* 1053047f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530483 je 0x105304ad */
  if (C.zf) goto L_105304ad;
  /* 10530485 mov ecx, dword ptr [0x1054f7ac] */
  ECX = (r32((uint32_t)(0x1054f7ac)));
  /* 1053048b push ecx */
  push32((uint32_t)(ECX));
  /* 1053048c call 0x10530720 */
  push32(0x10530491u); f_10530720();
  /* 10530491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530494 mov esi, eax */
  ESI = (EAX);
  /* 10530496 mov edx, dword ptr [0x1054f7ac] */
  EDX = (r32((uint32_t)(0x1054f7ac)));
  /* 1053049c push edx */
  push32((uint32_t)(EDX));
  /* 1053049d call 0x10526a40 */
  push32(0x105304a2u); f_10526a40();
  /* 105304a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105304a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105304a7 jne 0x105304ad */
  if (!C.zf) goto L_105304ad;
  /* 105304a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105304ab jmp 0x105304b2 */
  goto L_105304b2;
L_105304ad:;
  /* 105304ad mov eax, 1 */
  EAX = (0x1u);
L_105304b2:;
  /* 105304b2 pop esi */
  ESI = (pop32());
  /* 105304b3 mov esp, ebp */
  ESP = (EBP);
  /* 105304b5 pop ebp */
  EBP = (pop32());
  /* 105304b6 ret  */
  ESPCHK(0x10530430u, _esp0);
  ESP += 4; return;
}

/* FUN_100104c0 @ 0x105304c0 (77 bytes, 18 insns) */
void f_105304c0(void) {
  FTRACE(0x105304c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105304c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105304c1 mov ebp, esp */
  EBP = (ESP);
  /* 105304c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105304c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 105304d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 105304d9 push eax */
  push32((uint32_t)(EAX));
  /* 105304da call dword ptr [0x105522c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522c0))), 0x105304e0u);
  /* 105304e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105304e2 je 0x105304f9 */
  if (C.zf) goto L_105304f9;
  /* 105304e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105304eb jne 0x105304f9 */
  if (!C.zf) goto L_105304f9;
  /* 105304ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 105304f7 jmp 0x10530503 */
  goto L_10530503;
L_105304f9:;
  /* 105304f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10530503:;
  /* 10530503 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10530509 mov esp, ebp */
  ESP = (EBP);
  /* 1053050b pop ebp */
  EBP = (pop32());
  /* 1053050c ret  */
  ESPCHK(0x105304c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10530510 (388 bytes, 118 insns) */
void f_10530510(void) {
  FTRACE(0x10530510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530510 push ebp */
  push32((uint32_t)(EBP));
  /* 10530511 mov ebp, esp */
  EBP = (ESP);
  /* 10530513 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530516 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1053051d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10530524 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1053052b:;
  /* 1053052b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1053052e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530531 jg 0x10530678 */
  if ((!C.zf&&C.sf==C.of)) goto L_10530678;
  /* 10530537 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1053053a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053053d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1053053e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530540 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10530542 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10530545 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530548 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1053054b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053054e cmp edx, dword ptr [ecx + 0x1054e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1054e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530554 jne 0x1053064e */
  if (!C.zf) goto L_1053064e;
  /* 1053055a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1053055d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10530560 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530564 ja 0x10530587 */
  if ((!C.cf&&!C.zf)) goto L_10530587;
  /* 10530566 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053056a je 0x105305f9 */
  if (C.zf) goto L_105305f9;
  /* 10530570 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530574 je 0x105305a4 */
  if (C.zf) goto L_105305a4;
  /* 10530576 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053057a je 0x105305c6 */
  if (C.zf) goto L_105305c6;
  /* 1053057c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530580 je 0x105305e8 */
  if (C.zf) goto L_105305e8;
  /* 10530582 jmp 0x10530618 */
  goto L_10530618;
L_10530587:;
  /* 10530587 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053058e je 0x105305b5 */
  if (C.zf) goto L_105305b5;
  /* 10530590 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530597 je 0x105305d7 */
  if (C.zf) goto L_105305d7;
  /* 10530599 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105305a0 je 0x1053060a */
  if (C.zf) goto L_1053060a;
  /* 105305a2 jmp 0x10530618 */
  goto L_10530618;
L_105305a4:;
  /* 105305a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105305a7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105305aa add ecx, 0x1054e524 */
  { uint32_t _a=(ECX),_b=(0x1054e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105305b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105305b3 jmp 0x10530618 */
  goto L_10530618;
L_105305b5:;
  /* 105305b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105305b8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105305bb mov eax, dword ptr [edx + 0x1054e52c] */
  EAX = (r32((uint32_t)(EDX + 0x1054e52c)));
  /* 105305c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105305c4 jmp 0x10530618 */
  goto L_10530618;
L_105305c6:;
  /* 105305c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105305c9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105305cc add ecx, 0x1054e530 */
  { uint32_t _a=(ECX),_b=(0x1054e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105305d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105305d5 jmp 0x10530618 */
  goto L_10530618;
L_105305d7:;
  /* 105305d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105305da imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105305dd mov eax, dword ptr [edx + 0x1054e534] */
  EAX = (r32((uint32_t)(EDX + 0x1054e534)));
  /* 105305e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105305e6 jmp 0x10530618 */
  goto L_10530618;
L_105305e8:;
  /* 105305e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105305eb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105305ee add ecx, 0x1054e538 */
  { uint32_t _a=(ECX),_b=(0x1054e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105305f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105305f7 jmp 0x10530618 */
  goto L_10530618;
L_105305f9:;
  /* 105305f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105305fc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105305ff add edx, 0x1054e53c */
  { uint32_t _a=(EDX),_b=(0x1054e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530605 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10530608 jmp 0x10530618 */
  goto L_10530618;
L_1053060a:;
  /* 1053060a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053060d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10530610 add eax, 0x1054e544 */
  { uint32_t _a=(EAX),_b=(0x1054e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530615 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10530618:;
  /* 10530618 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053061c je 0x10530624 */
  if (C.zf) goto L_10530624;
  /* 1053061e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530622 jge 0x10530626 */
  if ((C.sf==C.of)) goto L_10530626;
L_10530624:;
  /* 10530624 jmp 0x10530678 */
  goto L_10530678;
L_10530626:;
  /* 10530626 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10530629 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1053062c push ecx */
  push32((uint32_t)(ECX));
  /* 1053062d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530630 push edx */
  push32((uint32_t)(EDX));
  /* 10530631 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10530634 push eax */
  push32((uint32_t)(EAX));
  /* 10530635 call 0x10527430 */
  push32(0x1053063au); f_10527430();
  /* 1053063a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053063d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10530640 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530643 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10530647 mov eax, 1 */
  EAX = (0x1u);
  /* 1053064c jmp 0x1053068e */
  goto L_1053068e;
L_1053064e:;
  /* 1053064e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530651 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10530654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530657 cmp eax, dword ptr [edx + 0x1054e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1054e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053065d jae 0x1053066a */
  if (!C.cf) goto L_1053066a;
  /* 1053065f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10530662 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530665 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10530668 jmp 0x10530673 */
  goto L_10530673;
L_1053066a:;
  /* 1053066a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1053066d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530670 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10530673:;
  /* 10530673 jmp 0x1053052b */
  goto L_1053052b;
L_10530678:;
  /* 10530678 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1053067b push eax */
  push32((uint32_t)(EAX));
  /* 1053067c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1053067f push ecx */
  push32((uint32_t)(ECX));
  /* 10530680 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10530683 push edx */
  push32((uint32_t)(EDX));
  /* 10530684 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530687 push eax */
  push32((uint32_t)(EAX));
  /* 10530688 call dword ptr [0x105522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522cc))), 0x1053068eu);
L_1053068e:;
  /* 1053068e mov esp, ebp */
  ESP = (EBP);
  /* 10530690 pop ebp */
  EBP = (pop32());
  /* 10530691 ret 0x10 */
  ESPCHK(0x10530510u, _esp0);
  ESP += 20; return;
}

/* FUN_100106a0 @ 0x105306a0 (118 bytes, 42 insns) */
void f_105306a0(void) {
  FTRACE(0x105306a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105306a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105306a1 mov ebp, esp */
  EBP = (ESP);
  /* 105306a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105306a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105306ad:;
  /* 105306ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105306b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105306b2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 105306b5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105306b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105306bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105306bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105306c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105306c4 je 0x1053070f */
  if (C.zf) goto L_1053070f;
  /* 105306c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105306ca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105306cd jl 0x105306e2 */
  if ((C.sf!=C.of)) goto L_105306e2;
  /* 105306cf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105306d3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105306d6 jg 0x105306e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_105306e2;
  /* 105306d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105306db add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105306dd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 105306e0 jmp 0x105306fc */
  goto L_105306fc;
L_105306e2:;
  /* 105306e2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105306e6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105306e9 jl 0x105306fc */
  if ((C.sf!=C.of)) goto L_105306fc;
  /* 105306eb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105306ef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105306f2 jg 0x105306fc */
  if ((!C.zf&&C.sf==C.of)) goto L_105306fc;
  /* 105306f4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105306f7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105306f9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_105306fc:;
  /* 105306fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105306ff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10530702 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10530706 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1053070a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1053070d jmp 0x105306ad */
  goto L_105306ad;
L_1053070f:;
  /* 1053070f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10530712 mov esp, ebp */
  ESP = (EBP);
  /* 10530714 pop ebp */
  EBP = (pop32());
  /* 10530715 ret  */
  ESPCHK(0x105306a0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10530720 (101 bytes, 36 insns) */
void f_10530720(void) {
  FTRACE(0x10530720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530720 push ebp */
  push32((uint32_t)(EBP));
  /* 10530721 mov ebp, esp */
  EBP = (ESP);
  /* 10530723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10530726 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1053072d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530730 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10530732 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10530735 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530738 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1053073b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1053073e:;
  /* 1053073e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10530742 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530745 jl 0x10530750 */
  if ((C.sf!=C.of)) goto L_10530750;
  /* 10530747 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1053074b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053074e jle 0x10530762 */
  if ((C.zf||C.sf!=C.of)) goto L_10530762;
L_10530750:;
  /* 10530750 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10530754 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530757 jl 0x1053077e */
  if ((C.sf!=C.of)) goto L_1053077e;
  /* 10530759 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1053075d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530760 jg 0x1053077e */
  if ((!C.zf&&C.sf==C.of)) goto L_1053077e;
L_10530762:;
  /* 10530762 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530765 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530768 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1053076b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053076e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10530770 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10530773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530776 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10530779 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1053077c jmp 0x1053073e */
  goto L_1053073e;
L_1053077e:;
  /* 1053077e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10530781 mov esp, ebp */
  ESP = (EBP);
  /* 10530783 pop ebp */
  EBP = (pop32());
  /* 10530784 ret  */
  ESPCHK(0x10530720u, _esp0);
  ESP += 4; return;
}

/* FUN_10010790 @ 0x10530790 (122 bytes, 39 insns) */
void f_10530790(void) {
  FTRACE(0x10530790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530790 push ebp */
  push32((uint32_t)(EBP));
  /* 10530791 mov ebp, esp */
  EBP = (ESP);
  /* 10530793 push ecx */
  push32((uint32_t)(ECX));
  /* 10530794 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530797 cmp eax, dword ptr [0x1055103c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1055103c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053079d jae 0x105307c1 */
  if (!C.cf) goto L_105307c1;
  /* 1053079f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105307a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105307a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105307a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105307ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105307ae mov eax, dword ptr [ecx*4 + 0x10550f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10550f00)));
  /* 105307b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105307ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105307bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105307bf jne 0x105307dc */
  if (!C.zf) goto L_105307dc;
L_105307c1:;
  /* 105307c1 call 0x1052bae0 */
  push32(0x105307c6u); f_1052bae0();
  /* 105307c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105307cc call 0x1052baf0 */
  push32(0x105307d1u); f_1052baf0();
  /* 105307d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105307d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105307da jmp 0x10530806 */
  goto L_10530806;
L_105307dc:;
  /* 105307dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105307df push edx */
  push32((uint32_t)(EDX));
  /* 105307e0 call 0x1052d300 */
  push32(0x105307e5u); f_1052d300();
  /* 105307e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105307e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105307eb push eax */
  push32((uint32_t)(EAX));
  /* 105307ec call 0x10530810 */
  push32(0x105307f1u); f_10530810();
  /* 105307f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105307f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105307f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105307fa push ecx */
  push32((uint32_t)(ECX));
  /* 105307fb call 0x1052d390 */
  push32(0x10530800u); f_1052d390();
  /* 10530800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530803 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10530806:;
  /* 10530806 mov esp, ebp */
  ESP = (EBP);
  /* 10530808 pop ebp */
  EBP = (pop32());
  /* 10530809 ret  */
  ESPCHK(0x10530790u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10530810 (170 bytes, 59 insns) */
void f_10530810(void) {
  FTRACE(0x10530810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10530810 push ebp */
  push32((uint32_t)(EBP));
  /* 10530811 mov ebp, esp */
  EBP = (ESP);
  /* 10530813 push ecx */
  push32((uint32_t)(ECX));
  /* 10530814 push esi */
  push32((uint32_t)(ESI));
  /* 10530815 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530818 push eax */
  push32((uint32_t)(EAX));
  /* 10530819 call 0x1052d180 */
  push32(0x1053081eu); f_1052d180();
  /* 1053081e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530821 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530824 je 0x10530863 */
  if (C.zf) goto L_10530863;
  /* 10530826 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053082a je 0x10530832 */
  if (C.zf) goto L_10530832;
  /* 1053082c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10530830 jne 0x1053084c */
  if (!C.zf) goto L_1053084c;
L_10530832:;
  /* 10530832 push 1 */
  push32((uint32_t)(0x1u));
  /* 10530834 call 0x1052d180 */
  push32(0x10530839u); f_1052d180();
  /* 10530839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053083c mov esi, eax */
  ESI = (EAX);
  /* 1053083e push 2 */
  push32((uint32_t)(0x2u));
  /* 10530840 call 0x1052d180 */
  push32(0x10530845u); f_1052d180();
  /* 10530845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530848 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1053084a je 0x10530863 */
  if (C.zf) goto L_10530863;
L_1053084c:;
  /* 1053084c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053084f push ecx */
  push32((uint32_t)(ECX));
  /* 10530850 call 0x1052d180 */
  push32(0x10530855u); f_1052d180();
  /* 10530855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530858 push eax */
  push32((uint32_t)(EAX));
  /* 10530859 call dword ptr [0x105522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x105522c8))), 0x1053085fu);
  /* 1053085f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10530861 je 0x1053086c */
  if (C.zf) goto L_1053086c;
L_10530863:;
  /* 10530863 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1053086a jmp 0x10530875 */
  goto L_10530875;
L_1053086c:;
  /* 1053086c call dword ptr [0x10552390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10552390))), 0x10530872u);
  /* 10530872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10530875:;
  /* 10530875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530878 push edx */
  push32((uint32_t)(EDX));
  /* 10530879 call 0x1052d0a0 */
  push32(0x1053087eu); f_1052d0a0();
  /* 1053087e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10530881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530884 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10530887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053088a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1053088d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10530890 mov edx, dword ptr [eax*4 + 0x10550f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10550f00)));
  /* 10530897 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1053089c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105308a0 je 0x105308b3 */
  if (C.zf) goto L_105308b3;
  /* 105308a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105308a5 push eax */
  push32((uint32_t)(EAX));
  /* 105308a6 call 0x1052ba40 */
  push32(0x105308abu); f_1052ba40();
  /* 105308ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105308ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105308b1 jmp 0x105308b5 */
  goto L_105308b5;
L_105308b3:;
  /* 105308b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105308b5:;
  /* 105308b5 pop esi */
  ESI = (pop32());
  /* 105308b6 mov esp, ebp */
  ESP = (EBP);
  /* 105308b8 pop ebp */
  EBP = (pop32());
  /* 105308b9 ret  */
  ESPCHK(0x10530810u, _esp0);
  ESP += 4; return;
}

/* FUN_100108c0 @ 0x105308c0 (146 bytes, 52 insns) */
void f_105308c0(void) {
  FTRACE(0x105308c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105308c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105308c1 mov ebp, esp */
  EBP = (ESP);
  /* 105308c3 push ebx */
  push32((uint32_t)(EBX));
  /* 105308c4 push esi */
  push32((uint32_t)(ESI));
  /* 105308c5 push edi */
  push32((uint32_t)(EDI));
L_105308c6:;
  /* 105308c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105308ca jne 0x105308ea */
  if (!C.zf) goto L_105308ea;
  /* 105308cc push 0x1054b190 */
  push32((uint32_t)(0x1054b190u));
  /* 105308d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105308d3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 105308d5 push 0x1054b858 */
  push32((uint32_t)(0x1054b858u));
  /* 105308da push 2 */
  push32((uint32_t)(0x2u));
  /* 105308dc call 0x10522cd0 */
  push32(0x105308e1u); f_10522cd0();
  /* 105308e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105308e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105308e7 jne 0x105308ea */
  if (!C.zf) goto L_105308ea;
  /* 105308e9 int3  */
  x86_unimpl("int3 @ 0x105308e9");
L_105308ea:;
  /* 105308ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105308ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105308ee jne 0x105308c6 */
  if (!C.zf) goto L_105308c6;
  /* 105308f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105308f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105308f6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 105308fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105308fe je 0x1053094d */
  if (C.zf) goto L_1053094d;
  /* 10530900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530903 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10530906 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10530909 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1053090b je 0x1053094d */
  if (C.zf) goto L_1053094d;
  /* 1053090d push 2 */
  push32((uint32_t)(0x2u));
  /* 1053090f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530912 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10530915 push eax */
  push32((uint32_t)(EAX));
  /* 10530916 call 0x105246a0 */
  push32(0x1053091bu); f_105246a0();
  /* 1053091b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1053091e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530921 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10530924 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1053092a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053092d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10530930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530933 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10530939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1053093c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10530943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10530946 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1053094d:;
  /* 1053094d pop edi */
  EDI = (pop32());
  /* 1053094e pop esi */
  ESI = (pop32());
  /* 1053094f pop ebx */
  EBX = (pop32());
  /* 10530950 pop ebp */
  EBP = (pop32());
  /* 10530951 ret  */
  ESPCHK(0x105308c0u, _esp0);
  ESP += 4; return;
}

