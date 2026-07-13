#include "recomp.h"

/* FUN_10013a60 @ 0x113a3a60 (512 bytes, 147 insns) */
void f_113a3a60(void) {
  FTRACE(0x113a3a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3a60 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3a61 mov ebp, esp */
  EBP = (ESP);
  /* 113a3a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a3a66 cmp dword ptr [0x113c2a84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3a6d jne 0x113a3a92 */
  if (!C.zf) goto L_113a3a92;
  /* 113a3a6f call 0x113a4530 */
  push32(0x113a3a74u); f_113a4530();
  /* 113a3a74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3a76 je 0x113a3a82 */
  if (C.zf) goto L_113a3a82;
  /* 113a3a78 mov eax, dword ptr [0x113c52f4] */
  EAX = (r32((uint32_t)(0x113c52f4)));
  /* 113a3a7d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a3a80 jmp 0x113a3a89 */
  goto L_113a3a89;
L_113a3a82:;
  /* 113a3a82 mov dword ptr [ebp - 8], 0x113a4580 */
  w32((uint32_t)(EBP + -0x8), (0x113a4580u));
L_113a3a89:;
  /* 113a3a89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a3a8c mov dword ptr [0x113c2a84], ecx */
  w32((uint32_t)(0x113c2a84), (ECX));
L_113a3a92:;
  /* 113a3a92 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3a96 jne 0x113a3aa2 */
  if (!C.zf) goto L_113a3aa2;
  /* 113a3a98 call 0x113a4380 */
  push32(0x113a3a9du); f_113a4380();
  /* 113a3a9d jmp 0x113a3b6e */
  goto L_113a3b6e;
L_113a3aa2:;
  /* 113a3aa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3aa5 mov dword ptr [0x113c2a74], edx */
  w32((uint32_t)(0x113c2a74), (EDX));
  /* 113a3aab cmp dword ptr [0x113c2a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3ab2 je 0x113a3ad4 */
  if (C.zf) goto L_113a3ad4;
  /* 113a3ab4 mov eax, dword ptr [0x113c2a74] */
  EAX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3ab9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a3abc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a3abe je 0x113a3ad4 */
  if (C.zf) goto L_113a3ad4;
  /* 113a3ac0 push 0x113c2a74 */
  push32((uint32_t)(0x113c2a74u));
  /* 113a3ac5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113a3ac7 push 0x113c1bc0 */
  push32((uint32_t)(0x113c1bc0u));
  /* 113a3acc call 0x113a3c60 */
  push32(0x113a3ad1u); f_113a3c60();
  /* 113a3ad1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a3ad4:;
  /* 113a3ad4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3ad7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3ada mov dword ptr [0x113c2a78], edx */
  w32((uint32_t)(0x113c2a78), (EDX));
  /* 113a3ae0 cmp dword ptr [0x113c2a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3ae7 je 0x113a3b09 */
  if (C.zf) goto L_113a3b09;
  /* 113a3ae9 mov eax, dword ptr [0x113c2a78] */
  EAX = (r32((uint32_t)(0x113c2a78)));
  /* 113a3aee movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a3af1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a3af3 je 0x113a3b09 */
  if (C.zf) goto L_113a3b09;
  /* 113a3af5 push 0x113c2a78 */
  push32((uint32_t)(0x113c2a78u));
  /* 113a3afa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 113a3afc push 0x113c1b08 */
  push32((uint32_t)(0x113c1b08u));
  /* 113a3b01 call 0x113a3c60 */
  push32(0x113a3b06u); f_113a3c60();
  /* 113a3b06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a3b09:;
  /* 113a3b09 mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
  /* 113a3b13 cmp dword ptr [0x113c2a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3b1a je 0x113a3b4d */
  if (C.zf) goto L_113a3b4d;
  /* 113a3b1c mov edx, dword ptr [0x113c2a74] */
  EDX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3b22 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113a3b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3b27 je 0x113a3b4d */
  if (C.zf) goto L_113a3b4d;
  /* 113a3b29 cmp dword ptr [0x113c2a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3b30 je 0x113a3b46 */
  if (C.zf) goto L_113a3b46;
  /* 113a3b32 mov ecx, dword ptr [0x113c2a78] */
  ECX = (r32((uint32_t)(0x113c2a78)));
  /* 113a3b38 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a3b3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a3b3d je 0x113a3b46 */
  if (C.zf) goto L_113a3b46;
  /* 113a3b3f call 0x113a3cf0 */
  push32(0x113a3b44u); f_113a3cf0();
  /* 113a3b44 jmp 0x113a3b4b */
  goto L_113a3b4b;
L_113a3b46:;
  /* 113a3b46 call 0x113a40e0 */
  push32(0x113a3b4bu); f_113a40e0();
L_113a3b4b:;
  /* 113a3b4b jmp 0x113a3b6e */
  goto L_113a3b6e;
L_113a3b4d:;
  /* 113a3b4d cmp dword ptr [0x113c2a78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3b54 je 0x113a3b69 */
  if (C.zf) goto L_113a3b69;
  /* 113a3b56 mov eax, dword ptr [0x113c2a78] */
  EAX = (r32((uint32_t)(0x113c2a78)));
  /* 113a3b5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a3b5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a3b60 je 0x113a3b69 */
  if (C.zf) goto L_113a3b69;
  /* 113a3b62 call 0x113a4280 */
  push32(0x113a3b67u); f_113a4280();
  /* 113a3b67 jmp 0x113a3b6e */
  goto L_113a3b6e;
L_113a3b69:;
  /* 113a3b69 call 0x113a4380 */
  push32(0x113a3b6eu); f_113a4380();
L_113a3b6e:;
  /* 113a3b6e cmp dword ptr [0x113c2a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3b75 jne 0x113a3b7e */
  if (!C.zf) goto L_113a3b7e;
  /* 113a3b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3b79 jmp 0x113a3c5c */
  goto L_113a3c5c;
L_113a3b7e:;
  /* 113a3b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3b81 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3b87 push edx */
  push32((uint32_t)(EDX));
  /* 113a3b88 call 0x113a43b0 */
  push32(0x113a3b8du); f_113a43b0();
  /* 113a3b8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3b90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a3b93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3b97 je 0x113a3bac */
  if (C.zf) goto L_113a3bac;
  /* 113a3b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3b9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a3ba1 push eax */
  push32((uint32_t)(EAX));
  /* 113a3ba2 call dword ptr [0x113c52f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f8))), 0x113a3ba8u);
  /* 113a3ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3baa jne 0x113a3bb3 */
  if (!C.zf) goto L_113a3bb3;
L_113a3bac:;
  /* 113a3bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3bae jmp 0x113a3c5c */
  goto L_113a3c5c;
L_113a3bb3:;
  /* 113a3bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a3bb5 mov ecx, dword ptr [0x113c2a64] */
  ECX = (r32((uint32_t)(0x113c2a64)));
  /* 113a3bbb push ecx */
  push32((uint32_t)(ECX));
  /* 113a3bbc call dword ptr [0x113c52fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52fc))), 0x113a3bc2u);
  /* 113a3bc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3bc4 jne 0x113a3bcd */
  if (!C.zf) goto L_113a3bcd;
  /* 113a3bc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3bc8 jmp 0x113a3c5c */
  goto L_113a3c5c;
L_113a3bcd:;
  /* 113a3bcd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3bd1 je 0x113a3bf8 */
  if (C.zf) goto L_113a3bf8;
  /* 113a3bd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a3bd6 mov ax, word ptr [0x113c2a64] */
  AX = (r16((uint32_t)(0x113c2a64)));
  /* 113a3bdc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 113a3bdf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a3be2 mov dx, word ptr [0x113c2a80] */
  DX = (r16((uint32_t)(0x113c2a80)));
  /* 113a3be9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 113a3bed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a3bf0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 113a3bf4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_113a3bf8:;
  /* 113a3bf8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3bfc je 0x113a3c57 */
  if (C.zf) goto L_113a3c57;
  /* 113a3bfe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113a3c00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a3c03 push edx */
  push32((uint32_t)(EDX));
  /* 113a3c04 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 113a3c09 mov eax, dword ptr [0x113c2a64] */
  EAX = (r32((uint32_t)(0x113c2a64)));
  /* 113a3c0e push eax */
  push32((uint32_t)(EAX));
  /* 113a3c0f call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a3c15u);
  /* 113a3c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3c17 jne 0x113a3c1d */
  if (!C.zf) goto L_113a3c1d;
  /* 113a3c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3c1b jmp 0x113a3c5c */
  goto L_113a3c5c;
L_113a3c1d:;
  /* 113a3c1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113a3c1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a3c22 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3c25 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3c26 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 113a3c2b mov edx, dword ptr [0x113c2a80] */
  EDX = (r32((uint32_t)(0x113c2a80)));
  /* 113a3c31 push edx */
  push32((uint32_t)(EDX));
  /* 113a3c32 call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a3c38u);
  /* 113a3c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3c3a jne 0x113a3c40 */
  if (!C.zf) goto L_113a3c40;
  /* 113a3c3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3c3e jmp 0x113a3c5c */
  goto L_113a3c5c;
L_113a3c40:;
  /* 113a3c40 push 0xa */
  push32((uint32_t)(0xau));
  /* 113a3c42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a3c45 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3c4a push eax */
  push32((uint32_t)(EAX));
  /* 113a3c4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3c4e push ecx */
  push32((uint32_t)(ECX));
  /* 113a3c4f call 0x11399150 */
  push32(0x113a3c54u); f_11399150();
  /* 113a3c54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a3c57:;
  /* 113a3c57 mov eax, 1 */
  EAX = (0x1u);
L_113a3c5c:;
  /* 113a3c5c mov esp, ebp */
  ESP = (EBP);
  /* 113a3c5e pop ebp */
  EBP = (pop32());
  /* 113a3c5f ret  */
  ESPCHK(0x113a3a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c60 @ 0x113a3c60 (130 bytes, 47 insns) */
void f_113a3c60(void) {
  FTRACE(0x113a3c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3c60 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3c61 mov ebp, esp */
  EBP = (ESP);
  /* 113a3c63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a3c66 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113a3c6d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_113a3c74:;
  /* 113a3c74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a3c77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3c7a jg 0x113a3cde */
  if ((!C.zf&&C.sf==C.of)) goto L_113a3cde;
  /* 113a3c7c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3c80 je 0x113a3cde */
  if (C.zf) goto L_113a3cde;
  /* 113a3c82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a3c85 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3c88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a3c89 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a3c8b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113a3c8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a3c90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3c93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3c96 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 113a3c99 push eax */
  push32((uint32_t)(EAX));
  /* 113a3c9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a3c9d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a3c9f push edx */
  push32((uint32_t)(EDX));
  /* 113a3ca0 call 0x113a6440 */
  push32(0x113a3ca5u); f_113a6440();
  /* 113a3ca5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3ca8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a3cab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3caf jne 0x113a3cc2 */
  if (!C.zf) goto L_113a3cc2;
  /* 113a3cb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3cb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3cb7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 113a3cbb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a3cbe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a3cc0 jmp 0x113a3cdc */
  goto L_113a3cdc;
L_113a3cc2:;
  /* 113a3cc2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3cc6 jge 0x113a3cd3 */
  if ((C.sf==C.of)) goto L_113a3cd3;
  /* 113a3cc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3ccb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a3cce mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 113a3cd1 jmp 0x113a3cdc */
  goto L_113a3cdc;
L_113a3cd3:;
  /* 113a3cd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3cd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3cd9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113a3cdc:;
  /* 113a3cdc jmp 0x113a3c74 */
  goto L_113a3c74;
L_113a3cde:;
  /* 113a3cde mov esp, ebp */
  ESP = (EBP);
  /* 113a3ce0 pop ebp */
  EBP = (pop32());
  /* 113a3ce1 ret  */
  ESPCHK(0x113a3c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cf0 @ 0x113a3cf0 (186 bytes, 50 insns) */
void f_113a3cf0(void) {
  FTRACE(0x113a3cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3cf1 mov ebp, esp */
  EBP = (ESP);
  /* 113a3cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3cf4 mov eax, dword ptr [0x113c2a74] */
  EAX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3cf9 push eax */
  push32((uint32_t)(EAX));
  /* 113a3cfa call 0x11399440 */
  push32(0x113a3cffu); f_11399440();
  /* 113a3cff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3d02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3d04 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3d07 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 113a3d0a mov dword ptr [0x113c2a70], ecx */
  w32((uint32_t)(0x113c2a70), (ECX));
  /* 113a3d10 mov edx, dword ptr [0x113c2a78] */
  EDX = (r32((uint32_t)(0x113c2a78)));
  /* 113a3d16 push edx */
  push32((uint32_t)(EDX));
  /* 113a3d17 call 0x11399440 */
  push32(0x113a3d1cu); f_11399440();
  /* 113a3d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3d1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3d21 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3d24 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 113a3d27 mov dword ptr [0x113c2a68], ecx */
  w32((uint32_t)(0x113c2a68), (ECX));
  /* 113a3d2d mov dword ptr [0x113c2a64], 0 */
  w32((uint32_t)(0x113c2a64), (0x0u));
  /* 113a3d37 cmp dword ptr [0x113c2a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3d3e je 0x113a3d49 */
  if (C.zf) goto L_113a3d49;
  /* 113a3d40 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 113a3d47 jmp 0x113a3d5b */
  goto L_113a3d5b;
L_113a3d49:;
  /* 113a3d49 mov edx, dword ptr [0x113c2a74] */
  EDX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3d4f push edx */
  push32((uint32_t)(EDX));
  /* 113a3d50 call 0x113a4790 */
  push32(0x113a3d55u); f_113a4790();
  /* 113a3d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3d58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a3d5b:;
  /* 113a3d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3d5e mov dword ptr [0x113c2a6c], eax */
  w32((uint32_t)(0x113c2a6c), (EAX));
  /* 113a3d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a3d65 push 0x113a3db0 */
  push32((uint32_t)(0x113a3db0u));
  /* 113a3d6a call dword ptr [0x113c52f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f0))), 0x113a3d70u);
  /* 113a3d70 mov ecx, dword ptr [0x113c2a7c] */
  ECX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3d76 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 113a3d7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a3d7e je 0x113a3d9c */
  if (C.zf) goto L_113a3d9c;
  /* 113a3d80 mov edx, dword ptr [0x113c2a7c] */
  EDX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3d86 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 113a3d8c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a3d8e je 0x113a3d9c */
  if (C.zf) goto L_113a3d9c;
  /* 113a3d90 mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3d95 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 113a3d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3d9a jne 0x113a3da6 */
  if (!C.zf) goto L_113a3da6;
L_113a3d9c:;
  /* 113a3d9c mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
L_113a3da6:;
  /* 113a3da6 mov esp, ebp */
  ESP = (EBP);
  /* 113a3da8 pop ebp */
  EBP = (pop32());
  /* 113a3da9 ret  */
  ESPCHK(0x113a3cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013db0 @ 0x113a3db0 (804 bytes, 220 insns) */
void f_113a3db0(void) {
  FTRACE(0x113a3db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3db0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3db1 mov ebp, esp */
  EBP = (ESP);
  /* 113a3db3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a3db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3db9 push eax */
  push32((uint32_t)(EAX));
  /* 113a3dba call 0x113a4710 */
  push32(0x113a3dbfu); f_113a4710();
  /* 113a3dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3dc2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 113a3dc5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113a3dc7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113a3dca push ecx */
  push32((uint32_t)(ECX));
  /* 113a3dcb mov edx, dword ptr [0x113c2a68] */
  EDX = (r32((uint32_t)(0x113c2a68)));
  /* 113a3dd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a3dd3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a3dd5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 113a3ddb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3de1 push edx */
  push32((uint32_t)(EDX));
  /* 113a3de2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3de5 push eax */
  push32((uint32_t)(EAX));
  /* 113a3de6 call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a3decu);
  /* 113a3dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3dee jne 0x113a3e04 */
  if (!C.zf) goto L_113a3e04;
  /* 113a3df0 mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
  /* 113a3dfa mov eax, 1 */
  EAX = (0x1u);
  /* 113a3dff jmp 0x113a40ce */
  goto L_113a40ce;
L_113a3e04:;
  /* 113a3e04 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113a3e07 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3e08 mov edx, dword ptr [0x113c2a78] */
  EDX = (r32((uint32_t)(0x113c2a78)));
  /* 113a3e0e push edx */
  push32((uint32_t)(EDX));
  /* 113a3e0f call 0x113a6440 */
  push32(0x113a3e14u); f_113a6440();
  /* 113a3e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3e19 jne 0x113a3f3f */
  if (!C.zf) goto L_113a3f3f;
  /* 113a3e1f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113a3e21 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113a3e24 push eax */
  push32((uint32_t)(EAX));
  /* 113a3e25 mov ecx, dword ptr [0x113c2a70] */
  ECX = (r32((uint32_t)(0x113c2a70)));
  /* 113a3e2b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a3e2d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a3e2f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 113a3e35 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3e3b push ecx */
  push32((uint32_t)(ECX));
  /* 113a3e3c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3e3f push edx */
  push32((uint32_t)(EDX));
  /* 113a3e40 call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a3e46u);
  /* 113a3e46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3e48 jne 0x113a3e5e */
  if (!C.zf) goto L_113a3e5e;
  /* 113a3e4a mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
  /* 113a3e54 mov eax, 1 */
  EAX = (0x1u);
  /* 113a3e59 jmp 0x113a40ce */
  goto L_113a40ce;
L_113a3e5e:;
  /* 113a3e5e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113a3e61 push eax */
  push32((uint32_t)(EAX));
  /* 113a3e62 mov ecx, dword ptr [0x113c2a74] */
  ECX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3e68 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3e69 call 0x113a6440 */
  push32(0x113a3e6eu); f_113a6440();
  /* 113a3e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3e73 jne 0x113a3ea0 */
  if (!C.zf) goto L_113a3ea0;
  /* 113a3e75 mov edx, dword ptr [0x113c2a7c] */
  EDX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3e7b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 113a3e81 mov dword ptr [0x113c2a7c], edx */
  w32((uint32_t)(0x113c2a7c), (EDX));
  /* 113a3e87 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3e8a mov dword ptr [0x113c2a80], eax */
  w32((uint32_t)(0x113c2a80), (EAX));
  /* 113a3e8f mov ecx, dword ptr [0x113c2a80] */
  ECX = (r32((uint32_t)(0x113c2a80)));
  /* 113a3e95 mov dword ptr [0x113c2a64], ecx */
  w32((uint32_t)(0x113c2a64), (ECX));
  /* 113a3e9b jmp 0x113a3f3f */
  goto L_113a3f3f;
L_113a3ea0:;
  /* 113a3ea0 mov edx, dword ptr [0x113c2a7c] */
  EDX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3ea6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 113a3ea9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a3eab jne 0x113a3f3f */
  if (!C.zf) goto L_113a3f3f;
  /* 113a3eb1 cmp dword ptr [0x113c2a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3eb8 je 0x113a3f0d */
  if (C.zf) goto L_113a3f0d;
  /* 113a3eba mov eax, dword ptr [0x113c2a6c] */
  EAX = (r32((uint32_t)(0x113c2a6c)));
  /* 113a3ebf push eax */
  push32((uint32_t)(EAX));
  /* 113a3ec0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113a3ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3ec4 mov edx, dword ptr [0x113c2a74] */
  EDX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3eca push edx */
  push32((uint32_t)(EDX));
  /* 113a3ecb call 0x113a6510 */
  push32(0x113a3ed0u); f_113a6510();
  /* 113a3ed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3ed5 jne 0x113a3f0d */
  if (!C.zf) goto L_113a3f0d;
  /* 113a3ed7 mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3edc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 113a3ede mov dword ptr [0x113c2a7c], eax */
  w32((uint32_t)(0x113c2a7c), (EAX));
  /* 113a3ee3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3ee6 mov dword ptr [0x113c2a80], ecx */
  w32((uint32_t)(0x113c2a80), (ECX));
  /* 113a3eec mov edx, dword ptr [0x113c2a74] */
  EDX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3ef2 push edx */
  push32((uint32_t)(EDX));
  /* 113a3ef3 call 0x11399440 */
  push32(0x113a3ef8u); f_11399440();
  /* 113a3ef8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3efb cmp eax, dword ptr [0x113c2a6c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c2a6c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3f01 jne 0x113a3f0b */
  if (!C.zf) goto L_113a3f0b;
  /* 113a3f03 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3f06 mov dword ptr [0x113c2a64], eax */
  w32((uint32_t)(0x113c2a64), (EAX));
L_113a3f0b:;
  /* 113a3f0b jmp 0x113a3f3f */
  goto L_113a3f3f;
L_113a3f0d:;
  /* 113a3f0d mov ecx, dword ptr [0x113c2a7c] */
  ECX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3f13 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113a3f16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a3f18 jne 0x113a3f3f */
  if (!C.zf) goto L_113a3f3f;
  /* 113a3f1a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3f1d push edx */
  push32((uint32_t)(EDX));
  /* 113a3f1e call 0x113a4450 */
  push32(0x113a3f23u); f_113a4450();
  /* 113a3f23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3f26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3f28 je 0x113a3f3f */
  if (C.zf) goto L_113a3f3f;
  /* 113a3f2a mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3f2f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 113a3f31 mov dword ptr [0x113c2a7c], eax */
  w32((uint32_t)(0x113c2a7c), (EAX));
  /* 113a3f36 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3f39 mov dword ptr [0x113c2a80], ecx */
  w32((uint32_t)(0x113c2a80), (ECX));
L_113a3f3f:;
  /* 113a3f3f mov edx, dword ptr [0x113c2a7c] */
  EDX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3f45 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 113a3f4b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3f51 je 0x113a40c1 */
  if (C.zf) goto L_113a40c1;
  /* 113a3f57 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113a3f59 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113a3f5c push eax */
  push32((uint32_t)(EAX));
  /* 113a3f5d mov ecx, dword ptr [0x113c2a70] */
  ECX = (r32((uint32_t)(0x113c2a70)));
  /* 113a3f63 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a3f65 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a3f67 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 113a3f6d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3f73 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3f74 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3f77 push edx */
  push32((uint32_t)(EDX));
  /* 113a3f78 call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a3f7eu);
  /* 113a3f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3f80 jne 0x113a3f96 */
  if (!C.zf) goto L_113a3f96;
  /* 113a3f82 mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
  /* 113a3f8c mov eax, 1 */
  EAX = (0x1u);
  /* 113a3f91 jmp 0x113a40ce */
  goto L_113a40ce;
L_113a3f96:;
  /* 113a3f96 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113a3f99 push eax */
  push32((uint32_t)(EAX));
  /* 113a3f9a mov ecx, dword ptr [0x113c2a74] */
  ECX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3fa1 call 0x113a6440 */
  push32(0x113a3fa6u); f_113a6440();
  /* 113a3fa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3fab jne 0x113a4060 */
  if (!C.zf) goto L_113a4060;
  /* 113a3fb1 mov edx, dword ptr [0x113c2a7c] */
  EDX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3fb7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 113a3fba mov dword ptr [0x113c2a7c], edx */
  w32((uint32_t)(0x113c2a7c), (EDX));
  /* 113a3fc0 cmp dword ptr [0x113c2a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3fc7 je 0x113a3fea */
  if (C.zf) goto L_113a3fea;
  /* 113a3fc9 mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a3fce or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 113a3fd1 mov dword ptr [0x113c2a7c], eax */
  w32((uint32_t)(0x113c2a7c), (EAX));
  /* 113a3fd6 cmp dword ptr [0x113c2a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3fdd jne 0x113a3fe8 */
  if (!C.zf) goto L_113a3fe8;
  /* 113a3fdf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a3fe2 mov dword ptr [0x113c2a64], ecx */
  w32((uint32_t)(0x113c2a64), (ECX));
L_113a3fe8:;
  /* 113a3fe8 jmp 0x113a405e */
  goto L_113a405e;
L_113a3fea:;
  /* 113a3fea cmp dword ptr [0x113c2a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3ff1 je 0x113a403f */
  if (C.zf) goto L_113a403f;
  /* 113a3ff3 mov edx, dword ptr [0x113c2a74] */
  EDX = (r32((uint32_t)(0x113c2a74)));
  /* 113a3ff9 push edx */
  push32((uint32_t)(EDX));
  /* 113a3ffa call 0x11399440 */
  push32(0x113a3fffu); f_11399440();
  /* 113a3fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4002 cmp eax, dword ptr [0x113c2a6c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c2a6c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4008 jne 0x113a403f */
  if (!C.zf) goto L_113a403f;
  /* 113a400a push 1 */
  push32((uint32_t)(0x1u));
  /* 113a400c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a400f push eax */
  push32((uint32_t)(EAX));
  /* 113a4010 call 0x113a44a0 */
  push32(0x113a4015u); f_113a44a0();
  /* 113a4015 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a401a je 0x113a403d */
  if (C.zf) goto L_113a403d;
  /* 113a401c mov ecx, dword ptr [0x113c2a7c] */
  ECX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a4022 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 113a4025 mov dword ptr [0x113c2a7c], ecx */
  w32((uint32_t)(0x113c2a7c), (ECX));
  /* 113a402b cmp dword ptr [0x113c2a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4032 jne 0x113a403d */
  if (!C.zf) goto L_113a403d;
  /* 113a4034 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a4037 mov dword ptr [0x113c2a64], edx */
  w32((uint32_t)(0x113c2a64), (EDX));
L_113a403d:;
  /* 113a403d jmp 0x113a405e */
  goto L_113a405e;
L_113a403f:;
  /* 113a403f mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a4044 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 113a4047 mov dword ptr [0x113c2a7c], eax */
  w32((uint32_t)(0x113c2a7c), (EAX));
  /* 113a404c cmp dword ptr [0x113c2a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4053 jne 0x113a405e */
  if (!C.zf) goto L_113a405e;
  /* 113a4055 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a4058 mov dword ptr [0x113c2a64], ecx */
  w32((uint32_t)(0x113c2a64), (ECX));
L_113a405e:;
  /* 113a405e jmp 0x113a40c1 */
  goto L_113a40c1;
L_113a4060:;
  /* 113a4060 cmp dword ptr [0x113c2a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4067 jne 0x113a40c1 */
  if (!C.zf) goto L_113a40c1;
  /* 113a4069 cmp dword ptr [0x113c2a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4070 je 0x113a40c1 */
  if (C.zf) goto L_113a40c1;
  /* 113a4072 mov edx, dword ptr [0x113c2a6c] */
  EDX = (r32((uint32_t)(0x113c2a6c)));
  /* 113a4078 push edx */
  push32((uint32_t)(EDX));
  /* 113a4079 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 113a407c push eax */
  push32((uint32_t)(EAX));
  /* 113a407d mov ecx, dword ptr [0x113c2a74] */
  ECX = (r32((uint32_t)(0x113c2a74)));
  /* 113a4083 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4084 call 0x113a6510 */
  push32(0x113a4089u); f_113a6510();
  /* 113a4089 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a408c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a408e jne 0x113a40c1 */
  if (!C.zf) goto L_113a40c1;
  /* 113a4090 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a4092 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a4095 push edx */
  push32((uint32_t)(EDX));
  /* 113a4096 call 0x113a44a0 */
  push32(0x113a409bu); f_113a44a0();
  /* 113a409b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a409e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a40a0 je 0x113a40c1 */
  if (C.zf) goto L_113a40c1;
  /* 113a40a2 mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a40a7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 113a40aa mov dword ptr [0x113c2a7c], eax */
  w32((uint32_t)(0x113c2a7c), (EAX));
  /* 113a40af cmp dword ptr [0x113c2a64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a40b6 jne 0x113a40c1 */
  if (!C.zf) goto L_113a40c1;
  /* 113a40b8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a40bb mov dword ptr [0x113c2a64], ecx */
  w32((uint32_t)(0x113c2a64), (ECX));
L_113a40c1:;
  /* 113a40c1 mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a40c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113a40c9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a40cb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a40cd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_113a40ce:;
  /* 113a40ce mov esp, ebp */
  ESP = (EBP);
  /* 113a40d0 pop ebp */
  EBP = (pop32());
  /* 113a40d1 ret 4 */
  ESPCHK(0x113a3db0u, _esp0);
  ESP += 8; return;
}

/* FUN_100140e0 @ 0x113a40e0 (116 bytes, 33 insns) */
void f_113a40e0(void) {
  FTRACE(0x113a40e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a40e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a40e1 mov ebp, esp */
  EBP = (ESP);
  /* 113a40e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a40e4 mov eax, dword ptr [0x113c2a74] */
  EAX = (r32((uint32_t)(0x113c2a74)));
  /* 113a40e9 push eax */
  push32((uint32_t)(EAX));
  /* 113a40ea call 0x11399440 */
  push32(0x113a40efu); f_11399440();
  /* 113a40ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a40f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a40f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a40f7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 113a40fa mov dword ptr [0x113c2a70], ecx */
  w32((uint32_t)(0x113c2a70), (ECX));
  /* 113a4100 cmp dword ptr [0x113c2a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4107 je 0x113a4112 */
  if (C.zf) goto L_113a4112;
  /* 113a4109 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 113a4110 jmp 0x113a4124 */
  goto L_113a4124;
L_113a4112:;
  /* 113a4112 mov edx, dword ptr [0x113c2a74] */
  EDX = (r32((uint32_t)(0x113c2a74)));
  /* 113a4118 push edx */
  push32((uint32_t)(EDX));
  /* 113a4119 call 0x113a4790 */
  push32(0x113a411eu); f_113a4790();
  /* 113a411e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4121 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a4124:;
  /* 113a4124 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4127 mov dword ptr [0x113c2a6c], eax */
  w32((uint32_t)(0x113c2a6c), (EAX));
  /* 113a412c push 1 */
  push32((uint32_t)(0x1u));
  /* 113a412e push 0x113a4160 */
  push32((uint32_t)(0x113a4160u));
  /* 113a4133 call dword ptr [0x113c52f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f0))), 0x113a4139u);
  /* 113a4139 mov ecx, dword ptr [0x113c2a7c] */
  ECX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a413f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113a4142 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a4144 jne 0x113a4150 */
  if (!C.zf) goto L_113a4150;
  /* 113a4146 mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
L_113a4150:;
  /* 113a4150 mov esp, ebp */
  ESP = (EBP);
  /* 113a4152 pop ebp */
  EBP = (pop32());
  /* 113a4153 ret  */
  ESPCHK(0x113a40e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014160 @ 0x113a4160 (287 bytes, 86 insns) */
void f_113a4160(void) {
  FTRACE(0x113a4160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4160 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4161 mov ebp, esp */
  EBP = (ESP);
  /* 113a4163 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4169 push eax */
  push32((uint32_t)(EAX));
  /* 113a416a call 0x113a4710 */
  push32(0x113a416fu); f_113a4710();
  /* 113a416f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4172 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 113a4175 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113a4177 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113a417a push ecx */
  push32((uint32_t)(ECX));
  /* 113a417b mov edx, dword ptr [0x113c2a70] */
  EDX = (r32((uint32_t)(0x113c2a70)));
  /* 113a4181 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a4183 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4185 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 113a418b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4191 push edx */
  push32((uint32_t)(EDX));
  /* 113a4192 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a4195 push eax */
  push32((uint32_t)(EAX));
  /* 113a4196 call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a419cu);
  /* 113a419c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a419e jne 0x113a41b4 */
  if (!C.zf) goto L_113a41b4;
  /* 113a41a0 mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
  /* 113a41aa mov eax, 1 */
  EAX = (0x1u);
  /* 113a41af jmp 0x113a4279 */
  goto L_113a4279;
L_113a41b4:;
  /* 113a41b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113a41b7 push ecx */
  push32((uint32_t)(ECX));
  /* 113a41b8 mov edx, dword ptr [0x113c2a74] */
  EDX = (r32((uint32_t)(0x113c2a74)));
  /* 113a41be push edx */
  push32((uint32_t)(EDX));
  /* 113a41bf call 0x113a6440 */
  push32(0x113a41c4u); f_113a6440();
  /* 113a41c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a41c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a41c9 jne 0x113a4209 */
  if (!C.zf) goto L_113a4209;
  /* 113a41cb cmp dword ptr [0x113c2a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a41d2 jne 0x113a41e6 */
  if (!C.zf) goto L_113a41e6;
  /* 113a41d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a41d6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a41d9 push eax */
  push32((uint32_t)(EAX));
  /* 113a41da call 0x113a44a0 */
  push32(0x113a41dfu); f_113a44a0();
  /* 113a41df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a41e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a41e4 je 0x113a4207 */
  if (C.zf) goto L_113a4207;
L_113a41e6:;
  /* 113a41e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a41e9 mov dword ptr [0x113c2a80], ecx */
  w32((uint32_t)(0x113c2a80), (ECX));
  /* 113a41ef mov edx, dword ptr [0x113c2a80] */
  EDX = (r32((uint32_t)(0x113c2a80)));
  /* 113a41f5 mov dword ptr [0x113c2a64], edx */
  w32((uint32_t)(0x113c2a64), (EDX));
  /* 113a41fb mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a4200 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 113a4202 mov dword ptr [0x113c2a7c], eax */
  w32((uint32_t)(0x113c2a7c), (EAX));
L_113a4207:;
  /* 113a4207 jmp 0x113a426c */
  goto L_113a426c;
L_113a4209:;
  /* 113a4209 cmp dword ptr [0x113c2a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4210 jne 0x113a426c */
  if (!C.zf) goto L_113a426c;
  /* 113a4212 cmp dword ptr [0x113c2a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4219 je 0x113a426c */
  if (C.zf) goto L_113a426c;
  /* 113a421b mov ecx, dword ptr [0x113c2a6c] */
  ECX = (r32((uint32_t)(0x113c2a6c)));
  /* 113a4221 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4222 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 113a4225 push edx */
  push32((uint32_t)(EDX));
  /* 113a4226 mov eax, dword ptr [0x113c2a74] */
  EAX = (r32((uint32_t)(0x113c2a74)));
  /* 113a422b push eax */
  push32((uint32_t)(EAX));
  /* 113a422c call 0x113a6510 */
  push32(0x113a4231u); f_113a6510();
  /* 113a4231 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a4236 jne 0x113a426c */
  if (!C.zf) goto L_113a426c;
  /* 113a4238 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a423a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a423d push ecx */
  push32((uint32_t)(ECX));
  /* 113a423e call 0x113a44a0 */
  push32(0x113a4243u); f_113a44a0();
  /* 113a4243 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4246 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a4248 je 0x113a426c */
  if (C.zf) goto L_113a426c;
  /* 113a424a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a424d mov dword ptr [0x113c2a80], edx */
  w32((uint32_t)(0x113c2a80), (EDX));
  /* 113a4253 mov eax, dword ptr [0x113c2a80] */
  EAX = (r32((uint32_t)(0x113c2a80)));
  /* 113a4258 mov dword ptr [0x113c2a64], eax */
  w32((uint32_t)(0x113c2a64), (EAX));
  /* 113a425d mov ecx, dword ptr [0x113c2a7c] */
  ECX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a4263 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113a4266 mov dword ptr [0x113c2a7c], ecx */
  w32((uint32_t)(0x113c2a7c), (ECX));
L_113a426c:;
  /* 113a426c mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a4271 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113a4274 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a4276 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4278 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_113a4279:;
  /* 113a4279 mov esp, ebp */
  ESP = (EBP);
  /* 113a427b pop ebp */
  EBP = (pop32());
  /* 113a427c ret 4 */
  ESPCHK(0x113a4160u, _esp0);
  ESP += 8; return;
}

/* FUN_10014280 @ 0x113a4280 (69 bytes, 20 insns) */
void f_113a4280(void) {
  FTRACE(0x113a4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4280 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4281 mov ebp, esp */
  EBP = (ESP);
  /* 113a4283 mov eax, dword ptr [0x113c2a78] */
  EAX = (r32((uint32_t)(0x113c2a78)));
  /* 113a4288 push eax */
  push32((uint32_t)(EAX));
  /* 113a4289 call 0x11399440 */
  push32(0x113a428eu); f_11399440();
  /* 113a428e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4291 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a4293 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4296 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 113a4299 mov dword ptr [0x113c2a68], ecx */
  w32((uint32_t)(0x113c2a68), (ECX));
  /* 113a429f push 1 */
  push32((uint32_t)(0x1u));
  /* 113a42a1 push 0x113a42d0 */
  push32((uint32_t)(0x113a42d0u));
  /* 113a42a6 call dword ptr [0x113c52f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f0))), 0x113a42acu);
  /* 113a42ac mov edx, dword ptr [0x113c2a7c] */
  EDX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a42b2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113a42b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a42b7 jne 0x113a42c3 */
  if (!C.zf) goto L_113a42c3;
  /* 113a42b9 mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
L_113a42c3:;
  /* 113a42c3 pop ebp */
  EBP = (pop32());
  /* 113a42c4 ret  */
  ESPCHK(0x113a4280u, _esp0);
  ESP += 4; return;
}

/* FUN_100142d0 @ 0x113a42d0 (172 bytes, 54 insns) */
void f_113a42d0(void) {
  FTRACE(0x113a42d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a42d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a42d1 mov ebp, esp */
  EBP = (ESP);
  /* 113a42d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a42d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a42d9 push eax */
  push32((uint32_t)(EAX));
  /* 113a42da call 0x113a4710 */
  push32(0x113a42dfu); f_113a4710();
  /* 113a42df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a42e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 113a42e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113a42e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113a42ea push ecx */
  push32((uint32_t)(ECX));
  /* 113a42eb mov edx, dword ptr [0x113c2a68] */
  EDX = (r32((uint32_t)(0x113c2a68)));
  /* 113a42f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a42f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a42f5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 113a42fb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4301 push edx */
  push32((uint32_t)(EDX));
  /* 113a4302 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a4305 push eax */
  push32((uint32_t)(EAX));
  /* 113a4306 call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a430cu);
  /* 113a430c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a430e jne 0x113a4321 */
  if (!C.zf) goto L_113a4321;
  /* 113a4310 mov dword ptr [0x113c2a7c], 0 */
  w32((uint32_t)(0x113c2a7c), (0x0u));
  /* 113a431a mov eax, 1 */
  EAX = (0x1u);
  /* 113a431f jmp 0x113a4376 */
  goto L_113a4376;
L_113a4321:;
  /* 113a4321 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 113a4324 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4325 mov edx, dword ptr [0x113c2a78] */
  EDX = (r32((uint32_t)(0x113c2a78)));
  /* 113a432b push edx */
  push32((uint32_t)(EDX));
  /* 113a432c call 0x113a6440 */
  push32(0x113a4331u); f_113a6440();
  /* 113a4331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a4336 jne 0x113a4369 */
  if (!C.zf) goto L_113a4369;
  /* 113a4338 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a433b push eax */
  push32((uint32_t)(EAX));
  /* 113a433c call 0x113a4450 */
  push32(0x113a4341u); f_113a4450();
  /* 113a4341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a4346 je 0x113a4369 */
  if (C.zf) goto L_113a4369;
  /* 113a4348 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 113a434b mov dword ptr [0x113c2a80], ecx */
  w32((uint32_t)(0x113c2a80), (ECX));
  /* 113a4351 mov edx, dword ptr [0x113c2a80] */
  EDX = (r32((uint32_t)(0x113c2a80)));
  /* 113a4357 mov dword ptr [0x113c2a64], edx */
  w32((uint32_t)(0x113c2a64), (EDX));
  /* 113a435d mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a4362 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 113a4364 mov dword ptr [0x113c2a7c], eax */
  w32((uint32_t)(0x113c2a7c), (EAX));
L_113a4369:;
  /* 113a4369 mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a436e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 113a4371 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a4373 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4375 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_113a4376:;
  /* 113a4376 mov esp, ebp */
  ESP = (EBP);
  /* 113a4378 pop ebp */
  EBP = (pop32());
  /* 113a4379 ret 4 */
  ESPCHK(0x113a42d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014380 @ 0x113a4380 (43 bytes, 11 insns) */
void f_113a4380(void) {
  FTRACE(0x113a4380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4380 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4381 mov ebp, esp */
  EBP = (ESP);
  /* 113a4383 mov eax, dword ptr [0x113c2a7c] */
  EAX = (r32((uint32_t)(0x113c2a7c)));
  /* 113a4388 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 113a438d mov dword ptr [0x113c2a7c], eax */
  w32((uint32_t)(0x113c2a7c), (EAX));
  /* 113a4392 call dword ptr [0x113c52ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52ec))), 0x113a4398u);
  /* 113a4398 mov dword ptr [0x113c2a80], eax */
  w32((uint32_t)(0x113c2a80), (EAX));
  /* 113a439d mov ecx, dword ptr [0x113c2a80] */
  ECX = (r32((uint32_t)(0x113c2a80)));
  /* 113a43a3 mov dword ptr [0x113c2a64], ecx */
  w32((uint32_t)(0x113c2a64), (ECX));
  /* 113a43a9 pop ebp */
  EBP = (pop32());
  /* 113a43aa ret  */
  ESPCHK(0x113a4380u, _esp0);
  ESP += 4; return;
}

/* FUN_100143b0 @ 0x113a43b0 (155 bytes, 57 insns) */
void f_113a43b0(void) {
  FTRACE(0x113a43b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a43b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a43b1 mov ebp, esp */
  EBP = (ESP);
  /* 113a43b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a43b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a43ba je 0x113a43db */
  if (C.zf) goto L_113a43db;
  /* 113a43bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a43bf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a43c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a43c4 je 0x113a43db */
  if (C.zf) goto L_113a43db;
  /* 113a43c6 push 0x113beb84 */
  push32((uint32_t)(0x113beb84u));
  /* 113a43cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a43ce push edx */
  push32((uint32_t)(EDX));
  /* 113a43cf call 0x1139f090 */
  push32(0x113a43d4u); f_1139f090();
  /* 113a43d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a43d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a43d9 jne 0x113a4403 */
  if (!C.zf) goto L_113a4403;
L_113a43db:;
  /* 113a43db push 8 */
  push32((uint32_t)(0x8u));
  /* 113a43dd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 113a43e0 push eax */
  push32((uint32_t)(EAX));
  /* 113a43e1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 113a43e6 mov ecx, dword ptr [0x113c2a80] */
  ECX = (r32((uint32_t)(0x113c2a80)));
  /* 113a43ec push ecx */
  push32((uint32_t)(ECX));
  /* 113a43ed call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a43f3u);
  /* 113a43f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a43f5 jne 0x113a43fb */
  if (!C.zf) goto L_113a43fb;
  /* 113a43f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a43f9 jmp 0x113a4447 */
  goto L_113a4447;
L_113a43fb:;
  /* 113a43fb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 113a43fe mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113a4401 jmp 0x113a443b */
  goto L_113a443b;
L_113a4403:;
  /* 113a4403 push 0x113beb80 */
  push32((uint32_t)(0x113beb80u));
  /* 113a4408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a440b push eax */
  push32((uint32_t)(EAX));
  /* 113a440c call 0x1139f090 */
  push32(0x113a4411u); f_1139f090();
  /* 113a4411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a4416 jne 0x113a443b */
  if (!C.zf) goto L_113a443b;
  /* 113a4418 push 8 */
  push32((uint32_t)(0x8u));
  /* 113a441a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 113a441d push ecx */
  push32((uint32_t)(ECX));
  /* 113a441e push 0xb */
  push32((uint32_t)(0xbu));
  /* 113a4420 mov edx, dword ptr [0x113c2a80] */
  EDX = (r32((uint32_t)(0x113c2a80)));
  /* 113a4426 push edx */
  push32((uint32_t)(EDX));
  /* 113a4427 call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a442du);
  /* 113a442d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a442f jne 0x113a4435 */
  if (!C.zf) goto L_113a4435;
  /* 113a4431 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a4433 jmp 0x113a4447 */
  goto L_113a4447;
L_113a4435:;
  /* 113a4435 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 113a4438 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113a443b:;
  /* 113a443b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a443e push ecx */
  push32((uint32_t)(ECX));
  /* 113a443f call 0x1139ee40 */
  push32(0x113a4444u); f_1139ee40();
  /* 113a4444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a4447:;
  /* 113a4447 mov esp, ebp */
  ESP = (EBP);
  /* 113a4449 pop ebp */
  EBP = (pop32());
  /* 113a444a ret  */
  ESPCHK(0x113a43b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014450 @ 0x113a4450 (79 bytes, 26 insns) */
void f_113a4450(void) {
  FTRACE(0x113a4450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4450 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4451 mov ebp, esp */
  EBP = (ESP);
  /* 113a4453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4456 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 113a445a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 113a445e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a4465 jmp 0x113a4470 */
  goto L_113a4470;
L_113a4467:;
  /* 113a4467 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a446a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a446d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113a4470:;
  /* 113a4470 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4474 jae 0x113a4496 */
  if (!C.cf) goto L_113a4496;
  /* 113a4476 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4479 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a447f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a4482 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a4484 mov cx, word ptr [eax*2 + 0x113c1af4] */
  CX = (r16((uint32_t)(EAX*2 + 0x113c1af4)));
  /* 113a448c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a448e jne 0x113a4494 */
  if (!C.zf) goto L_113a4494;
  /* 113a4490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a4492 jmp 0x113a449b */
  goto L_113a449b;
L_113a4494:;
  /* 113a4494 jmp 0x113a4467 */
  goto L_113a4467;
L_113a4496:;
  /* 113a4496 mov eax, 1 */
  EAX = (0x1u);
L_113a449b:;
  /* 113a449b mov esp, ebp */
  ESP = (EBP);
  /* 113a449d pop ebp */
  EBP = (pop32());
  /* 113a449e ret  */
  ESPCHK(0x113a4450u, _esp0);
  ESP += 4; return;
}

/* FUN_100144a0 @ 0x113a44a0 (135 bytes, 48 insns) */
void f_113a44a0(void) {
  FTRACE(0x113a44a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a44a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a44a1 mov ebp, esp */
  EBP = (ESP);
  /* 113a44a3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a44a6 push esi */
  push32((uint32_t)(ESI));
  /* 113a44a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a44aa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a44af and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a44b4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a44b9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 113a44bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a44c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a44c4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 113a44c6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 113a44c9 push ecx */
  push32((uint32_t)(ECX));
  /* 113a44ca push 1 */
  push32((uint32_t)(0x1u));
  /* 113a44cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a44cf push edx */
  push32((uint32_t)(EDX));
  /* 113a44d0 call dword ptr [0x113c2a84] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c2a84))), 0x113a44d6u);
  /* 113a44d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a44d8 jne 0x113a44de */
  if (!C.zf) goto L_113a44de;
  /* 113a44da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a44dc jmp 0x113a4522 */
  goto L_113a4522;
L_113a44de:;
  /* 113a44de lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 113a44e1 push eax */
  push32((uint32_t)(EAX));
  /* 113a44e2 call 0x113a4710 */
  push32(0x113a44e7u); f_113a4710();
  /* 113a44e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a44ea cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a44ed je 0x113a451d */
  if (C.zf) goto L_113a451d;
  /* 113a44ef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a44f3 je 0x113a451d */
  if (C.zf) goto L_113a451d;
  /* 113a44f5 mov ecx, dword ptr [0x113c2a74] */
  ECX = (r32((uint32_t)(0x113c2a74)));
  /* 113a44fb push ecx */
  push32((uint32_t)(ECX));
  /* 113a44fc call 0x113a4790 */
  push32(0x113a4501u); f_113a4790();
  /* 113a4501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4504 mov esi, eax */
  ESI = (EAX);
  /* 113a4506 mov edx, dword ptr [0x113c2a74] */
  EDX = (r32((uint32_t)(0x113c2a74)));
  /* 113a450c push edx */
  push32((uint32_t)(EDX));
  /* 113a450d call 0x11399440 */
  push32(0x113a4512u); f_11399440();
  /* 113a4512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4515 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4517 jne 0x113a451d */
  if (!C.zf) goto L_113a451d;
  /* 113a4519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a451b jmp 0x113a4522 */
  goto L_113a4522;
L_113a451d:;
  /* 113a451d mov eax, 1 */
  EAX = (0x1u);
L_113a4522:;
  /* 113a4522 pop esi */
  ESI = (pop32());
  /* 113a4523 mov esp, ebp */
  ESP = (EBP);
  /* 113a4525 pop ebp */
  EBP = (pop32());
  /* 113a4526 ret  */
  ESPCHK(0x113a44a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014530 @ 0x113a4530 (77 bytes, 18 insns) */
void f_113a4530(void) {
  FTRACE(0x113a4530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4530 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4531 mov ebp, esp */
  EBP = (ESP);
  /* 113a4533 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4539 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 113a4543 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 113a4549 push eax */
  push32((uint32_t)(EAX));
  /* 113a454a call dword ptr [0x113c52e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52e8))), 0x113a4550u);
  /* 113a4550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a4552 je 0x113a4569 */
  if (C.zf) goto L_113a4569;
  /* 113a4554 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a455b jne 0x113a4569 */
  if (!C.zf) goto L_113a4569;
  /* 113a455d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 113a4567 jmp 0x113a4573 */
  goto L_113a4573;
L_113a4569:;
  /* 113a4569 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_113a4573:;
  /* 113a4573 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 113a4579 mov esp, ebp */
  ESP = (EBP);
  /* 113a457b pop ebp */
  EBP = (pop32());
  /* 113a457c ret  */
  ESPCHK(0x113a4530u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x113a4580 (388 bytes, 118 insns) */
void f_113a4580(void) {
  FTRACE(0x113a4580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4580 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4581 mov ebp, esp */
  EBP = (ESP);
  /* 113a4583 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4586 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a458d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 113a4594 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113a459b:;
  /* 113a459b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a459e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a45a1 jg 0x113a46e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a46e8;
  /* 113a45a7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a45aa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a45ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a45ae sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a45b0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113a45b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a45b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a45b8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a45bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a45be cmp edx, dword ptr [ecx + 0x113c1650] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x113c1650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a45c4 jne 0x113a46be */
  if (!C.zf) goto L_113a46be;
  /* 113a45ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a45cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113a45d0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a45d4 ja 0x113a45f7 */
  if ((!C.cf&&!C.zf)) goto L_113a45f7;
  /* 113a45d6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a45da je 0x113a4669 */
  if (C.zf) goto L_113a4669;
  /* 113a45e0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a45e4 je 0x113a4614 */
  if (C.zf) goto L_113a4614;
  /* 113a45e6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a45ea je 0x113a4636 */
  if (C.zf) goto L_113a4636;
  /* 113a45ec cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a45f0 je 0x113a4658 */
  if (C.zf) goto L_113a4658;
  /* 113a45f2 jmp 0x113a4688 */
  goto L_113a4688;
L_113a45f7:;
  /* 113a45f7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a45fe je 0x113a4625 */
  if (C.zf) goto L_113a4625;
  /* 113a4600 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4607 je 0x113a4647 */
  if (C.zf) goto L_113a4647;
  /* 113a4609 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4610 je 0x113a467a */
  if (C.zf) goto L_113a467a;
  /* 113a4612 jmp 0x113a4688 */
  goto L_113a4688;
L_113a4614:;
  /* 113a4614 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4617 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a461a add ecx, 0x113c1654 */
  { uint32_t _a=(ECX),_b=(0x113c1654u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4620 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a4623 jmp 0x113a4688 */
  goto L_113a4688;
L_113a4625:;
  /* 113a4625 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4628 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a462b mov eax, dword ptr [edx + 0x113c165c] */
  EAX = (r32((uint32_t)(EDX + 0x113c165c)));
  /* 113a4631 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a4634 jmp 0x113a4688 */
  goto L_113a4688;
L_113a4636:;
  /* 113a4636 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4639 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a463c add ecx, 0x113c1660 */
  { uint32_t _a=(ECX),_b=(0x113c1660u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4642 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a4645 jmp 0x113a4688 */
  goto L_113a4688;
L_113a4647:;
  /* 113a4647 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a464a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a464d mov eax, dword ptr [edx + 0x113c1664] */
  EAX = (r32((uint32_t)(EDX + 0x113c1664)));
  /* 113a4653 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a4656 jmp 0x113a4688 */
  goto L_113a4688;
L_113a4658:;
  /* 113a4658 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a465b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a465e add ecx, 0x113c1668 */
  { uint32_t _a=(ECX),_b=(0x113c1668u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4664 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a4667 jmp 0x113a4688 */
  goto L_113a4688;
L_113a4669:;
  /* 113a4669 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a466c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a466f add edx, 0x113c166c */
  { uint32_t _a=(EDX),_b=(0x113c166cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4675 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a4678 jmp 0x113a4688 */
  goto L_113a4688;
L_113a467a:;
  /* 113a467a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a467d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a4680 add eax, 0x113c1674 */
  { uint32_t _a=(EAX),_b=(0x113c1674u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4685 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113a4688:;
  /* 113a4688 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a468c je 0x113a4694 */
  if (C.zf) goto L_113a4694;
  /* 113a468e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4692 jge 0x113a4696 */
  if ((C.sf==C.of)) goto L_113a4696;
L_113a4694:;
  /* 113a4694 jmp 0x113a46e8 */
  goto L_113a46e8;
L_113a4696:;
  /* 113a4696 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a4699 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a469c push ecx */
  push32((uint32_t)(ECX));
  /* 113a469d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a46a0 push edx */
  push32((uint32_t)(EDX));
  /* 113a46a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a46a4 push eax */
  push32((uint32_t)(EAX));
  /* 113a46a5 call 0x11399e30 */
  push32(0x113a46aau); f_11399e30();
  /* 113a46aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a46ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a46b0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a46b3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 113a46b7 mov eax, 1 */
  EAX = (0x1u);
  /* 113a46bc jmp 0x113a46fe */
  goto L_113a46fe;
L_113a46be:;
  /* 113a46be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a46c1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a46c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a46c7 cmp eax, dword ptr [edx + 0x113c1650] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x113c1650))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a46cd jae 0x113a46da */
  if (!C.cf) goto L_113a46da;
  /* 113a46cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a46d2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a46d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a46d8 jmp 0x113a46e3 */
  goto L_113a46e3;
L_113a46da:;
  /* 113a46da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a46dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a46e0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113a46e3:;
  /* 113a46e3 jmp 0x113a459b */
  goto L_113a459b;
L_113a46e8:;
  /* 113a46e8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a46eb push eax */
  push32((uint32_t)(EAX));
  /* 113a46ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a46ef push ecx */
  push32((uint32_t)(ECX));
  /* 113a46f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a46f3 push edx */
  push32((uint32_t)(EDX));
  /* 113a46f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a46f7 push eax */
  push32((uint32_t)(EAX));
  /* 113a46f8 call dword ptr [0x113c52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f4))), 0x113a46feu);
L_113a46fe:;
  /* 113a46fe mov esp, ebp */
  ESP = (EBP);
  /* 113a4700 pop ebp */
  EBP = (pop32());
  /* 113a4701 ret 0x10 */
  ESPCHK(0x113a4580u, _esp0);
  ESP += 20; return;
}

/* FUN_10014710 @ 0x113a4710 (118 bytes, 42 insns) */
void f_113a4710(void) {
  FTRACE(0x113a4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4710 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4711 mov ebp, esp */
  EBP = (ESP);
  /* 113a4713 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4716 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113a471d:;
  /* 113a471d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4720 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a4722 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 113a4725 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a4729 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a472c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a472f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a4732 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a4734 je 0x113a477f */
  if (C.zf) goto L_113a477f;
  /* 113a4736 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a473a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a473d jl 0x113a4752 */
  if ((C.sf!=C.of)) goto L_113a4752;
  /* 113a473f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a4743 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4746 jg 0x113a4752 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a4752;
  /* 113a4748 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 113a474b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113a474d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 113a4750 jmp 0x113a476c */
  goto L_113a476c;
L_113a4752:;
  /* 113a4752 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a4756 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4759 jl 0x113a476c */
  if ((C.sf!=C.of)) goto L_113a476c;
  /* 113a475b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a475f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4762 jg 0x113a476c */
  if ((!C.zf&&C.sf==C.of)) goto L_113a476c;
  /* 113a4764 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 113a4767 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113a4769 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_113a476c:;
  /* 113a476c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a476f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 113a4772 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a4776 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 113a477a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a477d jmp 0x113a471d */
  goto L_113a471d;
L_113a477f:;
  /* 113a477f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4782 mov esp, ebp */
  ESP = (EBP);
  /* 113a4784 pop ebp */
  EBP = (pop32());
  /* 113a4785 ret  */
  ESPCHK(0x113a4710u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x113a4790 (101 bytes, 36 insns) */
void f_113a4790(void) {
  FTRACE(0x113a4790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4790 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4791 mov ebp, esp */
  EBP = (ESP);
  /* 113a4793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4796 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a479d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a47a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a47a2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 113a47a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a47a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a47ab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113a47ae:;
  /* 113a47ae movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113a47b2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a47b5 jl 0x113a47c0 */
  if ((C.sf!=C.of)) goto L_113a47c0;
  /* 113a47b7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113a47bb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a47be jle 0x113a47d2 */
  if ((C.zf||C.sf!=C.of)) goto L_113a47d2;
L_113a47c0:;
  /* 113a47c0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113a47c4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a47c7 jl 0x113a47ee */
  if ((C.sf!=C.of)) goto L_113a47ee;
  /* 113a47c9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 113a47cd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a47d0 jg 0x113a47ee */
  if ((!C.zf&&C.sf==C.of)) goto L_113a47ee;
L_113a47d2:;
  /* 113a47d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a47d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a47d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a47db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a47de mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a47e0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 113a47e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a47e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a47e9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113a47ec jmp 0x113a47ae */
  goto L_113a47ae;
L_113a47ee:;
  /* 113a47ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a47f1 mov esp, ebp */
  ESP = (EBP);
  /* 113a47f3 pop ebp */
  EBP = (pop32());
  /* 113a47f4 ret  */
  ESPCHK(0x113a4790u, _esp0);
  ESP += 4; return;
}

/* FUN_10014800 @ 0x113a4800 (237 bytes, 81 insns) */
void f_113a4800(void) {
  FTRACE(0x113a4800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4800 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4801 mov ebp, esp */
  EBP = (ESP);
  /* 113a4803 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4804 cmp dword ptr [0x113c3eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c3eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a480b jne 0x113a4822 */
  if (!C.zf) goto L_113a4822;
  /* 113a480d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a4810 push eax */
  push32((uint32_t)(EAX));
  /* 113a4811 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4814 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4815 call 0x113a6630 */
  push32(0x113a481au); f_113a6630();
  /* 113a481a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a481d jmp 0x113a48e9 */
  goto L_113a48e9;
L_113a4822:;
  /* 113a4822 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113a4824 call 0x1139a010 */
  push32(0x113a4829u); f_1139a010();
  /* 113a4829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a482c jmp 0x113a4837 */
  goto L_113a4837;
L_113a482e:;
  /* 113a482e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4831 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4834 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113a4837:;
  /* 113a4837 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a483a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 113a483e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 113a4842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4845 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a484b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a484d je 0x113a48cb */
  if (C.zf) goto L_113a48cb;
  /* 113a484f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4852 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a4857 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a4859 mov cl, byte ptr [eax + 0x113c3fc1] */
  CL = (r8((uint32_t)(EAX + 0x113c3fc1)));
  /* 113a485f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 113a4862 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a4864 je 0x113a48b6 */
  if (C.zf) goto L_113a48b6;
  /* 113a4866 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4869 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a486c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113a486f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4872 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a4874 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a4876 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a4878 jne 0x113a4888 */
  if (!C.zf) goto L_113a4888;
  /* 113a487a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113a487c call 0x1139a0b0 */
  push32(0x113a4881u); f_1139a0b0();
  /* 113a4881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a4886 jmp 0x113a48e9 */
  goto L_113a48e9;
L_113a4888:;
  /* 113a4888 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a488b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a4891 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113a4894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4897 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a4899 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a489b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 113a489d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a48a0 jne 0x113a48b4 */
  if (!C.zf) goto L_113a48b4;
  /* 113a48a2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113a48a4 call 0x1139a0b0 */
  push32(0x113a48a9u); f_1139a0b0();
  /* 113a48a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a48ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a48af sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a48b2 jmp 0x113a48e9 */
  goto L_113a48e9;
L_113a48b4:;
  /* 113a48b4 jmp 0x113a48c6 */
  goto L_113a48c6;
L_113a48b6:;
  /* 113a48b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a48b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a48bf cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a48c2 jne 0x113a48c6 */
  if (!C.zf) goto L_113a48c6;
  /* 113a48c4 jmp 0x113a48cb */
  goto L_113a48cb;
L_113a48c6:;
  /* 113a48c6 jmp 0x113a482e */
  goto L_113a482e;
L_113a48cb:;
  /* 113a48cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113a48cd call 0x1139a0b0 */
  push32(0x113a48d2u); f_1139a0b0();
  /* 113a48d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a48d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a48d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a48dd cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a48e0 jne 0x113a48e7 */
  if (!C.zf) goto L_113a48e7;
  /* 113a48e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a48e5 jmp 0x113a48e9 */
  goto L_113a48e9;
L_113a48e7:;
  /* 113a48e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a48e9:;
  /* 113a48e9 mov esp, ebp */
  ESP = (EBP);
  /* 113a48eb pop ebp */
  EBP = (pop32());
  /* 113a48ec ret  */
  ESPCHK(0x113a4800u, _esp0);
  ESP += 4; return;
}

/* FUN_100148f0 @ 0x113a48f0 (122 bytes, 39 insns) */
void f_113a48f0(void) {
  FTRACE(0x113a48f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a48f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a48f1 mov ebp, esp */
  EBP = (ESP);
  /* 113a48f3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a48f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a48f7 cmp eax, dword ptr [0x113c425c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c425c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a48fd jae 0x113a4921 */
  if (!C.cf) goto L_113a4921;
  /* 113a48ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4902 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a4905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4908 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113a490b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a490e mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 113a4915 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113a491a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113a491d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a491f jne 0x113a493c */
  if (!C.zf) goto L_113a493c;
L_113a4921:;
  /* 113a4921 call 0x1139ee20 */
  push32(0x113a4926u); f_1139ee20();
  /* 113a4926 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113a492c call 0x1139ee30 */
  push32(0x113a4931u); f_1139ee30();
  /* 113a4931 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113a4937 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a493a jmp 0x113a4966 */
  goto L_113a4966;
L_113a493c:;
  /* 113a493c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a493f push edx */
  push32((uint32_t)(EDX));
  /* 113a4940 call 0x113a0b60 */
  push32(0x113a4945u); f_113a0b60();
  /* 113a4945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4948 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a494b push eax */
  push32((uint32_t)(EAX));
  /* 113a494c call 0x113a4970 */
  push32(0x113a4951u); f_113a4970();
  /* 113a4951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4954 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a4957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a495a push ecx */
  push32((uint32_t)(ECX));
  /* 113a495b call 0x113a0bf0 */
  push32(0x113a4960u); f_113a0bf0();
  /* 113a4960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4963 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113a4966:;
  /* 113a4966 mov esp, ebp */
  ESP = (EBP);
  /* 113a4968 pop ebp */
  EBP = (pop32());
  /* 113a4969 ret  */
  ESPCHK(0x113a48f0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x113a4970 (170 bytes, 59 insns) */
void f_113a4970(void) {
  FTRACE(0x113a4970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4970 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4971 mov ebp, esp */
  EBP = (ESP);
  /* 113a4973 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4974 push esi */
  push32((uint32_t)(ESI));
  /* 113a4975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4978 push eax */
  push32((uint32_t)(EAX));
  /* 113a4979 call 0x113a09e0 */
  push32(0x113a497eu); f_113a09e0();
  /* 113a497e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4981 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4984 je 0x113a49c3 */
  if (C.zf) goto L_113a49c3;
  /* 113a4986 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a498a je 0x113a4992 */
  if (C.zf) goto L_113a4992;
  /* 113a498c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4990 jne 0x113a49ac */
  if (!C.zf) goto L_113a49ac;
L_113a4992:;
  /* 113a4992 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a4994 call 0x113a09e0 */
  push32(0x113a4999u); f_113a09e0();
  /* 113a4999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a499c mov esi, eax */
  ESI = (EAX);
  /* 113a499e push 2 */
  push32((uint32_t)(0x2u));
  /* 113a49a0 call 0x113a09e0 */
  push32(0x113a49a5u); f_113a09e0();
  /* 113a49a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a49a8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a49aa je 0x113a49c3 */
  if (C.zf) goto L_113a49c3;
L_113a49ac:;
  /* 113a49ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a49af push ecx */
  push32((uint32_t)(ECX));
  /* 113a49b0 call 0x113a09e0 */
  push32(0x113a49b5u); f_113a09e0();
  /* 113a49b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a49b8 push eax */
  push32((uint32_t)(EAX));
  /* 113a49b9 call dword ptr [0x113c52e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52e4))), 0x113a49bfu);
  /* 113a49bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a49c1 je 0x113a49cc */
  if (C.zf) goto L_113a49cc;
L_113a49c3:;
  /* 113a49c3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a49ca jmp 0x113a49d5 */
  goto L_113a49d5;
L_113a49cc:;
  /* 113a49cc call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x113a49d2u);
  /* 113a49d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a49d5:;
  /* 113a49d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a49d8 push edx */
  push32((uint32_t)(EDX));
  /* 113a49d9 call 0x113a0900 */
  push32(0x113a49deu); f_113a0900();
  /* 113a49de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a49e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a49e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a49e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a49ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113a49ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a49f0 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 113a49f7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 113a49fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4a00 je 0x113a4a13 */
  if (C.zf) goto L_113a4a13;
  /* 113a4a02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4a05 push eax */
  push32((uint32_t)(EAX));
  /* 113a4a06 call 0x1139ed80 */
  push32(0x113a4a0bu); f_1139ed80();
  /* 113a4a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4a0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a4a11 jmp 0x113a4a15 */
  goto L_113a4a15;
L_113a4a13:;
  /* 113a4a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a4a15:;
  /* 113a4a15 pop esi */
  ESI = (pop32());
  /* 113a4a16 mov esp, ebp */
  ESP = (EBP);
  /* 113a4a18 pop ebp */
  EBP = (pop32());
  /* 113a4a19 ret  */
  ESPCHK(0x113a4970u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a20 @ 0x113a4a20 (146 bytes, 52 insns) */
void f_113a4a20(void) {
  FTRACE(0x113a4a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4a20 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4a21 mov ebp, esp */
  EBP = (ESP);
  /* 113a4a23 push ebx */
  push32((uint32_t)(EBX));
  /* 113a4a24 push esi */
  push32((uint32_t)(ESI));
  /* 113a4a25 push edi */
  push32((uint32_t)(EDI));
L_113a4a26:;
  /* 113a4a26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4a2a jne 0x113a4a4a */
  if (!C.zf) goto L_113a4a4a;
  /* 113a4a2c push 0x113be4c0 */
  push32((uint32_t)(0x113be4c0u));
  /* 113a4a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a4a33 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 113a4a35 push 0x113beb88 */
  push32((uint32_t)(0x113beb88u));
  /* 113a4a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a4a3c call 0x113955e0 */
  push32(0x113a4a41u); f_113955e0();
  /* 113a4a41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4a44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4a47 jne 0x113a4a4a */
  if (!C.zf) goto L_113a4a4a;
  /* 113a4a49 int3  */
  x86_unimpl("int3 @ 0x113a4a49");
L_113a4a4a:;
  /* 113a4a4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a4a4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a4a4e jne 0x113a4a26 */
  if (!C.zf) goto L_113a4a26;
  /* 113a4a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4a53 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a4a56 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 113a4a5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a4a5e je 0x113a4aad */
  if (C.zf) goto L_113a4aad;
  /* 113a4a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4a63 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113a4a66 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 113a4a69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a4a6b je 0x113a4aad */
  if (C.zf) goto L_113a4aad;
  /* 113a4a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 113a4a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4a72 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113a4a75 push eax */
  push32((uint32_t)(EAX));
  /* 113a4a76 call 0x113970a0 */
  push32(0x113a4a7bu); f_113970a0();
  /* 113a4a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4a7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4a81 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a4a84 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 113a4a8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4a8d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 113a4a90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4a93 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 113a4a99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4a9c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 113a4aa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a4aa6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_113a4aad:;
  /* 113a4aad pop edi */
  EDI = (pop32());
  /* 113a4aae pop esi */
  ESI = (pop32());
  /* 113a4aaf pop ebx */
  EBX = (pop32());
  /* 113a4ab0 pop ebp */
  EBP = (pop32());
  /* 113a4ab1 ret  */
  ESPCHK(0x113a4a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ac0 @ 0x113a4ac0 (289 bytes, 97 insns) */
void f_113a4ac0(void) {
  FTRACE(0x113a4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 113a4ac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4ac6 push esi */
  push32((uint32_t)(ESI));
  /* 113a4ac7 mov eax, dword ptr [0x113c1dc8] */
  EAX = (r32((uint32_t)(0x113c1dc8)));
  /* 113a4acc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a4acf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a4ad6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a4add jmp 0x113a4ae8 */
  goto L_113a4ae8;
L_113a4adf:;
  /* 113a4adf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4ae5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113a4ae8:;
  /* 113a4ae8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4aec jae 0x113a4b21 */
  if (!C.cf) goto L_113a4b21;
  /* 113a4aee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4af1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4af4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113a4af7 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4af8 call 0x11399440 */
  push32(0x113a4afdu); f_11399440();
  /* 113a4afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b00 mov esi, eax */
  ESI = (EAX);
  /* 113a4b02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4b05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4b08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 113a4b0c push ecx */
  push32((uint32_t)(ECX));
  /* 113a4b0d call 0x11399440 */
  push32(0x113a4b12u); f_11399440();
  /* 113a4b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113a4b1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a4b1f jmp 0x113a4adf */
  goto L_113a4adf;
L_113a4b21:;
  /* 113a4b21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a4b24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b27 push eax */
  push32((uint32_t)(EAX));
  /* 113a4b28 call 0x113965f0 */
  push32(0x113a4b2du); f_113965f0();
  /* 113a4b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a4b33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4b37 je 0x113a4bd9 */
  if (C.zf) goto L_113a4bd9;
  /* 113a4b3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4b40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113a4b43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a4b4a jmp 0x113a4b55 */
  goto L_113a4b55;
L_113a4b4c:;
  /* 113a4b4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4b4f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b52 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113a4b55:;
  /* 113a4b55 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4b59 jae 0x113a4bca */
  if (!C.cf) goto L_113a4bca;
  /* 113a4b5b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4b5e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 113a4b61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4b64 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b67 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113a4b6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4b6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4b70 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113a4b73 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4b74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4b77 push edx */
  push32((uint32_t)(EDX));
  /* 113a4b78 call 0x113995c0 */
  push32(0x113a4b7du); f_113995c0();
  /* 113a4b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b80 push eax */
  push32((uint32_t)(EAX));
  /* 113a4b81 call 0x11399440 */
  push32(0x113a4b86u); f_11399440();
  /* 113a4b86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b89 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4b8c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b8e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113a4b91 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4b94 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 113a4b97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4b9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4b9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113a4ba0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4ba3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4ba6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 113a4baa push eax */
  push32((uint32_t)(EAX));
  /* 113a4bab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4bae push ecx */
  push32((uint32_t)(ECX));
  /* 113a4baf call 0x113995c0 */
  push32(0x113a4bb4u); f_113995c0();
  /* 113a4bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4bb7 push eax */
  push32((uint32_t)(EAX));
  /* 113a4bb8 call 0x11399440 */
  push32(0x113a4bbdu); f_11399440();
  /* 113a4bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4bc0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4bc3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4bc5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113a4bc8 jmp 0x113a4b4c */
  goto L_113a4b4c;
L_113a4bca:;
  /* 113a4bca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4bcd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113a4bd0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4bd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4bd6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_113a4bd9:;
  /* 113a4bd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4bdc pop esi */
  ESI = (pop32());
  /* 113a4bdd mov esp, ebp */
  ESP = (EBP);
  /* 113a4bdf pop ebp */
  EBP = (pop32());
  /* 113a4be0 ret  */
  ESPCHK(0x113a4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bf0 @ 0x113a4bf0 (291 bytes, 97 insns) */
void f_113a4bf0(void) {
  FTRACE(0x113a4bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4bf1 mov ebp, esp */
  EBP = (ESP);
  /* 113a4bf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4bf6 push esi */
  push32((uint32_t)(ESI));
  /* 113a4bf7 mov eax, dword ptr [0x113c1dc8] */
  EAX = (r32((uint32_t)(0x113c1dc8)));
  /* 113a4bfc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a4bff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a4c06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a4c0d jmp 0x113a4c18 */
  goto L_113a4c18;
L_113a4c0f:;
  /* 113a4c0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4c12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4c15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113a4c18:;
  /* 113a4c18 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4c1c jae 0x113a4c52 */
  if (!C.cf) goto L_113a4c52;
  /* 113a4c1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4c21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4c24 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 113a4c28 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4c29 call 0x11399440 */
  push32(0x113a4c2eu); f_11399440();
  /* 113a4c2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4c31 mov esi, eax */
  ESI = (EAX);
  /* 113a4c33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4c36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4c39 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 113a4c3d push ecx */
  push32((uint32_t)(ECX));
  /* 113a4c3e call 0x11399440 */
  push32(0x113a4c43u); f_11399440();
  /* 113a4c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4c46 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4c49 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113a4c4d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a4c50 jmp 0x113a4c0f */
  goto L_113a4c0f;
L_113a4c52:;
  /* 113a4c52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a4c55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4c58 push eax */
  push32((uint32_t)(EAX));
  /* 113a4c59 call 0x113965f0 */
  push32(0x113a4c5eu); f_113965f0();
  /* 113a4c5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4c61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a4c64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4c68 je 0x113a4d0b */
  if (C.zf) goto L_113a4d0b;
  /* 113a4c6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4c71 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113a4c74 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a4c7b jmp 0x113a4c86 */
  goto L_113a4c86;
L_113a4c7d:;
  /* 113a4c7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4c80 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4c83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113a4c86:;
  /* 113a4c86 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4c8a jae 0x113a4cfc */
  if (!C.cf) goto L_113a4cfc;
  /* 113a4c8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4c8f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 113a4c92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4c95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4c98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113a4c9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4c9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4ca1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 113a4ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4ca6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4ca9 push edx */
  push32((uint32_t)(EDX));
  /* 113a4caa call 0x113995c0 */
  push32(0x113a4cafu); f_113995c0();
  /* 113a4caf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4cb2 push eax */
  push32((uint32_t)(EAX));
  /* 113a4cb3 call 0x11399440 */
  push32(0x113a4cb8u); f_11399440();
  /* 113a4cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4cbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4cbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4cc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113a4cc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4cc6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 113a4cc9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4ccc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4ccf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113a4cd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4cd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4cd8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113a4cdc push eax */
  push32((uint32_t)(EAX));
  /* 113a4cdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4ce1 call 0x113995c0 */
  push32(0x113a4ce6u); f_113995c0();
  /* 113a4ce6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4ce9 push eax */
  push32((uint32_t)(EAX));
  /* 113a4cea call 0x11399440 */
  push32(0x113a4cefu); f_11399440();
  /* 113a4cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4cf2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4cf5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4cf7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113a4cfa jmp 0x113a4c7d */
  goto L_113a4c7d;
L_113a4cfc:;
  /* 113a4cfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4cff mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113a4d02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4d08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_113a4d0b:;
  /* 113a4d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4d0e pop esi */
  ESI = (pop32());
  /* 113a4d0f mov esp, ebp */
  ESP = (EBP);
  /* 113a4d11 pop ebp */
  EBP = (pop32());
  /* 113a4d12 ret  */
  ESPCHK(0x113a4bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d20 @ 0x113a4d20 (878 bytes, 273 insns) */
void f_113a4d20(void) {
  FTRACE(0x113a4d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a4d20 push ebp */
  push32((uint32_t)(EBP));
  /* 113a4d21 mov ebp, esp */
  EBP = (ESP);
  /* 113a4d23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a4d26 push esi */
  push32((uint32_t)(ESI));
  /* 113a4d27 mov eax, dword ptr [0x113c1dc8] */
  EAX = (r32((uint32_t)(0x113c1dc8)));
  /* 113a4d2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a4d2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a4d36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a4d3d jmp 0x113a4d48 */
  goto L_113a4d48;
L_113a4d3f:;
  /* 113a4d3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4d45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113a4d48:;
  /* 113a4d48 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4d4c jae 0x113a4d81 */
  if (!C.cf) goto L_113a4d81;
  /* 113a4d4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4d51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4d54 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113a4d57 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4d58 call 0x11399440 */
  push32(0x113a4d5du); f_11399440();
  /* 113a4d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4d60 mov esi, eax */
  ESI = (EAX);
  /* 113a4d62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4d65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4d68 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 113a4d6c push ecx */
  push32((uint32_t)(ECX));
  /* 113a4d6d call 0x11399440 */
  push32(0x113a4d72u); f_11399440();
  /* 113a4d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4d75 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4d78 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113a4d7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a4d7f jmp 0x113a4d3f */
  goto L_113a4d3f;
L_113a4d81:;
  /* 113a4d81 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a4d88 jmp 0x113a4d93 */
  goto L_113a4d93;
L_113a4d8a:;
  /* 113a4d8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4d8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4d90 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113a4d93:;
  /* 113a4d93 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4d97 jae 0x113a4dcd */
  if (!C.cf) goto L_113a4dcd;
  /* 113a4d99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4d9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4d9f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 113a4da3 push eax */
  push32((uint32_t)(EAX));
  /* 113a4da4 call 0x11399440 */
  push32(0x113a4da9u); f_11399440();
  /* 113a4da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4dac mov esi, eax */
  ESI = (EAX);
  /* 113a4dae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4db1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4db4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113a4db8 push eax */
  push32((uint32_t)(EAX));
  /* 113a4db9 call 0x11399440 */
  push32(0x113a4dbeu); f_11399440();
  /* 113a4dbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4dc1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4dc4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113a4dc8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a4dcb jmp 0x113a4d8a */
  goto L_113a4d8a;
L_113a4dcd:;
  /* 113a4dcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4dd0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 113a4dd6 push eax */
  push32((uint32_t)(EAX));
  /* 113a4dd7 call 0x11399440 */
  push32(0x113a4ddcu); f_11399440();
  /* 113a4ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4ddf mov esi, eax */
  ESI = (EAX);
  /* 113a4de1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4de4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 113a4dea push edx */
  push32((uint32_t)(EDX));
  /* 113a4deb call 0x11399440 */
  push32(0x113a4df0u); f_11399440();
  /* 113a4df0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4df3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4df6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 113a4dfa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a4dfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4e00 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 113a4e06 push edx */
  push32((uint32_t)(EDX));
  /* 113a4e07 call 0x11399440 */
  push32(0x113a4e0cu); f_11399440();
  /* 113a4e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4e0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a4e12 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113a4e16 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a4e19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4e1c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 113a4e22 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4e23 call 0x11399440 */
  push32(0x113a4e28u); f_11399440();
  /* 113a4e28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4e2b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a4e2e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113a4e32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a4e35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4e38 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 113a4e3e push edx */
  push32((uint32_t)(EDX));
  /* 113a4e3f call 0x11399440 */
  push32(0x113a4e44u); f_11399440();
  /* 113a4e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4e47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a4e4a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113a4e4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a4e51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a4e54 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4e59 push eax */
  push32((uint32_t)(EAX));
  /* 113a4e5a call 0x113965f0 */
  push32(0x113a4e5fu); f_113965f0();
  /* 113a4e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4e62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a4e65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4e69 je 0x113a5086 */
  if (C.zf) goto L_113a5086;
  /* 113a4e6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4e72 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113a4e75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4e78 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4e7e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113a4e81 push 0xac */
  push32((uint32_t)(0xacu));
  /* 113a4e86 mov eax, dword ptr [0x113c1dc8] */
  EAX = (r32((uint32_t)(0x113c1dc8)));
  /* 113a4e8b push eax */
  push32((uint32_t)(EAX));
  /* 113a4e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a4e8f push ecx */
  push32((uint32_t)(ECX));
  /* 113a4e90 call 0x1139d830 */
  push32(0x113a4e95u); f_1139d830();
  /* 113a4e95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4e98 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a4e9f jmp 0x113a4eaa */
  goto L_113a4eaa;
L_113a4ea1:;
  /* 113a4ea1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4ea4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4ea7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113a4eaa:;
  /* 113a4eaa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4eae jae 0x113a4f1e */
  if (!C.cf) goto L_113a4f1e;
  /* 113a4eb0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4eb3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a4eb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4eb9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 113a4ebc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4ebf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4ec2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113a4ec5 push edx */
  push32((uint32_t)(EDX));
  /* 113a4ec6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4ec9 push eax */
  push32((uint32_t)(EAX));
  /* 113a4eca call 0x113995c0 */
  push32(0x113a4ecfu); f_113995c0();
  /* 113a4ecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4ed2 push eax */
  push32((uint32_t)(EAX));
  /* 113a4ed3 call 0x11399440 */
  push32(0x113a4ed8u); f_11399440();
  /* 113a4ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4edb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4ede lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113a4ee2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113a4ee5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4ee8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a4eeb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4eee mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 113a4ef2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4ef5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4ef8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 113a4efc push edx */
  push32((uint32_t)(EDX));
  /* 113a4efd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4f00 push eax */
  push32((uint32_t)(EAX));
  /* 113a4f01 call 0x113995c0 */
  push32(0x113a4f06u); f_113995c0();
  /* 113a4f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4f09 push eax */
  push32((uint32_t)(EAX));
  /* 113a4f0a call 0x11399440 */
  push32(0x113a4f0fu); f_11399440();
  /* 113a4f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4f12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4f15 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113a4f19 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113a4f1c jmp 0x113a4ea1 */
  goto L_113a4ea1;
L_113a4f1e:;
  /* 113a4f1e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a4f25 jmp 0x113a4f30 */
  goto L_113a4f30;
L_113a4f27:;
  /* 113a4f27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4f2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4f2d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113a4f30:;
  /* 113a4f30 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a4f34 jae 0x113a4fa6 */
  if (!C.cf) goto L_113a4fa6;
  /* 113a4f36 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4f39 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a4f3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4f3f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 113a4f43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4f46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4f49 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 113a4f4d push eax */
  push32((uint32_t)(EAX));
  /* 113a4f4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4f51 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4f52 call 0x113995c0 */
  push32(0x113a4f57u); f_113995c0();
  /* 113a4f57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4f5a push eax */
  push32((uint32_t)(EAX));
  /* 113a4f5b call 0x11399440 */
  push32(0x113a4f60u); f_11399440();
  /* 113a4f60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4f63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4f66 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113a4f6a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113a4f6d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4f70 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a4f73 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4f76 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 113a4f7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a4f7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4f80 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113a4f84 push eax */
  push32((uint32_t)(EAX));
  /* 113a4f85 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4f88 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4f89 call 0x113995c0 */
  push32(0x113a4f8eu); f_113995c0();
  /* 113a4f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4f91 push eax */
  push32((uint32_t)(EAX));
  /* 113a4f92 call 0x11399440 */
  push32(0x113a4f97u); f_11399440();
  /* 113a4f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4f9a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4f9d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113a4fa1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113a4fa4 jmp 0x113a4f27 */
  goto L_113a4f27;
L_113a4fa6:;
  /* 113a4fa6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a4fa9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4fac mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 113a4fb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4fb5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 113a4fbb push ecx */
  push32((uint32_t)(ECX));
  /* 113a4fbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4fbf push edx */
  push32((uint32_t)(EDX));
  /* 113a4fc0 call 0x113995c0 */
  push32(0x113a4fc5u); f_113995c0();
  /* 113a4fc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4fc8 push eax */
  push32((uint32_t)(EAX));
  /* 113a4fc9 call 0x11399440 */
  push32(0x113a4fceu); f_11399440();
  /* 113a4fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4fd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4fd4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113a4fd8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113a4fdb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a4fde mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4fe1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 113a4fe7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a4fea mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 113a4ff0 push eax */
  push32((uint32_t)(EAX));
  /* 113a4ff1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a4ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 113a4ff5 call 0x113995c0 */
  push32(0x113a4ffau); f_113995c0();
  /* 113a4ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a4ffd push eax */
  push32((uint32_t)(EAX));
  /* 113a4ffe call 0x11399440 */
  push32(0x113a5003u); f_11399440();
  /* 113a5003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5006 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a5009 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113a500d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113a5010 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a5013 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a5016 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 113a501c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a501f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 113a5025 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5026 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a5029 push edx */
  push32((uint32_t)(EDX));
  /* 113a502a call 0x113995c0 */
  push32(0x113a502fu); f_113995c0();
  /* 113a502f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5032 push eax */
  push32((uint32_t)(EAX));
  /* 113a5033 call 0x11399440 */
  push32(0x113a5038u); f_11399440();
  /* 113a5038 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a503b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a503e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 113a5042 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113a5045 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a5048 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a504b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 113a5051 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5054 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 113a505a push eax */
  push32((uint32_t)(EAX));
  /* 113a505b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a505e push ecx */
  push32((uint32_t)(ECX));
  /* 113a505f call 0x113995c0 */
  push32(0x113a5064u); f_113995c0();
  /* 113a5064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5067 push eax */
  push32((uint32_t)(EAX));
  /* 113a5068 call 0x11399440 */
  push32(0x113a506du); f_11399440();
  /* 113a506d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5070 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a5073 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 113a5077 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113a507a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a507d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a5080 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_113a5086:;
  /* 113a5086 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5089 pop esi */
  ESI = (pop32());
  /* 113a508a mov esp, ebp */
  ESP = (EBP);
  /* 113a508c pop ebp */
  EBP = (pop32());
  /* 113a508d ret  */
  ESPCHK(0x113a4d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10015090 @ 0x113a5090 (31 bytes, 15 insns) */
void f_113a5090(void) {
  FTRACE(0x113a5090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a5090 push ebp */
  push32((uint32_t)(EBP));
  /* 113a5091 mov ebp, esp */
  EBP = (ESP);
  /* 113a5093 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a5095 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5098 push eax */
  push32((uint32_t)(EAX));
  /* 113a5099 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a509c push ecx */
  push32((uint32_t)(ECX));
  /* 113a509d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a50a0 push edx */
  push32((uint32_t)(EDX));
  /* 113a50a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a50a4 push eax */
  push32((uint32_t)(EAX));
  /* 113a50a5 call 0x113a50b0 */
  push32(0x113a50aau); f_113a50b0();
  /* 113a50aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a50ad pop ebp */
  EBP = (pop32());
  /* 113a50ae ret  */
  ESPCHK(0x113a5090u, _esp0);
  ESP += 4; return;
}

/* FUN_100150b0 @ 0x113a50b0 (393 bytes, 123 insns) */
void f_113a50b0(void) {
  FTRACE(0x113a50b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a50b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a50b1 mov ebp, esp */
  EBP = (ESP);
  /* 113a50b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a50b6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a50ba jne 0x113a50c6 */
  if (!C.zf) goto L_113a50c6;
  /* 113a50bc mov eax, dword ptr [0x113c1dc8] */
  EAX = (r32((uint32_t)(0x113c1dc8)));
  /* 113a50c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113a50c4 jmp 0x113a50cc */
  goto L_113a50cc;
L_113a50c6:;
  /* 113a50c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a50c9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113a50cc:;
  /* 113a50cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a50cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a50d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a50d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a50d8 push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a50dd call dword ptr [0x113c52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52dc))), 0x113a50e3u);
  /* 113a50e3 cmp dword ptr [0x113c2ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a50ea je 0x113a510a */
  if (C.zf) goto L_113a510a;
  /* 113a50ec push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a50f1 call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x113a50f7u);
  /* 113a50f7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a50f9 call 0x1139a010 */
  push32(0x113a50feu); f_1139a010();
  /* 113a50fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5101 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113a5108 jmp 0x113a5111 */
  goto L_113a5111;
L_113a510a:;
  /* 113a510a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113a5111:;
  /* 113a5111 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5115 jbe 0x113a5202 */
  if ((C.cf||C.zf)) goto L_113a5202;
  /* 113a511b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a511e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a5120 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 113a5123 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a5127 je 0x113a5131 */
  if (C.zf) goto L_113a5131;
  /* 113a5129 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a512d je 0x113a5136 */
  if (C.zf) goto L_113a5136;
  /* 113a512f jmp 0x113a5190 */
  goto L_113a5190;
L_113a5131:;
  /* 113a5131 jmp 0x113a5202 */
  goto L_113a5202;
L_113a5136:;
  /* 113a5136 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5139 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a513c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 113a513f mov dword ptr [0x113c2aa0], 0 */
  w32((uint32_t)(0x113c2aa0), (0x0u));
  /* 113a5149 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a514c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a514f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5152 jne 0x113a5167 */
  if (!C.zf) goto L_113a5167;
  /* 113a5154 mov dword ptr [0x113c2aa0], 1 */
  w32((uint32_t)(0x113c2aa0), (0x1u));
  /* 113a515e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5161 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5164 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_113a5167:;
  /* 113a5167 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a516a push ecx */
  push32((uint32_t)(ECX));
  /* 113a516b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 113a516e push edx */
  push32((uint32_t)(EDX));
  /* 113a516f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 113a5172 push eax */
  push32((uint32_t)(EAX));
  /* 113a5173 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5176 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5177 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a517a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a517c push eax */
  push32((uint32_t)(EAX));
  /* 113a517d call 0x113a5240 */
  push32(0x113a5182u); f_113a5240();
  /* 113a5182 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5185 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5188 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a518b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113a518e jmp 0x113a51fd */
  goto L_113a51fd;
L_113a5190:;
  /* 113a5190 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a5195 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a5197 mov ecx, dword ptr [0x113c0db8] */
  ECX = (r32((uint32_t)(0x113c0db8)));
  /* 113a519d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a519f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113a51a3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113a51a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a51ab je 0x113a51d8 */
  if (C.zf) goto L_113a51d8;
  /* 113a51ad cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a51b1 jbe 0x113a51d8 */
  if ((C.cf||C.zf)) goto L_113a51d8;
  /* 113a51b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a51b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a51b9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a51bb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113a51bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a51c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a51c3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a51c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a51c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a51cc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113a51cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a51d2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a51d5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113a51d8:;
  /* 113a51d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a51db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a51de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a51e0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113a51e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a51e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a51e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a51eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a51ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a51f1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 113a51f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a51f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a51fa mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113a51fd:;
  /* 113a51fd jmp 0x113a5111 */
  goto L_113a5111;
L_113a5202:;
  /* 113a5202 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5206 je 0x113a5214 */
  if (C.zf) goto L_113a5214;
  /* 113a5208 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a520a call 0x1139a0b0 */
  push32(0x113a520fu); f_1139a0b0();
  /* 113a520f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5212 jmp 0x113a521f */
  goto L_113a521f;
L_113a5214:;
  /* 113a5214 push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a5219 call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x113a521fu);
L_113a521f:;
  /* 113a521f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5223 jbe 0x113a5233 */
  if ((C.cf||C.zf)) goto L_113a5233;
  /* 113a5225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5228 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113a522b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a522e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5231 jmp 0x113a5235 */
  goto L_113a5235;
L_113a5233:;
  /* 113a5233 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a5235:;
  /* 113a5235 mov esp, ebp */
  ESP = (EBP);
  /* 113a5237 pop ebp */
  EBP = (pop32());
  /* 113a5238 ret  */
  ESPCHK(0x113a50b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015240 @ 0x113a5240 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_113a5240(void) {
  FTRACE(0x113a5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a5240 push ebp */
  push32((uint32_t)(EBP));
  /* 113a5241 mov ebp, esp */
  EBP = (ESP);
  /* 113a5243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5246 push esi */
  push32((uint32_t)(ESI));
  /* 113a5247 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 113a524b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a524e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5251 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5254 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a5257 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a525b ja 0x113a57a8 */
  if ((!C.cf&&!C.zf)) goto L_113a57a8;
  /* 113a5261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a5266 mov dl, byte ptr [eax + 0x113a5809] */
  DL = (r8((uint32_t)(EAX + 0x113a5809)));
  /* 113a526c jmp dword ptr [edx*4 + 0x113a57ad] */
  switch (EDX) {
    case 0: goto L_113a5786;
    case 1: goto L_113a5295;
    case 2: goto L_113a52db;
    case 3: goto L_113a5428;
    case 4: goto L_113a5450;
    case 5: goto L_113a54ef;
    case 6: goto L_113a555b;
    case 7: goto L_113a5584;
    case 8: goto L_113a55c5;
    case 9: goto L_113a56a7;
    case 10: goto L_113a570e;
    case 11: goto L_113a575b;
    case 12: goto L_113a5273;
    case 13: goto L_113a52b8;
    case 14: goto L_113a52fe;
    case 15: goto L_113a53fe;
    case 16: goto L_113a5495;
    case 17: goto L_113a54c2;
    case 18: goto L_113a5517;
    case 19: goto L_113a559b;
    case 20: goto L_113a5649;
    case 21: goto L_113a56d8;
    case 22: goto L_113a57a8;
    default: x86_unimpl("switch@0x113a526c out of table"); return;
  }
L_113a5273:;
  /* 113a5273 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5276 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5277 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a527a push edx */
  push32((uint32_t)(EDX));
  /* 113a527b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a527e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 113a5281 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5284 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 113a5287 push eax */
  push32((uint32_t)(EAX));
  /* 113a5288 call 0x113a5860 */
  push32(0x113a528du); f_113a5860();
  /* 113a528d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5290 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5295:;
  /* 113a5295 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5298 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5299 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a529c push edx */
  push32((uint32_t)(EDX));
  /* 113a529d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a52a0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 113a52a3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a52a6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 113a52aa push eax */
  push32((uint32_t)(EAX));
  /* 113a52ab call 0x113a5860 */
  push32(0x113a52b0u); f_113a5860();
  /* 113a52b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a52b3 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a52b8:;
  /* 113a52b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a52bb push ecx */
  push32((uint32_t)(ECX));
  /* 113a52bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a52bf push edx */
  push32((uint32_t)(EDX));
  /* 113a52c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a52c3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113a52c6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a52c9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 113a52cd push eax */
  push32((uint32_t)(EAX));
  /* 113a52ce call 0x113a5860 */
  push32(0x113a52d3u); f_113a5860();
  /* 113a52d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a52d6 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a52db:;
  /* 113a52db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a52de push ecx */
  push32((uint32_t)(ECX));
  /* 113a52df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a52e2 push edx */
  push32((uint32_t)(EDX));
  /* 113a52e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a52e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113a52e9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a52ec mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 113a52f0 push eax */
  push32((uint32_t)(EAX));
  /* 113a52f1 call 0x113a5860 */
  push32(0x113a52f6u); f_113a5860();
  /* 113a52f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a52f9 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a52fe:;
  /* 113a52fe cmp dword ptr [0x113c2aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5305 je 0x113a5386 */
  if (C.zf) goto L_113a5386;
  /* 113a5307 mov dword ptr [0x113c2aa0], 0 */
  w32((uint32_t)(0x113c2aa0), (0x0u));
  /* 113a5311 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5314 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5315 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5318 push edx */
  push32((uint32_t)(EDX));
  /* 113a5319 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a531c push eax */
  push32((uint32_t)(EAX));
  /* 113a531d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5320 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5321 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5324 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 113a532a push eax */
  push32((uint32_t)(EAX));
  /* 113a532b call 0x113a5a10 */
  push32(0x113a5330u); f_113a5a10();
  /* 113a5330 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5333 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5336 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5339 jne 0x113a5340 */
  if (!C.zf) goto L_113a5340;
  /* 113a533b jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5340:;
  /* 113a5340 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5343 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5345 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 113a5348 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a534b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a534d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5350 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5353 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a5355 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5358 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a535a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a535d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5360 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a5362 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5365 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5366 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5369 push edx */
  push32((uint32_t)(EDX));
  /* 113a536a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a536d push eax */
  push32((uint32_t)(EAX));
  /* 113a536e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5371 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5372 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5375 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 113a537b push eax */
  push32((uint32_t)(EAX));
  /* 113a537c call 0x113a5a10 */
  push32(0x113a5381u); f_113a5a10();
  /* 113a5381 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5384 jmp 0x113a53f9 */
  goto L_113a53f9;
L_113a5386:;
  /* 113a5386 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5389 push ecx */
  push32((uint32_t)(ECX));
  /* 113a538a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a538d push edx */
  push32((uint32_t)(EDX));
  /* 113a538e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5391 push eax */
  push32((uint32_t)(EAX));
  /* 113a5392 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5395 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5396 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5399 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 113a539f push eax */
  push32((uint32_t)(EAX));
  /* 113a53a0 call 0x113a5a10 */
  push32(0x113a53a5u); f_113a5a10();
  /* 113a53a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a53a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a53ab cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a53ae jne 0x113a53b5 */
  if (!C.zf) goto L_113a53b5;
  /* 113a53b0 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a53b5:;
  /* 113a53b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a53b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a53ba mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 113a53bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a53c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a53c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a53c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a53c8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a53ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a53cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a53cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a53d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a53d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a53d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a53da push ecx */
  push32((uint32_t)(ECX));
  /* 113a53db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a53de push edx */
  push32((uint32_t)(EDX));
  /* 113a53df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a53e2 push eax */
  push32((uint32_t)(EAX));
  /* 113a53e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a53e6 push ecx */
  push32((uint32_t)(ECX));
  /* 113a53e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a53ea mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 113a53f0 push eax */
  push32((uint32_t)(EAX));
  /* 113a53f1 call 0x113a5a10 */
  push32(0x113a53f6u); f_113a5a10();
  /* 113a53f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a53f9:;
  /* 113a53f9 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a53fe:;
  /* 113a53fe mov ecx, dword ptr [0x113c2aa0] */
  ECX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a5404 mov dword ptr [0x113c2ab0], ecx */
  w32((uint32_t)(0x113c2ab0), (ECX));
  /* 113a540a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a540d push edx */
  push32((uint32_t)(EDX));
  /* 113a540e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5411 push eax */
  push32((uint32_t)(EAX));
  /* 113a5412 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a5414 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5417 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a541a push edx */
  push32((uint32_t)(EDX));
  /* 113a541b call 0x113a58b0 */
  push32(0x113a5420u); f_113a58b0();
  /* 113a5420 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5423 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5428:;
  /* 113a5428 mov eax, dword ptr [0x113c2aa0] */
  EAX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a542d mov dword ptr [0x113c2ab0], eax */
  w32((uint32_t)(0x113c2ab0), (EAX));
  /* 113a5432 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5435 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5436 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5439 push edx */
  push32((uint32_t)(EDX));
  /* 113a543a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a543c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a543f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113a5442 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5443 call 0x113a58b0 */
  push32(0x113a5448u); f_113a58b0();
  /* 113a5448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a544b jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5450:;
  /* 113a5450 mov edx, dword ptr [0x113c2aa0] */
  EDX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a5456 mov dword ptr [0x113c2ab0], edx */
  w32((uint32_t)(0x113c2ab0), (EDX));
  /* 113a545c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a545f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 113a5462 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a5463 mov ecx, 0xc */
  ECX = (0xcu);
  /* 113a5468 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a546a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a546d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5471 jne 0x113a547a */
  if (!C.zf) goto L_113a547a;
  /* 113a5473 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_113a547a:;
  /* 113a547a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a547d push edx */
  push32((uint32_t)(EDX));
  /* 113a547e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5481 push eax */
  push32((uint32_t)(EAX));
  /* 113a5482 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a5484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5487 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5488 call 0x113a58b0 */
  push32(0x113a548du); f_113a58b0();
  /* 113a548d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5490 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5495:;
  /* 113a5495 mov edx, dword ptr [0x113c2aa0] */
  EDX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a549b mov dword ptr [0x113c2ab0], edx */
  w32((uint32_t)(0x113c2ab0), (EDX));
  /* 113a54a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a54a4 push eax */
  push32((uint32_t)(EAX));
  /* 113a54a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a54a8 push ecx */
  push32((uint32_t)(ECX));
  /* 113a54a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 113a54ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a54ae mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113a54b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a54b4 push eax */
  push32((uint32_t)(EAX));
  /* 113a54b5 call 0x113a58b0 */
  push32(0x113a54bau); f_113a58b0();
  /* 113a54ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a54bd jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a54c2:;
  /* 113a54c2 mov ecx, dword ptr [0x113c2aa0] */
  ECX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a54c8 mov dword ptr [0x113c2ab0], ecx */
  w32((uint32_t)(0x113c2ab0), (ECX));
  /* 113a54ce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a54d1 push edx */
  push32((uint32_t)(EDX));
  /* 113a54d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a54d5 push eax */
  push32((uint32_t)(EAX));
  /* 113a54d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a54d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a54db mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 113a54de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a54e1 push edx */
  push32((uint32_t)(EDX));
  /* 113a54e2 call 0x113a58b0 */
  push32(0x113a54e7u); f_113a58b0();
  /* 113a54e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a54ea jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a54ef:;
  /* 113a54ef mov eax, dword ptr [0x113c2aa0] */
  EAX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a54f4 mov dword ptr [0x113c2ab0], eax */
  w32((uint32_t)(0x113c2ab0), (EAX));
  /* 113a54f9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a54fc push ecx */
  push32((uint32_t)(ECX));
  /* 113a54fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5500 push edx */
  push32((uint32_t)(EDX));
  /* 113a5501 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a5503 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5506 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113a5509 push ecx */
  push32((uint32_t)(ECX));
  /* 113a550a call 0x113a58b0 */
  push32(0x113a550fu); f_113a58b0();
  /* 113a550f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5512 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5517:;
  /* 113a5517 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a551a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a551e jg 0x113a553c */
  if ((!C.zf&&C.sf==C.of)) goto L_113a553c;
  /* 113a5520 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5523 push eax */
  push32((uint32_t)(EAX));
  /* 113a5524 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5527 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5528 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a552b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 113a5531 push eax */
  push32((uint32_t)(EAX));
  /* 113a5532 call 0x113a5860 */
  push32(0x113a5537u); f_113a5860();
  /* 113a5537 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a553a jmp 0x113a5556 */
  goto L_113a5556;
L_113a553c:;
  /* 113a553c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a553f push ecx */
  push32((uint32_t)(ECX));
  /* 113a5540 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5543 push edx */
  push32((uint32_t)(EDX));
  /* 113a5544 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5547 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 113a554d push ecx */
  push32((uint32_t)(ECX));
  /* 113a554e call 0x113a5860 */
  push32(0x113a5553u); f_113a5860();
  /* 113a5553 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a5556:;
  /* 113a5556 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a555b:;
  /* 113a555b mov edx, dword ptr [0x113c2aa0] */
  EDX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a5561 mov dword ptr [0x113c2ab0], edx */
  w32((uint32_t)(0x113c2ab0), (EDX));
  /* 113a5567 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a556a push eax */
  push32((uint32_t)(EAX));
  /* 113a556b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a556e push ecx */
  push32((uint32_t)(ECX));
  /* 113a556f push 2 */
  push32((uint32_t)(0x2u));
  /* 113a5571 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5574 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5576 push eax */
  push32((uint32_t)(EAX));
  /* 113a5577 call 0x113a58b0 */
  push32(0x113a557cu); f_113a58b0();
  /* 113a557c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a557f jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5584:;
  /* 113a5584 mov ecx, dword ptr [0x113c2aa0] */
  ECX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a558a mov dword ptr [0x113c2ab0], ecx */
  w32((uint32_t)(0x113c2ab0), (ECX));
  /* 113a5590 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5593 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 113a5596 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a5599 jmp 0x113a55ed */
  goto L_113a55ed;
L_113a559b:;
  /* 113a559b mov ecx, dword ptr [0x113c2aa0] */
  ECX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a55a1 mov dword ptr [0x113c2ab0], ecx */
  w32((uint32_t)(0x113c2ab0), (ECX));
  /* 113a55a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a55aa push edx */
  push32((uint32_t)(EDX));
  /* 113a55ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a55ae push eax */
  push32((uint32_t)(EAX));
  /* 113a55af push 1 */
  push32((uint32_t)(0x1u));
  /* 113a55b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a55b4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113a55b7 push edx */
  push32((uint32_t)(EDX));
  /* 113a55b8 call 0x113a58b0 */
  push32(0x113a55bdu); f_113a58b0();
  /* 113a55bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a55c0 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a55c5:;
  /* 113a55c5 mov eax, dword ptr [0x113c2aa0] */
  EAX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a55ca mov dword ptr [0x113c2ab0], eax */
  w32((uint32_t)(0x113c2ab0), (EAX));
  /* 113a55cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a55d2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a55d6 jne 0x113a55e1 */
  if (!C.zf) goto L_113a55e1;
  /* 113a55d8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 113a55df jmp 0x113a55ed */
  goto L_113a55ed;
L_113a55e1:;
  /* 113a55e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a55e4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 113a55e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a55ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113a55ed:;
  /* 113a55ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a55f0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113a55f3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a55f6 jge 0x113a5601 */
  if ((C.sf==C.of)) goto L_113a5601;
  /* 113a55f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a55ff jmp 0x113a562e */
  goto L_113a562e;
L_113a5601:;
  /* 113a5601 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5604 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113a5607 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a5608 mov ecx, 7 */
  ECX = (0x7u);
  /* 113a560d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a560f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a5612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5615 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113a5618 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a5619 mov ecx, 7 */
  ECX = (0x7u);
  /* 113a561e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a5620 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5623 jl 0x113a562e */
  if ((C.sf!=C.of)) goto L_113a562e;
  /* 113a5625 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5628 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a562b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113a562e:;
  /* 113a562e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5631 push eax */
  push32((uint32_t)(EAX));
  /* 113a5632 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5635 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5636 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a5638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a563b push edx */
  push32((uint32_t)(EDX));
  /* 113a563c call 0x113a58b0 */
  push32(0x113a5641u); f_113a58b0();
  /* 113a5641 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5644 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5649:;
  /* 113a5649 cmp dword ptr [0x113c2aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5650 je 0x113a5680 */
  if (C.zf) goto L_113a5680;
  /* 113a5652 mov dword ptr [0x113c2aa0], 0 */
  w32((uint32_t)(0x113c2aa0), (0x0u));
  /* 113a565c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a565f push eax */
  push32((uint32_t)(EAX));
  /* 113a5660 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5663 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5664 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5667 push edx */
  push32((uint32_t)(EDX));
  /* 113a5668 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a566b push eax */
  push32((uint32_t)(EAX));
  /* 113a566c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a566f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 113a5675 push edx */
  push32((uint32_t)(EDX));
  /* 113a5676 call 0x113a5a10 */
  push32(0x113a567bu); f_113a5a10();
  /* 113a567b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a567e jmp 0x113a56a2 */
  goto L_113a56a2;
L_113a5680:;
  /* 113a5680 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5683 push eax */
  push32((uint32_t)(EAX));
  /* 113a5684 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5687 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5688 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a568b push edx */
  push32((uint32_t)(EDX));
  /* 113a568c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a568f push eax */
  push32((uint32_t)(EAX));
  /* 113a5690 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5693 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 113a5699 push edx */
  push32((uint32_t)(EDX));
  /* 113a569a call 0x113a5a10 */
  push32(0x113a569fu); f_113a5a10();
  /* 113a569f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a56a2:;
  /* 113a56a2 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a56a7:;
  /* 113a56a7 mov dword ptr [0x113c2aa0], 0 */
  w32((uint32_t)(0x113c2aa0), (0x0u));
  /* 113a56b1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a56b4 push eax */
  push32((uint32_t)(EAX));
  /* 113a56b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a56b8 push ecx */
  push32((uint32_t)(ECX));
  /* 113a56b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a56bc push edx */
  push32((uint32_t)(EDX));
  /* 113a56bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a56c0 push eax */
  push32((uint32_t)(EAX));
  /* 113a56c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a56c4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 113a56ca push edx */
  push32((uint32_t)(EDX));
  /* 113a56cb call 0x113a5a10 */
  push32(0x113a56d0u); f_113a5a10();
  /* 113a56d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a56d3 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a56d8:;
  /* 113a56d8 mov eax, dword ptr [0x113c2aa0] */
  EAX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a56dd mov dword ptr [0x113c2ab0], eax */
  w32((uint32_t)(0x113c2ab0), (EAX));
  /* 113a56e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a56e5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 113a56e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a56e9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 113a56ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a56f0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a56f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a56f6 push edx */
  push32((uint32_t)(EDX));
  /* 113a56f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a56fa push eax */
  push32((uint32_t)(EAX));
  /* 113a56fb push 2 */
  push32((uint32_t)(0x2u));
  /* 113a56fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5700 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5701 call 0x113a58b0 */
  push32(0x113a5706u); f_113a58b0();
  /* 113a5706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5709 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a570e:;
  /* 113a570e mov edx, dword ptr [0x113c2aa0] */
  EDX = (r32((uint32_t)(0x113c2aa0)));
  /* 113a5714 mov dword ptr [0x113c2ab0], edx */
  w32((uint32_t)(0x113c2ab0), (EDX));
  /* 113a571a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a571d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 113a5720 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a5721 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 113a5726 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a5728 mov ecx, eax */
  ECX = (EAX);
  /* 113a572a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a572d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a5730 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5733 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113a5736 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a5737 mov esi, 0x64 */
  ESI = (0x64u);
  /* 113a573c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a573e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5740 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a5743 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5746 push eax */
  push32((uint32_t)(EAX));
  /* 113a5747 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a574a push ecx */
  push32((uint32_t)(ECX));
  /* 113a574b push 4 */
  push32((uint32_t)(0x4u));
  /* 113a574d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5750 push edx */
  push32((uint32_t)(EDX));
  /* 113a5751 call 0x113a58b0 */
  push32(0x113a5756u); f_113a58b0();
  /* 113a5756 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5759 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a575b:;
  /* 113a575b call 0x1139a310 */
  push32(0x113a5760u); f_1139a310();
  /* 113a5760 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5763 push eax */
  push32((uint32_t)(EAX));
  /* 113a5764 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5767 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5768 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a576b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a576d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5771 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 113a5774 mov ecx, dword ptr [eax*4 + 0x113c0d14] */
  ECX = (r32((uint32_t)(EAX*4 + 0x113c0d14)));
  /* 113a577b push ecx */
  push32((uint32_t)(ECX));
  /* 113a577c call 0x113a5860 */
  push32(0x113a5781u); f_113a5860();
  /* 113a5781 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5784 jmp 0x113a57a8 */
  goto L_113a57a8;
L_113a5786:;
  /* 113a5786 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5789 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a578b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 113a578e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5791 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a5793 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5796 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5799 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a579b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a579e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a57a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a57a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a57a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113a57a8:;
  /* 113a57a8 pop esi */
  ESI = (pop32());
  /* 113a57a9 mov esp, ebp */
  ESP = (EBP);
  /* 113a57ab pop ebp */
  EBP = (pop32());
  /* 113a57ac ret  */
  ESPCHK(0x113a5240u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x113a5860 (72 bytes, 30 insns) */
void f_113a5860(void) {
  FTRACE(0x113a5860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a5860 push ebp */
  push32((uint32_t)(EBP));
  /* 113a5861 mov ebp, esp */
  EBP = (ESP);
L_113a5863:;
  /* 113a5863 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5866 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5869 je 0x113a58a6 */
  if (C.zf) goto L_113a58a6;
  /* 113a586b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a586e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a5871 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a5873 je 0x113a58a6 */
  if (C.zf) goto L_113a58a6;
  /* 113a5875 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5878 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a587a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a587d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a587f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113a5881 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5884 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a5886 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5889 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a588c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a588e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5891 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5894 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113a5897 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a589a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a589c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a589f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a58a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113a58a4 jmp 0x113a5863 */
  goto L_113a5863;
L_113a58a6:;
  /* 113a58a6 pop ebp */
  EBP = (pop32());
  /* 113a58a7 ret  */
  ESPCHK(0x113a5860u, _esp0);
  ESP += 4; return;
}

/* FUN_100158b0 @ 0x113a58b0 (173 bytes, 64 insns) */
void f_113a58b0(void) {
  FTRACE(0x113a58b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a58b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a58b1 mov ebp, esp */
  EBP = (ESP);
  /* 113a58b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a58b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a58bb cmp dword ptr [0x113c2ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a58c2 je 0x113a58da */
  if (C.zf) goto L_113a58da;
  /* 113a58c4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a58c7 push eax */
  push32((uint32_t)(EAX));
  /* 113a58c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a58cb push ecx */
  push32((uint32_t)(ECX));
  /* 113a58cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a58cf push edx */
  push32((uint32_t)(EDX));
  /* 113a58d0 call 0x113a5960 */
  push32(0x113a58d5u); f_113a5960();
  /* 113a58d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a58d8 jmp 0x113a5959 */
  goto L_113a5959;
L_113a58da:;
  /* 113a58da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a58dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a58e0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a58e2 jae 0x113a5950 */
  if (!C.cf) goto L_113a5950;
  /* 113a58e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a58e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a58ea mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 113a58ed jmp 0x113a58f8 */
  goto L_113a58f8;
L_113a58ef:;
  /* 113a58ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a58f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a58f5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_113a58f8:;
  /* 113a58f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a58fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a58fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a5900 je 0x113a5934 */
  if (C.zf) goto L_113a5934;
  /* 113a5902 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5905 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a5906 mov ecx, 0xa */
  ECX = (0xau);
  /* 113a590b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a590d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5910 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5913 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5915 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5918 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 113a591b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a591e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a591f mov ecx, 0xa */
  ECX = (0xau);
  /* 113a5924 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a5926 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a5929 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a592c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a592f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a5932 jmp 0x113a58ef */
  goto L_113a58ef;
L_113a5934:;
  /* 113a5934 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5937 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5939 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a593c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a593f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113a5941 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5944 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5946 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5949 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a594c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113a594e jmp 0x113a5959 */
  goto L_113a5959;
L_113a5950:;
  /* 113a5950 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5953 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_113a5959:;
  /* 113a5959 mov esp, ebp */
  ESP = (EBP);
  /* 113a595b pop ebp */
  EBP = (pop32());
  /* 113a595c ret  */
  ESPCHK(0x113a58b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x113a5960 (172 bytes, 65 insns) */
void f_113a5960(void) {
  FTRACE(0x113a5960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a5960 push ebp */
  push32((uint32_t)(EBP));
  /* 113a5961 mov ebp, esp */
  EBP = (ESP);
  /* 113a5963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5966 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5969 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a596b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a596e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5971 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5974 jbe 0x113a59bb */
  if ((C.cf||C.zf)) goto L_113a59bb;
L_113a5976:;
  /* 113a5976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5979 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a597a mov ecx, 0xa */
  ECX = (0xau);
  /* 113a597f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a5981 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5984 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5987 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113a5989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a598c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a598f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a5992 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5995 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5997 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a599a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a599d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113a599f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a59a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a59a3 mov ecx, 0xa */
  ECX = (0xau);
  /* 113a59a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a59aa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a59ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a59b1 jle 0x113a59bb */
  if ((C.zf||C.sf!=C.of)) goto L_113a59bb;
  /* 113a59b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a59b6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a59b9 ja 0x113a5976 */
  if ((!C.cf&&!C.zf)) goto L_113a5976;
L_113a59bb:;
  /* 113a59bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a59be mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a59c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a59c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a59c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a59c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113a59cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a59ce sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a59d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113a59d4:;
  /* 113a59d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a59d7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a59d9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 113a59dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a59df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a59e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a59e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113a59e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a59e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a59ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a59ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a59f2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 113a59f5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 113a59f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a59fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a59fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a5a00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a5a03 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5a06 jb 0x113a59d4 */
  if (C.cf) goto L_113a59d4;
  /* 113a5a08 mov esp, ebp */
  ESP = (EBP);
  /* 113a5a0a pop ebp */
  EBP = (pop32());
  /* 113a5a0b ret  */
  ESPCHK(0x113a5960u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a10 @ 0x113a5a10 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_113a5a10(void) {
  FTRACE(0x113a5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 113a5a11 mov ebp, esp */
  EBP = (ESP);
  /* 113a5a13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_113a5a16:;
  /* 113a5a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5a19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a5a1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a5a1e je 0x113a5e8c */
  if (C.zf) goto L_113a5e8c;
  /* 113a5a24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5a27 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5a2a je 0x113a5e8c */
  if (C.zf) goto L_113a5e8c;
  /* 113a5a30 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a5a34 mov dword ptr [0x113c2ab0], 0 */
  w32((uint32_t)(0x113c2ab0), (0x0u));
  /* 113a5a3e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113a5a45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5a48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a5a4b jmp 0x113a5a56 */
  goto L_113a5a56;
L_113a5a4d:;
  /* 113a5a4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5a50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5a53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_113a5a56:;
  /* 113a5a56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5a59 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113a5a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5a5f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a5a62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5a65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5a68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a5a6b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5a6d jne 0x113a5a71 */
  if (!C.zf) goto L_113a5a71;
  /* 113a5a6f jmp 0x113a5a4d */
  goto L_113a5a4d;
L_113a5a71:;
  /* 113a5a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5a74 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5a77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a5a7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5a7d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a5a80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 113a5a83 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a5a86 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5a89 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 113a5a8c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5a90 ja 0x113a5de0 */
  if ((!C.cf&&!C.zf)) goto L_113a5de0;
  /* 113a5a96 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a5a99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a5a9b mov al, byte ptr [ecx + 0x113a5ebc] */
  AL = (r8((uint32_t)(ECX + 0x113a5ebc)));
  /* 113a5aa1 jmp dword ptr [eax*4 + 0x113a5e90] */
  switch (EAX) {
    case 0: goto L_113a5cff;
    case 1: goto L_113a5be3;
    case 2: goto L_113a5b6e;
    case 3: goto L_113a5aa8;
    case 4: goto L_113a5ae6;
    case 5: goto L_113a5b47;
    case 6: goto L_113a5b95;
    case 7: goto L_113a5bbc;
    case 8: goto L_113a5c2a;
    case 9: goto L_113a5b24;
    case 10: goto L_113a5de0;
    default: x86_unimpl("switch@0x113a5aa1 out of table"); return;
  }
L_113a5aa8:;
  /* 113a5aa8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5aab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113a5aae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a5ab1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5ab4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113a5ab7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5abb ja 0x113a5ae1 */
  if ((!C.cf&&!C.zf)) goto L_113a5ae1;
  /* 113a5abd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a5ac0 jmp dword ptr [ecx*4 + 0x113a5f0f] */
  switch (ECX) {
    case 0: goto L_113a5ac7;
    case 1: goto L_113a5ad1;
    case 2: goto L_113a5ad7;
    case 3: goto L_113a5add;
    case 4: goto L_113a5b05;
    case 5: goto L_113a5b0f;
    case 6: goto L_113a5b15;
    case 7: goto L_113a5b1b;
    default: x86_unimpl("switch@0x113a5ac0 out of table"); return;
  }
L_113a5ac7:;
  /* 113a5ac7 mov dword ptr [0x113c2ab0], 1 */
  w32((uint32_t)(0x113c2ab0), (0x1u));
L_113a5ad1:;
  /* 113a5ad1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 113a5ad5 jmp 0x113a5ae1 */
  goto L_113a5ae1;
L_113a5ad7:;
  /* 113a5ad7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 113a5adb jmp 0x113a5ae1 */
  goto L_113a5ae1;
L_113a5add:;
  /* 113a5add mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_113a5ae1:;
  /* 113a5ae1 jmp 0x113a5de0 */
  goto L_113a5de0;
L_113a5ae6:;
  /* 113a5ae6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5ae9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 113a5aec mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a5aef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5af2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113a5af5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5af9 ja 0x113a5b1f */
  if ((!C.cf&&!C.zf)) goto L_113a5b1f;
  /* 113a5afb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a5afe jmp dword ptr [ecx*4 + 0x113a5f1f] */
  switch (ECX) {
    case 0: goto L_113a5b05;
    case 1: goto L_113a5b0f;
    case 2: goto L_113a5b15;
    case 3: goto L_113a5b1b;
    default: x86_unimpl("switch@0x113a5afe out of table"); return;
  }
L_113a5b05:;
  /* 113a5b05 mov dword ptr [0x113c2ab0], 1 */
  w32((uint32_t)(0x113c2ab0), (0x1u));
L_113a5b0f:;
  /* 113a5b0f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 113a5b13 jmp 0x113a5b1f */
  goto L_113a5b1f;
L_113a5b15:;
  /* 113a5b15 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 113a5b19 jmp 0x113a5b1f */
  goto L_113a5b1f;
L_113a5b1b:;
  /* 113a5b1b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_113a5b1f:;
  /* 113a5b1f jmp 0x113a5de0 */
  goto L_113a5de0;
L_113a5b24:;
  /* 113a5b24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5b27 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 113a5b2a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5b2e je 0x113a5b38 */
  if (C.zf) goto L_113a5b38;
  /* 113a5b30 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5b34 je 0x113a5b3e */
  if (C.zf) goto L_113a5b3e;
  /* 113a5b36 jmp 0x113a5b42 */
  goto L_113a5b42;
L_113a5b38:;
  /* 113a5b38 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 113a5b3c jmp 0x113a5b42 */
  goto L_113a5b42;
L_113a5b3e:;
  /* 113a5b3e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_113a5b42:;
  /* 113a5b42 jmp 0x113a5de0 */
  goto L_113a5de0;
L_113a5b47:;
  /* 113a5b47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5b4a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113a5b4d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5b51 je 0x113a5b5b */
  if (C.zf) goto L_113a5b5b;
  /* 113a5b53 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5b57 je 0x113a5b65 */
  if (C.zf) goto L_113a5b65;
  /* 113a5b59 jmp 0x113a5b69 */
  goto L_113a5b69;
L_113a5b5b:;
  /* 113a5b5b mov dword ptr [0x113c2ab0], 1 */
  w32((uint32_t)(0x113c2ab0), (0x1u));
L_113a5b65:;
  /* 113a5b65 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_113a5b69:;
  /* 113a5b69 jmp 0x113a5de0 */
  goto L_113a5de0;
L_113a5b6e:;
  /* 113a5b6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5b71 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 113a5b74 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5b78 je 0x113a5b82 */
  if (C.zf) goto L_113a5b82;
  /* 113a5b7a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5b7e je 0x113a5b8c */
  if (C.zf) goto L_113a5b8c;
  /* 113a5b80 jmp 0x113a5b90 */
  goto L_113a5b90;
L_113a5b82:;
  /* 113a5b82 mov dword ptr [0x113c2ab0], 1 */
  w32((uint32_t)(0x113c2ab0), (0x1u));
L_113a5b8c:;
  /* 113a5b8c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_113a5b90:;
  /* 113a5b90 jmp 0x113a5de0 */
  goto L_113a5de0;
L_113a5b95:;
  /* 113a5b95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5b98 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 113a5b9b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5b9f je 0x113a5ba9 */
  if (C.zf) goto L_113a5ba9;
  /* 113a5ba1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5ba5 je 0x113a5bb3 */
  if (C.zf) goto L_113a5bb3;
  /* 113a5ba7 jmp 0x113a5bb7 */
  goto L_113a5bb7;
L_113a5ba9:;
  /* 113a5ba9 mov dword ptr [0x113c2ab0], 1 */
  w32((uint32_t)(0x113c2ab0), (0x1u));
L_113a5bb3:;
  /* 113a5bb3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_113a5bb7:;
  /* 113a5bb7 jmp 0x113a5de0 */
  goto L_113a5de0;
L_113a5bbc:;
  /* 113a5bbc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5bbf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 113a5bc2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5bc6 je 0x113a5bd0 */
  if (C.zf) goto L_113a5bd0;
  /* 113a5bc8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5bcc je 0x113a5bda */
  if (C.zf) goto L_113a5bda;
  /* 113a5bce jmp 0x113a5bde */
  goto L_113a5bde;
L_113a5bd0:;
  /* 113a5bd0 mov dword ptr [0x113c2ab0], 1 */
  w32((uint32_t)(0x113c2ab0), (0x1u));
L_113a5bda:;
  /* 113a5bda mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_113a5bde:;
  /* 113a5bde jmp 0x113a5de0 */
  goto L_113a5de0;
L_113a5be3:;
  /* 113a5be3 push 0x113becbc */
  push32((uint32_t)(0x113becbcu));
  /* 113a5be8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5beb push ecx */
  push32((uint32_t)(ECX));
  /* 113a5bec call 0x113a6440 */
  push32(0x113a5bf1u); f_113a6440();
  /* 113a5bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a5bf6 jne 0x113a5c03 */
  if (!C.zf) goto L_113a5c03;
  /* 113a5bf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5bfb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5bfe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a5c01 jmp 0x113a5c21 */
  goto L_113a5c21;
L_113a5c03:;
  /* 113a5c03 push 0x113becb8 */
  push32((uint32_t)(0x113becb8u));
  /* 113a5c08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5c0b push eax */
  push32((uint32_t)(EAX));
  /* 113a5c0c call 0x113a6440 */
  push32(0x113a5c11u); f_113a6440();
  /* 113a5c11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a5c16 jne 0x113a5c21 */
  if (!C.zf) goto L_113a5c21;
  /* 113a5c18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5c1b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5c1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113a5c21:;
  /* 113a5c21 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 113a5c25 jmp 0x113a5de0 */
  goto L_113a5de0;
L_113a5c2a:;
  /* 113a5c2a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5c2d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5c31 jg 0x113a5c41 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a5c41;
  /* 113a5c33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5c36 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 113a5c3c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113a5c3f jmp 0x113a5c4d */
  goto L_113a5c4d;
L_113a5c41:;
  /* 113a5c41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5c44 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 113a5c4a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113a5c4d:;
  /* 113a5c4d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5c51 jle 0x113a5cf4 */
  if ((C.zf||C.sf!=C.of)) goto L_113a5cf4;
  /* 113a5c57 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5c5a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5c5d jbe 0x113a5cf4 */
  if ((C.cf||C.zf)) goto L_113a5cf4;
  /* 113a5c63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a5c66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a5c68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a5c6a mov ecx, dword ptr [0x113c0db8] */
  ECX = (r32((uint32_t)(0x113c0db8)));
  /* 113a5c70 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a5c72 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113a5c76 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113a5c7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a5c7e je 0x113a5cb7 */
  if (C.zf) goto L_113a5cb7;
  /* 113a5c80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5c83 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5c86 jbe 0x113a5cb7 */
  if ((C.cf||C.zf)) goto L_113a5cb7;
  /* 113a5c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5c8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a5c8d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a5c90 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a5c92 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113a5c94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5c97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5c99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5c9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5c9f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113a5ca1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a5ca4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5ca7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 113a5caa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5cad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5caf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5cb2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5cb5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_113a5cb7:;
  /* 113a5cb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5cba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5cbc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a5cbf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a5cc1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113a5cc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5cc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a5cc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5ccb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5cce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a5cd0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a5cd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5cd6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113a5cd9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5cdc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5cde sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5ce1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5ce4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113a5ce6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5ce9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5cec mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113a5cef jmp 0x113a5c4d */
  goto L_113a5c4d;
L_113a5cf4:;
  /* 113a5cf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5cf7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a5cfa jmp 0x113a5a16 */
  goto L_113a5a16;
L_113a5cff:;
  /* 113a5cff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5d02 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113a5d05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a5d07 je 0x113a5dd2 */
  if (C.zf) goto L_113a5dd2;
  /* 113a5d0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5d10 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5d13 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_113a5d16:;
  /* 113a5d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5d19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a5d1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a5d1e je 0x113a5dd0 */
  if (C.zf) goto L_113a5dd0;
  /* 113a5d24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5d27 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5d2a je 0x113a5dd0 */
  if (C.zf) goto L_113a5dd0;
  /* 113a5d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5d33 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a5d36 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5d39 jne 0x113a5d49 */
  if (!C.zf) goto L_113a5d49;
  /* 113a5d3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5d3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5d41 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113a5d44 jmp 0x113a5dd0 */
  goto L_113a5dd0;
L_113a5d49:;
  /* 113a5d49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5d4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a5d4e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a5d50 mov edx, dword ptr [0x113c0db8] */
  EDX = (r32((uint32_t)(0x113c0db8)));
  /* 113a5d56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a5d58 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 113a5d5c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 113a5d61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a5d63 je 0x113a5d9c */
  if (C.zf) goto L_113a5d9c;
  /* 113a5d65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5d68 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5d6b jbe 0x113a5d9c */
  if ((C.cf||C.zf)) goto L_113a5d9c;
  /* 113a5d6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5d70 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5d72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5d75 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a5d77 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113a5d79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5d7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5d7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5d81 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5d84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113a5d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5d89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5d8c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a5d8f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5d92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a5d94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5d97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5d9a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113a5d9c:;
  /* 113a5d9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5d9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a5da1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5da4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a5da6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113a5da8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5dab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5dad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5db0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5db3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113a5db5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5db8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5dbb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 113a5dbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5dc1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5dc3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5dc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5dc9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113a5dcb jmp 0x113a5d16 */
  goto L_113a5d16;
L_113a5dd0:;
  /* 113a5dd0 jmp 0x113a5ddb */
  goto L_113a5ddb;
L_113a5dd2:;
  /* 113a5dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5dd5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5dd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113a5ddb:;
  /* 113a5ddb jmp 0x113a5a16 */
  goto L_113a5a16;
L_113a5de0:;
  /* 113a5de0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a5de4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a5de6 je 0x113a5e0c */
  if (C.zf) goto L_113a5e0c;
  /* 113a5de8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a5deb push edx */
  push32((uint32_t)(EDX));
  /* 113a5dec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5def push eax */
  push32((uint32_t)(EAX));
  /* 113a5df0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5df3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5df4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5df7 push edx */
  push32((uint32_t)(EDX));
  /* 113a5df8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 113a5dfb push eax */
  push32((uint32_t)(EAX));
  /* 113a5dfc call 0x113a5240 */
  push32(0x113a5e01u); f_113a5240();
  /* 113a5e01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5e04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a5e07 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113a5e0a jmp 0x113a5e87 */
  goto L_113a5e87;
L_113a5e0c:;
  /* 113a5e0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5e0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a5e11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a5e13 mov ecx, dword ptr [0x113c0db8] */
  ECX = (r32((uint32_t)(0x113c0db8)));
  /* 113a5e19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a5e1b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113a5e1f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 113a5e25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a5e27 je 0x113a5e58 */
  if (C.zf) goto L_113a5e58;
  /* 113a5e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5e2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5e2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5e31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a5e33 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113a5e35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5e38 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a5e3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5e3d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5e40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a5e42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5e45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5e48 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 113a5e4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5e4e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5e50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5e53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5e56 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_113a5e58:;
  /* 113a5e58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5e5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a5e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5e60 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a5e62 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 113a5e64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5e67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a5e69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5e6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5e6f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 113a5e71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a5e74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5e77 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a5e7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5e7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a5e7f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5e82 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5e85 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113a5e87:;
  /* 113a5e87 jmp 0x113a5a16 */
  goto L_113a5a16;
L_113a5e8c:;
  /* 113a5e8c mov esp, ebp */
  ESP = (EBP);
  /* 113a5e8e pop ebp */
  EBP = (pop32());
  /* 113a5e8f ret  */
  ESPCHK(0x113a5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f30 @ 0x113a5f30 (650 bytes, 178 insns) */
void f_113a5f30(void) {
  FTRACE(0x113a5f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a5f30 push ebp */
  push32((uint32_t)(EBP));
  /* 113a5f31 mov ebp, esp */
  EBP = (ESP);
  /* 113a5f33 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a5f39 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5f3d jne 0x113a6099 */
  if (!C.zf) goto L_113a6099;
  /* 113a5f43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a5f46 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 113a5f4c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 113a5f52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a5f55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a5f5c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 113a5f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a5f68 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 113a5f6e push edx */
  push32((uint32_t)(EDX));
  /* 113a5f6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a5f72 push eax */
  push32((uint32_t)(EAX));
  /* 113a5f73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5f76 push ecx */
  push32((uint32_t)(ECX));
  /* 113a5f77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5f7a push edx */
  push32((uint32_t)(EDX));
  /* 113a5f7b call 0x113a6890 */
  push32(0x113a5f80u); f_113a6890();
  /* 113a5f80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5f83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a5f86 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5f8a jne 0x113a601f */
  if (!C.zf) goto L_113a601f;
  /* 113a5f90 call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x113a5f96u);
  /* 113a5f96 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5f99 je 0x113a5fa0 */
  if (C.zf) goto L_113a5fa0;
  /* 113a5f9b jmp 0x113a607d */
  goto L_113a607d;
L_113a5fa0:;
  /* 113a5fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a5fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a5fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a5fa6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a5fa9 push eax */
  push32((uint32_t)(EAX));
  /* 113a5faa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a5fad push ecx */
  push32((uint32_t)(ECX));
  /* 113a5fae call 0x113a6890 */
  push32(0x113a5fb3u); f_113a6890();
  /* 113a5fb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5fb6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 113a5fbc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5fc3 jne 0x113a5fca */
  if (!C.zf) goto L_113a5fca;
  /* 113a5fc5 jmp 0x113a607d */
  goto L_113a607d;
L_113a5fca:;
  /* 113a5fca push 0x58 */
  push32((uint32_t)(0x58u));
  /* 113a5fcc push 0x113becc4 */
  push32((uint32_t)(0x113becc4u));
  /* 113a5fd1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a5fd3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 113a5fd9 push edx */
  push32((uint32_t)(EDX));
  /* 113a5fda call 0x11396610 */
  push32(0x113a5fdfu); f_11396610();
  /* 113a5fdf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a5fe2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a5fe5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a5fe9 jne 0x113a5ff0 */
  if (!C.zf) goto L_113a5ff0;
  /* 113a5feb jmp 0x113a607d */
  goto L_113a607d;
L_113a5ff0:;
  /* 113a5ff0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113a5ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a5ff9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 113a5fff push eax */
  push32((uint32_t)(EAX));
  /* 113a6000 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a6003 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6004 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a6007 push edx */
  push32((uint32_t)(EDX));
  /* 113a6008 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a600b push eax */
  push32((uint32_t)(EAX));
  /* 113a600c call 0x113a6890 */
  push32(0x113a6011u); f_113a6890();
  /* 113a6011 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6014 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a6017 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a601b jne 0x113a601f */
  if (!C.zf) goto L_113a601f;
  /* 113a601d jmp 0x113a607d */
  goto L_113a607d;
L_113a601f:;
  /* 113a601f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 113a6021 push 0x113becc4 */
  push32((uint32_t)(0x113becc4u));
  /* 113a6026 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a6028 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a602b push ecx */
  push32((uint32_t)(ECX));
  /* 113a602c call 0x11396610 */
  push32(0x113a6031u); f_11396610();
  /* 113a6031 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6034 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 113a603a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 113a603c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 113a6042 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6045 jne 0x113a6049 */
  if (!C.zf) goto L_113a6049;
  /* 113a6047 jmp 0x113a607d */
  goto L_113a607d;
L_113a6049:;
  /* 113a6049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a604c push ecx */
  push32((uint32_t)(ECX));
  /* 113a604d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a6050 push edx */
  push32((uint32_t)(EDX));
  /* 113a6051 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 113a6057 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a6059 push ecx */
  push32((uint32_t)(ECX));
  /* 113a605a call 0x11399e30 */
  push32(0x113a605fu); f_11399e30();
  /* 113a605f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6062 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6066 je 0x113a6076 */
  if (C.zf) goto L_113a6076;
  /* 113a6068 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a606a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a606d push edx */
  push32((uint32_t)(EDX));
  /* 113a606e call 0x113970a0 */
  push32(0x113a6073u); f_113970a0();
  /* 113a6073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a6076:;
  /* 113a6076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a6078 jmp 0x113a61b6 */
  goto L_113a61b6;
L_113a607d:;
  /* 113a607d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6081 je 0x113a6091 */
  if (C.zf) goto L_113a6091;
  /* 113a6083 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a6085 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a6088 push eax */
  push32((uint32_t)(EAX));
  /* 113a6089 call 0x113970a0 */
  push32(0x113a608eu); f_113970a0();
  /* 113a608e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a6091:;
  /* 113a6091 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a6094 jmp 0x113a61b6 */
  goto L_113a61b6;
L_113a6099:;
  /* 113a6099 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a609d jne 0x113a61b3 */
  if (!C.zf) goto L_113a61b3;
  /* 113a60a3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 113a60ad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a60b0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 113a60b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a60b8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113a60be push edx */
  push32((uint32_t)(EDX));
  /* 113a60bf push 0x113c2a88 */
  push32((uint32_t)(0x113c2a88u));
  /* 113a60c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a60c7 push eax */
  push32((uint32_t)(EAX));
  /* 113a60c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a60cb push ecx */
  push32((uint32_t)(ECX));
  /* 113a60cc call 0x113a66f0 */
  push32(0x113a60d1u); f_113a66f0();
  /* 113a60d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a60d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a60d6 jne 0x113a60e0 */
  if (!C.zf) goto L_113a60e0;
  /* 113a60d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a60db jmp 0x113a61b6 */
  goto L_113a61b6;
L_113a60e0:;
  /* 113a60e0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113a60e6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113a60e9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 113a60f3 jmp 0x113a6104 */
  goto L_113a6104;
L_113a60f5:;
  /* 113a60f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a60fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a60fe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_113a6104:;
  /* 113a6104 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a610b jge 0x113a61af */
  if ((C.sf==C.of)) goto L_113a61af;
  /* 113a6111 cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6118 jle 0x113a614b */
  if ((C.zf||C.sf!=C.of)) goto L_113a614b;
  /* 113a611a push 4 */
  push32((uint32_t)(0x4u));
  /* 113a611c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a6122 mov dl, byte ptr [ecx*2 + 0x113c2a88] */
  DL = (r8((uint32_t)(ECX*2 + 0x113c2a88)));
  /* 113a6129 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 113a612f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 113a6135 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a613a push eax */
  push32((uint32_t)(EAX));
  /* 113a613b call 0x1139cf60 */
  push32(0x113a6140u); f_1139cf60();
  /* 113a6140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6143 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 113a6149 jmp 0x113a617e */
  goto L_113a617e;
L_113a614b:;
  /* 113a614b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a6151 mov dl, byte ptr [ecx*2 + 0x113c2a88] */
  DL = (r8((uint32_t)(ECX*2 + 0x113c2a88)));
  /* 113a6158 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 113a615e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 113a6164 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a6169 mov ecx, dword ptr [0x113c0db8] */
  ECX = (r32((uint32_t)(0x113c0db8)));
  /* 113a616f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a6171 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113a6175 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 113a6178 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_113a617e:;
  /* 113a617e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6185 je 0x113a61a8 */
  if (C.zf) goto L_113a61a8;
  /* 113a6187 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113a618d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a6190 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a6193 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 113a619a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 113a619e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113a61a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113a61a6 jmp 0x113a61aa */
  goto L_113a61aa;
L_113a61a8:;
  /* 113a61a8 jmp 0x113a61af */
  goto L_113a61af;
L_113a61aa:;
  /* 113a61aa jmp 0x113a60f5 */
  goto L_113a60f5;
L_113a61af:;
  /* 113a61af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a61b1 jmp 0x113a61b6 */
  goto L_113a61b6;
L_113a61b3:;
  /* 113a61b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113a61b6:;
  /* 113a61b6 mov esp, ebp */
  ESP = (EBP);
  /* 113a61b8 pop ebp */
  EBP = (pop32());
  /* 113a61b9 ret  */
  ESPCHK(0x113a5f30u, _esp0);
  ESP += 4; return;
}

/* FUN_100161c0 @ 0x113a61c0 (10 bytes, 5 insns) */
void f_113a61c0(void) {
  FTRACE(0x113a61c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a61c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a61c1 mov ebp, esp */
  EBP = (ESP);
  /* 113a61c3 mov eax, dword ptr [0x113c1eb8] */
  EAX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a61c8 pop ebp */
  EBP = (pop32());
  /* 113a61c9 ret  */
  ESPCHK(0x113a61c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100161d0 @ 0x113a61d0 (575 bytes, 196 insns) */
void f_113a61d0(void) {
  FTRACE(0x113a61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a61d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a61d1 mov ebp, esp */
  EBP = (ESP);
  /* 113a61d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a61d5 push 0x113becd0 */
  push32((uint32_t)(0x113becd0u));
  /* 113a61da push 0x113a0578 */
  push32((uint32_t)(0x113a0578u));
  /* 113a61df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113a61e5 push eax */
  push32((uint32_t)(EAX));
  /* 113a61e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113a61ed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a61f0 push ebx */
  push32((uint32_t)(EBX));
  /* 113a61f1 push esi */
  push32((uint32_t)(ESI));
  /* 113a61f2 push edi */
  push32((uint32_t)(EDI));
  /* 113a61f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a61f6 cmp dword ptr [0x113c2a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a61fd jne 0x113a624e */
  if (!C.zf) goto L_113a624e;
  /* 113a61ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 113a6202 push eax */
  push32((uint32_t)(EAX));
  /* 113a6203 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a6205 push 0x113be388 */
  push32((uint32_t)(0x113be388u));
  /* 113a620a push 1 */
  push32((uint32_t)(0x1u));
  /* 113a620c call dword ptr [0x113c5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5328))), 0x113a6212u);
  /* 113a6212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a6214 je 0x113a6222 */
  if (C.zf) goto L_113a6222;
  /* 113a6216 mov dword ptr [0x113c2a94], 1 */
  w32((uint32_t)(0x113c2a94), (0x1u));
  /* 113a6220 jmp 0x113a624e */
  goto L_113a624e;
L_113a6222:;
  /* 113a6222 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 113a6225 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6226 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a6228 push 0x113be384 */
  push32((uint32_t)(0x113be384u));
  /* 113a622d push 1 */
  push32((uint32_t)(0x1u));
  /* 113a622f push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6231 call dword ptr [0x113c532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c532c))), 0x113a6237u);
  /* 113a6237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a6239 je 0x113a6247 */
  if (C.zf) goto L_113a6247;
  /* 113a623b mov dword ptr [0x113c2a94], 2 */
  w32((uint32_t)(0x113c2a94), (0x2u));
  /* 113a6245 jmp 0x113a624e */
  goto L_113a624e;
L_113a6247:;
  /* 113a6247 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a6249 jmp 0x113a6429 */
  goto L_113a6429;
L_113a624e:;
  /* 113a624e cmp dword ptr [0x113c2a94], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a94))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6255 jne 0x113a6272 */
  if (!C.zf) goto L_113a6272;
  /* 113a6257 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a625a push edx */
  push32((uint32_t)(EDX));
  /* 113a625b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a625e push eax */
  push32((uint32_t)(EAX));
  /* 113a625f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a6262 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6263 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6266 push edx */
  push32((uint32_t)(EDX));
  /* 113a6267 call dword ptr [0x113c5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5328))), 0x113a626du);
  /* 113a626d jmp 0x113a6429 */
  goto L_113a6429;
L_113a6272:;
  /* 113a6272 cmp dword ptr [0x113c2a94], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a94))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6279 jne 0x113a6427 */
  if (!C.zf) goto L_113a6427;
  /* 113a627f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6283 jne 0x113a628d */
  if (!C.zf) goto L_113a628d;
  /* 113a6285 mov eax, dword ptr [0x113c2a00] */
  EAX = (r32((uint32_t)(0x113c2a00)));
  /* 113a628a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_113a628d:;
  /* 113a628d push 0 */
  push32((uint32_t)(0x0u));
  /* 113a628f push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6291 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6293 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6295 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a6298 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6299 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a629c push edx */
  push32((uint32_t)(EDX));
  /* 113a629d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113a62a2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a62a5 push eax */
  push32((uint32_t)(EAX));
  /* 113a62a6 call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x113a62acu);
  /* 113a62ac mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113a62af cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a62b3 jne 0x113a62bc */
  if (!C.zf) goto L_113a62bc;
  /* 113a62b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a62b7 jmp 0x113a6429 */
  goto L_113a6429;
L_113a62bc:;
  /* 113a62bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a62c3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a62c6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a62c9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113a62cb call 0x113997b0 */
  push32(0x113a62d0u); f_113997b0();
  /* 113a62d0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 113a62d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a62d6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 113a62d9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 113a62dc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a62df push edx */
  push32((uint32_t)(EDX));
  /* 113a62e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a62e2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113a62e5 push eax */
  push32((uint32_t)(EAX));
  /* 113a62e6 call 0x1139acc0 */
  push32(0x113a62ebu); f_1139acc0();
  /* 113a62eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a62ee mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113a62f5 jmp 0x113a630e */
  goto L_113a630e;
  /* 113a62f7 mov eax, 1 */
  EAX = (0x1u);
  /* 113a62fc ret  */
  ESPCHK(0x113a61d0u, _esp0);
  ESP += 4; return;
  /* 113a62fd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113a6300 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 113a6307 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a630e:;
  /* 113a630e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6312 jne 0x113a631b */
  if (!C.zf) goto L_113a631b;
  /* 113a6314 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a6316 jmp 0x113a6429 */
  goto L_113a6429;
L_113a631b:;
  /* 113a631b push 0 */
  push32((uint32_t)(0x0u));
  /* 113a631d push 0 */
  push32((uint32_t)(0x0u));
  /* 113a631f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a6322 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6323 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113a6326 push edx */
  push32((uint32_t)(EDX));
  /* 113a6327 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a632a push eax */
  push32((uint32_t)(EAX));
  /* 113a632b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a632e push ecx */
  push32((uint32_t)(ECX));
  /* 113a632f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113a6334 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a6337 push edx */
  push32((uint32_t)(EDX));
  /* 113a6338 call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x113a633eu);
  /* 113a633e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a6340 jne 0x113a6349 */
  if (!C.zf) goto L_113a6349;
  /* 113a6342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a6344 jmp 0x113a6429 */
  goto L_113a6429;
L_113a6349:;
  /* 113a6349 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113a6350 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a6353 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 113a6357 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a635a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113a635c call 0x113997b0 */
  push32(0x113a6361u); f_113997b0();
  /* 113a6361 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 113a6364 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a6367 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 113a636a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113a636d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113a6374 jmp 0x113a638d */
  goto L_113a638d;
  /* 113a6376 mov eax, 1 */
  EAX = (0x1u);
  /* 113a637b ret  */
  ESPCHK(0x113a61d0u, _esp0);
  ESP += 4; return;
  /* 113a637c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113a637f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113a6386 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a638d:;
  /* 113a638d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6391 jne 0x113a639a */
  if (!C.zf) goto L_113a639a;
  /* 113a6393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a6395 jmp 0x113a6429 */
  goto L_113a6429;
L_113a639a:;
  /* 113a639a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a639e jne 0x113a63a9 */
  if (!C.zf) goto L_113a63a9;
  /* 113a63a0 mov edx, dword ptr [0x113c29f0] */
  EDX = (r32((uint32_t)(0x113c29f0)));
  /* 113a63a6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_113a63a9:;
  /* 113a63a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a63ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a63af mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 113a63b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a63b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a63bb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 113a63c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a63c5 push ecx */
  push32((uint32_t)(ECX));
  /* 113a63c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a63c9 push edx */
  push32((uint32_t)(EDX));
  /* 113a63ca mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113a63cd push eax */
  push32((uint32_t)(EAX));
  /* 113a63ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a63d1 push ecx */
  push32((uint32_t)(ECX));
  /* 113a63d2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113a63d5 push edx */
  push32((uint32_t)(EDX));
  /* 113a63d6 call dword ptr [0x113c532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c532c))), 0x113a63dcu);
  /* 113a63dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113a63df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a63e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a63e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a63e7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 113a63ec cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a63f2 je 0x113a6408 */
  if (C.zf) goto L_113a6408;
  /* 113a63f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a63f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a63fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a63fc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 113a6400 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6406 je 0x113a640c */
  if (C.zf) goto L_113a640c;
L_113a6408:;
  /* 113a6408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a640a jmp 0x113a6429 */
  goto L_113a6429;
L_113a640c:;
  /* 113a640c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a640f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113a6411 push eax */
  push32((uint32_t)(EAX));
  /* 113a6412 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a6415 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6416 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a6419 push edx */
  push32((uint32_t)(EDX));
  /* 113a641a call 0x1139f220 */
  push32(0x113a641fu); f_1139f220();
  /* 113a641f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6422 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a6425 jmp 0x113a6429 */
  goto L_113a6429;
L_113a6427:;
  /* 113a6427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a6429:;
  /* 113a6429 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 113a642c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a642f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113a6436 pop edi */
  EDI = (pop32());
  /* 113a6437 pop esi */
  ESI = (pop32());
  /* 113a6438 pop ebx */
  EBX = (pop32());
  /* 113a6439 mov esp, ebp */
  ESP = (EBP);
  /* 113a643b pop ebp */
  EBP = (pop32());
  /* 113a643c ret  */
  ESPCHK(0x113a61d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016440 @ 0x113a6440 (208 bytes, 85 insns) */
void f_113a6440(void) {
  FTRACE(0x113a6440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a6440 push ebp */
  push32((uint32_t)(EBP));
  /* 113a6441 mov ebp, esp */
  EBP = (ESP);
  /* 113a6443 push edi */
  push32((uint32_t)(EDI));
  /* 113a6444 push esi */
  push32((uint32_t)(ESI));
  /* 113a6445 push ebx */
  push32((uint32_t)(EBX));
  /* 113a6446 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 113a6449 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 113a644c lea eax, [0x113c29e8] */
  EAX = ((uint32_t)(0x113c29e8));
  /* 113a6452 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6456 jne 0x113a6493 */
  if (!C.zf) goto L_113a6493;
  /* 113a6458 mov al, 0xff */
  AL = (0xffu);
  /* 113a645a mov edi, edi */
  EDI = (EDI);
L_113a645c:;
  /* 113a645c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113a645e je 0x113a648e */
  if (C.zf) goto L_113a648e;
  /* 113a6460 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113a6462 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113a6463 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 113a6465 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113a6466 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a6468 je 0x113a645c */
  if (C.zf) goto L_113a645c;
  /* 113a646a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113a646c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a646e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113a6470 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 113a6473 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113a6475 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113a6477 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 113a6479 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113a647b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a647d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113a647f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 113a6482 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113a6484 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 113a6486 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a6488 je 0x113a645c */
  if (C.zf) goto L_113a645c;
  /* 113a648a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 113a648c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_113a648e:;
  /* 113a648e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 113a6491 jmp 0x113a650b */
  goto L_113a650b;
L_113a6493:;
  /* 113a6493 lock inc dword ptr [0x113c2ac4] */
  x86_unimpl("lock inc @ 0x113a6493");
  /* 113a649a cmp dword ptr [0x113c2ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a64a1 jg 0x113a64a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a64a7;
  /* 113a64a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a64a5 jmp 0x113a64bc */
  goto L_113a64bc;
L_113a64a7:;
  /* 113a64a7 lock dec dword ptr [0x113c2ac4] */
  x86_unimpl("lock dec @ 0x113a64a7");
  /* 113a64ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a64b0 call 0x1139a010 */
  push32(0x113a64b5u); f_1139a010();
  /* 113a64b5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_113a64bc:;
  /* 113a64bc mov eax, 0xff */
  EAX = (0xffu);
  /* 113a64c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 113a64c3 nop  */
  /* nop */
L_113a64c4:;
  /* 113a64c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113a64c6 je 0x113a64ef */
  if (C.zf) goto L_113a64ef;
  /* 113a64c8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113a64ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113a64cb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 113a64cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113a64ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a64d0 je 0x113a64c4 */
  if (C.zf) goto L_113a64c4;
  /* 113a64d2 push eax */
  push32((uint32_t)(EAX));
  /* 113a64d3 push ebx */
  push32((uint32_t)(EBX));
  /* 113a64d4 call 0x113a6af0 */
  push32(0x113a64d9u); f_113a6af0();
  /* 113a64d9 mov ebx, eax */
  EBX = (EAX);
  /* 113a64db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a64de call 0x113a6af0 */
  push32(0x113a64e3u); f_113a6af0();
  /* 113a64e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a64e6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a64e8 je 0x113a64c4 */
  if (C.zf) goto L_113a64c4;
  /* 113a64ea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a64ec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_113a64ef:;
  /* 113a64ef mov ebx, eax */
  EBX = (EAX);
  /* 113a64f1 pop eax */
  EAX = (pop32());
  /* 113a64f2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a64f4 jne 0x113a64ff */
  if (!C.zf) goto L_113a64ff;
  /* 113a64f6 lock dec dword ptr [0x113c2ac4] */
  x86_unimpl("lock dec @ 0x113a64f6");
  /* 113a64fd jmp 0x113a6509 */
  goto L_113a6509;
L_113a64ff:;
  /* 113a64ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a6501 call 0x1139a0b0 */
  push32(0x113a6506u); f_1139a0b0();
  /* 113a6506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a6509:;
  /* 113a6509 mov eax, ebx */
  EAX = (EBX);
L_113a650b:;
  /* 113a650b pop ebx */
  EBX = (pop32());
  /* 113a650c pop esi */
  ESI = (pop32());
  /* 113a650d pop edi */
  EDI = (pop32());
  /* 113a650e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113a650f ret  */
  ESPCHK(0x113a6440u, _esp0);
  ESP += 4; return;
}

/* FUN_10016510 @ 0x113a6510 (257 bytes, 103 insns) */
void f_113a6510(void) {
  FTRACE(0x113a6510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a6510 push ebp */
  push32((uint32_t)(EBP));
  /* 113a6511 mov ebp, esp */
  EBP = (ESP);
  /* 113a6513 push edi */
  push32((uint32_t)(EDI));
  /* 113a6514 push esi */
  push32((uint32_t)(ESI));
  /* 113a6515 push ebx */
  push32((uint32_t)(EBX));
  /* 113a6516 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a6519 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a651b je 0x113a660a */
  if (C.zf) goto L_113a660a;
  /* 113a6521 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6524 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 113a6527 lea eax, [0x113c29e8] */
  EAX = ((uint32_t)(0x113c29e8));
  /* 113a652d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6531 jne 0x113a6581 */
  if (!C.zf) goto L_113a6581;
  /* 113a6533 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 113a6535 mov bl, 0x5a */
  BL = (0x5au);
  /* 113a6537 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 113a6539 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113a653c:;
  /* 113a653c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 113a653e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 113a6540 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 113a6542 je 0x113a6565 */
  if (C.zf) goto L_113a6565;
  /* 113a6544 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113a6546 je 0x113a6565 */
  if (C.zf) goto L_113a6565;
  /* 113a6548 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113a6549 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113a654a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a654c jb 0x113a6554 */
  if (C.cf) goto L_113a6554;
  /* 113a654e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a6550 ja 0x113a6554 */
  if ((!C.cf&&!C.zf)) goto L_113a6554;
  /* 113a6552 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_113a6554:;
  /* 113a6554 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a6556 jb 0x113a655e */
  if (C.cf) goto L_113a655e;
  /* 113a6558 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a655a ja 0x113a655e */
  if ((!C.cf&&!C.zf)) goto L_113a655e;
  /* 113a655c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_113a655e:;
  /* 113a655e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a6560 jne 0x113a656f */
  if (!C.zf) goto L_113a656f;
  /* 113a6562 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113a6563 jne 0x113a653c */
  if (!C.zf) goto L_113a653c;
L_113a6565:;
  /* 113a6565 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a6567 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a6569 je 0x113a660a */
  if (C.zf) goto L_113a660a;
L_113a656f:;
  /* 113a656f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 113a6574 jb 0x113a660a */
  if (C.cf) goto L_113a660a;
  /* 113a657a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a657c jmp 0x113a660a */
  goto L_113a660a;
L_113a6581:;
  /* 113a6581 lock inc dword ptr [0x113c2ac4] */
  x86_unimpl("lock inc @ 0x113a6581");
  /* 113a6588 cmp dword ptr [0x113c2ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a658f jg 0x113a6595 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a6595;
  /* 113a6591 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6593 jmp 0x113a65ae */
  goto L_113a65ae;
L_113a6595:;
  /* 113a6595 lock dec dword ptr [0x113c2ac4] */
  x86_unimpl("lock dec @ 0x113a6595");
  /* 113a659c mov ebx, ecx */
  EBX = (ECX);
  /* 113a659e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a65a0 call 0x1139a010 */
  push32(0x113a65a5u); f_1139a010();
  /* 113a65a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 113a65ac mov ecx, ebx */
  ECX = (EBX);
L_113a65ae:;
  /* 113a65ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a65b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 113a65b2 mov edi, edi */
  EDI = (EDI);
L_113a65b4:;
  /* 113a65b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113a65b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a65b8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 113a65ba je 0x113a65df */
  if (C.zf) goto L_113a65df;
  /* 113a65bc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 113a65be je 0x113a65df */
  if (C.zf) goto L_113a65df;
  /* 113a65c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113a65c1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 113a65c2 push ecx */
  push32((uint32_t)(ECX));
  /* 113a65c3 push eax */
  push32((uint32_t)(EAX));
  /* 113a65c4 push ebx */
  push32((uint32_t)(EBX));
  /* 113a65c5 call 0x113a6af0 */
  push32(0x113a65cau); f_113a6af0();
  /* 113a65ca mov ebx, eax */
  EBX = (EAX);
  /* 113a65cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a65cf call 0x113a6af0 */
  push32(0x113a65d4u); f_113a6af0();
  /* 113a65d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a65d7 pop ecx */
  ECX = (pop32());
  /* 113a65d8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a65da jne 0x113a65e5 */
  if (!C.zf) goto L_113a65e5;
  /* 113a65dc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113a65dd jne 0x113a65b4 */
  if (!C.zf) goto L_113a65b4;
L_113a65df:;
  /* 113a65df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a65e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a65e3 je 0x113a65ee */
  if (C.zf) goto L_113a65ee;
L_113a65e5:;
  /* 113a65e5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 113a65ea jb 0x113a65ee */
  if (C.cf) goto L_113a65ee;
  /* 113a65ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_113a65ee:;
  /* 113a65ee pop eax */
  EAX = (pop32());
  /* 113a65ef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a65f1 jne 0x113a65fc */
  if (!C.zf) goto L_113a65fc;
  /* 113a65f3 lock dec dword ptr [0x113c2ac4] */
  x86_unimpl("lock dec @ 0x113a65f3");
  /* 113a65fa jmp 0x113a660a */
  goto L_113a660a;
L_113a65fc:;
  /* 113a65fc mov ebx, ecx */
  EBX = (ECX);
  /* 113a65fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a6600 call 0x1139a0b0 */
  push32(0x113a6605u); f_1139a0b0();
  /* 113a6605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6608 mov ecx, ebx */
  ECX = (EBX);
L_113a660a:;
  /* 113a660a mov eax, ecx */
  EAX = (ECX);
  /* 113a660c pop ebx */
  EBX = (pop32());
  /* 113a660d pop esi */
  ESI = (pop32());
  /* 113a660e pop edi */
  EDI = (pop32());
  /* 113a660f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113a6610 ret  */
  ESPCHK(0x113a6510u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x113a6630 (193 bytes, 91 insns) */
void f_113a6630(void) {
  FTRACE(0x113a6630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a6630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a6632 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 113a6636 push ebx */
  push32((uint32_t)(EBX));
  /* 113a6637 mov ebx, eax */
  EBX = (EAX);
  /* 113a6639 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 113a663c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 113a6640 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 113a6646 je 0x113a665b */
  if (C.zf) goto L_113a665b;
L_113a6648:;
  /* 113a6648 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 113a664a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113a664b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a664d je 0x113a6620 */
  if (C.zf) { jmp_ind(0x113a6620u); return; }
  /* 113a664f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 113a6651 je 0x113a66a4 */
  if (C.zf) goto L_113a66a4;
  /* 113a6653 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 113a6659 jne 0x113a6648 */
  if (!C.zf) goto L_113a6648;
L_113a665b:;
  /* 113a665b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 113a665d push edi */
  push32((uint32_t)(EDI));
  /* 113a665e mov eax, ebx */
  EAX = (EBX);
  /* 113a6660 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 113a6663 push esi */
  push32((uint32_t)(ESI));
  /* 113a6664 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_113a6666:;
  /* 113a6666 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 113a6668 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 113a666d mov eax, ecx */
  EAX = (ECX);
  /* 113a666f mov esi, edi */
  ESI = (EDI);
  /* 113a6671 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 113a6673 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6675 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6677 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113a667a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a667d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 113a667f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 113a6681 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6684 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 113a668a jne 0x113a66a8 */
  if (!C.zf) goto L_113a66a8;
  /* 113a668c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 113a6691 je 0x113a6666 */
  if (C.zf) goto L_113a6666;
  /* 113a6693 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 113a6698 jne 0x113a66a2 */
  if (!C.zf) goto L_113a66a2;
  /* 113a669a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 113a66a0 jne 0x113a6666 */
  if (!C.zf) goto L_113a6666;
L_113a66a2:;
  /* 113a66a2 pop esi */
  ESI = (pop32());
  /* 113a66a3 pop edi */
  EDI = (pop32());
L_113a66a4:;
  /* 113a66a4 pop ebx */
  EBX = (pop32());
  /* 113a66a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a66a7 ret  */
  ESPCHK(0x113a6630u, _esp0);
  ESP += 4; return;
L_113a66a8:;
  /* 113a66a8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 113a66ab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a66ad je 0x113a66e5 */
  if (C.zf) goto L_113a66e5;
  /* 113a66af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113a66b1 je 0x113a66a2 */
  if (C.zf) goto L_113a66a2;
  /* 113a66b3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a66b5 je 0x113a66de */
  if (C.zf) goto L_113a66de;
  /* 113a66b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 113a66b9 je 0x113a66a2 */
  if (C.zf) goto L_113a66a2;
  /* 113a66bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 113a66be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a66c0 je 0x113a66d7 */
  if (C.zf) goto L_113a66d7;
  /* 113a66c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 113a66c4 je 0x113a66a2 */
  if (C.zf) goto L_113a66a2;
  /* 113a66c6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a66c8 je 0x113a66d0 */
  if (C.zf) goto L_113a66d0;
  /* 113a66ca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 113a66cc je 0x113a66a2 */
  if (C.zf) goto L_113a66a2;
  /* 113a66ce jmp 0x113a6666 */
  goto L_113a6666;
L_113a66d0:;
  /* 113a66d0 pop esi */
  ESI = (pop32());
  /* 113a66d1 pop edi */
  EDI = (pop32());
  /* 113a66d2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 113a66d5 pop ebx */
  EBX = (pop32());
  /* 113a66d6 ret  */
  ESPCHK(0x113a6630u, _esp0);
  ESP += 4; return;
L_113a66d7:;
  /* 113a66d7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 113a66da pop esi */
  ESI = (pop32());
  /* 113a66db pop edi */
  EDI = (pop32());
  /* 113a66dc pop ebx */
  EBX = (pop32());
  /* 113a66dd ret  */
  ESPCHK(0x113a6630u, _esp0);
  ESP += 4; return;
L_113a66de:;
  /* 113a66de lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 113a66e1 pop esi */
  ESI = (pop32());
  /* 113a66e2 pop edi */
  EDI = (pop32());
  /* 113a66e3 pop ebx */
  EBX = (pop32());
  /* 113a66e4 ret  */
  ESPCHK(0x113a6630u, _esp0);
  ESP += 4; return;
L_113a66e5:;
  /* 113a66e5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 113a66e8 pop esi */
  ESI = (pop32());
  /* 113a66e9 pop edi */
  EDI = (pop32());
  /* 113a66ea pop ebx */
  EBX = (pop32());
  /* 113a66eb ret  */
  ESPCHK(0x113a6630u, _esp0);
  ESP += 4; return;
  /* 113a66ec int3  */
  x86_unimpl("int3 @ 0x113a66ec");
  /* 113a66ed int3  */
  x86_unimpl("int3 @ 0x113a66ed");
  /* 113a66ee int3  */
  x86_unimpl("int3 @ 0x113a66ee");
  /* 113a66ef int3  */
  x86_unimpl("int3 @ 0x113a66ef");
  /* 113a66f0 push ebp */
  push32((uint32_t)(EBP));
}

/* FUN_100166f0 @ 0x113a66f0 (382 bytes, 135 insns) */
void f_113a66f0(void) {
  FTRACE(0x113a66f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a66f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a66f1 mov ebp, esp */
  EBP = (ESP);
  /* 113a66f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a66f5 push 0x113bece8 */
  push32((uint32_t)(0x113bece8u));
  /* 113a66fa push 0x113a0578 */
  push32((uint32_t)(0x113a0578u));
  /* 113a66ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113a6705 push eax */
  push32((uint32_t)(EAX));
  /* 113a6706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113a670d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6710 push ebx */
  push32((uint32_t)(EBX));
  /* 113a6711 push esi */
  push32((uint32_t)(ESI));
  /* 113a6712 push edi */
  push32((uint32_t)(EDI));
  /* 113a6713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a6716 cmp dword ptr [0x113c2a98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a671d jne 0x113a6762 */
  if (!C.zf) goto L_113a6762;
  /* 113a671f push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6721 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6723 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a6725 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6727 call dword ptr [0x113c52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52e0))), 0x113a672du);
  /* 113a672d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a672f je 0x113a673d */
  if (C.zf) goto L_113a673d;
  /* 113a6731 mov dword ptr [0x113c2a98], 1 */
  w32((uint32_t)(0x113c2a98), (0x1u));
  /* 113a673b jmp 0x113a6762 */
  goto L_113a6762;
L_113a673d:;
  /* 113a673d push 0 */
  push32((uint32_t)(0x0u));
  /* 113a673f push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6741 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a6743 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6745 call dword ptr [0x113c52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f4))), 0x113a674bu);
  /* 113a674b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a674d je 0x113a675b */
  if (C.zf) goto L_113a675b;
  /* 113a674f mov dword ptr [0x113c2a98], 2 */
  w32((uint32_t)(0x113c2a98), (0x2u));
  /* 113a6759 jmp 0x113a6762 */
  goto L_113a6762;
L_113a675b:;
  /* 113a675b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a675d jmp 0x113a6871 */
  goto L_113a6871;
L_113a6762:;
  /* 113a6762 cmp dword ptr [0x113c2a98], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a98))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6769 jne 0x113a6786 */
  if (!C.zf) goto L_113a6786;
  /* 113a676b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a676e push eax */
  push32((uint32_t)(EAX));
  /* 113a676f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a6772 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6773 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a6776 push edx */
  push32((uint32_t)(EDX));
  /* 113a6777 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a677a push eax */
  push32((uint32_t)(EAX));
  /* 113a677b call dword ptr [0x113c52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52e0))), 0x113a6781u);
  /* 113a6781 jmp 0x113a6871 */
  goto L_113a6871;
L_113a6786:;
  /* 113a6786 cmp dword ptr [0x113c2a98], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a98))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a678d jne 0x113a686f */
  if (!C.zf) goto L_113a686f;
  /* 113a6793 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6797 jne 0x113a67a2 */
  if (!C.zf) goto L_113a67a2;
  /* 113a6799 mov ecx, dword ptr [0x113c2a00] */
  ECX = (r32((uint32_t)(0x113c2a00)));
  /* 113a679f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_113a67a2:;
  /* 113a67a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a67a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a67a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a67a9 push edx */
  push32((uint32_t)(EDX));
  /* 113a67aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a67ad push eax */
  push32((uint32_t)(EAX));
  /* 113a67ae call dword ptr [0x113c52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f4))), 0x113a67b4u);
  /* 113a67b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113a67b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a67bb jne 0x113a67c4 */
  if (!C.zf) goto L_113a67c4;
  /* 113a67bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a67bf jmp 0x113a6871 */
  goto L_113a6871;
L_113a67c4:;
  /* 113a67c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a67cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a67ce add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a67d1 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113a67d3 call 0x113997b0 */
  push32(0x113a67d8u); f_113997b0();
  /* 113a67d8 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 113a67db mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a67de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a67e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113a67e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113a67eb jmp 0x113a6804 */
  goto L_113a6804;
  /* 113a67ed mov eax, 1 */
  EAX = (0x1u);
  /* 113a67f2 ret  */
  ESPCHK(0x113a66f0u, _esp0);
  ESP += 4; return;
  /* 113a67f3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113a67f6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113a67fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a6804:;
  /* 113a6804 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6808 jne 0x113a680e */
  if (!C.zf) goto L_113a680e;
  /* 113a680a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a680c jmp 0x113a6871 */
  goto L_113a6871;
L_113a680e:;
  /* 113a680e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a6811 push edx */
  push32((uint32_t)(EDX));
  /* 113a6812 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a6815 push eax */
  push32((uint32_t)(EAX));
  /* 113a6816 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a6819 push ecx */
  push32((uint32_t)(ECX));
  /* 113a681a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a681d push edx */
  push32((uint32_t)(EDX));
  /* 113a681e call dword ptr [0x113c52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f4))), 0x113a6824u);
  /* 113a6824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a6826 jne 0x113a682c */
  if (!C.zf) goto L_113a682c;
  /* 113a6828 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a682a jmp 0x113a6871 */
  goto L_113a6871;
L_113a682c:;
  /* 113a682c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6830 jne 0x113a684d */
  if (!C.zf) goto L_113a684d;
  /* 113a6832 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6834 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6836 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a6838 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a683b push eax */
  push32((uint32_t)(EAX));
  /* 113a683c push 1 */
  push32((uint32_t)(0x1u));
  /* 113a683e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a6841 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6842 call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x113a6848u);
  /* 113a6848 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113a684b jmp 0x113a686a */
  goto L_113a686a;
L_113a684d:;
  /* 113a684d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a6850 push edx */
  push32((uint32_t)(EDX));
  /* 113a6851 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a6854 push eax */
  push32((uint32_t)(EAX));
  /* 113a6855 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a6857 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a685a push ecx */
  push32((uint32_t)(ECX));
  /* 113a685b push 1 */
  push32((uint32_t)(0x1u));
  /* 113a685d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a6860 push edx */
  push32((uint32_t)(EDX));
  /* 113a6861 call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x113a6867u);
  /* 113a6867 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113a686a:;
  /* 113a686a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a686d jmp 0x113a6871 */
  goto L_113a6871;
L_113a686f:;
  /* 113a686f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a6871:;
  /* 113a6871 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 113a6874 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a6877 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113a687e pop edi */
  EDI = (pop32());
  /* 113a687f pop esi */
  ESI = (pop32());
  /* 113a6880 pop ebx */
  EBX = (pop32());
  /* 113a6881 mov esp, ebp */
  ESP = (EBP);
  /* 113a6883 pop ebp */
  EBP = (pop32());
  /* 113a6884 ret  */
  ESPCHK(0x113a66f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016890 @ 0x113a6890 (398 bytes, 140 insns) */
void f_113a6890(void) {
  FTRACE(0x113a6890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a6890 push ebp */
  push32((uint32_t)(EBP));
  /* 113a6891 mov ebp, esp */
  EBP = (ESP);
  /* 113a6893 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a6895 push 0x113becf8 */
  push32((uint32_t)(0x113becf8u));
  /* 113a689a push 0x113a0578 */
  push32((uint32_t)(0x113a0578u));
  /* 113a689f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113a68a5 push eax */
  push32((uint32_t)(EAX));
  /* 113a68a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113a68ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a68b0 push ebx */
  push32((uint32_t)(EBX));
  /* 113a68b1 push esi */
  push32((uint32_t)(ESI));
  /* 113a68b2 push edi */
  push32((uint32_t)(EDI));
  /* 113a68b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a68b6 cmp dword ptr [0x113c2a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a68bd jne 0x113a6902 */
  if (!C.zf) goto L_113a6902;
  /* 113a68bf push 0 */
  push32((uint32_t)(0x0u));
  /* 113a68c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a68c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a68c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a68c7 call dword ptr [0x113c52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52e0))), 0x113a68cdu);
  /* 113a68cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a68cf je 0x113a68dd */
  if (C.zf) goto L_113a68dd;
  /* 113a68d1 mov dword ptr [0x113c2a9c], 1 */
  w32((uint32_t)(0x113c2a9c), (0x1u));
  /* 113a68db jmp 0x113a6902 */
  goto L_113a6902;
L_113a68dd:;
  /* 113a68dd push 0 */
  push32((uint32_t)(0x0u));
  /* 113a68df push 0 */
  push32((uint32_t)(0x0u));
  /* 113a68e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a68e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a68e5 call dword ptr [0x113c52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f4))), 0x113a68ebu);
  /* 113a68eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a68ed je 0x113a68fb */
  if (C.zf) goto L_113a68fb;
  /* 113a68ef mov dword ptr [0x113c2a9c], 2 */
  w32((uint32_t)(0x113c2a9c), (0x2u));
  /* 113a68f9 jmp 0x113a6902 */
  goto L_113a6902;
L_113a68fb:;
  /* 113a68fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a68fd jmp 0x113a6a21 */
  goto L_113a6a21;
L_113a6902:;
  /* 113a6902 cmp dword ptr [0x113c2a9c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a9c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6909 jne 0x113a6926 */
  if (!C.zf) goto L_113a6926;
  /* 113a690b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a690e push eax */
  push32((uint32_t)(EAX));
  /* 113a690f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a6912 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6913 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a6916 push edx */
  push32((uint32_t)(EDX));
  /* 113a6917 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a691a push eax */
  push32((uint32_t)(EAX));
  /* 113a691b call dword ptr [0x113c52f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52f4))), 0x113a6921u);
  /* 113a6921 jmp 0x113a6a21 */
  goto L_113a6a21;
L_113a6926:;
  /* 113a6926 cmp dword ptr [0x113c2a9c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a9c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a692d jne 0x113a6a1f */
  if (!C.zf) goto L_113a6a1f;
  /* 113a6933 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6937 jne 0x113a6942 */
  if (!C.zf) goto L_113a6942;
  /* 113a6939 mov ecx, dword ptr [0x113c2a00] */
  ECX = (r32((uint32_t)(0x113c2a00)));
  /* 113a693f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_113a6942:;
  /* 113a6942 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6944 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6946 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a6949 push edx */
  push32((uint32_t)(EDX));
  /* 113a694a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a694d push eax */
  push32((uint32_t)(EAX));
  /* 113a694e call dword ptr [0x113c52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52e0))), 0x113a6954u);
  /* 113a6954 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113a6957 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a695b jne 0x113a6964 */
  if (!C.zf) goto L_113a6964;
  /* 113a695d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a695f jmp 0x113a6a21 */
  goto L_113a6a21;
L_113a6964:;
  /* 113a6964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a696b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a696e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113a6970 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6973 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113a6975 call 0x113997b0 */
  push32(0x113a697au); f_113997b0();
  /* 113a697a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 113a697d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a6980 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a6983 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113a6986 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113a698d jmp 0x113a69a6 */
  goto L_113a69a6;
  /* 113a698f mov eax, 1 */
  EAX = (0x1u);
  /* 113a6994 ret  */
  ESPCHK(0x113a6890u, _esp0);
  ESP += 4; return;
  /* 113a6995 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113a6998 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113a699f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a69a6:;
  /* 113a69a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a69aa jne 0x113a69b0 */
  if (!C.zf) goto L_113a69b0;
  /* 113a69ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a69ae jmp 0x113a6a21 */
  goto L_113a6a21;
L_113a69b0:;
  /* 113a69b0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a69b3 push edx */
  push32((uint32_t)(EDX));
  /* 113a69b4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a69b7 push eax */
  push32((uint32_t)(EAX));
  /* 113a69b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a69bb push ecx */
  push32((uint32_t)(ECX));
  /* 113a69bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a69bf push edx */
  push32((uint32_t)(EDX));
  /* 113a69c0 call dword ptr [0x113c52e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52e0))), 0x113a69c6u);
  /* 113a69c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a69c8 jne 0x113a69ce */
  if (!C.zf) goto L_113a69ce;
  /* 113a69ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a69cc jmp 0x113a6a21 */
  goto L_113a6a21;
L_113a69ce:;
  /* 113a69ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a69d2 jne 0x113a69f6 */
  if (!C.zf) goto L_113a69f6;
  /* 113a69d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a69d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a69d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a69da push 0 */
  push32((uint32_t)(0x0u));
  /* 113a69dc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a69de mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a69e1 push eax */
  push32((uint32_t)(EAX));
  /* 113a69e2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113a69e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a69ea push ecx */
  push32((uint32_t)(ECX));
  /* 113a69eb call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x113a69f1u);
  /* 113a69f1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113a69f4 jmp 0x113a6a1a */
  goto L_113a6a1a;
L_113a69f6:;
  /* 113a69f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a69f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a69fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a69fd push edx */
  push32((uint32_t)(EDX));
  /* 113a69fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a6a01 push eax */
  push32((uint32_t)(EAX));
  /* 113a6a02 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a6a04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a6a07 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6a08 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113a6a0d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a6a10 push edx */
  push32((uint32_t)(EDX));
  /* 113a6a11 call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x113a6a17u);
  /* 113a6a17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_113a6a1a:;
  /* 113a6a1a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a6a1d jmp 0x113a6a21 */
  goto L_113a6a21;
L_113a6a1f:;
  /* 113a6a1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a6a21:;
  /* 113a6a21 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 113a6a24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a6a27 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113a6a2e pop edi */
  EDI = (pop32());
  /* 113a6a2f pop esi */
  ESI = (pop32());
  /* 113a6a30 pop ebx */
  EBX = (pop32());
  /* 113a6a31 mov esp, ebp */
  ESP = (EBP);
  /* 113a6a33 pop ebp */
  EBP = (pop32());
  /* 113a6a34 ret  */
  ESPCHK(0x113a6890u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a40 @ 0x113a6a40 (11 bytes, 6 insns) */
void f_113a6a40(void) {
  FTRACE(0x113a6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a6a40 push ebp */
  push32((uint32_t)(EBP));
  /* 113a6a41 mov ebp, esp */
  EBP = (ESP);
  /* 113a6a43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6a46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6a49 pop ebp */
  EBP = (pop32());
  /* 113a6a4a ret  */
  ESPCHK(0x113a6a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a50 @ 0x113a6a50 (147 bytes, 43 insns) */
void f_113a6a50(void) {
  FTRACE(0x113a6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 113a6a51 mov ebp, esp */
  EBP = (ESP);
  /* 113a6a53 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6a54 cmp dword ptr [0x113c29f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6a5b jne 0x113a6a77 */
  if (!C.zf) goto L_113a6a77;
  /* 113a6a5d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6a61 jl 0x113a6a72 */
  if ((C.sf!=C.of)) goto L_113a6a72;
  /* 113a6a63 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6a67 jg 0x113a6a72 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a6a72;
  /* 113a6a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6a6c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6a6f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113a6a72:;
  /* 113a6a72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6a75 jmp 0x113a6adf */
  goto L_113a6adf;
L_113a6a77:;
  /* 113a6a77 push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a6a7c call dword ptr [0x113c52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52dc))), 0x113a6a82u);
  /* 113a6a82 cmp dword ptr [0x113c2ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6a89 je 0x113a6aa9 */
  if (C.zf) goto L_113a6aa9;
  /* 113a6a8b push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a6a90 call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x113a6a96u);
  /* 113a6a96 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a6a98 call 0x1139a010 */
  push32(0x113a6a9du); f_1139a010();
  /* 113a6a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6aa0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113a6aa7 jmp 0x113a6ab0 */
  goto L_113a6ab0;
L_113a6aa9:;
  /* 113a6aa9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113a6ab0:;
  /* 113a6ab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6ab4 call 0x113a6af0 */
  push32(0x113a6ab9u); f_113a6af0();
  /* 113a6ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6abc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a6abf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6ac3 je 0x113a6ad1 */
  if (C.zf) goto L_113a6ad1;
  /* 113a6ac5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a6ac7 call 0x1139a0b0 */
  push32(0x113a6accu); f_1139a0b0();
  /* 113a6acc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6acf jmp 0x113a6adc */
  goto L_113a6adc;
L_113a6ad1:;
  /* 113a6ad1 push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a6ad6 call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x113a6adcu);
L_113a6adc:;
  /* 113a6adc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_113a6adf:;
  /* 113a6adf mov esp, ebp */
  ESP = (EBP);
  /* 113a6ae1 pop ebp */
  EBP = (pop32());
  /* 113a6ae2 ret  */
  ESPCHK(0x113a6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016af0 @ 0x113a6af0 (299 bytes, 91 insns) */
void f_113a6af0(void) {
  FTRACE(0x113a6af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a6af0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a6af1 mov ebp, esp */
  EBP = (ESP);
  /* 113a6af3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a6af6 cmp dword ptr [0x113c29f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6afd jne 0x113a6b1c */
  if (!C.zf) goto L_113a6b1c;
  /* 113a6aff cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6b03 jl 0x113a6b14 */
  if ((C.sf!=C.of)) goto L_113a6b14;
  /* 113a6b05 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6b09 jg 0x113a6b14 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a6b14;
  /* 113a6b0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6b0e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6b11 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_113a6b14:;
  /* 113a6b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6b17 jmp 0x113a6c17 */
  goto L_113a6c17;
L_113a6b1c:;
  /* 113a6b1c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6b23 jge 0x113a6b63 */
  if ((C.sf==C.of)) goto L_113a6b63;
  /* 113a6b25 cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6b2c jle 0x113a6b41 */
  if ((C.zf||C.sf!=C.of)) goto L_113a6b41;
  /* 113a6b2e push 1 */
  push32((uint32_t)(0x1u));
  /* 113a6b30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6b33 push ecx */
  push32((uint32_t)(ECX));
  /* 113a6b34 call 0x1139cf60 */
  push32(0x113a6b39u); f_1139cf60();
  /* 113a6b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6b3c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113a6b3f jmp 0x113a6b55 */
  goto L_113a6b55;
L_113a6b41:;
  /* 113a6b41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6b44 mov eax, dword ptr [0x113c0db8] */
  EAX = (r32((uint32_t)(0x113c0db8)));
  /* 113a6b49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a6b4b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 113a6b4f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113a6b52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_113a6b55:;
  /* 113a6b55 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6b59 jne 0x113a6b63 */
  if (!C.zf) goto L_113a6b63;
  /* 113a6b5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6b5e jmp 0x113a6c17 */
  goto L_113a6c17;
L_113a6b63:;
  /* 113a6b63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6b66 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113a6b69 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a6b6f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a6b75 mov eax, dword ptr [0x113c0db8] */
  EAX = (r32((uint32_t)(0x113c0db8)));
  /* 113a6b7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a6b7c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 113a6b80 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 113a6b86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a6b88 je 0x113a6bac */
  if (C.zf) goto L_113a6bac;
  /* 113a6b8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6b8d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 113a6b90 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a6b96 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 113a6b99 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 113a6b9c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 113a6b9f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 113a6ba3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 113a6baa jmp 0x113a6bbd */
  goto L_113a6bbd;
L_113a6bac:;
  /* 113a6bac mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 113a6baf mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 113a6bb2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 113a6bb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_113a6bbd:;
  /* 113a6bbd push 1 */
  push32((uint32_t)(0x1u));
  /* 113a6bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 113a6bc1 push 3 */
  push32((uint32_t)(0x3u));
  /* 113a6bc3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 113a6bc6 push edx */
  push32((uint32_t)(EDX));
  /* 113a6bc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a6bca push eax */
  push32((uint32_t)(EAX));
  /* 113a6bcb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 113a6bce push ecx */
  push32((uint32_t)(ECX));
  /* 113a6bcf push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113a6bd4 mov edx, dword ptr [0x113c29f0] */
  EDX = (r32((uint32_t)(0x113c29f0)));
  /* 113a6bda push edx */
  push32((uint32_t)(EDX));
  /* 113a6bdb call 0x1139f720 */
  push32(0x113a6be0u); f_1139f720();
  /* 113a6be0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a6be3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a6be6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6bea jne 0x113a6bf1 */
  if (!C.zf) goto L_113a6bf1;
  /* 113a6bec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a6bef jmp 0x113a6c17 */
  goto L_113a6c17;
L_113a6bf1:;
  /* 113a6bf1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a6bf5 jne 0x113a6c01 */
  if (!C.zf) goto L_113a6c01;
  /* 113a6bf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a6bfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a6bff jmp 0x113a6c17 */
  goto L_113a6c17;
L_113a6c01:;
  /* 113a6c01 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a6c04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a6c09 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 113a6c0c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 113a6c12 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 113a6c15 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_113a6c17:;
  /* 113a6c17 mov esp, ebp */
  ESP = (EBP);
  /* 113a6c19 pop ebp */
  EBP = (pop32());
  /* 113a6c1a ret  */
  ESPCHK(0x113a6af0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x113a6d7e (6 bytes, 1 insns) */
void f_113a6d7e(void) {
  FTRACE(0x113a6d7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a6d7e jmp dword ptr [0x113c5318] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x113c5318)))); return;
}

