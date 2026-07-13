#include "recomp.h"

/* FUN_10007b50 @ 0x10b07b50 (490 bytes, 165 insns) */
void f_10b07b50(void) {
  FTRACE(0x10b07b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07b51 mov ebp, esp */
  EBP = (ESP);
  /* 10b07b53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07b56 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07b5a jne 0x10b07b6d */
  if (!C.zf) goto L_10b07b6d;
  /* 10b07b5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07b5f push eax */
  push32((uint32_t)(EAX));
  /* 10b07b60 call 0x10b079a0 */
  push32(0x10b07b65u); f_10b079a0();
  /* 10b07b65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07b68 jmp 0x10b07d36 */
  goto L_10b07d36;
L_10b07b6d:;
  /* 10b07b6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07b71 jne 0x10b07b86 */
  if (!C.zf) goto L_10b07b86;
  /* 10b07b73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07b76 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07b77 call 0x10b07d40 */
  push32(0x10b07b7cu); f_10b07d40();
  /* 10b07b7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07b7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07b81 jmp 0x10b07d36 */
  goto L_10b07d36;
L_10b07b86:;
  /* 10b07b86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b07b8d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07b91 ja 0x10b07d09 */
  if ((!C.cf&&!C.zf)) goto L_10b07d09;
  /* 10b07b97 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07b99 call 0x10b075d0 */
  push32(0x10b07b9eu); f_10b075d0();
  /* 10b07b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07ba4 push edx */
  push32((uint32_t)(EDX));
  /* 10b07ba5 call 0x10b07ed0 */
  push32(0x10b07baau); f_10b07ed0();
  /* 10b07baa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07bad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b07bb0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07bb4 je 0x10b07ccc */
  if (C.zf) goto L_10b07ccc;
  /* 10b07bba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07bbd cmp eax, dword ptr [0x10b2dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07bc3 ja 0x10b07c40 */
  if ((!C.cf&&!C.zf)) goto L_10b07c40;
  /* 10b07bc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07bc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07bcc push edx */
  push32((uint32_t)(EDX));
  /* 10b07bcd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b07bd0 push eax */
  push32((uint32_t)(EAX));
  /* 10b07bd1 call 0x10b08da0 */
  push32(0x10b07bd6u); f_10b08da0();
  /* 10b07bd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b07bdb je 0x10b07be5 */
  if (C.zf) goto L_10b07be5;
  /* 10b07bdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07be0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b07be3 jmp 0x10b07c40 */
  goto L_10b07c40;
L_10b07be5:;
  /* 10b07be5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07be8 push edx */
  push32((uint32_t)(EDX));
  /* 10b07be9 call 0x10b08560 */
  push32(0x10b07beeu); f_10b08560();
  /* 10b07bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07bf1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b07bf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07bf8 je 0x10b07c40 */
  if (C.zf) goto L_10b07c40;
  /* 10b07bfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07bfd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10b07c00 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07c03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b07c06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07c09 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07c0c jae 0x10b07c16 */
  if (!C.cf) goto L_10b07c16;
  /* 10b07c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07c11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b07c14 jmp 0x10b07c1c */
  goto L_10b07c1c;
L_10b07c16:;
  /* 10b07c16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07c19 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10b07c1c:;
  /* 10b07c1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b07c1f push edx */
  push32((uint32_t)(EDX));
  /* 10b07c20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07c23 push eax */
  push32((uint32_t)(EAX));
  /* 10b07c24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07c27 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07c28 call 0x10b0a4b0 */
  push32(0x10b07c2du); f_10b0a4b0();
  /* 10b07c2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07c30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07c33 push edx */
  push32((uint32_t)(EDX));
  /* 10b07c34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b07c37 push eax */
  push32((uint32_t)(EAX));
  /* 10b07c38 call 0x10b07f90 */
  push32(0x10b07c3du); f_10b07f90();
  /* 10b07c3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07c40:;
  /* 10b07c40 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07c44 jne 0x10b07cc0 */
  if (!C.zf) goto L_10b07cc0;
  /* 10b07c46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07c4a jne 0x10b07c53 */
  if (!C.zf) goto L_10b07c53;
  /* 10b07c4c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10b07c53:;
  /* 10b07c53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07c56 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07c59 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10b07c5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b07c5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07c62 push edx */
  push32((uint32_t)(EDX));
  /* 10b07c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b07c65 mov eax, dword ptr [0x10b30eac] */
  EAX = (r32((uint32_t)(0x10b30eac)));
  /* 10b07c6a push eax */
  push32((uint32_t)(EAX));
  /* 10b07c6b call dword ptr [0x10b32304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32304))), 0x10b07c71u);
  /* 10b07c71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b07c74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07c78 je 0x10b07cc0 */
  if (C.zf) goto L_10b07cc0;
  /* 10b07c7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07c7d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b07c80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07c83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b07c86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07c89 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07c8c jae 0x10b07c96 */
  if (!C.cf) goto L_10b07c96;
  /* 10b07c8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07c91 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b07c94 jmp 0x10b07c9c */
  goto L_10b07c9c;
L_10b07c96:;
  /* 10b07c96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07c99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10b07c9c:;
  /* 10b07c9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b07c9f push eax */
  push32((uint32_t)(EAX));
  /* 10b07ca0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07ca4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07ca7 push edx */
  push32((uint32_t)(EDX));
  /* 10b07ca8 call 0x10b0a4b0 */
  push32(0x10b07cadu); f_10b0a4b0();
  /* 10b07cad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07cb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07cb3 push eax */
  push32((uint32_t)(EAX));
  /* 10b07cb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b07cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07cb8 call 0x10b07f90 */
  push32(0x10b07cbdu); f_10b07f90();
  /* 10b07cbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b07cc0:;
  /* 10b07cc0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07cc2 call 0x10b07670 */
  push32(0x10b07cc7u); f_10b07670();
  /* 10b07cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07cca jmp 0x10b07d09 */
  goto L_10b07d09;
L_10b07ccc:;
  /* 10b07ccc push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07cce call 0x10b07670 */
  push32(0x10b07cd3u); f_10b07670();
  /* 10b07cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07cd6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07cda jne 0x10b07ce3 */
  if (!C.zf) goto L_10b07ce3;
  /* 10b07cdc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10b07ce3:;
  /* 10b07ce3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07ce6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07ce9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10b07cec mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10b07cef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07cf2 push eax */
  push32((uint32_t)(EAX));
  /* 10b07cf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b07cf9 mov edx, dword ptr [0x10b30eac] */
  EDX = (r32((uint32_t)(0x10b30eac)));
  /* 10b07cff push edx */
  push32((uint32_t)(EDX));
  /* 10b07d00 call dword ptr [0x10b3230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3230c))), 0x10b07d06u);
  /* 10b07d06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b07d09:;
  /* 10b07d09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07d0d jne 0x10b07d18 */
  if (!C.zf) goto L_10b07d18;
  /* 10b07d0f cmp dword ptr [0x10b2f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07d16 jne 0x10b07d1d */
  if (!C.zf) goto L_10b07d1d;
L_10b07d18:;
  /* 10b07d18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07d1b jmp 0x10b07d36 */
  goto L_10b07d36;
L_10b07d1d:;
  /* 10b07d1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07d20 push eax */
  push32((uint32_t)(EAX));
  /* 10b07d21 call 0x10b07910 */
  push32(0x10b07d26u); f_10b07910();
  /* 10b07d26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b07d2b jne 0x10b07d31 */
  if (!C.zf) goto L_10b07d31;
  /* 10b07d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07d2f jmp 0x10b07d36 */
  goto L_10b07d36;
L_10b07d31:;
  /* 10b07d31 jmp 0x10b07b86 */
  goto L_10b07b86;
L_10b07d36:;
  /* 10b07d36 mov esp, ebp */
  ESP = (EBP);
  /* 10b07d38 pop ebp */
  EBP = (pop32());
  /* 10b07d39 ret  */
  ESPCHK(0x10b07b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d40 @ 0x10b07d40 (104 bytes, 38 insns) */
void f_10b07d40(void) {
  FTRACE(0x10b07d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07d41 mov ebp, esp */
  EBP = (ESP);
  /* 10b07d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07d44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07d48 jne 0x10b07d4c */
  if (!C.zf) goto L_10b07d4c;
  /* 10b07d4a jmp 0x10b07da4 */
  goto L_10b07da4;
L_10b07d4c:;
  /* 10b07d4c push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07d4e call 0x10b075d0 */
  push32(0x10b07d53u); f_10b075d0();
  /* 10b07d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07d56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07d59 push eax */
  push32((uint32_t)(EAX));
  /* 10b07d5a call 0x10b07ed0 */
  push32(0x10b07d5fu); f_10b07ed0();
  /* 10b07d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07d62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b07d65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07d69 je 0x10b07d87 */
  if (C.zf) goto L_10b07d87;
  /* 10b07d6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07d6e push ecx */
  push32((uint32_t)(ECX));
  /* 10b07d6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07d72 push edx */
  push32((uint32_t)(EDX));
  /* 10b07d73 call 0x10b07f90 */
  push32(0x10b07d78u); f_10b07f90();
  /* 10b07d78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07d7b push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07d7d call 0x10b07670 */
  push32(0x10b07d82u); f_10b07670();
  /* 10b07d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07d85 jmp 0x10b07da4 */
  goto L_10b07da4;
L_10b07d87:;
  /* 10b07d87 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07d89 call 0x10b07670 */
  push32(0x10b07d8eu); f_10b07670();
  /* 10b07d8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07d91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07d94 push eax */
  push32((uint32_t)(EAX));
  /* 10b07d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b07d97 mov ecx, dword ptr [0x10b30eac] */
  ECX = (r32((uint32_t)(0x10b30eac)));
  /* 10b07d9d push ecx */
  push32((uint32_t)(ECX));
  /* 10b07d9e call dword ptr [0x10b323b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323b0))), 0x10b07da4u);
L_10b07da4:;
  /* 10b07da4 mov esp, ebp */
  ESP = (EBP);
  /* 10b07da6 pop ebp */
  EBP = (pop32());
  /* 10b07da7 ret  */
  ESPCHK(0x10b07d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db0 @ 0x10b07db0 (116 bytes, 34 insns) */
void f_10b07db0(void) {
  FTRACE(0x10b07db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07db1 mov ebp, esp */
  EBP = (ESP);
  /* 10b07db3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b07db4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10b07dbb push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07dbd call 0x10b075d0 */
  push32(0x10b07dc2u); f_10b075d0();
  /* 10b07dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07dc5 call 0x10b094c0 */
  push32(0x10b07dcau); f_10b094c0();
  /* 10b07dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b07dcc jge 0x10b07dd5 */
  if ((C.sf==C.of)) goto L_10b07dd5;
  /* 10b07dce mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10b07dd5:;
  /* 10b07dd5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b07dd7 call 0x10b07670 */
  push32(0x10b07ddcu); f_10b07670();
  /* 10b07ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b07de1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b07de3 mov eax, dword ptr [0x10b30eac] */
  EAX = (r32((uint32_t)(0x10b30eac)));
  /* 10b07de8 push eax */
  push32((uint32_t)(EAX));
  /* 10b07de9 call dword ptr [0x10b32390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32390))), 0x10b07defu);
  /* 10b07def test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b07df1 jne 0x10b07e1d */
  if (!C.zf) goto L_10b07e1d;
  /* 10b07df3 call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b07df9u);
  /* 10b07df9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07dfc jne 0x10b07e16 */
  if (!C.zf) goto L_10b07e16;
  /* 10b07dfe call 0x10b0bab0 */
  push32(0x10b07e03u); f_10b0bab0();
  /* 10b07e03 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10b07e09 call 0x10b0baa0 */
  push32(0x10b07e0eu); f_10b0baa0();
  /* 10b07e0e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10b07e14 jmp 0x10b07e1d */
  goto L_10b07e1d;
L_10b07e16:;
  /* 10b07e16 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10b07e1d:;
  /* 10b07e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07e20 mov esp, ebp */
  ESP = (EBP);
  /* 10b07e22 pop ebp */
  EBP = (pop32());
  /* 10b07e23 ret  */
  ESPCHK(0x10b07db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e30 @ 0x10b07e30 (10 bytes, 5 insns) */
void f_10b07e30(void) {
  FTRACE(0x10b07e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07e31 mov ebp, esp */
  EBP = (ESP);
  /* 10b07e33 call 0x10b07db0 */
  push32(0x10b07e38u); f_10b07db0();
  /* 10b07e38 pop ebp */
  EBP = (pop32());
  /* 10b07e39 ret  */
  ESPCHK(0x10b07e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e40 @ 0x10b07e40 (10 bytes, 5 insns) */
void f_10b07e40(void) {
  FTRACE(0x10b07e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07e41 mov ebp, esp */
  EBP = (ESP);
  /* 10b07e43 mov eax, dword ptr [0x10b2dc94] */
  EAX = (r32((uint32_t)(0x10b2dc94)));
  /* 10b07e48 pop ebp */
  EBP = (pop32());
  /* 10b07e49 ret  */
  ESPCHK(0x10b07e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x10b07e50 (31 bytes, 11 insns) */
void f_10b07e50(void) {
  FTRACE(0x10b07e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07e51 mov ebp, esp */
  EBP = (ESP);
  /* 10b07e53 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07e5a jbe 0x10b07e60 */
  if ((C.cf||C.zf)) goto L_10b07e60;
  /* 10b07e5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07e5e jmp 0x10b07e6d */
  goto L_10b07e6d;
L_10b07e60:;
  /* 10b07e60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07e63 mov dword ptr [0x10b2dc94], eax */
  w32((uint32_t)(0x10b2dc94), (EAX));
  /* 10b07e68 mov eax, 1 */
  EAX = (0x1u);
L_10b07e6d:;
  /* 10b07e6d pop ebp */
  EBP = (pop32());
  /* 10b07e6e ret  */
  ESPCHK(0x10b07e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e70 @ 0x10b07e70 (89 bytes, 20 insns) */
void f_10b07e70(void) {
  FTRACE(0x10b07e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07e71 mov ebp, esp */
  EBP = (ESP);
  /* 10b07e73 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10b07e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b07e7a mov eax, dword ptr [0x10b30eac] */
  EAX = (r32((uint32_t)(0x10b30eac)));
  /* 10b07e7f push eax */
  push32((uint32_t)(EAX));
  /* 10b07e80 call dword ptr [0x10b32304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32304))), 0x10b07e86u);
  /* 10b07e86 mov dword ptr [0x10b30ea8], eax */
  w32((uint32_t)(0x10b30ea8), (EAX));
  /* 10b07e8b cmp dword ptr [0x10b30ea8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b30ea8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07e92 jne 0x10b07e98 */
  if (!C.zf) goto L_10b07e98;
  /* 10b07e94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b07e96 jmp 0x10b07ec7 */
  goto L_10b07ec7;
L_10b07e98:;
  /* 10b07e98 mov ecx, dword ptr [0x10b30ea8] */
  ECX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b07e9e mov dword ptr [0x10b30e9c], ecx */
  w32((uint32_t)(0x10b30e9c), (ECX));
  /* 10b07ea4 mov dword ptr [0x10b30ea0], 0 */
  w32((uint32_t)(0x10b30ea0), (0x0u));
  /* 10b07eae mov dword ptr [0x10b30ea4], 0 */
  w32((uint32_t)(0x10b30ea4), (0x0u));
  /* 10b07eb8 mov dword ptr [0x10b30e88], 0x10 */
  w32((uint32_t)(0x10b30e88), (0x10u));
  /* 10b07ec2 mov eax, 1 */
  EAX = (0x1u);
L_10b07ec7:;
  /* 10b07ec7 pop ebp */
  EBP = (pop32());
  /* 10b07ec8 ret  */
  ESPCHK(0x10b07e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed0 @ 0x10b07ed0 (85 bytes, 29 insns) */
void f_10b07ed0(void) {
  FTRACE(0x10b07ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10b07ed3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07ed6 mov eax, dword ptr [0x10b30ea4] */
  EAX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b07edb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b07ede mov ecx, dword ptr [0x10b30ea8] */
  ECX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b07ee4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07ee6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b07ee9 mov edx, dword ptr [0x10b30ea8] */
  EDX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b07eef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b07ef2:;
  /* 10b07ef2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07ef5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07ef8 jae 0x10b07f1f */
  if (!C.cf) goto L_10b07f1f;
  /* 10b07efa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07efd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07f00 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07f03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b07f06 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b07f0d jae 0x10b07f14 */
  if (!C.cf) goto L_10b07f14;
  /* 10b07f0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07f12 jmp 0x10b07f21 */
  goto L_10b07f21;
L_10b07f14:;
  /* 10b07f14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07f17 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07f1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b07f1d jmp 0x10b07ef2 */
  goto L_10b07ef2;
L_10b07f1f:;
  /* 10b07f1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b07f21:;
  /* 10b07f21 mov esp, ebp */
  ESP = (EBP);
  /* 10b07f23 pop ebp */
  EBP = (pop32());
  /* 10b07f24 ret  */
  ESPCHK(0x10b07ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f30 @ 0x10b07f30 (95 bytes, 33 insns) */
void f_10b07f30(void) {
  FTRACE(0x10b07f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07f31 mov ebp, esp */
  EBP = (ESP);
  /* 10b07f33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07f36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07f39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07f3c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07f3f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b07f42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07f45 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10b07f48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b07f4b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b07f50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07f53 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b07f55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07f58 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b07f5b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b07f5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b07f5f jne 0x10b07f81 */
  if (!C.zf) goto L_10b07f81;
  /* 10b07f61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07f64 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10b07f67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b07f69 jne 0x10b07f81 */
  if (!C.zf) goto L_10b07f81;
  /* 10b07f6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b07f6e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b07f74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b07f76 je 0x10b07f81 */
  if (C.zf) goto L_10b07f81;
  /* 10b07f78 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10b07f7f jmp 0x10b07f88 */
  goto L_10b07f88;
L_10b07f81:;
  /* 10b07f81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10b07f88:;
  /* 10b07f88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b07f8b mov esp, ebp */
  ESP = (EBP);
  /* 10b07f8d pop ebp */
  EBP = (pop32());
  /* 10b07f8e ret  */
  ESPCHK(0x10b07f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f90 @ 0x10b07f90 (1485 bytes, 453 insns) */
void f_10b07f90(void) {
  FTRACE(0x10b07f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b07f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b07f91 mov ebp, esp */
  EBP = (ESP);
  /* 10b07f93 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07f99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b07f9c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10b07f9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b07fa2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07fa5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07fa8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b07fab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b07fae shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10b07fb1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b07fb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b07fb7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b07fbd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b07fc0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10b07fc7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b07fca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b07fcd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07fd0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b07fd3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b07fd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b07fd8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b07fdb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10b07fde mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b07fe1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b07fe4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10b07fe7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b07fea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b07fec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b07fef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b07ff2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10b07ff5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b07ff8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b07ffb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b07ffe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b08000 jne 0x10b08128 */
  if (!C.zf) goto L_10b08128;
  /* 10b08006 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08009 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b0800c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0800f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b08012 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08016 jbe 0x10b0801f */
  if ((C.cf||C.zf)) goto L_10b0801f;
  /* 10b08018 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10b0801f:;
  /* 10b0801f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08022 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08025 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b08028 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0802b jne 0x10b08101 */
  if (!C.zf) goto L_10b08101;
  /* 10b08031 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08035 jae 0x10b08096 */
  if (!C.cf) goto L_10b08096;
  /* 10b08037 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b0803c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0803f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b08041 not eax */
  EAX = (~(EAX));
  /* 10b08043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08046 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08049 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10b0804d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0804f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08052 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08055 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10b08059 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b0805c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0805f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b08062 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b08065 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08068 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0806b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b0806e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08071 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08074 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b08078 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0807a jne 0x10b08094 */
  if (!C.zf) goto L_10b08094;
  /* 10b0807c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b08081 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b08084 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b08086 not eax */
  EAX = (~(EAX));
  /* 10b08088 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0808b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0808d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0808f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08092 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b08094:;
  /* 10b08094 jmp 0x10b08101 */
  goto L_10b08101;
L_10b08096:;
  /* 10b08096 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b08099 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0809c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b080a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b080a3 not edx */
  EDX = (~(EDX));
  /* 10b080a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b080a8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b080ab mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10b080b2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b080b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b080b7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b080ba mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10b080c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b080c4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b080c7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b080ca sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b080cd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b080d0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b080d3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b080d6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b080d9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b080dc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b080e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b080e2 jne 0x10b08101 */
  if (!C.zf) goto L_10b08101;
  /* 10b080e4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b080e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b080ea mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b080ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b080f1 not edx */
  EDX = (~(EDX));
  /* 10b080f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b080f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b080f9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b080fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b080fe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10b08101:;
  /* 10b08101 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08104 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b08107 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b0810a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b0810d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b08110 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08113 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b08116 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08119 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b0811c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b0811f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08122 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08125 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10b08128:;
  /* 10b08128 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0812b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b0812e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08131 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b08134 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08138 jbe 0x10b08141 */
  if ((C.cf||C.zf)) goto L_10b08141;
  /* 10b0813a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10b08141:;
  /* 10b08141 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b08144 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b08147 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b08149 jne 0x10b082a5 */
  if (!C.zf) goto L_10b082a5;
  /* 10b0814f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b08152 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08155 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10b08158 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0815b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b0815e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08161 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10b08164 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08168 jbe 0x10b08171 */
  if ((C.cf||C.zf)) goto L_10b08171;
  /* 10b0816a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10b08171:;
  /* 10b08171 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08174 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08177 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10b0817a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0817d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b08180 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08183 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10b08186 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0818a jbe 0x10b08193 */
  if ((C.cf||C.zf)) goto L_10b08193;
  /* 10b0818c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10b08193:;
  /* 10b08193 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08196 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08199 je 0x10b0829f */
  if (C.zf) goto L_10b0829f;
  /* 10b0819f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b081a2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b081a5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b081a8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b081ab jne 0x10b08281 */
  if (!C.zf) goto L_10b08281;
  /* 10b081b1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b081b5 jae 0x10b08216 */
  if (!C.cf) goto L_10b08216;
  /* 10b081b7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b081bc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b081bf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b081c1 not edx */
  EDX = (~(EDX));
  /* 10b081c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b081c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b081c9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b081cd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b081cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b081d2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b081d5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b081d9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b081dc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b081df mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b081e2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b081e5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b081e8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b081eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b081ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b081f1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b081f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b081f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b081fa jne 0x10b08214 */
  if (!C.zf) goto L_10b08214;
  /* 10b081fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b08201 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08204 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b08206 not edx */
  EDX = (~(EDX));
  /* 10b08208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0820b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0820d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0820f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08212 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b08214:;
  /* 10b08214 jmp 0x10b08281 */
  goto L_10b08281;
L_10b08216:;
  /* 10b08216 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08219 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0821c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b08221 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b08223 not eax */
  EAX = (~(EAX));
  /* 10b08225 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08228 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b0822b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b08232 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b08234 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08237 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b0823a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10b08241 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08244 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08247 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b0824a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b0824d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08250 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08253 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b08256 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08259 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0825c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b08260 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b08262 jne 0x10b08281 */
  if (!C.zf) goto L_10b08281;
  /* 10b08264 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08267 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0826a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b0826f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b08271 not eax */
  EAX = (~(EAX));
  /* 10b08273 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08276 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b08279 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0827b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0827e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b08281:;
  /* 10b08281 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b08284 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b08287 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b0828a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0828d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b08290 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b08293 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b08296 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b08299 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b0829c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10b0829f:;
  /* 10b0829f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b082a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10b082a5:;
  /* 10b082a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b082a8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b082ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b082ad jne 0x10b082bb */
  if (!C.zf) goto L_10b082bb;
  /* 10b082af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b082b2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b082b5 je 0x10b083cb */
  if (C.zf) goto L_10b083cb;
L_10b082bb:;
  /* 10b082bb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b082be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b082c1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10b082c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b082c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b082ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b082cd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b082d0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b082d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b082d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b082d9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10b082dc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b082df mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b082e2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10b082e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b082e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b082eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b082ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b082f1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b082f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b082f7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b082fa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b082fd jne 0x10b083cb */
  if (!C.zf) goto L_10b083cb;
  /* 10b08303 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08307 jae 0x10b08364 */
  if (!C.cf) goto L_10b08364;
  /* 10b08309 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b0830c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0830f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b08313 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08316 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08319 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b0831c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b0831f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08322 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08325 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10b08328 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0832a jne 0x10b08342 */
  if (!C.zf) goto L_10b08342;
  /* 10b0832c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b08331 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08334 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b08336 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08339 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0833b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0833d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08340 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b08342:;
  /* 10b08342 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b08347 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0834a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b0834c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0834f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08352 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10b08356 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b08358 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0835b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b0835e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10b08362 jmp 0x10b083cb */
  goto L_10b083cb;
L_10b08364:;
  /* 10b08364 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08367 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0836a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b0836e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b08371 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08374 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b08377 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b0837a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b0837d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08380 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10b08383 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b08385 jne 0x10b083a2 */
  if (!C.zf) goto L_10b083a2;
  /* 10b08387 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0838a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0838d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b08392 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b08394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08397 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0839a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0839c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0839f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10b083a2:;
  /* 10b083a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b083a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b083a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b083ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b083af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b083b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b083b5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b083bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b083be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b083c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10b083c4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10b083cb:;
  /* 10b083cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b083ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b083d1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b083d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b083d6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b083d9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b083dc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10b083df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b083e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b083e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b083e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b083ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b083ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b083ef cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b083f2 jne 0x10b08559 */
  if (!C.zf) goto L_10b08559;
  /* 10b083f8 cmp dword ptr [0x10b30ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b30ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b083ff je 0x10b08548 */
  if (C.zf) goto L_10b08548;
  /* 10b08405 mov eax, dword ptr [0x10b30e98] */
  EAX = (r32((uint32_t)(0x10b30e98)));
  /* 10b0840a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10b0840d mov ecx, dword ptr [0x10b30ea0] */
  ECX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b08413 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b08416 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08418 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b0841b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b08420 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b08425 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08428 push eax */
  push32((uint32_t)(EAX));
  /* 10b08429 call dword ptr [0x10b32368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32368))), 0x10b0842fu);
  /* 10b0842f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b08434 mov ecx, dword ptr [0x10b30e98] */
  ECX = (r32((uint32_t)(0x10b30e98)));
  /* 10b0843a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b0843c mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b08441 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b08444 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b08446 mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b0844c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b0844f mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b08454 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b08457 mov edx, dword ptr [0x10b30e98] */
  EDX = (r32((uint32_t)(0x10b30e98)));
  /* 10b0845d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10b08468 mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b0846d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b08470 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10b08473 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b08476 mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b0847b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b0847e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10b08481 mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b08487 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b0848a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10b0848e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b08490 jne 0x10b084a6 */
  if (!C.zf) goto L_10b084a6;
  /* 10b08492 mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b08498 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b0849b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10b0849d mov ecx, dword ptr [0x10b30ea0] */
  ECX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b084a3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10b084a6:;
  /* 10b084a6 mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b084ac cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b084b0 jne 0x10b08548 */
  if (!C.zf) goto L_10b08548;
  /* 10b084b6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b084bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b084bd mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b084c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b084c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b084c6 call dword ptr [0x10b32368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32368))), 0x10b084ccu);
  /* 10b084cc mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b084d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b084d5 push eax */
  push32((uint32_t)(EAX));
  /* 10b084d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b084d8 mov ecx, dword ptr [0x10b30eac] */
  ECX = (r32((uint32_t)(0x10b30eac)));
  /* 10b084de push ecx */
  push32((uint32_t)(ECX));
  /* 10b084df call dword ptr [0x10b323b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323b0))), 0x10b084e5u);
  /* 10b084e5 mov edx, dword ptr [0x10b30ea4] */
  EDX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b084eb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b084ee mov eax, dword ptr [0x10b30ea8] */
  EAX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b084f3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b084f5 mov ecx, dword ptr [0x10b30ea0] */
  ECX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b084fb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b084fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08500 push eax */
  push32((uint32_t)(EAX));
  /* 10b08501 mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b08507 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0850a push edx */
  push32((uint32_t)(EDX));
  /* 10b0850b mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b08510 push eax */
  push32((uint32_t)(EAX));
  /* 10b08511 call 0x10b0bac0 */
  push32(0x10b08516u); f_10b0bac0();
  /* 10b08516 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08519 mov ecx, dword ptr [0x10b30ea4] */
  ECX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b0851f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08522 mov dword ptr [0x10b30ea4], ecx */
  w32((uint32_t)(0x10b30ea4), (ECX));
  /* 10b08528 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0852b cmp edx, dword ptr [0x10b30ea0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10b30ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08531 jbe 0x10b0853c */
  if ((C.cf||C.zf)) goto L_10b0853c;
  /* 10b08533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08536 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08539 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b0853c:;
  /* 10b0853c mov ecx, dword ptr [0x10b30ea8] */
  ECX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b08542 mov dword ptr [0x10b30e9c], ecx */
  w32((uint32_t)(0x10b30e9c), (ECX));
L_10b08548:;
  /* 10b08548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0854b mov dword ptr [0x10b30ea0], edx */
  w32((uint32_t)(0x10b30ea0), (EDX));
  /* 10b08551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08554 mov dword ptr [0x10b30e98], eax */
  w32((uint32_t)(0x10b30e98), (EAX));
L_10b08559:;
  /* 10b08559 mov esp, ebp */
  ESP = (EBP);
  /* 10b0855b pop ebp */
  EBP = (pop32());
  /* 10b0855c ret  */
  ESPCHK(0x10b07f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008560 @ 0x10b08560 (1334 bytes, 427 insns) */
void f_10b08560(void) {
  FTRACE(0x10b08560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b08560 push ebp */
  push32((uint32_t)(EBP));
  /* 10b08561 mov ebp, esp */
  EBP = (ESP);
  /* 10b08563 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08566 push esi */
  push32((uint32_t)(ESI));
  /* 10b08567 mov eax, dword ptr [0x10b30ea4] */
  EAX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b0856c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0856f mov ecx, dword ptr [0x10b30ea8] */
  ECX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b08575 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08577 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b0857a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0857d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08580 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10b08583 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10b08586 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08589 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b0858c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0858f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b08592 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08596 jge 0x10b085ac */
  if ((C.sf==C.of)) goto L_10b085ac;
  /* 10b08598 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0859b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0859e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b085a0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b085a3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10b085aa jmp 0x10b085c1 */
  goto L_10b085c1;
L_10b085ac:;
  /* 10b085ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b085b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b085b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b085b9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b085bc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b085be mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10b085c1:;
  /* 10b085c1 mov ecx, dword ptr [0x10b30e9c] */
  ECX = (r32((uint32_t)(0x10b30e9c)));
  /* 10b085c7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10b085ca:;
  /* 10b085ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b085cd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b085d0 jae 0x10b085f6 */
  if (!C.cf) goto L_10b085f6;
  /* 10b085d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b085d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b085d8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10b085da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b085dd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b085e0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10b085e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b085e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b085e7 je 0x10b085eb */
  if (C.zf) goto L_10b085eb;
  /* 10b085e9 jmp 0x10b085f6 */
  goto L_10b085f6;
L_10b085eb:;
  /* 10b085eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b085ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b085f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b085f4 jmp 0x10b085ca */
  goto L_10b085ca;
L_10b085f6:;
  /* 10b085f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b085f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b085fc jne 0x10b086dd */
  if (!C.zf) goto L_10b086dd;
  /* 10b08602 mov eax, dword ptr [0x10b30ea8] */
  EAX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b08607 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10b0860a:;
  /* 10b0860a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0860d cmp ecx, dword ptr [0x10b30e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08613 jae 0x10b08639 */
  if (!C.cf) goto L_10b08639;
  /* 10b08615 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08618 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0861b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10b0861d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08620 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b08623 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10b08626 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b08628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0862a je 0x10b0862e */
  if (C.zf) goto L_10b0862e;
  /* 10b0862c jmp 0x10b08639 */
  goto L_10b08639;
L_10b0862e:;
  /* 10b0862e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08631 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08634 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b08637 jmp 0x10b0860a */
  goto L_10b0860a;
L_10b08639:;
  /* 10b08639 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0863c cmp ecx, dword ptr [0x10b30e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08642 jne 0x10b086dd */
  if (!C.zf) goto L_10b086dd;
L_10b08648:;
  /* 10b08648 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0864b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0864e jae 0x10b08666 */
  if (!C.cf) goto L_10b08666;
  /* 10b08650 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08653 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08657 je 0x10b0865b */
  if (C.zf) goto L_10b0865b;
  /* 10b08659 jmp 0x10b08666 */
  goto L_10b08666;
L_10b0865b:;
  /* 10b0865b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0865e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08661 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b08664 jmp 0x10b08648 */
  goto L_10b08648;
L_10b08666:;
  /* 10b08666 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08669 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0866c jne 0x10b086b7 */
  if (!C.zf) goto L_10b086b7;
  /* 10b0866e mov eax, dword ptr [0x10b30ea8] */
  EAX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b08673 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10b08676:;
  /* 10b08676 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08679 cmp ecx, dword ptr [0x10b30e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0867f jae 0x10b08697 */
  if (!C.cf) goto L_10b08697;
  /* 10b08681 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08684 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08688 je 0x10b0868c */
  if (C.zf) goto L_10b0868c;
  /* 10b0868a jmp 0x10b08697 */
  goto L_10b08697;
L_10b0868c:;
  /* 10b0868c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0868f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08692 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b08695 jmp 0x10b08676 */
  goto L_10b08676;
L_10b08697:;
  /* 10b08697 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0869a cmp ecx, dword ptr [0x10b30e9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30e9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b086a0 jne 0x10b086b7 */
  if (!C.zf) goto L_10b086b7;
  /* 10b086a2 call 0x10b08aa0 */
  push32(0x10b086a7u); f_10b08aa0();
  /* 10b086a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b086aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b086ae jne 0x10b086b7 */
  if (!C.zf) goto L_10b086b7;
  /* 10b086b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b086b2 jmp 0x10b08a91 */
  goto L_10b08a91;
L_10b086b7:;
  /* 10b086b7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b086ba push edx */
  push32((uint32_t)(EDX));
  /* 10b086bb call 0x10b08bb0 */
  push32(0x10b086c0u); f_10b08bb0();
  /* 10b086c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b086c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b086c6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b086c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b086cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b086ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b086d1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b086d4 jne 0x10b086dd */
  if (!C.zf) goto L_10b086dd;
  /* 10b086d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b086d8 jmp 0x10b08a91 */
  goto L_10b08a91;
L_10b086dd:;
  /* 10b086dd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b086e0 mov dword ptr [0x10b30e9c], edx */
  w32((uint32_t)(0x10b30e9c), (EDX));
  /* 10b086e6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b086e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b086ec mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10b086ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b086f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b086f4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10b086f7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b086fb je 0x10b08720 */
  if (C.zf) goto L_10b08720;
  /* 10b086fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08700 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08703 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b08706 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10b0870a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0870d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08710 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10b08713 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10b0871a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10b0871c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0871e jne 0x10b08755 */
  if (!C.zf) goto L_10b08755;
L_10b08720:;
  /* 10b08720 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10b08727:;
  /* 10b08727 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0872a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b0872d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b08730 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10b08734 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08737 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b0873a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10b0873d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10b08744 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10b08746 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b08748 jne 0x10b08755 */
  if (!C.zf) goto L_10b08755;
  /* 10b0874a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0874d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08750 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10b08753 jmp 0x10b08727 */
  goto L_10b08727;
L_10b08755:;
  /* 10b08755 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08758 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0875e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08761 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b08768 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0876b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b08772 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08775 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08778 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0877b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10b0877f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10b08782 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08786 jne 0x10b087a2 */
  if (!C.zf) goto L_10b087a2;
  /* 10b08788 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10b0878f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08792 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08795 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b08798 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10b0879f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10b087a2:;
  /* 10b087a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b087a6 jl 0x10b087bb */
  if ((C.sf!=C.of)) goto L_10b087bb;
  /* 10b087a8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b087ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b087ad mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b087b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b087b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b087b6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b087b9 jmp 0x10b087a2 */
  goto L_10b087a2;
L_10b087bb:;
  /* 10b087bb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b087be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b087c1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10b087c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b087c8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b087cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b087cd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b087d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b087d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b087d6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b087d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b087dc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b087df cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b087e3 jle 0x10b087ec */
  if ((C.zf||C.sf!=C.of)) goto L_10b087ec;
  /* 10b087e5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10b087ec:;
  /* 10b087ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b087ef cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b087f2 je 0x10b08a10 */
  if (C.zf) goto L_10b08a10;
  /* 10b087f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b087fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b087fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b08801 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08804 jne 0x10b088da */
  if (!C.zf) goto L_10b088da;
  /* 10b0880a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0880e jge 0x10b0886f */
  if ((C.sf==C.of)) goto L_10b0886f;
  /* 10b08810 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b08815 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08818 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b0881a not eax */
  EAX = (~(EAX));
  /* 10b0881c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0881f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08822 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10b08826 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b08828 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0882b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b0882e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10b08832 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08835 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08838 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b0883b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b0883e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08841 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08844 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b08847 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b0884a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0884d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b08851 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b08853 jne 0x10b0886d */
  if (!C.zf) goto L_10b0886d;
  /* 10b08855 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b0885a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0885d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b0885f not eax */
  EAX = (~(EAX));
  /* 10b08861 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08864 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b08866 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b08868 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0886b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b0886d:;
  /* 10b0886d jmp 0x10b088da */
  goto L_10b088da;
L_10b0886f:;
  /* 10b0886f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08872 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08875 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b0887a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b0887c not edx */
  EDX = (~(EDX));
  /* 10b0887e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08881 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08884 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10b0888b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0888d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08890 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08893 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10b0889a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b0889d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b088a0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b088a3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b088a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b088a9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b088ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b088af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b088b2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b088b5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b088b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b088bb jne 0x10b088da */
  if (!C.zf) goto L_10b088da;
  /* 10b088bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b088c0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b088c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b088c8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b088ca not edx */
  EDX = (~(EDX));
  /* 10b088cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b088cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b088d2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b088d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b088d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10b088da:;
  /* 10b088da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b088dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b088e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b088e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b088e6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b088e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b088ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b088ef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b088f2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b088f5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b088f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b088fc je 0x10b08a10 */
  if (C.zf) goto L_10b08a10;
  /* 10b08902 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08908 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10b0890b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0890e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08911 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b08914 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b08917 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b0891a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0891d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b08920 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b08923 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b08926 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08929 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b0892c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0892f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b08932 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08935 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b08938 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0893b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0893e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b08941 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08944 jne 0x10b08a10 */
  if (!C.zf) goto L_10b08a10;
  /* 10b0894a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0894e jge 0x10b089aa */
  if ((C.sf==C.of)) goto L_10b089aa;
  /* 10b08950 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08953 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08956 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b0895a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b0895d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08960 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b08963 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b08965 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08968 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0896b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10b0896e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b08970 jne 0x10b08988 */
  if (!C.zf) goto L_10b08988;
  /* 10b08972 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b08977 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0897a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b0897c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0897f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b08981 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b08983 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08986 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b08988:;
  /* 10b08988 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b0898d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08990 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b08992 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08995 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08998 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b0899c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0899e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b089a1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b089a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b089a8 jmp 0x10b08a10 */
  goto L_10b08a10;
L_10b089aa:;
  /* 10b089aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b089ad add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b089b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b089b4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b089b7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b089ba mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b089bd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b089bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b089c2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b089c5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10b089c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b089ca jne 0x10b089e7 */
  if (!C.zf) goto L_10b089e7;
  /* 10b089cc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b089cf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b089d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b089d7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b089d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b089dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b089df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b089e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b089e4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b089e7:;
  /* 10b089e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b089ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b089ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b089f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b089f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b089f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b089fa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10b08a01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b08a03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08a06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08a09 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10b08a10:;
  /* 10b08a10 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08a14 je 0x10b08a2a */
  if (C.zf) goto L_10b08a2a;
  /* 10b08a16 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08a19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b08a1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b08a1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08a21 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08a24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b08a27 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10b08a2a:;
  /* 10b08a2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08a2d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08a30 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b08a33 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08a36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08a39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08a3c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b08a3e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08a41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08a44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08a47 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08a4a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10b08a4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08a50 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b08a52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08a55 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b08a57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08a5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08a5d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b08a5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b08a61 jne 0x10b08a83 */
  if (!C.zf) goto L_10b08a83;
  /* 10b08a63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08a66 cmp eax, dword ptr [0x10b30ea0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b30ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08a6c jne 0x10b08a83 */
  if (!C.zf) goto L_10b08a83;
  /* 10b08a6e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08a71 cmp ecx, dword ptr [0x10b30e98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30e98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08a77 jne 0x10b08a83 */
  if (!C.zf) goto L_10b08a83;
  /* 10b08a79 mov dword ptr [0x10b30ea0], 0 */
  w32((uint32_t)(0x10b30ea0), (0x0u));
L_10b08a83:;
  /* 10b08a83 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10b08a86 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08a89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10b08a8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08a8e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b08a91:;
  /* 10b08a91 pop esi */
  ESI = (pop32());
  /* 10b08a92 mov esp, ebp */
  ESP = (EBP);
  /* 10b08a94 pop ebp */
  EBP = (pop32());
  /* 10b08a95 ret  */
  ESPCHK(0x10b08560u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aa0 @ 0x10b08aa0 (271 bytes, 78 insns) */
void f_10b08aa0(void) {
  FTRACE(0x10b08aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b08aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b08aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10b08aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b08aa4 mov eax, dword ptr [0x10b30ea4] */
  EAX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b08aa9 cmp eax, dword ptr [0x10b30e88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b30e88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08aaf jne 0x10b08afb */
  if (!C.zf) goto L_10b08afb;
  /* 10b08ab1 mov ecx, dword ptr [0x10b30e88] */
  ECX = (r32((uint32_t)(0x10b30e88)));
  /* 10b08ab7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08aba imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b08abd push ecx */
  push32((uint32_t)(ECX));
  /* 10b08abe mov edx, dword ptr [0x10b30ea8] */
  EDX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b08ac4 push edx */
  push32((uint32_t)(EDX));
  /* 10b08ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b08ac7 mov eax, dword ptr [0x10b30eac] */
  EAX = (r32((uint32_t)(0x10b30eac)));
  /* 10b08acc push eax */
  push32((uint32_t)(EAX));
  /* 10b08acd call dword ptr [0x10b3230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3230c))), 0x10b08ad3u);
  /* 10b08ad3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b08ad6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08ada jne 0x10b08ae3 */
  if (!C.zf) goto L_10b08ae3;
  /* 10b08adc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b08ade jmp 0x10b08bab */
  goto L_10b08bab;
L_10b08ae3:;
  /* 10b08ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08ae6 mov dword ptr [0x10b30ea8], ecx */
  w32((uint32_t)(0x10b30ea8), (ECX));
  /* 10b08aec mov edx, dword ptr [0x10b30e88] */
  EDX = (r32((uint32_t)(0x10b30e88)));
  /* 10b08af2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08af5 mov dword ptr [0x10b30e88], edx */
  w32((uint32_t)(0x10b30e88), (EDX));
L_10b08afb:;
  /* 10b08afb mov eax, dword ptr [0x10b30ea4] */
  EAX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b08b00 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b08b03 mov ecx, dword ptr [0x10b30ea8] */
  ECX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b08b09 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08b0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b08b0e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10b08b13 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b08b15 mov edx, dword ptr [0x10b30eac] */
  EDX = (r32((uint32_t)(0x10b30eac)));
  /* 10b08b1b push edx */
  push32((uint32_t)(EDX));
  /* 10b08b1c call dword ptr [0x10b32304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32304))), 0x10b08b22u);
  /* 10b08b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b25 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10b08b28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b2b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08b2f jne 0x10b08b35 */
  if (!C.zf) goto L_10b08b35;
  /* 10b08b31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b08b33 jmp 0x10b08bab */
  goto L_10b08bab;
L_10b08b35:;
  /* 10b08b35 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b08b37 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10b08b3c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10b08b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b08b43 call dword ptr [0x10b322fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322fc))), 0x10b08b49u);
  /* 10b08b49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b4c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10b08b4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b52 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08b56 jne 0x10b08b72 */
  if (!C.zf) goto L_10b08b72;
  /* 10b08b58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b08b5e push ecx */
  push32((uint32_t)(ECX));
  /* 10b08b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b08b61 mov edx, dword ptr [0x10b30eac] */
  EDX = (r32((uint32_t)(0x10b30eac)));
  /* 10b08b67 push edx */
  push32((uint32_t)(EDX));
  /* 10b08b68 call dword ptr [0x10b323b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323b0))), 0x10b08b6eu);
  /* 10b08b6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b08b70 jmp 0x10b08bab */
  goto L_10b08bab;
L_10b08b72:;
  /* 10b08b72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b75 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b08b7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b7e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b08b85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b88 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10b08b8f mov eax, dword ptr [0x10b30ea4] */
  EAX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b08b94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08b97 mov dword ptr [0x10b30ea4], eax */
  w32((uint32_t)(0x10b30ea4), (EAX));
  /* 10b08b9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08b9f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b08ba2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10b08ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b08bab:;
  /* 10b08bab mov esp, ebp */
  ESP = (EBP);
  /* 10b08bad pop ebp */
  EBP = (pop32());
  /* 10b08bae ret  */
  ESPCHK(0x10b08aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bb0 @ 0x10b08bb0 (494 bytes, 149 insns) */
void f_10b08bb0(void) {
  FTRACE(0x10b08bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b08bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b08bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b08bb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08bb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b08bbc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b08bbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08bc2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b08bc5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b08bc8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10b08bcf:;
  /* 10b08bcf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08bd3 jl 0x10b08be8 */
  if ((C.sf!=C.of)) goto L_10b08be8;
  /* 10b08bd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b08bd8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b08bda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b08bdd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08be0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08be3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10b08be6 jmp 0x10b08bcf */
  goto L_10b08bcf;
L_10b08be8:;
  /* 10b08be8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08beb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b08bf1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08bf4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b08bfb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b08bfe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b08c05 jmp 0x10b08c10 */
  goto L_10b08c10;
L_10b08c07:;
  /* 10b08c07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08c0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08c0d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10b08c10:;
  /* 10b08c10 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08c14 jge 0x10b08c36 */
  if ((C.sf==C.of)) goto L_10b08c36;
  /* 10b08c16 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08c19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b08c1c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10b08c1f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b08c22 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08c25 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08c28 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b08c2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08c2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08c31 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b08c34 jmp 0x10b08c07 */
  goto L_10b08c07;
L_10b08c36:;
  /* 10b08c36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08c39 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10b08c3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08c3f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b08c42 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08c44 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b08c47 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b08c49 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b08c4e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b08c53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08c56 push edx */
  push32((uint32_t)(EDX));
  /* 10b08c57 call dword ptr [0x10b322fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322fc))), 0x10b08c5du);
  /* 10b08c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b08c5f jne 0x10b08c69 */
  if (!C.zf) goto L_10b08c69;
  /* 10b08c61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b08c64 jmp 0x10b08d9a */
  goto L_10b08d9a;
L_10b08c69:;
  /* 10b08c69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08c6c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08c71 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b08c74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08c77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b08c7a jmp 0x10b08c88 */
  goto L_10b08c88;
L_10b08c7c:;
  /* 10b08c7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08c7f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08c85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b08c88:;
  /* 10b08c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08c8b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08c8e ja 0x10b08ced */
  if ((!C.cf&&!C.zf)) goto L_10b08ced;
  /* 10b08c90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08c93 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10b08c9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08c9d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10b08ca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08caa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08cad mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b08cb0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08cb3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10b08cb9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08cbc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08cc2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08cc5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b08cc8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08ccb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08cd1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08cd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b08cd7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08cda add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08cdf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b08ce2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b08ce5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10b08ceb jmp 0x10b08c7c */
  goto L_10b08c7c;
L_10b08ced:;
  /* 10b08ced mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b08cf0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08cf6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b08cf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08cfc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08cff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08d02 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b08d05 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08d08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b08d0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b08d0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08d11 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08d14 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b08d17 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b08d1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08d1d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08d20 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10b08d23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08d26 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b08d29 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b08d2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08d2f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08d32 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b08d35 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08d38 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08d3b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10b08d43 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08d46 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08d49 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10b08d54 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08d57 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10b08d5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08d5e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10b08d61 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b08d64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08d67 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10b08d6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b08d6c jne 0x10b08d7d */
  if (!C.zf) goto L_10b08d7d;
  /* 10b08d6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08d71 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b08d74 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b08d77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08d7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b08d7d:;
  /* 10b08d7d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b08d82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08d85 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b08d87 not edx */
  EDX = (~(EDX));
  /* 10b08d89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08d8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b08d8f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b08d91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08d94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b08d97 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10b08d9a:;
  /* 10b08d9a mov esp, ebp */
  ESP = (EBP);
  /* 10b08d9c pop ebp */
  EBP = (pop32());
  /* 10b08d9d ret  */
  ESPCHK(0x10b08bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008da0 @ 0x10b08da0 (1515 bytes, 489 insns) */
void f_10b08da0(void) {
  FTRACE(0x10b08da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b08da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b08da1 mov ebp, esp */
  EBP = (ESP);
  /* 10b08da3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08da6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b08da9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08dac and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10b08dae mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b08db1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08db4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b08db7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10b08dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08dbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b08dc0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08dc3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b08dc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b08dc9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10b08dcc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b08dcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08dd2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b08dd8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08ddb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b08de2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b08de5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b08de8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08deb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b08dee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08df1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b08df3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08df6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10b08df9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08dfc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08dff mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10b08e02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08e05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b08e07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b08e0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b08e0d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08e10 jle 0x10b090c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10b090c6;
  /* 10b08e16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08e19 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b08e1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b08e1e jne 0x10b08e2b */
  if (!C.zf) goto L_10b08e2b;
  /* 10b08e20 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08e23 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08e26 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08e29 jle 0x10b08e32 */
  if ((C.zf||C.sf!=C.of)) goto L_10b08e32;
L_10b08e2b:;
  /* 10b08e2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b08e2d jmp 0x10b09387 */
  goto L_10b09387;
L_10b08e32:;
  /* 10b08e32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08e35 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b08e38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08e3b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b08e3e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08e42 jbe 0x10b08e4b */
  if ((C.cf||C.zf)) goto L_10b08e4b;
  /* 10b08e44 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10b08e4b:;
  /* 10b08e4b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08e4e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08e51 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b08e54 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08e57 jne 0x10b08f2d */
  if (!C.zf) goto L_10b08f2d;
  /* 10b08e5d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08e61 jae 0x10b08ec2 */
  if (!C.cf) goto L_10b08ec2;
  /* 10b08e63 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b08e68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08e6b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b08e6d not edx */
  EDX = (~(EDX));
  /* 10b08e6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08e72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08e75 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b08e79 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b08e7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08e7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08e81 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b08e85 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08e88 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08e8b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b08e8e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b08e91 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08e94 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08e97 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b08e9a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08e9d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08ea0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b08ea4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b08ea6 jne 0x10b08ec0 */
  if (!C.zf) goto L_10b08ec0;
  /* 10b08ea8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b08ead mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08eb0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b08eb2 not edx */
  EDX = (~(EDX));
  /* 10b08eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08eb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b08eb9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b08ebb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08ebe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b08ec0:;
  /* 10b08ec0 jmp 0x10b08f2d */
  goto L_10b08f2d;
L_10b08ec2:;
  /* 10b08ec2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08ec5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08ec8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b08ecd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b08ecf not eax */
  EAX = (~(EAX));
  /* 10b08ed1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08ed4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08ed7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b08ede and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b08ee0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b08ee3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08ee6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10b08eed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08ef0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08ef3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b08ef6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b08ef9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08efc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08eff mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b08f02 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08f05 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08f08 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b08f0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b08f0e jne 0x10b08f2d */
  if (!C.zf) goto L_10b08f2d;
  /* 10b08f10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08f13 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08f16 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b08f1b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b08f1d not eax */
  EAX = (~(EAX));
  /* 10b08f1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08f22 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b08f25 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b08f27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b08f2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b08f2d:;
  /* 10b08f2d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08f30 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b08f33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08f36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b08f39 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b08f3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08f3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b08f42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08f45 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b08f48 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10b08f4b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b08f4e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08f51 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08f54 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b08f57 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08f5b jle 0x10b090a7 */
  if ((C.zf||C.sf!=C.of)) goto L_10b090a7;
  /* 10b08f61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b08f64 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08f67 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b08f6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b08f6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b08f70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b08f73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b08f76 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08f7a jbe 0x10b08f83 */
  if ((C.cf||C.zf)) goto L_10b08f83;
  /* 10b08f7c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10b08f83:;
  /* 10b08f83 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08f86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b08f89 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10b08f8c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b08f8f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08f92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08f95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b08f98 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b08f9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08f9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08fa1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10b08fa4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b08fa7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08faa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10b08fad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08fb0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b08fb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08fb6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b08fb9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08fbc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b08fbf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b08fc2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08fc5 jne 0x10b09093 */
  if (!C.zf) goto L_10b09093;
  /* 10b08fcb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b08fcf jae 0x10b0902c */
  if (!C.cf) goto L_10b0902c;
  /* 10b08fd1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08fd4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08fd7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b08fdb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08fde add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08fe1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b08fe4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b08fe7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b08fea add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b08fed mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10b08ff0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b08ff2 jne 0x10b0900a */
  if (!C.zf) goto L_10b0900a;
  /* 10b08ff4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b08ff9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b08ffc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b08ffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09001 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b09003 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b09005 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09008 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b0900a:;
  /* 10b0900a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b0900f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b09012 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b09014 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09017 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0901a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10b0901e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b09020 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09023 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09026 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10b0902a jmp 0x10b09093 */
  goto L_10b09093;
L_10b0902c:;
  /* 10b0902c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0902f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09032 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b09036 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09039 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0903c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b0903f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b09042 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09045 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09048 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10b0904b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0904d jne 0x10b0906a */
  if (!C.zf) goto L_10b0906a;
  /* 10b0904f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b09052 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09055 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b0905a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b0905c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0905f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b09062 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b09064 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09067 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10b0906a:;
  /* 10b0906a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0906d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09070 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b09075 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b09077 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0907a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0907d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b09084 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b09086 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09089 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0908c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10b09093:;
  /* 10b09093 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b09096 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b09099 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b0909b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0909e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b090a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b090a4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10b090a7:;
  /* 10b090a7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b090aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b090ad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b090b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b090b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b090b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b090b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b090bb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b090be mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10b090c1 jmp 0x10b09382 */
  goto L_10b09382;
L_10b090c6:;
  /* 10b090c6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b090c9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b090cc jge 0x10b09382 */
  if ((C.sf==C.of)) goto L_10b09382;
  /* 10b090d2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b090d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b090d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b090db mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b090dd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b090e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b090e3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b090e6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b090e9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10b090ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b090ef add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b090f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10b090f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b090f8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b090fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b090fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09101 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b09104 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09107 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b0910a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0910e jbe 0x10b09117 */
  if ((C.cf||C.zf)) goto L_10b09117;
  /* 10b09110 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10b09117:;
  /* 10b09117 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0911a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0911d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0911f jne 0x10b09260 */
  if (!C.zf) goto L_10b09260;
  /* 10b09125 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b09128 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10b0912b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0912e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b09131 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09135 jbe 0x10b0913e */
  if ((C.cf||C.zf)) goto L_10b0913e;
  /* 10b09137 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10b0913e:;
  /* 10b0913e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b09141 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b09144 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b09147 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0914a jne 0x10b09220 */
  if (!C.zf) goto L_10b09220;
  /* 10b09150 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09154 jae 0x10b091b5 */
  if (!C.cf) goto L_10b091b5;
  /* 10b09156 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b0915b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0915e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b09160 not edx */
  EDX = (~(EDX));
  /* 10b09162 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09165 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09168 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b0916c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0916e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09171 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09174 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b09178 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0917b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0917e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10b09181 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b09184 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09187 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0918a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10b0918d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09190 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09193 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b09197 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b09199 jne 0x10b091b3 */
  if (!C.zf) goto L_10b091b3;
  /* 10b0919b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b091a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b091a3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b091a5 not edx */
  EDX = (~(EDX));
  /* 10b091a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b091aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b091ac and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b091ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b091b1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10b091b3:;
  /* 10b091b3 jmp 0x10b09220 */
  goto L_10b09220;
L_10b091b5:;
  /* 10b091b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b091b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b091bb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b091c0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b091c2 not eax */
  EAX = (~(EAX));
  /* 10b091c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b091c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b091ca mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10b091d1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b091d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b091d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b091d9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10b091e0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b091e3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b091e6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10b091e9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b091ec mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b091ef add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b091f2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10b091f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b091f8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b091fb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b091ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b09201 jne 0x10b09220 */
  if (!C.zf) goto L_10b09220;
  /* 10b09203 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b09206 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09209 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b0920e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b09210 not eax */
  EAX = (~(EAX));
  /* 10b09212 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09215 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b09218 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0921a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0921d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b09220:;
  /* 10b09220 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b09223 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b09226 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b09229 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0922c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b0922f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b09232 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b09235 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b09238 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b0923b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10b0923e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09241 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09244 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b09247 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0924a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b0924d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09250 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b09253 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09257 jbe 0x10b09260 */
  if ((C.cf||C.zf)) goto L_10b09260;
  /* 10b09259 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10b09260:;
  /* 10b09260 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09263 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b09266 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10b09269 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b0926c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0926f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b09272 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b09275 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b09278 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0927b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0927e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b09281 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b09284 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b09287 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b0928a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0928d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b09290 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b09293 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b09296 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b09299 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0929c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0929f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b092a2 jne 0x10b0936e */
  if (!C.zf) goto L_10b0936e;
  /* 10b092a8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b092ac jae 0x10b09308 */
  if (!C.cf) goto L_10b09308;
  /* 10b092ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b092b1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b092b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b092b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b092bb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b092be mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b092c1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b092c3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b092c6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b092c9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10b092cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b092ce jne 0x10b092e6 */
  if (!C.zf) goto L_10b092e6;
  /* 10b092d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b092d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b092d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b092da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b092dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b092df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b092e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b092e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b092e6:;
  /* 10b092e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b092eb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b092ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b092f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b092f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b092f6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10b092fa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b092fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b092ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09302 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10b09306 jmp 0x10b0936e */
  goto L_10b0936e;
L_10b09308:;
  /* 10b09308 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0930b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0930e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10b09312 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09315 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09318 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10b0931b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b0931d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09320 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09323 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10b09326 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b09328 jne 0x10b09345 */
  if (!C.zf) goto L_10b09345;
  /* 10b0932a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0932d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09330 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10b09335 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b09337 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0933a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b0933d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0933f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09342 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10b09345:;
  /* 10b09345 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09348 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0934b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b09350 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b09352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09355 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09358 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10b0935f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09361 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09364 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b09367 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10b0936e:;
  /* 10b0936e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b09371 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09374 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b09376 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b09379 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0937c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0937f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10b09382:;
  /* 10b09382 mov eax, 1 */
  EAX = (0x1u);
L_10b09387:;
  /* 10b09387 mov esp, ebp */
  ESP = (EBP);
  /* 10b09389 pop ebp */
  EBP = (pop32());
  /* 10b0938a ret  */
  ESPCHK(0x10b08da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x10b09390 (304 bytes, 79 insns) */
void f_10b09390(void) {
  FTRACE(0x10b09390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b09390 push ebp */
  push32((uint32_t)(EBP));
  /* 10b09391 mov ebp, esp */
  EBP = (ESP);
  /* 10b09393 push ecx */
  push32((uint32_t)(ECX));
  /* 10b09394 cmp dword ptr [0x10b30ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b30ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0939b je 0x10b094bc */
  if (C.zf) goto L_10b094bc;
  /* 10b093a1 mov eax, dword ptr [0x10b30e98] */
  EAX = (r32((uint32_t)(0x10b30e98)));
  /* 10b093a6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10b093a9 mov ecx, dword ptr [0x10b30ea0] */
  ECX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b093af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b093b2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b093b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b093b7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b093bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b093c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b093c4 push eax */
  push32((uint32_t)(EAX));
  /* 10b093c5 call dword ptr [0x10b32368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32368))), 0x10b093cbu);
  /* 10b093cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b093d0 mov ecx, dword ptr [0x10b30e98] */
  ECX = (r32((uint32_t)(0x10b30e98)));
  /* 10b093d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b093d8 mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b093dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b093e0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10b093e2 mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b093e8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b093eb mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b093f0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b093f3 mov edx, dword ptr [0x10b30e98] */
  EDX = (r32((uint32_t)(0x10b30e98)));
  /* 10b093f9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10b09404 mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b09409 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b0940c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10b0940f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b09412 mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b09417 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b0941a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10b0941d mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b09423 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b09426 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10b0942a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0942c jne 0x10b09442 */
  if (!C.zf) goto L_10b09442;
  /* 10b0942e mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b09434 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b09437 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10b09439 mov ecx, dword ptr [0x10b30ea0] */
  ECX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b0943f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10b09442:;
  /* 10b09442 mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b09448 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0944c jne 0x10b094b2 */
  if (!C.zf) goto L_10b094b2;
  /* 10b0944e cmp dword ptr [0x10b30ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b30ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09455 jle 0x10b094b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10b094b2;
  /* 10b09457 mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b0945c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b0945f push ecx */
  push32((uint32_t)(ECX));
  /* 10b09460 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b09462 mov edx, dword ptr [0x10b30eac] */
  EDX = (r32((uint32_t)(0x10b30eac)));
  /* 10b09468 push edx */
  push32((uint32_t)(EDX));
  /* 10b09469 call dword ptr [0x10b323b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b323b0))), 0x10b0946fu);
  /* 10b0946f mov eax, dword ptr [0x10b30ea4] */
  EAX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b09474 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b09477 mov ecx, dword ptr [0x10b30ea8] */
  ECX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b0947d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0947f mov edx, dword ptr [0x10b30ea0] */
  EDX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b09485 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09488 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0948a push ecx */
  push32((uint32_t)(ECX));
  /* 10b0948b mov eax, dword ptr [0x10b30ea0] */
  EAX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b09490 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09493 push eax */
  push32((uint32_t)(EAX));
  /* 10b09494 mov ecx, dword ptr [0x10b30ea0] */
  ECX = (r32((uint32_t)(0x10b30ea0)));
  /* 10b0949a push ecx */
  push32((uint32_t)(ECX));
  /* 10b0949b call 0x10b0bac0 */
  push32(0x10b094a0u); f_10b0bac0();
  /* 10b094a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b094a3 mov edx, dword ptr [0x10b30ea4] */
  EDX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b094a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b094ac mov dword ptr [0x10b30ea4], edx */
  w32((uint32_t)(0x10b30ea4), (EDX));
L_10b094b2:;
  /* 10b094b2 mov dword ptr [0x10b30ea0], 0 */
  w32((uint32_t)(0x10b30ea0), (0x0u));
L_10b094bc:;
  /* 10b094bc mov esp, ebp */
  ESP = (EBP);
  /* 10b094be pop ebp */
  EBP = (pop32());
  /* 10b094bf ret  */
  ESPCHK(0x10b09390u, _esp0);
  ESP += 4; return;
}

/* FUN_100094c0 @ 0x10b094c0 (1565 bytes, 343 insns) */
void f_10b094c0(void) {
  FTRACE(0x10b094c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b094c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b094c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b094c3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b094c9 mov eax, dword ptr [0x10b30ea4] */
  EAX = (r32((uint32_t)(0x10b30ea4)));
  /* 10b094ce imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b094d1 push eax */
  push32((uint32_t)(EAX));
  /* 10b094d2 mov ecx, dword ptr [0x10b30ea8] */
  ECX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b094d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b094d9 call dword ptr [0x10b32388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32388))), 0x10b094dfu);
  /* 10b094df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b094e1 je 0x10b094eb */
  if (C.zf) goto L_10b094eb;
  /* 10b094e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b094e6 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b094eb:;
  /* 10b094eb mov edx, dword ptr [0x10b30ea8] */
  EDX = (r32((uint32_t)(0x10b30ea8)));
  /* 10b094f1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10b094f7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10b09501 jmp 0x10b09512 */
  goto L_10b09512;
L_10b09503:;
  /* 10b09503 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10b09509 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0950c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10b09512:;
  /* 10b09512 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10b09518 cmp ecx, dword ptr [0x10b30ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0951e jge 0x10b09ad7 */
  if ((C.sf==C.of)) goto L_10b09ad7;
  /* 10b09524 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b0952a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b0952d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10b09533 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10b09538 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10b0953e push ecx */
  push32((uint32_t)(ECX));
  /* 10b0953f call dword ptr [0x10b32388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32388))), 0x10b09545u);
  /* 10b09545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b09547 je 0x10b09553 */
  if (C.zf) goto L_10b09553;
  /* 10b09549 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10b0954e jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b09553:;
  /* 10b09553 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b09559 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b0955c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10b09562 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10b09568 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0956e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b09571 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b09577 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b0957a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0957d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10b09587 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10b09591 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b09598 jmp 0x10b095a3 */
  goto L_10b095a3;
L_10b0959a:;
  /* 10b0959a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0959d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b095a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b095a3:;
  /* 10b095a3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b095a7 jge 0x10b09a9b */
  if ((C.sf==C.of)) goto L_10b09a9b;
  /* 10b095ad mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10b095b7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10b095c1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10b095cb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10b095d5 jmp 0x10b095e6 */
  goto L_10b095e6;
L_10b095d7:;
  /* 10b095d7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b095dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b095e0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10b095e6:;
  /* 10b095e6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b095ed jge 0x10b09602 */
  if ((C.sf==C.of)) goto L_10b09602;
  /* 10b095ef mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b095f5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10b09600 jmp 0x10b095d7 */
  goto L_10b095d7;
L_10b09602:;
  /* 10b09602 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09606 jl 0x10b09a3d */
  if ((C.sf!=C.of)) goto L_10b09a3d;
  /* 10b0960c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b09611 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10b09617 push ecx */
  push32((uint32_t)(ECX));
  /* 10b09618 call dword ptr [0x10b32388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32388))), 0x10b0961eu);
  /* 10b0961e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b09620 je 0x10b0962c */
  if (C.zf) goto L_10b0962c;
  /* 10b09622 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10b09627 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b0962c:;
  /* 10b0962c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10b09632 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b09635 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10b0963f jmp 0x10b09650 */
  goto L_10b09650;
L_10b09641:;
  /* 10b09641 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10b09647 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0964a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10b09650:;
  /* 10b09650 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09657 jge 0x10b097d4 */
  if ((C.sf==C.of)) goto L_10b097d4;
  /* 10b0965d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b09660 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09663 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10b09669 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b0966f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09675 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10b0967b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b09681 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09685 jne 0x10b09692 */
  if (!C.zf) goto L_10b09692;
  /* 10b09687 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10b0968d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09690 je 0x10b0969c */
  if (C.zf) goto L_10b0969c;
L_10b09692:;
  /* 10b09692 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10b09697 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b0969c:;
  /* 10b0969c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b096a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b096a4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10b096aa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10b096b0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10b096b6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10b096bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b096bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b096c1 je 0x10b096f9 */
  if (C.zf) goto L_10b096f9;
  /* 10b096c3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10b096c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b096cc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10b096d2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b096dc jle 0x10b096e8 */
  if ((C.zf||C.sf!=C.of)) goto L_10b096e8;
  /* 10b096de mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10b096e3 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b096e8:;
  /* 10b096e8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10b096ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b096f1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10b096f7 jmp 0x10b0973b */
  goto L_10b0973b;
L_10b096f9:;
  /* 10b096f9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10b096ff sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b09702 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09705 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10b0970b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09712 jle 0x10b0971e */
  if ((C.zf||C.sf!=C.of)) goto L_10b0971e;
  /* 10b09714 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10b0971e:;
  /* 10b0971e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b09724 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10b0972b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0972e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b09734 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10b0973b:;
  /* 10b0973b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09742 jl 0x10b0975d */
  if ((C.sf!=C.of)) goto L_10b0975d;
  /* 10b09744 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10b0974a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0974d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0974f jne 0x10b0975d */
  if (!C.zf) goto L_10b0975d;
  /* 10b09751 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0975b jle 0x10b09767 */
  if ((C.zf||C.sf!=C.of)) goto L_10b09767;
L_10b0975d:;
  /* 10b0975d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10b09762 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b09767:;
  /* 10b09767 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b0976d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09773 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b09776 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0977c je 0x10b09788 */
  if (C.zf) goto L_10b09788;
  /* 10b0977e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10b09783 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b09788:;
  /* 10b09788 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b0978e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09794 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10b0979a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b097a0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b097a6 jb 0x10b0969c */
  if (C.cf) goto L_10b0969c;
  /* 10b097ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b097b2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b097b8 je 0x10b097c4 */
  if (C.zf) goto L_10b097c4;
  /* 10b097ba mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10b097bf jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b097c4:;
  /* 10b097c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b097c7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b097cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b097cf jmp 0x10b09641 */
  goto L_10b09641;
L_10b097d4:;
  /* 10b097d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b097d7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b097d9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b097df je 0x10b097eb */
  if (C.zf) goto L_10b097eb;
  /* 10b097e1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10b097e6 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b097eb:;
  /* 10b097eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b097ee mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10b097f4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10b097fb jmp 0x10b09806 */
  goto L_10b09806;
L_10b097fd:;
  /* 10b097fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b09800 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09803 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10b09806:;
  /* 10b09806 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0980a jge 0x10b09a3d */
  if ((C.sf==C.of)) goto L_10b09a3d;
  /* 10b09810 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10b0981a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10b09820 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10b09826:;
  /* 10b09826 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b0982c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0982f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10b09835 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b0983b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09841 je 0x10b0996a */
  if (C.zf) goto L_10b0996a;
  /* 10b09847 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0984a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10b09850 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09857 je 0x10b0996a */
  if (C.zf) goto L_10b0996a;
  /* 10b0985d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b09863 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09869 jb 0x10b0987e */
  if (C.cf) goto L_10b0987e;
  /* 10b0986b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10b09871 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09876 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0987c jb 0x10b09888 */
  if (C.cf) goto L_10b09888;
L_10b0987e:;
  /* 10b0987e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10b09883 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b09888:;
  /* 10b09888 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b0988e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10b09894 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10b0989a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10b098a0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b098a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b098a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b098a9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b098ae mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10b098b4:;
  /* 10b098b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b098b7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b098bd je 0x10b098de */
  if (C.zf) goto L_10b098de;
  /* 10b098bf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b098c2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b098c8 jne 0x10b098cc */
  if (!C.zf) goto L_10b098cc;
  /* 10b098ca jmp 0x10b098de */
  goto L_10b098de;
L_10b098cc:;
  /* 10b098cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b098cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b098d1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10b098d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b098d7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b098d9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b098dc jmp 0x10b098b4 */
  goto L_10b098b4;
L_10b098de:;
  /* 10b098de mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b098e1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b098e7 jne 0x10b098f3 */
  if (!C.zf) goto L_10b098f3;
  /* 10b098e9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10b098ee jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b098f3:;
  /* 10b098f3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b098f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b098fb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b098fe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09901 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10b09907 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0990e jle 0x10b0991a */
  if ((C.zf||C.sf!=C.of)) goto L_10b0991a;
  /* 10b09910 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10b0991a:;
  /* 10b0991a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10b09920 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09923 je 0x10b0992f */
  if (C.zf) goto L_10b0992f;
  /* 10b09925 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10b0992a jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b0992f:;
  /* 10b0992f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b09935 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b09938 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0993e je 0x10b0994a */
  if (C.zf) goto L_10b0994a;
  /* 10b09940 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10b09945 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b0994a:;
  /* 10b0994a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10b09950 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10b09956 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10b0995c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0995f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10b09965 jmp 0x10b09826 */
  goto L_10b09826;
L_10b0996a:;
  /* 10b0996a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09971 je 0x10b099e1 */
  if (C.zf) goto L_10b099e1;
  /* 10b09973 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09977 jge 0x10b099ab */
  if ((C.sf==C.of)) goto L_10b099ab;
  /* 10b09979 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b0997e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b09981 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b09983 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10b09989 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0998b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10b09991 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b09996 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b09999 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b0999b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10b099a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b099a3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10b099a9 jmp 0x10b099e1 */
  goto L_10b099e1;
L_10b099ab:;
  /* 10b099ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b099ae sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b099b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b099b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b099b8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10b099be or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b099c0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10b099c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b099c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b099cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b099d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b099d3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10b099d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b099db mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10b099e1:;
  /* 10b099e1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10b099e7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b099ea cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b099f0 jne 0x10b09a04 */
  if (!C.zf) goto L_10b09a04;
  /* 10b099f2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b099f5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10b099fb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09a02 je 0x10b09a0e */
  if (C.zf) goto L_10b09a0e;
L_10b09a04:;
  /* 10b09a04 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10b09a09 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b09a0e:;
  /* 10b09a0e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10b09a14 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b09a17 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09a1d je 0x10b09a29 */
  if (C.zf) goto L_10b09a29;
  /* 10b09a1f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10b09a24 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b09a29:;
  /* 10b09a29 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10b09a2f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09a32 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10b09a38 jmp 0x10b097fd */
  goto L_10b097fd;
L_10b09a3d:;
  /* 10b09a3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09a40 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10b09a46 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10b09a4c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09a50 jne 0x10b09a6a */
  if (!C.zf) goto L_10b09a6a;
  /* 10b09a52 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09a55 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10b09a5b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10b09a61 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09a68 je 0x10b09a71 */
  if (C.zf) goto L_10b09a71;
L_10b09a6a:;
  /* 10b09a6a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10b09a6f jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b09a71:;
  /* 10b09a71 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10b09a77 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09a7d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10b09a83 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b09a86 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09a8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b09a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09a91 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b09a93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b09a96 jmp 0x10b0959a */
  goto L_10b0959a;
L_10b09a9b:;
  /* 10b09a9b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b09aa1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10b09aa7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09aa9 jne 0x10b09abc */
  if (!C.zf) goto L_10b09abc;
  /* 10b09aab mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b09ab1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10b09ab7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09aba je 0x10b09ac3 */
  if (C.zf) goto L_10b09ac3;
L_10b09abc:;
  /* 10b09abc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10b09ac1 jmp 0x10b09ad9 */
  goto L_10b09ad9;
L_10b09ac3:;
  /* 10b09ac3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10b09ac9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09acc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10b09ad2 jmp 0x10b09503 */
  goto L_10b09503;
L_10b09ad7:;
  /* 10b09ad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b09ad9:;
  /* 10b09ad9 mov esp, ebp */
  ESP = (EBP);
  /* 10b09adb pop ebp */
  EBP = (pop32());
  /* 10b09adc ret  */
  ESPCHK(0x10b094c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ae0 @ 0x10b09ae0 (250 bytes, 92 insns) */
void f_10b09ae0(void) {
  FTRACE(0x10b09ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b09ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b09ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10b09ae3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b09ae7 push esi */
  push32((uint32_t)(ESI));
  /* 10b09ae8 push edi */
  push32((uint32_t)(EDI));
  /* 10b09ae9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10b09aec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b09aef lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10b09af2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10b09af5:;
  /* 10b09af5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09af9 jne 0x10b09b19 */
  if (!C.zf) goto L_10b09b19;
  /* 10b09afb push 0x10b2b028 */
  push32((uint32_t)(0x10b2b028u));
  /* 10b09b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b09b02 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10b09b04 push 0x10b2b01c */
  push32((uint32_t)(0x10b2b01cu));
  /* 10b09b09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b09b0b call 0x10b02c90 */
  push32(0x10b09b10u); f_10b02c90();
  /* 10b09b10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09b13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09b16 jne 0x10b09b19 */
  if (!C.zf) goto L_10b09b19;
  /* 10b09b18 int3  */
  x86_unimpl("int3 @ 0x10b09b18");
L_10b09b19:;
  /* 10b09b19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b09b1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b09b1d jne 0x10b09af5 */
  if (!C.zf) goto L_10b09af5;
L_10b09b1f:;
  /* 10b09b1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09b23 jne 0x10b09b43 */
  if (!C.zf) goto L_10b09b43;
  /* 10b09b25 push 0x10b2b00c */
  push32((uint32_t)(0x10b2b00cu));
  /* 10b09b2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b09b2c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10b09b2e push 0x10b2b01c */
  push32((uint32_t)(0x10b2b01cu));
  /* 10b09b33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b09b35 call 0x10b02c90 */
  push32(0x10b09b3au); f_10b02c90();
  /* 10b09b3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09b3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09b40 jne 0x10b09b43 */
  if (!C.zf) goto L_10b09b43;
  /* 10b09b42 int3  */
  x86_unimpl("int3 @ 0x10b09b42");
L_10b09b43:;
  /* 10b09b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09b45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b09b47 jne 0x10b09b1f */
  if (!C.zf) goto L_10b09b1f;
  /* 10b09b49 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09b4c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10b09b53 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09b59 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b09b5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09b5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09b62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b09b64 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09b67 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10b09b6e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b09b71 push ecx */
  push32((uint32_t)(ECX));
  /* 10b09b72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b09b75 push edx */
  push32((uint32_t)(EDX));
  /* 10b09b76 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09b79 push eax */
  push32((uint32_t)(EAX));
  /* 10b09b7a call 0x10b0ab60 */
  push32(0x10b09b7fu); f_10b0ab60();
  /* 10b09b7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09b82 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b09b85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09b88 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b09b8b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09b8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09b91 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b09b94 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09b97 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09b9b jl 0x10b09bbf */
  if ((C.sf!=C.of)) goto L_10b09bbf;
  /* 10b09b9d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09ba0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b09ba2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b09ba5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b09ba7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b09bad mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10b09bb0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09bb3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b09bb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09bb8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09bbb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b09bbd jmp 0x10b09bd0 */
  goto L_10b09bd0;
L_10b09bbf:;
  /* 10b09bbf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09bc2 push edx */
  push32((uint32_t)(EDX));
  /* 10b09bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b09bc5 call 0x10b0a8e0 */
  push32(0x10b09bcau); f_10b0a8e0();
  /* 10b09bca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09bcd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10b09bd0:;
  /* 10b09bd0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09bd3 pop edi */
  EDI = (pop32());
  /* 10b09bd4 pop esi */
  ESI = (pop32());
  /* 10b09bd5 pop ebx */
  EBX = (pop32());
  /* 10b09bd6 mov esp, ebp */
  ESP = (EBP);
  /* 10b09bd8 pop ebp */
  EBP = (pop32());
  /* 10b09bd9 ret  */
  ESPCHK(0x10b09ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009be0 @ 0x10b09be0 (183 bytes, 58 insns) */
void f_10b09be0(void) {
  FTRACE(0x10b09be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b09be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b09be1 mov ebp, esp */
  EBP = (ESP);
  /* 10b09be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09be9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09bec cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09bf1 ja 0x10b09c0a */
  if ((!C.cf&&!C.zf)) goto L_10b09c0a;
  /* 10b09bf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09bf6 mov edx, dword ptr [0x10b2dc98] */
  EDX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b09bfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09bfe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10b09c02 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10b09c05 jmp 0x10b09c93 */
  goto L_10b09c93;
L_10b09c0a:;
  /* 10b09c0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09c0d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10b09c10 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b09c16 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b09c1c mov edx, dword ptr [0x10b2dc98] */
  EDX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b09c22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09c24 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10b09c28 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10b09c2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b09c2f je 0x10b09c53 */
  if (C.zf) goto L_10b09c53;
  /* 10b09c31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09c34 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10b09c37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b09c3d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10b09c40 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b09c43 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10b09c46 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10b09c4a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10b09c51 jmp 0x10b09c64 */
  goto L_10b09c64;
L_10b09c53:;
  /* 10b09c53 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b09c56 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10b09c59 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10b09c5d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10b09c64:;
  /* 10b09c64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b09c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b09c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b09c6a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10b09c6d push ecx */
  push32((uint32_t)(ECX));
  /* 10b09c6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b09c71 push edx */
  push32((uint32_t)(EDX));
  /* 10b09c72 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10b09c75 push eax */
  push32((uint32_t)(EAX));
  /* 10b09c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b09c78 call 0x10b0be00 */
  push32(0x10b09c7du); f_10b0be00();
  /* 10b09c7d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b09c82 jne 0x10b09c88 */
  if (!C.zf) goto L_10b09c88;
  /* 10b09c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09c86 jmp 0x10b09c93 */
  goto L_10b09c93;
L_10b09c88:;
  /* 10b09c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09c8b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b09c90 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10b09c93:;
  /* 10b09c93 mov esp, ebp */
  ESP = (EBP);
  /* 10b09c95 pop ebp */
  EBP = (pop32());
  /* 10b09c96 ret  */
  ESPCHK(0x10b09be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ca0 @ 0x10b09ca0 (836 bytes, 238 insns) */
void f_10b09ca0(void) {
  FTRACE(0x10b09ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b09ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b09ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10b09ca3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b09ca6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b09ca8 call 0x10b075d0 */
  push32(0x10b09cadu); f_10b075d0();
  /* 10b09cad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09cb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09cb3 push eax */
  push32((uint32_t)(EAX));
  /* 10b09cb4 call 0x10b09ff0 */
  push32(0x10b09cb9u); f_10b09ff0();
  /* 10b09cb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09cbc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b09cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09cc2 cmp ecx, dword ptr [0x10b30be4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30be4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09cc8 jne 0x10b09cdb */
  if (!C.zf) goto L_10b09cdb;
  /* 10b09cca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b09ccc call 0x10b07670 */
  push32(0x10b09cd1u); f_10b07670();
  /* 10b09cd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09cd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09cd6 jmp 0x10b09fe0 */
  goto L_10b09fe0;
L_10b09cdb:;
  /* 10b09cdb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09cdf jne 0x10b09cfc */
  if (!C.zf) goto L_10b09cfc;
  /* 10b09ce1 call 0x10b0a0d0 */
  push32(0x10b09ce6u); f_10b0a0d0();
  /* 10b09ce6 call 0x10b0a150 */
  push32(0x10b09cebu); f_10b0a150();
  /* 10b09ceb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b09ced call 0x10b07670 */
  push32(0x10b09cf2u); f_10b07670();
  /* 10b09cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09cf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09cf7 jmp 0x10b09fe0 */
  goto L_10b09fe0;
L_10b09cfc:;
  /* 10b09cfc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b09d03 jmp 0x10b09d0e */
  goto L_10b09d0e;
L_10b09d05:;
  /* 10b09d05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09d08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09d0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b09d0e:;
  /* 10b09d0e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09d12 jae 0x10b09e5f */
  if (!C.cf) goto L_10b09e5f;
  /* 10b09d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09d1b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b09d1e mov ecx, dword ptr [eax + 0x10b2deb8] */
  ECX = (r32((uint32_t)(EAX + 0x10b2deb8)));
  /* 10b09d24 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09d27 jne 0x10b09e5a */
  if (!C.zf) goto L_10b09e5a;
  /* 10b09d2d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b09d34 jmp 0x10b09d3f */
  goto L_10b09d3f;
L_10b09d36:;
  /* 10b09d36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09d39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09d3c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10b09d3f:;
  /* 10b09d3f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09d46 jae 0x10b09d54 */
  if (!C.cf) goto L_10b09d54;
  /* 10b09d48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09d4b mov byte ptr [eax + 0x10b30d80], 0 */
  w8((uint32_t)(EAX + 0x10b30d80), (0x0u));
  /* 10b09d52 jmp 0x10b09d36 */
  goto L_10b09d36;
L_10b09d54:;
  /* 10b09d54 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b09d5b jmp 0x10b09d66 */
  goto L_10b09d66;
L_10b09d5d:;
  /* 10b09d5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09d60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09d63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10b09d66:;
  /* 10b09d66 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09d6a jae 0x10b09de7 */
  if (!C.cf) goto L_10b09de7;
  /* 10b09d6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09d6f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b09d72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09d75 lea ecx, [edx + eax*8 + 0x10b2dec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10b2dec8));
  /* 10b09d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b09d7f jmp 0x10b09d8a */
  goto L_10b09d8a;
L_10b09d81:;
  /* 10b09d81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b09d84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09d87 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b09d8a:;
  /* 10b09d8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b09d8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b09d8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b09d91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b09d93 je 0x10b09de2 */
  if (C.zf) goto L_10b09de2;
  /* 10b09d95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b09d98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09d9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b09d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b09d9f je 0x10b09de2 */
  if (C.zf) goto L_10b09de2;
  /* 10b09da1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b09da4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b09da6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b09da8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b09dab jmp 0x10b09db6 */
  goto L_10b09db6;
L_10b09dad:;
  /* 10b09dad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09db0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09db3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b09db6:;
  /* 10b09db6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b09db9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b09dbb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b09dbe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09dc1 ja 0x10b09de0 */
  if ((!C.cf&&!C.zf)) goto L_10b09de0;
  /* 10b09dc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09dc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09dc9 mov dl, byte ptr [eax + 0x10b30d81] */
  DL = (r8((uint32_t)(EAX + 0x10b30d81)));
  /* 10b09dcf or dl, byte ptr [ecx + 0x10b2deb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10b2deb0))); DL = (_r); fl_logic(_r,8); }
  /* 10b09dd5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09dd8 mov byte ptr [eax + 0x10b30d81], dl */
  w8((uint32_t)(EAX + 0x10b30d81), (DL));
  /* 10b09dde jmp 0x10b09dad */
  goto L_10b09dad;
L_10b09de0:;
  /* 10b09de0 jmp 0x10b09d81 */
  goto L_10b09d81;
L_10b09de2:;
  /* 10b09de2 jmp 0x10b09d5d */
  goto L_10b09d5d;
L_10b09de7:;
  /* 10b09de7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09dea mov dword ptr [0x10b30be4], ecx */
  w32((uint32_t)(0x10b30be4), (ECX));
  /* 10b09df0 mov dword ptr [0x10b30c6c], 1 */
  w32((uint32_t)(0x10b30c6c), (0x1u));
  /* 10b09dfa mov edx, dword ptr [0x10b30be4] */
  EDX = (r32((uint32_t)(0x10b30be4)));
  /* 10b09e00 push edx */
  push32((uint32_t)(EDX));
  /* 10b09e01 call 0x10b0a050 */
  push32(0x10b09e06u); f_10b0a050();
  /* 10b09e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09e09 mov dword ptr [0x10b30e84], eax */
  w32((uint32_t)(0x10b30e84), (EAX));
  /* 10b09e0e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b09e15 jmp 0x10b09e20 */
  goto L_10b09e20;
L_10b09e17:;
  /* 10b09e17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09e1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09e1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b09e20:;
  /* 10b09e20 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09e24 jae 0x10b09e44 */
  if (!C.cf) goto L_10b09e44;
  /* 10b09e26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b09e29 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b09e2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09e2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09e32 mov cx, word ptr [ecx + eax*2 + 0x10b2debc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10b2debc)));
  /* 10b09e3a mov word ptr [edx*2 + 0x10b30c60], cx */
  w16((uint32_t)(EDX*2 + 0x10b30c60), (CX));
  /* 10b09e42 jmp 0x10b09e17 */
  goto L_10b09e17;
L_10b09e44:;
  /* 10b09e44 call 0x10b0a150 */
  push32(0x10b09e49u); f_10b0a150();
  /* 10b09e49 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b09e4b call 0x10b07670 */
  push32(0x10b09e50u); f_10b07670();
  /* 10b09e50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09e55 jmp 0x10b09fe0 */
  goto L_10b09fe0;
L_10b09e5a:;
  /* 10b09e5a jmp 0x10b09d05 */
  goto L_10b09d05;
L_10b09e5f:;
  /* 10b09e5f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10b09e62 push edx */
  push32((uint32_t)(EDX));
  /* 10b09e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09e66 push eax */
  push32((uint32_t)(EAX));
  /* 10b09e67 call dword ptr [0x10b322f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f8))), 0x10b09e6du);
  /* 10b09e6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09e70 jne 0x10b09fb2 */
  if (!C.zf) goto L_10b09fb2;
  /* 10b09e76 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b09e7d jmp 0x10b09e88 */
  goto L_10b09e88;
L_10b09e7f:;
  /* 10b09e7f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09e82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09e85 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10b09e88:;
  /* 10b09e88 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09e8f jae 0x10b09e9d */
  if (!C.cf) goto L_10b09e9d;
  /* 10b09e91 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09e94 mov byte ptr [edx + 0x10b30d80], 0 */
  w8((uint32_t)(EDX + 0x10b30d80), (0x0u));
  /* 10b09e9b jmp 0x10b09e7f */
  goto L_10b09e7f;
L_10b09e9d:;
  /* 10b09e9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b09ea0 mov dword ptr [0x10b30be4], eax */
  w32((uint32_t)(0x10b30be4), (EAX));
  /* 10b09ea5 mov dword ptr [0x10b30e84], 0 */
  w32((uint32_t)(0x10b30e84), (0x0u));
  /* 10b09eaf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09eb3 jbe 0x10b09f6e */
  if ((C.cf||C.zf)) goto L_10b09f6e;
  /* 10b09eb9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10b09ebc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10b09ebf jmp 0x10b09eca */
  goto L_10b09eca;
L_10b09ec1:;
  /* 10b09ec1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09ec4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09ec7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10b09eca:;
  /* 10b09eca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09ecd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b09ecf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b09ed1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b09ed3 je 0x10b09f1c */
  if (C.zf) goto L_10b09f1c;
  /* 10b09ed5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09ed8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09eda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b09edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b09edf je 0x10b09f1c */
  if (C.zf) goto L_10b09f1c;
  /* 10b09ee1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09ee4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b09ee6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b09ee8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b09eeb jmp 0x10b09ef6 */
  goto L_10b09ef6;
L_10b09eed:;
  /* 10b09eed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09ef0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09ef3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b09ef6:;
  /* 10b09ef6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b09ef9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b09efb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b09efe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09f01 ja 0x10b09f1a */
  if ((!C.cf&&!C.zf)) goto L_10b09f1a;
  /* 10b09f03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09f06 mov cl, byte ptr [eax + 0x10b30d81] */
  CL = (r8((uint32_t)(EAX + 0x10b30d81)));
  /* 10b09f0c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10b09f0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09f12 mov byte ptr [edx + 0x10b30d81], cl */
  w8((uint32_t)(EDX + 0x10b30d81), (CL));
  /* 10b09f18 jmp 0x10b09eed */
  goto L_10b09eed;
L_10b09f1a:;
  /* 10b09f1a jmp 0x10b09ec1 */
  goto L_10b09ec1;
L_10b09f1c:;
  /* 10b09f1c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10b09f23 jmp 0x10b09f2e */
  goto L_10b09f2e;
L_10b09f25:;
  /* 10b09f25 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09f28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09f2b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b09f2e:;
  /* 10b09f2e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09f35 jae 0x10b09f4e */
  if (!C.cf) goto L_10b09f4e;
  /* 10b09f37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09f3a mov dl, byte ptr [ecx + 0x10b30d81] */
  DL = (r8((uint32_t)(ECX + 0x10b30d81)));
  /* 10b09f40 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10b09f43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b09f46 mov byte ptr [eax + 0x10b30d81], dl */
  w8((uint32_t)(EAX + 0x10b30d81), (DL));
  /* 10b09f4c jmp 0x10b09f25 */
  goto L_10b09f25;
L_10b09f4e:;
  /* 10b09f4e mov ecx, dword ptr [0x10b30be4] */
  ECX = (r32((uint32_t)(0x10b30be4)));
  /* 10b09f54 push ecx */
  push32((uint32_t)(ECX));
  /* 10b09f55 call 0x10b0a050 */
  push32(0x10b09f5au); f_10b0a050();
  /* 10b09f5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09f5d mov dword ptr [0x10b30e84], eax */
  w32((uint32_t)(0x10b30e84), (EAX));
  /* 10b09f62 mov dword ptr [0x10b30c6c], 1 */
  w32((uint32_t)(0x10b30c6c), (0x1u));
  /* 10b09f6c jmp 0x10b09f78 */
  goto L_10b09f78;
L_10b09f6e:;
  /* 10b09f6e mov dword ptr [0x10b30c6c], 0 */
  w32((uint32_t)(0x10b30c6c), (0x0u));
L_10b09f78:;
  /* 10b09f78 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b09f7f jmp 0x10b09f8a */
  goto L_10b09f8a;
L_10b09f81:;
  /* 10b09f81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09f84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09f87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b09f8a:;
  /* 10b09f8a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09f8e jae 0x10b09f9f */
  if (!C.cf) goto L_10b09f9f;
  /* 10b09f90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b09f93 mov word ptr [eax*2 + 0x10b30c60], 0 */
  w16((uint32_t)(EAX*2 + 0x10b30c60), (0x0u));
  /* 10b09f9d jmp 0x10b09f81 */
  goto L_10b09f81;
L_10b09f9f:;
  /* 10b09f9f call 0x10b0a150 */
  push32(0x10b09fa4u); f_10b0a150();
  /* 10b09fa4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b09fa6 call 0x10b07670 */
  push32(0x10b09fabu); f_10b07670();
  /* 10b09fab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09fae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09fb0 jmp 0x10b09fe0 */
  goto L_10b09fe0;
L_10b09fb2:;
  /* 10b09fb2 cmp dword ptr [0x10b2f700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b09fb9 je 0x10b09fd3 */
  if (C.zf) goto L_10b09fd3;
  /* 10b09fbb call 0x10b0a0d0 */
  push32(0x10b09fc0u); f_10b0a0d0();
  /* 10b09fc0 call 0x10b0a150 */
  push32(0x10b09fc5u); f_10b0a150();
  /* 10b09fc5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b09fc7 call 0x10b07670 */
  push32(0x10b09fccu); f_10b07670();
  /* 10b09fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09fcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b09fd1 jmp 0x10b09fe0 */
  goto L_10b09fe0;
L_10b09fd3:;
  /* 10b09fd3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b09fd5 call 0x10b07670 */
  push32(0x10b09fdau); f_10b07670();
  /* 10b09fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b09fdd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b09fe0:;
  /* 10b09fe0 mov esp, ebp */
  ESP = (EBP);
  /* 10b09fe2 pop ebp */
  EBP = (pop32());
  /* 10b09fe3 ret  */
  ESPCHK(0x10b09ca0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10b09ff0 (89 bytes, 21 insns) */
void f_10b09ff0(void) {
  FTRACE(0x10b09ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b09ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b09ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10b09ff3 mov dword ptr [0x10b2f700], 0 */
  w32((uint32_t)(0x10b2f700), (0x0u));
  /* 10b09ffd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a001 jne 0x10b0a015 */
  if (!C.zf) goto L_10b0a015;
  /* 10b0a003 mov dword ptr [0x10b2f700], 1 */
  w32((uint32_t)(0x10b2f700), (0x1u));
  /* 10b0a00d call dword ptr [0x10b322f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f0))), 0x10b0a013u);
  /* 10b0a013 jmp 0x10b0a047 */
  goto L_10b0a047;
L_10b0a015:;
  /* 10b0a015 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a019 jne 0x10b0a02d */
  if (!C.zf) goto L_10b0a02d;
  /* 10b0a01b mov dword ptr [0x10b2f700], 1 */
  w32((uint32_t)(0x10b2f700), (0x1u));
  /* 10b0a025 call dword ptr [0x10b32300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32300))), 0x10b0a02bu);
  /* 10b0a02b jmp 0x10b0a047 */
  goto L_10b0a047;
L_10b0a02d:;
  /* 10b0a02d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a031 jne 0x10b0a044 */
  if (!C.zf) goto L_10b0a044;
  /* 10b0a033 mov dword ptr [0x10b2f700], 1 */
  w32((uint32_t)(0x10b2f700), (0x1u));
  /* 10b0a03d mov eax, dword ptr [0x10b2f720] */
  EAX = (r32((uint32_t)(0x10b2f720)));
  /* 10b0a042 jmp 0x10b0a047 */
  goto L_10b0a047;
L_10b0a044:;
  /* 10b0a044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10b0a047:;
  /* 10b0a047 pop ebp */
  EBP = (pop32());
  /* 10b0a048 ret  */
  ESPCHK(0x10b09ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a050 @ 0x10b0a050 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10b0a050(void) {
  FTRACE(0x10b0a050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a050 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0a051 mov ebp, esp */
  EBP = (ESP);
  /* 10b0a053 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0a054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a057 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0a05a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a05d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a063 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0a066 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a06a ja 0x10b0a09a */
  if ((!C.cf&&!C.zf)) goto L_10b0a09a;
  /* 10b0a06c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a06f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a071 mov dl, byte ptr [eax + 0x10b0a0b4] */
  DL = (r8((uint32_t)(EAX + 0x10b0a0b4)));
  /* 10b0a077 jmp dword ptr [edx*4 + 0x10b0a0a0] */
  switch (EDX) {
    case 0: goto L_10b0a07e;
    case 1: goto L_10b0a085;
    case 2: goto L_10b0a08c;
    case 3: goto L_10b0a093;
    case 4: goto L_10b0a09a;
    default: x86_unimpl("switch@0x10b0a077 out of table"); return;
  }
L_10b0a07e:;
  /* 10b0a07e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10b0a083 jmp 0x10b0a09c */
  goto L_10b0a09c;
L_10b0a085:;
  /* 10b0a085 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10b0a08a jmp 0x10b0a09c */
  goto L_10b0a09c;
L_10b0a08c:;
  /* 10b0a08c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10b0a091 jmp 0x10b0a09c */
  goto L_10b0a09c;
L_10b0a093:;
  /* 10b0a093 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10b0a098 jmp 0x10b0a09c */
  goto L_10b0a09c;
L_10b0a09a:;
  /* 10b0a09a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0a09c:;
  /* 10b0a09c mov esp, ebp */
  ESP = (EBP);
  /* 10b0a09e pop ebp */
  EBP = (pop32());
  /* 10b0a09f ret  */
  ESPCHK(0x10b0a050u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10b0a0d0 (116 bytes, 29 insns) */
void f_10b0a0d0(void) {
  FTRACE(0x10b0a0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0a0d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0a0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0a0d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0a0db jmp 0x10b0a0e6 */
  goto L_10b0a0e6;
L_10b0a0dd:;
  /* 10b0a0dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a0e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a0e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0a0e6:;
  /* 10b0a0e6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a0ed jge 0x10b0a0fb */
  if ((C.sf==C.of)) goto L_10b0a0fb;
  /* 10b0a0ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a0f2 mov byte ptr [ecx + 0x10b30d80], 0 */
  w8((uint32_t)(ECX + 0x10b30d80), (0x0u));
  /* 10b0a0f9 jmp 0x10b0a0dd */
  goto L_10b0a0dd;
L_10b0a0fb:;
  /* 10b0a0fb mov dword ptr [0x10b30be4], 0 */
  w32((uint32_t)(0x10b30be4), (0x0u));
  /* 10b0a105 mov dword ptr [0x10b30c6c], 0 */
  w32((uint32_t)(0x10b30c6c), (0x0u));
  /* 10b0a10f mov dword ptr [0x10b30e84], 0 */
  w32((uint32_t)(0x10b30e84), (0x0u));
  /* 10b0a119 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0a120 jmp 0x10b0a12b */
  goto L_10b0a12b;
L_10b0a122:;
  /* 10b0a122 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a125 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a128 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b0a12b:;
  /* 10b0a12b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a12f jge 0x10b0a140 */
  if ((C.sf==C.of)) goto L_10b0a140;
  /* 10b0a131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a134 mov word ptr [eax*2 + 0x10b30c60], 0 */
  w16((uint32_t)(EAX*2 + 0x10b30c60), (0x0u));
  /* 10b0a13e jmp 0x10b0a122 */
  goto L_10b0a122;
L_10b0a140:;
  /* 10b0a140 mov esp, ebp */
  ESP = (EBP);
  /* 10b0a142 pop ebp */
  EBP = (pop32());
  /* 10b0a143 ret  */
  ESPCHK(0x10b0a0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a150 @ 0x10b0a150 (770 bytes, 175 insns) */
void f_10b0a150(void) {
  FTRACE(0x10b0a150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a150 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0a151 mov ebp, esp */
  EBP = (ESP);
  /* 10b0a153 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a159 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10b0a15f push eax */
  push32((uint32_t)(EAX));
  /* 10b0a160 mov ecx, dword ptr [0x10b30be4] */
  ECX = (r32((uint32_t)(0x10b30be4)));
  /* 10b0a166 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0a167 call dword ptr [0x10b322f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f8))), 0x10b0a16du);
  /* 10b0a16d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a170 jne 0x10b0a389 */
  if (!C.zf) goto L_10b0a389;
  /* 10b0a176 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10b0a180 jmp 0x10b0a191 */
  goto L_10b0a191;
L_10b0a182:;
  /* 10b0a182 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a188 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a18b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10b0a191:;
  /* 10b0a191 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a19b jae 0x10b0a1b2 */
  if (!C.cf) goto L_10b0a1b2;
  /* 10b0a19d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a1a3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10b0a1a9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10b0a1b0 jmp 0x10b0a182 */
  goto L_10b0a182;
L_10b0a1b2:;
  /* 10b0a1b2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10b0a1b9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10b0a1bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0a1c2 jmp 0x10b0a1cd */
  goto L_10b0a1cd;
L_10b0a1c4:;
  /* 10b0a1c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a1c7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a1ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0a1cd:;
  /* 10b0a1cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a1d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a1d2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b0a1d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0a1d6 je 0x10b0a218 */
  if (C.zf) goto L_10b0a218;
  /* 10b0a1d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a1db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0a1dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b0a1df mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10b0a1e5 jmp 0x10b0a1f6 */
  goto L_10b0a1f6;
L_10b0a1e7:;
  /* 10b0a1e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a1ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a1f0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10b0a1f6:;
  /* 10b0a1f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a1f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0a1fb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b0a1fe cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a204 ja 0x10b0a216 */
  if ((!C.cf&&!C.zf)) goto L_10b0a216;
  /* 10b0a206 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a20c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10b0a214 jmp 0x10b0a1e7 */
  goto L_10b0a1e7;
L_10b0a216:;
  /* 10b0a216 jmp 0x10b0a1c4 */
  goto L_10b0a1c4;
L_10b0a218:;
  /* 10b0a218 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0a21a mov eax, dword ptr [0x10b30e84] */
  EAX = (r32((uint32_t)(0x10b30e84)));
  /* 10b0a21f push eax */
  push32((uint32_t)(EAX));
  /* 10b0a220 mov ecx, dword ptr [0x10b30be4] */
  ECX = (r32((uint32_t)(0x10b30be4)));
  /* 10b0a226 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0a227 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10b0a22d push edx */
  push32((uint32_t)(EDX));
  /* 10b0a22e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0a233 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10b0a239 push eax */
  push32((uint32_t)(EAX));
  /* 10b0a23a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0a23c call 0x10b0be00 */
  push32(0x10b0a241u); f_10b0be00();
  /* 10b0a241 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a244 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0a246 mov ecx, dword ptr [0x10b30be4] */
  ECX = (r32((uint32_t)(0x10b30be4)));
  /* 10b0a24c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0a24d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0a252 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10b0a258 push edx */
  push32((uint32_t)(EDX));
  /* 10b0a259 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0a25e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10b0a264 push eax */
  push32((uint32_t)(EAX));
  /* 10b0a265 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0a26a mov ecx, dword ptr [0x10b30e84] */
  ECX = (r32((uint32_t)(0x10b30e84)));
  /* 10b0a270 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0a271 call 0x10b0bfc0 */
  push32(0x10b0a276u); f_10b0bfc0();
  /* 10b0a276 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a279 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0a27b mov edx, dword ptr [0x10b30be4] */
  EDX = (r32((uint32_t)(0x10b30be4)));
  /* 10b0a281 push edx */
  push32((uint32_t)(EDX));
  /* 10b0a282 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0a287 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10b0a28d push eax */
  push32((uint32_t)(EAX));
  /* 10b0a28e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0a293 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10b0a299 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0a29a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10b0a29f mov edx, dword ptr [0x10b30e84] */
  EDX = (r32((uint32_t)(0x10b30e84)));
  /* 10b0a2a5 push edx */
  push32((uint32_t)(EDX));
  /* 10b0a2a6 call 0x10b0bfc0 */
  push32(0x10b0a2abu); f_10b0bfc0();
  /* 10b0a2ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a2ae mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10b0a2b8 jmp 0x10b0a2c9 */
  goto L_10b0a2c9;
L_10b0a2ba:;
  /* 10b0a2ba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a2c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a2c3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10b0a2c9:;
  /* 10b0a2c9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a2d3 jae 0x10b0a384 */
  if (!C.cf) goto L_10b0a384;
  /* 10b0a2d9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a2df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a2e1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10b0a2e9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a2ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0a2ee je 0x10b0a326 */
  if (C.zf) goto L_10b0a326;
  /* 10b0a2f0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a2f6 mov cl, byte ptr [eax + 0x10b30d81] */
  CL = (r8((uint32_t)(EAX + 0x10b30d81)));
  /* 10b0a2fc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10b0a2ff mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a305 mov byte ptr [edx + 0x10b30d81], cl */
  w8((uint32_t)(EDX + 0x10b30d81), (CL));
  /* 10b0a30b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a311 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a317 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10b0a31e mov byte ptr [eax + 0x10b30c80], dl */
  w8((uint32_t)(EAX + 0x10b30c80), (DL));
  /* 10b0a324 jmp 0x10b0a37f */
  goto L_10b0a37f;
L_10b0a326:;
  /* 10b0a326 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a32c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0a32e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10b0a336 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0a339 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0a33b je 0x10b0a372 */
  if (C.zf) goto L_10b0a372;
  /* 10b0a33d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a343 mov al, byte ptr [edx + 0x10b30d81] */
  AL = (r8((uint32_t)(EDX + 0x10b30d81)));
  /* 10b0a349 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10b0a34b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a351 mov byte ptr [ecx + 0x10b30d81], al */
  w8((uint32_t)(ECX + 0x10b30d81), (AL));
  /* 10b0a357 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a35d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a363 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10b0a36a mov byte ptr [edx + 0x10b30c80], cl */
  w8((uint32_t)(EDX + 0x10b30c80), (CL));
  /* 10b0a370 jmp 0x10b0a37f */
  goto L_10b0a37f;
L_10b0a372:;
  /* 10b0a372 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a378 mov byte ptr [edx + 0x10b30c80], 0 */
  w8((uint32_t)(EDX + 0x10b30c80), (0x0u));
L_10b0a37f:;
  /* 10b0a37f jmp 0x10b0a2ba */
  goto L_10b0a2ba;
L_10b0a384:;
  /* 10b0a384 jmp 0x10b0a44e */
  goto L_10b0a44e;
L_10b0a389:;
  /* 10b0a389 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10b0a393 jmp 0x10b0a3a4 */
  goto L_10b0a3a4;
L_10b0a395:;
  /* 10b0a395 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a39b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a39e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10b0a3a4:;
  /* 10b0a3a4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a3ae jae 0x10b0a44e */
  if (!C.cf) goto L_10b0a44e;
  /* 10b0a3b4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a3bb jb 0x10b0a3f8 */
  if (C.cf) goto L_10b0a3f8;
  /* 10b0a3bd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a3c4 ja 0x10b0a3f8 */
  if ((!C.cf&&!C.zf)) goto L_10b0a3f8;
  /* 10b0a3c6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a3cc mov dl, byte ptr [ecx + 0x10b30d81] */
  DL = (r8((uint32_t)(ECX + 0x10b30d81)));
  /* 10b0a3d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10b0a3d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a3db mov byte ptr [eax + 0x10b30d81], dl */
  w8((uint32_t)(EAX + 0x10b30d81), (DL));
  /* 10b0a3e1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a3e7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a3ea mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a3f0 mov byte ptr [edx + 0x10b30c80], cl */
  w8((uint32_t)(EDX + 0x10b30c80), (CL));
  /* 10b0a3f6 jmp 0x10b0a449 */
  goto L_10b0a449;
L_10b0a3f8:;
  /* 10b0a3f8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a3ff jb 0x10b0a43c */
  if (C.cf) goto L_10b0a43c;
  /* 10b0a401 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a408 ja 0x10b0a43c */
  if ((!C.cf&&!C.zf)) goto L_10b0a43c;
  /* 10b0a40a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a410 mov cl, byte ptr [eax + 0x10b30d81] */
  CL = (r8((uint32_t)(EAX + 0x10b30d81)));
  /* 10b0a416 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10b0a419 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a41f mov byte ptr [edx + 0x10b30d81], cl */
  w8((uint32_t)(EDX + 0x10b30d81), (CL));
  /* 10b0a425 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a42b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a42e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a434 mov byte ptr [ecx + 0x10b30c80], al */
  w8((uint32_t)(ECX + 0x10b30c80), (AL));
  /* 10b0a43a jmp 0x10b0a449 */
  goto L_10b0a449;
L_10b0a43c:;
  /* 10b0a43c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10b0a442 mov byte ptr [edx + 0x10b30c80], 0 */
  w8((uint32_t)(EDX + 0x10b30c80), (0x0u));
L_10b0a449:;
  /* 10b0a449 jmp 0x10b0a395 */
  goto L_10b0a395;
L_10b0a44e:;
  /* 10b0a44e mov esp, ebp */
  ESP = (EBP);
  /* 10b0a450 pop ebp */
  EBP = (pop32());
  /* 10b0a451 ret  */
  ESPCHK(0x10b0a150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a460 @ 0x10b0a460 (23 bytes, 9 insns) */
void f_10b0a460(void) {
  FTRACE(0x10b0a460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a460 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0a461 mov ebp, esp */
  EBP = (ESP);
  /* 10b0a463 cmp dword ptr [0x10b30c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b30c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a46a je 0x10b0a473 */
  if (C.zf) goto L_10b0a473;
  /* 10b0a46c mov eax, dword ptr [0x10b30be4] */
  EAX = (r32((uint32_t)(0x10b30be4)));
  /* 10b0a471 jmp 0x10b0a475 */
  goto L_10b0a475;
L_10b0a473:;
  /* 10b0a473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0a475:;
  /* 10b0a475 pop ebp */
  EBP = (pop32());
  /* 10b0a476 ret  */
  ESPCHK(0x10b0a460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a480 @ 0x10b0a480 (34 bytes, 10 insns) */
void f_10b0a480(void) {
  FTRACE(0x10b0a480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a480 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0a481 mov ebp, esp */
  EBP = (ESP);
  /* 10b0a483 cmp dword ptr [0x10b31030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b31030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a48a jne 0x10b0a4a0 */
  if (!C.zf) goto L_10b0a4a0;
  /* 10b0a48c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10b0a48e call 0x10b09ca0 */
  push32(0x10b0a493u); f_10b09ca0();
  /* 10b0a493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a496 mov dword ptr [0x10b31030], 1 */
  w32((uint32_t)(0x10b31030), (0x1u));
L_10b0a4a0:;
  /* 10b0a4a0 pop ebp */
  EBP = (pop32());
  /* 10b0a4a1 ret  */
  ESPCHK(0x10b0a480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4b0 @ 0x10b0a4b0 (664 bytes, 270 insns) [15 switch table(s)] */
void f_10b0a4b0(void) {
  FTRACE(0x10b0a4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0a4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0a4b3 push edi */
  push32((uint32_t)(EDI));
  /* 10b0a4b4 push esi */
  push32((uint32_t)(ESI));
  /* 10b0a4b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0a4b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0a4bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a4be mov eax, ecx */
  EAX = (ECX);
  /* 10b0a4c0 mov edx, ecx */
  EDX = (ECX);
  /* 10b0a4c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a4c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a4c6 jbe 0x10b0a4d0 */
  if ((C.cf||C.zf)) goto L_10b0a4d0;
  /* 10b0a4c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a4ca jb 0x10b0a648 */
  if (C.cf) goto L_10b0a648;
L_10b0a4d0:;
  /* 10b0a4d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b0a4d6 jne 0x10b0a4ec */
  if (!C.zf) goto L_10b0a4ec;
  /* 10b0a4d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0a4db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a4de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a4e1 jb 0x10b0a50c */
  if (C.cf) goto L_10b0a50c;
  /* 10b0a4e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0a4e5 jmp dword ptr [edx*4 + 0x10b0a5f8] */
  switch (EDX) {
    case 0: goto L_10b0a608;
    case 1: goto L_10b0a610;
    case 2: goto L_10b0a61c;
    case 3: goto L_10b0a630;
    default: x86_unimpl("switch@0x10b0a4e5 out of table"); return;
  }
L_10b0a4ec:;
  /* 10b0a4ec mov eax, edi */
  EAX = (EDI);
  /* 10b0a4ee mov edx, 3 */
  EDX = (0x3u);
  /* 10b0a4f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a4f6 jb 0x10b0a504 */
  if (C.cf) goto L_10b0a504;
  /* 10b0a4f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a4fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a4fd jmp dword ptr [eax*4 + 0x10b0a510] */
  switch (EAX) {
    case 1: goto L_10b0a520;
    case 2: goto L_10b0a54c;
    case 3: goto L_10b0a570;
    default: x86_unimpl("switch@0x10b0a4fd out of table"); return;
  }
L_10b0a504:;
  /* 10b0a504 jmp dword ptr [ecx*4 + 0x10b0a608] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10b0a608)))); return;
  /* 10b0a50b nop  */
  /* nop */
L_10b0a50c:;
  /* 10b0a50c jmp dword ptr [ecx*4 + 0x10b0a58c] */
  switch (ECX) {
    case 0: goto L_10b0a5ef;
    case 1: goto L_10b0a5dc;
    case 2: goto L_10b0a5d4;
    case 3: goto L_10b0a5cc;
    case 4: goto L_10b0a5c4;
    case 5: goto L_10b0a5bc;
    case 6: goto L_10b0a5b4;
    case 7: goto L_10b0a5ac;
    default: x86_unimpl("switch@0x10b0a50c out of table"); return;
  }
  /* 10b0a513 nop  */
  /* nop */
L_10b0a520:;
  /* 10b0a520 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a522 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0a524 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0a526 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0a529 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0a52c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0a52f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0a532 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0a535 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a538 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a53b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a53e jb 0x10b0a50c */
  if (C.cf) goto L_10b0a50c;
  /* 10b0a540 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0a542 jmp dword ptr [edx*4 + 0x10b0a5f8] */
  switch (EDX) {
    case 0: goto L_10b0a608;
    case 1: goto L_10b0a610;
    case 2: goto L_10b0a61c;
    case 3: goto L_10b0a630;
    default: x86_unimpl("switch@0x10b0a542 out of table"); return;
  }
  /* 10b0a549 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0a54c:;
  /* 10b0a54c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a54e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0a550 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0a552 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0a555 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0a558 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0a55b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a55e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a561 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a564 jb 0x10b0a50c */
  if (C.cf) goto L_10b0a50c;
  /* 10b0a566 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0a568 jmp dword ptr [edx*4 + 0x10b0a5f8] */
  switch (EDX) {
    case 0: goto L_10b0a608;
    case 1: goto L_10b0a610;
    case 2: goto L_10b0a61c;
    case 3: goto L_10b0a630;
    default: x86_unimpl("switch@0x10b0a568 out of table"); return;
  }
  /* 10b0a56f nop  */
  /* nop */
L_10b0a570:;
  /* 10b0a570 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a572 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0a574 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0a576 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b0a577 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0a57a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b0a57b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a57e jb 0x10b0a50c */
  if (C.cf) goto L_10b0a50c;
  /* 10b0a580 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0a582 jmp dword ptr [edx*4 + 0x10b0a5f8] */
  switch (EDX) {
    case 0: goto L_10b0a608;
    case 1: goto L_10b0a610;
    case 2: goto L_10b0a61c;
    case 3: goto L_10b0a630;
    default: x86_unimpl("switch@0x10b0a582 out of table"); return;
  }
  /* 10b0a589 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0a5ac:;
  /* 10b0a5ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10b0a5b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10b0a5b4:;
  /* 10b0a5b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10b0a5b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10b0a5bc:;
  /* 10b0a5bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10b0a5c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10b0a5c4:;
  /* 10b0a5c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10b0a5c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10b0a5cc:;
  /* 10b0a5cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10b0a5d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10b0a5d4:;
  /* 10b0a5d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10b0a5d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10b0a5dc:;
  /* 10b0a5dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10b0a5e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10b0a5e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b0a5eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a5ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b0a5ef:;
  /* 10b0a5ef jmp dword ptr [edx*4 + 0x10b0a5f8] */
  switch (EDX) {
    case 0: goto L_10b0a608;
    case 1: goto L_10b0a610;
    case 2: goto L_10b0a61c;
    case 3: goto L_10b0a630;
    default: x86_unimpl("switch@0x10b0a5ef out of table"); return;
  }
  /* 10b0a5f6 mov edi, edi */
  EDI = (EDI);
L_10b0a608:;
  /* 10b0a608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a60b pop esi */
  ESI = (pop32());
  /* 10b0a60c pop edi */
  EDI = (pop32());
  /* 10b0a60d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0a60e ret  */
  ESPCHK(0x10b0a4b0u, _esp0);
  ESP += 4; return;
  /* 10b0a60f nop  */
  /* nop */
L_10b0a610:;
  /* 10b0a610 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0a612 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0a614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a617 pop esi */
  ESI = (pop32());
  /* 10b0a618 pop edi */
  EDI = (pop32());
  /* 10b0a619 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0a61a ret  */
  ESPCHK(0x10b0a4b0u, _esp0);
  ESP += 4; return;
  /* 10b0a61b nop  */
  /* nop */
L_10b0a61c:;
  /* 10b0a61c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0a61e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0a620 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0a623 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0a626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a629 pop esi */
  ESI = (pop32());
  /* 10b0a62a pop edi */
  EDI = (pop32());
  /* 10b0a62b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0a62c ret  */
  ESPCHK(0x10b0a4b0u, _esp0);
  ESP += 4; return;
  /* 10b0a62d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0a630:;
  /* 10b0a630 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0a632 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0a634 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0a637 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0a63a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0a63d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0a640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a643 pop esi */
  ESI = (pop32());
  /* 10b0a644 pop edi */
  EDI = (pop32());
  /* 10b0a645 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0a646 ret  */
  ESPCHK(0x10b0a4b0u, _esp0);
  ESP += 4; return;
  /* 10b0a647 nop  */
  /* nop */
L_10b0a648:;
  /* 10b0a648 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10b0a64c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10b0a650 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b0a656 jne 0x10b0a67c */
  if (!C.zf) goto L_10b0a67c;
  /* 10b0a658 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0a65b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a65e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a661 jb 0x10b0a670 */
  if (C.cf) goto L_10b0a670;
  /* 10b0a663 std  */
  C.df=1;
  /* 10b0a664 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0a666 cld  */
  C.df=0;
  /* 10b0a667 jmp dword ptr [edx*4 + 0x10b0a790] */
  switch (EDX) {
    case 0: goto L_10b0a7a0;
    case 1: goto L_10b0a7a8;
    case 2: goto L_10b0a7b8;
    case 3: goto L_10b0a7cc;
    default: x86_unimpl("switch@0x10b0a667 out of table"); return;
  }
  /* 10b0a66e mov edi, edi */
  EDI = (EDI);
L_10b0a670:;
  /* 10b0a670 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0a672 jmp dword ptr [ecx*4 + 0x10b0a740] */
  switch (ECX) {
    case 0: goto L_10b0a787;
    default: x86_unimpl("switch@0x10b0a672 out of table"); return;
  }
  /* 10b0a679 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0a67c:;
  /* 10b0a67c mov eax, edi */
  EAX = (EDI);
  /* 10b0a67e mov edx, 3 */
  EDX = (0x3u);
  /* 10b0a683 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a686 jb 0x10b0a694 */
  if (C.cf) goto L_10b0a694;
  /* 10b0a688 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a68b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a68d jmp dword ptr [eax*4 + 0x10b0a698] */
  switch (EAX) {
    case 1: goto L_10b0a6a8;
    case 2: goto L_10b0a6c8;
    case 3: goto L_10b0a6f0;
    default: x86_unimpl("switch@0x10b0a68d out of table"); return;
  }
L_10b0a694:;
  /* 10b0a694 jmp dword ptr [ecx*4 + 0x10b0a790] */
  switch (ECX) {
    case 0: goto L_10b0a7a0;
    case 1: goto L_10b0a7a8;
    case 2: goto L_10b0a7b8;
    case 3: goto L_10b0a7cc;
    default: x86_unimpl("switch@0x10b0a694 out of table"); return;
  }
  /* 10b0a69b nop  */
  /* nop */
L_10b0a6a8:;
  /* 10b0a6a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0a6ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a6ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0a6b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b0a6b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0a6b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b0a6b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a6b8 jb 0x10b0a670 */
  if (C.cf) goto L_10b0a670;
  /* 10b0a6ba std  */
  C.df=1;
  /* 10b0a6bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0a6bd cld  */
  C.df=0;
  /* 10b0a6be jmp dword ptr [edx*4 + 0x10b0a790] */
  switch (EDX) {
    case 0: goto L_10b0a7a0;
    case 1: goto L_10b0a7a8;
    case 2: goto L_10b0a7b8;
    case 3: goto L_10b0a7cc;
    default: x86_unimpl("switch@0x10b0a6be out of table"); return;
  }
  /* 10b0a6c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0a6c8:;
  /* 10b0a6c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0a6cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a6cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0a6d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0a6d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0a6d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0a6d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a6dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a6df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a6e2 jb 0x10b0a670 */
  if (C.cf) goto L_10b0a670;
  /* 10b0a6e4 std  */
  C.df=1;
L_10b0a6e5:;
  /* 10b0a6e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0a6e7 cld  */
  C.df=0;
  /* 10b0a6e8 jmp dword ptr [edx*4 + 0x10b0a790] */
  switch (EDX) {
    case 0: goto L_10b0a7a0;
    case 1: goto L_10b0a7a8;
    case 2: goto L_10b0a7b8;
    case 3: goto L_10b0a7cc;
    default: x86_unimpl("switch@0x10b0a6e8 out of table"); return;
  }
  /* 10b0a6ef nop  */
  /* nop */
L_10b0a6f0:;
  /* 10b0a6f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0a6f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a6f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0a6f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0a6fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0a6fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0a701 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0a704 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0a707 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a70a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a70d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a710 jb 0x10b0a670 */
  if (C.cf) goto L_10b0a670;
  /* 10b0a716 std  */
  C.df=1;
  /* 10b0a717 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0a719 cld  */
  C.df=0;
  /* 10b0a71a jmp dword ptr [edx*4 + 0x10b0a790] */
  switch (EDX) {
    case 0: goto L_10b0a7a0;
    case 1: goto L_10b0a7a8;
    case 2: goto L_10b0a7b8;
    case 3: goto L_10b0a7cc;
    default: x86_unimpl("switch@0x10b0a71a out of table"); return;
  }
  /* 10b0a721 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10b0a724 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 10b0a725 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b0a726 mov al, 0x10 */
  AL = (0x10u);
  /* 10b0a728 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 10b0a729 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b0a72a mov al, 0x10 */
  AL = (0x10u);
  /* 10b0a72c push esp */
  push32((uint32_t)(ESP));
  /* 10b0a72d cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b0a72e mov al, 0x10 */
  AL = (0x10u);
  /* 10b0a730 pop esp */
  ESP = (pop32());
  /* 10b0a731 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b0a732 mov al, 0x10 */
  AL = (0x10u);
  /* 10b0a734 cmpsd dword ptr fs:[esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b0a736 mov al, 0x10 */
  AL = (0x10u);
  /* 10b0a738 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x10b0a738");
  /* 10b0a739 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b0a73a mov al, 0x10 */
  AL = (0x10u);
  /* 10b0a73c je 0x10b0a6e5 */
  if (C.zf) goto L_10b0a6e5;
  /* 10b0a73e mov al, 0x10 */
  AL = (0x10u);
  /* 10b0a744 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10b0a748 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10b0a74c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10b0a750 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10b0a754 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10b0a758 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10b0a75c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10b0a760 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10b0a764 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10b0a768 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10b0a76c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10b0a770 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10b0a774 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10b0a778 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10b0a77c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b0a783 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a785 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b0a787:;
  /* 10b0a787 jmp dword ptr [edx*4 + 0x10b0a790] */
  switch (EDX) {
    case 0: goto L_10b0a7a0;
    case 1: goto L_10b0a7a8;
    case 2: goto L_10b0a7b8;
    case 3: goto L_10b0a7cc;
    default: x86_unimpl("switch@0x10b0a787 out of table"); return;
  }
  /* 10b0a78e mov edi, edi */
  EDI = (EDI);
L_10b0a7a0:;
  /* 10b0a7a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a7a3 pop esi */
  ESI = (pop32());
  /* 10b0a7a4 pop edi */
  EDI = (pop32());
  /* 10b0a7a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0a7a6 ret  */
  ESPCHK(0x10b0a4b0u, _esp0);
  ESP += 4; return;
  /* 10b0a7a7 nop  */
  /* nop */
L_10b0a7a8:;
  /* 10b0a7a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0a7ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0a7ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a7b1 pop esi */
  ESI = (pop32());
  /* 10b0a7b2 pop edi */
  EDI = (pop32());
  /* 10b0a7b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0a7b4 ret  */
  ESPCHK(0x10b0a4b0u, _esp0);
  ESP += 4; return;
  /* 10b0a7b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0a7b8:;
  /* 10b0a7b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0a7bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0a7be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0a7c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0a7c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a7c7 pop esi */
  ESI = (pop32());
  /* 10b0a7c8 pop edi */
  EDI = (pop32());
  /* 10b0a7c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0a7ca ret  */
  ESPCHK(0x10b0a4b0u, _esp0);
  ESP += 4; return;
  /* 10b0a7cb nop  */
  /* nop */
L_10b0a7cc:;
  /* 10b0a7cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0a7cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0a7d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0a7d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0a7d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0a7db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0a7de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0a7e1 pop esi */
  ESI = (pop32());
  /* 10b0a7e2 pop edi */
  EDI = (pop32());
  /* 10b0a7e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0a7e4 ret  */
  ESPCHK(0x10b0a4b0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10b0a7f0 (104 bytes, 43 insns) */
void f_10b0a7f0(void) {
  FTRACE(0x10b0a7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a7f0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0a7f1 push esi */
  push32((uint32_t)(ESI));
  /* 10b0a7f2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10b0a7f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a7f8 jne 0x10b0a812 */
  if (!C.zf) goto L_10b0a812;
  /* 10b0a7fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b0a7fe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b0a802 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a804 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b0a806 mov ebx, eax */
  EBX = (EAX);
  /* 10b0a808 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b0a80c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b0a80e mov edx, ebx */
  EDX = (EBX);
  /* 10b0a810 jmp 0x10b0a853 */
  goto L_10b0a853;
L_10b0a812:;
  /* 10b0a812 mov ecx, eax */
  ECX = (EAX);
  /* 10b0a814 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b0a818 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b0a81c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10b0a820:;
  /* 10b0a820 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b0a822 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10b0a824 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b0a826 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10b0a828 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0a82a jne 0x10b0a820 */
  if (!C.zf) goto L_10b0a820;
  /* 10b0a82c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b0a82e mov esi, eax */
  ESI = (EAX);
  /* 10b0a830 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b0a834 mov ecx, eax */
  ECX = (EAX);
  /* 10b0a836 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b0a83a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b0a83c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a83e jb 0x10b0a84e */
  if (C.cf) goto L_10b0a84e;
  /* 10b0a840 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a844 ja 0x10b0a84e */
  if ((!C.cf&&!C.zf)) goto L_10b0a84e;
  /* 10b0a846 jb 0x10b0a84f */
  if (C.cf) goto L_10b0a84f;
  /* 10b0a848 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a84c jbe 0x10b0a84f */
  if ((C.cf||C.zf)) goto L_10b0a84f;
L_10b0a84e:;
  /* 10b0a84e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10b0a84f:;
  /* 10b0a84f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a851 mov eax, esi */
  EAX = (ESI);
L_10b0a853:;
  /* 10b0a853 pop esi */
  ESI = (pop32());
  /* 10b0a854 pop ebx */
  EBX = (pop32());
  /* 10b0a855 ret 0x10 */
  ESPCHK(0x10b0a7f0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10b0a860 (117 bytes, 44 insns) */
void f_10b0a860(void) {
  FTRACE(0x10b0a860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a860 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0a861 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b0a865 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a867 jne 0x10b0a881 */
  if (!C.zf) goto L_10b0a881;
  /* 10b0a869 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b0a86d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b0a871 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a873 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b0a875 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b0a879 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b0a87b mov eax, edx */
  EAX = (EDX);
  /* 10b0a87d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a87f jmp 0x10b0a8d1 */
  goto L_10b0a8d1;
L_10b0a881:;
  /* 10b0a881 mov ecx, eax */
  ECX = (EAX);
  /* 10b0a883 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b0a887 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b0a88b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10b0a88f:;
  /* 10b0a88f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b0a891 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10b0a893 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b0a895 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10b0a897 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0a899 jne 0x10b0a88f */
  if (!C.zf) goto L_10b0a88f;
  /* 10b0a89b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b0a89d mov ecx, eax */
  ECX = (EAX);
  /* 10b0a89f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b0a8a3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10b0a8a4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10b0a8a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a8aa jb 0x10b0a8ba */
  if (C.cf) goto L_10b0a8ba;
  /* 10b0a8ac cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a8b0 ja 0x10b0a8ba */
  if ((!C.cf&&!C.zf)) goto L_10b0a8ba;
  /* 10b0a8b2 jb 0x10b0a8c2 */
  if (C.cf) goto L_10b0a8c2;
  /* 10b0a8b4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a8b8 jbe 0x10b0a8c2 */
  if ((C.cf||C.zf)) goto L_10b0a8c2;
L_10b0a8ba:;
  /* 10b0a8ba sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a8be sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10b0a8c2:;
  /* 10b0a8c2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a8c6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a8ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0a8cc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0a8ce sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10b0a8d1:;
  /* 10b0a8d1 pop ebx */
  EBX = (pop32());
  /* 10b0a8d2 ret 0x10 */
  ESPCHK(0x10b0a860u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a8e0 @ 0x10b0a8e0 (628 bytes, 214 insns) */
void f_10b0a8e0(void) {
  FTRACE(0x10b0a8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0a8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0a8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0a8e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0a8e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0a8e7 push esi */
  push32((uint32_t)(ESI));
  /* 10b0a8e8 push edi */
  push32((uint32_t)(EDI));
L_10b0a8e9:;
  /* 10b0a8e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a8ed jne 0x10b0a90d */
  if (!C.zf) goto L_10b0a90d;
  /* 10b0a8ef push 0x10b2b0d4 */
  push32((uint32_t)(0x10b2b0d4u));
  /* 10b0a8f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0a8f6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10b0a8f8 push 0x10b2b0c8 */
  push32((uint32_t)(0x10b2b0c8u));
  /* 10b0a8fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0a8ff call 0x10b02c90 */
  push32(0x10b0a904u); f_10b02c90();
  /* 10b0a904 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0a907 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a90a jne 0x10b0a90d */
  if (!C.zf) goto L_10b0a90d;
  /* 10b0a90c int3  */
  x86_unimpl("int3 @ 0x10b0a90c");
L_10b0a90d:;
  /* 10b0a90d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a90f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0a911 jne 0x10b0a8e9 */
  if (!C.zf) goto L_10b0a8e9;
  /* 10b0a913 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0a916 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0a919 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a91c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b0a91f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b0a922 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a925 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0a928 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a92e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0a930 je 0x10b0a93f */
  if (C.zf) goto L_10b0a93f;
  /* 10b0a932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a935 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0a938 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0a93b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0a93d je 0x10b0a955 */
  if (C.zf) goto L_10b0a955;
L_10b0a93f:;
  /* 10b0a93f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a942 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b0a945 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10b0a947 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a94a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10b0a94d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a950 jmp 0x10b0ab4d */
  goto L_10b0ab4d;
L_10b0a955:;
  /* 10b0a955 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a958 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b0a95b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a95e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0a960 je 0x10b0a9ac */
  if (C.zf) goto L_10b0a9ac;
  /* 10b0a962 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a965 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b0a96c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a96f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b0a972 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0a977 je 0x10b0a995 */
  if (C.zf) goto L_10b0a995;
  /* 10b0a979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a97c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a97f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b0a982 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b0a984 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a987 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0a98a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a98d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a990 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b0a993 jmp 0x10b0a9ac */
  goto L_10b0a9ac;
L_10b0a995:;
  /* 10b0a995 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a998 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0a99b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a99e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a9a1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b0a9a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0a9a7 jmp 0x10b0ab4d */
  goto L_10b0ab4d;
L_10b0a9ac:;
  /* 10b0a9ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a9af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0a9b2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a9b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a9b8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b0a9bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a9be mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0a9c1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0a9c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a9c7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b0a9ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a9cd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b0a9d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0a9db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0a9de mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b0a9e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0a9e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0a9e7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0a9ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0a9ef jne 0x10b0aa1f */
  if (!C.zf) goto L_10b0aa1f;
  /* 10b0a9f1 cmp dword ptr [ebp - 8], 0x10b2e140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10b2e140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0a9f8 je 0x10b0aa03 */
  if (C.zf) goto L_10b0aa03;
  /* 10b0a9fa cmp dword ptr [ebp - 8], 0x10b2e160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10b2e160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0aa01 jne 0x10b0aa13 */
  if (!C.zf) goto L_10b0aa13;
L_10b0aa03:;
  /* 10b0aa03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0aa06 push edx */
  push32((uint32_t)(EDX));
  /* 10b0aa07 call 0x10b0c850 */
  push32(0x10b0aa0cu); f_10b0c850();
  /* 10b0aa0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0aa0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0aa11 jne 0x10b0aa1f */
  if (!C.zf) goto L_10b0aa1f;
L_10b0aa13:;
  /* 10b0aa13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa16 push eax */
  push32((uint32_t)(EAX));
  /* 10b0aa17 call 0x10b0c780 */
  push32(0x10b0aa1cu); f_10b0c780();
  /* 10b0aa1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0aa1f:;
  /* 10b0aa1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa22 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0aa25 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0aa2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0aa2d je 0x10b0ab0b */
  if (C.zf) goto L_10b0ab0b;
L_10b0aa33:;
  /* 10b0aa33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa39 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10b0aa3b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0aa3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0aa40 jge 0x10b0aa63 */
  if ((C.sf==C.of)) goto L_10b0aa63;
  /* 10b0aa42 push 0x10b2b088 */
  push32((uint32_t)(0x10b2b088u));
  /* 10b0aa47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0aa49 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b0aa4e push 0x10b2b0c8 */
  push32((uint32_t)(0x10b2b0c8u));
  /* 10b0aa53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0aa55 call 0x10b02c90 */
  push32(0x10b0aa5au); f_10b02c90();
  /* 10b0aa5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0aa5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0aa60 jne 0x10b0aa63 */
  if (!C.zf) goto L_10b0aa63;
  /* 10b0aa62 int3  */
  x86_unimpl("int3 @ 0x10b0aa62");
L_10b0aa63:;
  /* 10b0aa63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0aa65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0aa67 jne 0x10b0aa33 */
  if (!C.zf) goto L_10b0aa33;
  /* 10b0aa69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa6f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b0aa71 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0aa74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0aa77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa7a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b0aa7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0aa80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b0aa85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa88 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b0aa8b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0aa8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aa91 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b0aa94 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0aa98 jle 0x10b0aab6 */
  if ((C.zf||C.sf!=C.of)) goto L_10b0aab6;
  /* 10b0aa9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0aa9d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0aa9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0aaa1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b0aaa4 push eax */
  push32((uint32_t)(EAX));
  /* 10b0aaa5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0aaa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0aaa9 call 0x10b0c470 */
  push32(0x10b0aaaeu); f_10b0c470();
  /* 10b0aaae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0aab1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b0aab4 jmp 0x10b0aafe */
  goto L_10b0aafe;
L_10b0aab6:;
  /* 10b0aab6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0aaba je 0x10b0aad9 */
  if (C.zf) goto L_10b0aad9;
  /* 10b0aabc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0aabf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b0aac2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0aac5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0aac8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0aacb mov ecx, dword ptr [edx*4 + 0x10b30ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b0aad2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0aad4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b0aad7 jmp 0x10b0aae0 */
  goto L_10b0aae0;
L_10b0aad9:;
  /* 10b0aad9 mov dword ptr [ebp - 0x14], 0x10b2da60 */
  w32((uint32_t)(EBP + -0x14), (0x10b2da60u));
L_10b0aae0:;
  /* 10b0aae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0aae3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10b0aae7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0aaea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0aaec je 0x10b0aafe */
  if (C.zf) goto L_10b0aafe;
  /* 10b0aaee push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0aaf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0aaf2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0aaf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0aaf6 call 0x10b0c320 */
  push32(0x10b0aafbu); f_10b0c320();
  /* 10b0aafb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0aafe:;
  /* 10b0aafe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0ab01 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b0ab04 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b0ab07 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10b0ab09 jmp 0x10b0ab29 */
  goto L_10b0ab29;
L_10b0ab0b:;
  /* 10b0ab0b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b0ab12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ab15 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ab16 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10b0ab19 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ab1a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0ab1d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ab1e call 0x10b0c470 */
  push32(0x10b0ab23u); f_10b0c470();
  /* 10b0ab23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ab26 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b0ab29:;
  /* 10b0ab29 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0ab2c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ab2f je 0x10b0ab45 */
  if (C.zf) goto L_10b0ab45;
  /* 10b0ab31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0ab34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0ab37 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0ab3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0ab3d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10b0ab40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ab43 jmp 0x10b0ab4d */
  goto L_10b0ab4d;
L_10b0ab45:;
  /* 10b0ab45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ab48 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10b0ab4d:;
  /* 10b0ab4d pop edi */
  EDI = (pop32());
  /* 10b0ab4e pop esi */
  ESI = (pop32());
  /* 10b0ab4f pop ebx */
  EBX = (pop32());
  /* 10b0ab50 mov esp, ebp */
  ESP = (EBP);
  /* 10b0ab52 pop ebp */
  EBP = (pop32());
  /* 10b0ab53 ret  */
  ESPCHK(0x10b0a8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x10b0ab60 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10b0ab60(void) {
  FTRACE(0x10b0ab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ab60 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0ab61 mov ebp, esp */
  EBP = (ESP);
  /* 10b0ab63 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0ab69 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0ab6a push esi */
  push32((uint32_t)(ESI));
  /* 10b0ab6b push edi */
  push32((uint32_t)(EDI));
  /* 10b0ab6c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b0ab73 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10b0ab7d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10b0ab84:;
  /* 10b0ab84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0ab87 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b0ab89 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10b0ab8c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0ab90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0ab93 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ab96 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b0ab99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0ab9b je 0x10b0b777 */
  if (C.zf) goto L_10b0b777;
  /* 10b0aba1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0aba8 jl 0x10b0b777 */
  if ((C.sf!=C.of)) goto L_10b0b777;
  /* 10b0abae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0abb2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0abb5 jl 0x10b0abd6 */
  if ((C.sf!=C.of)) goto L_10b0abd6;
  /* 10b0abb7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0abbb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0abbe jg 0x10b0abd6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0abd6;
  /* 10b0abc0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0abc4 movsx ecx, byte ptr [eax + 0x10b2b0c0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10b2b0c0))));
  /* 10b0abcb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0abce mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10b0abd4 jmp 0x10b0abe0 */
  goto L_10b0abe0;
L_10b0abd6:;
  /* 10b0abd6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10b0abe0:;
  /* 10b0abe0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10b0abe6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b0abe9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0abec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0abef movsx edx, byte ptr [ecx + eax*8 + 0x10b2b0e0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10b2b0e0))));
  /* 10b0abf7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10b0abfa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b0abfd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0ac00 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10b0ac06 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ac0d ja 0x10b0b772 */
  if ((!C.cf&&!C.zf)) goto L_10b0b772;
  /* 10b0ac13 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10b0ac19 jmp dword ptr [ecx*4 + 0x10b0b784] */
  switch (ECX) {
    case 0: goto L_10b0ac20;
    case 1: goto L_10b0acba;
    case 2: goto L_10b0acfc;
    case 3: goto L_10b0ad6b;
    case 4: goto L_10b0adc3;
    case 5: goto L_10b0add2;
    case 6: goto L_10b0ae1e;
    case 7: goto L_10b0aeb1;
    case 8: goto L_10b0ad48;
    case 9: goto L_10b0ad53;
    case 10: goto L_10b0ad3e;
    case 11: goto L_10b0ad33;
    case 12: goto L_10b0ad5e;
    case 13: goto L_10b0ad66;
    default: x86_unimpl("switch@0x10b0ac19 out of table"); return;
  }
L_10b0ac20:;
  /* 10b0ac20 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10b0ac27 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0ac2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0ac30 mov eax, dword ptr [0x10b2dc98] */
  EAX = (r32((uint32_t)(0x10b2dc98)));
  /* 10b0ac35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0ac37 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10b0ac3b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0ac41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0ac43 je 0x10b0ac9d */
  if (C.zf) goto L_10b0ac9d;
  /* 10b0ac45 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10b0ac4b push edx */
  push32((uint32_t)(EDX));
  /* 10b0ac4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ac4f push eax */
  push32((uint32_t)(EAX));
  /* 10b0ac50 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0ac54 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ac55 call 0x10b0b890 */
  push32(0x10b0ac5au); f_10b0b890();
  /* 10b0ac5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ac5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0ac60 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b0ac62 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10b0ac65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0ac68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ac6b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10b0ac6e:;
  /* 10b0ac6e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0ac72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0ac74 jne 0x10b0ac97 */
  if (!C.zf) goto L_10b0ac97;
  /* 10b0ac76 push 0x10b2b160 */
  push32((uint32_t)(0x10b2b160u));
  /* 10b0ac7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0ac7d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10b0ac82 push 0x10b2b154 */
  push32((uint32_t)(0x10b2b154u));
  /* 10b0ac87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ac89 call 0x10b02c90 */
  push32(0x10b0ac8eu); f_10b02c90();
  /* 10b0ac8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ac91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ac94 jne 0x10b0ac97 */
  if (!C.zf) goto L_10b0ac97;
  /* 10b0ac96 int3  */
  x86_unimpl("int3 @ 0x10b0ac96");
L_10b0ac97:;
  /* 10b0ac97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ac99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0ac9b jne 0x10b0ac6e */
  if (!C.zf) goto L_10b0ac6e;
L_10b0ac9d:;
  /* 10b0ac9d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10b0aca3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0aca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0aca7 push edx */
  push32((uint32_t)(EDX));
  /* 10b0aca8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0acac push eax */
  push32((uint32_t)(EAX));
  /* 10b0acad call 0x10b0b890 */
  push32(0x10b0acb2u); f_10b0b890();
  /* 10b0acb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0acb5 jmp 0x10b0b772 */
  goto L_10b0b772;
L_10b0acba:;
  /* 10b0acba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b0acc1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0acc4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10b0acca mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10b0acd0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10b0acd6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10b0acdc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10b0acdf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0ace6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10b0acf0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10b0acf7 jmp 0x10b0b772 */
  goto L_10b0b772;
L_10b0acfc:;
  /* 10b0acfc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0ad00 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10b0ad06 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10b0ad0c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0ad0f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10b0ad15 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ad1c ja 0x10b0ad66 */
  if ((!C.cf&&!C.zf)) goto L_10b0ad66;
  /* 10b0ad1e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10b0ad24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ad26 mov al, byte ptr [ecx + 0x10b0b7bc] */
  AL = (r8((uint32_t)(ECX + 0x10b0b7bc)));
  /* 10b0ad2c jmp dword ptr [eax*4 + 0x10b0b7a4] */
  switch (EAX) {
    case 0: goto L_10b0ad48;
    case 1: goto L_10b0ad53;
    case 2: goto L_10b0ad3e;
    case 3: goto L_10b0ad33;
    case 4: goto L_10b0ad5e;
    case 5: goto L_10b0ad66;
    default: x86_unimpl("switch@0x10b0ad2c out of table"); return;
  }
L_10b0ad33:;
  /* 10b0ad33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ad36 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0ad39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0ad3c jmp 0x10b0ad66 */
  goto L_10b0ad66;
L_10b0ad3e:;
  /* 10b0ad3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ad41 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10b0ad43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0ad46 jmp 0x10b0ad66 */
  goto L_10b0ad66;
L_10b0ad48:;
  /* 10b0ad48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ad4b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0ad4e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0ad51 jmp 0x10b0ad66 */
  goto L_10b0ad66;
L_10b0ad53:;
  /* 10b0ad53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ad56 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10b0ad59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0ad5c jmp 0x10b0ad66 */
  goto L_10b0ad66;
L_10b0ad5e:;
  /* 10b0ad5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ad61 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10b0ad63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0ad66:;
  /* 10b0ad66 jmp 0x10b0b772 */
  goto L_10b0b772;
L_10b0ad6b:;
  /* 10b0ad6b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0ad6f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ad72 jne 0x10b0ada7 */
  if (!C.zf) goto L_10b0ada7;
  /* 10b0ad74 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b0ad77 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ad78 call 0x10b0b9a0 */
  push32(0x10b0ad7du); f_10b0b9a0();
  /* 10b0ad7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ad80 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10b0ad86 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ad8d jge 0x10b0ada5 */
  if ((C.sf==C.of)) goto L_10b0ada5;
  /* 10b0ad8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ad92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10b0ad94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0ad97 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10b0ad9d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0ad9f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10b0ada5:;
  /* 10b0ada5 jmp 0x10b0adbe */
  goto L_10b0adbe;
L_10b0ada7:;
  /* 10b0ada7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10b0adad imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0adb0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0adb4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10b0adb8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10b0adbe:;
  /* 10b0adbe jmp 0x10b0b772 */
  goto L_10b0b772;
L_10b0adc3:;
  /* 10b0adc3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10b0adcd jmp 0x10b0b772 */
  goto L_10b0b772;
L_10b0add2:;
  /* 10b0add2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0add6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0add9 jne 0x10b0ae02 */
  if (!C.zf) goto L_10b0ae02;
  /* 10b0addb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b0adde push eax */
  push32((uint32_t)(EAX));
  /* 10b0addf call 0x10b0b9a0 */
  push32(0x10b0ade4u); f_10b0b9a0();
  /* 10b0ade4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ade7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10b0aded cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0adf4 jge 0x10b0ae00 */
  if ((C.sf==C.of)) goto L_10b0ae00;
  /* 10b0adf6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10b0ae00:;
  /* 10b0ae00 jmp 0x10b0ae19 */
  goto L_10b0ae19;
L_10b0ae02:;
  /* 10b0ae02 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b0ae08 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0ae0b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0ae0f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10b0ae13 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10b0ae19:;
  /* 10b0ae19 jmp 0x10b0b772 */
  goto L_10b0b772;
L_10b0ae1e:;
  /* 10b0ae1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0ae22 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10b0ae28 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10b0ae2e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0ae31 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10b0ae37 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ae3e ja 0x10b0aeac */
  if ((!C.cf&&!C.zf)) goto L_10b0aeac;
  /* 10b0ae40 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10b0ae46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ae48 mov al, byte ptr [ecx + 0x10b0b7e1] */
  AL = (r8((uint32_t)(ECX + 0x10b0b7e1)));
  /* 10b0ae4e jmp dword ptr [eax*4 + 0x10b0b7cd] */
  switch (EAX) {
    case 0: goto L_10b0ae60;
    case 1: goto L_10b0ae99;
    case 2: goto L_10b0ae55;
    case 3: goto L_10b0aea3;
    case 4: goto L_10b0aeac;
    default: x86_unimpl("switch@0x10b0ae4e out of table"); return;
  }
L_10b0ae55:;
  /* 10b0ae55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ae58 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0ae5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0ae5e jmp 0x10b0aeac */
  goto L_10b0aeac;
L_10b0ae60:;
  /* 10b0ae60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0ae63 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0ae66 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ae69 jne 0x10b0ae8b */
  if (!C.zf) goto L_10b0ae8b;
  /* 10b0ae6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0ae6e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b0ae72 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ae75 jne 0x10b0ae8b */
  if (!C.zf) goto L_10b0ae8b;
  /* 10b0ae77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0ae7a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ae7d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b0ae80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ae83 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b0ae86 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0ae89 jmp 0x10b0ae97 */
  goto L_10b0ae97;
L_10b0ae8b:;
  /* 10b0ae8b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10b0ae92 jmp 0x10b0ac20 */
  goto L_10b0ac20;
L_10b0ae97:;
  /* 10b0ae97 jmp 0x10b0aeac */
  goto L_10b0aeac;
L_10b0ae99:;
  /* 10b0ae99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ae9c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10b0ae9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0aea1 jmp 0x10b0aeac */
  goto L_10b0aeac;
L_10b0aea3:;
  /* 10b0aea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0aea6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10b0aea9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b0aeac:;
  /* 10b0aeac jmp 0x10b0b772 */
  goto L_10b0b772;
L_10b0aeb1:;
  /* 10b0aeb1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0aeb5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10b0aebb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10b0aec1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0aec4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10b0aeca cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0aed1 ja 0x10b0b597 */
  if ((!C.cf&&!C.zf)) goto L_10b0b597;
  /* 10b0aed7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10b0aedd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0aedf mov cl, byte ptr [edx + 0x10b0b84c] */
  CL = (r8((uint32_t)(EDX + 0x10b0b84c)));
  /* 10b0aee5 jmp dword ptr [ecx*4 + 0x10b0b810] */
  switch (ECX) {
    case 0: goto L_10b0aeec;
    case 1: goto L_10b0b180;
    case 2: goto L_10b0b010;
    case 3: goto L_10b0b2b9;
    case 4: goto L_10b0af7b;
    case 5: goto L_10b0af01;
    case 6: goto L_10b0b28b;
    case 7: goto L_10b0b190;
    case 8: goto L_10b0b135;
    case 9: goto L_10b0b305;
    case 10: goto L_10b0b2af;
    case 11: goto L_10b0b026;
    case 12: goto L_10b0b2a3;
    case 13: goto L_10b0b2c5;
    case 14: goto L_10b0b597;
    default: x86_unimpl("switch@0x10b0aee5 out of table"); return;
  }
L_10b0aeec:;
  /* 10b0aeec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0aeef and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0aef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0aef6 jne 0x10b0af01 */
  if (!C.zf) goto L_10b0af01;
  /* 10b0aef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0aefb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10b0aefe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b0af01:;
  /* 10b0af01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0af04 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0af0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0af0c je 0x10b0af47 */
  if (C.zf) goto L_10b0af47;
  /* 10b0af0e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b0af11 push eax */
  push32((uint32_t)(EAX));
  /* 10b0af12 call 0x10b0b9e0 */
  push32(0x10b0af17u); f_10b0b9e0();
  /* 10b0af17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0af1a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10b0af1e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10b0af22 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0af23 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10b0af29 push edx */
  push32((uint32_t)(EDX));
  /* 10b0af2a call 0x10b0cac0 */
  push32(0x10b0af2fu); f_10b0cac0();
  /* 10b0af2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0af32 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b0af35 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0af39 jge 0x10b0af45 */
  if ((C.sf==C.of)) goto L_10b0af45;
  /* 10b0af3b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10b0af45:;
  /* 10b0af45 jmp 0x10b0af6d */
  goto L_10b0af6d;
L_10b0af47:;
  /* 10b0af47 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b0af4a push eax */
  push32((uint32_t)(EAX));
  /* 10b0af4b call 0x10b0b9a0 */
  push32(0x10b0af50u); f_10b0b9a0();
  /* 10b0af50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0af53 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10b0af5a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10b0af60 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10b0af66 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10b0af6d:;
  /* 10b0af6d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10b0af73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b0af76 jmp 0x10b0b597 */
  goto L_10b0b597;
L_10b0af7b:;
  /* 10b0af7b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b0af7e push eax */
  push32((uint32_t)(EAX));
  /* 10b0af7f call 0x10b0b9a0 */
  push32(0x10b0af84u); f_10b0b9a0();
  /* 10b0af84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0af87 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10b0af8d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0af94 je 0x10b0afa2 */
  if (C.zf) goto L_10b0afa2;
  /* 10b0af96 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b0af9c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0afa0 jne 0x10b0afbc */
  if (!C.zf) goto L_10b0afbc;
L_10b0afa2:;
  /* 10b0afa2 mov edx, dword ptr [0x10b2dfb0] */
  EDX = (r32((uint32_t)(0x10b2dfb0)));
  /* 10b0afa8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b0afab mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0afae push eax */
  push32((uint32_t)(EAX));
  /* 10b0afaf call 0x10b06a00 */
  push32(0x10b0afb4u); f_10b06a00();
  /* 10b0afb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0afb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b0afba jmp 0x10b0b00b */
  goto L_10b0b00b;
L_10b0afbc:;
  /* 10b0afbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0afbf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0afc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0afc7 je 0x10b0afec */
  if (C.zf) goto L_10b0afec;
  /* 10b0afc9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b0afcf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b0afd2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b0afd5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b0afdb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10b0afde shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b0afe0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b0afe3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10b0afea jmp 0x10b0b00b */
  goto L_10b0b00b;
L_10b0afec:;
  /* 10b0afec mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10b0aff3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b0aff9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0affc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b0afff mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10b0b005 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10b0b008 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10b0b00b:;
  /* 10b0b00b jmp 0x10b0b597 */
  goto L_10b0b597;
L_10b0b010:;
  /* 10b0b010 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b013 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b019 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0b01b jne 0x10b0b026 */
  if (!C.zf) goto L_10b0b026;
  /* 10b0b01d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b020 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b0b023 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b0b026:;
  /* 10b0b026 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b02d jne 0x10b0b03b */
  if (!C.zf) goto L_10b0b03b;
  /* 10b0b02f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10b0b039 jmp 0x10b0b047 */
  goto L_10b0b047;
L_10b0b03b:;
  /* 10b0b03b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b0b041 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10b0b047:;
  /* 10b0b047 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10b0b04d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10b0b053 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b0b056 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b057 call 0x10b0b9a0 */
  push32(0x10b0b05cu); f_10b0b9a0();
  /* 10b0b05c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b05f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b0b062 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b065 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b06a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b06c je 0x10b0b0d6 */
  if (C.zf) goto L_10b0b0d6;
  /* 10b0b06e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b072 jne 0x10b0b07d */
  if (!C.zf) goto L_10b0b07d;
  /* 10b0b074 mov ecx, dword ptr [0x10b2dfb4] */
  ECX = (r32((uint32_t)(0x10b2dfb4)));
  /* 10b0b07a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10b0b07d:;
  /* 10b0b07d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10b0b084 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b087 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10b0b08d:;
  /* 10b0b08d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10b0b093 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10b0b099 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b09c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10b0b0a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b0a4 je 0x10b0b0c6 */
  if (C.zf) goto L_10b0b0c6;
  /* 10b0b0a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10b0b0ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b0ae mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10b0b0b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b0b3 je 0x10b0b0c6 */
  if (C.zf) goto L_10b0b0c6;
  /* 10b0b0b5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10b0b0bb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b0be mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10b0b0c4 jmp 0x10b0b08d */
  goto L_10b0b08d;
L_10b0b0c6:;
  /* 10b0b0c6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10b0b0cc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b0cf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b0b0d1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10b0b0d4 jmp 0x10b0b130 */
  goto L_10b0b130;
L_10b0b0d6:;
  /* 10b0b0d6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b0da jne 0x10b0b0e4 */
  if (!C.zf) goto L_10b0b0e4;
  /* 10b0b0dc mov eax, dword ptr [0x10b2dfb0] */
  EAX = (r32((uint32_t)(0x10b2dfb0)));
  /* 10b0b0e1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10b0b0e4:;
  /* 10b0b0e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b0e7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10b0b0ed:;
  /* 10b0b0ed mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10b0b0f3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10b0b0f9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b0fc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10b0b102 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b104 je 0x10b0b124 */
  if (C.zf) goto L_10b0b124;
  /* 10b0b106 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10b0b10c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0b10f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b111 je 0x10b0b124 */
  if (C.zf) goto L_10b0b124;
  /* 10b0b113 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10b0b119 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b11c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10b0b122 jmp 0x10b0b0ed */
  goto L_10b0b0ed;
L_10b0b124:;
  /* 10b0b124 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10b0b12a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b12d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10b0b130:;
  /* 10b0b130 jmp 0x10b0b597 */
  goto L_10b0b597;
L_10b0b135:;
  /* 10b0b135 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b0b138 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b139 call 0x10b0b9a0 */
  push32(0x10b0b13eu); f_10b0b9a0();
  /* 10b0b13e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b141 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10b0b147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b14a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b14d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b14f je 0x10b0b163 */
  if (C.zf) goto L_10b0b163;
  /* 10b0b151 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10b0b157 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10b0b15e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10b0b161 jmp 0x10b0b171 */
  goto L_10b0b171;
L_10b0b163:;
  /* 10b0b163 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10b0b169 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10b0b16f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10b0b171:;
  /* 10b0b171 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10b0b17b jmp 0x10b0b597 */
  goto L_10b0b597;
L_10b0b180:;
  /* 10b0b180 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b0b187 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10b0b18a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b0b18d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10b0b190:;
  /* 10b0b190 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b193 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10b0b195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0b198 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10b0b19e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b0b1a1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b1a8 jge 0x10b0b1b6 */
  if ((C.sf==C.of)) goto L_10b0b1b6;
  /* 10b0b1aa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10b0b1b4 jmp 0x10b0b1d2 */
  goto L_10b0b1d2;
L_10b0b1b6:;
  /* 10b0b1b6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b1bd jne 0x10b0b1d2 */
  if (!C.zf) goto L_10b0b1d2;
  /* 10b0b1bf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0b1c3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b1c6 jne 0x10b0b1d2 */
  if (!C.zf) goto L_10b0b1d2;
  /* 10b0b1c8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10b0b1d2:;
  /* 10b0b1d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0b1d5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b1d8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10b0b1db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0b1de sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b1e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0b1e3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b0b1e6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10b0b1ec mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10b0b1f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0b1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b1f6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b0b1fc push edx */
  push32((uint32_t)(EDX));
  /* 10b0b1fd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0b201 push eax */
  push32((uint32_t)(EAX));
  /* 10b0b202 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b205 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b206 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10b0b20c push edx */
  push32((uint32_t)(EDX));
  /* 10b0b20d call dword ptr [0x10b2e3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2e3a0))), 0x10b0b213u);
  /* 10b0b213 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b216 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b219 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b21e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b220 je 0x10b0b238 */
  if (C.zf) goto L_10b0b238;
  /* 10b0b222 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b229 jne 0x10b0b238 */
  if (!C.zf) goto L_10b0b238;
  /* 10b0b22b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b22e push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b22f call dword ptr [0x10b2e3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2e3ac))), 0x10b0b235u);
  /* 10b0b235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0b238:;
  /* 10b0b238 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10b0b23c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b23f jne 0x10b0b25a */
  if (!C.zf) goto L_10b0b25a;
  /* 10b0b241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b244 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b24b jne 0x10b0b25a */
  if (!C.zf) goto L_10b0b25a;
  /* 10b0b24d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b250 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b251 call dword ptr [0x10b2e3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2e3a4))), 0x10b0b257u);
  /* 10b0b257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0b25a:;
  /* 10b0b25a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b25d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b0b260 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b263 jne 0x10b0b277 */
  if (!C.zf) goto L_10b0b277;
  /* 10b0b265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b268 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10b0b26b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0b26e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b271 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b274 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10b0b277:;
  /* 10b0b277 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b27a push eax */
  push32((uint32_t)(EAX));
  /* 10b0b27b call 0x10b06a00 */
  push32(0x10b0b280u); f_10b06a00();
  /* 10b0b280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b283 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b0b286 jmp 0x10b0b597 */
  goto L_10b0b597;
L_10b0b28b:;
  /* 10b0b28b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b28e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b291 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0b294 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10b0b29e jmp 0x10b0b325 */
  goto L_10b0b325;
L_10b0b2a3:;
  /* 10b0b2a3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10b0b2ad jmp 0x10b0b325 */
  goto L_10b0b325;
L_10b0b2af:;
  /* 10b0b2af mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10b0b2b9:;
  /* 10b0b2b9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10b0b2c3 jmp 0x10b0b2cf */
  goto L_10b0b2cf;
L_10b0b2c5:;
  /* 10b0b2c5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10b0b2cf:;
  /* 10b0b2cf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10b0b2d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b2dc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b2e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b2e4 je 0x10b0b303 */
  if (C.zf) goto L_10b0b303;
  /* 10b0b2e6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10b0b2ed mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10b0b2f3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b2f6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10b0b2fc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10b0b303:;
  /* 10b0b303 jmp 0x10b0b325 */
  goto L_10b0b325;
L_10b0b305:;
  /* 10b0b305 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10b0b30f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b312 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0b31a je 0x10b0b325 */
  if (C.zf) goto L_10b0b325;
  /* 10b0b31c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b31f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b0b322 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b0b325:;
  /* 10b0b325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b328 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b32d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b32f je 0x10b0b34e */
  if (C.zf) goto L_10b0b34e;
  /* 10b0b331 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10b0b334 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b335 call 0x10b0b9c0 */
  push32(0x10b0b33au); f_10b0b9c0();
  /* 10b0b33a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b33d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b0b343 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10b0b349 jmp 0x10b0b3df */
  goto L_10b0b3df;
L_10b0b34e:;
  /* 10b0b34e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b351 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b354 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b356 je 0x10b0b3a0 */
  if (C.zf) goto L_10b0b3a0;
  /* 10b0b358 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b35b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b35e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b360 je 0x10b0b380 */
  if (C.zf) goto L_10b0b380;
  /* 10b0b362 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10b0b365 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b366 call 0x10b0b9a0 */
  push32(0x10b0b36bu); f_10b0b9a0();
  /* 10b0b36b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b36e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10b0b371 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b0b372 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b0b378 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10b0b37e jmp 0x10b0b39e */
  goto L_10b0b39e;
L_10b0b380:;
  /* 10b0b380 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b0b383 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b384 call 0x10b0b9a0 */
  push32(0x10b0b389u); f_10b0b9a0();
  /* 10b0b389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b38c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b391 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b0b392 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b0b398 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10b0b39e:;
  /* 10b0b39e jmp 0x10b0b3df */
  goto L_10b0b3df;
L_10b0b3a0:;
  /* 10b0b3a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b3a3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b3a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b3a8 je 0x10b0b3c5 */
  if (C.zf) goto L_10b0b3c5;
  /* 10b0b3aa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10b0b3ad push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b3ae call 0x10b0b9a0 */
  push32(0x10b0b3b3u); f_10b0b9a0();
  /* 10b0b3b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b3b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b0b3b7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b0b3bd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10b0b3c3 jmp 0x10b0b3df */
  goto L_10b0b3df;
L_10b0b3c5:;
  /* 10b0b3c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10b0b3c8 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b3c9 call 0x10b0b9a0 */
  push32(0x10b0b3ceu); f_10b0b9a0();
  /* 10b0b3ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b3d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b3d3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10b0b3d9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10b0b3df:;
  /* 10b0b3df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b3e2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b3e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b3e7 je 0x10b0b427 */
  if (C.zf) goto L_10b0b427;
  /* 10b0b3e9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b3f0 jg 0x10b0b427 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0b427;
  /* 10b0b3f2 jl 0x10b0b3fd */
  if ((C.sf!=C.of)) goto L_10b0b3fd;
  /* 10b0b3f4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b3fb jae 0x10b0b427 */
  if (!C.cf) goto L_10b0b427;
L_10b0b3fd:;
  /* 10b0b3fd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10b0b403 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0b405 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10b0b40b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b40e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0b410 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10b0b416 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10b0b41c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b41f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b0b422 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0b425 jmp 0x10b0b43f */
  goto L_10b0b43f;
L_10b0b427:;
  /* 10b0b427 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10b0b42d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10b0b433 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10b0b439 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10b0b43f:;
  /* 10b0b43f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b442 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b448 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b44a jne 0x10b0b467 */
  if (!C.zf) goto L_10b0b467;
  /* 10b0b44c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b0b452 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10b0b458 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b45b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10b0b461 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10b0b467:;
  /* 10b0b467 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b46e jge 0x10b0b47c */
  if ((C.sf==C.of)) goto L_10b0b47c;
  /* 10b0b470 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10b0b47a jmp 0x10b0b485 */
  goto L_10b0b485;
L_10b0b47c:;
  /* 10b0b47c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b47f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b482 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b0b485:;
  /* 10b0b485 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b0b48b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b493 jne 0x10b0b49c */
  if (!C.zf) goto L_10b0b49c;
  /* 10b0b495 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10b0b49c:;
  /* 10b0b49c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10b0b49f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10b0b4a2:;
  /* 10b0b4a2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b0b4a8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10b0b4ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b4b1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10b0b4b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b4b9 jg 0x10b0b4cf */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0b4cf;
  /* 10b0b4bb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b0b4c1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b4c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0b4c9 je 0x10b0b550 */
  if (C.zf) goto L_10b0b550;
L_10b0b4cf:;
  /* 10b0b4cf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10b0b4d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b0b4d6 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b4d7 push eax */
  push32((uint32_t)(EAX));
  /* 10b0b4d8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10b0b4de push edx */
  push32((uint32_t)(EDX));
  /* 10b0b4df mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b0b4e5 push eax */
  push32((uint32_t)(EAX));
  /* 10b0b4e6 call 0x10b0a860 */
  push32(0x10b0b4ebu); f_10b0a860();
  /* 10b0b4eb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b4ee mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10b0b4f4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10b0b4fa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b0b4fb push edx */
  push32((uint32_t)(EDX));
  /* 10b0b4fc push eax */
  push32((uint32_t)(EAX));
  /* 10b0b4fd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10b0b503 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b504 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10b0b50a push edx */
  push32((uint32_t)(EDX));
  /* 10b0b50b call 0x10b0a7f0 */
  push32(0x10b0b510u); f_10b0a7f0();
  /* 10b0b510 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10b0b516 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10b0b51c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b523 jle 0x10b0b537 */
  if ((C.zf||C.sf!=C.of)) goto L_10b0b537;
  /* 10b0b525 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10b0b52b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b531 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10b0b537:;
  /* 10b0b537 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b53a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10b0b540 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10b0b542 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b545 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b548 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b0b54b jmp 0x10b0b4a2 */
  goto L_10b0b4a2;
L_10b0b550:;
  /* 10b0b550 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10b0b553 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b556 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b0b559 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b55c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b55f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b0b562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b565 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b56a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b56c je 0x10b0b597 */
  if (C.zf) goto L_10b0b597;
  /* 10b0b56e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b571 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0b574 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b577 jne 0x10b0b57f */
  if (!C.zf) goto L_10b0b57f;
  /* 10b0b579 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b57d jne 0x10b0b597 */
  if (!C.zf) goto L_10b0b597;
L_10b0b57f:;
  /* 10b0b57f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b582 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b585 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b0b588 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b58b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10b0b58e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0b591 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b594 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10b0b597:;
  /* 10b0b597 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b59e jne 0x10b0b772 */
  if (!C.zf) goto L_10b0b772;
  /* 10b0b5a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b5a7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b5aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b5ac je 0x10b0b5fd */
  if (C.zf) goto L_10b0b5fd;
  /* 10b0b5ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b5b1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b5b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0b5b9 je 0x10b0b5cb */
  if (C.zf) goto L_10b0b5cb;
  /* 10b0b5bb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10b0b5c2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10b0b5c9 jmp 0x10b0b5fd */
  goto L_10b0b5fd;
L_10b0b5cb:;
  /* 10b0b5cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b5ce and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b5d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b5d3 je 0x10b0b5e5 */
  if (C.zf) goto L_10b0b5e5;
  /* 10b0b5d5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10b0b5dc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10b0b5e3 jmp 0x10b0b5fd */
  goto L_10b0b5fd;
L_10b0b5e5:;
  /* 10b0b5e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b5e8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0b5eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b5ed je 0x10b0b5fd */
  if (C.zf) goto L_10b0b5fd;
  /* 10b0b5ef mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10b0b5f6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10b0b5fd:;
  /* 10b0b5fd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10b0b603 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b606 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b609 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10b0b60f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b612 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b615 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b617 jne 0x10b0b635 */
  if (!C.zf) goto L_10b0b635;
  /* 10b0b619 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b0b61f push eax */
  push32((uint32_t)(EAX));
  /* 10b0b620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b623 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b624 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10b0b62a push edx */
  push32((uint32_t)(EDX));
  /* 10b0b62b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b0b62d call 0x10b0b910 */
  push32(0x10b0b632u); f_10b0b910();
  /* 10b0b632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0b635:;
  /* 10b0b635 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b0b63b push eax */
  push32((uint32_t)(EAX));
  /* 10b0b63c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b63f push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b640 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0b643 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b644 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10b0b64a push eax */
  push32((uint32_t)(EAX));
  /* 10b0b64b call 0x10b0b950 */
  push32(0x10b0b650u); f_10b0b950();
  /* 10b0b650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b656 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b659 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0b65b je 0x10b0b683 */
  if (C.zf) goto L_10b0b683;
  /* 10b0b65d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b660 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b663 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b665 jne 0x10b0b683 */
  if (!C.zf) goto L_10b0b683;
  /* 10b0b667 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b0b66d push eax */
  push32((uint32_t)(EAX));
  /* 10b0b66e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b671 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b672 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10b0b678 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b679 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10b0b67b call 0x10b0b910 */
  push32(0x10b0b680u); f_10b0b910();
  /* 10b0b680 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0b683:;
  /* 10b0b683 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b687 je 0x10b0b731 */
  if (C.zf) goto L_10b0b731;
  /* 10b0b68d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b691 jle 0x10b0b731 */
  if ((C.zf||C.sf!=C.of)) goto L_10b0b731;
  /* 10b0b697 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b69a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10b0b6a0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0b6a3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10b0b6a9:;
  /* 10b0b6a9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10b0b6af mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10b0b6b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b6b8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10b0b6be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b6c0 je 0x10b0b72f */
  if (C.zf) goto L_10b0b72f;
  /* 10b0b6c2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10b0b6c8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10b0b6cb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10b0b6d2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10b0b6d9 push eax */
  push32((uint32_t)(EAX));
  /* 10b0b6da lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10b0b6e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b6e1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10b0b6e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b6ea mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10b0b6f0 call 0x10b0cac0 */
  push32(0x10b0b6f5u); f_10b0cac0();
  /* 10b0b6f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b6f8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10b0b6fe cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b705 jg 0x10b0b709 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0b709;
  /* 10b0b707 jmp 0x10b0b72f */
  goto L_10b0b72f;
L_10b0b709:;
  /* 10b0b709 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b0b70f push eax */
  push32((uint32_t)(EAX));
  /* 10b0b710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b713 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b714 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10b0b71a push edx */
  push32((uint32_t)(EDX));
  /* 10b0b71b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10b0b721 push eax */
  push32((uint32_t)(EAX));
  /* 10b0b722 call 0x10b0b950 */
  push32(0x10b0b727u); f_10b0b950();
  /* 10b0b727 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b72a jmp 0x10b0b6a9 */
  goto L_10b0b6a9;
L_10b0b72f:;
  /* 10b0b72f jmp 0x10b0b74c */
  goto L_10b0b74c;
L_10b0b731:;
  /* 10b0b731 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10b0b737 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b73b push edx */
  push32((uint32_t)(EDX));
  /* 10b0b73c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0b73f push eax */
  push32((uint32_t)(EAX));
  /* 10b0b740 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0b743 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b744 call 0x10b0b950 */
  push32(0x10b0b749u); f_10b0b950();
  /* 10b0b749 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0b74c:;
  /* 10b0b74c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b74f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0b752 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0b754 je 0x10b0b772 */
  if (C.zf) goto L_10b0b772;
  /* 10b0b756 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10b0b75c push eax */
  push32((uint32_t)(EAX));
  /* 10b0b75d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b760 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b761 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10b0b767 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b768 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b0b76a call 0x10b0b910 */
  push32(0x10b0b76fu); f_10b0b910();
  /* 10b0b76f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0b772:;
  /* 10b0b772 jmp 0x10b0ab84 */
  goto L_10b0ab84;
L_10b0b777:;
  /* 10b0b777 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10b0b77d pop edi */
  EDI = (pop32());
  /* 10b0b77e pop esi */
  ESI = (pop32());
  /* 10b0b77f pop ebx */
  EBX = (pop32());
  /* 10b0b780 mov esp, ebp */
  ESP = (EBP);
  /* 10b0b782 pop ebp */
  EBP = (pop32());
  /* 10b0b783 ret  */
  ESPCHK(0x10b0ab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b890 @ 0x10b0b890 (119 bytes, 44 insns) */
void f_10b0b890(void) {
  FTRACE(0x10b0b890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0b890 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0b891 mov ebp, esp */
  EBP = (ESP);
  /* 10b0b893 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b894 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b897 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0b89a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b89d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b8a0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b0b8a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b8a6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b8aa jl 0x10b0b8d2 */
  if ((C.sf!=C.of)) goto L_10b0b8d2;
  /* 10b0b8ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b8af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0b8b1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10b0b8b4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10b0b8b6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10b0b8ba and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0b8c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0b8c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b8c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b0b8c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b8cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b8ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b0b8d0 jmp 0x10b0b8e5 */
  goto L_10b0b8e5;
L_10b0b8d2:;
  /* 10b0b8d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b8d5 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b8d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b8d9 push eax */
  push32((uint32_t)(EAX));
  /* 10b0b8da call 0x10b0a8e0 */
  push32(0x10b0b8dfu); f_10b0a8e0();
  /* 10b0b8df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b8e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0b8e5:;
  /* 10b0b8e5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b8e9 jne 0x10b0b8f6 */
  if (!C.zf) goto L_10b0b8f6;
  /* 10b0b8eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0b8ee mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b0b8f4 jmp 0x10b0b903 */
  goto L_10b0b903;
L_10b0b8f6:;
  /* 10b0b8f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0b8f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b0b8fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b8fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0b901 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10b0b903:;
  /* 10b0b903 mov esp, ebp */
  ESP = (EBP);
  /* 10b0b905 pop ebp */
  EBP = (pop32());
  /* 10b0b906 ret  */
  ESPCHK(0x10b0b890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b910 @ 0x10b0b910 (53 bytes, 23 insns) */
void f_10b0b910(void) {
  FTRACE(0x10b0b910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0b910 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0b911 mov ebp, esp */
  EBP = (ESP);
L_10b0b913:;
  /* 10b0b913 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b916 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b919 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b91c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b0b91f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b921 jle 0x10b0b943 */
  if ((C.zf||C.sf!=C.of)) goto L_10b0b943;
  /* 10b0b923 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0b926 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b927 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0b92a push eax */
  push32((uint32_t)(EAX));
  /* 10b0b92b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b92e push ecx */
  push32((uint32_t)(ECX));
  /* 10b0b92f call 0x10b0b890 */
  push32(0x10b0b934u); f_10b0b890();
  /* 10b0b934 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b937 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0b93a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b93d jne 0x10b0b941 */
  if (!C.zf) goto L_10b0b941;
  /* 10b0b93f jmp 0x10b0b943 */
  goto L_10b0b943;
L_10b0b941:;
  /* 10b0b941 jmp 0x10b0b913 */
  goto L_10b0b913;
L_10b0b943:;
  /* 10b0b943 pop ebp */
  EBP = (pop32());
  /* 10b0b944 ret  */
  ESPCHK(0x10b0b910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b950 @ 0x10b0b950 (74 bytes, 31 insns) */
void f_10b0b950(void) {
  FTRACE(0x10b0b950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0b950 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0b951 mov ebp, esp */
  EBP = (ESP);
  /* 10b0b953 push ecx */
  push32((uint32_t)(ECX));
L_10b0b954:;
  /* 10b0b954 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b957 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0b95a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b95d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b0b960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0b962 jle 0x10b0b996 */
  if ((C.zf||C.sf!=C.of)) goto L_10b0b996;
  /* 10b0b964 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0b967 push edx */
  push32((uint32_t)(EDX));
  /* 10b0b968 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0b96b push eax */
  push32((uint32_t)(EAX));
  /* 10b0b96c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b96f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0b972 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0b975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0b978 push eax */
  push32((uint32_t)(EAX));
  /* 10b0b979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b97c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b97f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b0b982 call 0x10b0b890 */
  push32(0x10b0b987u); f_10b0b890();
  /* 10b0b987 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b98a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0b98d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0b990 jne 0x10b0b994 */
  if (!C.zf) goto L_10b0b994;
  /* 10b0b992 jmp 0x10b0b996 */
  goto L_10b0b996;
L_10b0b994:;
  /* 10b0b994 jmp 0x10b0b954 */
  goto L_10b0b954;
L_10b0b996:;
  /* 10b0b996 mov esp, ebp */
  ESP = (EBP);
  /* 10b0b998 pop ebp */
  EBP = (pop32());
  /* 10b0b999 ret  */
  ESPCHK(0x10b0b950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9a0 @ 0x10b0b9a0 (26 bytes, 12 insns) */
void f_10b0b9a0(void) {
  FTRACE(0x10b0b9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0b9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0b9a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0b9a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0b9a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b9ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b0b9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0b9b5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b0b9b8 pop ebp */
  EBP = (pop32());
  /* 10b0b9b9 ret  */
  ESPCHK(0x10b0b9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9c0 @ 0x10b0b9c0 (31 bytes, 14 insns) */
void f_10b0b9c0(void) {
  FTRACE(0x10b0b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0b9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0b9c8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b9cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b0b9d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0b9d5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0b9d8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b0b9da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b0b9dd pop ebp */
  EBP = (pop32());
  /* 10b0b9de ret  */
  ESPCHK(0x10b0b9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e0 @ 0x10b0b9e0 (27 bytes, 12 insns) */
void f_10b0b9e0(void) {
  FTRACE(0x10b0b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0b9e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0b9e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0b9eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b0b9f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0b9f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0b9f5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10b0b9f9 pop ebp */
  EBP = (pop32());
  /* 10b0b9fa ret  */
  ESPCHK(0x10b0b9e0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10b0ba00 (145 bytes, 42 insns) */
void f_10b0ba00(void) {
  FTRACE(0x10b0ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0ba01 mov ebp, esp */
  EBP = (ESP);
  /* 10b0ba03 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ba04 call 0x10b0bab0 */
  push32(0x10b0ba09u); f_10b0bab0();
  /* 10b0ba09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ba0c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b0ba0e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0ba15 jmp 0x10b0ba20 */
  goto L_10b0ba20;
L_10b0ba17:;
  /* 10b0ba17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ba1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ba1d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b0ba20:;
  /* 10b0ba20 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ba24 jae 0x10b0ba4a */
  if (!C.cf) goto L_10b0ba4a;
  /* 10b0ba26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ba29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ba2c cmp ecx, dword ptr [eax*8 + 0x10b2dfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10b2dfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ba33 jne 0x10b0ba48 */
  if (!C.zf) goto L_10b0ba48;
  /* 10b0ba35 call 0x10b0baa0 */
  push32(0x10b0ba3au); f_10b0baa0();
  /* 10b0ba3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ba3d mov ecx, dword ptr [edx*8 + 0x10b2dfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10b2dfbc)));
  /* 10b0ba44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b0ba46 jmp 0x10b0ba8d */
  goto L_10b0ba8d;
L_10b0ba48:;
  /* 10b0ba48 jmp 0x10b0ba17 */
  goto L_10b0ba17;
L_10b0ba4a:;
  /* 10b0ba4a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ba4e jb 0x10b0ba63 */
  if (C.cf) goto L_10b0ba63;
  /* 10b0ba50 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ba54 ja 0x10b0ba63 */
  if ((!C.cf&&!C.zf)) goto L_10b0ba63;
  /* 10b0ba56 call 0x10b0baa0 */
  push32(0x10b0ba5bu); f_10b0baa0();
  /* 10b0ba5b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10b0ba61 jmp 0x10b0ba8d */
  goto L_10b0ba8d;
L_10b0ba63:;
  /* 10b0ba63 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ba6a jb 0x10b0ba82 */
  if (C.cf) goto L_10b0ba82;
  /* 10b0ba6c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ba73 ja 0x10b0ba82 */
  if ((!C.cf&&!C.zf)) goto L_10b0ba82;
  /* 10b0ba75 call 0x10b0baa0 */
  push32(0x10b0ba7au); f_10b0baa0();
  /* 10b0ba7a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10b0ba80 jmp 0x10b0ba8d */
  goto L_10b0ba8d;
L_10b0ba82:;
  /* 10b0ba82 call 0x10b0baa0 */
  push32(0x10b0ba87u); f_10b0baa0();
  /* 10b0ba87 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10b0ba8d:;
  /* 10b0ba8d mov esp, ebp */
  ESP = (EBP);
  /* 10b0ba8f pop ebp */
  EBP = (pop32());
  /* 10b0ba90 ret  */
  ESPCHK(0x10b0ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa0 @ 0x10b0baa0 (13 bytes, 6 insns) */
void f_10b0baa0(void) {
  FTRACE(0x10b0baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0baa1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0baa3 call 0x10b03610 */
  push32(0x10b0baa8u); f_10b03610();
  /* 10b0baa8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0baab pop ebp */
  EBP = (pop32());
  /* 10b0baac ret  */
  ESPCHK(0x10b0baa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bab0 @ 0x10b0bab0 (13 bytes, 6 insns) */
void f_10b0bab0(void) {
  FTRACE(0x10b0bab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0bab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0bab1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0bab3 call 0x10b03610 */
  push32(0x10b0bab8u); f_10b03610();
  /* 10b0bab8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0babb pop ebp */
  EBP = (pop32());
  /* 10b0babc ret  */
  ESPCHK(0x10b0bab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac0 @ 0x10b0bac0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_10b0bac0(void) {
  FTRACE(0x10b0bac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0bac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0bac1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0bac3 push edi */
  push32((uint32_t)(EDI));
  /* 10b0bac4 push esi */
  push32((uint32_t)(ESI));
  /* 10b0bac5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0bac8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0bacb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bace mov eax, ecx */
  EAX = (ECX);
  /* 10b0bad0 mov edx, ecx */
  EDX = (ECX);
  /* 10b0bad2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bad4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bad6 jbe 0x10b0bae0 */
  if ((C.cf||C.zf)) goto L_10b0bae0;
  /* 10b0bad8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bada jb 0x10b0bc58 */
  if (C.cf) goto L_10b0bc58;
L_10b0bae0:;
  /* 10b0bae0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b0bae6 jne 0x10b0bafc */
  if (!C.zf) goto L_10b0bafc;
  /* 10b0bae8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0baeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0baee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0baf1 jb 0x10b0bb1c */
  if (C.cf) goto L_10b0bb1c;
  /* 10b0baf3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0baf5 jmp dword ptr [edx*4 + 0x10b0bc08] */
  switch (EDX) {
    case 0: goto L_10b0bc18;
    case 1: goto L_10b0bc20;
    case 2: goto L_10b0bc2c;
    case 3: goto L_10b0bc40;
    default: x86_unimpl("switch@0x10b0baf5 out of table"); return;
  }
L_10b0bafc:;
  /* 10b0bafc mov eax, edi */
  EAX = (EDI);
  /* 10b0bafe mov edx, 3 */
  EDX = (0x3u);
  /* 10b0bb03 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0bb06 jb 0x10b0bb14 */
  if (C.cf) goto L_10b0bb14;
  /* 10b0bb08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0bb0b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bb0d jmp dword ptr [eax*4 + 0x10b0bb20] */
  switch (EAX) {
    case 1: goto L_10b0bb30;
    case 2: goto L_10b0bb5c;
    case 3: goto L_10b0bb80;
    default: x86_unimpl("switch@0x10b0bb0d out of table"); return;
  }
L_10b0bb14:;
  /* 10b0bb14 jmp dword ptr [ecx*4 + 0x10b0bc18] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10b0bc18)))); return;
  /* 10b0bb1b nop  */
  /* nop */
L_10b0bb1c:;
  /* 10b0bb1c jmp dword ptr [ecx*4 + 0x10b0bb9c] */
  switch (ECX) {
    case 0: goto L_10b0bbff;
    case 1: goto L_10b0bbec;
    case 2: goto L_10b0bbe4;
    case 3: goto L_10b0bbdc;
    case 4: goto L_10b0bbd4;
    case 5: goto L_10b0bbcc;
    case 6: goto L_10b0bbc4;
    case 7: goto L_10b0bbbc;
    default: x86_unimpl("switch@0x10b0bb1c out of table"); return;
  }
  /* 10b0bb23 nop  */
  /* nop */
L_10b0bb30:;
  /* 10b0bb30 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0bb32 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0bb34 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0bb36 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0bb39 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0bb3c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0bb3f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0bb42 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0bb45 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bb48 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bb4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bb4e jb 0x10b0bb1c */
  if (C.cf) goto L_10b0bb1c;
  /* 10b0bb50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0bb52 jmp dword ptr [edx*4 + 0x10b0bc08] */
  switch (EDX) {
    case 0: goto L_10b0bc18;
    case 1: goto L_10b0bc20;
    case 2: goto L_10b0bc2c;
    case 3: goto L_10b0bc40;
    default: x86_unimpl("switch@0x10b0bb52 out of table"); return;
  }
  /* 10b0bb59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0bb5c:;
  /* 10b0bb5c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0bb5e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0bb60 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0bb62 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0bb65 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0bb68 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0bb6b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bb6e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bb71 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bb74 jb 0x10b0bb1c */
  if (C.cf) goto L_10b0bb1c;
  /* 10b0bb76 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0bb78 jmp dword ptr [edx*4 + 0x10b0bc08] */
  switch (EDX) {
    case 0: goto L_10b0bc18;
    case 1: goto L_10b0bc20;
    case 2: goto L_10b0bc2c;
    case 3: goto L_10b0bc40;
    default: x86_unimpl("switch@0x10b0bb78 out of table"); return;
  }
  /* 10b0bb7f nop  */
  /* nop */
L_10b0bb80:;
  /* 10b0bb80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0bb82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0bb84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0bb86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b0bb87 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0bb8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b0bb8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bb8e jb 0x10b0bb1c */
  if (C.cf) goto L_10b0bb1c;
  /* 10b0bb90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0bb92 jmp dword ptr [edx*4 + 0x10b0bc08] */
  switch (EDX) {
    case 0: goto L_10b0bc18;
    case 1: goto L_10b0bc20;
    case 2: goto L_10b0bc2c;
    case 3: goto L_10b0bc40;
    default: x86_unimpl("switch@0x10b0bb92 out of table"); return;
  }
  /* 10b0bb99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0bbbc:;
  /* 10b0bbbc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10b0bbc0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10b0bbc4:;
  /* 10b0bbc4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10b0bbc8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10b0bbcc:;
  /* 10b0bbcc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10b0bbd0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10b0bbd4:;
  /* 10b0bbd4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10b0bbd8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10b0bbdc:;
  /* 10b0bbdc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10b0bbe0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10b0bbe4:;
  /* 10b0bbe4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10b0bbe8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10b0bbec:;
  /* 10b0bbec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10b0bbf0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10b0bbf4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b0bbfb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bbfd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b0bbff:;
  /* 10b0bbff jmp dword ptr [edx*4 + 0x10b0bc08] */
  switch (EDX) {
    case 0: goto L_10b0bc18;
    case 1: goto L_10b0bc20;
    case 2: goto L_10b0bc2c;
    case 3: goto L_10b0bc40;
    default: x86_unimpl("switch@0x10b0bbff out of table"); return;
  }
  /* 10b0bc06 mov edi, edi */
  EDI = (EDI);
L_10b0bc18:;
  /* 10b0bc18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bc1b pop esi */
  ESI = (pop32());
  /* 10b0bc1c pop edi */
  EDI = (pop32());
  /* 10b0bc1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0bc1e ret  */
  ESPCHK(0x10b0bac0u, _esp0);
  ESP += 4; return;
  /* 10b0bc1f nop  */
  /* nop */
L_10b0bc20:;
  /* 10b0bc20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0bc22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0bc24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bc27 pop esi */
  ESI = (pop32());
  /* 10b0bc28 pop edi */
  EDI = (pop32());
  /* 10b0bc29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0bc2a ret  */
  ESPCHK(0x10b0bac0u, _esp0);
  ESP += 4; return;
  /* 10b0bc2b nop  */
  /* nop */
L_10b0bc2c:;
  /* 10b0bc2c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0bc2e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0bc30 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0bc33 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0bc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bc39 pop esi */
  ESI = (pop32());
  /* 10b0bc3a pop edi */
  EDI = (pop32());
  /* 10b0bc3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0bc3c ret  */
  ESPCHK(0x10b0bac0u, _esp0);
  ESP += 4; return;
  /* 10b0bc3d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0bc40:;
  /* 10b0bc40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0bc42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b0bc44 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0bc47 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0bc4a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0bc4d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0bc50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bc53 pop esi */
  ESI = (pop32());
  /* 10b0bc54 pop edi */
  EDI = (pop32());
  /* 10b0bc55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0bc56 ret  */
  ESPCHK(0x10b0bac0u, _esp0);
  ESP += 4; return;
  /* 10b0bc57 nop  */
  /* nop */
L_10b0bc58:;
  /* 10b0bc58 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10b0bc5c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10b0bc60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b0bc66 jne 0x10b0bc8c */
  if (!C.zf) goto L_10b0bc8c;
  /* 10b0bc68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0bc6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0bc6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bc71 jb 0x10b0bc80 */
  if (C.cf) goto L_10b0bc80;
  /* 10b0bc73 std  */
  C.df=1;
  /* 10b0bc74 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0bc76 cld  */
  C.df=0;
  /* 10b0bc77 jmp dword ptr [edx*4 + 0x10b0bda0] */
  switch (EDX) {
    case 0: goto L_10b0bdb0;
    case 1: goto L_10b0bdb8;
    case 2: goto L_10b0bdc8;
    case 3: goto L_10b0bddc;
    default: x86_unimpl("switch@0x10b0bc77 out of table"); return;
  }
  /* 10b0bc7e mov edi, edi */
  EDI = (EDI);
L_10b0bc80:;
  /* 10b0bc80 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0bc82 jmp dword ptr [ecx*4 + 0x10b0bd50] */
  switch (ECX) {
    case 0: goto L_10b0bd97;
    default: x86_unimpl("switch@0x10b0bc82 out of table"); return;
  }
  /* 10b0bc89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0bc8c:;
  /* 10b0bc8c mov eax, edi */
  EAX = (EDI);
  /* 10b0bc8e mov edx, 3 */
  EDX = (0x3u);
  /* 10b0bc93 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bc96 jb 0x10b0bca4 */
  if (C.cf) goto L_10b0bca4;
  /* 10b0bc98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0bc9b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0bc9d jmp dword ptr [eax*4 + 0x10b0bca8] */
  switch (EAX) {
    case 1: goto L_10b0bcb8;
    case 2: goto L_10b0bcd8;
    case 3: goto L_10b0bd00;
    default: x86_unimpl("switch@0x10b0bc9d out of table"); return;
  }
L_10b0bca4:;
  /* 10b0bca4 jmp dword ptr [ecx*4 + 0x10b0bda0] */
  switch (ECX) {
    case 0: goto L_10b0bdb0;
    case 1: goto L_10b0bdb8;
    case 2: goto L_10b0bdc8;
    case 3: goto L_10b0bddc;
    default: x86_unimpl("switch@0x10b0bca4 out of table"); return;
  }
  /* 10b0bcab nop  */
  /* nop */
L_10b0bcb8:;
  /* 10b0bcb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0bcbb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0bcbd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0bcc0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b0bcc1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0bcc4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b0bcc5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bcc8 jb 0x10b0bc80 */
  if (C.cf) goto L_10b0bc80;
  /* 10b0bcca std  */
  C.df=1;
  /* 10b0bccb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0bccd cld  */
  C.df=0;
  /* 10b0bcce jmp dword ptr [edx*4 + 0x10b0bda0] */
  switch (EDX) {
    case 0: goto L_10b0bdb0;
    case 1: goto L_10b0bdb8;
    case 2: goto L_10b0bdc8;
    case 3: goto L_10b0bddc;
    default: x86_unimpl("switch@0x10b0bcce out of table"); return;
  }
  /* 10b0bcd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0bcd8:;
  /* 10b0bcd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0bcdb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0bcdd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0bce0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0bce3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0bce6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0bce9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0bcec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0bcef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bcf2 jb 0x10b0bc80 */
  if (C.cf) goto L_10b0bc80;
  /* 10b0bcf4 std  */
  C.df=1;
  /* 10b0bcf5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0bcf7 cld  */
  C.df=0;
  /* 10b0bcf8 jmp dword ptr [edx*4 + 0x10b0bda0] */
  switch (EDX) {
    case 0: goto L_10b0bdb0;
    case 1: goto L_10b0bdb8;
    case 2: goto L_10b0bdc8;
    case 3: goto L_10b0bddc;
    default: x86_unimpl("switch@0x10b0bcf8 out of table"); return;
  }
  /* 10b0bcff nop  */
  /* nop */
L_10b0bd00:;
  /* 10b0bd00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
L_10b0bd03:;
  /* 10b0bd03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0bd05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0bd08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0bd0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0bd0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0bd11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b0bd14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0bd17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0bd1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0bd1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bd20 jb 0x10b0bc80 */
  if (C.cf) goto L_10b0bc80;
  /* 10b0bd26 std  */
  C.df=1;
  /* 10b0bd27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b0bd29 cld  */
  C.df=0;
  /* 10b0bd2a jmp dword ptr [edx*4 + 0x10b0bda0] */
  switch (EDX) {
    case 0: goto L_10b0bdb0;
    case 1: goto L_10b0bdb8;
    case 2: goto L_10b0bdc8;
    case 3: goto L_10b0bddc;
    default: x86_unimpl("switch@0x10b0bd2a out of table"); return;
  }
  /* 10b0bd31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10b0bd34 push esp */
  push32((uint32_t)(ESP));
  /* 10b0bd35 mov ebp, 0xbd5c10b0 */
  EBP = (0xbd5c10b0u);
  /* 10b0bd3a mov al, 0x10 */
  AL = (0x10u);
  /* 10b0bd3c mov ebp, 0xbd6c10b0 */
  EBP = (0xbd6c10b0u);
  /* 10b0bd42 mov al, 0x10 */
  AL = (0x10u);
  /* 10b0bd44 je 0x10b0bd03 */
  if (C.zf) goto L_10b0bd03;
  /* 10b0bd46 mov al, 0x10 */
  AL = (0x10u);
  /* 10b0bd48 jl 0x10b0bd07 */
  if ((C.sf!=C.of)) goto L_10b0bd07;
  /* 10b0bd4a mov al, 0x10 */
  AL = (0x10u);
  /* 10b0bd4e mov al, 0x10 */
  AL = (0x10u);
  /* 10b0bd54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10b0bd58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10b0bd5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10b0bd60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10b0bd64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10b0bd68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10b0bd6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10b0bd70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10b0bd74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10b0bd78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10b0bd7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10b0bd80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10b0bd84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10b0bd88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10b0bd8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b0bd93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bd95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b0bd97:;
  /* 10b0bd97 jmp dword ptr [edx*4 + 0x10b0bda0] */
  switch (EDX) {
    case 0: goto L_10b0bdb0;
    case 1: goto L_10b0bdb8;
    case 2: goto L_10b0bdc8;
    case 3: goto L_10b0bddc;
    default: x86_unimpl("switch@0x10b0bd97 out of table"); return;
  }
  /* 10b0bd9e mov edi, edi */
  EDI = (EDI);
L_10b0bdb0:;
  /* 10b0bdb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bdb3 pop esi */
  ESI = (pop32());
  /* 10b0bdb4 pop edi */
  EDI = (pop32());
  /* 10b0bdb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0bdb6 ret  */
  ESPCHK(0x10b0bac0u, _esp0);
  ESP += 4; return;
  /* 10b0bdb7 nop  */
  /* nop */
L_10b0bdb8:;
  /* 10b0bdb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0bdbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0bdbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bdc1 pop esi */
  ESI = (pop32());
  /* 10b0bdc2 pop edi */
  EDI = (pop32());
  /* 10b0bdc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0bdc4 ret  */
  ESPCHK(0x10b0bac0u, _esp0);
  ESP += 4; return;
  /* 10b0bdc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0bdc8:;
  /* 10b0bdc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0bdcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0bdce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0bdd1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0bdd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bdd7 pop esi */
  ESI = (pop32());
  /* 10b0bdd8 pop edi */
  EDI = (pop32());
  /* 10b0bdd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0bdda ret  */
  ESPCHK(0x10b0bac0u, _esp0);
  ESP += 4; return;
  /* 10b0bddb nop  */
  /* nop */
L_10b0bddc:;
  /* 10b0bddc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b0bddf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b0bde2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b0bde5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b0bde8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b0bdeb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b0bdee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bdf1 pop esi */
  ESI = (pop32());
  /* 10b0bdf2 pop edi */
  EDI = (pop32());
  /* 10b0bdf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0bdf4 ret  */
  ESPCHK(0x10b0bac0u, _esp0);
  ESP += 4; return;
L_10b0bd07: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10b0bd07 (unresolved jump table)"); return;
}

/* FUN_1000be00 @ 0x10b0be00 (421 bytes, 148 insns) */
void f_10b0be00(void) {
  FTRACE(0x10b0be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0be00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0be01 mov ebp, esp */
  EBP = (ESP);
  /* 10b0be03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b0be05 push 0x10b2b178 */
  push32((uint32_t)(0x10b2b178u));
  /* 10b0be0a push 0x10b0ccd8 */
  push32((uint32_t)(0x10b0ccd8u));
  /* 10b0be0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b0be15 push eax */
  push32((uint32_t)(EAX));
  /* 10b0be16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b0be1d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0be20 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0be21 push esi */
  push32((uint32_t)(ESI));
  /* 10b0be22 push edi */
  push32((uint32_t)(EDI));
  /* 10b0be23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b0be26 cmp dword ptr [0x10b2f704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0be2d jne 0x10b0be7e */
  if (!C.zf) goto L_10b0be7e;
  /* 10b0be2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10b0be32 push eax */
  push32((uint32_t)(EAX));
  /* 10b0be33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0be35 push 0x10b2b174 */
  push32((uint32_t)(0x10b2b174u));
  /* 10b0be3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0be3c call dword ptr [0x10b322e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e4))), 0x10b0be42u);
  /* 10b0be42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0be44 je 0x10b0be52 */
  if (C.zf) goto L_10b0be52;
  /* 10b0be46 mov dword ptr [0x10b2f704], 1 */
  w32((uint32_t)(0x10b2f704), (0x1u));
  /* 10b0be50 jmp 0x10b0be7e */
  goto L_10b0be7e;
L_10b0be52:;
  /* 10b0be52 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10b0be55 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0be56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0be58 push 0x10b2b170 */
  push32((uint32_t)(0x10b2b170u));
  /* 10b0be5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0be5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0be61 call dword ptr [0x10b322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f4))), 0x10b0be67u);
  /* 10b0be67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0be69 je 0x10b0be77 */
  if (C.zf) goto L_10b0be77;
  /* 10b0be6b mov dword ptr [0x10b2f704], 2 */
  w32((uint32_t)(0x10b2f704), (0x2u));
  /* 10b0be75 jmp 0x10b0be7e */
  goto L_10b0be7e;
L_10b0be77:;
  /* 10b0be77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0be79 jmp 0x10b0bfa8 */
  goto L_10b0bfa8;
L_10b0be7e:;
  /* 10b0be7e cmp dword ptr [0x10b2f704], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f704))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0be85 jne 0x10b0beb5 */
  if (!C.zf) goto L_10b0beb5;
  /* 10b0be87 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0be8b jne 0x10b0be96 */
  if (!C.zf) goto L_10b0be96;
  /* 10b0be8d mov edx, dword ptr [0x10b2f710] */
  EDX = (r32((uint32_t)(0x10b2f710)));
  /* 10b0be93 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10b0be96:;
  /* 10b0be96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0be99 push eax */
  push32((uint32_t)(EAX));
  /* 10b0be9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0be9d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0be9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0bea1 push edx */
  push32((uint32_t)(EDX));
  /* 10b0bea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bea5 push eax */
  push32((uint32_t)(EAX));
  /* 10b0bea6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b0bea9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0beaa call dword ptr [0x10b322f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f4))), 0x10b0beb0u);
  /* 10b0beb0 jmp 0x10b0bfa8 */
  goto L_10b0bfa8;
L_10b0beb5:;
  /* 10b0beb5 cmp dword ptr [0x10b2f704], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f704))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bebc jne 0x10b0bfa6 */
  if (!C.zf) goto L_10b0bfa6;
  /* 10b0bec2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bec6 jne 0x10b0bed1 */
  if (!C.zf) goto L_10b0bed1;
  /* 10b0bec8 mov edx, dword ptr [0x10b2f720] */
  EDX = (r32((uint32_t)(0x10b2f720)));
  /* 10b0bece mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10b0bed1:;
  /* 10b0bed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0bed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0bed5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0bed8 push eax */
  push32((uint32_t)(EAX));
  /* 10b0bed9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0bedc push ecx */
  push32((uint32_t)(ECX));
  /* 10b0bedd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b0bee0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0bee2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0bee4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0bee7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0beea push edx */
  push32((uint32_t)(EDX));
  /* 10b0beeb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0beee push eax */
  push32((uint32_t)(EAX));
  /* 10b0beef call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b0bef5u);
  /* 10b0bef5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b0bef8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0befc jne 0x10b0bf05 */
  if (!C.zf) goto L_10b0bf05;
  /* 10b0befe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0bf00 jmp 0x10b0bfa8 */
  goto L_10b0bfa8;
L_10b0bf05:;
  /* 10b0bf05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0bf0c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0bf0f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b0bf11 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bf14 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b0bf16 call 0x10b06d70 */
  push32(0x10b0bf1bu); f_10b06d70();
  /* 10b0bf1b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10b0bf1e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b0bf21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0bf24 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b0bf27 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0bf2a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10b0bf2c push edx */
  push32((uint32_t)(EDX));
  /* 10b0bf2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0bf2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0bf32 push eax */
  push32((uint32_t)(EAX));
  /* 10b0bf33 call 0x10b07940 */
  push32(0x10b0bf38u); f_10b07940();
  /* 10b0bf38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bf3b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b0bf42 jmp 0x10b0bf5b */
  goto L_10b0bf5b;
  /* 10b0bf44 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0bf49 ret  */
  ESPCHK(0x10b0be00u, _esp0);
  ESP += 4; return;
  /* 10b0bf4a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0bf4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b0bf54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b0bf5b:;
  /* 10b0bf5b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bf5f jne 0x10b0bf65 */
  if (!C.zf) goto L_10b0bf65;
  /* 10b0bf61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0bf63 jmp 0x10b0bfa8 */
  goto L_10b0bfa8;
L_10b0bf65:;
  /* 10b0bf65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0bf68 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0bf69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0bf6c push edx */
  push32((uint32_t)(EDX));
  /* 10b0bf6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0bf70 push eax */
  push32((uint32_t)(EAX));
  /* 10b0bf71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0bf74 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0bf75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0bf77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0bf7a push edx */
  push32((uint32_t)(EDX));
  /* 10b0bf7b call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b0bf81u);
  /* 10b0bf81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b0bf84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bf88 jne 0x10b0bf8e */
  if (!C.zf) goto L_10b0bf8e;
  /* 10b0bf8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0bf8c jmp 0x10b0bfa8 */
  goto L_10b0bfa8;
L_10b0bf8e:;
  /* 10b0bf8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0bf91 push eax */
  push32((uint32_t)(EAX));
  /* 10b0bf92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0bf95 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0bf96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0bf99 push edx */
  push32((uint32_t)(EDX));
  /* 10b0bf9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0bf9d push eax */
  push32((uint32_t)(EAX));
  /* 10b0bf9e call dword ptr [0x10b322e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e4))), 0x10b0bfa4u);
  /* 10b0bfa4 jmp 0x10b0bfa8 */
  goto L_10b0bfa8;
L_10b0bfa6:;
  /* 10b0bfa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0bfa8:;
  /* 10b0bfa8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10b0bfab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0bfae mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b0bfb5 pop edi */
  EDI = (pop32());
  /* 10b0bfb6 pop esi */
  ESI = (pop32());
  /* 10b0bfb7 pop ebx */
  EBX = (pop32());
  /* 10b0bfb8 mov esp, ebp */
  ESP = (EBP);
  /* 10b0bfba pop ebp */
  EBP = (pop32());
  /* 10b0bfbb ret  */
  ESPCHK(0x10b0be00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc0 @ 0x10b0bfc0 (727 bytes, 263 insns) */
void f_10b0bfc0(void) {
  FTRACE(0x10b0bfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0bfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0bfc1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0bfc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b0bfc5 push 0x10b2b188 */
  push32((uint32_t)(0x10b2b188u));
  /* 10b0bfca push 0x10b0ccd8 */
  push32((uint32_t)(0x10b0ccd8u));
  /* 10b0bfcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b0bfd5 push eax */
  push32((uint32_t)(EAX));
  /* 10b0bfd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b0bfdd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0bfe0 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0bfe1 push esi */
  push32((uint32_t)(ESI));
  /* 10b0bfe2 push edi */
  push32((uint32_t)(EDI));
  /* 10b0bfe3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b0bfe6 cmp dword ptr [0x10b2f728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0bfed jne 0x10b0c046 */
  if (!C.zf) goto L_10b0c046;
  /* 10b0bfef push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0bff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0bff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0bff5 push 0x10b2b174 */
  push32((uint32_t)(0x10b2b174u));
  /* 10b0bffa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0bfff push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c001 call dword ptr [0x10b322e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e8))), 0x10b0c007u);
  /* 10b0c007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c009 je 0x10b0c017 */
  if (C.zf) goto L_10b0c017;
  /* 10b0c00b mov dword ptr [0x10b2f728], 1 */
  w32((uint32_t)(0x10b2f728), (0x1u));
  /* 10b0c015 jmp 0x10b0c046 */
  goto L_10b0c046;
L_10b0c017:;
  /* 10b0c017 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c019 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c01b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0c01d push 0x10b2b170 */
  push32((uint32_t)(0x10b2b170u));
  /* 10b0c022 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0c027 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c029 call dword ptr [0x10b322e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e0))), 0x10b0c02fu);
  /* 10b0c02f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c031 je 0x10b0c03f */
  if (C.zf) goto L_10b0c03f;
  /* 10b0c033 mov dword ptr [0x10b2f728], 2 */
  w32((uint32_t)(0x10b2f728), (0x2u));
  /* 10b0c03d jmp 0x10b0c046 */
  goto L_10b0c046;
L_10b0c03f:;
  /* 10b0c03f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c041 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c046:;
  /* 10b0c046 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c04a jle 0x10b0c05f */
  if ((C.zf||C.sf!=C.of)) goto L_10b0c05f;
  /* 10b0c04c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0c04f push eax */
  push32((uint32_t)(EAX));
  /* 10b0c050 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0c053 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c054 call 0x10b0c2d0 */
  push32(0x10b0c059u); f_10b0c2d0();
  /* 10b0c059 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c05c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10b0c05f:;
  /* 10b0c05f cmp dword ptr [0x10b2f728], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f728))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c066 jne 0x10b0c08b */
  if (!C.zf) goto L_10b0c08b;
  /* 10b0c068 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b0c06b push edx */
  push32((uint32_t)(EDX));
  /* 10b0c06c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0c06f push eax */
  push32((uint32_t)(EAX));
  /* 10b0c070 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0c073 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c074 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0c077 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c07b push eax */
  push32((uint32_t)(EAX));
  /* 10b0c07c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c07f push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c080 call dword ptr [0x10b322e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e0))), 0x10b0c086u);
  /* 10b0c086 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c08b:;
  /* 10b0c08b cmp dword ptr [0x10b2f728], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f728))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c092 jne 0x10b0c2af */
  if (!C.zf) goto L_10b0c2af;
  /* 10b0c098 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c09c jne 0x10b0c0a7 */
  if (!C.zf) goto L_10b0c0a7;
  /* 10b0c09e mov edx, dword ptr [0x10b2f720] */
  EDX = (r32((uint32_t)(0x10b2f720)));
  /* 10b0c0a4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10b0c0a7:;
  /* 10b0c0a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c0a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c0ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0c0ae push eax */
  push32((uint32_t)(EAX));
  /* 10b0c0af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0c0b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c0b3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10b0c0b6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0c0b8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c0ba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c0bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c0c0 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c0c1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b0c0c4 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c0c5 call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b0c0cbu);
  /* 10b0c0cb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b0c0ce cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c0d2 jne 0x10b0c0db */
  if (!C.zf) goto L_10b0c0db;
  /* 10b0c0d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c0d6 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c0db:;
  /* 10b0c0db mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0c0e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0c0e5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b0c0e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c0ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b0c0ec call 0x10b06d70 */
  push32(0x10b0c0f1u); f_10b06d70();
  /* 10b0c0f1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10b0c0f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b0c0f7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0c0fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b0c0fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b0c104 jmp 0x10b0c11d */
  goto L_10b0c11d;
  /* 10b0c106 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0c10b ret  */
  ESPCHK(0x10b0bfc0u, _esp0);
  ESP += 4; return;
  /* 10b0c10c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0c10f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10b0c116 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b0c11d:;
  /* 10b0c11d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c121 jne 0x10b0c12a */
  if (!C.zf) goto L_10b0c12a;
  /* 10b0c123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c125 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c12a:;
  /* 10b0c12a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0c12d push edx */
  push32((uint32_t)(EDX));
  /* 10b0c12e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0c131 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c132 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0c135 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c136 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0c139 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c13a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0c13c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b0c13f push eax */
  push32((uint32_t)(EAX));
  /* 10b0c140 call dword ptr [0x10b322ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322ec))), 0x10b0c146u);
  /* 10b0c146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c148 jne 0x10b0c151 */
  if (!C.zf) goto L_10b0c151;
  /* 10b0c14a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c14c jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c151:;
  /* 10b0c151 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c153 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c155 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0c158 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c159 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0c15c push edx */
  push32((uint32_t)(EDX));
  /* 10b0c15d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c160 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c161 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c164 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c165 call dword ptr [0x10b322e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e8))), 0x10b0c16bu);
  /* 10b0c16b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b0c16e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c172 jne 0x10b0c17b */
  if (!C.zf) goto L_10b0c17b;
  /* 10b0c174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c176 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c17b:;
  /* 10b0c17b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c17e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c184 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0c186 je 0x10b0c1cb */
  if (C.zf) goto L_10b0c1cb;
  /* 10b0c188 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c18c je 0x10b0c1c6 */
  if (C.zf) goto L_10b0c1c6;
  /* 10b0c18e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0c191 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c194 jle 0x10b0c19d */
  if ((C.zf||C.sf!=C.of)) goto L_10b0c19d;
  /* 10b0c196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c198 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c19d:;
  /* 10b0c19d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b0c1a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c1a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0c1a4 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c1a5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0c1a8 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c1a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0c1ac push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c1ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c1b0 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c1b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c1b4 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c1b5 call dword ptr [0x10b322e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e8))), 0x10b0c1bbu);
  /* 10b0c1bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c1bd jne 0x10b0c1c6 */
  if (!C.zf) goto L_10b0c1c6;
  /* 10b0c1bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c1c1 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c1c6:;
  /* 10b0c1c6 jmp 0x10b0c2aa */
  goto L_10b0c2aa;
L_10b0c1cb:;
  /* 10b0c1cb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0c1ce mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10b0c1d1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b0c1d8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0c1db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b0c1dd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c1e0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b0c1e2 call 0x10b06d70 */
  push32(0x10b0c1e7u); f_10b06d70();
  /* 10b0c1e7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10b0c1ea mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b0c1ed mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10b0c1f0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10b0c1f3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b0c1fa jmp 0x10b0c213 */
  goto L_10b0c213;
  /* 10b0c1fc mov eax, 1 */
  EAX = (0x1u);
  /* 10b0c201 ret  */
  ESPCHK(0x10b0bfc0u, _esp0);
  ESP += 4; return;
  /* 10b0c202 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0c205 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b0c20c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b0c213:;
  /* 10b0c213 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c217 jne 0x10b0c220 */
  if (!C.zf) goto L_10b0c220;
  /* 10b0c219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c21b jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c220:;
  /* 10b0c220 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0c223 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c224 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0c227 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c228 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0c22b push edx */
  push32((uint32_t)(EDX));
  /* 10b0c22c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0c22f push eax */
  push32((uint32_t)(EAX));
  /* 10b0c230 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c233 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c234 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c237 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c238 call dword ptr [0x10b322e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322e8))), 0x10b0c23eu);
  /* 10b0c23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c240 jne 0x10b0c246 */
  if (!C.zf) goto L_10b0c246;
  /* 10b0c242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c244 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c246:;
  /* 10b0c246 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c24a jne 0x10b0c27a */
  if (!C.zf) goto L_10b0c27a;
  /* 10b0c24c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c24e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c250 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c252 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c254 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0c257 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c258 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0c25b push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c25c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b0c261 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b0c264 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c265 call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b0c26bu);
  /* 10b0c26b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b0c26e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c272 jne 0x10b0c278 */
  if (!C.zf) goto L_10b0c278;
  /* 10b0c274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c276 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c278:;
  /* 10b0c278 jmp 0x10b0c2aa */
  goto L_10b0c2aa;
L_10b0c27a:;
  /* 10b0c27a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c27c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c27e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b0c281 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c282 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b0c285 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c286 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0c289 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c28a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0c28d push eax */
  push32((uint32_t)(EAX));
  /* 10b0c28e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b0c293 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b0c296 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c297 call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b0c29du);
  /* 10b0c29d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b0c2a0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c2a4 jne 0x10b0c2aa */
  if (!C.zf) goto L_10b0c2aa;
  /* 10b0c2a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c2a8 jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c2aa:;
  /* 10b0c2aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0c2ad jmp 0x10b0c2b1 */
  goto L_10b0c2b1;
L_10b0c2af:;
  /* 10b0c2af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0c2b1:;
  /* 10b0c2b1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10b0c2b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0c2b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b0c2be pop edi */
  EDI = (pop32());
  /* 10b0c2bf pop esi */
  ESI = (pop32());
  /* 10b0c2c0 pop ebx */
  EBX = (pop32());
  /* 10b0c2c1 mov esp, ebp */
  ESP = (EBP);
  /* 10b0c2c3 pop ebp */
  EBP = (pop32());
  /* 10b0c2c4 ret  */
  ESPCHK(0x10b0bfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2d0 @ 0x10b0c2d0 (80 bytes, 32 insns) */
void f_10b0c2d0(void) {
  FTRACE(0x10b0c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c2d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c2d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c2d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c2d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0c2dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c2df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b0c2e2:;
  /* 10b0c2e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c2e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c2e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c2eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0c2ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0c2f0 je 0x10b0c307 */
  if (C.zf) goto L_10b0c307;
  /* 10b0c2f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c2f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0c2f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0c2fa je 0x10b0c307 */
  if (C.zf) goto L_10b0c307;
  /* 10b0c2fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c2ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c302 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0c305 jmp 0x10b0c2e2 */
  goto L_10b0c2e2;
L_10b0c307:;
  /* 10b0c307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c30a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0c30d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0c30f jne 0x10b0c319 */
  if (!C.zf) goto L_10b0c319;
  /* 10b0c311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c314 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c317 jmp 0x10b0c31c */
  goto L_10b0c31c;
L_10b0c319:;
  /* 10b0c319 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10b0c31c:;
  /* 10b0c31c mov esp, ebp */
  ESP = (EBP);
  /* 10b0c31e pop ebp */
  EBP = (pop32());
  /* 10b0c31f ret  */
  ESPCHK(0x10b0c2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x10b0c320 (130 bytes, 43 insns) */
void f_10b0c320(void) {
  FTRACE(0x10b0c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c320 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c321 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c323 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c327 cmp eax, dword ptr [0x10b3101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b3101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c32d jae 0x10b0c351 */
  if (!C.cf) goto L_10b0c351;
  /* 10b0c32f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c332 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0c335 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c338 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c33b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c33e mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0c345 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b0c34a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0c34d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0c34f jne 0x10b0c36c */
  if (!C.zf) goto L_10b0c36c;
L_10b0c351:;
  /* 10b0c351 call 0x10b0baa0 */
  push32(0x10b0c356u); f_10b0baa0();
  /* 10b0c356 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0c35c call 0x10b0bab0 */
  push32(0x10b0c361u); f_10b0bab0();
  /* 10b0c361 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b0c367 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c36a jmp 0x10b0c39e */
  goto L_10b0c39e;
L_10b0c36c:;
  /* 10b0c36c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c36f push edx */
  push32((uint32_t)(EDX));
  /* 10b0c370 call 0x10b0d2c0 */
  push32(0x10b0c375u); f_10b0d2c0();
  /* 10b0c375 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c378 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0c37b push eax */
  push32((uint32_t)(EAX));
  /* 10b0c37c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c37f push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c383 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c384 call 0x10b0c3b0 */
  push32(0x10b0c389u); f_10b0c3b0();
  /* 10b0c389 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c38c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0c38f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c392 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c393 call 0x10b0d350 */
  push32(0x10b0c398u); f_10b0d350();
  /* 10b0c398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c39b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b0c39e:;
  /* 10b0c39e mov esp, ebp */
  ESP = (EBP);
  /* 10b0c3a0 pop ebp */
  EBP = (pop32());
  /* 10b0c3a1 ret  */
  ESPCHK(0x10b0c320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3b0 @ 0x10b0c3b0 (178 bytes, 56 insns) */
void f_10b0c3b0(void) {
  FTRACE(0x10b0c3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c3b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c3b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c3b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c3b9 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c3ba call 0x10b0d140 */
  push32(0x10b0c3bfu); f_10b0d140();
  /* 10b0c3bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c3c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b0c3c5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c3c9 jne 0x10b0c3de */
  if (!C.zf) goto L_10b0c3de;
  /* 10b0c3cb call 0x10b0baa0 */
  push32(0x10b0c3d0u); f_10b0baa0();
  /* 10b0c3d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0c3d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c3d9 jmp 0x10b0c45e */
  goto L_10b0c45e;
L_10b0c3de:;
  /* 10b0c3de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0c3e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c3e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c3e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c3e7 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c3e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0c3eb push eax */
  push32((uint32_t)(EAX));
  /* 10b0c3ec call dword ptr [0x10b322d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322d8))), 0x10b0c3f2u);
  /* 10b0c3f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0c3f5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c3f9 jne 0x10b0c406 */
  if (!C.zf) goto L_10b0c406;
  /* 10b0c3fb call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b0c401u);
  /* 10b0c401 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0c404 jmp 0x10b0c40d */
  goto L_10b0c40d;
L_10b0c406:;
  /* 10b0c406 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b0c40d:;
  /* 10b0c40d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c411 je 0x10b0c424 */
  if (C.zf) goto L_10b0c424;
  /* 10b0c413 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c416 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c417 call 0x10b0ba00 */
  push32(0x10b0c41cu); f_10b0ba00();
  /* 10b0c41c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c41f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c422 jmp 0x10b0c45e */
  goto L_10b0c45e;
L_10b0c424:;
  /* 10b0c424 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c427 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b0c42a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c42d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c430 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c433 mov ecx, dword ptr [edx*4 + 0x10b30ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b0c43a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10b0c43e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10b0c441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c444 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0c447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c44a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0c44d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c450 mov eax, dword ptr [eax*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0c457 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10b0c45b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b0c45e:;
  /* 10b0c45e mov esp, ebp */
  ESP = (EBP);
  /* 10b0c460 pop ebp */
  EBP = (pop32());
  /* 10b0c461 ret  */
  ESPCHK(0x10b0c3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c470 @ 0x10b0c470 (130 bytes, 43 insns) */
void f_10b0c470(void) {
  FTRACE(0x10b0c470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c470 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c471 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c473 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c477 cmp eax, dword ptr [0x10b3101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b3101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c47d jae 0x10b0c4a1 */
  if (!C.cf) goto L_10b0c4a1;
  /* 10b0c47f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c482 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0c485 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c488 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c48b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c48e mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0c495 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b0c49a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0c49d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0c49f jne 0x10b0c4bc */
  if (!C.zf) goto L_10b0c4bc;
L_10b0c4a1:;
  /* 10b0c4a1 call 0x10b0baa0 */
  push32(0x10b0c4a6u); f_10b0baa0();
  /* 10b0c4a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0c4ac call 0x10b0bab0 */
  push32(0x10b0c4b1u); f_10b0bab0();
  /* 10b0c4b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b0c4b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c4ba jmp 0x10b0c4ee */
  goto L_10b0c4ee;
L_10b0c4bc:;
  /* 10b0c4bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c4bf push edx */
  push32((uint32_t)(EDX));
  /* 10b0c4c0 call 0x10b0d2c0 */
  push32(0x10b0c4c5u); f_10b0d2c0();
  /* 10b0c4c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c4c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0c4cb push eax */
  push32((uint32_t)(EAX));
  /* 10b0c4cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c4cf push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c4d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c4d3 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c4d4 call 0x10b0c500 */
  push32(0x10b0c4d9u); f_10b0c500();
  /* 10b0c4d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c4dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0c4df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c4e2 push eax */
  push32((uint32_t)(EAX));
  /* 10b0c4e3 call 0x10b0d350 */
  push32(0x10b0c4e8u); f_10b0d350();
  /* 10b0c4e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c4eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b0c4ee:;
  /* 10b0c4ee mov esp, ebp */
  ESP = (EBP);
  /* 10b0c4f0 pop ebp */
  EBP = (pop32());
  /* 10b0c4f1 ret  */
  ESPCHK(0x10b0c470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c500 @ 0x10b0c500 (627 bytes, 182 insns) */
void f_10b0c500(void) {
  FTRACE(0x10b0c500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c500 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c501 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c503 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c509 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b0c510 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0c513 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10b0c519 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c51d jne 0x10b0c526 */
  if (!C.zf) goto L_10b0c526;
  /* 10b0c51f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c521 jmp 0x10b0c76f */
  goto L_10b0c76f;
L_10b0c526:;
  /* 10b0c526 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c529 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0c52c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c52f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c532 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c535 mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0c53c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b0c541 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0c544 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0c546 je 0x10b0c558 */
  if (C.zf) goto L_10b0c558;
  /* 10b0c548 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0c54a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c54c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c54f push edx */
  push32((uint32_t)(EDX));
  /* 10b0c550 call 0x10b0c3b0 */
  push32(0x10b0c555u); f_10b0c3b0();
  /* 10b0c555 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0c558:;
  /* 10b0c558 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c55b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0c55e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c561 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0c564 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c567 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0c56e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10b0c573 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c57a je 0x10b0c68c */
  if (C.zf) goto L_10b0c68c;
  /* 10b0c580 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c583 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0c586 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10b0c58d:;
  /* 10b0c58d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c590 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c593 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c596 jae 0x10b0c68a */
  if (!C.cf) goto L_10b0c68a;
  /* 10b0c59c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10b0c5a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b0c5a5:;
  /* 10b0c5a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c5a8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10b0c5ae sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c5b0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c5b6 jge 0x10b0c617 */
  if ((C.sf==C.of)) goto L_10b0c617;
  /* 10b0c5b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c5bb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c5be cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c5c1 jae 0x10b0c617 */
  if (!C.cf) goto L_10b0c617;
  /* 10b0c5c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c5c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b0c5c8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10b0c5ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c5d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c5d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0c5d7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10b0c5de cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c5e1 jne 0x10b0c601 */
  if (!C.zf) goto L_10b0c601;
  /* 10b0c5e3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10b0c5e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c5ec mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10b0c5f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c5f5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10b0c5f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c5fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c5fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b0c601:;
  /* 10b0c601 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c604 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10b0c60a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10b0c60c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c60f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c612 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0c615 jmp 0x10b0c5a5 */
  goto L_10b0c5a5;
L_10b0c617:;
  /* 10b0c617 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c619 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10b0c61f push edx */
  push32((uint32_t)(EDX));
  /* 10b0c620 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c623 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10b0c629 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c62b push eax */
  push32((uint32_t)(EAX));
  /* 10b0c62c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10b0c632 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c636 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0c639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c63c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0c63f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c642 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0c649 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10b0c64c push eax */
  push32((uint32_t)(EAX));
  /* 10b0c64d call dword ptr [0x10b32330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32330))), 0x10b0c653u);
  /* 10b0c653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c655 je 0x10b0c67a */
  if (C.zf) goto L_10b0c67a;
  /* 10b0c657 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0c65a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c660 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b0c663 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0c666 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10b0c66c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c66e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c674 jge 0x10b0c678 */
  if ((C.sf==C.of)) goto L_10b0c678;
  /* 10b0c676 jmp 0x10b0c68a */
  goto L_10b0c68a;
L_10b0c678:;
  /* 10b0c678 jmp 0x10b0c685 */
  goto L_10b0c685;
L_10b0c67a:;
  /* 10b0c67a call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b0c680u);
  /* 10b0c680 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b0c683 jmp 0x10b0c68a */
  goto L_10b0c68a;
L_10b0c685:;
  /* 10b0c685 jmp 0x10b0c58d */
  goto L_10b0c58d;
L_10b0c68a:;
  /* 10b0c68a jmp 0x10b0c6dc */
  goto L_10b0c6dc;
L_10b0c68c:;
  /* 10b0c68c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c68e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10b0c694 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c695 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0c698 push edx */
  push32((uint32_t)(EDX));
  /* 10b0c699 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c69c push eax */
  push32((uint32_t)(EAX));
  /* 10b0c69d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c6a0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0c6a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c6a6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c6a9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c6ac mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0c6b3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10b0c6b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c6b7 call dword ptr [0x10b32330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32330))), 0x10b0c6bdu);
  /* 10b0c6bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c6bf je 0x10b0c6d3 */
  if (C.zf) goto L_10b0c6d3;
  /* 10b0c6c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b0c6c8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10b0c6ce mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10b0c6d1 jmp 0x10b0c6dc */
  goto L_10b0c6dc;
L_10b0c6d3:;
  /* 10b0c6d3 call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b0c6d9u);
  /* 10b0c6d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b0c6dc:;
  /* 10b0c6dc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c6e0 jne 0x10b0c766 */
  if (!C.zf) goto L_10b0c766;
  /* 10b0c6e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c6ea je 0x10b0c71a */
  if (C.zf) goto L_10b0c71a;
  /* 10b0c6ec cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c6f0 jne 0x10b0c709 */
  if (!C.zf) goto L_10b0c709;
  /* 10b0c6f2 call 0x10b0baa0 */
  push32(0x10b0c6f7u); f_10b0baa0();
  /* 10b0c6f7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0c6fd call 0x10b0bab0 */
  push32(0x10b0c702u); f_10b0bab0();
  /* 10b0c702 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0c705 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b0c707 jmp 0x10b0c715 */
  goto L_10b0c715;
L_10b0c709:;
  /* 10b0c709 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0c70c push edx */
  push32((uint32_t)(EDX));
  /* 10b0c70d call 0x10b0ba00 */
  push32(0x10b0c712u); f_10b0ba00();
  /* 10b0c712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0c715:;
  /* 10b0c715 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c718 jmp 0x10b0c76f */
  goto L_10b0c76f;
L_10b0c71a:;
  /* 10b0c71a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c71d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0c720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c723 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0c726 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c729 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0c730 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10b0c735 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c73a je 0x10b0c74b */
  if (C.zf) goto L_10b0c74b;
  /* 10b0c73c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0c73f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0c742 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c745 jne 0x10b0c74b */
  if (!C.zf) goto L_10b0c74b;
  /* 10b0c747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c749 jmp 0x10b0c76f */
  goto L_10b0c76f;
L_10b0c74b:;
  /* 10b0c74b call 0x10b0baa0 */
  push32(0x10b0c750u); f_10b0baa0();
  /* 10b0c750 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10b0c756 call 0x10b0bab0 */
  push32(0x10b0c75bu); f_10b0bab0();
  /* 10b0c75b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b0c761 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c764 jmp 0x10b0c76f */
  goto L_10b0c76f;
L_10b0c766:;
  /* 10b0c766 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0c769 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10b0c76f:;
  /* 10b0c76f mov esp, ebp */
  ESP = (EBP);
  /* 10b0c771 pop ebp */
  EBP = (pop32());
  /* 10b0c772 ret  */
  ESPCHK(0x10b0c500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c780 @ 0x10b0c780 (199 bytes, 68 insns) */
void f_10b0c780(void) {
  FTRACE(0x10b0c780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c780 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c781 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c783 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c784 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0c785 push esi */
  push32((uint32_t)(ESI));
  /* 10b0c786 push edi */
  push32((uint32_t)(EDI));
L_10b0c787:;
  /* 10b0c787 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c78b jne 0x10b0c7ab */
  if (!C.zf) goto L_10b0c7ab;
  /* 10b0c78d push 0x10b2b0d4 */
  push32((uint32_t)(0x10b2b0d4u));
  /* 10b0c792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0c794 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10b0c796 push 0x10b2b1a0 */
  push32((uint32_t)(0x10b2b1a0u));
  /* 10b0c79b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0c79d call 0x10b02c90 */
  push32(0x10b0c7a2u); f_10b02c90();
  /* 10b0c7a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c7a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c7a8 jne 0x10b0c7ab */
  if (!C.zf) goto L_10b0c7ab;
  /* 10b0c7aa int3  */
  x86_unimpl("int3 @ 0x10b0c7aa");
L_10b0c7ab:;
  /* 10b0c7ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c7ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c7af jne 0x10b0c787 */
  if (!C.zf) goto L_10b0c787;
  /* 10b0c7b1 mov ecx, dword ptr [0x10b2f72c] */
  ECX = (r32((uint32_t)(0x10b2f72c)));
  /* 10b0c7b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c7ba mov dword ptr [0x10b2f72c], ecx */
  w32((uint32_t)(0x10b2f72c), (ECX));
  /* 10b0c7c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c7c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0c7c6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10b0c7c8 push 0x10b2b1a0 */
  push32((uint32_t)(0x10b2b1a0u));
  /* 10b0c7cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0c7cf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b0c7d4 call 0x10b03bd0 */
  push32(0x10b0c7d9u); f_10b03bd0();
  /* 10b0c7d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c7dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c7df mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10b0c7e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c7e5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c7e9 je 0x10b0c806 */
  if (C.zf) goto L_10b0c806;
  /* 10b0c7eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c7ee mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0c7f1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0c7f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c7f7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10b0c7fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c7fd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10b0c804 jmp 0x10b0c82b */
  goto L_10b0c82b;
L_10b0c806:;
  /* 10b0c806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c809 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0c80c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c80f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c812 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b0c815 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c818 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c81b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c81e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b0c821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c824 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10b0c82b:;
  /* 10b0c82b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c82e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c831 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b0c834 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b0c836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c839 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10b0c840 pop edi */
  EDI = (pop32());
  /* 10b0c841 pop esi */
  ESI = (pop32());
  /* 10b0c842 pop ebx */
  EBX = (pop32());
  /* 10b0c843 mov esp, ebp */
  ESP = (EBP);
  /* 10b0c845 pop ebp */
  EBP = (pop32());
  /* 10b0c846 ret  */
  ESPCHK(0x10b0c780u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10b0c850 (50 bytes, 17 insns) */
void f_10b0c850(void) {
  FTRACE(0x10b0c850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c850 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c851 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c856 cmp eax, dword ptr [0x10b3101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b3101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c85c jb 0x10b0c862 */
  if (C.cf) goto L_10b0c862;
  /* 10b0c85e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0c860 jmp 0x10b0c880 */
  goto L_10b0c880;
L_10b0c862:;
  /* 10b0c862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c865 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0c868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c86b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c86e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c871 mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0c878 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b0c87d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10b0c880:;
  /* 10b0c880 pop ebp */
  EBP = (pop32());
  /* 10b0c881 ret  */
  ESPCHK(0x10b0c850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c890 @ 0x10b0c890 (300 bytes, 80 insns) */
void f_10b0c890(void) {
  FTRACE(0x10b0c890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c890 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c891 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c893 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c894 cmp dword ptr [0x10b30be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b30be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c89b jne 0x10b0c8a9 */
  if (!C.zf) goto L_10b0c8a9;
  /* 10b0c89d mov dword ptr [0x10b30be0], 0x200 */
  w32((uint32_t)(0x10b30be0), (0x200u));
  /* 10b0c8a7 jmp 0x10b0c8bc */
  goto L_10b0c8bc;
L_10b0c8a9:;
  /* 10b0c8a9 cmp dword ptr [0x10b30be0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10b30be0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c8b0 jge 0x10b0c8bc */
  if ((C.sf==C.of)) goto L_10b0c8bc;
  /* 10b0c8b2 mov dword ptr [0x10b30be0], 0x14 */
  w32((uint32_t)(0x10b30be0), (0x14u));
L_10b0c8bc:;
  /* 10b0c8bc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10b0c8c1 push 0x10b2b1ac */
  push32((uint32_t)(0x10b2b1acu));
  /* 10b0c8c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0c8c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b0c8ca mov eax, dword ptr [0x10b30be0] */
  EAX = (r32((uint32_t)(0x10b30be0)));
  /* 10b0c8cf push eax */
  push32((uint32_t)(EAX));
  /* 10b0c8d0 call 0x10b03fe0 */
  push32(0x10b0c8d5u); f_10b03fe0();
  /* 10b0c8d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c8d8 mov dword ptr [0x10b2f8a0], eax */
  w32((uint32_t)(0x10b2f8a0), (EAX));
  /* 10b0c8dd cmp dword ptr [0x10b2f8a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f8a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c8e4 jne 0x10b0c925 */
  if (!C.zf) goto L_10b0c925;
  /* 10b0c8e6 mov dword ptr [0x10b30be0], 0x14 */
  w32((uint32_t)(0x10b30be0), (0x14u));
  /* 10b0c8f0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10b0c8f5 push 0x10b2b1ac */
  push32((uint32_t)(0x10b2b1acu));
  /* 10b0c8fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0c8fc push 4 */
  push32((uint32_t)(0x4u));
  /* 10b0c8fe mov ecx, dword ptr [0x10b30be0] */
  ECX = (r32((uint32_t)(0x10b30be0)));
  /* 10b0c904 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0c905 call 0x10b03fe0 */
  push32(0x10b0c90au); f_10b03fe0();
  /* 10b0c90a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c90d mov dword ptr [0x10b2f8a0], eax */
  w32((uint32_t)(0x10b2f8a0), (EAX));
  /* 10b0c912 cmp dword ptr [0x10b2f8a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f8a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c919 jne 0x10b0c925 */
  if (!C.zf) goto L_10b0c925;
  /* 10b0c91b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10b0c91d call 0x10b02b40 */
  push32(0x10b0c922u); f_10b02b40();
  /* 10b0c922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0c925:;
  /* 10b0c925 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0c92c jmp 0x10b0c937 */
  goto L_10b0c937;
L_10b0c92e:;
  /* 10b0c92e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c931 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c934 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b0c937:;
  /* 10b0c937 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c93b jge 0x10b0c956 */
  if ((C.sf==C.of)) goto L_10b0c956;
  /* 10b0c93d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c940 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0c943 add eax, 0x10b2e120 */
  { uint32_t _a=(EAX),_b=(0x10b2e120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c948 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c94b mov edx, dword ptr [0x10b2f8a0] */
  EDX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0c951 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10b0c954 jmp 0x10b0c92e */
  goto L_10b0c92e;
L_10b0c956:;
  /* 10b0c956 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0c95d jmp 0x10b0c968 */
  goto L_10b0c968;
L_10b0c95f:;
  /* 10b0c95f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c962 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0c965 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0c968:;
  /* 10b0c968 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c96c jge 0x10b0c9b8 */
  if ((C.sf==C.of)) goto L_10b0c9b8;
  /* 10b0c96e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c971 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0c974 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c977 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c97a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c97d mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0c984 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c988 je 0x10b0c9a6 */
  if (C.zf) goto L_10b0c9a6;
  /* 10b0c98a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c98d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0c990 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c993 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0c996 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0c999 mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0c9a0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c9a4 jne 0x10b0c9b6 */
  if (!C.zf) goto L_10b0c9b6;
L_10b0c9a6:;
  /* 10b0c9a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0c9a9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0c9ac mov dword ptr [ecx + 0x10b2e130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10b2e130), (0xffffffffu));
L_10b0c9b6:;
  /* 10b0c9b6 jmp 0x10b0c95f */
  goto L_10b0c95f;
L_10b0c9b8:;
  /* 10b0c9b8 mov esp, ebp */
  ESP = (EBP);
  /* 10b0c9ba pop ebp */
  EBP = (pop32());
  /* 10b0c9bb ret  */
  ESPCHK(0x10b0c890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9c0 @ 0x10b0c9c0 (26 bytes, 9 insns) */
void f_10b0c9c0(void) {
  FTRACE(0x10b0c9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c9c3 call 0x10b0d5c0 */
  push32(0x10b0c9c8u); f_10b0d5c0();
  /* 10b0c9c8 movsx eax, byte ptr [0x10b2f544] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10b2f544))));
  /* 10b0c9cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0c9d1 je 0x10b0c9d8 */
  if (C.zf) goto L_10b0c9d8;
  /* 10b0c9d3 call 0x10b0d380 */
  push32(0x10b0c9d8u); f_10b0d380();
L_10b0c9d8:;
  /* 10b0c9d8 pop ebp */
  EBP = (pop32());
  /* 10b0c9d9 ret  */
  ESPCHK(0x10b0c9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9e0 @ 0x10b0c9e0 (61 bytes, 20 insns) */
void f_10b0c9e0(void) {
  FTRACE(0x10b0c9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0c9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0c9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0c9e3 cmp dword ptr [ebp + 8], 0x10b2e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10b2e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c9ea jb 0x10b0ca0e */
  if (C.cf) goto L_10b0ca0e;
  /* 10b0c9ec cmp dword ptr [ebp + 8], 0x10b2e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10b2e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0c9f3 ja 0x10b0ca0e */
  if ((!C.cf&&!C.zf)) goto L_10b0ca0e;
  /* 10b0c9f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0c9f8 sub eax, 0x10b2e120 */
  { uint32_t _a=(EAX),_b=(0x10b2e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0c9fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0ca00 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca03 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ca04 call 0x10b075d0 */
  push32(0x10b0ca09u); f_10b075d0();
  /* 10b0ca09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca0c jmp 0x10b0ca1b */
  goto L_10b0ca1b;
L_10b0ca0e:;
  /* 10b0ca0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ca11 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca14 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ca15 call dword ptr [0x10b32314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32314))), 0x10b0ca1bu);
L_10b0ca1b:;
  /* 10b0ca1b pop ebp */
  EBP = (pop32());
  /* 10b0ca1c ret  */
  ESPCHK(0x10b0c9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca20 @ 0x10b0ca20 (41 bytes, 16 insns) */
void f_10b0ca20(void) {
  FTRACE(0x10b0ca20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ca20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0ca21 mov ebp, esp */
  EBP = (ESP);
  /* 10b0ca23 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ca27 jge 0x10b0ca3a */
  if ((C.sf==C.of)) goto L_10b0ca3a;
  /* 10b0ca29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ca2c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca2f push eax */
  push32((uint32_t)(EAX));
  /* 10b0ca30 call 0x10b075d0 */
  push32(0x10b0ca35u); f_10b075d0();
  /* 10b0ca35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca38 jmp 0x10b0ca47 */
  goto L_10b0ca47;
L_10b0ca3a:;
  /* 10b0ca3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0ca3d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca40 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ca41 call dword ptr [0x10b32314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32314))), 0x10b0ca47u);
L_10b0ca47:;
  /* 10b0ca47 pop ebp */
  EBP = (pop32());
  /* 10b0ca48 ret  */
  ESPCHK(0x10b0ca20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca50 @ 0x10b0ca50 (61 bytes, 20 insns) */
void f_10b0ca50(void) {
  FTRACE(0x10b0ca50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ca50 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0ca51 mov ebp, esp */
  EBP = (ESP);
  /* 10b0ca53 cmp dword ptr [ebp + 8], 0x10b2e120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10b2e120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ca5a jb 0x10b0ca7e */
  if (C.cf) goto L_10b0ca7e;
  /* 10b0ca5c cmp dword ptr [ebp + 8], 0x10b2e380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10b2e380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ca63 ja 0x10b0ca7e */
  if ((!C.cf&&!C.zf)) goto L_10b0ca7e;
  /* 10b0ca65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ca68 sub eax, 0x10b2e120 */
  { uint32_t _a=(EAX),_b=(0x10b2e120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0ca6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0ca70 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca73 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ca74 call 0x10b07670 */
  push32(0x10b0ca79u); f_10b07670();
  /* 10b0ca79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca7c jmp 0x10b0ca8b */
  goto L_10b0ca8b;
L_10b0ca7e:;
  /* 10b0ca7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ca81 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca84 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ca85 call dword ptr [0x10b32310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32310))), 0x10b0ca8bu);
L_10b0ca8b:;
  /* 10b0ca8b pop ebp */
  EBP = (pop32());
  /* 10b0ca8c ret  */
  ESPCHK(0x10b0ca50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca90 @ 0x10b0ca90 (41 bytes, 16 insns) */
void f_10b0ca90(void) {
  FTRACE(0x10b0ca90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ca90 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0ca91 mov ebp, esp */
  EBP = (ESP);
  /* 10b0ca93 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ca97 jge 0x10b0caaa */
  if ((C.sf==C.of)) goto L_10b0caaa;
  /* 10b0ca99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ca9c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ca9f push eax */
  push32((uint32_t)(EAX));
  /* 10b0caa0 call 0x10b07670 */
  push32(0x10b0caa5u); f_10b07670();
  /* 10b0caa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0caa8 jmp 0x10b0cab7 */
  goto L_10b0cab7;
L_10b0caaa:;
  /* 10b0caaa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0caad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cab0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0cab1 call dword ptr [0x10b32310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32310))), 0x10b0cab7u);
L_10b0cab7:;
  /* 10b0cab7 pop ebp */
  EBP = (pop32());
  /* 10b0cab8 ret  */
  ESPCHK(0x10b0ca90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cac0 @ 0x10b0cac0 (119 bytes, 34 insns) */
void f_10b0cac0(void) {
  FTRACE(0x10b0cac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0cac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0cac1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0cac3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0cac6 push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b0cacb call dword ptr [0x10b32344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32344))), 0x10b0cad1u);
  /* 10b0cad1 cmp dword ptr [0x10b2f88c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f88c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cad8 je 0x10b0caf8 */
  if (C.zf) goto L_10b0caf8;
  /* 10b0cada push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b0cadf call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b0cae5u);
  /* 10b0cae5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b0cae7 call 0x10b075d0 */
  push32(0x10b0caecu); f_10b075d0();
  /* 10b0caec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0caef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b0caf6 jmp 0x10b0caff */
  goto L_10b0caff;
L_10b0caf8:;
  /* 10b0caf8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b0caff:;
  /* 10b0caff mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10b0cb03 push eax */
  push32((uint32_t)(EAX));
  /* 10b0cb04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0cb07 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0cb08 call 0x10b0cb40 */
  push32(0x10b0cb0du); f_10b0cb40();
  /* 10b0cb0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cb10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0cb13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cb17 je 0x10b0cb25 */
  if (C.zf) goto L_10b0cb25;
  /* 10b0cb19 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b0cb1b call 0x10b07670 */
  push32(0x10b0cb20u); f_10b07670();
  /* 10b0cb20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cb23 jmp 0x10b0cb30 */
  goto L_10b0cb30;
L_10b0cb25:;
  /* 10b0cb25 push 0x10b2f89c */
  push32((uint32_t)(0x10b2f89cu));
  /* 10b0cb2a call dword ptr [0x10b32334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32334))), 0x10b0cb30u);
L_10b0cb30:;
  /* 10b0cb30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0cb33 mov esp, ebp */
  ESP = (EBP);
  /* 10b0cb35 pop ebp */
  EBP = (pop32());
  /* 10b0cb36 ret  */
  ESPCHK(0x10b0cac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb40 @ 0x10b0cb40 (160 bytes, 50 insns) */
void f_10b0cb40(void) {
  FTRACE(0x10b0cb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0cb40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0cb41 mov ebp, esp */
  EBP = (ESP);
  /* 10b0cb43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0cb46 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cb4a jne 0x10b0cb53 */
  if (!C.zf) goto L_10b0cb53;
  /* 10b0cb4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0cb4e jmp 0x10b0cbdc */
  goto L_10b0cbdc;
L_10b0cb53:;
  /* 10b0cb53 cmp dword ptr [0x10b2f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cb5a jne 0x10b0cb8a */
  if (!C.zf) goto L_10b0cb8a;
  /* 10b0cb5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0cb5f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0cb64 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cb69 jle 0x10b0cb7b */
  if ((C.zf||C.sf!=C.of)) goto L_10b0cb7b;
  /* 10b0cb6b call 0x10b0baa0 */
  push32(0x10b0cb70u); f_10b0baa0();
  /* 10b0cb70 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10b0cb76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0cb79 jmp 0x10b0cbdc */
  goto L_10b0cbdc;
L_10b0cb7b:;
  /* 10b0cb7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0cb7e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10b0cb81 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10b0cb83 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0cb88 jmp 0x10b0cbdc */
  goto L_10b0cbdc;
L_10b0cb8a:;
  /* 10b0cb8a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b0cb91 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b0cb94 push eax */
  push32((uint32_t)(EAX));
  /* 10b0cb95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0cb97 mov ecx, dword ptr [0x10b2dea4] */
  ECX = (r32((uint32_t)(0x10b2dea4)));
  /* 10b0cb9d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0cb9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0cba1 push edx */
  push32((uint32_t)(EDX));
  /* 10b0cba2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0cba4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10b0cba7 push eax */
  push32((uint32_t)(EAX));
  /* 10b0cba8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b0cbad mov ecx, dword ptr [0x10b2f720] */
  ECX = (r32((uint32_t)(0x10b2f720)));
  /* 10b0cbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0cbb4 call dword ptr [0x10b3239c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3239c))), 0x10b0cbbau);
  /* 10b0cbba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0cbbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cbc1 je 0x10b0cbc9 */
  if (C.zf) goto L_10b0cbc9;
  /* 10b0cbc3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cbc7 je 0x10b0cbd9 */
  if (C.zf) goto L_10b0cbd9;
L_10b0cbc9:;
  /* 10b0cbc9 call 0x10b0baa0 */
  push32(0x10b0cbceu); f_10b0baa0();
  /* 10b0cbce mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10b0cbd4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0cbd7 jmp 0x10b0cbdc */
  goto L_10b0cbdc;
L_10b0cbd9:;
  /* 10b0cbd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b0cbdc:;
  /* 10b0cbdc mov esp, ebp */
  ESP = (EBP);
  /* 10b0cbde pop ebp */
  EBP = (pop32());
  /* 10b0cbdf ret  */
  ESPCHK(0x10b0cb40u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10b0cbe0 (32 bytes, 18 insns) */
void f_10b0cbe0(void) {
  FTRACE(0x10b0cbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0cbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0cbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0cbe3 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0cbe4 push esi */
  push32((uint32_t)(ESI));
  /* 10b0cbe5 push edi */
  push32((uint32_t)(EDI));
  /* 10b0cbe6 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0cbe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0cbe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0cbeb push 0x10b0cbf8 */
  push32((uint32_t)(0x10b0cbf8u));
  /* 10b0cbf0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b0cbf3 call 0x10b1432c */
  push32(0x10b0cbf8u); f_10b1432c();
  /* 10b0cbf8 pop ebp */
  EBP = (pop32());
  /* 10b0cbf9 pop edi */
  EDI = (pop32());
  /* 10b0cbfa pop esi */
  ESI = (pop32());
  /* 10b0cbfb pop ebx */
  EBX = (pop32());
  /* 10b0cbfc mov esp, ebp */
  ESP = (EBP);
  /* 10b0cbfe pop ebp */
  EBP = (pop32());
  /* 10b0cbff ret  */
  ESPCHK(0x10b0cbe0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10b0cc22 (104 bytes, 33 insns) */
void f_10b0cc22(void) {
  FTRACE(0x10b0cc22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0cc22 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0cc23 push esi */
  push32((uint32_t)(ESI));
  /* 10b0cc24 push edi */
  push32((uint32_t)(EDI));
  /* 10b0cc25 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b0cc29 push eax */
  push32((uint32_t)(EAX));
  /* 10b0cc2a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10b0cc2c push 0x10b0cc00 */
  push32((uint32_t)(0x10b0cc00u));
  /* 10b0cc31 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10b0cc38 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10b0cc3f:;
  /* 10b0cc3f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10b0cc43 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b0cc46 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0cc49 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cc4c je 0x10b0cc7c */
  if (C.zf) goto L_10b0cc7c;
  /* 10b0cc4e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cc52 je 0x10b0cc7c */
  if (C.zf) goto L_10b0cc7c;
  /* 10b0cc54 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10b0cc57 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10b0cc5a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10b0cc5e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10b0cc61 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cc66 jne 0x10b0cc7a */
  if (!C.zf) goto L_10b0cc7a;
  /* 10b0cc68 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10b0cc6d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10b0cc71 call 0x10b0ccb6 */
  push32(0x10b0cc76u); f_10b0ccb6();
  /* 10b0cc76 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10b0cc7au);
L_10b0cc7a:;
  /* 10b0cc7a jmp 0x10b0cc3f */
  goto L_10b0cc3f;
L_10b0cc7c:;
  /* 10b0cc7c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10b0cc83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cc86 pop edi */
  EDI = (pop32());
  /* 10b0cc87 pop esi */
  ESI = (pop32());
  /* 10b0cc88 pop ebx */
  EBX = (pop32());
  /* 10b0cc89 ret  */
  ESPCHK(0x10b0cc22u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb6 @ 0x10b0ccb6 (24 bytes, 10 insns) */
void f_10b0ccb6(void) {
  FTRACE(0x10b0ccb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ccb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0ccb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ccb8 mov ebx, 0x10b2e3b8 */
  EBX = (0x10b2e3b8u);
  /* 10b0ccbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ccc0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10b0ccc3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10b0ccc6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10b0ccc9 pop ecx */
  ECX = (pop32());
  /* 10b0ccca pop ebx */
  EBX = (pop32());
  /* 10b0cccb ret 4 */
  ESPCHK(0x10b0ccb6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cd95 @ 0x10b0cd95 (27 bytes, 11 insns) */
void f_10b0cd95(void) {
  FTRACE(0x10b0cd95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0cd95 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0cd96 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b0cd9a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10b0cd9c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b0cd9f push eax */
  push32((uint32_t)(EAX));
  /* 10b0cda0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b0cda3 push eax */
  push32((uint32_t)(EAX));
  /* 10b0cda4 call 0x10b0cc22 */
  push32(0x10b0cda9u); f_10b0cc22();
  /* 10b0cda9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cdac pop ebp */
  EBP = (pop32());
  /* 10b0cdad ret 4 */
  ESPCHK(0x10b0cd95u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cdb0 @ 0x10b0cdb0 (482 bytes, 138 insns) */
void f_10b0cdb0(void) {
  FTRACE(0x10b0cdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0cdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0cdb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0cdb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0cdb6 push esi */
  push32((uint32_t)(ESI));
  /* 10b0cdb7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10b0cdbe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10b0cdc0 call 0x10b075d0 */
  push32(0x10b0cdc5u); f_10b075d0();
  /* 10b0cdc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cdc8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b0cdcf jmp 0x10b0cdda */
  goto L_10b0cdda;
L_10b0cdd1:;
  /* 10b0cdd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0cdd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cdd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b0cdda:;
  /* 10b0cdda cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cdde jge 0x10b0cf80 */
  if ((C.sf==C.of)) goto L_10b0cf80;
  /* 10b0cde4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0cde7 cmp dword ptr [ecx*4 + 0x10b30ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10b30ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cdef je 0x10b0cee6 */
  if (C.zf) goto L_10b0cee6;
  /* 10b0cdf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0cdf8 mov eax, dword ptr [edx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b0cdff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0ce02 jmp 0x10b0ce0d */
  goto L_10b0ce0d;
L_10b0ce04:;
  /* 10b0ce04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce07 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ce0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b0ce0d:;
  /* 10b0ce0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0ce10 mov eax, dword ptr [edx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b0ce17 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ce1c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ce1f jae 0x10b0ced6 */
  if (!C.cf) goto L_10b0ced6;
  /* 10b0ce25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce28 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b0ce2c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0ce2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0ce31 jne 0x10b0ced1 */
  if (!C.zf) goto L_10b0ced1;
  /* 10b0ce37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce3a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ce3e jne 0x10b0ce79 */
  if (!C.zf) goto L_10b0ce79;
  /* 10b0ce40 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b0ce42 call 0x10b075d0 */
  push32(0x10b0ce47u); f_10b075d0();
  /* 10b0ce47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ce4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce4d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ce51 jne 0x10b0ce6f */
  if (!C.zf) goto L_10b0ce6f;
  /* 10b0ce53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce56 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ce59 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ce5a call dword ptr [0x10b3236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3236c))), 0x10b0ce60u);
  /* 10b0ce60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b0ce66 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ce69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10b0ce6f:;
  /* 10b0ce6f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b0ce71 call 0x10b07670 */
  push32(0x10b0ce76u); f_10b07670();
  /* 10b0ce76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0ce79:;
  /* 10b0ce79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce7c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ce7f push eax */
  push32((uint32_t)(EAX));
  /* 10b0ce80 call dword ptr [0x10b32314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32314))), 0x10b0ce86u);
  /* 10b0ce86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce89 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10b0ce8d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0ce90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0ce92 je 0x10b0cea6 */
  if (C.zf) goto L_10b0cea6;
  /* 10b0ce94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ce97 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ce9a push eax */
  push32((uint32_t)(EAX));
  /* 10b0ce9b call dword ptr [0x10b32310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32310))), 0x10b0cea1u);
  /* 10b0cea1 jmp 0x10b0ce04 */
  goto L_10b0ce04;
L_10b0cea6:;
  /* 10b0cea6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0cea9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b0ceaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0ceb2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0ceb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0ceb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0cebb sub eax, dword ptr [edx*4 + 0x10b30ee0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10b30ee0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0cec2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b0cec3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10b0cec8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10b0ceca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cecc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0cecf jmp 0x10b0ced6 */
  goto L_10b0ced6;
L_10b0ced1:;
  /* 10b0ced1 jmp 0x10b0ce04 */
  goto L_10b0ce04;
L_10b0ced6:;
  /* 10b0ced6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ceda je 0x10b0cee1 */
  if (C.zf) goto L_10b0cee1;
  /* 10b0cedc jmp 0x10b0cf80 */
  goto L_10b0cf80;
L_10b0cee1:;
  /* 10b0cee1 jmp 0x10b0cf7b */
  goto L_10b0cf7b;
L_10b0cee6:;
  /* 10b0cee6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10b0cee8 push 0x10b2b1b4 */
  push32((uint32_t)(0x10b2b1b4u));
  /* 10b0ceed push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ceef push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b0cef4 call 0x10b03bd0 */
  push32(0x10b0cef9u); f_10b03bd0();
  /* 10b0cef9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cefc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0ceff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cf03 je 0x10b0cf79 */
  if (C.zf) goto L_10b0cf79;
  /* 10b0cf05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0cf08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0cf0b mov dword ptr [eax*4 + 0x10b30ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x10b30ee0), (ECX));
  /* 10b0cf12 mov edx, dword ptr [0x10b3101c] */
  EDX = (r32((uint32_t)(0x10b3101c)));
  /* 10b0cf18 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cf1b mov dword ptr [0x10b3101c], edx */
  w32((uint32_t)(0x10b3101c), (EDX));
  /* 10b0cf21 jmp 0x10b0cf2c */
  goto L_10b0cf2c;
L_10b0cf23:;
  /* 10b0cf23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0cf26 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cf29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0cf2c:;
  /* 10b0cf2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0cf2f mov edx, dword ptr [ecx*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0cf36 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cf3c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cf3f jae 0x10b0cf64 */
  if (!C.cf) goto L_10b0cf64;
  /* 10b0cf41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0cf44 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b0cf48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0cf4b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10b0cf51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0cf54 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10b0cf58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0cf5b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10b0cf62 jmp 0x10b0cf23 */
  goto L_10b0cf23;
L_10b0cf64:;
  /* 10b0cf64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0cf67 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0cf6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0cf6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0cf70 push edx */
  push32((uint32_t)(EDX));
  /* 10b0cf71 call 0x10b0d2c0 */
  push32(0x10b0cf76u); f_10b0d2c0();
  /* 10b0cf76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0cf79:;
  /* 10b0cf79 jmp 0x10b0cf80 */
  goto L_10b0cf80;
L_10b0cf7b:;
  /* 10b0cf7b jmp 0x10b0cdd1 */
  goto L_10b0cdd1;
L_10b0cf80:;
  /* 10b0cf80 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10b0cf82 call 0x10b07670 */
  push32(0x10b0cf87u); f_10b07670();
  /* 10b0cf87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0cf8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0cf8d pop esi */
  ESI = (pop32());
  /* 10b0cf8e mov esp, ebp */
  ESP = (EBP);
  /* 10b0cf90 pop ebp */
  EBP = (pop32());
  /* 10b0cf91 ret  */
  ESPCHK(0x10b0cdb0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10b0cfa0 (183 bytes, 57 insns) */
void f_10b0cfa0(void) {
  FTRACE(0x10b0cfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0cfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0cfa1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0cfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0cfa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0cfa7 cmp eax, dword ptr [0x10b3101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b3101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cfad jae 0x10b0d03a */
  if (!C.cf) goto L_10b0d03a;
  /* 10b0cfb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0cfb6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0cfb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0cfbc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0cfbf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0cfc2 mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0cfc9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cfcd jne 0x10b0d03a */
  if (!C.zf) goto L_10b0d03a;
  /* 10b0cfcf cmp dword ptr [0x10b2f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cfd6 jne 0x10b0d01a */
  if (!C.zf) goto L_10b0d01a;
  /* 10b0cfd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0cfdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0cfde cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cfe2 je 0x10b0cff2 */
  if (C.zf) goto L_10b0cff2;
  /* 10b0cfe4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cfe8 je 0x10b0d000 */
  if (C.zf) goto L_10b0d000;
  /* 10b0cfea cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0cfee je 0x10b0d00e */
  if (C.zf) goto L_10b0d00e;
  /* 10b0cff0 jmp 0x10b0d01a */
  goto L_10b0d01a;
L_10b0cff2:;
  /* 10b0cff2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0cff5 push edx */
  push32((uint32_t)(EDX));
  /* 10b0cff6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10b0cff8 call dword ptr [0x10b322dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322dc))), 0x10b0cffeu);
  /* 10b0cffe jmp 0x10b0d01a */
  goto L_10b0d01a;
L_10b0d000:;
  /* 10b0d000 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d003 push eax */
  push32((uint32_t)(EAX));
  /* 10b0d004 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10b0d006 call dword ptr [0x10b322dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322dc))), 0x10b0d00cu);
  /* 10b0d00c jmp 0x10b0d01a */
  goto L_10b0d01a;
L_10b0d00e:;
  /* 10b0d00e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d011 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d012 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b0d014 call dword ptr [0x10b322dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322dc))), 0x10b0d01au);
L_10b0d01a:;
  /* 10b0d01a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d01d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b0d020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d023 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d026 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d029 mov ecx, dword ptr [edx*4 + 0x10b30ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b0d030 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d033 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10b0d036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d038 jmp 0x10b0d053 */
  goto L_10b0d053;
L_10b0d03a:;
  /* 10b0d03a call 0x10b0baa0 */
  push32(0x10b0d03fu); f_10b0baa0();
  /* 10b0d03f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0d045 call 0x10b0bab0 */
  push32(0x10b0d04au); f_10b0bab0();
  /* 10b0d04a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b0d050 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b0d053:;
  /* 10b0d053 mov esp, ebp */
  ESP = (EBP);
  /* 10b0d055 pop ebp */
  EBP = (pop32());
  /* 10b0d056 ret  */
  ESPCHK(0x10b0cfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d060 @ 0x10b0d060 (216 bytes, 63 insns) */
void f_10b0d060(void) {
  FTRACE(0x10b0d060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d060 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d061 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d063 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d067 cmp eax, dword ptr [0x10b3101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b3101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d06d jae 0x10b0d11b */
  if (!C.cf) goto L_10b0d11b;
  /* 10b0d073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d076 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0d079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d07c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0d07f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d082 mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0d089 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b0d08e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d091 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0d093 je 0x10b0d11b */
  if (C.zf) goto L_10b0d11b;
  /* 10b0d099 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d09c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b0d09f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d0a2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d0a5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d0a8 mov ecx, dword ptr [edx*4 + 0x10b30ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b0d0af cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d0b3 je 0x10b0d11b */
  if (C.zf) goto L_10b0d11b;
  /* 10b0d0b5 cmp dword ptr [0x10b2f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d0bc jne 0x10b0d0fa */
  if (!C.zf) goto L_10b0d0fa;
  /* 10b0d0be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d0c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0d0c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d0c8 je 0x10b0d0d8 */
  if (C.zf) goto L_10b0d0d8;
  /* 10b0d0ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d0ce je 0x10b0d0e4 */
  if (C.zf) goto L_10b0d0e4;
  /* 10b0d0d0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d0d4 je 0x10b0d0f0 */
  if (C.zf) goto L_10b0d0f0;
  /* 10b0d0d6 jmp 0x10b0d0fa */
  goto L_10b0d0fa;
L_10b0d0d8:;
  /* 10b0d0d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0d0da push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10b0d0dc call dword ptr [0x10b322dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322dc))), 0x10b0d0e2u);
  /* 10b0d0e2 jmp 0x10b0d0fa */
  goto L_10b0d0fa;
L_10b0d0e4:;
  /* 10b0d0e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0d0e6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10b0d0e8 call dword ptr [0x10b322dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322dc))), 0x10b0d0eeu);
  /* 10b0d0ee jmp 0x10b0d0fa */
  goto L_10b0d0fa;
L_10b0d0f0:;
  /* 10b0d0f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0d0f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b0d0f4 call dword ptr [0x10b322dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322dc))), 0x10b0d0fau);
L_10b0d0fa:;
  /* 10b0d0fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d0fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0d100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d103 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d106 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d109 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0d110 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10b0d117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d119 jmp 0x10b0d134 */
  goto L_10b0d134;
L_10b0d11b:;
  /* 10b0d11b call 0x10b0baa0 */
  push32(0x10b0d120u); f_10b0baa0();
  /* 10b0d120 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0d126 call 0x10b0bab0 */
  push32(0x10b0d12bu); f_10b0bab0();
  /* 10b0d12b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b0d131 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b0d134:;
  /* 10b0d134 mov esp, ebp */
  ESP = (EBP);
  /* 10b0d136 pop ebp */
  EBP = (pop32());
  /* 10b0d137 ret  */
  ESPCHK(0x10b0d060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d140 @ 0x10b0d140 (102 bytes, 30 insns) */
void f_10b0d140(void) {
  FTRACE(0x10b0d140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d140 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d141 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d146 cmp eax, dword ptr [0x10b3101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b3101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d14c jae 0x10b0d18b */
  if (!C.cf) goto L_10b0d18b;
  /* 10b0d14e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d151 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0d154 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d157 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0d15a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d15d mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0d164 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b0d169 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d16c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0d16e je 0x10b0d18b */
  if (C.zf) goto L_10b0d18b;
  /* 10b0d170 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d173 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10b0d176 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d179 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d17c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d17f mov ecx, dword ptr [edx*4 + 0x10b30ee0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10b30ee0)));
  /* 10b0d186 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10b0d189 jmp 0x10b0d1a4 */
  goto L_10b0d1a4;
L_10b0d18b:;
  /* 10b0d18b call 0x10b0baa0 */
  push32(0x10b0d190u); f_10b0baa0();
  /* 10b0d190 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0d196 call 0x10b0bab0 */
  push32(0x10b0d19bu); f_10b0bab0();
  /* 10b0d19b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b0d1a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10b0d1a4:;
  /* 10b0d1a4 pop ebp */
  EBP = (pop32());
  /* 10b0d1a5 ret  */
  ESPCHK(0x10b0d140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1b0 @ 0x10b0d1b0 (260 bytes, 83 insns) */
void f_10b0d1b0(void) {
  FTRACE(0x10b0d1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d1b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d1b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d1b6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b0d1ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d1bd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d1c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0d1c2 je 0x10b0d1cd */
  if (C.zf) goto L_10b0d1cd;
  /* 10b0d1c4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b0d1c7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10b0d1ca mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10b0d1cd:;
  /* 10b0d1cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d1d0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0d1d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0d1d8 je 0x10b0d1e2 */
  if (C.zf) goto L_10b0d1e2;
  /* 10b0d1da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b0d1dd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10b0d1df mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10b0d1e2:;
  /* 10b0d1e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d1e5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d1eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0d1ed je 0x10b0d1f8 */
  if (C.zf) goto L_10b0d1f8;
  /* 10b0d1ef mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b0d1f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10b0d1f5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10b0d1f8:;
  /* 10b0d1f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d1fb push eax */
  push32((uint32_t)(EAX));
  /* 10b0d1fc call dword ptr [0x10b3237c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3237c))), 0x10b0d202u);
  /* 10b0d202 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0d205 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d209 jne 0x10b0d222 */
  if (!C.zf) goto L_10b0d222;
  /* 10b0d20b call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b0d211u);
  /* 10b0d211 push eax */
  push32((uint32_t)(EAX));
  /* 10b0d212 call 0x10b0ba00 */
  push32(0x10b0d217u); f_10b0ba00();
  /* 10b0d217 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d21a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d21d jmp 0x10b0d2b0 */
  goto L_10b0d2b0;
L_10b0d222:;
  /* 10b0d222 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d226 jne 0x10b0d233 */
  if (!C.zf) goto L_10b0d233;
  /* 10b0d228 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b0d22b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10b0d22e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10b0d231 jmp 0x10b0d242 */
  goto L_10b0d242;
L_10b0d233:;
  /* 10b0d233 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d237 jne 0x10b0d242 */
  if (!C.zf) goto L_10b0d242;
  /* 10b0d239 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b0d23c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10b0d23f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10b0d242:;
  /* 10b0d242 call 0x10b0cdb0 */
  push32(0x10b0d247u); f_10b0cdb0();
  /* 10b0d247 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0d24a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d24e jne 0x10b0d26b */
  if (!C.zf) goto L_10b0d26b;
  /* 10b0d250 call 0x10b0baa0 */
  push32(0x10b0d255u); f_10b0baa0();
  /* 10b0d255 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10b0d25b call 0x10b0bab0 */
  push32(0x10b0d260u); f_10b0bab0();
  /* 10b0d260 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b0d266 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d269 jmp 0x10b0d2b0 */
  goto L_10b0d2b0;
L_10b0d26b:;
  /* 10b0d26b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d26e push eax */
  push32((uint32_t)(EAX));
  /* 10b0d26f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d272 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d273 call 0x10b0cfa0 */
  push32(0x10b0d278u); f_10b0cfa0();
  /* 10b0d278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d27b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b0d27e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10b0d281 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10b0d284 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d287 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0d28a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d28d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d290 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d293 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0d29a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10b0d29d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10b0d2a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d2a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d2a5 call 0x10b0d350 */
  push32(0x10b0d2aau); f_10b0d350();
  /* 10b0d2aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d2ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b0d2b0:;
  /* 10b0d2b0 mov esp, ebp */
  ESP = (EBP);
  /* 10b0d2b2 pop ebp */
  EBP = (pop32());
  /* 10b0d2b3 ret  */
  ESPCHK(0x10b0d1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2c0 @ 0x10b0d2c0 (134 bytes, 44 insns) */
void f_10b0d2c0(void) {
  FTRACE(0x10b0d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d2c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d2c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d2c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0d2ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d2cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d2d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d2d3 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0d2da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d2dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b0d2df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d2e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d2e6 jne 0x10b0d321 */
  if (!C.zf) goto L_10b0d321;
  /* 10b0d2e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b0d2ea call 0x10b075d0 */
  push32(0x10b0d2efu); f_10b075d0();
  /* 10b0d2ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d2f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d2f5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d2f9 jne 0x10b0d317 */
  if (!C.zf) goto L_10b0d317;
  /* 10b0d2fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d2fe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d301 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d302 call dword ptr [0x10b3236c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b3236c))), 0x10b0d308u);
  /* 10b0d308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d30b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b0d30e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d314 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10b0d317:;
  /* 10b0d317 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b0d319 call 0x10b07670 */
  push32(0x10b0d31eu); f_10b07670();
  /* 10b0d31e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0d321:;
  /* 10b0d321 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d324 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0d327 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d32a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d32d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d330 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0d337 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10b0d33b push eax */
  push32((uint32_t)(EAX));
  /* 10b0d33c call dword ptr [0x10b32314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32314))), 0x10b0d342u);
  /* 10b0d342 mov esp, ebp */
  ESP = (EBP);
  /* 10b0d344 pop ebp */
  EBP = (pop32());
  /* 10b0d345 ret  */
  ESPCHK(0x10b0d2c0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10b0d350 (38 bytes, 13 insns) */
void f_10b0d350(void) {
  FTRACE(0x10b0d350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d350 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d351 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d356 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0d359 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d35c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d35f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d362 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0d369 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10b0d36d push eax */
  push32((uint32_t)(EAX));
  /* 10b0d36e call dword ptr [0x10b32310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32310))), 0x10b0d374u);
  /* 10b0d374 pop ebp */
  EBP = (pop32());
  /* 10b0d375 ret  */
  ESPCHK(0x10b0d350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d380 @ 0x10b0d380 (218 bytes, 63 insns) */
void f_10b0d380(void) {
  FTRACE(0x10b0d380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d380 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d381 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d383 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d386 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0d38d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0d38f call 0x10b075d0 */
  push32(0x10b0d394u); f_10b075d0();
  /* 10b0d394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d397 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10b0d39e jmp 0x10b0d3a9 */
  goto L_10b0d3a9;
L_10b0d3a0:;
  /* 10b0d3a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d3a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d3a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b0d3a9:;
  /* 10b0d3a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d3ac cmp ecx, dword ptr [0x10b30be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d3b2 jge 0x10b0d449 */
  if ((C.sf==C.of)) goto L_10b0d449;
  /* 10b0d3b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d3bb mov eax, dword ptr [0x10b2f8a0] */
  EAX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d3c0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d3c4 je 0x10b0d444 */
  if (C.zf) goto L_10b0d444;
  /* 10b0d3c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d3c9 mov edx, dword ptr [0x10b2f8a0] */
  EDX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d3cf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10b0d3d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0d3d5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d3db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0d3dd je 0x10b0d401 */
  if (C.zf) goto L_10b0d401;
  /* 10b0d3df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d3e2 mov eax, dword ptr [0x10b2f8a0] */
  EAX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d3e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b0d3ea push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d3eb call 0x10b0e170 */
  push32(0x10b0d3f0u); f_10b0e170();
  /* 10b0d3f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d3f3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d3f6 je 0x10b0d401 */
  if (C.zf) goto L_10b0d401;
  /* 10b0d3f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d3fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d3fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10b0d401:;
  /* 10b0d401 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d405 jl 0x10b0d444 */
  if ((C.sf!=C.of)) goto L_10b0d444;
  /* 10b0d407 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d40a mov ecx, dword ptr [0x10b2f8a0] */
  ECX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d410 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b0d413 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d416 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d417 call dword ptr [0x10b32384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32384))), 0x10b0d41du);
  /* 10b0d41d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0d41f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d422 mov ecx, dword ptr [0x10b2f8a0] */
  ECX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d428 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b0d42b push edx */
  push32((uint32_t)(EDX));
  /* 10b0d42c call 0x10b04660 */
  push32(0x10b0d431u); f_10b04660();
  /* 10b0d431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d434 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d437 mov ecx, dword ptr [0x10b2f8a0] */
  ECX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d43d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10b0d444:;
  /* 10b0d444 jmp 0x10b0d3a0 */
  goto L_10b0d3a0;
L_10b0d449:;
  /* 10b0d449 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0d44b call 0x10b07670 */
  push32(0x10b0d450u); f_10b07670();
  /* 10b0d450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d456 mov esp, ebp */
  ESP = (EBP);
  /* 10b0d458 pop ebp */
  EBP = (pop32());
  /* 10b0d459 ret  */
  ESPCHK(0x10b0d380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d460 @ 0x10b0d460 (68 bytes, 26 insns) */
void f_10b0d460(void) {
  FTRACE(0x10b0d460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d460 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d461 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d463 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d464 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d468 jne 0x10b0d476 */
  if (!C.zf) goto L_10b0d476;
  /* 10b0d46a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0d46c call 0x10b0d5d0 */
  push32(0x10b0d471u); f_10b0d5d0();
  /* 10b0d471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d474 jmp 0x10b0d4a0 */
  goto L_10b0d4a0;
L_10b0d476:;
  /* 10b0d476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d479 push eax */
  push32((uint32_t)(EAX));
  /* 10b0d47a call 0x10b0c9e0 */
  push32(0x10b0d47fu); f_10b0c9e0();
  /* 10b0d47f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d482 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d485 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d486 call 0x10b0d4b0 */
  push32(0x10b0d48bu); f_10b0d4b0();
  /* 10b0d48b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d48e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0d491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d494 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d495 call 0x10b0ca50 */
  push32(0x10b0d49au); f_10b0ca50();
  /* 10b0d49a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d49d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b0d4a0:;
  /* 10b0d4a0 mov esp, ebp */
  ESP = (EBP);
  /* 10b0d4a2 pop ebp */
  EBP = (pop32());
  /* 10b0d4a3 ret  */
  ESPCHK(0x10b0d460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4b0 @ 0x10b0d4b0 (65 bytes, 26 insns) */
void f_10b0d4b0(void) {
  FTRACE(0x10b0d4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d4b6 push eax */
  push32((uint32_t)(EAX));
  /* 10b0d4b7 call 0x10b0d500 */
  push32(0x10b0d4bcu); f_10b0d500();
  /* 10b0d4bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d4bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0d4c1 je 0x10b0d4c8 */
  if (C.zf) goto L_10b0d4c8;
  /* 10b0d4c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d4c6 jmp 0x10b0d4ef */
  goto L_10b0d4ef;
L_10b0d4c8:;
  /* 10b0d4c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d4cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0d4ce and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0d4d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0d4d6 je 0x10b0d4ed */
  if (C.zf) goto L_10b0d4ed;
  /* 10b0d4d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d4db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b0d4de push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d4df call 0x10b0e2c0 */
  push32(0x10b0d4e4u); f_10b0e2c0();
  /* 10b0d4e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d4e7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0d4e9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d4eb jmp 0x10b0d4ef */
  goto L_10b0d4ef;
L_10b0d4ed:;
  /* 10b0d4ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0d4ef:;
  /* 10b0d4ef pop ebp */
  EBP = (pop32());
  /* 10b0d4f0 ret  */
  ESPCHK(0x10b0d4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d500 @ 0x10b0d500 (183 bytes, 62 insns) */
void f_10b0d500(void) {
  FTRACE(0x10b0d500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d500 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d501 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d506 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0d50d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d510 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0d513 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d516 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0d519 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0d51c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d51f jne 0x10b0d59b */
  if (!C.zf) goto L_10b0d59b;
  /* 10b0d521 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d524 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0d527 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d52d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0d52f je 0x10b0d59b */
  if (C.zf) goto L_10b0d59b;
  /* 10b0d531 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d537 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10b0d539 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d53c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0d53f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d543 jle 0x10b0d59b */
  if ((C.zf||C.sf!=C.of)) goto L_10b0d59b;
  /* 10b0d545 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d548 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d549 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d54c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b0d54f push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d550 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d553 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10b0d556 push eax */
  push32((uint32_t)(EAX));
  /* 10b0d557 call 0x10b0c470 */
  push32(0x10b0d55cu); f_10b0c470();
  /* 10b0d55c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d55f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d562 jne 0x10b0d585 */
  if (!C.zf) goto L_10b0d585;
  /* 10b0d564 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d567 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0d56a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0d570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0d572 je 0x10b0d583 */
  if (C.zf) goto L_10b0d583;
  /* 10b0d574 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d577 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0d57a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d57d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d580 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10b0d583:;
  /* 10b0d583 jmp 0x10b0d59b */
  goto L_10b0d59b;
L_10b0d585:;
  /* 10b0d585 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d588 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0d58b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d58e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d591 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10b0d594 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b0d59b:;
  /* 10b0d59b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d59e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d5a1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b0d5a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b0d5a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0d5a9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10b0d5b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d5b3 mov esp, ebp */
  ESP = (EBP);
  /* 10b0d5b5 pop ebp */
  EBP = (pop32());
  /* 10b0d5b6 ret  */
  ESPCHK(0x10b0d500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5c0 @ 0x10b0d5c0 (15 bytes, 7 insns) */
void f_10b0d5c0(void) {
  FTRACE(0x10b0d5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d5c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d5c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0d5c5 call 0x10b0d5d0 */
  push32(0x10b0d5cau); f_10b0d5d0();
  /* 10b0d5ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d5cd pop ebp */
  EBP = (pop32());
  /* 10b0d5ce ret  */
  ESPCHK(0x10b0d5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5d0 @ 0x10b0d5d0 (319 bytes, 94 insns) */
void f_10b0d5d0(void) {
  FTRACE(0x10b0d5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d5d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0d5dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b0d5e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0d5e6 call 0x10b075d0 */
  push32(0x10b0d5ebu); f_10b075d0();
  /* 10b0d5eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d5ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b0d5f5 jmp 0x10b0d600 */
  goto L_10b0d600;
L_10b0d5f7:;
  /* 10b0d5f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d5fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d5fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b0d600:;
  /* 10b0d600 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d603 cmp ecx, dword ptr [0x10b30be0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b30be0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d609 jge 0x10b0d6f3 */
  if ((C.sf==C.of)) goto L_10b0d6f3;
  /* 10b0d60f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d612 mov eax, dword ptr [0x10b2f8a0] */
  EAX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d617 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d61b je 0x10b0d6ee */
  if (C.zf) goto L_10b0d6ee;
  /* 10b0d621 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d624 mov edx, dword ptr [0x10b2f8a0] */
  EDX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d62a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10b0d62d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b0d630 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0d636 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0d638 je 0x10b0d6ee */
  if (C.zf) goto L_10b0d6ee;
  /* 10b0d63e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d641 mov eax, dword ptr [0x10b2f8a0] */
  EAX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d646 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b0d649 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d64a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d64d push edx */
  push32((uint32_t)(EDX));
  /* 10b0d64e call 0x10b0ca20 */
  push32(0x10b0d653u); f_10b0ca20();
  /* 10b0d653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d656 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d659 mov ecx, dword ptr [0x10b2f8a0] */
  ECX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d65f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b0d662 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b0d665 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d66a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0d66c je 0x10b0d6d5 */
  if (C.zf) goto L_10b0d6d5;
  /* 10b0d66e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d672 jne 0x10b0d699 */
  if (!C.zf) goto L_10b0d699;
  /* 10b0d674 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d677 mov edx, dword ptr [0x10b2f8a0] */
  EDX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d67d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10b0d680 push eax */
  push32((uint32_t)(EAX));
  /* 10b0d681 call 0x10b0d4b0 */
  push32(0x10b0d686u); f_10b0d4b0();
  /* 10b0d686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d689 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d68c je 0x10b0d697 */
  if (C.zf) goto L_10b0d697;
  /* 10b0d68e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d691 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d694 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b0d697:;
  /* 10b0d697 jmp 0x10b0d6d5 */
  goto L_10b0d6d5;
L_10b0d699:;
  /* 10b0d699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d69d jne 0x10b0d6d5 */
  if (!C.zf) goto L_10b0d6d5;
  /* 10b0d69f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d6a2 mov eax, dword ptr [0x10b2f8a0] */
  EAX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d6a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10b0d6aa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0d6ad and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0d6b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0d6b2 je 0x10b0d6d5 */
  if (C.zf) goto L_10b0d6d5;
  /* 10b0d6b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d6b7 mov ecx, dword ptr [0x10b2f8a0] */
  ECX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d6bd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b0d6c0 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d6c1 call 0x10b0d4b0 */
  push32(0x10b0d6c6u); f_10b0d4b0();
  /* 10b0d6c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d6c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d6cc jne 0x10b0d6d5 */
  if (!C.zf) goto L_10b0d6d5;
  /* 10b0d6ce mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10b0d6d5:;
  /* 10b0d6d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d6d8 mov ecx, dword ptr [0x10b2f8a0] */
  ECX = (r32((uint32_t)(0x10b2f8a0)));
  /* 10b0d6de mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10b0d6e1 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d6e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d6e5 push eax */
  push32((uint32_t)(EAX));
  /* 10b0d6e6 call 0x10b0ca90 */
  push32(0x10b0d6ebu); f_10b0ca90();
  /* 10b0d6eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0d6ee:;
  /* 10b0d6ee jmp 0x10b0d5f7 */
  goto L_10b0d5f7;
L_10b0d6f3:;
  /* 10b0d6f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0d6f5 call 0x10b07670 */
  push32(0x10b0d6fau); f_10b07670();
  /* 10b0d6fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d6fd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d701 jne 0x10b0d708 */
  if (!C.zf) goto L_10b0d708;
  /* 10b0d703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0d706 jmp 0x10b0d70b */
  goto L_10b0d70b;
L_10b0d708:;
  /* 10b0d708 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b0d70b:;
  /* 10b0d70b mov esp, ebp */
  ESP = (EBP);
  /* 10b0d70d pop ebp */
  EBP = (pop32());
  /* 10b0d70e ret  */
  ESPCHK(0x10b0d5d0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10b0d710 (15 bytes, 7 insns) */
void f_10b0d710(void) {
  FTRACE(0x10b0d710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d710 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d711 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d713 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0d715 call 0x10b02b40 */
  push32(0x10b0d71au); f_10b02b40();
  /* 10b0d71a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d71d pop ebp */
  EBP = (pop32());
  /* 10b0d71e ret  */
  ESPCHK(0x10b0d710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x10b0d720 (1007 bytes, 269 insns) */
void f_10b0d720(void) {
  FTRACE(0x10b0d720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0d720 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0d721 mov ebp, esp */
  EBP = (ESP);
  /* 10b0d723 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d729 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d72d jl 0x10b0d735 */
  if ((C.sf!=C.of)) goto L_10b0d735;
  /* 10b0d72f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d733 jle 0x10b0d73c */
  if ((C.zf||C.sf!=C.of)) goto L_10b0d73c;
L_10b0d735:;
  /* 10b0d735 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d737 jmp 0x10b0db0b */
  goto L_10b0db0b;
L_10b0d73c:;
  /* 10b0d73c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b0d73e call 0x10b075d0 */
  push32(0x10b0d743u); f_10b075d0();
  /* 10b0d743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d746 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b0d74d mov eax, dword ptr [0x10b2f88c] */
  EAX = (r32((uint32_t)(0x10b2f88c)));
  /* 10b0d752 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d755 mov dword ptr [0x10b2f88c], eax */
  w32((uint32_t)(0x10b2f88c), (EAX));
L_10b0d75a:;
  /* 10b0d75a cmp dword ptr [0x10b2f89c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f89c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d761 je 0x10b0d76d */
  if (C.zf) goto L_10b0d76d;
  /* 10b0d763 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0d765 call dword ptr [0x10b322cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322cc))), 0x10b0d76bu);
  /* 10b0d76b jmp 0x10b0d75a */
  goto L_10b0d75a;
L_10b0d76d:;
  /* 10b0d76d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d771 je 0x10b0d7b1 */
  if (C.zf) goto L_10b0d7b1;
  /* 10b0d773 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d777 je 0x10b0d791 */
  if (C.zf) goto L_10b0d791;
  /* 10b0d779 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d77c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d77d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d780 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d781 call 0x10b0db10 */
  push32(0x10b0d786u); f_10b0db10();
  /* 10b0d786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d789 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10b0d78f jmp 0x10b0d7a3 */
  goto L_10b0d7a3;
L_10b0d791:;
  /* 10b0d791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d794 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d797 mov ecx, dword ptr [eax + 0x10b2e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10b2e4dc)));
  /* 10b0d79d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10b0d7a3:;
  /* 10b0d7a3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10b0d7a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b0d7ac jmp 0x10b0daeb */
  goto L_10b0daeb;
L_10b0d7b1:;
  /* 10b0d7b1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10b0d7b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b0d7bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d7c3 je 0x10b0dae3 */
  if (C.zf) goto L_10b0dae3;
  /* 10b0d7c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d7cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0d7cf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d7d2 jne 0x10b0d9f4 */
  if (!C.zf) goto L_10b0d9f4;
  /* 10b0d7d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d7db movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b0d7df cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d7e2 jne 0x10b0d9f4 */
  if (!C.zf) goto L_10b0d9f4;
  /* 10b0d7e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d7eb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10b0d7ef cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d7f2 jne 0x10b0d9f4 */
  if (!C.zf) goto L_10b0d9f4;
  /* 10b0d7f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0d7fb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10b0d801:;
  /* 10b0d801 push 0x10b2b204 */
  push32((uint32_t)(0x10b2b204u));
  /* 10b0d806 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b0d80c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d80d call 0x10b0f970 */
  push32(0x10b0d812u); f_10b0f970();
  /* 10b0d812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d815 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10b0d81b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d822 je 0x10b0d84d */
  if (C.zf) goto L_10b0d84d;
  /* 10b0d824 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0d82a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d830 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10b0d836 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d83d je 0x10b0d84d */
  if (C.zf) goto L_10b0d84d;
  /* 10b0d83f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0d845 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0d848 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d84b jne 0x10b0d873 */
  if (!C.zf) goto L_10b0d873;
L_10b0d84d:;
  /* 10b0d84d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d851 je 0x10b0d86c */
  if (C.zf) goto L_10b0d86c;
  /* 10b0d853 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b0d855 call 0x10b07670 */
  push32(0x10b0d85au); f_10b07670();
  /* 10b0d85a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d85d mov edx, dword ptr [0x10b2f88c] */
  EDX = (r32((uint32_t)(0x10b2f88c)));
  /* 10b0d863 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d866 mov dword ptr [0x10b2f88c], edx */
  w32((uint32_t)(0x10b2f88c), (EDX));
L_10b0d86c:;
  /* 10b0d86c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d86e jmp 0x10b0db0b */
  goto L_10b0db0b;
L_10b0d873:;
  /* 10b0d873 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10b0d87a jmp 0x10b0d885 */
  goto L_10b0d885;
L_10b0d87c:;
  /* 10b0d87c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0d87f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d882 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10b0d885:;
  /* 10b0d885 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d889 jg 0x10b0d8d3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0d8d3;
  /* 10b0d88b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10b0d891 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d892 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b0d898 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d899 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0d89c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d89f mov ecx, dword ptr [eax + 0x10b2e4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10b2e4d8)));
  /* 10b0d8a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d8a6 call 0x10b0f930 */
  push32(0x10b0d8abu); f_10b0f930();
  /* 10b0d8ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d8ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0d8b0 jne 0x10b0d8d1 */
  if (!C.zf) goto L_10b0d8d1;
  /* 10b0d8b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0d8b5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0d8b8 mov eax, dword ptr [edx + 0x10b2e4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10b2e4d8)));
  /* 10b0d8be push eax */
  push32((uint32_t)(EAX));
  /* 10b0d8bf call 0x10b06a00 */
  push32(0x10b0d8c4u); f_10b06a00();
  /* 10b0d8c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d8c7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d8cd jne 0x10b0d8d1 */
  if (!C.zf) goto L_10b0d8d1;
  /* 10b0d8cf jmp 0x10b0d8d3 */
  goto L_10b0d8d3;
L_10b0d8d1:;
  /* 10b0d8d1 jmp 0x10b0d87c */
  goto L_10b0d87c;
L_10b0d8d3:;
  /* 10b0d8d3 push 0x10b2b200 */
  push32((uint32_t)(0x10b2b200u));
  /* 10b0d8d8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0d8de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d8e1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10b0d8e7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0d8ed push edx */
  push32((uint32_t)(EDX));
  /* 10b0d8ee call 0x10b0f8f0 */
  push32(0x10b0d8f3u); f_10b0f8f0();
  /* 10b0d8f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d8f6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10b0d8fc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d903 jne 0x10b0d939 */
  if (!C.zf) goto L_10b0d939;
  /* 10b0d905 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0d90b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0d90e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d911 je 0x10b0d939 */
  if (C.zf) goto L_10b0d939;
  /* 10b0d913 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d917 je 0x10b0d932 */
  if (C.zf) goto L_10b0d932;
  /* 10b0d919 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b0d91b call 0x10b07670 */
  push32(0x10b0d920u); f_10b07670();
  /* 10b0d920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d923 mov edx, dword ptr [0x10b2f88c] */
  EDX = (r32((uint32_t)(0x10b2f88c)));
  /* 10b0d929 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0d92c mov dword ptr [0x10b2f88c], edx */
  w32((uint32_t)(0x10b2f88c), (EDX));
L_10b0d932:;
  /* 10b0d932 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0d934 jmp 0x10b0db0b */
  goto L_10b0db0b;
L_10b0d939:;
  /* 10b0d939 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d93d jg 0x10b0d98a */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0d98a;
  /* 10b0d93f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10b0d945 push eax */
  push32((uint32_t)(EAX));
  /* 10b0d946 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0d94c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d94d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10b0d953 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d954 call 0x10b073f0 */
  push32(0x10b0d959u); f_10b073f0();
  /* 10b0d959 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d95c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10b0d962 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10b0d96a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10b0d970 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0d971 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0d974 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d975 call 0x10b0db10 */
  push32(0x10b0d97au); f_10b0db10();
  /* 10b0d97a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d97d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0d97f je 0x10b0d98a */
  if (C.zf) goto L_10b0d98a;
  /* 10b0d981 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0d984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d987 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b0d98a:;
  /* 10b0d98a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0d990 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d996 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10b0d99c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b0d9a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b0d9a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0d9a7 je 0x10b0d9b8 */
  if (C.zf) goto L_10b0d9b8;
  /* 10b0d9a9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b0d9af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0d9b2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10b0d9b8:;
  /* 10b0d9b8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10b0d9be movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b0d9c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0d9c3 jne 0x10b0d801 */
  if (!C.zf) goto L_10b0d801;
  /* 10b0d9c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0d9cd je 0x10b0d9dc */
  if (C.zf) goto L_10b0d9dc;
  /* 10b0d9cf call 0x10b0dcb0 */
  push32(0x10b0d9d4u); f_10b0dcb0();
  /* 10b0d9d4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10b0d9da jmp 0x10b0d9e6 */
  goto L_10b0d9e6;
L_10b0d9dc:;
  /* 10b0d9dc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10b0d9e6:;
  /* 10b0d9e6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10b0d9ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0d9ef jmp 0x10b0dae1 */
  goto L_10b0dae1;
L_10b0d9f4:;
  /* 10b0d9f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0d9f7 push edx */
  push32((uint32_t)(EDX));
  /* 10b0d9f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0d9fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0d9fc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10b0da02 push eax */
  push32((uint32_t)(EAX));
  /* 10b0da03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0da06 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0da07 call 0x10b0ddb0 */
  push32(0x10b0da0cu); f_10b0ddb0();
  /* 10b0da0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0da0f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0da12 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0da16 je 0x10b0dae1 */
  if (C.zf) goto L_10b0dae1;
  /* 10b0da1c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b0da23 jmp 0x10b0da2e */
  goto L_10b0da2e;
L_10b0da25:;
  /* 10b0da25 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0da28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0da2b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b0da2e:;
  /* 10b0da2e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0da32 jg 0x10b0da90 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0da90;
  /* 10b0da34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0da38 je 0x10b0da8e */
  if (C.zf) goto L_10b0da8e;
  /* 10b0da3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0da3d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0da40 mov ecx, dword ptr [eax + 0x10b2e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10b2e4dc)));
  /* 10b0da46 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0da47 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10b0da4d push edx */
  push32((uint32_t)(EDX));
  /* 10b0da4e call 0x10b0f860 */
  push32(0x10b0da53u); f_10b0f860();
  /* 10b0da53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0da56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0da58 je 0x10b0da85 */
  if (C.zf) goto L_10b0da85;
  /* 10b0da5a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10b0da60 push eax */
  push32((uint32_t)(EAX));
  /* 10b0da61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b0da64 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0da65 call 0x10b0db10 */
  push32(0x10b0da6au); f_10b0db10();
  /* 10b0da6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0da6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0da6f je 0x10b0da7c */
  if (C.zf) goto L_10b0da7c;
  /* 10b0da71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0da74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0da77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10b0da7a jmp 0x10b0da83 */
  goto L_10b0da83;
L_10b0da7c:;
  /* 10b0da7c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10b0da83:;
  /* 10b0da83 jmp 0x10b0da8e */
  goto L_10b0da8e;
L_10b0da85:;
  /* 10b0da85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0da88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0da8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10b0da8e:;
  /* 10b0da8e jmp 0x10b0da25 */
  goto L_10b0da25;
L_10b0da90:;
  /* 10b0da90 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0da94 je 0x10b0dabb */
  if (C.zf) goto L_10b0dabb;
  /* 10b0da96 call 0x10b0dcb0 */
  push32(0x10b0da9bu); f_10b0dcb0();
  /* 10b0da9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0da9e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0daa0 mov ecx, dword ptr [0x10b2e4dc] */
  ECX = (r32((uint32_t)(0x10b2e4dc)));
  /* 10b0daa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0daa7 call 0x10b04660 */
  push32(0x10b0daacu); f_10b04660();
  /* 10b0daac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0daaf mov dword ptr [0x10b2e4dc], 0 */
  w32((uint32_t)(0x10b2e4dc), (0x0u));
  /* 10b0dab9 jmp 0x10b0dae1 */
  goto L_10b0dae1;
L_10b0dabb:;
  /* 10b0dabb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dabf je 0x10b0dace */
  if (C.zf) goto L_10b0dace;
  /* 10b0dac1 call 0x10b0dcb0 */
  push32(0x10b0dac6u); f_10b0dcb0();
  /* 10b0dac6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10b0dacc jmp 0x10b0dad8 */
  goto L_10b0dad8;
L_10b0dace:;
  /* 10b0dace mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10b0dad8:;
  /* 10b0dad8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10b0dade mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10b0dae1:;
  /* 10b0dae1 jmp 0x10b0daeb */
  goto L_10b0daeb;
L_10b0dae3:;
  /* 10b0dae3 call 0x10b0dcb0 */
  push32(0x10b0dae8u); f_10b0dcb0();
  /* 10b0dae8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b0daeb:;
  /* 10b0daeb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0daef je 0x10b0db08 */
  if (C.zf) goto L_10b0db08;
  /* 10b0daf1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b0daf3 call 0x10b07670 */
  push32(0x10b0daf8u); f_10b07670();
  /* 10b0daf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dafb mov eax, dword ptr [0x10b2f88c] */
  EAX = (r32((uint32_t)(0x10b2f88c)));
  /* 10b0db00 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0db03 mov dword ptr [0x10b2f88c], eax */
  w32((uint32_t)(0x10b2f88c), (EAX));
L_10b0db08:;
  /* 10b0db08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b0db0b:;
  /* 10b0db0b mov esp, ebp */
  ESP = (EBP);
  /* 10b0db0d pop ebp */
  EBP = (pop32());
  /* 10b0db0e ret  */
  ESPCHK(0x10b0d720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db10 @ 0x10b0db10 (403 bytes, 117 insns) */
void f_10b0db10(void) {
  FTRACE(0x10b0db10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0db10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0db11 mov ebp, esp */
  EBP = (ESP);
  /* 10b0db13 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0db19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0db1c push eax */
  push32((uint32_t)(EAX));
  /* 10b0db1d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10b0db23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0db24 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10b0db2a push edx */
  push32((uint32_t)(EDX));
  /* 10b0db2b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10b0db31 push eax */
  push32((uint32_t)(EAX));
  /* 10b0db32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0db35 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0db36 call 0x10b0ddb0 */
  push32(0x10b0db3bu); f_10b0ddb0();
  /* 10b0db3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0db3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0db40 jne 0x10b0db49 */
  if (!C.zf) goto L_10b0db49;
  /* 10b0db42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0db44 jmp 0x10b0dc9f */
  goto L_10b0dc9f;
L_10b0db49:;
  /* 10b0db49 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10b0db4e push 0x10b2b208 */
  push32((uint32_t)(0x10b2b208u));
  /* 10b0db53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0db55 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10b0db5b push edx */
  push32((uint32_t)(EDX));
  /* 10b0db5c call 0x10b06a00 */
  push32(0x10b0db61u); f_10b06a00();
  /* 10b0db61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0db64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0db67 push eax */
  push32((uint32_t)(EAX));
  /* 10b0db68 call 0x10b03bd0 */
  push32(0x10b0db6du); f_10b03bd0();
  /* 10b0db6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0db70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0db73 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0db77 jne 0x10b0db80 */
  if (!C.zf) goto L_10b0db80;
  /* 10b0db79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0db7b jmp 0x10b0dc9f */
  goto L_10b0dc9f;
L_10b0db80:;
  /* 10b0db80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0db83 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0db86 mov ecx, dword ptr [eax + 0x10b2e4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10b2e4dc)));
  /* 10b0db8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0db8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0db92 mov eax, dword ptr [edx*4 + 0x10b2f708] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10b2f708)));
  /* 10b0db99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0db9c push 6 */
  push32((uint32_t)(0x6u));
  /* 10b0db9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dba1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dba4 add ecx, 0x10b2f758 */
  { uint32_t _a=(ECX),_b=(0x10b2f758u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dbaa push ecx */
  push32((uint32_t)(ECX));
  /* 10b0dbab lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10b0dbae push edx */
  push32((uint32_t)(EDX));
  /* 10b0dbaf call 0x10b0a4b0 */
  push32(0x10b0dbb4u); f_10b0a4b0();
  /* 10b0dbb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dbb7 mov eax, dword ptr [0x10b2f720] */
  EAX = (r32((uint32_t)(0x10b2f720)));
  /* 10b0dbbc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b0dbbf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10b0dbc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0dbc6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0dbc9 push edx */
  push32((uint32_t)(EDX));
  /* 10b0dbca call 0x10b06b80 */
  push32(0x10b0dbcfu); f_10b06b80();
  /* 10b0dbcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dbd2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dbd5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dbd8 mov dword ptr [ecx + 0x10b2e4dc], eax */
  w32((uint32_t)(ECX + 0x10b2e4dc), (EAX));
  /* 10b0dbde mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10b0dbe4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0dbea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dbed mov dword ptr [eax*4 + 0x10b2f708], edx */
  w32((uint32_t)(EAX*4 + 0x10b2f708), (EDX));
  /* 10b0dbf4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b0dbf6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10b0dbfc push ecx */
  push32((uint32_t)(ECX));
  /* 10b0dbfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dc00 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dc03 add edx, 0x10b2f758 */
  { uint32_t _a=(EDX),_b=(0x10b2f758u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dc09 push edx */
  push32((uint32_t)(EDX));
  /* 10b0dc0a call 0x10b0a4b0 */
  push32(0x10b0dc0fu); f_10b0a4b0();
  /* 10b0dc0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dc12 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dc16 jne 0x10b0dc23 */
  if (!C.zf) goto L_10b0dc23;
  /* 10b0dc18 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0dc1e mov dword ptr [0x10b2f720], eax */
  w32((uint32_t)(0x10b2f720), (EAX));
L_10b0dc23:;
  /* 10b0dc23 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dc27 jne 0x10b0dc35 */
  if (!C.zf) goto L_10b0dc35;
  /* 10b0dc29 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10b0dc2f mov dword ptr [0x10b2f724], ecx */
  w32((uint32_t)(0x10b2f724), (ECX));
L_10b0dc35:;
  /* 10b0dc35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dc38 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dc3b call dword ptr [edx + 0x10b2e4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10b2e4e0))), 0x10b0dc41u);
  /* 10b0dc41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0dc43 je 0x10b0dc7c */
  if (C.zf) goto L_10b0dc7c;
  /* 10b0dc45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dc48 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dc4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0dc4e mov dword ptr [eax + 0x10b2e4dc], ecx */
  w32((uint32_t)(EAX + 0x10b2e4dc), (ECX));
  /* 10b0dc54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0dc56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0dc59 push edx */
  push32((uint32_t)(EDX));
  /* 10b0dc5a call 0x10b04660 */
  push32(0x10b0dc5fu); f_10b04660();
  /* 10b0dc5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dc62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dc65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0dc68 mov dword ptr [eax*4 + 0x10b2f708], ecx */
  w32((uint32_t)(EAX*4 + 0x10b2f708), (ECX));
  /* 10b0dc6f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0dc72 mov dword ptr [0x10b2f720], edx */
  w32((uint32_t)(0x10b2f720), (EDX));
  /* 10b0dc78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0dc7a jmp 0x10b0dc9f */
  goto L_10b0dc9f;
L_10b0dc7c:;
  /* 10b0dc7c cmp dword ptr [ebp - 0xc], 0x10b2e3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10b2e3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dc83 je 0x10b0dc93 */
  if (C.zf) goto L_10b0dc93;
  /* 10b0dc85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0dc87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0dc8a push eax */
  push32((uint32_t)(EAX));
  /* 10b0dc8b call 0x10b04660 */
  push32(0x10b0dc90u); f_10b04660();
  /* 10b0dc90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0dc93:;
  /* 10b0dc93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dc96 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dc99 mov eax, dword ptr [ecx + 0x10b2e4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10b2e4dc)));
L_10b0dc9f:;
  /* 10b0dc9f mov esp, ebp */
  ESP = (EBP);
  /* 10b0dca1 pop ebp */
  EBP = (pop32());
  /* 10b0dca2 ret  */
  ESPCHK(0x10b0db10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x10b0dcb0 (256 bytes, 72 insns) */
void f_10b0dcb0(void) {
  FTRACE(0x10b0dcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0dcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0dcb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0dcb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0dcb6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b0dcbd cmp dword ptr [0x10b2e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dcc4 jne 0x10b0dce4 */
  if (!C.zf) goto L_10b0dce4;
  /* 10b0dcc6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10b0dccb push 0x10b2b208 */
  push32((uint32_t)(0x10b2b208u));
  /* 10b0dcd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0dcd2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10b0dcd7 call 0x10b03bd0 */
  push32(0x10b0dcdcu); f_10b03bd0();
  /* 10b0dcdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dcdf mov dword ptr [0x10b2e4dc], eax */
  w32((uint32_t)(0x10b2e4dc), (EAX));
L_10b0dce4:;
  /* 10b0dce4 mov eax, dword ptr [0x10b2e4dc] */
  EAX = (r32((uint32_t)(0x10b2e4dc)));
  /* 10b0dce9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10b0dcec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b0dcf3 jmp 0x10b0dcfe */
  goto L_10b0dcfe;
L_10b0dcf5:;
  /* 10b0dcf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0dcf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dcfb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10b0dcfe:;
  /* 10b0dcfe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0dd01 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dd04 mov eax, dword ptr [edx + 0x10b2e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10b2e4dc)));
  /* 10b0dd0a push eax */
  push32((uint32_t)(EAX));
  /* 10b0dd0b push 0x10b2b214 */
  push32((uint32_t)(0x10b2b214u));
  /* 10b0dd10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0dd13 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dd16 mov edx, dword ptr [ecx + 0x10b2e4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10b2e4d8)));
  /* 10b0dd1c push edx */
  push32((uint32_t)(EDX));
  /* 10b0dd1d push 3 */
  push32((uint32_t)(0x3u));
  /* 10b0dd1f mov eax, dword ptr [0x10b2e4dc] */
  EAX = (r32((uint32_t)(0x10b2e4dc)));
  /* 10b0dd24 push eax */
  push32((uint32_t)(EAX));
  /* 10b0dd25 call 0x10b0df50 */
  push32(0x10b0dd2au); f_10b0df50();
  /* 10b0dd2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dd2d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dd31 jge 0x10b0dd79 */
  if ((C.sf==C.of)) goto L_10b0dd79;
  /* 10b0dd33 push 0x10b2b200 */
  push32((uint32_t)(0x10b2b200u));
  /* 10b0dd38 mov ecx, dword ptr [0x10b2e4dc] */
  ECX = (r32((uint32_t)(0x10b2e4dc)));
  /* 10b0dd3e push ecx */
  push32((uint32_t)(ECX));
  /* 10b0dd3f call 0x10b06b90 */
  push32(0x10b0dd44u); f_10b06b90();
  /* 10b0dd44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dd47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0dd4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dd4d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dd50 mov eax, dword ptr [edx + 0x10b2e4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10b2e4dc)));
  /* 10b0dd56 push eax */
  push32((uint32_t)(EAX));
  /* 10b0dd57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0dd5a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0dd5d mov edx, dword ptr [ecx + 0x10b2e4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10b2e4dc)));
  /* 10b0dd63 push edx */
  push32((uint32_t)(EDX));
  /* 10b0dd64 call 0x10b0f860 */
  push32(0x10b0dd69u); f_10b0f860();
  /* 10b0dd69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dd6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0dd6e je 0x10b0dd77 */
  if (C.zf) goto L_10b0dd77;
  /* 10b0dd70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b0dd77:;
  /* 10b0dd77 jmp 0x10b0dda7 */
  goto L_10b0dda7;
L_10b0dd79:;
  /* 10b0dd79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dd7d jne 0x10b0dd86 */
  if (!C.zf) goto L_10b0dd86;
  /* 10b0dd7f mov eax, dword ptr [0x10b2e4dc] */
  EAX = (r32((uint32_t)(0x10b2e4dc)));
  /* 10b0dd84 jmp 0x10b0ddac */
  goto L_10b0ddac;
L_10b0dd86:;
  /* 10b0dd86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0dd88 mov eax, dword ptr [0x10b2e4dc] */
  EAX = (r32((uint32_t)(0x10b2e4dc)));
  /* 10b0dd8d push eax */
  push32((uint32_t)(EAX));
  /* 10b0dd8e call 0x10b04660 */
  push32(0x10b0dd93u); f_10b04660();
  /* 10b0dd93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dd96 mov dword ptr [0x10b2e4dc], 0 */
  w32((uint32_t)(0x10b2e4dc), (0x0u));
  /* 10b0dda0 mov eax, dword ptr [0x10b2e4f4] */
  EAX = (r32((uint32_t)(0x10b2e4f4)));
  /* 10b0dda5 jmp 0x10b0ddac */
  goto L_10b0ddac;
L_10b0dda7:;
  /* 10b0dda7 jmp 0x10b0dcf5 */
  goto L_10b0dcf5;
L_10b0ddac:;
  /* 10b0ddac mov esp, ebp */
  ESP = (EBP);
  /* 10b0ddae pop ebp */
  EBP = (pop32());
  /* 10b0ddaf ret  */
  ESPCHK(0x10b0dcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddb0 @ 0x10b0ddb0 (388 bytes, 115 insns) */
void f_10b0ddb0(void) {
  FTRACE(0x10b0ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0ddb3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0ddb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ddbd jne 0x10b0ddc6 */
  if (!C.zf) goto L_10b0ddc6;
  /* 10b0ddbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ddc1 jmp 0x10b0df30 */
  goto L_10b0df30;
L_10b0ddc6:;
  /* 10b0ddc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ddc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0ddcc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ddcf jne 0x10b0de20 */
  if (!C.zf) goto L_10b0de20;
  /* 10b0ddd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ddd4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b0ddd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0ddda jne 0x10b0de20 */
  if (!C.zf) goto L_10b0de20;
  /* 10b0dddc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0dddf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10b0dde2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0dde5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10b0dde9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dded je 0x10b0de09 */
  if (C.zf) goto L_10b0de09;
  /* 10b0ddef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0ddf2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10b0ddf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0ddfa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10b0de00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0de03 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10b0de09:;
  /* 10b0de09 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0de0d je 0x10b0de18 */
  if (C.zf) goto L_10b0de18;
  /* 10b0de0f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0de12 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10b0de18:;
  /* 10b0de18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0de1b jmp 0x10b0df30 */
  goto L_10b0df30;
L_10b0de20:;
  /* 10b0de20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0de23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0de24 push 0x10b2e450 */
  push32((uint32_t)(0x10b2e450u));
  /* 10b0de29 call 0x10b0f860 */
  push32(0x10b0de2eu); f_10b0f860();
  /* 10b0de2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0de31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0de33 je 0x10b0dee8 */
  if (C.zf) goto L_10b0dee8;
  /* 10b0de39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0de3c push edx */
  push32((uint32_t)(EDX));
  /* 10b0de3d push 0x10b2e3cc */
  push32((uint32_t)(0x10b2e3ccu));
  /* 10b0de42 call 0x10b0f860 */
  push32(0x10b0de47u); f_10b0f860();
  /* 10b0de47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0de4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0de4c je 0x10b0dee8 */
  if (C.zf) goto L_10b0dee8;
  /* 10b0de52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0de55 push eax */
  push32((uint32_t)(EAX));
  /* 10b0de56 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10b0de5c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0de5d call 0x10b0dfa0 */
  push32(0x10b0de62u); f_10b0dfa0();
  /* 10b0de62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0de65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0de67 je 0x10b0de70 */
  if (C.zf) goto L_10b0de70;
  /* 10b0de69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0de6b jmp 0x10b0df30 */
  goto L_10b0df30;
L_10b0de70:;
  /* 10b0de70 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10b0de76 push edx */
  push32((uint32_t)(EDX));
  /* 10b0de77 push 0x10b2f730 */
  push32((uint32_t)(0x10b2f730u));
  /* 10b0de7c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10b0de82 push eax */
  push32((uint32_t)(EAX));
  /* 10b0de83 call 0x10b0f9b0 */
  push32(0x10b0de88u); f_10b0f9b0();
  /* 10b0de88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0de8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0de8d jne 0x10b0de96 */
  if (!C.zf) goto L_10b0de96;
  /* 10b0de8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0de91 jmp 0x10b0df30 */
  goto L_10b0df30;
L_10b0de96:;
  /* 10b0de96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0de98 mov cx, word ptr [0x10b2f734] */
  CX = (r16((uint32_t)(0x10b2f734)));
  /* 10b0de9f mov dword ptr [0x10b2f738], ecx */
  w32((uint32_t)(0x10b2f738), (ECX));
  /* 10b0dea5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10b0deab push edx */
  push32((uint32_t)(EDX));
  /* 10b0deac push 0x10b2e450 */
  push32((uint32_t)(0x10b2e450u));
  /* 10b0deb1 call 0x10b0e100 */
  push32(0x10b0deb6u); f_10b0e100();
  /* 10b0deb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0deb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0debc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0debf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0dec1 je 0x10b0ded6 */
  if (C.zf) goto L_10b0ded6;
  /* 10b0dec3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dec6 push edx */
  push32((uint32_t)(EDX));
  /* 10b0dec7 push 0x10b2e3cc */
  push32((uint32_t)(0x10b2e3ccu));
  /* 10b0decc call 0x10b06b80 */
  push32(0x10b0ded1u); f_10b06b80();
  /* 10b0ded1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ded4 jmp 0x10b0dee8 */
  goto L_10b0dee8;
L_10b0ded6:;
  /* 10b0ded6 push 0x10b2e450 */
  push32((uint32_t)(0x10b2e450u));
  /* 10b0dedb push 0x10b2e3cc */
  push32((uint32_t)(0x10b2e3ccu));
  /* 10b0dee0 call 0x10b06b80 */
  push32(0x10b0dee5u); f_10b06b80();
  /* 10b0dee5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0dee8:;
  /* 10b0dee8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0deec je 0x10b0df01 */
  if (C.zf) goto L_10b0df01;
  /* 10b0deee push 6 */
  push32((uint32_t)(0x6u));
  /* 10b0def0 push 0x10b2f730 */
  push32((uint32_t)(0x10b2f730u));
  /* 10b0def5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0def8 push eax */
  push32((uint32_t)(EAX));
  /* 10b0def9 call 0x10b0a4b0 */
  push32(0x10b0defeu); f_10b0a4b0();
  /* 10b0defe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0df01:;
  /* 10b0df01 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0df05 je 0x10b0df1a */
  if (C.zf) goto L_10b0df1a;
  /* 10b0df07 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b0df09 push 0x10b2f738 */
  push32((uint32_t)(0x10b2f738u));
  /* 10b0df0e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b0df11 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0df12 call 0x10b0a4b0 */
  push32(0x10b0df17u); f_10b0a4b0();
  /* 10b0df17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0df1a:;
  /* 10b0df1a push 0x10b2e450 */
  push32((uint32_t)(0x10b2e450u));
  /* 10b0df1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0df22 push edx */
  push32((uint32_t)(EDX));
  /* 10b0df23 call 0x10b06b80 */
  push32(0x10b0df28u); f_10b06b80();
  /* 10b0df28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0df2b mov eax, 0x10b2e450 */
  EAX = (0x10b2e450u);
L_10b0df30:;
  /* 10b0df30 mov esp, ebp */
  ESP = (EBP);
  /* 10b0df32 pop ebp */
  EBP = (pop32());
  /* 10b0df33 ret  */
  ESPCHK(0x10b0ddb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df40 @ 0x10b0df40 (7 bytes, 5 insns) */
void f_10b0df40(void) {
  FTRACE(0x10b0df40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0df40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0df41 mov ebp, esp */
  EBP = (ESP);
  /* 10b0df43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0df45 pop ebp */
  EBP = (pop32());
  /* 10b0df46 ret  */
  ESPCHK(0x10b0df40u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10b0df50 (79 bytes, 28 insns) */
void f_10b0df50(void) {
  FTRACE(0x10b0df50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0df50 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0df51 mov ebp, esp */
  EBP = (ESP);
  /* 10b0df53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0df56 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10b0df59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0df5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b0df63 jmp 0x10b0df6e */
  goto L_10b0df6e;
L_10b0df65:;
  /* 10b0df65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0df68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0df6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b0df6e:;
  /* 10b0df6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0df71 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0df74 jge 0x10b0df94 */
  if ((C.sf==C.of)) goto L_10b0df94;
  /* 10b0df76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0df79 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0df7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0df7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0df82 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b0df85 push edx */
  push32((uint32_t)(EDX));
  /* 10b0df86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0df89 push eax */
  push32((uint32_t)(EAX));
  /* 10b0df8a call 0x10b06b90 */
  push32(0x10b0df8fu); f_10b06b90();
  /* 10b0df8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0df92 jmp 0x10b0df65 */
  goto L_10b0df65;
L_10b0df94:;
  /* 10b0df94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0df9b mov esp, ebp */
  ESP = (EBP);
  /* 10b0df9d pop ebp */
  EBP = (pop32());
  /* 10b0df9e ret  */
  ESPCHK(0x10b0df50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfa0 @ 0x10b0dfa0 (349 bytes, 122 insns) */
void f_10b0dfa0(void) {
  FTRACE(0x10b0dfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0dfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0dfa1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0dfa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0dfa6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10b0dfab push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0dfad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dfb0 push eax */
  push32((uint32_t)(EAX));
  /* 10b0dfb1 call 0x10b07940 */
  push32(0x10b0dfb6u); f_10b07940();
  /* 10b0dfb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dfb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0dfbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0dfbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0dfc1 jne 0x10b0dfca */
  if (!C.zf) goto L_10b0dfca;
  /* 10b0dfc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0dfc5 jmp 0x10b0e0f9 */
  goto L_10b0e0f9;
L_10b0dfca:;
  /* 10b0dfca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0dfcd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0dfd0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0dfd3 jne 0x10b0e000 */
  if (!C.zf) goto L_10b0e000;
  /* 10b0dfd5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0dfd8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10b0dfdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0dfde je 0x10b0e000 */
  if (C.zf) goto L_10b0e000;
  /* 10b0dfe0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0dfe3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dfe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0dfe7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0dfea add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dff0 push edx */
  push32((uint32_t)(EDX));
  /* 10b0dff1 call 0x10b06b80 */
  push32(0x10b0dff6u); f_10b06b80();
  /* 10b0dff6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0dff9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0dffb jmp 0x10b0e0f9 */
  goto L_10b0e0f9;
L_10b0e000:;
  /* 10b0e000 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b0e007 jmp 0x10b0e012 */
  goto L_10b0e012;
L_10b0e009:;
  /* 10b0e009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e00c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e00f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0e012:;
  /* 10b0e012 push 0x10b2b218 */
  push32((uint32_t)(0x10b2b218u));
  /* 10b0e017 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e01a push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e01b call 0x10b0f8f0 */
  push32(0x10b0e020u); f_10b0f8f0();
  /* 10b0e020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e023 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b0e026 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e02a jne 0x10b0e034 */
  if (!C.zf) goto L_10b0e034;
  /* 10b0e02c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e02f jmp 0x10b0e0f9 */
  goto L_10b0e0f9;
L_10b0e034:;
  /* 10b0e034 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e037 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e03a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b0e03c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10b0e03f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e043 jne 0x10b0e06a */
  if (!C.zf) goto L_10b0e06a;
  /* 10b0e045 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e049 jge 0x10b0e06a */
  if ((C.sf==C.of)) goto L_10b0e06a;
  /* 10b0e04b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b0e04f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e052 je 0x10b0e06a */
  if (C.zf) goto L_10b0e06a;
  /* 10b0e054 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e057 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e05b push eax */
  push32((uint32_t)(EAX));
  /* 10b0e05c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e05f push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e060 call 0x10b073f0 */
  push32(0x10b0e065u); f_10b073f0();
  /* 10b0e065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e068 jmp 0x10b0e0d0 */
  goto L_10b0e0d0;
L_10b0e06a:;
  /* 10b0e06a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e06e jne 0x10b0e098 */
  if (!C.zf) goto L_10b0e098;
  /* 10b0e070 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e074 jge 0x10b0e098 */
  if ((C.sf==C.of)) goto L_10b0e098;
  /* 10b0e076 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b0e07a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e07d je 0x10b0e098 */
  if (C.zf) goto L_10b0e098;
  /* 10b0e07f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e082 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e083 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e086 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e087 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e08a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e08d push edx */
  push32((uint32_t)(EDX));
  /* 10b0e08e call 0x10b073f0 */
  push32(0x10b0e093u); f_10b073f0();
  /* 10b0e093 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e096 jmp 0x10b0e0d0 */
  goto L_10b0e0d0;
L_10b0e098:;
  /* 10b0e098 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e09c jne 0x10b0e0cb */
  if (!C.zf) goto L_10b0e0cb;
  /* 10b0e09e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b0e0a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e0a4 je 0x10b0e0af */
  if (C.zf) goto L_10b0e0af;
  /* 10b0e0a6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b0e0aa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e0ad jne 0x10b0e0cb */
  if (!C.zf) goto L_10b0e0cb;
L_10b0e0af:;
  /* 10b0e0af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e0b2 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e0b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e0b6 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e0b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e0ba add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e0c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e0c1 call 0x10b073f0 */
  push32(0x10b0e0c6u); f_10b073f0();
  /* 10b0e0c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e0c9 jmp 0x10b0e0d0 */
  goto L_10b0e0d0;
L_10b0e0cb:;
  /* 10b0e0cb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e0ce jmp 0x10b0e0f9 */
  goto L_10b0e0f9;
L_10b0e0d0:;
  /* 10b0e0d0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b0e0d4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e0d7 jne 0x10b0e0db */
  if (!C.zf) goto L_10b0e0db;
  /* 10b0e0d9 jmp 0x10b0e0f7 */
  goto L_10b0e0f7;
L_10b0e0db:;
  /* 10b0e0db movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b0e0df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e0e1 jne 0x10b0e0e5 */
  if (!C.zf) goto L_10b0e0e5;
  /* 10b0e0e3 jmp 0x10b0e0f7 */
  goto L_10b0e0f7;
L_10b0e0e5:;
  /* 10b0e0e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e0e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e0eb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10b0e0ef mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b0e0f2 jmp 0x10b0e009 */
  goto L_10b0e009;
L_10b0e0f7:;
  /* 10b0e0f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0e0f9:;
  /* 10b0e0f9 mov esp, ebp */
  ESP = (EBP);
  /* 10b0e0fb pop ebp */
  EBP = (pop32());
  /* 10b0e0fc ret  */
  ESPCHK(0x10b0dfa0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10b0e100 (101 bytes, 36 insns) */
void f_10b0e100(void) {
  FTRACE(0x10b0e100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0e100 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0e101 mov ebp, esp */
  EBP = (ESP);
  /* 10b0e103 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e106 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e107 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e10a push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e10b call 0x10b06b80 */
  push32(0x10b0e110u); f_10b06b80();
  /* 10b0e110 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e113 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e116 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10b0e11a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e11c je 0x10b0e138 */
  if (C.zf) goto L_10b0e138;
  /* 10b0e11e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e121 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e124 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e125 push 0x10b2b220 */
  push32((uint32_t)(0x10b2b220u));
  /* 10b0e12a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e12c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e12f push edx */
  push32((uint32_t)(EDX));
  /* 10b0e130 call 0x10b0df50 */
  push32(0x10b0e135u); f_10b0df50();
  /* 10b0e135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0e138:;
  /* 10b0e138 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e13b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10b0e142 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0e144 je 0x10b0e163 */
  if (C.zf) goto L_10b0e163;
  /* 10b0e146 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0e149 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e14f push edx */
  push32((uint32_t)(EDX));
  /* 10b0e150 push 0x10b2b21c */
  push32((uint32_t)(0x10b2b21cu));
  /* 10b0e155 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e157 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e15a push eax */
  push32((uint32_t)(EAX));
  /* 10b0e15b call 0x10b0df50 */
  push32(0x10b0e160u); f_10b0df50();
  /* 10b0e160 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0e163:;
  /* 10b0e163 pop ebp */
  EBP = (pop32());
  /* 10b0e164 ret  */
  ESPCHK(0x10b0e100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x10b0e170 (130 bytes, 50 insns) */
void f_10b0e170(void) {
  FTRACE(0x10b0e170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0e170 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0e171 mov ebp, esp */
  EBP = (ESP);
  /* 10b0e173 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e174 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0e175 push esi */
  push32((uint32_t)(ESI));
  /* 10b0e176 push edi */
  push32((uint32_t)(EDI));
  /* 10b0e177 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b0e17e:;
  /* 10b0e17e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e182 jne 0x10b0e1a2 */
  if (!C.zf) goto L_10b0e1a2;
  /* 10b0e184 push 0x10b2b230 */
  push32((uint32_t)(0x10b2b230u));
  /* 10b0e189 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0e18b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10b0e18d push 0x10b2b224 */
  push32((uint32_t)(0x10b2b224u));
  /* 10b0e192 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e194 call 0x10b02c90 */
  push32(0x10b0e199u); f_10b02c90();
  /* 10b0e199 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e19c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e19f jne 0x10b0e1a2 */
  if (!C.zf) goto L_10b0e1a2;
  /* 10b0e1a1 int3  */
  x86_unimpl("int3 @ 0x10b0e1a1");
L_10b0e1a2:;
  /* 10b0e1a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e1a6 jne 0x10b0e17e */
  if (!C.zf) goto L_10b0e17e;
  /* 10b0e1a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e1ab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0e1ae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0e1b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0e1b3 je 0x10b0e1c1 */
  if (C.zf) goto L_10b0e1c1;
  /* 10b0e1b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e1b8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10b0e1bf jmp 0x10b0e1e8 */
  goto L_10b0e1e8;
L_10b0e1c1:;
  /* 10b0e1c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e1c5 call 0x10b0c9e0 */
  push32(0x10b0e1cau); f_10b0c9e0();
  /* 10b0e1ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e1cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e1d0 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e1d1 call 0x10b0e200 */
  push32(0x10b0e1d6u); f_10b0e200();
  /* 10b0e1d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e1d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0e1dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e1df push eax */
  push32((uint32_t)(EAX));
  /* 10b0e1e0 call 0x10b0ca50 */
  push32(0x10b0e1e5u); f_10b0ca50();
  /* 10b0e1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0e1e8:;
  /* 10b0e1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e1eb pop edi */
  EDI = (pop32());
  /* 10b0e1ec pop esi */
  ESI = (pop32());
  /* 10b0e1ed pop ebx */
  EBX = (pop32());
  /* 10b0e1ee mov esp, ebp */
  ESP = (EBP);
  /* 10b0e1f0 pop ebp */
  EBP = (pop32());
  /* 10b0e1f1 ret  */
  ESPCHK(0x10b0e170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e200 @ 0x10b0e200 (190 bytes, 67 insns) */
void f_10b0e200(void) {
  FTRACE(0x10b0e200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0e200 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0e201 mov ebp, esp */
  EBP = (ESP);
  /* 10b0e203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0e206 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0e207 push esi */
  push32((uint32_t)(ESI));
  /* 10b0e208 push edi */
  push32((uint32_t)(EDI));
  /* 10b0e209 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b0e210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e213 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b0e216:;
  /* 10b0e216 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e21a jne 0x10b0e23a */
  if (!C.zf) goto L_10b0e23a;
  /* 10b0e21c push 0x10b2b0d4 */
  push32((uint32_t)(0x10b2b0d4u));
  /* 10b0e221 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0e223 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10b0e225 push 0x10b2b224 */
  push32((uint32_t)(0x10b2b224u));
  /* 10b0e22a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e22c call 0x10b02c90 */
  push32(0x10b0e231u); f_10b02c90();
  /* 10b0e231 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e234 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e237 jne 0x10b0e23a */
  if (!C.zf) goto L_10b0e23a;
  /* 10b0e239 int3  */
  x86_unimpl("int3 @ 0x10b0e239");
L_10b0e23a:;
  /* 10b0e23a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e23c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0e23e jne 0x10b0e216 */
  if (!C.zf) goto L_10b0e216;
  /* 10b0e240 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e243 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10b0e246 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e24b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e24d je 0x10b0e2aa */
  if (C.zf) goto L_10b0e2aa;
  /* 10b0e24f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e252 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e253 call 0x10b0d500 */
  push32(0x10b0e258u); f_10b0d500();
  /* 10b0e258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e25b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0e25e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e261 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e262 call 0x10b10880 */
  push32(0x10b0e267u); f_10b10880();
  /* 10b0e267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e26a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e26d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b0e270 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e271 call 0x10b10750 */
  push32(0x10b0e276u); f_10b10750();
  /* 10b0e276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e27b jge 0x10b0e286 */
  if ((C.sf==C.of)) goto L_10b0e286;
  /* 10b0e27d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10b0e284 jmp 0x10b0e2aa */
  goto L_10b0e2aa;
L_10b0e286:;
  /* 10b0e286 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e289 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e28d je 0x10b0e2aa */
  if (C.zf) goto L_10b0e2aa;
  /* 10b0e28f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e291 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e294 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b0e297 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e298 call 0x10b04660 */
  push32(0x10b0e29du); f_10b04660();
  /* 10b0e29d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e2a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e2a3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10b0e2aa:;
  /* 10b0e2aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e2ad mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10b0e2b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e2b7 pop edi */
  EDI = (pop32());
  /* 10b0e2b8 pop esi */
  ESI = (pop32());
  /* 10b0e2b9 pop ebx */
  EBX = (pop32());
  /* 10b0e2ba mov esp, ebp */
  ESP = (EBP);
  /* 10b0e2bc pop ebp */
  EBP = (pop32());
  /* 10b0e2bd ret  */
  ESPCHK(0x10b0e200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2c0 @ 0x10b0e2c0 (210 bytes, 63 insns) */
void f_10b0e2c0(void) {
  FTRACE(0x10b0e2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0e2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0e2c1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0e2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e2c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e2c7 cmp eax, dword ptr [0x10b3101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b3101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e2cd jae 0x10b0e2f1 */
  if (!C.cf) goto L_10b0e2f1;
  /* 10b0e2cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e2d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b0e2d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e2d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0e2db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0e2de mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b0e2e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b0e2ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e2ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0e2ef jne 0x10b0e304 */
  if (!C.zf) goto L_10b0e304;
L_10b0e2f1:;
  /* 10b0e2f1 call 0x10b0baa0 */
  push32(0x10b0e2f6u); f_10b0baa0();
  /* 10b0e2f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0e2fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e2ff jmp 0x10b0e38e */
  goto L_10b0e38e;
L_10b0e304:;
  /* 10b0e304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e307 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e308 call 0x10b0d2c0 */
  push32(0x10b0e30du); f_10b0d2c0();
  /* 10b0e30d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e313 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b0e316 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e319 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e31c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b0e31f mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b0e326 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10b0e32b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e32e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e330 je 0x10b0e36d */
  if (C.zf) goto L_10b0e36d;
  /* 10b0e332 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e335 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e336 call 0x10b0d140 */
  push32(0x10b0e33bu); f_10b0d140();
  /* 10b0e33b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e33e push eax */
  push32((uint32_t)(EAX));
  /* 10b0e33f call dword ptr [0x10b322c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322c8))), 0x10b0e345u);
  /* 10b0e345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e347 jne 0x10b0e354 */
  if (!C.zf) goto L_10b0e354;
  /* 10b0e349 call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b0e34fu);
  /* 10b0e34f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0e352 jmp 0x10b0e35b */
  goto L_10b0e35b;
L_10b0e354:;
  /* 10b0e354 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b0e35b:;
  /* 10b0e35b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e35f jne 0x10b0e363 */
  if (!C.zf) goto L_10b0e363;
  /* 10b0e361 jmp 0x10b0e37f */
  goto L_10b0e37f;
L_10b0e363:;
  /* 10b0e363 call 0x10b0bab0 */
  push32(0x10b0e368u); f_10b0bab0();
  /* 10b0e368 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e36b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10b0e36d:;
  /* 10b0e36d call 0x10b0baa0 */
  push32(0x10b0e372u); f_10b0baa0();
  /* 10b0e372 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b0e378 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10b0e37f:;
  /* 10b0e37f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e382 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e383 call 0x10b0d350 */
  push32(0x10b0e388u); f_10b0d350();
  /* 10b0e388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e38b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b0e38e:;
  /* 10b0e38e mov esp, ebp */
  ESP = (EBP);
  /* 10b0e390 pop ebp */
  EBP = (pop32());
  /* 10b0e391 ret  */
  ESPCHK(0x10b0e2c0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10b0e3a0 (219 bytes, 64 insns) */
void f_10b0e3a0(void) {
  FTRACE(0x10b0e3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0e3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0e3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0e3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e3a4 cmp dword ptr [0x10b2f71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e3ab je 0x10b0e441 */
  if (C.zf) goto L_10b0e441;
  /* 10b0e3b1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10b0e3b3 push 0x10b2b240 */
  push32((uint32_t)(0x10b2b240u));
  /* 10b0e3b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e3ba push 0xac */
  push32((uint32_t)(0xacu));
  /* 10b0e3bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e3c1 call 0x10b03fe0 */
  push32(0x10b0e3c6u); f_10b03fe0();
  /* 10b0e3c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e3c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0e3cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e3d0 jne 0x10b0e3dc */
  if (!C.zf) goto L_10b0e3dc;
  /* 10b0e3d2 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0e3d7 jmp 0x10b0e477 */
  goto L_10b0e477;
L_10b0e3dc:;
  /* 10b0e3dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e3df push eax */
  push32((uint32_t)(EAX));
  /* 10b0e3e0 call 0x10b0e480 */
  push32(0x10b0e3e5u); f_10b0e480();
  /* 10b0e3e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e3e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0e3ea je 0x10b0e40d */
  if (C.zf) goto L_10b0e40d;
  /* 10b0e3ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e3ef push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e3f0 call 0x10b0ea10 */
  push32(0x10b0e3f5u); f_10b0ea10();
  /* 10b0e3f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e3f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e3fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e3fd push edx */
  push32((uint32_t)(EDX));
  /* 10b0e3fe call 0x10b04660 */
  push32(0x10b0e403u); f_10b04660();
  /* 10b0e403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e406 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0e40b jmp 0x10b0e477 */
  goto L_10b0e477;
L_10b0e40d:;
  /* 10b0e40d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e410 mov dword ptr [0x10b2ec98], eax */
  w32((uint32_t)(0x10b2ec98), (EAX));
  /* 10b0e415 mov ecx, dword ptr [0x10b2f73c] */
  ECX = (r32((uint32_t)(0x10b2f73c)));
  /* 10b0e41b push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e41c call 0x10b0ea10 */
  push32(0x10b0e421u); f_10b0ea10();
  /* 10b0e421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e424 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e426 mov edx, dword ptr [0x10b2f73c] */
  EDX = (r32((uint32_t)(0x10b2f73c)));
  /* 10b0e42c push edx */
  push32((uint32_t)(EDX));
  /* 10b0e42d call 0x10b04660 */
  push32(0x10b0e432u); f_10b04660();
  /* 10b0e432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e438 mov dword ptr [0x10b2f73c], eax */
  w32((uint32_t)(0x10b2f73c), (EAX));
  /* 10b0e43d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e43f jmp 0x10b0e477 */
  goto L_10b0e477;
L_10b0e441:;
  /* 10b0e441 mov dword ptr [0x10b2ec98], 0x10b2eca0 */
  w32((uint32_t)(0x10b2ec98), (0x10b2eca0u));
  /* 10b0e44b mov ecx, dword ptr [0x10b2f73c] */
  ECX = (r32((uint32_t)(0x10b2f73c)));
  /* 10b0e451 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0e452 call 0x10b0ea10 */
  push32(0x10b0e457u); f_10b0ea10();
  /* 10b0e457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e45a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0e45c mov edx, dword ptr [0x10b2f73c] */
  EDX = (r32((uint32_t)(0x10b2f73c)));
  /* 10b0e462 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e463 call 0x10b04660 */
  push32(0x10b0e468u); f_10b04660();
  /* 10b0e468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e46b mov dword ptr [0x10b2f73c], 0 */
  w32((uint32_t)(0x10b2f73c), (0x0u));
  /* 10b0e475 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0e477:;
  /* 10b0e477 mov esp, ebp */
  ESP = (EBP);
  /* 10b0e479 pop ebp */
  EBP = (pop32());
  /* 10b0e47a ret  */
  ESPCHK(0x10b0e3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e480 @ 0x10b0e480 (1423 bytes, 533 insns) */
void f_10b0e480(void) {
  FTRACE(0x10b0e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0e480 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0e481 mov ebp, esp */
  EBP = (ESP);
  /* 10b0e483 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0e486 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10b0e48d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e48f mov ax, word ptr [0x10b2f776] */
  AX = (r16((uint32_t)(0x10b2f776)));
  /* 10b0e495 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0e498 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e49a mov cx, word ptr [0x10b2f778] */
  CX = (r16((uint32_t)(0x10b2f778)));
  /* 10b0e4a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0e4a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0e4a8 jne 0x10b0e4b2 */
  if (!C.zf) goto L_10b0e4b2;
  /* 10b0e4aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0e4ad jmp 0x10b0ea0b */
  goto L_10b0ea0b;
L_10b0e4b2:;
  /* 10b0e4b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e4b5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e4b8 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e4b9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10b0e4bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e4be push eax */
  push32((uint32_t)(EAX));
  /* 10b0e4bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e4c1 call 0x10b11d90 */
  push32(0x10b0e4c6u); f_10b11d90();
  /* 10b0e4c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e4c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e4cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e4ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e4d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e4d4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e4d7 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e4d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10b0e4da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e4dd push eax */
  push32((uint32_t)(EAX));
  /* 10b0e4de push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e4e0 call 0x10b11d90 */
  push32(0x10b0e4e5u); f_10b11d90();
  /* 10b0e4e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e4e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e4eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e4ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e4f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e4f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e4f6 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e4f7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10b0e4f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e4fc push eax */
  push32((uint32_t)(EAX));
  /* 10b0e4fd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e4ff call 0x10b11d90 */
  push32(0x10b0e504u); f_10b11d90();
  /* 10b0e504 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e507 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e50a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e50c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e50f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e512 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e515 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e516 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10b0e518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e51b push eax */
  push32((uint32_t)(EAX));
  /* 10b0e51c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e51e call 0x10b11d90 */
  push32(0x10b0e523u); f_10b11d90();
  /* 10b0e523 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e526 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e529 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e52b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e52e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e531 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e534 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e535 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10b0e537 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e53a push eax */
  push32((uint32_t)(EAX));
  /* 10b0e53b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e53d call 0x10b11d90 */
  push32(0x10b0e542u); f_10b11d90();
  /* 10b0e542 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e545 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e548 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e54a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e54d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e550 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e553 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e554 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10b0e556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e559 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e55a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e55c call 0x10b11d90 */
  push32(0x10b0e561u); f_10b11d90();
  /* 10b0e561 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e564 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e567 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e569 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e56c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e56f push edx */
  push32((uint32_t)(EDX));
  /* 10b0e570 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10b0e572 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e575 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e576 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e578 call 0x10b11d90 */
  push32(0x10b0e57du); f_10b11d90();
  /* 10b0e57d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e583 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e585 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e588 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e58b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e58e push edx */
  push32((uint32_t)(EDX));
  /* 10b0e58f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10b0e591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e594 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e595 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e597 call 0x10b11d90 */
  push32(0x10b0e59cu); f_10b11d90();
  /* 10b0e59c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e59f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e5a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e5a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e5a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e5aa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e5ad push edx */
  push32((uint32_t)(EDX));
  /* 10b0e5ae push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10b0e5b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e5b3 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e5b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e5b6 call 0x10b11d90 */
  push32(0x10b0e5bbu); f_10b11d90();
  /* 10b0e5bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e5be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e5c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e5c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e5c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e5c9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e5cc push edx */
  push32((uint32_t)(EDX));
  /* 10b0e5cd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10b0e5cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e5d2 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e5d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e5d5 call 0x10b11d90 */
  push32(0x10b0e5dau); f_10b11d90();
  /* 10b0e5da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e5dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e5e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e5e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e5e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e5e8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e5eb push edx */
  push32((uint32_t)(EDX));
  /* 10b0e5ec push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10b0e5ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e5f1 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e5f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e5f4 call 0x10b11d90 */
  push32(0x10b0e5f9u); f_10b11d90();
  /* 10b0e5f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e5fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e5ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e601 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e604 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e607 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e60a push edx */
  push32((uint32_t)(EDX));
  /* 10b0e60b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10b0e60d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e610 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e611 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e613 call 0x10b11d90 */
  push32(0x10b0e618u); f_10b11d90();
  /* 10b0e618 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e61b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e61e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e620 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e626 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e629 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e62a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10b0e62c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e62f push eax */
  push32((uint32_t)(EAX));
  /* 10b0e630 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e632 call 0x10b11d90 */
  push32(0x10b0e637u); f_10b11d90();
  /* 10b0e637 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e63a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e63d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e63f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e642 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e645 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e648 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e649 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10b0e64b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e64e push eax */
  push32((uint32_t)(EAX));
  /* 10b0e64f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e651 call 0x10b11d90 */
  push32(0x10b0e656u); f_10b11d90();
  /* 10b0e656 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e659 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e65c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e65e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e661 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e664 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e667 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e668 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10b0e66a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e66d push eax */
  push32((uint32_t)(EAX));
  /* 10b0e66e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e670 call 0x10b11d90 */
  push32(0x10b0e675u); f_10b11d90();
  /* 10b0e675 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e678 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e67b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e67d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e683 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e686 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e687 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10b0e689 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e68c push eax */
  push32((uint32_t)(EAX));
  /* 10b0e68d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e68f call 0x10b11d90 */
  push32(0x10b0e694u); f_10b11d90();
  /* 10b0e694 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e697 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e69a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e69c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e69f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e6a2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e6a5 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e6a6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10b0e6a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e6ab push eax */
  push32((uint32_t)(EAX));
  /* 10b0e6ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e6ae call 0x10b11d90 */
  push32(0x10b0e6b3u); f_10b11d90();
  /* 10b0e6b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e6b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e6b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e6bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e6be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e6c1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e6c4 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e6c5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10b0e6c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e6ca push eax */
  push32((uint32_t)(EAX));
  /* 10b0e6cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e6cd call 0x10b11d90 */
  push32(0x10b0e6d2u); f_10b11d90();
  /* 10b0e6d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e6d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e6d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e6da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e6dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e6e0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e6e3 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e6e4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10b0e6e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e6e9 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e6ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e6ec call 0x10b11d90 */
  push32(0x10b0e6f1u); f_10b11d90();
  /* 10b0e6f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e6f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e6f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e6f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e6fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e6ff add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e702 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e703 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10b0e705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e708 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e709 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e70b call 0x10b11d90 */
  push32(0x10b0e710u); f_10b11d90();
  /* 10b0e710 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e713 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e716 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e718 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e71b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e71e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e721 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e722 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10b0e724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e727 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e728 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e72a call 0x10b11d90 */
  push32(0x10b0e72fu); f_10b11d90();
  /* 10b0e72f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e732 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e735 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e737 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e73a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e73d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e740 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e741 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10b0e743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e746 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e747 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e749 call 0x10b11d90 */
  push32(0x10b0e74eu); f_10b11d90();
  /* 10b0e74e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e751 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e754 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e756 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e759 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e75c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e75f push edx */
  push32((uint32_t)(EDX));
  /* 10b0e760 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10b0e762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e765 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e766 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e768 call 0x10b11d90 */
  push32(0x10b0e76du); f_10b11d90();
  /* 10b0e76d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e770 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e773 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e775 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e77b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e77e push edx */
  push32((uint32_t)(EDX));
  /* 10b0e77f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10b0e781 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e784 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e785 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e787 call 0x10b11d90 */
  push32(0x10b0e78cu); f_10b11d90();
  /* 10b0e78c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e78f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e792 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e794 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e797 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e79a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e79d push edx */
  push32((uint32_t)(EDX));
  /* 10b0e79e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10b0e7a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e7a3 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e7a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e7a6 call 0x10b11d90 */
  push32(0x10b0e7abu); f_10b11d90();
  /* 10b0e7ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e7ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e7b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e7b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e7b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e7b9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e7bc push edx */
  push32((uint32_t)(EDX));
  /* 10b0e7bd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10b0e7bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e7c2 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e7c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e7c5 call 0x10b11d90 */
  push32(0x10b0e7cau); f_10b11d90();
  /* 10b0e7ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e7cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e7d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e7d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e7d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e7d8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e7db push edx */
  push32((uint32_t)(EDX));
  /* 10b0e7dc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10b0e7de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e7e1 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e7e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e7e4 call 0x10b11d90 */
  push32(0x10b0e7e9u); f_10b11d90();
  /* 10b0e7e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e7ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e7ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e7f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e7f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e7f7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e7fa push edx */
  push32((uint32_t)(EDX));
  /* 10b0e7fb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10b0e7fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e800 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e801 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e803 call 0x10b11d90 */
  push32(0x10b0e808u); f_10b11d90();
  /* 10b0e808 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e80b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e80e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e810 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e813 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e816 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e819 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e81a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10b0e81c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e81f push eax */
  push32((uint32_t)(EAX));
  /* 10b0e820 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e822 call 0x10b11d90 */
  push32(0x10b0e827u); f_10b11d90();
  /* 10b0e827 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e82a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e82d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e82f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e832 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e835 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e838 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e839 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10b0e83b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e83e push eax */
  push32((uint32_t)(EAX));
  /* 10b0e83f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e841 call 0x10b11d90 */
  push32(0x10b0e846u); f_10b11d90();
  /* 10b0e846 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e849 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e84c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e84e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e851 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e854 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e857 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e858 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10b0e85a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e85d push eax */
  push32((uint32_t)(EAX));
  /* 10b0e85e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e860 call 0x10b11d90 */
  push32(0x10b0e865u); f_10b11d90();
  /* 10b0e865 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e868 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e86b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e86d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e870 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e873 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e876 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e877 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10b0e879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e87c push eax */
  push32((uint32_t)(EAX));
  /* 10b0e87d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e87f call 0x10b11d90 */
  push32(0x10b0e884u); f_10b11d90();
  /* 10b0e884 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e887 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e88a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e88c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e88f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e892 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e898 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e899 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10b0e89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e89e push eax */
  push32((uint32_t)(EAX));
  /* 10b0e89f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e8a1 call 0x10b11d90 */
  push32(0x10b0e8a6u); f_10b11d90();
  /* 10b0e8a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e8a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e8ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e8ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e8b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e8b4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e8ba push edx */
  push32((uint32_t)(EDX));
  /* 10b0e8bb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b0e8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e8c0 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e8c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e8c3 call 0x10b11d90 */
  push32(0x10b0e8c8u); f_10b11d90();
  /* 10b0e8c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e8cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e8ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e8d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e8d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e8d6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e8dc push edx */
  push32((uint32_t)(EDX));
  /* 10b0e8dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b0e8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e8e2 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e8e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e8e5 call 0x10b11d90 */
  push32(0x10b0e8eau); f_10b11d90();
  /* 10b0e8ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e8ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e8f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e8f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e8f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e8f8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e8fe push edx */
  push32((uint32_t)(EDX));
  /* 10b0e8ff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10b0e901 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e904 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e905 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e907 call 0x10b11d90 */
  push32(0x10b0e90cu); f_10b11d90();
  /* 10b0e90c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e90f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e912 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e914 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e917 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e91a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e920 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e921 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10b0e923 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e926 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e927 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e929 call 0x10b11d90 */
  push32(0x10b0e92eu); f_10b11d90();
  /* 10b0e92e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e931 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e934 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e936 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e93c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e942 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e943 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10b0e945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e948 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e949 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e94b call 0x10b11d90 */
  push32(0x10b0e950u); f_10b11d90();
  /* 10b0e950 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e953 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e956 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e958 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e95b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e95e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e964 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e965 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10b0e967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e96a push eax */
  push32((uint32_t)(EAX));
  /* 10b0e96b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e96d call 0x10b11d90 */
  push32(0x10b0e972u); f_10b11d90();
  /* 10b0e972 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e975 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e978 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e97a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e97d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e980 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e986 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e987 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10b0e989 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0e98c push eax */
  push32((uint32_t)(EAX));
  /* 10b0e98d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e98f call 0x10b11d90 */
  push32(0x10b0e994u); f_10b11d90();
  /* 10b0e994 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e997 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e99a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e99c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e99f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e9a2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e9a8 push edx */
  push32((uint32_t)(EDX));
  /* 10b0e9a9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10b0e9ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e9ae push eax */
  push32((uint32_t)(EAX));
  /* 10b0e9af push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e9b1 call 0x10b11d90 */
  push32(0x10b0e9b6u); f_10b11d90();
  /* 10b0e9b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e9b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e9bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e9be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e9c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e9c4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e9ca push edx */
  push32((uint32_t)(EDX));
  /* 10b0e9cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b0e9cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e9d0 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e9d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e9d3 call 0x10b11d90 */
  push32(0x10b0e9d8u); f_10b11d90();
  /* 10b0e9d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e9db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0e9de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0e9e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0e9e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0e9e6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0e9ec push edx */
  push32((uint32_t)(EDX));
  /* 10b0e9ed push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10b0e9f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0e9f5 push eax */
  push32((uint32_t)(EAX));
  /* 10b0e9f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0e9f8 call 0x10b11d90 */
  push32(0x10b0e9fdu); f_10b11d90();
  /* 10b0e9fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ea00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0ea03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0ea05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b0ea08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10b0ea0b:;
  /* 10b0ea0b mov esp, ebp */
  ESP = (EBP);
  /* 10b0ea0d pop ebp */
  EBP = (pop32());
  /* 10b0ea0e ret  */
  ESPCHK(0x10b0e480u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10b0ea10 (779 bytes, 265 insns) */
void f_10b0ea10(void) {
  FTRACE(0x10b0ea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ea10 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0ea11 mov ebp, esp */
  EBP = (ESP);
  /* 10b0ea13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ea17 jne 0x10b0ea1e */
  if (!C.zf) goto L_10b0ea1e;
  /* 10b0ea19 jmp 0x10b0ed19 */
  goto L_10b0ed19;
L_10b0ea1e:;
  /* 10b0ea1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ea20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ea23 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0ea26 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ea27 call 0x10b04660 */
  push32(0x10b0ea2cu); f_10b04660();
  /* 10b0ea2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ea2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ea31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ea34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b0ea37 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ea38 call 0x10b04660 */
  push32(0x10b0ea3du); f_10b04660();
  /* 10b0ea3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ea40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ea42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ea45 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0ea48 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ea49 call 0x10b04660 */
  push32(0x10b0ea4eu); f_10b04660();
  /* 10b0ea4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ea51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ea53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ea56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b0ea59 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ea5a call 0x10b04660 */
  push32(0x10b0ea5fu); f_10b04660();
  /* 10b0ea5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ea62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ea64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ea67 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b0ea6a push eax */
  push32((uint32_t)(EAX));
  /* 10b0ea6b call 0x10b04660 */
  push32(0x10b0ea70u); f_10b04660();
  /* 10b0ea70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ea73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ea75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ea78 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b0ea7b push edx */
  push32((uint32_t)(EDX));
  /* 10b0ea7c call 0x10b04660 */
  push32(0x10b0ea81u); f_10b04660();
  /* 10b0ea81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ea84 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ea86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ea89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0ea8b push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ea8c call 0x10b04660 */
  push32(0x10b0ea91u); f_10b04660();
  /* 10b0ea91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ea94 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ea96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ea99 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10b0ea9c push eax */
  push32((uint32_t)(EAX));
  /* 10b0ea9d call 0x10b04660 */
  push32(0x10b0eaa2u); f_10b04660();
  /* 10b0eaa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eaa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eaa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eaaa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10b0eaad push edx */
  push32((uint32_t)(EDX));
  /* 10b0eaae call 0x10b04660 */
  push32(0x10b0eab3u); f_10b04660();
  /* 10b0eab3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eab6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eabb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10b0eabe push ecx */
  push32((uint32_t)(ECX));
  /* 10b0eabf call 0x10b04660 */
  push32(0x10b0eac4u); f_10b04660();
  /* 10b0eac4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eacc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10b0eacf push eax */
  push32((uint32_t)(EAX));
  /* 10b0ead0 call 0x10b04660 */
  push32(0x10b0ead5u); f_10b04660();
  /* 10b0ead5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ead8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eada mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eadd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10b0eae0 push edx */
  push32((uint32_t)(EDX));
  /* 10b0eae1 call 0x10b04660 */
  push32(0x10b0eae6u); f_10b04660();
  /* 10b0eae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eae9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eaeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eaee mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10b0eaf1 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0eaf2 call 0x10b04660 */
  push32(0x10b0eaf7u); f_10b04660();
  /* 10b0eaf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eafa push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eafc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eaff mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b0eb02 push eax */
  push32((uint32_t)(EAX));
  /* 10b0eb03 call 0x10b04660 */
  push32(0x10b0eb08u); f_10b04660();
  /* 10b0eb08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb10 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10b0eb13 push edx */
  push32((uint32_t)(EDX));
  /* 10b0eb14 call 0x10b04660 */
  push32(0x10b0eb19u); f_10b04660();
  /* 10b0eb19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb21 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10b0eb24 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0eb25 call 0x10b04660 */
  push32(0x10b0eb2au); f_10b04660();
  /* 10b0eb2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb32 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10b0eb35 push eax */
  push32((uint32_t)(EAX));
  /* 10b0eb36 call 0x10b04660 */
  push32(0x10b0eb3bu); f_10b04660();
  /* 10b0eb3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb43 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10b0eb46 push edx */
  push32((uint32_t)(EDX));
  /* 10b0eb47 call 0x10b04660 */
  push32(0x10b0eb4cu); f_10b04660();
  /* 10b0eb4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb54 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10b0eb57 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0eb58 call 0x10b04660 */
  push32(0x10b0eb5du); f_10b04660();
  /* 10b0eb5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb65 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10b0eb68 push eax */
  push32((uint32_t)(EAX));
  /* 10b0eb69 call 0x10b04660 */
  push32(0x10b0eb6eu); f_10b04660();
  /* 10b0eb6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb76 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10b0eb79 push edx */
  push32((uint32_t)(EDX));
  /* 10b0eb7a call 0x10b04660 */
  push32(0x10b0eb7fu); f_10b04660();
  /* 10b0eb7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb87 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10b0eb8a push ecx */
  push32((uint32_t)(ECX));
  /* 10b0eb8b call 0x10b04660 */
  push32(0x10b0eb90u); f_10b04660();
  /* 10b0eb90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eb93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eb95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eb98 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10b0eb9b push eax */
  push32((uint32_t)(EAX));
  /* 10b0eb9c call 0x10b04660 */
  push32(0x10b0eba1u); f_10b04660();
  /* 10b0eba1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eba4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eba6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eba9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10b0ebac push edx */
  push32((uint32_t)(EDX));
  /* 10b0ebad call 0x10b04660 */
  push32(0x10b0ebb2u); f_10b04660();
  /* 10b0ebb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ebb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ebb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ebba mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10b0ebbd push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ebbe call 0x10b04660 */
  push32(0x10b0ebc3u); f_10b04660();
  /* 10b0ebc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ebc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ebc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ebcb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10b0ebce push eax */
  push32((uint32_t)(EAX));
  /* 10b0ebcf call 0x10b04660 */
  push32(0x10b0ebd4u); f_10b04660();
  /* 10b0ebd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ebd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ebd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ebdc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10b0ebdf push edx */
  push32((uint32_t)(EDX));
  /* 10b0ebe0 call 0x10b04660 */
  push32(0x10b0ebe5u); f_10b04660();
  /* 10b0ebe5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ebe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ebea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ebed mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10b0ebf0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ebf1 call 0x10b04660 */
  push32(0x10b0ebf6u); f_10b04660();
  /* 10b0ebf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ebf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ebfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ebfe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10b0ec01 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ec02 call 0x10b04660 */
  push32(0x10b0ec07u); f_10b04660();
  /* 10b0ec07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ec0a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ec0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ec0f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10b0ec12 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ec13 call 0x10b04660 */
  push32(0x10b0ec18u); f_10b04660();
  /* 10b0ec18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ec1b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ec1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ec20 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10b0ec23 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ec24 call 0x10b04660 */
  push32(0x10b0ec29u); f_10b04660();
  /* 10b0ec29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ec2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ec2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ec31 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10b0ec34 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ec35 call 0x10b04660 */
  push32(0x10b0ec3au); f_10b04660();
  /* 10b0ec3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ec3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ec3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ec42 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10b0ec48 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ec49 call 0x10b04660 */
  push32(0x10b0ec4eu); f_10b04660();
  /* 10b0ec4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ec51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ec53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ec56 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10b0ec5c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ec5d call 0x10b04660 */
  push32(0x10b0ec62u); f_10b04660();
  /* 10b0ec62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ec65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ec67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ec6a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10b0ec70 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ec71 call 0x10b04660 */
  push32(0x10b0ec76u); f_10b04660();
  /* 10b0ec76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ec79 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ec7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ec7e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10b0ec84 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ec85 call 0x10b04660 */
  push32(0x10b0ec8au); f_10b04660();
  /* 10b0ec8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ec8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ec8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ec92 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10b0ec98 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ec99 call 0x10b04660 */
  push32(0x10b0ec9eu); f_10b04660();
  /* 10b0ec9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eca3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eca6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10b0ecac push eax */
  push32((uint32_t)(EAX));
  /* 10b0ecad call 0x10b04660 */
  push32(0x10b0ecb2u); f_10b04660();
  /* 10b0ecb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ecb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ecb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ecba mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10b0ecc0 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ecc1 call 0x10b04660 */
  push32(0x10b0ecc6u); f_10b04660();
  /* 10b0ecc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ecc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eccb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ecce mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10b0ecd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ecd5 call 0x10b04660 */
  push32(0x10b0ecdau); f_10b04660();
  /* 10b0ecda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ecdd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ecdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ece2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10b0ece8 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ece9 call 0x10b04660 */
  push32(0x10b0eceeu); f_10b04660();
  /* 10b0ecee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ecf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ecf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ecf6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10b0ecfc push edx */
  push32((uint32_t)(EDX));
  /* 10b0ecfd call 0x10b04660 */
  push32(0x10b0ed02u); f_10b04660();
  /* 10b0ed02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ed05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ed07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0ed0a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10b0ed10 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ed11 call 0x10b04660 */
  push32(0x10b0ed16u); f_10b04660();
  /* 10b0ed16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0ed19:;
  /* 10b0ed19 pop ebp */
  EBP = (pop32());
  /* 10b0ed1a ret  */
  ESPCHK(0x10b0ea10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed20 @ 0x10b0ed20 (678 bytes, 180 insns) */
void f_10b0ed20(void) {
  FTRACE(0x10b0ed20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0ed20 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0ed21 mov ebp, esp */
  EBP = (ESP);
  /* 10b0ed23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0ed26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b0ed2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ed2f mov ax, word ptr [0x10b2f772] */
  AX = (r16((uint32_t)(0x10b2f772)));
  /* 10b0ed35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0ed38 cmp dword ptr [0x10b2f718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ed3f je 0x10b0ee9a */
  if (C.zf) goto L_10b0ee9a;
  /* 10b0ed45 push 0x10b2f740 */
  push32((uint32_t)(0x10b2f740u));
  /* 10b0ed4a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10b0ed4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ed4f push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ed50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0ed52 call 0x10b11d90 */
  push32(0x10b0ed57u); f_10b11d90();
  /* 10b0ed57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ed5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0ed5d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0ed5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b0ed62 push 0x10b2f744 */
  push32((uint32_t)(0x10b2f744u));
  /* 10b0ed67 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10b0ed69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ed6c push eax */
  push32((uint32_t)(EAX));
  /* 10b0ed6d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0ed6f call 0x10b11d90 */
  push32(0x10b0ed74u); f_10b11d90();
  /* 10b0ed74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ed77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0ed7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0ed7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0ed7f push 0x10b2f748 */
  push32((uint32_t)(0x10b2f748u));
  /* 10b0ed84 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10b0ed86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0ed89 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ed8a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0ed8c call 0x10b11d90 */
  push32(0x10b0ed91u); f_10b11d90();
  /* 10b0ed91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ed94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0ed97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0ed99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0ed9c mov edx, dword ptr [0x10b2f748] */
  EDX = (r32((uint32_t)(0x10b2f748)));
  /* 10b0eda2 push edx */
  push32((uint32_t)(EDX));
  /* 10b0eda3 call 0x10b0efd0 */
  push32(0x10b0eda8u); f_10b0efd0();
  /* 10b0eda8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0edab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0edaf je 0x10b0ee09 */
  if (C.zf) goto L_10b0ee09;
  /* 10b0edb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0edb3 mov eax, dword ptr [0x10b2f740] */
  EAX = (r32((uint32_t)(0x10b2f740)));
  /* 10b0edb8 push eax */
  push32((uint32_t)(EAX));
  /* 10b0edb9 call 0x10b04660 */
  push32(0x10b0edbeu); f_10b04660();
  /* 10b0edbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0edc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0edc3 mov ecx, dword ptr [0x10b2f744] */
  ECX = (r32((uint32_t)(0x10b2f744)));
  /* 10b0edc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0edca call 0x10b04660 */
  push32(0x10b0edcfu); f_10b04660();
  /* 10b0edcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0edd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0edd4 mov edx, dword ptr [0x10b2f748] */
  EDX = (r32((uint32_t)(0x10b2f748)));
  /* 10b0edda push edx */
  push32((uint32_t)(EDX));
  /* 10b0eddb call 0x10b04660 */
  push32(0x10b0ede0u); f_10b04660();
  /* 10b0ede0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ede3 mov dword ptr [0x10b2f740], 0 */
  w32((uint32_t)(0x10b2f740), (0x0u));
  /* 10b0eded mov dword ptr [0x10b2f744], 0 */
  w32((uint32_t)(0x10b2f744), (0x0u));
  /* 10b0edf7 mov dword ptr [0x10b2f748], 0 */
  w32((uint32_t)(0x10b2f748), (0x0u));
  /* 10b0ee01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ee04 jmp 0x10b0efc2 */
  goto L_10b0efc2;
L_10b0ee09:;
  /* 10b0ee09 mov eax, dword ptr [0x10b2ed88] */
  EAX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ee0e cmp dword ptr [eax], 0x10b2ed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10b2ed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ee14 je 0x10b0ee50 */
  if (C.zf) goto L_10b0ee50;
  /* 10b0ee16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ee18 mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ee1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0ee20 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ee21 call 0x10b04660 */
  push32(0x10b0ee26u); f_10b04660();
  /* 10b0ee26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ee29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ee2b mov eax, dword ptr [0x10b2ed88] */
  EAX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ee30 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0ee33 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ee34 call 0x10b04660 */
  push32(0x10b0ee39u); f_10b04660();
  /* 10b0ee39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ee3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ee3e mov edx, dword ptr [0x10b2ed88] */
  EDX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ee44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b0ee47 push eax */
  push32((uint32_t)(EAX));
  /* 10b0ee48 call 0x10b04660 */
  push32(0x10b0ee4du); f_10b04660();
  /* 10b0ee4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0ee50:;
  /* 10b0ee50 mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ee56 mov edx, dword ptr [0x10b2f740] */
  EDX = (r32((uint32_t)(0x10b2f740)));
  /* 10b0ee5c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10b0ee5e mov eax, dword ptr [0x10b2ed88] */
  EAX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ee63 mov ecx, dword ptr [0x10b2f744] */
  ECX = (r32((uint32_t)(0x10b2f744)));
  /* 10b0ee69 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b0ee6c mov edx, dword ptr [0x10b2ed88] */
  EDX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ee72 mov eax, dword ptr [0x10b2f748] */
  EAX = (r32((uint32_t)(0x10b2f748)));
  /* 10b0ee77 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10b0ee7a mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ee80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0ee82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b0ee84 mov byte ptr [0x10b2dea8], al */
  w8((uint32_t)(0x10b2dea8), (AL));
  /* 10b0ee89 mov dword ptr [0x10b2deac], 1 */
  w32((uint32_t)(0x10b2deac), (0x1u));
  /* 10b0ee93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ee95 jmp 0x10b0efc2 */
  goto L_10b0efc2;
L_10b0ee9a:;
  /* 10b0ee9a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ee9c mov ecx, dword ptr [0x10b2f740] */
  ECX = (r32((uint32_t)(0x10b2f740)));
  /* 10b0eea2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0eea3 call 0x10b04660 */
  push32(0x10b0eea8u); f_10b04660();
  /* 10b0eea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eeab push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eead mov edx, dword ptr [0x10b2f744] */
  EDX = (r32((uint32_t)(0x10b2f744)));
  /* 10b0eeb3 push edx */
  push32((uint32_t)(EDX));
  /* 10b0eeb4 call 0x10b04660 */
  push32(0x10b0eeb9u); f_10b04660();
  /* 10b0eeb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eebc push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eebe mov eax, dword ptr [0x10b2f748] */
  EAX = (r32((uint32_t)(0x10b2f748)));
  /* 10b0eec3 push eax */
  push32((uint32_t)(EAX));
  /* 10b0eec4 call 0x10b04660 */
  push32(0x10b0eec9u); f_10b04660();
  /* 10b0eec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0eecc mov dword ptr [0x10b2f740], 0 */
  w32((uint32_t)(0x10b2f740), (0x0u));
  /* 10b0eed6 mov dword ptr [0x10b2f744], 0 */
  w32((uint32_t)(0x10b2f744), (0x0u));
  /* 10b0eee0 mov dword ptr [0x10b2f748], 0 */
  w32((uint32_t)(0x10b2f748), (0x0u));
  /* 10b0eeea push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10b0eeef push 0x10b2b24c */
  push32((uint32_t)(0x10b2b24cu));
  /* 10b0eef4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eef6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0eef8 call 0x10b03bd0 */
  push32(0x10b0eefdu); f_10b03bd0();
  /* 10b0eefd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ef00 mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ef06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b0ef08 mov edx, dword ptr [0x10b2ed88] */
  EDX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ef0e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ef11 jne 0x10b0ef1b */
  if (!C.zf) goto L_10b0ef1b;
  /* 10b0ef13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ef16 jmp 0x10b0efc2 */
  goto L_10b0efc2;
L_10b0ef1b:;
  /* 10b0ef1b push 0x10b2b21c */
  push32((uint32_t)(0x10b2b21cu));
  /* 10b0ef20 mov eax, dword ptr [0x10b2ed88] */
  EAX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ef25 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b0ef27 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ef28 call 0x10b06b80 */
  push32(0x10b0ef2du); f_10b06b80();
  /* 10b0ef2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ef30 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10b0ef35 push 0x10b2b24c */
  push32((uint32_t)(0x10b2b24cu));
  /* 10b0ef3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ef3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ef3e call 0x10b03bd0 */
  push32(0x10b0ef43u); f_10b03bd0();
  /* 10b0ef43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ef46 mov edx, dword ptr [0x10b2ed88] */
  EDX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ef4c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10b0ef4f mov eax, dword ptr [0x10b2ed88] */
  EAX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ef54 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ef58 jne 0x10b0ef5f */
  if (!C.zf) goto L_10b0ef5f;
  /* 10b0ef5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ef5d jmp 0x10b0efc2 */
  goto L_10b0efc2;
L_10b0ef5f:;
  /* 10b0ef5f mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ef65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b0ef68 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b0ef6b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10b0ef70 push 0x10b2b24c */
  push32((uint32_t)(0x10b2b24cu));
  /* 10b0ef75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ef77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0ef79 call 0x10b03bd0 */
  push32(0x10b0ef7eu); f_10b03bd0();
  /* 10b0ef7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ef81 mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ef87 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10b0ef8a mov edx, dword ptr [0x10b2ed88] */
  EDX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0ef90 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ef94 jne 0x10b0ef9b */
  if (!C.zf) goto L_10b0ef9b;
  /* 10b0ef96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0ef99 jmp 0x10b0efc2 */
  goto L_10b0efc2;
L_10b0ef9b:;
  /* 10b0ef9b mov eax, dword ptr [0x10b2ed88] */
  EAX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0efa0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b0efa3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10b0efa6 mov edx, dword ptr [0x10b2ed88] */
  EDX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0efac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b0efae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b0efb0 mov byte ptr [0x10b2dea8], cl */
  w8((uint32_t)(0x10b2dea8), (CL));
  /* 10b0efb6 mov dword ptr [0x10b2deac], 1 */
  w32((uint32_t)(0x10b2deac), (0x1u));
  /* 10b0efc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0efc2:;
  /* 10b0efc2 mov esp, ebp */
  ESP = (EBP);
  /* 10b0efc4 pop ebp */
  EBP = (pop32());
  /* 10b0efc5 ret  */
  ESPCHK(0x10b0ed20u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10b0efd0 (125 bytes, 49 insns) */
void f_10b0efd0(void) {
  FTRACE(0x10b0efd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0efd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0efd1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0efd3 push ecx */
  push32((uint32_t)(ECX));
L_10b0efd4:;
  /* 10b0efd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0efd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0efda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0efdc je 0x10b0f049 */
  if (C.zf) goto L_10b0f049;
  /* 10b0efde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0efe1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b0efe4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0efe7 jl 0x10b0f00d */
  if ((C.sf!=C.of)) goto L_10b0f00d;
  /* 10b0efe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0efec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0efef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0eff2 jg 0x10b0f00d */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0f00d;
  /* 10b0eff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0eff7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0effa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0effd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f000 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b0f002 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f005 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f008 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b0f00b jmp 0x10b0f047 */
  goto L_10b0f047;
L_10b0f00d:;
  /* 10b0f00d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f010 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0f013 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f016 jne 0x10b0f03e */
  if (!C.zf) goto L_10b0f03e;
  /* 10b0f018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f01b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0f01e:;
  /* 10b0f01e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f021 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f024 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b0f027 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b0f029 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f02c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f02f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0f032 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f035 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b0f038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f03a jne 0x10b0f01e */
  if (!C.zf) goto L_10b0f01e;
  /* 10b0f03c jmp 0x10b0f047 */
  goto L_10b0f047;
L_10b0f03e:;
  /* 10b0f03e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f041 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f044 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10b0f047:;
  /* 10b0f047 jmp 0x10b0efd4 */
  goto L_10b0efd4;
L_10b0f049:;
  /* 10b0f049 mov esp, ebp */
  ESP = (EBP);
  /* 10b0f04b pop ebp */
  EBP = (pop32());
  /* 10b0f04c ret  */
  ESPCHK(0x10b0efd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f050 @ 0x10b0f050 (304 bytes, 85 insns) */
void f_10b0f050(void) {
  FTRACE(0x10b0f050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f050 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f051 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f053 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f054 cmp dword ptr [0x10b2f714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f05b je 0x10b0f11c */
  if (C.zf) goto L_10b0f11c;
  /* 10b0f061 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10b0f063 push 0x10b2b258 */
  push32((uint32_t)(0x10b2b258u));
  /* 10b0f068 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f06a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10b0f06c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f06e call 0x10b03fe0 */
  push32(0x10b0f073u); f_10b03fe0();
  /* 10b0f073 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f076 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0f079 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f07d jne 0x10b0f089 */
  if (!C.zf) goto L_10b0f089;
  /* 10b0f07f mov eax, 1 */
  EAX = (0x1u);
  /* 10b0f084 jmp 0x10b0f17c */
  goto L_10b0f17c;
L_10b0f089:;
  /* 10b0f089 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f08c push eax */
  push32((uint32_t)(EAX));
  /* 10b0f08d call 0x10b0f180 */
  push32(0x10b0f092u); f_10b0f180();
  /* 10b0f092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f097 je 0x10b0f0bd */
  if (C.zf) goto L_10b0f0bd;
  /* 10b0f099 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f09c push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f09d call 0x10b0f410 */
  push32(0x10b0f0a2u); f_10b0f410();
  /* 10b0f0a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f0a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f0a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f0aa push edx */
  push32((uint32_t)(EDX));
  /* 10b0f0ab call 0x10b04660 */
  push32(0x10b0f0b0u); f_10b04660();
  /* 10b0f0b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f0b3 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0f0b8 jmp 0x10b0f17c */
  goto L_10b0f17c;
L_10b0f0bd:;
  /* 10b0f0bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f0c0 mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0f0c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0f0c8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b0f0ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f0cd mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0f0d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b0f0d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10b0f0d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f0dc mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0f0e2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b0f0e5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10b0f0e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f0eb mov dword ptr [0x10b2ed88], eax */
  w32((uint32_t)(0x10b2ed88), (EAX));
  /* 10b0f0f0 mov ecx, dword ptr [0x10b2f74c] */
  ECX = (r32((uint32_t)(0x10b2f74c)));
  /* 10b0f0f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f0f7 call 0x10b0f410 */
  push32(0x10b0f0fcu); f_10b0f410();
  /* 10b0f0fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f0ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f101 mov edx, dword ptr [0x10b2f74c] */
  EDX = (r32((uint32_t)(0x10b2f74c)));
  /* 10b0f107 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f108 call 0x10b04660 */
  push32(0x10b0f10du); f_10b04660();
  /* 10b0f10d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f113 mov dword ptr [0x10b2f74c], eax */
  w32((uint32_t)(0x10b2f74c), (EAX));
  /* 10b0f118 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f11a jmp 0x10b0f17c */
  goto L_10b0f17c;
L_10b0f11c:;
  /* 10b0f11c mov ecx, dword ptr [0x10b2ed88] */
  ECX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0f122 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0f124 mov dword ptr [0x10b2ed58], edx */
  w32((uint32_t)(0x10b2ed58), (EDX));
  /* 10b0f12a mov eax, dword ptr [0x10b2ed88] */
  EAX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0f12f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b0f132 mov dword ptr [0x10b2ed5c], ecx */
  w32((uint32_t)(0x10b2ed5c), (ECX));
  /* 10b0f138 mov edx, dword ptr [0x10b2ed88] */
  EDX = (r32((uint32_t)(0x10b2ed88)));
  /* 10b0f13e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b0f141 mov dword ptr [0x10b2ed60], eax */
  w32((uint32_t)(0x10b2ed60), (EAX));
  /* 10b0f146 mov dword ptr [0x10b2ed88], 0x10b2ed58 */
  w32((uint32_t)(0x10b2ed88), (0x10b2ed58u));
  /* 10b0f150 mov ecx, dword ptr [0x10b2f74c] */
  ECX = (r32((uint32_t)(0x10b2f74c)));
  /* 10b0f156 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f157 call 0x10b0f410 */
  push32(0x10b0f15cu); f_10b0f410();
  /* 10b0f15c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f15f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f161 mov edx, dword ptr [0x10b2f74c] */
  EDX = (r32((uint32_t)(0x10b2f74c)));
  /* 10b0f167 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f168 call 0x10b04660 */
  push32(0x10b0f16du); f_10b04660();
  /* 10b0f16d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f170 mov dword ptr [0x10b2f74c], 0 */
  w32((uint32_t)(0x10b2f74c), (0x0u));
  /* 10b0f17a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0f17c:;
  /* 10b0f17c mov esp, ebp */
  ESP = (EBP);
  /* 10b0f17e pop ebp */
  EBP = (pop32());
  /* 10b0f17f ret  */
  ESPCHK(0x10b0f050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f180 @ 0x10b0f180 (525 bytes, 200 insns) */
void f_10b0f180(void) {
  FTRACE(0x10b0f180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f180 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f181 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0f186 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b0f18d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f18f mov ax, word ptr [0x10b2f76c] */
  AX = (r16((uint32_t)(0x10b2f76c)));
  /* 10b0f195 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0f198 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f19c jne 0x10b0f1a6 */
  if (!C.zf) goto L_10b0f1a6;
  /* 10b0f19e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f1a1 jmp 0x10b0f389 */
  goto L_10b0f389;
L_10b0f1a6:;
  /* 10b0f1a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f1a9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f1ac push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f1ad push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10b0f1af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f1b2 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f1b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f1b5 call 0x10b11d90 */
  push32(0x10b0f1bau); f_10b11d90();
  /* 10b0f1ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f1bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f1c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f1c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f1c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f1c8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f1cb push edx */
  push32((uint32_t)(EDX));
  /* 10b0f1cc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b0f1ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f1d1 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f1d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f1d4 call 0x10b11d90 */
  push32(0x10b0f1d9u); f_10b11d90();
  /* 10b0f1d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f1dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f1df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f1e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f1e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f1e7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f1ea push edx */
  push32((uint32_t)(EDX));
  /* 10b0f1eb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b0f1ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f1f0 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f1f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f1f3 call 0x10b11d90 */
  push32(0x10b0f1f8u); f_10b11d90();
  /* 10b0f1f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f1fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f1fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f200 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f206 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f209 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f20a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10b0f20c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f20f push eax */
  push32((uint32_t)(EAX));
  /* 10b0f210 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f212 call 0x10b11d90 */
  push32(0x10b0f217u); f_10b11d90();
  /* 10b0f217 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f21a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f21d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f21f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f222 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f225 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f228 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f229 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b0f22b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f22e push eax */
  push32((uint32_t)(EAX));
  /* 10b0f22f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f231 call 0x10b11d90 */
  push32(0x10b0f236u); f_10b11d90();
  /* 10b0f236 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f23c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f23e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f241 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f244 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10b0f247 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f248 call 0x10b0f390 */
  push32(0x10b0f24du); f_10b0f390();
  /* 10b0f24d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f250 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f253 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f256 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f257 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10b0f259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f25c push edx */
  push32((uint32_t)(EDX));
  /* 10b0f25d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f25f call 0x10b11d90 */
  push32(0x10b0f264u); f_10b11d90();
  /* 10b0f264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f267 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f26a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f26c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f26f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f272 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f275 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f276 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10b0f278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f27b push eax */
  push32((uint32_t)(EAX));
  /* 10b0f27c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f27e call 0x10b11d90 */
  push32(0x10b0f283u); f_10b11d90();
  /* 10b0f283 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f286 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f289 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f28b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f28e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f291 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f294 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f295 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10b0f297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f29a push eax */
  push32((uint32_t)(EAX));
  /* 10b0f29b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f29d call 0x10b11d90 */
  push32(0x10b0f2a2u); f_10b11d90();
  /* 10b0f2a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f2a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f2a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f2aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f2ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f2b0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f2b3 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f2b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b0f2b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f2b9 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f2ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f2bc call 0x10b11d90 */
  push32(0x10b0f2c1u); f_10b11d90();
  /* 10b0f2c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f2c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f2c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f2c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f2cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f2cf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f2d2 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f2d3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10b0f2d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f2d8 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f2d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f2db call 0x10b11d90 */
  push32(0x10b0f2e0u); f_10b11d90();
  /* 10b0f2e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f2e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f2e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f2e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f2eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f2ee add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f2f1 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f2f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10b0f2f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f2f7 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f2f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f2fa call 0x10b11d90 */
  push32(0x10b0f2ffu); f_10b11d90();
  /* 10b0f2ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f302 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f305 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f307 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f30a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f30d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f310 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f311 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10b0f313 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f316 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f317 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f319 call 0x10b11d90 */
  push32(0x10b0f31eu); f_10b11d90();
  /* 10b0f31e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f321 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f324 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f326 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f329 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f32c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f32f push edx */
  push32((uint32_t)(EDX));
  /* 10b0f330 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10b0f332 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f335 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f336 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f338 call 0x10b11d90 */
  push32(0x10b0f33du); f_10b11d90();
  /* 10b0f33d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f340 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f343 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f345 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f34b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f34e push edx */
  push32((uint32_t)(EDX));
  /* 10b0f34f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10b0f351 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f354 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f355 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f357 call 0x10b11d90 */
  push32(0x10b0f35cu); f_10b11d90();
  /* 10b0f35c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f35f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f362 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f364 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f367 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f36a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f36d push edx */
  push32((uint32_t)(EDX));
  /* 10b0f36e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10b0f370 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f373 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f374 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f376 call 0x10b11d90 */
  push32(0x10b0f37bu); f_10b11d90();
  /* 10b0f37b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f37e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f381 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f383 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b0f386 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10b0f389:;
  /* 10b0f389 mov esp, ebp */
  ESP = (EBP);
  /* 10b0f38b pop ebp */
  EBP = (pop32());
  /* 10b0f38c ret  */
  ESPCHK(0x10b0f180u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10b0f390 (125 bytes, 49 insns) */
void f_10b0f390(void) {
  FTRACE(0x10b0f390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f390 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f391 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f393 push ecx */
  push32((uint32_t)(ECX));
L_10b0f394:;
  /* 10b0f394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f397 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0f39a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0f39c je 0x10b0f409 */
  if (C.zf) goto L_10b0f409;
  /* 10b0f39e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f3a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b0f3a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f3a7 jl 0x10b0f3cd */
  if ((C.sf!=C.of)) goto L_10b0f3cd;
  /* 10b0f3a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f3ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0f3af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f3b2 jg 0x10b0f3cd */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0f3cd;
  /* 10b0f3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f3b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0f3ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0f3bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f3c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10b0f3c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f3c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f3c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b0f3cb jmp 0x10b0f407 */
  goto L_10b0f407;
L_10b0f3cd:;
  /* 10b0f3cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f3d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0f3d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f3d6 jne 0x10b0f3fe */
  if (!C.zf) goto L_10b0f3fe;
  /* 10b0f3d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f3db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0f3de:;
  /* 10b0f3de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f3e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f3e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b0f3e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10b0f3e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f3ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f3ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b0f3f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0f3f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b0f3f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f3fa jne 0x10b0f3de */
  if (!C.zf) goto L_10b0f3de;
  /* 10b0f3fc jmp 0x10b0f407 */
  goto L_10b0f407;
L_10b0f3fe:;
  /* 10b0f3fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f401 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f404 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10b0f407:;
  /* 10b0f407 jmp 0x10b0f394 */
  goto L_10b0f394;
L_10b0f409:;
  /* 10b0f409 mov esp, ebp */
  ESP = (EBP);
  /* 10b0f40b pop ebp */
  EBP = (pop32());
  /* 10b0f40c ret  */
  ESPCHK(0x10b0f390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f410 @ 0x10b0f410 (147 bytes, 52 insns) */
void f_10b0f410(void) {
  FTRACE(0x10b0f410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f410 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f411 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f413 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f417 jne 0x10b0f41e */
  if (!C.zf) goto L_10b0f41e;
  /* 10b0f419 jmp 0x10b0f4a1 */
  goto L_10b0f4a1;
L_10b0f41e:;
  /* 10b0f41e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f421 cmp dword ptr [eax + 0xc], 0x10b2f7a8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10b2f7a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f428 je 0x10b0f4a1 */
  if (C.zf) goto L_10b0f4a1;
  /* 10b0f42a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f42c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f42f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b0f432 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f433 call 0x10b04660 */
  push32(0x10b0f438u); f_10b04660();
  /* 10b0f438 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f43b push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f43d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f440 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b0f443 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f444 call 0x10b04660 */
  push32(0x10b0f449u); f_10b04660();
  /* 10b0f449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f44c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f44e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f451 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10b0f454 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f455 call 0x10b04660 */
  push32(0x10b0f45au); f_10b04660();
  /* 10b0f45a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f45d push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f45f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f462 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b0f465 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f466 call 0x10b04660 */
  push32(0x10b0f46bu); f_10b04660();
  /* 10b0f46b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f46e push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f473 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10b0f476 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f477 call 0x10b04660 */
  push32(0x10b0f47cu); f_10b04660();
  /* 10b0f47c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f47f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f481 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f484 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10b0f487 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f488 call 0x10b04660 */
  push32(0x10b0f48du); f_10b04660();
  /* 10b0f48d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f490 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f492 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f495 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10b0f498 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f499 call 0x10b04660 */
  push32(0x10b0f49eu); f_10b04660();
  /* 10b0f49e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0f4a1:;
  /* 10b0f4a1 pop ebp */
  EBP = (pop32());
  /* 10b0f4a2 ret  */
  ESPCHK(0x10b0f410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4b0 @ 0x10b0f4b0 (928 bytes, 284 insns) */
void f_10b0f4b0(void) {
  FTRACE(0x10b0f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f4b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0f4b6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10b0f4bd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10b0f4c4 cmp dword ptr [0x10b2f710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f4cb je 0x10b0f801 */
  if (C.zf) goto L_10b0f801;
  /* 10b0f4d1 cmp dword ptr [0x10b2f720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f4d8 jne 0x10b0f500 */
  if (!C.zf) goto L_10b0f500;
  /* 10b0f4da push 0x10b2f720 */
  push32((uint32_t)(0x10b2f720u));
  /* 10b0f4df push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10b0f4e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f4e6 mov ax, word ptr [0x10b2f764] */
  AX = (r16((uint32_t)(0x10b2f764)));
  /* 10b0f4ec push eax */
  push32((uint32_t)(EAX));
  /* 10b0f4ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f4ef call 0x10b11d90 */
  push32(0x10b0f4f4u); f_10b11d90();
  /* 10b0f4f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f4f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f4f9 je 0x10b0f500 */
  if (C.zf) goto L_10b0f500;
  /* 10b0f4fb jmp 0x10b0f7c2 */
  goto L_10b0f7c2;
L_10b0f500:;
  /* 10b0f500 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10b0f502 push 0x10b2b264 */
  push32((uint32_t)(0x10b2b264u));
  /* 10b0f507 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f509 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10b0f50e call 0x10b03bd0 */
  push32(0x10b0f513u); f_10b03bd0();
  /* 10b0f513 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f516 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10b0f519 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10b0f51b push 0x10b2b264 */
  push32((uint32_t)(0x10b2b264u));
  /* 10b0f520 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f522 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10b0f527 call 0x10b03bd0 */
  push32(0x10b0f52cu); f_10b03bd0();
  /* 10b0f52c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f52f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10b0f532 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10b0f534 push 0x10b2b264 */
  push32((uint32_t)(0x10b2b264u));
  /* 10b0f539 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f53b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10b0f540 call 0x10b03bd0 */
  push32(0x10b0f545u); f_10b03bd0();
  /* 10b0f545 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f548 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10b0f54b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10b0f54d push 0x10b2b264 */
  push32((uint32_t)(0x10b2b264u));
  /* 10b0f552 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f554 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10b0f559 call 0x10b03bd0 */
  push32(0x10b0f55eu); f_10b03bd0();
  /* 10b0f55e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f561 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10b0f564 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f568 je 0x10b0f57c */
  if (C.zf) goto L_10b0f57c;
  /* 10b0f56a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f56e je 0x10b0f57c */
  if (C.zf) goto L_10b0f57c;
  /* 10b0f570 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f574 je 0x10b0f57c */
  if (C.zf) goto L_10b0f57c;
  /* 10b0f576 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f57a jne 0x10b0f581 */
  if (!C.zf) goto L_10b0f581;
L_10b0f57c:;
  /* 10b0f57c jmp 0x10b0f7c2 */
  goto L_10b0f7c2;
L_10b0f581:;
  /* 10b0f581 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0f584 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10b0f587 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b0f58e jmp 0x10b0f599 */
  goto L_10b0f599;
L_10b0f590:;
  /* 10b0f590 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0f593 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f596 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10b0f599:;
  /* 10b0f599 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f5a0 jge 0x10b0f5b5 */
  if ((C.sf==C.of)) goto L_10b0f5b5;
  /* 10b0f5a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f5a5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10b0f5a8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10b0f5aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f5ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f5b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b0f5b3 jmp 0x10b0f590 */
  goto L_10b0f590;
L_10b0f5b5:;
  /* 10b0f5b5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10b0f5b8 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f5b9 mov ecx, dword ptr [0x10b2f720] */
  ECX = (r32((uint32_t)(0x10b2f720)));
  /* 10b0f5bf push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f5c0 call dword ptr [0x10b322f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322f8))), 0x10b0f5c6u);
  /* 10b0f5c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f5c8 jne 0x10b0f5cf */
  if (!C.zf) goto L_10b0f5cf;
  /* 10b0f5ca jmp 0x10b0f7c2 */
  goto L_10b0f7c2;
L_10b0f5cf:;
  /* 10b0f5cf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f5d3 jbe 0x10b0f5da */
  if ((C.cf||C.zf)) goto L_10b0f5da;
  /* 10b0f5d5 jmp 0x10b0f7c2 */
  goto L_10b0f7c2;
L_10b0f5da:;
  /* 10b0f5da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b0f5dd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b0f5e3 mov dword ptr [0x10b2dea4], edx */
  w32((uint32_t)(0x10b2dea4), (EDX));
  /* 10b0f5e9 cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f5f0 jle 0x10b0f649 */
  if ((C.zf||C.sf!=C.of)) goto L_10b0f649;
  /* 10b0f5f2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10b0f5f5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10b0f5f8 jmp 0x10b0f603 */
  goto L_10b0f603;
L_10b0f5fa:;
  /* 10b0f5fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f5fd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f600 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10b0f603:;
  /* 10b0f603 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f608 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b0f60a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f60c je 0x10b0f649 */
  if (C.zf) goto L_10b0f649;
  /* 10b0f60e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f611 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0f613 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b0f616 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0f618 je 0x10b0f649 */
  if (C.zf) goto L_10b0f649;
  /* 10b0f61a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f61d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f61f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b0f621 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10b0f624 jmp 0x10b0f62f */
  goto L_10b0f62f;
L_10b0f626:;
  /* 10b0f626 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0f629 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f62c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10b0f62f:;
  /* 10b0f62f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f632 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f634 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b0f637 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f63a jg 0x10b0f647 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0f647;
  /* 10b0f63c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0f63f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f642 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10b0f645 jmp 0x10b0f626 */
  goto L_10b0f626;
L_10b0f647:;
  /* 10b0f647 jmp 0x10b0f5fa */
  goto L_10b0f5fa;
L_10b0f649:;
  /* 10b0f649 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f64b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f64d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f64f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0f652 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f655 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f656 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0f65b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0f65e push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f65f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f661 call 0x10b0be00 */
  push32(0x10b0f666u); f_10b0be00();
  /* 10b0f666 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f669 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f66b jne 0x10b0f672 */
  if (!C.zf) goto L_10b0f672;
  /* 10b0f66d jmp 0x10b0f7c2 */
  goto L_10b0f7c2;
L_10b0f672:;
  /* 10b0f672 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0f675 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10b0f67a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0f67d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b0f680 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10b0f687 jmp 0x10b0f692 */
  goto L_10b0f692;
L_10b0f689:;
  /* 10b0f689 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0f68c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f68f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10b0f692:;
  /* 10b0f692 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f699 jge 0x10b0f6b0 */
  if ((C.sf==C.of)) goto L_10b0f6b0;
  /* 10b0f69b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0f69e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10b0f6a2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10b0f6a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10b0f6a8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f6ab mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10b0f6ae jmp 0x10b0f689 */
  goto L_10b0f689;
L_10b0f6b0:;
  /* 10b0f6b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f6b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0f6b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0f6b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f6ba push edx */
  push32((uint32_t)(EDX));
  /* 10b0f6bb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10b0f6c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0f6c3 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f6c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0f6c6 call 0x10b12030 */
  push32(0x10b0f6cbu); f_10b12030();
  /* 10b0f6cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f6ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f6d0 jne 0x10b0f6d7 */
  if (!C.zf) goto L_10b0f6d7;
  /* 10b0f6d2 jmp 0x10b0f7c2 */
  goto L_10b0f7c2;
L_10b0f6d7:;
  /* 10b0f6d7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0f6da mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10b0f6df cmp dword ptr [0x10b2dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b2dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f6e6 jle 0x10b0f743 */
  if ((C.zf||C.sf!=C.of)) goto L_10b0f743;
  /* 10b0f6e8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10b0f6eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10b0f6ee jmp 0x10b0f6f9 */
  goto L_10b0f6f9;
L_10b0f6f0:;
  /* 10b0f6f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f6f3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f6f6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10b0f6f9:;
  /* 10b0f6f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f6fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b0f6fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b0f700 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0f702 je 0x10b0f743 */
  if (C.zf) goto L_10b0f743;
  /* 10b0f704 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f707 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f709 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b0f70c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0f70e je 0x10b0f743 */
  if (C.zf) goto L_10b0f743;
  /* 10b0f710 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f715 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b0f717 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b0f71a jmp 0x10b0f725 */
  goto L_10b0f725;
L_10b0f71c:;
  /* 10b0f71c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0f71f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f722 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10b0f725:;
  /* 10b0f725 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10b0f728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f72a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10b0f72d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f730 jg 0x10b0f741 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0f741;
  /* 10b0f732 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10b0f735 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0f738 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10b0f73f jmp 0x10b0f71c */
  goto L_10b0f71c;
L_10b0f741:;
  /* 10b0f741 jmp 0x10b0f6f0 */
  goto L_10b0f6f0;
L_10b0f743:;
  /* 10b0f743 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0f746 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f749 mov dword ptr [0x10b2dc98], eax */
  w32((uint32_t)(0x10b2dc98), (EAX));
  /* 10b0f74e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0f751 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f754 mov dword ptr [0x10b2dc9c], ecx */
  w32((uint32_t)(0x10b2dc9c), (ECX));
  /* 10b0f75a cmp dword ptr [0x10b2f750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f761 je 0x10b0f774 */
  if (C.zf) goto L_10b0f774;
  /* 10b0f763 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f765 mov edx, dword ptr [0x10b2f750] */
  EDX = (r32((uint32_t)(0x10b2f750)));
  /* 10b0f76b push edx */
  push32((uint32_t)(EDX));
  /* 10b0f76c call 0x10b04660 */
  push32(0x10b0f771u); f_10b04660();
  /* 10b0f771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0f774:;
  /* 10b0f774 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0f777 mov dword ptr [0x10b2f750], eax */
  w32((uint32_t)(0x10b2f750), (EAX));
  /* 10b0f77c cmp dword ptr [0x10b2f754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f783 je 0x10b0f796 */
  if (C.zf) goto L_10b0f796;
  /* 10b0f785 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f787 mov ecx, dword ptr [0x10b2f754] */
  ECX = (r32((uint32_t)(0x10b2f754)));
  /* 10b0f78d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f78e call 0x10b04660 */
  push32(0x10b0f793u); f_10b04660();
  /* 10b0f793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0f796:;
  /* 10b0f796 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0f799 mov dword ptr [0x10b2f754], edx */
  w32((uint32_t)(0x10b2f754), (EDX));
  /* 10b0f79f push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f7a1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0f7a4 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f7a5 call 0x10b04660 */
  push32(0x10b0f7aau); f_10b04660();
  /* 10b0f7aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f7ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f7af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0f7b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f7b3 call 0x10b04660 */
  push32(0x10b0f7b8u); f_10b04660();
  /* 10b0f7b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f7bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f7bd jmp 0x10b0f84c */
  goto L_10b0f84c;
L_10b0f7c2:;
  /* 10b0f7c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f7c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10b0f7c7 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f7c8 call 0x10b04660 */
  push32(0x10b0f7cdu); f_10b04660();
  /* 10b0f7cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f7d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f7d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10b0f7d5 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f7d6 call 0x10b04660 */
  push32(0x10b0f7dbu); f_10b04660();
  /* 10b0f7db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f7de push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f7e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10b0f7e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f7e4 call 0x10b04660 */
  push32(0x10b0f7e9u); f_10b04660();
  /* 10b0f7e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f7ec push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f7ee mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10b0f7f1 push edx */
  push32((uint32_t)(EDX));
  /* 10b0f7f2 call 0x10b04660 */
  push32(0x10b0f7f7u); f_10b04660();
  /* 10b0f7f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f7fa mov eax, 1 */
  EAX = (0x1u);
  /* 10b0f7ff jmp 0x10b0f84c */
  goto L_10b0f84c;
L_10b0f801:;
  /* 10b0f801 mov dword ptr [0x10b2dc98], 0x10b2dca2 */
  w32((uint32_t)(0x10b2dc98), (0x10b2dca2u));
  /* 10b0f80b mov dword ptr [0x10b2dc9c], 0x10b2dca2 */
  w32((uint32_t)(0x10b2dc9c), (0x10b2dca2u));
  /* 10b0f815 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f817 mov eax, dword ptr [0x10b2f750] */
  EAX = (r32((uint32_t)(0x10b2f750)));
  /* 10b0f81c push eax */
  push32((uint32_t)(EAX));
  /* 10b0f81d call 0x10b04660 */
  push32(0x10b0f822u); f_10b04660();
  /* 10b0f822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f825 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b0f827 mov ecx, dword ptr [0x10b2f754] */
  ECX = (r32((uint32_t)(0x10b2f754)));
  /* 10b0f82d push ecx */
  push32((uint32_t)(ECX));
  /* 10b0f82e call 0x10b04660 */
  push32(0x10b0f833u); f_10b04660();
  /* 10b0f833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f836 mov dword ptr [0x10b2f750], 0 */
  w32((uint32_t)(0x10b2f750), (0x0u));
  /* 10b0f840 mov dword ptr [0x10b2f754], 0 */
  w32((uint32_t)(0x10b2f754), (0x0u));
  /* 10b0f84a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b0f84c:;
  /* 10b0f84c mov esp, ebp */
  ESP = (EBP);
  /* 10b0f84e pop ebp */
  EBP = (pop32());
  /* 10b0f84f ret  */
  ESPCHK(0x10b0f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f850 @ 0x10b0f850 (7 bytes, 5 insns) */
void f_10b0f850(void) {
  FTRACE(0x10b0f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f850 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f851 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f855 pop ebp */
  EBP = (pop32());
  /* 10b0f856 ret  */
  ESPCHK(0x10b0f850u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10b0f860 (129 bytes, 56 insns) */
void f_10b0f860(void) {
  FTRACE(0x10b0f860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f860 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b0f864 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b0f868 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10b0f86e jne 0x10b0f8ac */
  if (!C.zf) goto L_10b0f8ac;
L_10b0f870:;
  /* 10b0f870 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10b0f872 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b0f874 jne 0x10b0f8a4 */
  if (!C.zf) goto L_10b0f8a4;
  /* 10b0f876 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b0f878 je 0x10b0f8a0 */
  if (C.zf) goto L_10b0f8a0;
  /* 10b0f87a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b0f87d jne 0x10b0f8a4 */
  if (!C.zf) goto L_10b0f8a4;
  /* 10b0f87f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10b0f881 je 0x10b0f8a0 */
  if (C.zf) goto L_10b0f8a0;
  /* 10b0f883 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b0f886 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b0f889 jne 0x10b0f8a4 */
  if (!C.zf) goto L_10b0f8a4;
  /* 10b0f88b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b0f88d je 0x10b0f8a0 */
  if (C.zf) goto L_10b0f8a0;
  /* 10b0f88f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b0f892 jne 0x10b0f8a4 */
  if (!C.zf) goto L_10b0f8a4;
  /* 10b0f894 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f897 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f89a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10b0f89c jne 0x10b0f870 */
  if (!C.zf) goto L_10b0f870;
  /* 10b0f89e mov edi, edi */
  EDI = (EDI);
L_10b0f8a0:;
  /* 10b0f8a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f8a2 ret  */
  ESPCHK(0x10b0f860u, _esp0);
  ESP += 4; return;
  /* 10b0f8a3 nop  */
  /* nop */
L_10b0f8a4:;
  /* 10b0f8a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0f8a6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b0f8a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b0f8a9 ret  */
  ESPCHK(0x10b0f860u, _esp0);
  ESP += 4; return;
  /* 10b0f8aa mov edi, edi */
  EDI = (EDI);
L_10b0f8ac:;
  /* 10b0f8ac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10b0f8b2 je 0x10b0f8c8 */
  if (C.zf) goto L_10b0f8c8;
  /* 10b0f8b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b0f8b6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b0f8b7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b0f8b9 jne 0x10b0f8a4 */
  if (!C.zf) goto L_10b0f8a4;
  /* 10b0f8bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b0f8bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b0f8be je 0x10b0f8a0 */
  if (C.zf) goto L_10b0f8a0;
  /* 10b0f8c0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10b0f8c6 je 0x10b0f870 */
  if (C.zf) goto L_10b0f870;
L_10b0f8c8:;
  /* 10b0f8c8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10b0f8cb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f8ce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b0f8d0 jne 0x10b0f8a4 */
  if (!C.zf) goto L_10b0f8a4;
  /* 10b0f8d2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b0f8d4 je 0x10b0f8a0 */
  if (C.zf) goto L_10b0f8a0;
  /* 10b0f8d6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b0f8d9 jne 0x10b0f8a4 */
  if (!C.zf) goto L_10b0f8a4;
  /* 10b0f8db or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10b0f8dd je 0x10b0f8a0 */
  if (C.zf) goto L_10b0f8a0;
  /* 10b0f8df add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f8e2 jmp 0x10b0f870 */
  goto L_10b0f870;
}

/* FUN_1000f8f0 @ 0x10b0f8f0 (62 bytes, 35 insns) */
void f_10b0f8f0(void) {
  FTRACE(0x10b0f8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f8f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f8f3 push esi */
  push32((uint32_t)(ESI));
  /* 10b0f8f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f8f6 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f8f7 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f8f8 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f8f9 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f8fa push eax */
  push32((uint32_t)(EAX));
  /* 10b0f8fb push eax */
  push32((uint32_t)(EAX));
  /* 10b0f8fc push eax */
  push32((uint32_t)(EAX));
  /* 10b0f8fd push eax */
  push32((uint32_t)(EAX));
  /* 10b0f8fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0f901 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0f904:;
  /* 10b0f904 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b0f906 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b0f908 je 0x10b0f911 */
  if (C.zf) goto L_10b0f911;
  /* 10b0f90a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b0f90b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10b0f90b");
  /* 10b0f90f jmp 0x10b0f904 */
  goto L_10b0f904;
L_10b0f911:;
  /* 10b0f911 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f914 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f917 nop  */
  /* nop */
L_10b0f918:;
  /* 10b0f918 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b0f919 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0f91b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b0f91d je 0x10b0f926 */
  if (C.zf) goto L_10b0f926;
  /* 10b0f91f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b0f920 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10b0f920");
  /* 10b0f924 jae 0x10b0f918 */
  if (!C.cf) goto L_10b0f918;
L_10b0f926:;
  /* 10b0f926 mov eax, ecx */
  EAX = (ECX);
  /* 10b0f928 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f92b pop esi */
  ESI = (pop32());
  /* 10b0f92c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0f92d ret  */
  ESPCHK(0x10b0f8f0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10b0f930 (56 bytes, 31 insns) */
void f_10b0f930(void) {
  FTRACE(0x10b0f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f930 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f931 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f933 push edi */
  push32((uint32_t)(EDI));
  /* 10b0f934 push esi */
  push32((uint32_t)(ESI));
  /* 10b0f935 push ebx */
  push32((uint32_t)(EBX));
  /* 10b0f936 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0f939 jecxz 0x10b0f961 */
  x86_unimpl("jecxz @ 0x10b0f939");
  /* 10b0f93b mov ebx, ecx */
  EBX = (ECX);
  /* 10b0f93d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f940 mov esi, edi */
  ESI = (EDI);
  /* 10b0f942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f944 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10b0f946 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0f948 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f94a mov edi, esi */
  EDI = (ESI);
  /* 10b0f94c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0f94f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10b0f951 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10b0f954 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0f956 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b0f959 ja 0x10b0f95f */
  if ((!C.cf&&!C.zf)) goto L_10b0f95f;
  /* 10b0f95b je 0x10b0f961 */
  if (C.zf) goto L_10b0f961;
  /* 10b0f95d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b0f95e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10b0f95f:;
  /* 10b0f95f not ecx */
  ECX = (~(ECX));
L_10b0f961:;
  /* 10b0f961 mov eax, ecx */
  EAX = (ECX);
  /* 10b0f963 pop ebx */
  EBX = (pop32());
  /* 10b0f964 pop esi */
  ESI = (pop32());
  /* 10b0f965 pop edi */
  EDI = (pop32());
  /* 10b0f966 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0f967 ret  */
  ESPCHK(0x10b0f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f970 @ 0x10b0f970 (58 bytes, 32 insns) */
void f_10b0f970(void) {
  FTRACE(0x10b0f970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f970 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f971 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f973 push esi */
  push32((uint32_t)(ESI));
  /* 10b0f974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0f976 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f977 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f978 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f979 push eax */
  push32((uint32_t)(EAX));
  /* 10b0f97a push eax */
  push32((uint32_t)(EAX));
  /* 10b0f97b push eax */
  push32((uint32_t)(EAX));
  /* 10b0f97c push eax */
  push32((uint32_t)(EAX));
  /* 10b0f97d push eax */
  push32((uint32_t)(EAX));
  /* 10b0f97e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0f981 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b0f984:;
  /* 10b0f984 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b0f986 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b0f988 je 0x10b0f991 */
  if (C.zf) goto L_10b0f991;
  /* 10b0f98a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b0f98b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10b0f98b");
  /* 10b0f98f jmp 0x10b0f984 */
  goto L_10b0f984;
L_10b0f991:;
  /* 10b0f991 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10b0f994:;
  /* 10b0f994 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b0f996 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10b0f998 je 0x10b0f9a4 */
  if (C.zf) goto L_10b0f9a4;
  /* 10b0f99a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b0f99b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10b0f99b");
  /* 10b0f99f jae 0x10b0f994 */
  if (!C.cf) goto L_10b0f994;
  /* 10b0f9a1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10b0f9a4:;
  /* 10b0f9a4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0f9a7 pop esi */
  ESI = (pop32());
  /* 10b0f9a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b0f9a9 ret  */
  ESPCHK(0x10b0f970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9b0 @ 0x10b0f9b0 (512 bytes, 147 insns) */
void f_10b0f9b0(void) {
  FTRACE(0x10b0f9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0f9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0f9b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0f9b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0f9b6 cmp dword ptr [0x10b2f79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f9bd jne 0x10b0f9e2 */
  if (!C.zf) goto L_10b0f9e2;
  /* 10b0f9bf call 0x10b10480 */
  push32(0x10b0f9c4u); f_10b10480();
  /* 10b0f9c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0f9c6 je 0x10b0f9d2 */
  if (C.zf) goto L_10b0f9d2;
  /* 10b0f9c8 mov eax, dword ptr [0x10b322bc] */
  EAX = (r32((uint32_t)(0x10b322bc)));
  /* 10b0f9cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0f9d0 jmp 0x10b0f9d9 */
  goto L_10b0f9d9;
L_10b0f9d2:;
  /* 10b0f9d2 mov dword ptr [ebp - 8], 0x10b104d0 */
  w32((uint32_t)(EBP + -0x8), (0x10b104d0u));
L_10b0f9d9:;
  /* 10b0f9d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b0f9dc mov dword ptr [0x10b2f79c], ecx */
  w32((uint32_t)(0x10b2f79c), (ECX));
L_10b0f9e2:;
  /* 10b0f9e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0f9e6 jne 0x10b0f9f2 */
  if (!C.zf) goto L_10b0f9f2;
  /* 10b0f9e8 call 0x10b102d0 */
  push32(0x10b0f9edu); f_10b102d0();
  /* 10b0f9ed jmp 0x10b0fabe */
  goto L_10b0fabe;
L_10b0f9f2:;
  /* 10b0f9f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0f9f5 mov dword ptr [0x10b2f78c], edx */
  w32((uint32_t)(0x10b2f78c), (EDX));
  /* 10b0f9fb cmp dword ptr [0x10b2f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fa02 je 0x10b0fa24 */
  if (C.zf) goto L_10b0fa24;
  /* 10b0fa04 mov eax, dword ptr [0x10b2f78c] */
  EAX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0fa09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0fa0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0fa0e je 0x10b0fa24 */
  if (C.zf) goto L_10b0fa24;
  /* 10b0fa10 push 0x10b2f78c */
  push32((uint32_t)(0x10b2f78cu));
  /* 10b0fa15 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b0fa17 push 0x10b2ea90 */
  push32((uint32_t)(0x10b2ea90u));
  /* 10b0fa1c call 0x10b0fbb0 */
  push32(0x10b0fa21u); f_10b0fbb0();
  /* 10b0fa21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0fa24:;
  /* 10b0fa24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0fa27 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fa2a mov dword ptr [0x10b2f790], edx */
  w32((uint32_t)(0x10b2f790), (EDX));
  /* 10b0fa30 cmp dword ptr [0x10b2f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fa37 je 0x10b0fa59 */
  if (C.zf) goto L_10b0fa59;
  /* 10b0fa39 mov eax, dword ptr [0x10b2f790] */
  EAX = (r32((uint32_t)(0x10b2f790)));
  /* 10b0fa3e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0fa41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0fa43 je 0x10b0fa59 */
  if (C.zf) goto L_10b0fa59;
  /* 10b0fa45 push 0x10b2f790 */
  push32((uint32_t)(0x10b2f790u));
  /* 10b0fa4a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b0fa4c push 0x10b2e9d8 */
  push32((uint32_t)(0x10b2e9d8u));
  /* 10b0fa51 call 0x10b0fbb0 */
  push32(0x10b0fa56u); f_10b0fbb0();
  /* 10b0fa56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0fa59:;
  /* 10b0fa59 mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
  /* 10b0fa63 cmp dword ptr [0x10b2f78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fa6a je 0x10b0fa9d */
  if (C.zf) goto L_10b0fa9d;
  /* 10b0fa6c mov edx, dword ptr [0x10b2f78c] */
  EDX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0fa72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10b0fa75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fa77 je 0x10b0fa9d */
  if (C.zf) goto L_10b0fa9d;
  /* 10b0fa79 cmp dword ptr [0x10b2f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fa80 je 0x10b0fa96 */
  if (C.zf) goto L_10b0fa96;
  /* 10b0fa82 mov ecx, dword ptr [0x10b2f790] */
  ECX = (r32((uint32_t)(0x10b2f790)));
  /* 10b0fa88 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10b0fa8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0fa8d je 0x10b0fa96 */
  if (C.zf) goto L_10b0fa96;
  /* 10b0fa8f call 0x10b0fc40 */
  push32(0x10b0fa94u); f_10b0fc40();
  /* 10b0fa94 jmp 0x10b0fa9b */
  goto L_10b0fa9b;
L_10b0fa96:;
  /* 10b0fa96 call 0x10b10030 */
  push32(0x10b0fa9bu); f_10b10030();
L_10b0fa9b:;
  /* 10b0fa9b jmp 0x10b0fabe */
  goto L_10b0fabe;
L_10b0fa9d:;
  /* 10b0fa9d cmp dword ptr [0x10b2f790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0faa4 je 0x10b0fab9 */
  if (C.zf) goto L_10b0fab9;
  /* 10b0faa6 mov eax, dword ptr [0x10b2f790] */
  EAX = (r32((uint32_t)(0x10b2f790)));
  /* 10b0faab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b0faae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0fab0 je 0x10b0fab9 */
  if (C.zf) goto L_10b0fab9;
  /* 10b0fab2 call 0x10b101d0 */
  push32(0x10b0fab7u); f_10b101d0();
  /* 10b0fab7 jmp 0x10b0fabe */
  goto L_10b0fabe;
L_10b0fab9:;
  /* 10b0fab9 call 0x10b102d0 */
  push32(0x10b0fabeu); f_10b102d0();
L_10b0fabe:;
  /* 10b0fabe cmp dword ptr [0x10b2f794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fac5 jne 0x10b0face */
  if (!C.zf) goto L_10b0face;
  /* 10b0fac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0fac9 jmp 0x10b0fbac */
  goto L_10b0fbac;
L_10b0face:;
  /* 10b0face mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0fad1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fad7 push edx */
  push32((uint32_t)(EDX));
  /* 10b0fad8 call 0x10b10300 */
  push32(0x10b0faddu); f_10b10300();
  /* 10b0fadd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fae0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0fae3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fae7 je 0x10b0fafc */
  if (C.zf) goto L_10b0fafc;
  /* 10b0fae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0faec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b0faf1 push eax */
  push32((uint32_t)(EAX));
  /* 10b0faf2 call dword ptr [0x10b322c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322c0))), 0x10b0faf8u);
  /* 10b0faf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fafa jne 0x10b0fb03 */
  if (!C.zf) goto L_10b0fb03;
L_10b0fafc:;
  /* 10b0fafc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0fafe jmp 0x10b0fbac */
  goto L_10b0fbac;
L_10b0fb03:;
  /* 10b0fb03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0fb05 mov ecx, dword ptr [0x10b2f77c] */
  ECX = (r32((uint32_t)(0x10b2f77c)));
  /* 10b0fb0b push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fb0c call dword ptr [0x10b322d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322d0))), 0x10b0fb12u);
  /* 10b0fb12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fb14 jne 0x10b0fb1d */
  if (!C.zf) goto L_10b0fb1d;
  /* 10b0fb16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0fb18 jmp 0x10b0fbac */
  goto L_10b0fbac;
L_10b0fb1d:;
  /* 10b0fb1d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fb21 je 0x10b0fb48 */
  if (C.zf) goto L_10b0fb48;
  /* 10b0fb23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0fb26 mov ax, word ptr [0x10b2f77c] */
  AX = (r16((uint32_t)(0x10b2f77c)));
  /* 10b0fb2c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10b0fb2f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0fb32 mov dx, word ptr [0x10b2f798] */
  DX = (r16((uint32_t)(0x10b2f798)));
  /* 10b0fb39 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10b0fb3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b0fb40 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10b0fb44 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10b0fb48:;
  /* 10b0fb48 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fb4c je 0x10b0fba7 */
  if (C.zf) goto L_10b0fba7;
  /* 10b0fb4e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b0fb50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0fb53 push edx */
  push32((uint32_t)(EDX));
  /* 10b0fb54 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10b0fb59 mov eax, dword ptr [0x10b2f77c] */
  EAX = (r32((uint32_t)(0x10b2f77c)));
  /* 10b0fb5e push eax */
  push32((uint32_t)(EAX));
  /* 10b0fb5f call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b0fb65u);
  /* 10b0fb65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fb67 jne 0x10b0fb6d */
  if (!C.zf) goto L_10b0fb6d;
  /* 10b0fb69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0fb6b jmp 0x10b0fbac */
  goto L_10b0fbac;
L_10b0fb6d:;
  /* 10b0fb6d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b0fb6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0fb72 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fb75 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fb76 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10b0fb7b mov edx, dword ptr [0x10b2f798] */
  EDX = (r32((uint32_t)(0x10b2f798)));
  /* 10b0fb81 push edx */
  push32((uint32_t)(EDX));
  /* 10b0fb82 call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b0fb88u);
  /* 10b0fb88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fb8a jne 0x10b0fb90 */
  if (!C.zf) goto L_10b0fb90;
  /* 10b0fb8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b0fb8e jmp 0x10b0fbac */
  goto L_10b0fbac;
L_10b0fb90:;
  /* 10b0fb90 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b0fb92 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0fb95 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fb9a push eax */
  push32((uint32_t)(EAX));
  /* 10b0fb9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0fb9e push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fb9f call 0x10b06710 */
  push32(0x10b0fba4u); f_10b06710();
  /* 10b0fba4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b0fba7:;
  /* 10b0fba7 mov eax, 1 */
  EAX = (0x1u);
L_10b0fbac:;
  /* 10b0fbac mov esp, ebp */
  ESP = (EBP);
  /* 10b0fbae pop ebp */
  EBP = (pop32());
  /* 10b0fbaf ret  */
  ESPCHK(0x10b0f9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbb0 @ 0x10b0fbb0 (130 bytes, 47 insns) */
void f_10b0fbb0(void) {
  FTRACE(0x10b0fbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0fbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0fbb1 mov ebp, esp */
  EBP = (ESP);
  /* 10b0fbb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0fbb6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10b0fbbd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10b0fbc4:;
  /* 10b0fbc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0fbc7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fbca jg 0x10b0fc2e */
  if ((!C.zf&&C.sf==C.of)) goto L_10b0fc2e;
  /* 10b0fbcc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fbd0 je 0x10b0fc2e */
  if (C.zf) goto L_10b0fc2e;
  /* 10b0fbd2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b0fbd5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fbd8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b0fbd9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0fbdb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b0fbdd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b0fbe0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0fbe3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0fbe6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10b0fbe9 push eax */
  push32((uint32_t)(EAX));
  /* 10b0fbea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0fbed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b0fbef push edx */
  push32((uint32_t)(EDX));
  /* 10b0fbf0 call 0x10b122a0 */
  push32(0x10b0fbf5u); f_10b122a0();
  /* 10b0fbf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fbf8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b0fbfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fbff jne 0x10b0fc12 */
  if (!C.zf) goto L_10b0fc12;
  /* 10b0fc01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0fc04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0fc07 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10b0fc0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b0fc0e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10b0fc10 jmp 0x10b0fc2c */
  goto L_10b0fc2c;
L_10b0fc12:;
  /* 10b0fc12 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fc16 jge 0x10b0fc23 */
  if ((C.sf==C.of)) goto L_10b0fc23;
  /* 10b0fc18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0fc1b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0fc1e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b0fc21 jmp 0x10b0fc2c */
  goto L_10b0fc2c;
L_10b0fc23:;
  /* 10b0fc23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0fc26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fc29 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10b0fc2c:;
  /* 10b0fc2c jmp 0x10b0fbc4 */
  goto L_10b0fbc4;
L_10b0fc2e:;
  /* 10b0fc2e mov esp, ebp */
  ESP = (EBP);
  /* 10b0fc30 pop ebp */
  EBP = (pop32());
  /* 10b0fc31 ret  */
  ESPCHK(0x10b0fbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc40 @ 0x10b0fc40 (186 bytes, 50 insns) */
void f_10b0fc40(void) {
  FTRACE(0x10b0fc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0fc40 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0fc41 mov ebp, esp */
  EBP = (ESP);
  /* 10b0fc43 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fc44 mov eax, dword ptr [0x10b2f78c] */
  EAX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0fc49 push eax */
  push32((uint32_t)(EAX));
  /* 10b0fc4a call 0x10b06a00 */
  push32(0x10b0fc4fu); f_10b06a00();
  /* 10b0fc4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fc52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0fc54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fc57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10b0fc5a mov dword ptr [0x10b2f788], ecx */
  w32((uint32_t)(0x10b2f788), (ECX));
  /* 10b0fc60 mov edx, dword ptr [0x10b2f790] */
  EDX = (r32((uint32_t)(0x10b2f790)));
  /* 10b0fc66 push edx */
  push32((uint32_t)(EDX));
  /* 10b0fc67 call 0x10b06a00 */
  push32(0x10b0fc6cu); f_10b06a00();
  /* 10b0fc6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fc6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b0fc71 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fc74 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10b0fc77 mov dword ptr [0x10b2f780], ecx */
  w32((uint32_t)(0x10b2f780), (ECX));
  /* 10b0fc7d mov dword ptr [0x10b2f77c], 0 */
  w32((uint32_t)(0x10b2f77c), (0x0u));
  /* 10b0fc87 cmp dword ptr [0x10b2f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fc8e je 0x10b0fc99 */
  if (C.zf) goto L_10b0fc99;
  /* 10b0fc90 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10b0fc97 jmp 0x10b0fcab */
  goto L_10b0fcab;
L_10b0fc99:;
  /* 10b0fc99 mov edx, dword ptr [0x10b2f78c] */
  EDX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0fc9f push edx */
  push32((uint32_t)(EDX));
  /* 10b0fca0 call 0x10b106e0 */
  push32(0x10b0fca5u); f_10b106e0();
  /* 10b0fca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fca8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b0fcab:;
  /* 10b0fcab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b0fcae mov dword ptr [0x10b2f784], eax */
  w32((uint32_t)(0x10b2f784), (EAX));
  /* 10b0fcb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0fcb5 push 0x10b0fd00 */
  push32((uint32_t)(0x10b0fd00u));
  /* 10b0fcba call dword ptr [0x10b322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322c4))), 0x10b0fcc0u);
  /* 10b0fcc0 mov ecx, dword ptr [0x10b2f794] */
  ECX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fcc6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0fccc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0fcce je 0x10b0fcec */
  if (C.zf) goto L_10b0fcec;
  /* 10b0fcd0 mov edx, dword ptr [0x10b2f794] */
  EDX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fcd6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0fcdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0fcde je 0x10b0fcec */
  if (C.zf) goto L_10b0fcec;
  /* 10b0fce0 mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fce5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10b0fce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fcea jne 0x10b0fcf6 */
  if (!C.zf) goto L_10b0fcf6;
L_10b0fcec:;
  /* 10b0fcec mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
L_10b0fcf6:;
  /* 10b0fcf6 mov esp, ebp */
  ESP = (EBP);
  /* 10b0fcf8 pop ebp */
  EBP = (pop32());
  /* 10b0fcf9 ret  */
  ESPCHK(0x10b0fc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd00 @ 0x10b0fd00 (804 bytes, 220 insns) */
void f_10b0fd00(void) {
  FTRACE(0x10b0fd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b0fd00 push ebp */
  push32((uint32_t)(EBP));
  /* 10b0fd01 mov ebp, esp */
  EBP = (ESP);
  /* 10b0fd03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0fd06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b0fd09 push eax */
  push32((uint32_t)(EAX));
  /* 10b0fd0a call 0x10b10660 */
  push32(0x10b0fd0fu); f_10b10660();
  /* 10b0fd0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fd12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10b0fd15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b0fd17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b0fd1a push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fd1b mov edx, dword ptr [0x10b2f780] */
  EDX = (r32((uint32_t)(0x10b2f780)));
  /* 10b0fd21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0fd23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0fd25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0fd2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fd31 push edx */
  push32((uint32_t)(EDX));
  /* 10b0fd32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0fd35 push eax */
  push32((uint32_t)(EAX));
  /* 10b0fd36 call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b0fd3cu);
  /* 10b0fd3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fd3e jne 0x10b0fd54 */
  if (!C.zf) goto L_10b0fd54;
  /* 10b0fd40 mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
  /* 10b0fd4a mov eax, 1 */
  EAX = (0x1u);
  /* 10b0fd4f jmp 0x10b1001e */
  goto L_10b1001e;
L_10b0fd54:;
  /* 10b0fd54 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b0fd57 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fd58 mov edx, dword ptr [0x10b2f790] */
  EDX = (r32((uint32_t)(0x10b2f790)));
  /* 10b0fd5e push edx */
  push32((uint32_t)(EDX));
  /* 10b0fd5f call 0x10b122a0 */
  push32(0x10b0fd64u); f_10b122a0();
  /* 10b0fd64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fd67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fd69 jne 0x10b0fe8f */
  if (!C.zf) goto L_10b0fe8f;
  /* 10b0fd6f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b0fd71 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b0fd74 push eax */
  push32((uint32_t)(EAX));
  /* 10b0fd75 mov ecx, dword ptr [0x10b2f788] */
  ECX = (r32((uint32_t)(0x10b2f788)));
  /* 10b0fd7b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0fd7d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0fd7f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0fd85 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fd8b push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fd8c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0fd8f push edx */
  push32((uint32_t)(EDX));
  /* 10b0fd90 call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b0fd96u);
  /* 10b0fd96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fd98 jne 0x10b0fdae */
  if (!C.zf) goto L_10b0fdae;
  /* 10b0fd9a mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
  /* 10b0fda4 mov eax, 1 */
  EAX = (0x1u);
  /* 10b0fda9 jmp 0x10b1001e */
  goto L_10b1001e;
L_10b0fdae:;
  /* 10b0fdae lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b0fdb1 push eax */
  push32((uint32_t)(EAX));
  /* 10b0fdb2 mov ecx, dword ptr [0x10b2f78c] */
  ECX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0fdb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fdb9 call 0x10b122a0 */
  push32(0x10b0fdbeu); f_10b122a0();
  /* 10b0fdbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fdc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fdc3 jne 0x10b0fdf0 */
  if (!C.zf) goto L_10b0fdf0;
  /* 10b0fdc5 mov edx, dword ptr [0x10b2f794] */
  EDX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fdcb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0fdd1 mov dword ptr [0x10b2f794], edx */
  w32((uint32_t)(0x10b2f794), (EDX));
  /* 10b0fdd7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0fdda mov dword ptr [0x10b2f798], eax */
  w32((uint32_t)(0x10b2f798), (EAX));
  /* 10b0fddf mov ecx, dword ptr [0x10b2f798] */
  ECX = (r32((uint32_t)(0x10b2f798)));
  /* 10b0fde5 mov dword ptr [0x10b2f77c], ecx */
  w32((uint32_t)(0x10b2f77c), (ECX));
  /* 10b0fdeb jmp 0x10b0fe8f */
  goto L_10b0fe8f;
L_10b0fdf0:;
  /* 10b0fdf0 mov edx, dword ptr [0x10b2f794] */
  EDX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fdf6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0fdf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b0fdfb jne 0x10b0fe8f */
  if (!C.zf) goto L_10b0fe8f;
  /* 10b0fe01 cmp dword ptr [0x10b2f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fe08 je 0x10b0fe5d */
  if (C.zf) goto L_10b0fe5d;
  /* 10b0fe0a mov eax, dword ptr [0x10b2f784] */
  EAX = (r32((uint32_t)(0x10b2f784)));
  /* 10b0fe0f push eax */
  push32((uint32_t)(EAX));
  /* 10b0fe10 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b0fe13 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fe14 mov edx, dword ptr [0x10b2f78c] */
  EDX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0fe1a push edx */
  push32((uint32_t)(EDX));
  /* 10b0fe1b call 0x10b12370 */
  push32(0x10b0fe20u); f_10b12370();
  /* 10b0fe20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fe23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fe25 jne 0x10b0fe5d */
  if (!C.zf) goto L_10b0fe5d;
  /* 10b0fe27 mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fe2c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10b0fe2e mov dword ptr [0x10b2f794], eax */
  w32((uint32_t)(0x10b2f794), (EAX));
  /* 10b0fe33 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0fe36 mov dword ptr [0x10b2f798], ecx */
  w32((uint32_t)(0x10b2f798), (ECX));
  /* 10b0fe3c mov edx, dword ptr [0x10b2f78c] */
  EDX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0fe42 push edx */
  push32((uint32_t)(EDX));
  /* 10b0fe43 call 0x10b06a00 */
  push32(0x10b0fe48u); f_10b06a00();
  /* 10b0fe48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fe4b cmp eax, dword ptr [0x10b2f784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2f784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fe51 jne 0x10b0fe5b */
  if (!C.zf) goto L_10b0fe5b;
  /* 10b0fe53 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0fe56 mov dword ptr [0x10b2f77c], eax */
  w32((uint32_t)(0x10b2f77c), (EAX));
L_10b0fe5b:;
  /* 10b0fe5b jmp 0x10b0fe8f */
  goto L_10b0fe8f;
L_10b0fe5d:;
  /* 10b0fe5d mov ecx, dword ptr [0x10b2f794] */
  ECX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fe63 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0fe66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b0fe68 jne 0x10b0fe8f */
  if (!C.zf) goto L_10b0fe8f;
  /* 10b0fe6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0fe6d push edx */
  push32((uint32_t)(EDX));
  /* 10b0fe6e call 0x10b103a0 */
  push32(0x10b0fe73u); f_10b103a0();
  /* 10b0fe73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fe76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fe78 je 0x10b0fe8f */
  if (C.zf) goto L_10b0fe8f;
  /* 10b0fe7a mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fe7f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10b0fe81 mov dword ptr [0x10b2f794], eax */
  w32((uint32_t)(0x10b2f794), (EAX));
  /* 10b0fe86 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0fe89 mov dword ptr [0x10b2f798], ecx */
  w32((uint32_t)(0x10b2f798), (ECX));
L_10b0fe8f:;
  /* 10b0fe8f mov edx, dword ptr [0x10b2f794] */
  EDX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fe95 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10b0fe9b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0fea1 je 0x10b10011 */
  if (C.zf) goto L_10b10011;
  /* 10b0fea7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b0fea9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b0feac push eax */
  push32((uint32_t)(EAX));
  /* 10b0fead mov ecx, dword ptr [0x10b2f788] */
  ECX = (r32((uint32_t)(0x10b2f788)));
  /* 10b0feb3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b0feb5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b0feb7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10b0febd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fec4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0fec7 push edx */
  push32((uint32_t)(EDX));
  /* 10b0fec8 call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b0feceu);
  /* 10b0fece test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fed0 jne 0x10b0fee6 */
  if (!C.zf) goto L_10b0fee6;
  /* 10b0fed2 mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
  /* 10b0fedc mov eax, 1 */
  EAX = (0x1u);
  /* 10b0fee1 jmp 0x10b1001e */
  goto L_10b1001e;
L_10b0fee6:;
  /* 10b0fee6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b0fee9 push eax */
  push32((uint32_t)(EAX));
  /* 10b0feea mov ecx, dword ptr [0x10b2f78c] */
  ECX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0fef0 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0fef1 call 0x10b122a0 */
  push32(0x10b0fef6u); f_10b122a0();
  /* 10b0fef6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0fef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fefb jne 0x10b0ffb0 */
  if (!C.zf) goto L_10b0ffb0;
  /* 10b0ff01 mov edx, dword ptr [0x10b2f794] */
  EDX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0ff07 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10b0ff0a mov dword ptr [0x10b2f794], edx */
  w32((uint32_t)(0x10b2f794), (EDX));
  /* 10b0ff10 cmp dword ptr [0x10b2f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ff17 je 0x10b0ff3a */
  if (C.zf) goto L_10b0ff3a;
  /* 10b0ff19 mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0ff1e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10b0ff21 mov dword ptr [0x10b2f794], eax */
  w32((uint32_t)(0x10b2f794), (EAX));
  /* 10b0ff26 cmp dword ptr [0x10b2f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ff2d jne 0x10b0ff38 */
  if (!C.zf) goto L_10b0ff38;
  /* 10b0ff2f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0ff32 mov dword ptr [0x10b2f77c], ecx */
  w32((uint32_t)(0x10b2f77c), (ECX));
L_10b0ff38:;
  /* 10b0ff38 jmp 0x10b0ffae */
  goto L_10b0ffae;
L_10b0ff3a:;
  /* 10b0ff3a cmp dword ptr [0x10b2f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ff41 je 0x10b0ff8f */
  if (C.zf) goto L_10b0ff8f;
  /* 10b0ff43 mov edx, dword ptr [0x10b2f78c] */
  EDX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0ff49 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ff4a call 0x10b06a00 */
  push32(0x10b0ff4fu); f_10b06a00();
  /* 10b0ff4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ff52 cmp eax, dword ptr [0x10b2f784] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b2f784))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ff58 jne 0x10b0ff8f */
  if (!C.zf) goto L_10b0ff8f;
  /* 10b0ff5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b0ff5c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0ff5f push eax */
  push32((uint32_t)(EAX));
  /* 10b0ff60 call 0x10b103f0 */
  push32(0x10b0ff65u); f_10b103f0();
  /* 10b0ff65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ff68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0ff6a je 0x10b0ff8d */
  if (C.zf) goto L_10b0ff8d;
  /* 10b0ff6c mov ecx, dword ptr [0x10b2f794] */
  ECX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0ff72 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10b0ff75 mov dword ptr [0x10b2f794], ecx */
  w32((uint32_t)(0x10b2f794), (ECX));
  /* 10b0ff7b cmp dword ptr [0x10b2f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ff82 jne 0x10b0ff8d */
  if (!C.zf) goto L_10b0ff8d;
  /* 10b0ff84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0ff87 mov dword ptr [0x10b2f77c], edx */
  w32((uint32_t)(0x10b2f77c), (EDX));
L_10b0ff8d:;
  /* 10b0ff8d jmp 0x10b0ffae */
  goto L_10b0ffae;
L_10b0ff8f:;
  /* 10b0ff8f mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0ff94 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10b0ff97 mov dword ptr [0x10b2f794], eax */
  w32((uint32_t)(0x10b2f794), (EAX));
  /* 10b0ff9c cmp dword ptr [0x10b2f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ffa3 jne 0x10b0ffae */
  if (!C.zf) goto L_10b0ffae;
  /* 10b0ffa5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0ffa8 mov dword ptr [0x10b2f77c], ecx */
  w32((uint32_t)(0x10b2f77c), (ECX));
L_10b0ffae:;
  /* 10b0ffae jmp 0x10b10011 */
  goto L_10b10011;
L_10b0ffb0:;
  /* 10b0ffb0 cmp dword ptr [0x10b2f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ffb7 jne 0x10b10011 */
  if (!C.zf) goto L_10b10011;
  /* 10b0ffb9 cmp dword ptr [0x10b2f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b0ffc0 je 0x10b10011 */
  if (C.zf) goto L_10b10011;
  /* 10b0ffc2 mov edx, dword ptr [0x10b2f784] */
  EDX = (r32((uint32_t)(0x10b2f784)));
  /* 10b0ffc8 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ffc9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10b0ffcc push eax */
  push32((uint32_t)(EAX));
  /* 10b0ffcd mov ecx, dword ptr [0x10b2f78c] */
  ECX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b0ffd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b0ffd4 call 0x10b12370 */
  push32(0x10b0ffd9u); f_10b12370();
  /* 10b0ffd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ffdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0ffde jne 0x10b10011 */
  if (!C.zf) goto L_10b10011;
  /* 10b0ffe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b0ffe2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b0ffe5 push edx */
  push32((uint32_t)(EDX));
  /* 10b0ffe6 call 0x10b103f0 */
  push32(0x10b0ffebu); f_10b103f0();
  /* 10b0ffeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b0ffee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b0fff0 je 0x10b10011 */
  if (C.zf) goto L_10b10011;
  /* 10b0fff2 mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b0fff7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10b0fffa mov dword ptr [0x10b2f794], eax */
  w32((uint32_t)(0x10b2f794), (EAX));
  /* 10b0ffff cmp dword ptr [0x10b2f77c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f77c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10006 jne 0x10b10011 */
  if (!C.zf) goto L_10b10011;
  /* 10b10008 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b1000b mov dword ptr [0x10b2f77c], ecx */
  w32((uint32_t)(0x10b2f77c), (ECX));
L_10b10011:;
  /* 10b10011 mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b10016 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b10019 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b1001b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b1001d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b1001e:;
  /* 10b1001e mov esp, ebp */
  ESP = (EBP);
  /* 10b10020 pop ebp */
  EBP = (pop32());
  /* 10b10021 ret 4 */
  ESPCHK(0x10b0fd00u, _esp0);
  ESP += 8; return;
}

/* FUN_10010030 @ 0x10b10030 (116 bytes, 33 insns) */
void f_10b10030(void) {
  FTRACE(0x10b10030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10030 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10031 mov ebp, esp */
  EBP = (ESP);
  /* 10b10033 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10034 mov eax, dword ptr [0x10b2f78c] */
  EAX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b10039 push eax */
  push32((uint32_t)(EAX));
  /* 10b1003a call 0x10b06a00 */
  push32(0x10b1003fu); f_10b06a00();
  /* 10b1003f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10042 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b10044 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10047 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10b1004a mov dword ptr [0x10b2f788], ecx */
  w32((uint32_t)(0x10b2f788), (ECX));
  /* 10b10050 cmp dword ptr [0x10b2f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10057 je 0x10b10062 */
  if (C.zf) goto L_10b10062;
  /* 10b10059 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10b10060 jmp 0x10b10074 */
  goto L_10b10074;
L_10b10062:;
  /* 10b10062 mov edx, dword ptr [0x10b2f78c] */
  EDX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b10068 push edx */
  push32((uint32_t)(EDX));
  /* 10b10069 call 0x10b106e0 */
  push32(0x10b1006eu); f_10b106e0();
  /* 10b1006e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10071 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b10074:;
  /* 10b10074 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10077 mov dword ptr [0x10b2f784], eax */
  w32((uint32_t)(0x10b2f784), (EAX));
  /* 10b1007c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b1007e push 0x10b100b0 */
  push32((uint32_t)(0x10b100b0u));
  /* 10b10083 call dword ptr [0x10b322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322c4))), 0x10b10089u);
  /* 10b10089 mov ecx, dword ptr [0x10b2f794] */
  ECX = (r32((uint32_t)(0x10b2f794)));
  /* 10b1008f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b10092 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b10094 jne 0x10b100a0 */
  if (!C.zf) goto L_10b100a0;
  /* 10b10096 mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
L_10b100a0:;
  /* 10b100a0 mov esp, ebp */
  ESP = (EBP);
  /* 10b100a2 pop ebp */
  EBP = (pop32());
  /* 10b100a3 ret  */
  ESPCHK(0x10b10030u, _esp0);
  ESP += 4; return;
}

/* FUN_100100b0 @ 0x10b100b0 (287 bytes, 86 insns) */
void f_10b100b0(void) {
  FTRACE(0x10b100b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b100b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b100b1 mov ebp, esp */
  EBP = (ESP);
  /* 10b100b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b100b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b100b9 push eax */
  push32((uint32_t)(EAX));
  /* 10b100ba call 0x10b10660 */
  push32(0x10b100bfu); f_10b10660();
  /* 10b100bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b100c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10b100c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b100c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b100ca push ecx */
  push32((uint32_t)(ECX));
  /* 10b100cb mov edx, dword ptr [0x10b2f788] */
  EDX = (r32((uint32_t)(0x10b2f788)));
  /* 10b100d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b100d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b100d5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10b100db add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b100e1 push edx */
  push32((uint32_t)(EDX));
  /* 10b100e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b100e5 push eax */
  push32((uint32_t)(EAX));
  /* 10b100e6 call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b100ecu);
  /* 10b100ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b100ee jne 0x10b10104 */
  if (!C.zf) goto L_10b10104;
  /* 10b100f0 mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
  /* 10b100fa mov eax, 1 */
  EAX = (0x1u);
  /* 10b100ff jmp 0x10b101c9 */
  goto L_10b101c9;
L_10b10104:;
  /* 10b10104 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b10107 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10108 mov edx, dword ptr [0x10b2f78c] */
  EDX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b1010e push edx */
  push32((uint32_t)(EDX));
  /* 10b1010f call 0x10b122a0 */
  push32(0x10b10114u); f_10b122a0();
  /* 10b10114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10119 jne 0x10b10159 */
  if (!C.zf) goto L_10b10159;
  /* 10b1011b cmp dword ptr [0x10b2f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10122 jne 0x10b10136 */
  if (!C.zf) goto L_10b10136;
  /* 10b10124 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b10126 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b10129 push eax */
  push32((uint32_t)(EAX));
  /* 10b1012a call 0x10b103f0 */
  push32(0x10b1012fu); f_10b103f0();
  /* 10b1012f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10132 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10134 je 0x10b10157 */
  if (C.zf) goto L_10b10157;
L_10b10136:;
  /* 10b10136 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b10139 mov dword ptr [0x10b2f798], ecx */
  w32((uint32_t)(0x10b2f798), (ECX));
  /* 10b1013f mov edx, dword ptr [0x10b2f798] */
  EDX = (r32((uint32_t)(0x10b2f798)));
  /* 10b10145 mov dword ptr [0x10b2f77c], edx */
  w32((uint32_t)(0x10b2f77c), (EDX));
  /* 10b1014b mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b10150 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10b10152 mov dword ptr [0x10b2f794], eax */
  w32((uint32_t)(0x10b2f794), (EAX));
L_10b10157:;
  /* 10b10157 jmp 0x10b101bc */
  goto L_10b101bc;
L_10b10159:;
  /* 10b10159 cmp dword ptr [0x10b2f788], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f788))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10160 jne 0x10b101bc */
  if (!C.zf) goto L_10b101bc;
  /* 10b10162 cmp dword ptr [0x10b2f784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b2f784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10169 je 0x10b101bc */
  if (C.zf) goto L_10b101bc;
  /* 10b1016b mov ecx, dword ptr [0x10b2f784] */
  ECX = (r32((uint32_t)(0x10b2f784)));
  /* 10b10171 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10172 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10b10175 push edx */
  push32((uint32_t)(EDX));
  /* 10b10176 mov eax, dword ptr [0x10b2f78c] */
  EAX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b1017b push eax */
  push32((uint32_t)(EAX));
  /* 10b1017c call 0x10b12370 */
  push32(0x10b10181u); f_10b12370();
  /* 10b10181 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10184 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10186 jne 0x10b101bc */
  if (!C.zf) goto L_10b101bc;
  /* 10b10188 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b1018a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b1018d push ecx */
  push32((uint32_t)(ECX));
  /* 10b1018e call 0x10b103f0 */
  push32(0x10b10193u); f_10b103f0();
  /* 10b10193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10198 je 0x10b101bc */
  if (C.zf) goto L_10b101bc;
  /* 10b1019a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b1019d mov dword ptr [0x10b2f798], edx */
  w32((uint32_t)(0x10b2f798), (EDX));
  /* 10b101a3 mov eax, dword ptr [0x10b2f798] */
  EAX = (r32((uint32_t)(0x10b2f798)));
  /* 10b101a8 mov dword ptr [0x10b2f77c], eax */
  w32((uint32_t)(0x10b2f77c), (EAX));
  /* 10b101ad mov ecx, dword ptr [0x10b2f794] */
  ECX = (r32((uint32_t)(0x10b2f794)));
  /* 10b101b3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10b101b6 mov dword ptr [0x10b2f794], ecx */
  w32((uint32_t)(0x10b2f794), (ECX));
L_10b101bc:;
  /* 10b101bc mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b101c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b101c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b101c6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b101c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b101c9:;
  /* 10b101c9 mov esp, ebp */
  ESP = (EBP);
  /* 10b101cb pop ebp */
  EBP = (pop32());
  /* 10b101cc ret 4 */
  ESPCHK(0x10b100b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100101d0 @ 0x10b101d0 (69 bytes, 20 insns) */
void f_10b101d0(void) {
  FTRACE(0x10b101d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b101d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b101d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b101d3 mov eax, dword ptr [0x10b2f790] */
  EAX = (r32((uint32_t)(0x10b2f790)));
  /* 10b101d8 push eax */
  push32((uint32_t)(EAX));
  /* 10b101d9 call 0x10b06a00 */
  push32(0x10b101deu); f_10b06a00();
  /* 10b101de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b101e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b101e3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b101e6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10b101e9 mov dword ptr [0x10b2f780], ecx */
  w32((uint32_t)(0x10b2f780), (ECX));
  /* 10b101ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10b101f1 push 0x10b10220 */
  push32((uint32_t)(0x10b10220u));
  /* 10b101f6 call dword ptr [0x10b322c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322c4))), 0x10b101fcu);
  /* 10b101fc mov edx, dword ptr [0x10b2f794] */
  EDX = (r32((uint32_t)(0x10b2f794)));
  /* 10b10202 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10b10205 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b10207 jne 0x10b10213 */
  if (!C.zf) goto L_10b10213;
  /* 10b10209 mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
L_10b10213:;
  /* 10b10213 pop ebp */
  EBP = (pop32());
  /* 10b10214 ret  */
  ESPCHK(0x10b101d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x10b10220 (172 bytes, 54 insns) */
void f_10b10220(void) {
  FTRACE(0x10b10220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10220 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10221 mov ebp, esp */
  EBP = (ESP);
  /* 10b10223 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10229 push eax */
  push32((uint32_t)(EAX));
  /* 10b1022a call 0x10b10660 */
  push32(0x10b1022fu); f_10b10660();
  /* 10b1022f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10232 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10b10235 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b10237 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b1023a push ecx */
  push32((uint32_t)(ECX));
  /* 10b1023b mov edx, dword ptr [0x10b2f780] */
  EDX = (r32((uint32_t)(0x10b2f780)));
  /* 10b10241 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b10243 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10245 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10b1024b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10251 push edx */
  push32((uint32_t)(EDX));
  /* 10b10252 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b10255 push eax */
  push32((uint32_t)(EAX));
  /* 10b10256 call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b1025cu);
  /* 10b1025c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b1025e jne 0x10b10271 */
  if (!C.zf) goto L_10b10271;
  /* 10b10260 mov dword ptr [0x10b2f794], 0 */
  w32((uint32_t)(0x10b2f794), (0x0u));
  /* 10b1026a mov eax, 1 */
  EAX = (0x1u);
  /* 10b1026f jmp 0x10b102c6 */
  goto L_10b102c6;
L_10b10271:;
  /* 10b10271 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10b10274 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10275 mov edx, dword ptr [0x10b2f790] */
  EDX = (r32((uint32_t)(0x10b2f790)));
  /* 10b1027b push edx */
  push32((uint32_t)(EDX));
  /* 10b1027c call 0x10b122a0 */
  push32(0x10b10281u); f_10b122a0();
  /* 10b10281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10286 jne 0x10b102b9 */
  if (!C.zf) goto L_10b102b9;
  /* 10b10288 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b1028b push eax */
  push32((uint32_t)(EAX));
  /* 10b1028c call 0x10b103a0 */
  push32(0x10b10291u); f_10b103a0();
  /* 10b10291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10294 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10296 je 0x10b102b9 */
  if (C.zf) goto L_10b102b9;
  /* 10b10298 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10b1029b mov dword ptr [0x10b2f798], ecx */
  w32((uint32_t)(0x10b2f798), (ECX));
  /* 10b102a1 mov edx, dword ptr [0x10b2f798] */
  EDX = (r32((uint32_t)(0x10b2f798)));
  /* 10b102a7 mov dword ptr [0x10b2f77c], edx */
  w32((uint32_t)(0x10b2f77c), (EDX));
  /* 10b102ad mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b102b2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10b102b4 mov dword ptr [0x10b2f794], eax */
  w32((uint32_t)(0x10b2f794), (EAX));
L_10b102b9:;
  /* 10b102b9 mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b102be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10b102c1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b102c3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b102c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b102c6:;
  /* 10b102c6 mov esp, ebp */
  ESP = (EBP);
  /* 10b102c8 pop ebp */
  EBP = (pop32());
  /* 10b102c9 ret 4 */
  ESPCHK(0x10b10220u, _esp0);
  ESP += 8; return;
}

/* FUN_100102d0 @ 0x10b102d0 (43 bytes, 11 insns) */
void f_10b102d0(void) {
  FTRACE(0x10b102d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b102d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b102d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b102d3 mov eax, dword ptr [0x10b2f794] */
  EAX = (r32((uint32_t)(0x10b2f794)));
  /* 10b102d8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10b102dd mov dword ptr [0x10b2f794], eax */
  w32((uint32_t)(0x10b2f794), (EAX));
  /* 10b102e2 call dword ptr [0x10b322b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322b4))), 0x10b102e8u);
  /* 10b102e8 mov dword ptr [0x10b2f798], eax */
  w32((uint32_t)(0x10b2f798), (EAX));
  /* 10b102ed mov ecx, dword ptr [0x10b2f798] */
  ECX = (r32((uint32_t)(0x10b2f798)));
  /* 10b102f3 mov dword ptr [0x10b2f77c], ecx */
  w32((uint32_t)(0x10b2f77c), (ECX));
  /* 10b102f9 pop ebp */
  EBP = (pop32());
  /* 10b102fa ret  */
  ESPCHK(0x10b102d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010300 @ 0x10b10300 (155 bytes, 57 insns) */
void f_10b10300(void) {
  FTRACE(0x10b10300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10300 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10301 mov ebp, esp */
  EBP = (ESP);
  /* 10b10303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10306 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1030a je 0x10b1032b */
  if (C.zf) goto L_10b1032b;
  /* 10b1030c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1030f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10b10312 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b10314 je 0x10b1032b */
  if (C.zf) goto L_10b1032b;
  /* 10b10316 push 0x10b2b8f4 */
  push32((uint32_t)(0x10b2b8f4u));
  /* 10b1031b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1031e push edx */
  push32((uint32_t)(EDX));
  /* 10b1031f call 0x10b0f860 */
  push32(0x10b10324u); f_10b0f860();
  /* 10b10324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10327 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10329 jne 0x10b10353 */
  if (!C.zf) goto L_10b10353;
L_10b1032b:;
  /* 10b1032b push 8 */
  push32((uint32_t)(0x8u));
  /* 10b1032d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b10330 push eax */
  push32((uint32_t)(EAX));
  /* 10b10331 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10b10336 mov ecx, dword ptr [0x10b2f798] */
  ECX = (r32((uint32_t)(0x10b2f798)));
  /* 10b1033c push ecx */
  push32((uint32_t)(ECX));
  /* 10b1033d call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b10343u);
  /* 10b10343 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10345 jne 0x10b1034b */
  if (!C.zf) goto L_10b1034b;
  /* 10b10347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b10349 jmp 0x10b10397 */
  goto L_10b10397;
L_10b1034b:;
  /* 10b1034b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10b1034e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10b10351 jmp 0x10b1038b */
  goto L_10b1038b;
L_10b10353:;
  /* 10b10353 push 0x10b2b8f0 */
  push32((uint32_t)(0x10b2b8f0u));
  /* 10b10358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1035b push eax */
  push32((uint32_t)(EAX));
  /* 10b1035c call 0x10b0f860 */
  push32(0x10b10361u); f_10b0f860();
  /* 10b10361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10364 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10366 jne 0x10b1038b */
  if (!C.zf) goto L_10b1038b;
  /* 10b10368 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b1036a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10b1036d push ecx */
  push32((uint32_t)(ECX));
  /* 10b1036e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b10370 mov edx, dword ptr [0x10b2f798] */
  EDX = (r32((uint32_t)(0x10b2f798)));
  /* 10b10376 push edx */
  push32((uint32_t)(EDX));
  /* 10b10377 call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b1037du);
  /* 10b1037d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b1037f jne 0x10b10385 */
  if (!C.zf) goto L_10b10385;
  /* 10b10381 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b10383 jmp 0x10b10397 */
  goto L_10b10397;
L_10b10385:;
  /* 10b10385 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b10388 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10b1038b:;
  /* 10b1038b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1038e push ecx */
  push32((uint32_t)(ECX));
  /* 10b1038f call 0x10b12480 */
  push32(0x10b10394u); f_10b12480();
  /* 10b10394 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b10397:;
  /* 10b10397 mov esp, ebp */
  ESP = (EBP);
  /* 10b10399 pop ebp */
  EBP = (pop32());
  /* 10b1039a ret  */
  ESPCHK(0x10b10300u, _esp0);
  ESP += 4; return;
}

/* FUN_100103a0 @ 0x10b103a0 (79 bytes, 26 insns) */
void f_10b103a0(void) {
  FTRACE(0x10b103a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b103a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b103a1 mov ebp, esp */
  EBP = (ESP);
  /* 10b103a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b103a6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10b103aa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10b103ae mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b103b5 jmp 0x10b103c0 */
  goto L_10b103c0;
L_10b103b7:;
  /* 10b103b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b103ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b103bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10b103c0:;
  /* 10b103c0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b103c4 jae 0x10b103e6 */
  if (!C.cf) goto L_10b103e6;
  /* 10b103c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b103c9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b103cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b103d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b103d4 mov cx, word ptr [eax*2 + 0x10b2e9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10b2e9c4)));
  /* 10b103dc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b103de jne 0x10b103e4 */
  if (!C.zf) goto L_10b103e4;
  /* 10b103e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b103e2 jmp 0x10b103eb */
  goto L_10b103eb;
L_10b103e4:;
  /* 10b103e4 jmp 0x10b103b7 */
  goto L_10b103b7;
L_10b103e6:;
  /* 10b103e6 mov eax, 1 */
  EAX = (0x1u);
L_10b103eb:;
  /* 10b103eb mov esp, ebp */
  ESP = (EBP);
  /* 10b103ed pop ebp */
  EBP = (pop32());
  /* 10b103ee ret  */
  ESPCHK(0x10b103a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103f0 @ 0x10b103f0 (135 bytes, 48 insns) */
void f_10b103f0(void) {
  FTRACE(0x10b103f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b103f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b103f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b103f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b103f6 push esi */
  push32((uint32_t)(ESI));
  /* 10b103f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b103fa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b103ff and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b10404 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b10409 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10b1040c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b10411 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b10414 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10b10416 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10b10419 push ecx */
  push32((uint32_t)(ECX));
  /* 10b1041a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b1041c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b1041f push edx */
  push32((uint32_t)(EDX));
  /* 10b10420 call dword ptr [0x10b2f79c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b2f79c))), 0x10b10426u);
  /* 10b10426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10428 jne 0x10b1042e */
  if (!C.zf) goto L_10b1042e;
  /* 10b1042a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1042c jmp 0x10b10472 */
  goto L_10b10472;
L_10b1042e:;
  /* 10b1042e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10b10431 push eax */
  push32((uint32_t)(EAX));
  /* 10b10432 call 0x10b10660 */
  push32(0x10b10437u); f_10b10660();
  /* 10b10437 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1043a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1043d je 0x10b1046d */
  if (C.zf) goto L_10b1046d;
  /* 10b1043f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10443 je 0x10b1046d */
  if (C.zf) goto L_10b1046d;
  /* 10b10445 mov ecx, dword ptr [0x10b2f78c] */
  ECX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b1044b push ecx */
  push32((uint32_t)(ECX));
  /* 10b1044c call 0x10b106e0 */
  push32(0x10b10451u); f_10b106e0();
  /* 10b10451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10454 mov esi, eax */
  ESI = (EAX);
  /* 10b10456 mov edx, dword ptr [0x10b2f78c] */
  EDX = (r32((uint32_t)(0x10b2f78c)));
  /* 10b1045c push edx */
  push32((uint32_t)(EDX));
  /* 10b1045d call 0x10b06a00 */
  push32(0x10b10462u); f_10b06a00();
  /* 10b10462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10465 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10467 jne 0x10b1046d */
  if (!C.zf) goto L_10b1046d;
  /* 10b10469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b1046b jmp 0x10b10472 */
  goto L_10b10472;
L_10b1046d:;
  /* 10b1046d mov eax, 1 */
  EAX = (0x1u);
L_10b10472:;
  /* 10b10472 pop esi */
  ESI = (pop32());
  /* 10b10473 mov esp, ebp */
  ESP = (EBP);
  /* 10b10475 pop ebp */
  EBP = (pop32());
  /* 10b10476 ret  */
  ESPCHK(0x10b103f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010480 @ 0x10b10480 (77 bytes, 18 insns) */
void f_10b10480(void) {
  FTRACE(0x10b10480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10480 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10481 mov ebp, esp */
  EBP = (ESP);
  /* 10b10483 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10489 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10b10493 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10b10499 push eax */
  push32((uint32_t)(EAX));
  /* 10b1049a call dword ptr [0x10b322b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322b0))), 0x10b104a0u);
  /* 10b104a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b104a2 je 0x10b104b9 */
  if (C.zf) goto L_10b104b9;
  /* 10b104a4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b104ab jne 0x10b104b9 */
  if (!C.zf) goto L_10b104b9;
  /* 10b104ad mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10b104b7 jmp 0x10b104c3 */
  goto L_10b104c3;
L_10b104b9:;
  /* 10b104b9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10b104c3:;
  /* 10b104c3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10b104c9 mov esp, ebp */
  ESP = (EBP);
  /* 10b104cb pop ebp */
  EBP = (pop32());
  /* 10b104cc ret  */
  ESPCHK(0x10b10480u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10b104d0 (388 bytes, 118 insns) */
void f_10b104d0(void) {
  FTRACE(0x10b104d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b104d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b104d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b104d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b104d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10b104dd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10b104e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10b104eb:;
  /* 10b104eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b104ee cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b104f1 jg 0x10b10638 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b10638;
  /* 10b104f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b104fa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b104fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10b104fe sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10500 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b10502 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10b10505 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10508 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b1050b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1050e cmp edx, dword ptr [ecx + 0x10b2e520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10b2e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10514 jne 0x10b1060e */
  if (!C.zf) goto L_10b1060e;
  /* 10b1051a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b1051d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10b10520 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10524 ja 0x10b10547 */
  if ((!C.cf&&!C.zf)) goto L_10b10547;
  /* 10b10526 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1052a je 0x10b105b9 */
  if (C.zf) goto L_10b105b9;
  /* 10b10530 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10534 je 0x10b10564 */
  if (C.zf) goto L_10b10564;
  /* 10b10536 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1053a je 0x10b10586 */
  if (C.zf) goto L_10b10586;
  /* 10b1053c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10540 je 0x10b105a8 */
  if (C.zf) goto L_10b105a8;
  /* 10b10542 jmp 0x10b105d8 */
  goto L_10b105d8;
L_10b10547:;
  /* 10b10547 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1054e je 0x10b10575 */
  if (C.zf) goto L_10b10575;
  /* 10b10550 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10557 je 0x10b10597 */
  if (C.zf) goto L_10b10597;
  /* 10b10559 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10560 je 0x10b105ca */
  if (C.zf) goto L_10b105ca;
  /* 10b10562 jmp 0x10b105d8 */
  goto L_10b105d8;
L_10b10564:;
  /* 10b10564 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10567 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b1056a add ecx, 0x10b2e524 */
  { uint32_t _a=(ECX),_b=(0x10b2e524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10570 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b10573 jmp 0x10b105d8 */
  goto L_10b105d8;
L_10b10575:;
  /* 10b10575 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10578 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b1057b mov eax, dword ptr [edx + 0x10b2e52c] */
  EAX = (r32((uint32_t)(EDX + 0x10b2e52c)));
  /* 10b10581 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b10584 jmp 0x10b105d8 */
  goto L_10b105d8;
L_10b10586:;
  /* 10b10586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10589 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b1058c add ecx, 0x10b2e530 */
  { uint32_t _a=(ECX),_b=(0x10b2e530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10592 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b10595 jmp 0x10b105d8 */
  goto L_10b105d8;
L_10b10597:;
  /* 10b10597 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1059a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b1059d mov eax, dword ptr [edx + 0x10b2e534] */
  EAX = (r32((uint32_t)(EDX + 0x10b2e534)));
  /* 10b105a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10b105a6 jmp 0x10b105d8 */
  goto L_10b105d8;
L_10b105a8:;
  /* 10b105a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b105ab imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b105ae add ecx, 0x10b2e538 */
  { uint32_t _a=(ECX),_b=(0x10b2e538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b105b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b105b7 jmp 0x10b105d8 */
  goto L_10b105d8;
L_10b105b9:;
  /* 10b105b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b105bc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b105bf add edx, 0x10b2e53c */
  { uint32_t _a=(EDX),_b=(0x10b2e53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b105c5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b105c8 jmp 0x10b105d8 */
  goto L_10b105d8;
L_10b105ca:;
  /* 10b105ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b105cd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b105d0 add eax, 0x10b2e544 */
  { uint32_t _a=(EAX),_b=(0x10b2e544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b105d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b105d8:;
  /* 10b105d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b105dc je 0x10b105e4 */
  if (C.zf) goto L_10b105e4;
  /* 10b105de cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b105e2 jge 0x10b105e6 */
  if ((C.sf==C.of)) goto L_10b105e6;
L_10b105e4:;
  /* 10b105e4 jmp 0x10b10638 */
  goto L_10b10638;
L_10b105e6:;
  /* 10b105e6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b105e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b105ec push ecx */
  push32((uint32_t)(ECX));
  /* 10b105ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b105f0 push edx */
  push32((uint32_t)(EDX));
  /* 10b105f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b105f4 push eax */
  push32((uint32_t)(EAX));
  /* 10b105f5 call 0x10b073f0 */
  push32(0x10b105fau); f_10b073f0();
  /* 10b105fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b105fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b10600 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10603 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10b10607 mov eax, 1 */
  EAX = (0x1u);
  /* 10b1060c jmp 0x10b1064e */
  goto L_10b1064e;
L_10b1060e:;
  /* 10b1060e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10611 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b10614 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10617 cmp eax, dword ptr [edx + 0x10b2e520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10b2e520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1061d jae 0x10b1062a */
  if (!C.cf) goto L_10b1062a;
  /* 10b1061f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b10622 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10625 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10b10628 jmp 0x10b10633 */
  goto L_10b10633;
L_10b1062a:;
  /* 10b1062a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b1062d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10630 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10b10633:;
  /* 10b10633 jmp 0x10b104eb */
  goto L_10b104eb;
L_10b10638:;
  /* 10b10638 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b1063b push eax */
  push32((uint32_t)(EAX));
  /* 10b1063c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b1063f push ecx */
  push32((uint32_t)(ECX));
  /* 10b10640 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b10643 push edx */
  push32((uint32_t)(EDX));
  /* 10b10644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10647 push eax */
  push32((uint32_t)(EAX));
  /* 10b10648 call dword ptr [0x10b322bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322bc))), 0x10b1064eu);
L_10b1064e:;
  /* 10b1064e mov esp, ebp */
  ESP = (EBP);
  /* 10b10650 pop ebp */
  EBP = (pop32());
  /* 10b10651 ret 0x10 */
  ESPCHK(0x10b104d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010660 @ 0x10b10660 (118 bytes, 42 insns) */
void f_10b10660(void) {
  FTRACE(0x10b10660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10660 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10661 mov ebp, esp */
  EBP = (ESP);
  /* 10b10663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b10666 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10b1066d:;
  /* 10b1066d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10670 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b10672 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10b10675 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b10679 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1067c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1067f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10b10682 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b10684 je 0x10b106cf */
  if (C.zf) goto L_10b106cf;
  /* 10b10686 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b1068a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1068d jl 0x10b106a2 */
  if ((C.sf!=C.of)) goto L_10b106a2;
  /* 10b1068f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b10693 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10696 jg 0x10b106a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b106a2;
  /* 10b10698 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10b1069b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b1069d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10b106a0 jmp 0x10b106bc */
  goto L_10b106bc;
L_10b106a2:;
  /* 10b106a2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b106a6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b106a9 jl 0x10b106bc */
  if ((C.sf!=C.of)) goto L_10b106bc;
  /* 10b106ab movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b106af cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b106b2 jg 0x10b106bc */
  if ((!C.zf&&C.sf==C.of)) goto L_10b106bc;
  /* 10b106b4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10b106b7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10b106b9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10b106bc:;
  /* 10b106bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b106bf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b106c2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10b106c6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10b106ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b106cd jmp 0x10b1066d */
  goto L_10b1066d;
L_10b106cf:;
  /* 10b106cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b106d2 mov esp, ebp */
  ESP = (EBP);
  /* 10b106d4 pop ebp */
  EBP = (pop32());
  /* 10b106d5 ret  */
  ESPCHK(0x10b10660u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10b106e0 (101 bytes, 36 insns) */
void f_10b106e0(void) {
  FTRACE(0x10b106e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b106e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b106e1 mov ebp, esp */
  EBP = (ESP);
  /* 10b106e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b106e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10b106ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b106f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10b106f2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10b106f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b106f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b106fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10b106fe:;
  /* 10b106fe movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10b10702 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10705 jl 0x10b10710 */
  if ((C.sf!=C.of)) goto L_10b10710;
  /* 10b10707 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10b1070b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1070e jle 0x10b10722 */
  if ((C.zf||C.sf!=C.of)) goto L_10b10722;
L_10b10710:;
  /* 10b10710 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10b10714 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10717 jl 0x10b1073e */
  if ((C.sf!=C.of)) goto L_10b1073e;
  /* 10b10719 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10b1071d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10720 jg 0x10b1073e */
  if ((!C.zf&&C.sf==C.of)) goto L_10b1073e;
L_10b10722:;
  /* 10b10722 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b10725 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10728 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b1072b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1072e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10b10730 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10b10733 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10736 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10739 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10b1073c jmp 0x10b106fe */
  goto L_10b106fe;
L_10b1073e:;
  /* 10b1073e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b10741 mov esp, ebp */
  ESP = (EBP);
  /* 10b10743 pop ebp */
  EBP = (pop32());
  /* 10b10744 ret  */
  ESPCHK(0x10b106e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010750 @ 0x10b10750 (122 bytes, 39 insns) */
void f_10b10750(void) {
  FTRACE(0x10b10750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10750 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10751 mov ebp, esp */
  EBP = (ESP);
  /* 10b10753 push ecx */
  push32((uint32_t)(ECX));
  /* 10b10754 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10757 cmp eax, dword ptr [0x10b3101c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b3101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1075d jae 0x10b10781 */
  if (!C.cf) goto L_10b10781;
  /* 10b1075f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10762 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b10765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10768 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10b1076b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b1076e mov eax, dword ptr [ecx*4 + 0x10b30ee0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10b30ee0)));
  /* 10b10775 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10b1077a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b1077d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b1077f jne 0x10b1079c */
  if (!C.zf) goto L_10b1079c;
L_10b10781:;
  /* 10b10781 call 0x10b0baa0 */
  push32(0x10b10786u); f_10b0baa0();
  /* 10b10786 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10b1078c call 0x10b0bab0 */
  push32(0x10b10791u); f_10b0bab0();
  /* 10b10791 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10b10797 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b1079a jmp 0x10b107c6 */
  goto L_10b107c6;
L_10b1079c:;
  /* 10b1079c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1079f push edx */
  push32((uint32_t)(EDX));
  /* 10b107a0 call 0x10b0d2c0 */
  push32(0x10b107a5u); f_10b0d2c0();
  /* 10b107a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b107a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b107ab push eax */
  push32((uint32_t)(EAX));
  /* 10b107ac call 0x10b107d0 */
  push32(0x10b107b1u); f_10b107d0();
  /* 10b107b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b107b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b107b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b107ba push ecx */
  push32((uint32_t)(ECX));
  /* 10b107bb call 0x10b0d350 */
  push32(0x10b107c0u); f_10b0d350();
  /* 10b107c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b107c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10b107c6:;
  /* 10b107c6 mov esp, ebp */
  ESP = (EBP);
  /* 10b107c8 pop ebp */
  EBP = (pop32());
  /* 10b107c9 ret  */
  ESPCHK(0x10b10750u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10b107d0 (170 bytes, 59 insns) */
void f_10b107d0(void) {
  FTRACE(0x10b107d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b107d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b107d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b107d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10b107d4 push esi */
  push32((uint32_t)(ESI));
  /* 10b107d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b107d8 push eax */
  push32((uint32_t)(EAX));
  /* 10b107d9 call 0x10b0d140 */
  push32(0x10b107deu); f_10b0d140();
  /* 10b107de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b107e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b107e4 je 0x10b10823 */
  if (C.zf) goto L_10b10823;
  /* 10b107e6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b107ea je 0x10b107f2 */
  if (C.zf) goto L_10b107f2;
  /* 10b107ec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b107f0 jne 0x10b1080c */
  if (!C.zf) goto L_10b1080c;
L_10b107f2:;
  /* 10b107f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b107f4 call 0x10b0d140 */
  push32(0x10b107f9u); f_10b0d140();
  /* 10b107f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b107fc mov esi, eax */
  ESI = (EAX);
  /* 10b107fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10b10800 call 0x10b0d140 */
  push32(0x10b10805u); f_10b0d140();
  /* 10b10805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10808 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1080a je 0x10b10823 */
  if (C.zf) goto L_10b10823;
L_10b1080c:;
  /* 10b1080c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1080f push ecx */
  push32((uint32_t)(ECX));
  /* 10b10810 call 0x10b0d140 */
  push32(0x10b10815u); f_10b0d140();
  /* 10b10815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10818 push eax */
  push32((uint32_t)(EAX));
  /* 10b10819 call dword ptr [0x10b322b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b322b8))), 0x10b1081fu);
  /* 10b1081f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b10821 je 0x10b1082c */
  if (C.zf) goto L_10b1082c;
L_10b10823:;
  /* 10b10823 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10b1082a jmp 0x10b10835 */
  goto L_10b10835;
L_10b1082c:;
  /* 10b1082c call dword ptr [0x10b32370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b32370))), 0x10b10832u);
  /* 10b10832 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b10835:;
  /* 10b10835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10838 push edx */
  push32((uint32_t)(EDX));
  /* 10b10839 call 0x10b0d060 */
  push32(0x10b1083eu); f_10b0d060();
  /* 10b1083e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b10841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10844 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10b10847 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b1084a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10b1084d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b10850 mov edx, dword ptr [eax*4 + 0x10b30ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10b30ee0)));
  /* 10b10857 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10b1085c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b10860 je 0x10b10873 */
  if (C.zf) goto L_10b10873;
  /* 10b10862 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b10865 push eax */
  push32((uint32_t)(EAX));
  /* 10b10866 call 0x10b0ba00 */
  push32(0x10b1086bu); f_10b0ba00();
  /* 10b1086b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b1086e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b10871 jmp 0x10b10875 */
  goto L_10b10875;
L_10b10873:;
  /* 10b10873 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b10875:;
  /* 10b10875 pop esi */
  ESI = (pop32());
  /* 10b10876 mov esp, ebp */
  ESP = (EBP);
  /* 10b10878 pop ebp */
  EBP = (pop32());
  /* 10b10879 ret  */
  ESPCHK(0x10b107d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010880 @ 0x10b10880 (146 bytes, 52 insns) */
void f_10b10880(void) {
  FTRACE(0x10b10880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b10880 push ebp */
  push32((uint32_t)(EBP));
  /* 10b10881 mov ebp, esp */
  EBP = (ESP);
  /* 10b10883 push ebx */
  push32((uint32_t)(EBX));
  /* 10b10884 push esi */
  push32((uint32_t)(ESI));
  /* 10b10885 push edi */
  push32((uint32_t)(EDI));
L_10b10886:;
  /* 10b10886 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b1088a jne 0x10b108aa */
  if (!C.zf) goto L_10b108aa;
  /* 10b1088c push 0x10b2b230 */
  push32((uint32_t)(0x10b2b230u));
  /* 10b10891 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b10893 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10b10895 push 0x10b2b8f8 */
  push32((uint32_t)(0x10b2b8f8u));
  /* 10b1089a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b1089c call 0x10b02c90 */
  push32(0x10b108a1u); f_10b02c90();
  /* 10b108a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b108a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b108a7 jne 0x10b108aa */
  if (!C.zf) goto L_10b108aa;
  /* 10b108a9 int3  */
  x86_unimpl("int3 @ 0x10b108a9");
L_10b108aa:;
  /* 10b108aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b108ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b108ae jne 0x10b10886 */
  if (!C.zf) goto L_10b10886;
  /* 10b108b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b108b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b108b6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10b108bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b108be je 0x10b1090d */
  if (C.zf) goto L_10b1090d;
  /* 10b108c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b108c3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10b108c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10b108c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b108cb je 0x10b1090d */
  if (C.zf) goto L_10b1090d;
  /* 10b108cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b108cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b108d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b108d5 push eax */
  push32((uint32_t)(EAX));
  /* 10b108d6 call 0x10b04660 */
  push32(0x10b108dbu); f_10b04660();
  /* 10b108db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b108de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b108e1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10b108e4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10b108ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b108ed mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10b108f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b108f3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10b108f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b108fc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10b10903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b10906 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10b1090d:;
  /* 10b1090d pop edi */
  EDI = (pop32());
  /* 10b1090e pop esi */
  ESI = (pop32());
  /* 10b1090f pop ebx */
  EBX = (pop32());
  /* 10b10910 pop ebp */
  EBP = (pop32());
  /* 10b10911 ret  */
  ESPCHK(0x10b10880u, _esp0);
  ESP += 4; return;
}

