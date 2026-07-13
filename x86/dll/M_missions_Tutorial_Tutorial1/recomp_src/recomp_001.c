#include "recomp.h"

/* FUN_10008b30 @ 0x12398b30 (10 bytes, 5 insns) */
void f_12398b30(void) {
  FTRACE(0x12398b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12398b31 mov ebp, esp */
  EBP = (ESP);
  /* 12398b33 mov eax, dword ptr [0x123bec94] */
  EAX = (r32((uint32_t)(0x123bec94)));
  /* 12398b38 pop ebp */
  EBP = (pop32());
  /* 12398b39 ret  */
  ESPCHK(0x12398b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b40 @ 0x12398b40 (31 bytes, 11 insns) */
void f_12398b40(void) {
  FTRACE(0x12398b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12398b41 mov ebp, esp */
  EBP = (ESP);
  /* 12398b43 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398b4a jbe 0x12398b50 */
  if ((C.cf||C.zf)) goto L_12398b50;
  /* 12398b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12398b4e jmp 0x12398b5d */
  goto L_12398b5d;
L_12398b50:;
  /* 12398b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398b53 mov dword ptr [0x123bec94], eax */
  w32((uint32_t)(0x123bec94), (EAX));
  /* 12398b58 mov eax, 1 */
  EAX = (0x1u);
L_12398b5d:;
  /* 12398b5d pop ebp */
  EBP = (pop32());
  /* 12398b5e ret  */
  ESPCHK(0x12398b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x12398b60 (89 bytes, 20 insns) */
void f_12398b60(void) {
  FTRACE(0x12398b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12398b61 mov ebp, esp */
  EBP = (ESP);
  /* 12398b63 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12398b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12398b6a mov eax, dword ptr [0x123c1e8c] */
  EAX = (r32((uint32_t)(0x123c1e8c)));
  /* 12398b6f push eax */
  push32((uint32_t)(EAX));
  /* 12398b70 call dword ptr [0x123c3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3378))), 0x12398b76u);
  /* 12398b76 mov dword ptr [0x123c1e88], eax */
  w32((uint32_t)(0x123c1e88), (EAX));
  /* 12398b7b cmp dword ptr [0x123c1e88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c1e88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398b82 jne 0x12398b88 */
  if (!C.zf) goto L_12398b88;
  /* 12398b84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12398b86 jmp 0x12398bb7 */
  goto L_12398bb7;
L_12398b88:;
  /* 12398b88 mov ecx, dword ptr [0x123c1e88] */
  ECX = (r32((uint32_t)(0x123c1e88)));
  /* 12398b8e mov dword ptr [0x123c1e7c], ecx */
  w32((uint32_t)(0x123c1e7c), (ECX));
  /* 12398b94 mov dword ptr [0x123c1e80], 0 */
  w32((uint32_t)(0x123c1e80), (0x0u));
  /* 12398b9e mov dword ptr [0x123c1e84], 0 */
  w32((uint32_t)(0x123c1e84), (0x0u));
  /* 12398ba8 mov dword ptr [0x123c1e68], 0x10 */
  w32((uint32_t)(0x123c1e68), (0x10u));
  /* 12398bb2 mov eax, 1 */
  EAX = (0x1u);
L_12398bb7:;
  /* 12398bb7 pop ebp */
  EBP = (pop32());
  /* 12398bb8 ret  */
  ESPCHK(0x12398b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x12398bc0 (85 bytes, 29 insns) */
void f_12398bc0(void) {
  FTRACE(0x12398bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12398bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12398bc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398bc6 mov eax, dword ptr [0x123c1e84] */
  EAX = (r32((uint32_t)(0x123c1e84)));
  /* 12398bcb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12398bce mov ecx, dword ptr [0x123c1e88] */
  ECX = (r32((uint32_t)(0x123c1e88)));
  /* 12398bd4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398bd6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12398bd9 mov edx, dword ptr [0x123c1e88] */
  EDX = (r32((uint32_t)(0x123c1e88)));
  /* 12398bdf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12398be2:;
  /* 12398be2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398be5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398be8 jae 0x12398c0f */
  if (!C.cf) goto L_12398c0f;
  /* 12398bea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398bed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398bf0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398bf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12398bf6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398bfd jae 0x12398c04 */
  if (!C.cf) goto L_12398c04;
  /* 12398bff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398c02 jmp 0x12398c11 */
  goto L_12398c11;
L_12398c04:;
  /* 12398c04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398c07 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398c0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12398c0d jmp 0x12398be2 */
  goto L_12398be2;
L_12398c0f:;
  /* 12398c0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12398c11:;
  /* 12398c11 mov esp, ebp */
  ESP = (EBP);
  /* 12398c13 pop ebp */
  EBP = (pop32());
  /* 12398c14 ret  */
  ESPCHK(0x12398bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x12398c20 (95 bytes, 33 insns) */
void f_12398c20(void) {
  FTRACE(0x12398c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12398c21 mov ebp, esp */
  EBP = (ESP);
  /* 12398c23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398c29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398c2c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398c2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12398c32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398c35 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12398c38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12398c3b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12398c40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398c43 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12398c45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398c48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12398c4b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12398c4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12398c4f jne 0x12398c71 */
  if (!C.zf) goto L_12398c71;
  /* 12398c51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398c54 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12398c57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12398c59 jne 0x12398c71 */
  if (!C.zf) goto L_12398c71;
  /* 12398c5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398c5e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12398c64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12398c66 je 0x12398c71 */
  if (C.zf) goto L_12398c71;
  /* 12398c68 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12398c6f jmp 0x12398c78 */
  goto L_12398c78;
L_12398c71:;
  /* 12398c71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12398c78:;
  /* 12398c78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12398c7b mov esp, ebp */
  ESP = (EBP);
  /* 12398c7d pop ebp */
  EBP = (pop32());
  /* 12398c7e ret  */
  ESPCHK(0x12398c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c80 @ 0x12398c80 (1485 bytes, 453 insns) */
void f_12398c80(void) {
  FTRACE(0x12398c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12398c81 mov ebp, esp */
  EBP = (ESP);
  /* 12398c83 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398c89 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12398c8c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12398c8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398c92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398c95 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398c98 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12398c9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12398c9e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12398ca1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12398ca4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398ca7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12398cad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398cb0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12398cb7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12398cba mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398cbd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398cc0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12398cc3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398cc6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12398cc8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398ccb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12398cce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398cd1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398cd4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12398cd7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12398cda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12398cdc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12398cdf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398ce2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12398ce5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12398ce8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12398ceb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12398cee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12398cf0 jne 0x12398e18 */
  if (!C.zf) goto L_12398e18;
  /* 12398cf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12398cf9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12398cfc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398cff mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12398d02 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398d06 jbe 0x12398d0f */
  if ((C.cf||C.zf)) goto L_12398d0f;
  /* 12398d08 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12398d0f:;
  /* 12398d0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12398d12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12398d15 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12398d18 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398d1b jne 0x12398df1 */
  if (!C.zf) goto L_12398df1;
  /* 12398d21 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398d25 jae 0x12398d86 */
  if (!C.cf) goto L_12398d86;
  /* 12398d27 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12398d2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12398d2f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12398d31 not eax */
  EAX = (~(EAX));
  /* 12398d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398d36 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398d39 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12398d3d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12398d3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398d42 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398d45 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12398d49 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398d4c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398d4f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12398d52 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12398d55 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398d58 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398d5b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12398d5e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398d61 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398d64 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12398d68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12398d6a jne 0x12398d84 */
  if (!C.zf) goto L_12398d84;
  /* 12398d6c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12398d71 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12398d74 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12398d76 not eax */
  EAX = (~(EAX));
  /* 12398d78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398d7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12398d7d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12398d7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398d82 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12398d84:;
  /* 12398d84 jmp 0x12398df1 */
  goto L_12398df1;
L_12398d86:;
  /* 12398d86 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12398d89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398d8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12398d91 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12398d93 not edx */
  EDX = (~(EDX));
  /* 12398d95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398d98 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398d9b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12398da2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12398da4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398da7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398daa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12398db1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398db4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398db7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12398dba sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12398dbd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398dc0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398dc3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12398dc6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398dc9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398dcc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12398dd0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12398dd2 jne 0x12398df1 */
  if (!C.zf) goto L_12398df1;
  /* 12398dd4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12398dd7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398dda mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12398ddf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12398de1 not edx */
  EDX = (~(EDX));
  /* 12398de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398de6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12398de9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12398deb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398dee mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12398df1:;
  /* 12398df1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12398df4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12398df7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12398dfa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12398dfd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12398e00 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12398e03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12398e06 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12398e09 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12398e0c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12398e0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12398e12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398e15 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12398e18:;
  /* 12398e18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12398e1b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12398e1e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398e21 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12398e24 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398e28 jbe 0x12398e31 */
  if ((C.cf||C.zf)) goto L_12398e31;
  /* 12398e2a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12398e31:;
  /* 12398e31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12398e34 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12398e37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12398e39 jne 0x12398f95 */
  if (!C.zf) goto L_12398f95;
  /* 12398e3f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398e42 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398e45 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12398e48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12398e4b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12398e4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398e51 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12398e54 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398e58 jbe 0x12398e61 */
  if ((C.cf||C.zf)) goto L_12398e61;
  /* 12398e5a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12398e61:;
  /* 12398e61 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12398e64 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398e67 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12398e6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12398e6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12398e70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398e73 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12398e76 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398e7a jbe 0x12398e83 */
  if ((C.cf||C.zf)) goto L_12398e83;
  /* 12398e7c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12398e83:;
  /* 12398e83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12398e86 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398e89 je 0x12398f8f */
  if (C.zf) goto L_12398f8f;
  /* 12398e8f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12398e92 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12398e95 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12398e98 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398e9b jne 0x12398f71 */
  if (!C.zf) goto L_12398f71;
  /* 12398ea1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398ea5 jae 0x12398f06 */
  if (!C.cf) goto L_12398f06;
  /* 12398ea7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12398eac mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12398eaf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12398eb1 not edx */
  EDX = (~(EDX));
  /* 12398eb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398eb6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398eb9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12398ebd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12398ebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398ec2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398ec5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12398ec9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398ecc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398ecf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12398ed2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12398ed5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398ed8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398edb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12398ede mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398ee1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398ee4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12398ee8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12398eea jne 0x12398f04 */
  if (!C.zf) goto L_12398f04;
  /* 12398eec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12398ef1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12398ef4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12398ef6 not edx */
  EDX = (~(EDX));
  /* 12398ef8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398efb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12398efd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12398eff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398f02 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12398f04:;
  /* 12398f04 jmp 0x12398f71 */
  goto L_12398f71;
L_12398f06:;
  /* 12398f06 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12398f09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398f0c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12398f11 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12398f13 not eax */
  EAX = (~(EAX));
  /* 12398f15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398f18 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398f1b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12398f22 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12398f24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398f27 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398f2a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12398f31 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398f34 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398f37 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12398f3a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12398f3d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398f40 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398f43 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12398f46 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398f49 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398f4c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12398f50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12398f52 jne 0x12398f71 */
  if (!C.zf) goto L_12398f71;
  /* 12398f54 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12398f57 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398f5a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12398f5f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12398f61 not eax */
  EAX = (~(EAX));
  /* 12398f63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398f66 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12398f69 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12398f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398f6e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12398f71:;
  /* 12398f71 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12398f74 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12398f77 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12398f7a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12398f7d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12398f80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12398f83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12398f86 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12398f89 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12398f8c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12398f8f:;
  /* 12398f8f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12398f92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12398f95:;
  /* 12398f95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12398f98 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12398f9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12398f9d jne 0x12398fab */
  if (!C.zf) goto L_12398fab;
  /* 12398f9f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12398fa2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398fa5 je 0x123990bb */
  if (C.zf) goto L_123990bb;
L_12398fab:;
  /* 12398fab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12398fae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398fb1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12398fb4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12398fb7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398fba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12398fbd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12398fc0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12398fc3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398fc6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12398fc9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12398fcc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12398fcf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398fd2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12398fd5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398fd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12398fdb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398fde mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12398fe1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398fe4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12398fe7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12398fea cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398fed jne 0x123990bb */
  if (!C.zf) goto L_123990bb;
  /* 12398ff3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398ff7 jae 0x12399054 */
  if (!C.cf) goto L_12399054;
  /* 12398ff9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12398ffc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398fff movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12399003 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12399006 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399009 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1239900c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1239900f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12399012 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399015 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12399018 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239901a jne 0x12399032 */
  if (!C.zf) goto L_12399032;
  /* 1239901c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399021 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399024 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399029 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239902b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1239902d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399030 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12399032:;
  /* 12399032 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399037 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239903a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1239903c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239903f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12399042 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12399046 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12399048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239904b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1239904e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12399052 jmp 0x123990bb */
  goto L_123990bb;
L_12399054:;
  /* 12399054 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12399057 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239905a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1239905e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12399061 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399064 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12399067 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1239906a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1239906d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399070 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12399073 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399075 jne 0x12399092 */
  if (!C.zf) goto L_12399092;
  /* 12399077 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239907a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239907d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399082 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399087 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1239908a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1239908c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239908f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12399092:;
  /* 12399092 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399095 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399098 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1239909d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1239909f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123990a2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123990a5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 123990ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123990ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123990b1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 123990b4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_123990bb:;
  /* 123990bb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123990be mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123990c1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123990c3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123990c6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123990c9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123990cc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 123990cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123990d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123990d4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123990d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123990da mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123990dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123990df cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123990e2 jne 0x12399249 */
  if (!C.zf) goto L_12399249;
  /* 123990e8 cmp dword ptr [0x123c1e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c1e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123990ef je 0x12399238 */
  if (C.zf) goto L_12399238;
  /* 123990f5 mov eax, dword ptr [0x123c1e78] */
  EAX = (r32((uint32_t)(0x123c1e78)));
  /* 123990fa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 123990fd mov ecx, dword ptr [0x123c1e80] */
  ECX = (r32((uint32_t)(0x123c1e80)));
  /* 12399103 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12399106 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399108 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1239910b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12399110 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12399115 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399118 push eax */
  push32((uint32_t)(EAX));
  /* 12399119 call dword ptr [0x123c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c335c))), 0x1239911fu);
  /* 1239911f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399124 mov ecx, dword ptr [0x123c1e78] */
  ECX = (r32((uint32_t)(0x123c1e78)));
  /* 1239912a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1239912c mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 12399131 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12399134 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12399136 mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 1239913c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1239913f mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 12399144 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12399147 mov edx, dword ptr [0x123c1e78] */
  EDX = (r32((uint32_t)(0x123c1e78)));
  /* 1239914d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12399158 mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 1239915d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12399160 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12399163 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12399166 mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 1239916b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239916e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12399171 mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 12399177 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1239917a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1239917e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12399180 jne 0x12399196 */
  if (!C.zf) goto L_12399196;
  /* 12399182 mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 12399188 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1239918b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1239918d mov ecx, dword ptr [0x123c1e80] */
  ECX = (r32((uint32_t)(0x123c1e80)));
  /* 12399193 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12399196:;
  /* 12399196 mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 1239919c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123991a0 jne 0x12399238 */
  if (!C.zf) goto L_12399238;
  /* 123991a6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 123991ab push 0 */
  push32((uint32_t)(0x0u));
  /* 123991ad mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 123991b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123991b5 push ecx */
  push32((uint32_t)(ECX));
  /* 123991b6 call dword ptr [0x123c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c335c))), 0x123991bcu);
  /* 123991bc mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 123991c2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123991c5 push eax */
  push32((uint32_t)(EAX));
  /* 123991c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123991c8 mov ecx, dword ptr [0x123c1e8c] */
  ECX = (r32((uint32_t)(0x123c1e8c)));
  /* 123991ce push ecx */
  push32((uint32_t)(ECX));
  /* 123991cf call dword ptr [0x123c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3324))), 0x123991d5u);
  /* 123991d5 mov edx, dword ptr [0x123c1e84] */
  EDX = (r32((uint32_t)(0x123c1e84)));
  /* 123991db imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123991de mov eax, dword ptr [0x123c1e88] */
  EAX = (r32((uint32_t)(0x123c1e88)));
  /* 123991e3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123991e5 mov ecx, dword ptr [0x123c1e80] */
  ECX = (r32((uint32_t)(0x123c1e80)));
  /* 123991eb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123991ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123991f0 push eax */
  push32((uint32_t)(EAX));
  /* 123991f1 mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 123991f7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123991fa push edx */
  push32((uint32_t)(EDX));
  /* 123991fb mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 12399200 push eax */
  push32((uint32_t)(EAX));
  /* 12399201 call 0x1239c7b0 */
  push32(0x12399206u); f_1239c7b0();
  /* 12399206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12399209 mov ecx, dword ptr [0x123c1e84] */
  ECX = (r32((uint32_t)(0x123c1e84)));
  /* 1239920f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399212 mov dword ptr [0x123c1e84], ecx */
  w32((uint32_t)(0x123c1e84), (ECX));
  /* 12399218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239921b cmp edx, dword ptr [0x123c1e80] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123c1e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399221 jbe 0x1239922c */
  if ((C.cf||C.zf)) goto L_1239922c;
  /* 12399223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399226 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399229 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1239922c:;
  /* 1239922c mov ecx, dword ptr [0x123c1e88] */
  ECX = (r32((uint32_t)(0x123c1e88)));
  /* 12399232 mov dword ptr [0x123c1e7c], ecx */
  w32((uint32_t)(0x123c1e7c), (ECX));
L_12399238:;
  /* 12399238 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239923b mov dword ptr [0x123c1e80], edx */
  w32((uint32_t)(0x123c1e80), (EDX));
  /* 12399241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399244 mov dword ptr [0x123c1e78], eax */
  w32((uint32_t)(0x123c1e78), (EAX));
L_12399249:;
  /* 12399249 mov esp, ebp */
  ESP = (EBP);
  /* 1239924b pop ebp */
  EBP = (pop32());
  /* 1239924c ret  */
  ESPCHK(0x12398c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009250 @ 0x12399250 (1334 bytes, 427 insns) */
void f_12399250(void) {
  FTRACE(0x12399250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12399250 push ebp */
  push32((uint32_t)(EBP));
  /* 12399251 mov ebp, esp */
  EBP = (ESP);
  /* 12399253 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399256 push esi */
  push32((uint32_t)(ESI));
  /* 12399257 mov eax, dword ptr [0x123c1e84] */
  EAX = (r32((uint32_t)(0x123c1e84)));
  /* 1239925c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239925f mov ecx, dword ptr [0x123c1e88] */
  ECX = (r32((uint32_t)(0x123c1e88)));
  /* 12399265 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399267 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1239926a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239926d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399270 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12399273 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12399276 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399279 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1239927c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239927f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12399282 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399286 jge 0x1239929c */
  if ((C.sf==C.of)) goto L_1239929c;
  /* 12399288 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239928b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239928e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399290 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12399293 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1239929a jmp 0x123992b1 */
  goto L_123992b1;
L_1239929c:;
  /* 1239929c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 123992a3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123992a6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123992a9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123992ac shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123992ae mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_123992b1:;
  /* 123992b1 mov ecx, dword ptr [0x123c1e7c] */
  ECX = (r32((uint32_t)(0x123c1e7c)));
  /* 123992b7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_123992ba:;
  /* 123992ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123992bd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123992c0 jae 0x123992e6 */
  if (!C.cf) goto L_123992e6;
  /* 123992c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123992c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123992c8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 123992ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123992cd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 123992d0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 123992d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123992d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123992d7 je 0x123992db */
  if (C.zf) goto L_123992db;
  /* 123992d9 jmp 0x123992e6 */
  goto L_123992e6;
L_123992db:;
  /* 123992db mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123992de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123992e1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123992e4 jmp 0x123992ba */
  goto L_123992ba;
L_123992e6:;
  /* 123992e6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123992e9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123992ec jne 0x123993cd */
  if (!C.zf) goto L_123993cd;
  /* 123992f2 mov eax, dword ptr [0x123c1e88] */
  EAX = (r32((uint32_t)(0x123c1e88)));
  /* 123992f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_123992fa:;
  /* 123992fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123992fd cmp ecx, dword ptr [0x123c1e7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1e7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399303 jae 0x12399329 */
  if (!C.cf) goto L_12399329;
  /* 12399305 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399308 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239930b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1239930d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399310 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12399313 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12399316 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12399318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239931a je 0x1239931e */
  if (C.zf) goto L_1239931e;
  /* 1239931c jmp 0x12399329 */
  goto L_12399329;
L_1239931e:;
  /* 1239931e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399321 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399324 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12399327 jmp 0x123992fa */
  goto L_123992fa;
L_12399329:;
  /* 12399329 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239932c cmp ecx, dword ptr [0x123c1e7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1e7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399332 jne 0x123993cd */
  if (!C.zf) goto L_123993cd;
L_12399338:;
  /* 12399338 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239933b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239933e jae 0x12399356 */
  if (!C.cf) goto L_12399356;
  /* 12399340 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399343 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399347 je 0x1239934b */
  if (C.zf) goto L_1239934b;
  /* 12399349 jmp 0x12399356 */
  goto L_12399356;
L_1239934b:;
  /* 1239934b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239934e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399351 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12399354 jmp 0x12399338 */
  goto L_12399338;
L_12399356:;
  /* 12399356 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399359 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239935c jne 0x123993a7 */
  if (!C.zf) goto L_123993a7;
  /* 1239935e mov eax, dword ptr [0x123c1e88] */
  EAX = (r32((uint32_t)(0x123c1e88)));
  /* 12399363 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12399366:;
  /* 12399366 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399369 cmp ecx, dword ptr [0x123c1e7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1e7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239936f jae 0x12399387 */
  if (!C.cf) goto L_12399387;
  /* 12399371 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399374 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399378 je 0x1239937c */
  if (C.zf) goto L_1239937c;
  /* 1239937a jmp 0x12399387 */
  goto L_12399387;
L_1239937c:;
  /* 1239937c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239937f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399382 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12399385 jmp 0x12399366 */
  goto L_12399366;
L_12399387:;
  /* 12399387 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239938a cmp ecx, dword ptr [0x123c1e7c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1e7c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399390 jne 0x123993a7 */
  if (!C.zf) goto L_123993a7;
  /* 12399392 call 0x12399790 */
  push32(0x12399397u); f_12399790();
  /* 12399397 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1239939a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239939e jne 0x123993a7 */
  if (!C.zf) goto L_123993a7;
  /* 123993a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123993a2 jmp 0x12399781 */
  goto L_12399781;
L_123993a7:;
  /* 123993a7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123993aa push edx */
  push32((uint32_t)(EDX));
  /* 123993ab call 0x123998a0 */
  push32(0x123993b0u); f_123998a0();
  /* 123993b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123993b3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123993b6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 123993b9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 123993bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123993be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123993c1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123993c4 jne 0x123993cd */
  if (!C.zf) goto L_123993cd;
  /* 123993c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123993c8 jmp 0x12399781 */
  goto L_12399781;
L_123993cd:;
  /* 123993cd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123993d0 mov dword ptr [0x123c1e7c], edx */
  w32((uint32_t)(0x123c1e7c), (EDX));
  /* 123993d6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123993d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123993dc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 123993df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123993e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123993e4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 123993e7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123993eb je 0x12399410 */
  if (C.zf) goto L_12399410;
  /* 123993ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123993f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123993f3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123993f6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 123993fa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123993fd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399400 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12399403 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1239940a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1239940c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239940e jne 0x12399445 */
  if (!C.zf) goto L_12399445;
L_12399410:;
  /* 12399410 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12399417:;
  /* 12399417 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239941a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1239941d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12399420 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12399424 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399427 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1239942a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1239942d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12399434 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12399436 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399438 jne 0x12399445 */
  if (!C.zf) goto L_12399445;
  /* 1239943a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239943d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399440 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12399443 jmp 0x12399417 */
  goto L_12399417;
L_12399445:;
  /* 12399445 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399448 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239944e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399451 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12399458 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239945b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12399462 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399465 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399468 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239946b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1239946f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12399472 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399476 jne 0x12399492 */
  if (!C.zf) goto L_12399492;
  /* 12399478 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1239947f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399482 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399485 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12399488 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1239948f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12399492:;
  /* 12399492 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399496 jl 0x123994ab */
  if ((C.sf!=C.of)) goto L_123994ab;
  /* 12399498 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1239949b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1239949d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123994a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123994a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123994a6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123994a9 jmp 0x12399492 */
  goto L_12399492;
L_123994ab:;
  /* 123994ab mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123994ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123994b1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 123994b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123994b8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123994bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123994bd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123994c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123994c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123994c6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 123994c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123994cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123994cf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123994d3 jle 0x123994dc */
  if ((C.zf||C.sf!=C.of)) goto L_123994dc;
  /* 123994d5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_123994dc:;
  /* 123994dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123994df cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123994e2 je 0x12399700 */
  if (C.zf) goto L_12399700;
  /* 123994e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123994eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123994ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 123994f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123994f4 jne 0x123995ca */
  if (!C.zf) goto L_123995ca;
  /* 123994fa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123994fe jge 0x1239955f */
  if ((C.sf==C.of)) goto L_1239955f;
  /* 12399500 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399505 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399508 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1239950a not eax */
  EAX = (~(EAX));
  /* 1239950c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239950f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399512 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12399516 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12399518 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239951b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1239951e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12399522 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399525 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399528 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1239952b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1239952e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399531 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399534 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12399537 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1239953a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239953d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12399541 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399543 jne 0x1239955d */
  if (!C.zf) goto L_1239955d;
  /* 12399545 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1239954a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239954d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1239954f not eax */
  EAX = (~(EAX));
  /* 12399551 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399554 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12399556 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12399558 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239955b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1239955d:;
  /* 1239955d jmp 0x123995ca */
  goto L_123995ca;
L_1239955f:;
  /* 1239955f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399562 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399565 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1239956a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1239956c not edx */
  EDX = (~(EDX));
  /* 1239956e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399571 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399574 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1239957b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239957d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399580 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399583 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1239958a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1239958d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399590 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12399593 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12399596 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399599 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239959c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1239959f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 123995a2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123995a5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123995a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123995ab jne 0x123995ca */
  if (!C.zf) goto L_123995ca;
  /* 123995ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123995b0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123995b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123995b8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123995ba not edx */
  EDX = (~(EDX));
  /* 123995bc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123995bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123995c2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 123995c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123995c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_123995ca:;
  /* 123995ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123995cd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123995d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123995d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123995d6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123995d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123995dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123995df mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123995e2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123995e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123995e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123995ec je 0x12399700 */
  if (C.zf) goto L_12399700;
  /* 123995f2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123995f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123995f8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 123995fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123995fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399601 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12399604 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399607 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1239960a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239960d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12399610 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12399613 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12399616 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399619 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1239961c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239961f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399622 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399625 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12399628 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239962b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239962e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399631 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399634 jne 0x12399700 */
  if (!C.zf) goto L_12399700;
  /* 1239963a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239963e jge 0x1239969a */
  if ((C.sf==C.of)) goto L_1239969a;
  /* 12399640 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399643 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399646 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1239964a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1239964d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399650 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12399653 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12399655 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399658 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239965b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1239965e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12399660 jne 0x12399678 */
  if (!C.zf) goto L_12399678;
  /* 12399662 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399667 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239966a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1239966c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239966f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12399671 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12399673 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399676 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12399678:;
  /* 12399678 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1239967d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399680 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399682 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399685 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399688 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1239968c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239968e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399691 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399694 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12399698 jmp 0x12399700 */
  goto L_12399700;
L_1239969a:;
  /* 1239969a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1239969d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123996a0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 123996a4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123996a7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123996aa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 123996ad add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123996af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123996b2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123996b5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 123996b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123996ba jne 0x123996d7 */
  if (!C.zf) goto L_123996d7;
  /* 123996bc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123996bf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123996c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 123996c7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 123996c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123996cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123996cf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 123996d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123996d4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_123996d7:;
  /* 123996d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123996da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123996dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 123996e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 123996e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123996e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 123996ea mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 123996f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123996f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 123996f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 123996f9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12399700:;
  /* 12399700 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399704 je 0x1239971a */
  if (C.zf) goto L_1239971a;
  /* 12399706 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399709 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239970c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1239970e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399711 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399714 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12399717 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1239971a:;
  /* 1239971a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239971d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399720 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12399723 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399726 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399729 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239972c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1239972e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399731 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399734 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399737 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239973a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1239973d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399740 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12399742 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399745 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12399747 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239974a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239974d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1239974f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12399751 jne 0x12399773 */
  if (!C.zf) goto L_12399773;
  /* 12399753 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399756 cmp eax, dword ptr [0x123c1e80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239975c jne 0x12399773 */
  if (!C.zf) goto L_12399773;
  /* 1239975e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399761 cmp ecx, dword ptr [0x123c1e78] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1e78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399767 jne 0x12399773 */
  if (!C.zf) goto L_12399773;
  /* 12399769 mov dword ptr [0x123c1e80], 0 */
  w32((uint32_t)(0x123c1e80), (0x0u));
L_12399773:;
  /* 12399773 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12399776 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399779 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1239977b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239977e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12399781:;
  /* 12399781 pop esi */
  ESI = (pop32());
  /* 12399782 mov esp, ebp */
  ESP = (EBP);
  /* 12399784 pop ebp */
  EBP = (pop32());
  /* 12399785 ret  */
  ESPCHK(0x12399250u, _esp0);
  ESP += 4; return;
}

/* FUN_10009790 @ 0x12399790 (271 bytes, 78 insns) */
void f_12399790(void) {
  FTRACE(0x12399790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12399790 push ebp */
  push32((uint32_t)(EBP));
  /* 12399791 mov ebp, esp */
  EBP = (ESP);
  /* 12399793 push ecx */
  push32((uint32_t)(ECX));
  /* 12399794 mov eax, dword ptr [0x123c1e84] */
  EAX = (r32((uint32_t)(0x123c1e84)));
  /* 12399799 cmp eax, dword ptr [0x123c1e68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1e68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239979f jne 0x123997eb */
  if (!C.zf) goto L_123997eb;
  /* 123997a1 mov ecx, dword ptr [0x123c1e68] */
  ECX = (r32((uint32_t)(0x123c1e68)));
  /* 123997a7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123997aa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123997ad push ecx */
  push32((uint32_t)(ECX));
  /* 123997ae mov edx, dword ptr [0x123c1e88] */
  EDX = (r32((uint32_t)(0x123c1e88)));
  /* 123997b4 push edx */
  push32((uint32_t)(EDX));
  /* 123997b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123997b7 mov eax, dword ptr [0x123c1e8c] */
  EAX = (r32((uint32_t)(0x123c1e8c)));
  /* 123997bc push eax */
  push32((uint32_t)(EAX));
  /* 123997bd call dword ptr [0x123c337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c337c))), 0x123997c3u);
  /* 123997c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123997c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123997ca jne 0x123997d3 */
  if (!C.zf) goto L_123997d3;
  /* 123997cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123997ce jmp 0x1239989b */
  goto L_1239989b;
L_123997d3:;
  /* 123997d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123997d6 mov dword ptr [0x123c1e88], ecx */
  w32((uint32_t)(0x123c1e88), (ECX));
  /* 123997dc mov edx, dword ptr [0x123c1e68] */
  EDX = (r32((uint32_t)(0x123c1e68)));
  /* 123997e2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123997e5 mov dword ptr [0x123c1e68], edx */
  w32((uint32_t)(0x123c1e68), (EDX));
L_123997eb:;
  /* 123997eb mov eax, dword ptr [0x123c1e84] */
  EAX = (r32((uint32_t)(0x123c1e84)));
  /* 123997f0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123997f3 mov ecx, dword ptr [0x123c1e88] */
  ECX = (r32((uint32_t)(0x123c1e88)));
  /* 123997f9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123997fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123997fe push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12399803 push 8 */
  push32((uint32_t)(0x8u));
  /* 12399805 mov edx, dword ptr [0x123c1e8c] */
  EDX = (r32((uint32_t)(0x123c1e8c)));
  /* 1239980b push edx */
  push32((uint32_t)(EDX));
  /* 1239980c call dword ptr [0x123c3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3378))), 0x12399812u);
  /* 12399812 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399815 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12399818 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239981b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239981f jne 0x12399825 */
  if (!C.zf) goto L_12399825;
  /* 12399821 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12399823 jmp 0x1239989b */
  goto L_1239989b;
L_12399825:;
  /* 12399825 push 4 */
  push32((uint32_t)(0x4u));
  /* 12399827 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1239982c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12399831 push 0 */
  push32((uint32_t)(0x0u));
  /* 12399833 call dword ptr [0x123c3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3380))), 0x12399839u);
  /* 12399839 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239983c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1239983f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399842 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399846 jne 0x12399862 */
  if (!C.zf) goto L_12399862;
  /* 12399848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239984b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239984e push ecx */
  push32((uint32_t)(ECX));
  /* 1239984f push 0 */
  push32((uint32_t)(0x0u));
  /* 12399851 mov edx, dword ptr [0x123c1e8c] */
  EDX = (r32((uint32_t)(0x123c1e8c)));
  /* 12399857 push edx */
  push32((uint32_t)(EDX));
  /* 12399858 call dword ptr [0x123c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3324))), 0x1239985eu);
  /* 1239985e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12399860 jmp 0x1239989b */
  goto L_1239989b;
L_12399862:;
  /* 12399862 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399865 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239986b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239986e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12399875 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399878 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1239987f mov eax, dword ptr [0x123c1e84] */
  EAX = (r32((uint32_t)(0x123c1e84)));
  /* 12399884 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399887 mov dword ptr [0x123c1e84], eax */
  w32((uint32_t)(0x123c1e84), (EAX));
  /* 1239988c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239988f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12399892 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12399898 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239989b:;
  /* 1239989b mov esp, ebp */
  ESP = (EBP);
  /* 1239989d pop ebp */
  EBP = (pop32());
  /* 1239989e ret  */
  ESPCHK(0x12399790u, _esp0);
  ESP += 4; return;
}

/* FUN_100098a0 @ 0x123998a0 (494 bytes, 149 insns) */
void f_123998a0(void) {
  FTRACE(0x123998a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123998a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123998a1 mov ebp, esp */
  EBP = (ESP);
  /* 123998a3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123998a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123998a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123998ac mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 123998af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123998b2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123998b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123998b8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_123998bf:;
  /* 123998bf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123998c3 jl 0x123998d8 */
  if ((C.sf!=C.of)) goto L_123998d8;
  /* 123998c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123998c8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 123998ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123998cd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123998d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123998d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 123998d6 jmp 0x123998bf */
  goto L_123998bf;
L_123998d8:;
  /* 123998d8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123998db imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123998e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123998e4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 123998eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123998ee mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123998f5 jmp 0x12399900 */
  goto L_12399900;
L_123998f7:;
  /* 123998f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 123998fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123998fd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12399900:;
  /* 12399900 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399904 jge 0x12399926 */
  if ((C.sf==C.of)) goto L_12399926;
  /* 12399906 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399909 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239990c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1239990f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12399912 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399915 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399918 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1239991b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239991e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399921 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12399924 jmp 0x123998f7 */
  goto L_123998f7;
L_12399926:;
  /* 12399926 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399929 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1239992c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239992f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12399932 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399934 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12399937 push 4 */
  push32((uint32_t)(0x4u));
  /* 12399939 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1239993e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12399943 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399946 push edx */
  push32((uint32_t)(EDX));
  /* 12399947 call dword ptr [0x123c3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3380))), 0x1239994du);
  /* 1239994d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239994f jne 0x12399959 */
  if (!C.zf) goto L_12399959;
  /* 12399951 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12399954 jmp 0x12399a8a */
  goto L_12399a8a;
L_12399959:;
  /* 12399959 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239995c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399961 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12399964 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399967 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239996a jmp 0x12399978 */
  goto L_12399978;
L_1239996c:;
  /* 1239996c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239996f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399975 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12399978:;
  /* 12399978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239997b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239997e ja 0x123999dd */
  if ((!C.cf&&!C.zf)) goto L_123999dd;
  /* 12399980 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399983 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1239998a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239998d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12399997 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239999a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239999d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123999a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123999a3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 123999a9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123999ac add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123999b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123999b5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123999b8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123999bb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123999c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123999c4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 123999c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123999ca add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123999cf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123999d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123999d5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 123999db jmp 0x1239996c */
  goto L_1239996c;
L_123999dd:;
  /* 123999dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123999e0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123999e6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123999e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123999ec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123999ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123999f2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 123999f5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123999f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 123999fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123999fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399a01 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399a04 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12399a07 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12399a0a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399a0d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399a10 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12399a13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399a16 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12399a19 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12399a1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399a1f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399a22 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12399a25 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399a28 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399a2b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12399a33 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399a36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399a39 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12399a44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399a47 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12399a4b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399a4e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12399a51 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12399a54 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399a57 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12399a5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399a5c jne 0x12399a6d */
  if (!C.zf) goto L_12399a6d;
  /* 12399a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399a61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12399a64 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12399a67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399a6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12399a6d:;
  /* 12399a6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399a72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399a75 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399a77 not edx */
  EDX = (~(EDX));
  /* 12399a79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399a7c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12399a7f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12399a81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399a84 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12399a87 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12399a8a:;
  /* 12399a8a mov esp, ebp */
  ESP = (EBP);
  /* 12399a8c pop ebp */
  EBP = (pop32());
  /* 12399a8d ret  */
  ESPCHK(0x123998a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a90 @ 0x12399a90 (1515 bytes, 489 insns) */
void f_12399a90(void) {
  FTRACE(0x12399a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12399a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12399a91 mov ebp, esp */
  EBP = (ESP);
  /* 12399a93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399a96 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12399a99 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399a9c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12399a9e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12399aa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399aa4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12399aa7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12399aaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399aad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12399ab0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399ab3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12399ab6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12399ab9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12399abc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12399abf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399ac2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12399ac8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399acb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12399ad2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12399ad5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12399ad8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399adb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12399ade mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399ae1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12399ae3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399ae6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12399ae9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399aec add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399aef mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12399af2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399af5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12399af7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12399afa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12399afd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399b00 jle 0x12399db6 */
  if ((C.zf||C.sf!=C.of)) goto L_12399db6;
  /* 12399b06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399b09 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12399b0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12399b0e jne 0x12399b1b */
  if (!C.zf) goto L_12399b1b;
  /* 12399b10 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399b13 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399b16 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399b19 jle 0x12399b22 */
  if ((C.zf||C.sf!=C.of)) goto L_12399b22;
L_12399b1b:;
  /* 12399b1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12399b1d jmp 0x1239a077 */
  goto L_1239a077;
L_12399b22:;
  /* 12399b22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399b25 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12399b28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399b2b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12399b2e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399b32 jbe 0x12399b3b */
  if ((C.cf||C.zf)) goto L_12399b3b;
  /* 12399b34 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12399b3b:;
  /* 12399b3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399b3e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399b41 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12399b44 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399b47 jne 0x12399c1d */
  if (!C.zf) goto L_12399c1d;
  /* 12399b4d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399b51 jae 0x12399bb2 */
  if (!C.cf) goto L_12399bb2;
  /* 12399b53 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399b58 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399b5b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399b5d not edx */
  EDX = (~(EDX));
  /* 12399b5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399b62 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399b65 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12399b69 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12399b6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399b6e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399b71 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12399b75 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399b78 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399b7b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12399b7e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12399b81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399b84 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399b87 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12399b8a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399b8d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399b90 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12399b94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12399b96 jne 0x12399bb0 */
  if (!C.zf) goto L_12399bb0;
  /* 12399b98 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399b9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399ba0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399ba2 not edx */
  EDX = (~(EDX));
  /* 12399ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399ba7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12399ba9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12399bab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399bae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12399bb0:;
  /* 12399bb0 jmp 0x12399c1d */
  goto L_12399c1d;
L_12399bb2:;
  /* 12399bb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399bb5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399bb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399bbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12399bbf not eax */
  EAX = (~(EAX));
  /* 12399bc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399bc4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399bc7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12399bce and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12399bd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399bd3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399bd6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12399bdd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399be0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399be3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12399be6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12399be9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399bec add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399bef mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12399bf2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399bf5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399bf8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12399bfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399bfe jne 0x12399c1d */
  if (!C.zf) goto L_12399c1d;
  /* 12399c00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399c03 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399c06 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399c0b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12399c0d not eax */
  EAX = (~(EAX));
  /* 12399c0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399c12 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12399c15 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12399c17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399c1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12399c1d:;
  /* 12399c1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399c20 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12399c23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399c26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399c29 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12399c2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399c2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12399c32 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399c35 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12399c38 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12399c3b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399c3e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399c41 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399c44 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12399c47 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399c4b jle 0x12399d97 */
  if ((C.zf||C.sf!=C.of)) goto L_12399d97;
  /* 12399c51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399c54 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399c57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12399c5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399c5d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12399c60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399c63 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12399c66 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399c6a jbe 0x12399c73 */
  if ((C.cf||C.zf)) goto L_12399c73;
  /* 12399c6c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12399c73:;
  /* 12399c73 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399c76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12399c79 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12399c7c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12399c7f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399c82 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399c85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12399c88 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12399c8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399c8e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399c91 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12399c94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399c97 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399c9a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12399c9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399ca0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12399ca3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399ca6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12399ca9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399cac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399caf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12399cb2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399cb5 jne 0x12399d83 */
  if (!C.zf) goto L_12399d83;
  /* 12399cbb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399cbf jae 0x12399d1c */
  if (!C.cf) goto L_12399d1c;
  /* 12399cc1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399cc4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399cc7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12399ccb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399cce add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399cd1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12399cd4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12399cd7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399cda add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399cdd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12399ce0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399ce2 jne 0x12399cfa */
  if (!C.zf) goto L_12399cfa;
  /* 12399ce4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399ce9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399cec shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399cee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399cf1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12399cf3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12399cf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399cf8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12399cfa:;
  /* 12399cfa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399cff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399d02 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12399d04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399d07 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399d0a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12399d0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12399d10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399d13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399d16 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12399d1a jmp 0x12399d83 */
  goto L_12399d83;
L_12399d1c:;
  /* 12399d1c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399d1f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399d22 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12399d26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399d29 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399d2c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12399d2f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12399d32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399d35 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399d38 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12399d3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399d3d jne 0x12399d5a */
  if (!C.zf) goto L_12399d5a;
  /* 12399d3f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399d42 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399d45 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399d4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399d4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399d4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399d52 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12399d54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399d57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12399d5a:;
  /* 12399d5a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399d5d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399d60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399d65 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12399d67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399d6a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399d6d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12399d74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12399d76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399d79 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399d7c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12399d83:;
  /* 12399d83 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399d86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399d89 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12399d8b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399d8e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399d91 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399d94 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12399d97:;
  /* 12399d97 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12399d9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399d9d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399da0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12399da2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12399da5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399da8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399dab add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399dae mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12399db1 jmp 0x1239a072 */
  goto L_1239a072;
L_12399db6:;
  /* 12399db6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12399db9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399dbc jge 0x1239a072 */
  if ((C.sf==C.of)) goto L_1239a072;
  /* 12399dc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12399dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399dc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399dcb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12399dcd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12399dd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399dd3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399dd6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399dd9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12399ddc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399ddf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399de2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12399de5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399de8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399deb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12399dee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399df1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12399df4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399df7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12399dfa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399dfe jbe 0x12399e07 */
  if ((C.cf||C.zf)) goto L_12399e07;
  /* 12399e00 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12399e07:;
  /* 12399e07 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399e0a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12399e0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399e0f jne 0x12399f50 */
  if (!C.zf) goto L_12399f50;
  /* 12399e15 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12399e18 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12399e1b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399e1e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12399e21 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399e25 jbe 0x12399e2e */
  if ((C.cf||C.zf)) goto L_12399e2e;
  /* 12399e27 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12399e2e:;
  /* 12399e2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399e31 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399e34 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12399e37 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399e3a jne 0x12399f10 */
  if (!C.zf) goto L_12399f10;
  /* 12399e40 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399e44 jae 0x12399ea5 */
  if (!C.cf) goto L_12399ea5;
  /* 12399e46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399e4b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399e4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399e50 not edx */
  EDX = (~(EDX));
  /* 12399e52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399e55 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399e58 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12399e5c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12399e5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399e61 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399e64 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12399e68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399e6b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399e6e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12399e71 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12399e74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399e77 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399e7a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12399e7d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399e80 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399e83 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12399e87 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12399e89 jne 0x12399ea3 */
  if (!C.zf) goto L_12399ea3;
  /* 12399e8b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399e90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399e93 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399e95 not edx */
  EDX = (~(EDX));
  /* 12399e97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399e9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12399e9c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12399e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399ea1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12399ea3:;
  /* 12399ea3 jmp 0x12399f10 */
  goto L_12399f10;
L_12399ea5:;
  /* 12399ea5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399ea8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399eab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399eb0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12399eb2 not eax */
  EAX = (~(EAX));
  /* 12399eb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399eb7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399eba mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12399ec1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12399ec3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399ec6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399ec9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12399ed0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399ed3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399ed6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12399ed9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12399edc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399edf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399ee2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12399ee5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399ee8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399eeb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12399eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12399ef1 jne 0x12399f10 */
  if (!C.zf) goto L_12399f10;
  /* 12399ef3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12399ef6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399ef9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399efe shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12399f00 not eax */
  EAX = (~(EAX));
  /* 12399f02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399f05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12399f08 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12399f0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399f0d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12399f10:;
  /* 12399f10 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399f13 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12399f16 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399f19 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399f1c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12399f1f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399f22 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12399f25 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12399f28 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12399f2b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12399f2e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399f31 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399f34 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12399f37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12399f3a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12399f3d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12399f40 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12399f43 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399f47 jbe 0x12399f50 */
  if ((C.cf||C.zf)) goto L_12399f50;
  /* 12399f49 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12399f50:;
  /* 12399f50 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12399f53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12399f56 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12399f59 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12399f5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399f5f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399f62 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399f65 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12399f68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399f6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399f6e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12399f71 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12399f74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399f77 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12399f7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399f7d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399f80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399f83 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12399f86 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399f89 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12399f8c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12399f8f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399f92 jne 0x1239a05e */
  if (!C.zf) goto L_1239a05e;
  /* 12399f98 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12399f9c jae 0x12399ff8 */
  if (!C.cf) goto L_12399ff8;
  /* 12399f9e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399fa1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399fa4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12399fa8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399fab add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399fae mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12399fb1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12399fb3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399fb6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399fb9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12399fbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12399fbe jne 0x12399fd6 */
  if (!C.zf) goto L_12399fd6;
  /* 12399fc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12399fc5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12399fc8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12399fca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399fcd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12399fcf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12399fd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12399fd4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12399fd6:;
  /* 12399fd6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12399fdb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12399fde shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12399fe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399fe3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399fe6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12399fea or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12399fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12399fef mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399ff2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12399ff6 jmp 0x1239a05e */
  goto L_1239a05e;
L_12399ff8:;
  /* 12399ff8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12399ffb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12399ffe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1239a002 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239a005 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a008 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1239a00b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1239a00d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239a010 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a013 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1239a016 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239a018 jne 0x1239a035 */
  if (!C.zf) goto L_1239a035;
  /* 1239a01a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a01d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a020 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1239a025 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1239a027 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a02a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1239a02d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1239a02f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a032 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1239a035:;
  /* 1239a035 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a038 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a03b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1239a040 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1239a042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239a045 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239a048 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1239a04f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a051 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239a054 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239a057 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1239a05e:;
  /* 1239a05e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a061 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239a064 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1239a066 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a069 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a06c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239a06f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1239a072:;
  /* 1239a072 mov eax, 1 */
  EAX = (0x1u);
L_1239a077:;
  /* 1239a077 mov esp, ebp */
  ESP = (EBP);
  /* 1239a079 pop ebp */
  EBP = (pop32());
  /* 1239a07a ret  */
  ESPCHK(0x12399a90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a080 @ 0x1239a080 (304 bytes, 79 insns) */
void f_1239a080(void) {
  FTRACE(0x1239a080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239a080 push ebp */
  push32((uint32_t)(EBP));
  /* 1239a081 mov ebp, esp */
  EBP = (ESP);
  /* 1239a083 push ecx */
  push32((uint32_t)(ECX));
  /* 1239a084 cmp dword ptr [0x123c1e80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c1e80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a08b je 0x1239a1ac */
  if (C.zf) goto L_1239a1ac;
  /* 1239a091 mov eax, dword ptr [0x123c1e78] */
  EAX = (r32((uint32_t)(0x123c1e78)));
  /* 1239a096 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1239a099 mov ecx, dword ptr [0x123c1e80] */
  ECX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a09f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239a0a2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a0a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239a0a7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1239a0ac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1239a0b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239a0b4 push eax */
  push32((uint32_t)(EAX));
  /* 1239a0b5 call dword ptr [0x123c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c335c))), 0x1239a0bbu);
  /* 1239a0bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1239a0c0 mov ecx, dword ptr [0x123c1e78] */
  ECX = (r32((uint32_t)(0x123c1e78)));
  /* 1239a0c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1239a0c8 mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a0cd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1239a0d0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1239a0d2 mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a0d8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1239a0db mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a0e0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239a0e3 mov edx, dword ptr [0x123c1e78] */
  EDX = (r32((uint32_t)(0x123c1e78)));
  /* 1239a0e9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1239a0f4 mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a0f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239a0fc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1239a0ff sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1239a102 mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a107 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239a10a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1239a10d mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a113 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1239a116 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1239a11a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239a11c jne 0x1239a132 */
  if (!C.zf) goto L_1239a132;
  /* 1239a11e mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a124 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1239a127 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1239a129 mov ecx, dword ptr [0x123c1e80] */
  ECX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a12f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1239a132:;
  /* 1239a132 mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a138 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a13c jne 0x1239a1a2 */
  if (!C.zf) goto L_1239a1a2;
  /* 1239a13e cmp dword ptr [0x123c1e84], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c1e84))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a145 jle 0x1239a1a2 */
  if ((C.zf||C.sf!=C.of)) goto L_1239a1a2;
  /* 1239a147 mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a14c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239a14f push ecx */
  push32((uint32_t)(ECX));
  /* 1239a150 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239a152 mov edx, dword ptr [0x123c1e8c] */
  EDX = (r32((uint32_t)(0x123c1e8c)));
  /* 1239a158 push edx */
  push32((uint32_t)(EDX));
  /* 1239a159 call dword ptr [0x123c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3324))), 0x1239a15fu);
  /* 1239a15f mov eax, dword ptr [0x123c1e84] */
  EAX = (r32((uint32_t)(0x123c1e84)));
  /* 1239a164 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239a167 mov ecx, dword ptr [0x123c1e88] */
  ECX = (r32((uint32_t)(0x123c1e88)));
  /* 1239a16d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a16f mov edx, dword ptr [0x123c1e80] */
  EDX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a175 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a178 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a17a push ecx */
  push32((uint32_t)(ECX));
  /* 1239a17b mov eax, dword ptr [0x123c1e80] */
  EAX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a180 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a183 push eax */
  push32((uint32_t)(EAX));
  /* 1239a184 mov ecx, dword ptr [0x123c1e80] */
  ECX = (r32((uint32_t)(0x123c1e80)));
  /* 1239a18a push ecx */
  push32((uint32_t)(ECX));
  /* 1239a18b call 0x1239c7b0 */
  push32(0x1239a190u); f_1239c7b0();
  /* 1239a190 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a193 mov edx, dword ptr [0x123c1e84] */
  EDX = (r32((uint32_t)(0x123c1e84)));
  /* 1239a199 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a19c mov dword ptr [0x123c1e84], edx */
  w32((uint32_t)(0x123c1e84), (EDX));
L_1239a1a2:;
  /* 1239a1a2 mov dword ptr [0x123c1e80], 0 */
  w32((uint32_t)(0x123c1e80), (0x0u));
L_1239a1ac:;
  /* 1239a1ac mov esp, ebp */
  ESP = (EBP);
  /* 1239a1ae pop ebp */
  EBP = (pop32());
  /* 1239a1af ret  */
  ESPCHK(0x1239a080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1b0 @ 0x1239a1b0 (1565 bytes, 343 insns) */
void f_1239a1b0(void) {
  FTRACE(0x1239a1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239a1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239a1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1239a1b3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a1b9 mov eax, dword ptr [0x123c1e84] */
  EAX = (r32((uint32_t)(0x123c1e84)));
  /* 1239a1be imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239a1c1 push eax */
  push32((uint32_t)(EAX));
  /* 1239a1c2 mov ecx, dword ptr [0x123c1e88] */
  ECX = (r32((uint32_t)(0x123c1e88)));
  /* 1239a1c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1239a1c9 call dword ptr [0x123c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3330))), 0x1239a1cfu);
  /* 1239a1cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239a1d1 je 0x1239a1db */
  if (C.zf) goto L_1239a1db;
  /* 1239a1d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239a1d6 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a1db:;
  /* 1239a1db mov edx, dword ptr [0x123c1e88] */
  EDX = (r32((uint32_t)(0x123c1e88)));
  /* 1239a1e1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1239a1e7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1239a1f1 jmp 0x1239a202 */
  goto L_1239a202;
L_1239a1f3:;
  /* 1239a1f3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1239a1f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a1fc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1239a202:;
  /* 1239a202 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1239a208 cmp ecx, dword ptr [0x123c1e84] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a20e jge 0x1239a7c7 */
  if ((C.sf==C.of)) goto L_1239a7c7;
  /* 1239a214 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1239a21a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1239a21d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1239a223 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1239a228 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1239a22e push ecx */
  push32((uint32_t)(ECX));
  /* 1239a22f call dword ptr [0x123c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3330))), 0x1239a235u);
  /* 1239a235 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239a237 je 0x1239a243 */
  if (C.zf) goto L_1239a243;
  /* 1239a239 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1239a23e jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a243:;
  /* 1239a243 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1239a249 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1239a24c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1239a252 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1239a258 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a25e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1239a261 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1239a267 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239a26a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239a26d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1239a277 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1239a281 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239a288 jmp 0x1239a293 */
  goto L_1239a293;
L_1239a28a:;
  /* 1239a28a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239a28d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a290 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1239a293:;
  /* 1239a293 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a297 jge 0x1239a78b */
  if ((C.sf==C.of)) goto L_1239a78b;
  /* 1239a29d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1239a2a7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1239a2b1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1239a2bb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1239a2c5 jmp 0x1239a2d6 */
  goto L_1239a2d6;
L_1239a2c7:;
  /* 1239a2c7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1239a2cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a2d0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1239a2d6:;
  /* 1239a2d6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a2dd jge 0x1239a2f2 */
  if ((C.sf==C.of)) goto L_1239a2f2;
  /* 1239a2df mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1239a2e5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1239a2f0 jmp 0x1239a2c7 */
  goto L_1239a2c7;
L_1239a2f2:;
  /* 1239a2f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a2f6 jl 0x1239a72d */
  if ((C.sf!=C.of)) goto L_1239a72d;
  /* 1239a2fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1239a301 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1239a307 push ecx */
  push32((uint32_t)(ECX));
  /* 1239a308 call dword ptr [0x123c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3330))), 0x1239a30eu);
  /* 1239a30e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239a310 je 0x1239a31c */
  if (C.zf) goto L_1239a31c;
  /* 1239a312 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1239a317 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a31c:;
  /* 1239a31c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1239a322 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1239a325 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1239a32f jmp 0x1239a340 */
  goto L_1239a340;
L_1239a331:;
  /* 1239a331 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1239a337 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a33a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1239a340:;
  /* 1239a340 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a347 jge 0x1239a4c4 */
  if ((C.sf==C.of)) goto L_1239a4c4;
  /* 1239a34d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239a350 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a353 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1239a359 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a35f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a365 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1239a36b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a371 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a375 jne 0x1239a382 */
  if (!C.zf) goto L_1239a382;
  /* 1239a377 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1239a37d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a380 je 0x1239a38c */
  if (C.zf) goto L_1239a38c;
L_1239a382:;
  /* 1239a382 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1239a387 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a38c:;
  /* 1239a38c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a392 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1239a394 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1239a39a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1239a3a0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1239a3a6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1239a3ac and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1239a3af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239a3b1 je 0x1239a3e9 */
  if (C.zf) goto L_1239a3e9;
  /* 1239a3b3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1239a3b9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a3bc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1239a3c2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a3cc jle 0x1239a3d8 */
  if ((C.zf||C.sf!=C.of)) goto L_1239a3d8;
  /* 1239a3ce mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1239a3d3 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a3d8:;
  /* 1239a3d8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1239a3de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a3e1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1239a3e7 jmp 0x1239a42b */
  goto L_1239a42b;
L_1239a3e9:;
  /* 1239a3e9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1239a3ef sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1239a3f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a3f5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1239a3fb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a402 jle 0x1239a40e */
  if ((C.zf||C.sf!=C.of)) goto L_1239a40e;
  /* 1239a404 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1239a40e:;
  /* 1239a40e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1239a414 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1239a41b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a41e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1239a424 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1239a42b:;
  /* 1239a42b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a432 jl 0x1239a44d */
  if ((C.sf!=C.of)) goto L_1239a44d;
  /* 1239a434 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1239a43a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1239a43d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239a43f jne 0x1239a44d */
  if (!C.zf) goto L_1239a44d;
  /* 1239a441 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a44b jle 0x1239a457 */
  if ((C.zf||C.sf!=C.of)) goto L_1239a457;
L_1239a44d:;
  /* 1239a44d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1239a452 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a457:;
  /* 1239a457 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a45d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a463 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1239a466 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a46c je 0x1239a478 */
  if (C.zf) goto L_1239a478;
  /* 1239a46e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1239a473 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a478:;
  /* 1239a478 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a47e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a484 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1239a48a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a490 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a496 jb 0x1239a38c */
  if (C.cf) goto L_1239a38c;
  /* 1239a49c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a4a2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a4a8 je 0x1239a4b4 */
  if (C.zf) goto L_1239a4b4;
  /* 1239a4aa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1239a4af jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a4b4:;
  /* 1239a4b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239a4b7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a4bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239a4bf jmp 0x1239a331 */
  goto L_1239a331;
L_1239a4c4:;
  /* 1239a4c4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239a4c7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239a4c9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a4cf je 0x1239a4db */
  if (C.zf) goto L_1239a4db;
  /* 1239a4d1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1239a4d6 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a4db:;
  /* 1239a4db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239a4de mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1239a4e4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1239a4eb jmp 0x1239a4f6 */
  goto L_1239a4f6;
L_1239a4ed:;
  /* 1239a4ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a4f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a4f3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1239a4f6:;
  /* 1239a4f6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a4fa jge 0x1239a72d */
  if ((C.sf==C.of)) goto L_1239a72d;
  /* 1239a500 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1239a50a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1239a510 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1239a516:;
  /* 1239a516 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a51c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1239a51f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1239a525 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1239a52b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a531 je 0x1239a65a */
  if (C.zf) goto L_1239a65a;
  /* 1239a537 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a53a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1239a540 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a547 je 0x1239a65a */
  if (C.zf) goto L_1239a65a;
  /* 1239a54d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1239a553 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a559 jb 0x1239a56e */
  if (C.cf) goto L_1239a56e;
  /* 1239a55b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1239a561 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a566 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a56c jb 0x1239a578 */
  if (C.cf) goto L_1239a578;
L_1239a56e:;
  /* 1239a56e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1239a573 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a578:;
  /* 1239a578 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1239a57e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1239a584 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1239a58a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1239a590 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a593 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1239a596 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239a599 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a59e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1239a5a4:;
  /* 1239a5a4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239a5a7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a5ad je 0x1239a5ce */
  if (C.zf) goto L_1239a5ce;
  /* 1239a5af mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239a5b2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a5b8 jne 0x1239a5bc */
  if (!C.zf) goto L_1239a5bc;
  /* 1239a5ba jmp 0x1239a5ce */
  goto L_1239a5ce;
L_1239a5bc:;
  /* 1239a5bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239a5bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239a5c1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1239a5c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239a5c7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a5c9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1239a5cc jmp 0x1239a5a4 */
  goto L_1239a5a4;
L_1239a5ce:;
  /* 1239a5ce mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239a5d1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a5d7 jne 0x1239a5e3 */
  if (!C.zf) goto L_1239a5e3;
  /* 1239a5d9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1239a5de jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a5e3:;
  /* 1239a5e3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1239a5e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239a5eb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1239a5ee sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a5f1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1239a5f7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a5fe jle 0x1239a60a */
  if ((C.zf||C.sf!=C.of)) goto L_1239a60a;
  /* 1239a600 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1239a60a:;
  /* 1239a60a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1239a610 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a613 je 0x1239a61f */
  if (C.zf) goto L_1239a61f;
  /* 1239a615 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1239a61a jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a61f:;
  /* 1239a61f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1239a625 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1239a628 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a62e je 0x1239a63a */
  if (C.zf) goto L_1239a63a;
  /* 1239a630 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1239a635 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a63a:;
  /* 1239a63a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1239a640 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1239a646 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1239a64c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a64f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1239a655 jmp 0x1239a516 */
  goto L_1239a516;
L_1239a65a:;
  /* 1239a65a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a661 je 0x1239a6d1 */
  if (C.zf) goto L_1239a6d1;
  /* 1239a663 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a667 jge 0x1239a69b */
  if ((C.sf==C.of)) goto L_1239a69b;
  /* 1239a669 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1239a66e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a671 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1239a673 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1239a679 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a67b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1239a681 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1239a686 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a689 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1239a68b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1239a691 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a693 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1239a699 jmp 0x1239a6d1 */
  goto L_1239a6d1;
L_1239a69b:;
  /* 1239a69b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a69e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a6a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1239a6a6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1239a6a8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1239a6ae or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a6b0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1239a6b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a6b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a6bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1239a6c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1239a6c3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1239a6c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a6cb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1239a6d1:;
  /* 1239a6d1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1239a6d7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1239a6da cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a6e0 jne 0x1239a6f4 */
  if (!C.zf) goto L_1239a6f4;
  /* 1239a6e2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239a6e5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1239a6eb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a6f2 je 0x1239a6fe */
  if (C.zf) goto L_1239a6fe;
L_1239a6f4:;
  /* 1239a6f4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1239a6f9 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a6fe:;
  /* 1239a6fe mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1239a704 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239a707 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a70d je 0x1239a719 */
  if (C.zf) goto L_1239a719;
  /* 1239a70f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1239a714 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a719:;
  /* 1239a719 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1239a71f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a722 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1239a728 jmp 0x1239a4ed */
  goto L_1239a4ed;
L_1239a72d:;
  /* 1239a72d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239a730 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1239a736 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1239a73c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a740 jne 0x1239a75a */
  if (!C.zf) goto L_1239a75a;
  /* 1239a742 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239a745 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1239a74b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1239a751 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a758 je 0x1239a761 */
  if (C.zf) goto L_1239a761;
L_1239a75a:;
  /* 1239a75a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1239a75f jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a761:;
  /* 1239a761 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1239a767 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a76d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1239a773 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239a776 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a77b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1239a77e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239a781 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1239a783 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239a786 jmp 0x1239a28a */
  goto L_1239a28a;
L_1239a78b:;
  /* 1239a78b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1239a791 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1239a797 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a799 jne 0x1239a7ac */
  if (!C.zf) goto L_1239a7ac;
  /* 1239a79b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1239a7a1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1239a7a7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a7aa je 0x1239a7b3 */
  if (C.zf) goto L_1239a7b3;
L_1239a7ac:;
  /* 1239a7ac mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1239a7b1 jmp 0x1239a7c9 */
  goto L_1239a7c9;
L_1239a7b3:;
  /* 1239a7b3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1239a7b9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a7bc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1239a7c2 jmp 0x1239a1f3 */
  goto L_1239a1f3;
L_1239a7c7:;
  /* 1239a7c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239a7c9:;
  /* 1239a7c9 mov esp, ebp */
  ESP = (EBP);
  /* 1239a7cb pop ebp */
  EBP = (pop32());
  /* 1239a7cc ret  */
  ESPCHK(0x1239a1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7d0 @ 0x1239a7d0 (250 bytes, 92 insns) */
void f_1239a7d0(void) {
  FTRACE(0x1239a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1239a7d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a7d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1239a7d7 push esi */
  push32((uint32_t)(ESI));
  /* 1239a7d8 push edi */
  push32((uint32_t)(EDI));
  /* 1239a7d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1239a7dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1239a7df lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1239a7e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1239a7e5:;
  /* 1239a7e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a7e9 jne 0x1239a809 */
  if (!C.zf) goto L_1239a809;
  /* 1239a7eb push 0x123bc030 */
  push32((uint32_t)(0x123bc030u));
  /* 1239a7f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239a7f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1239a7f4 push 0x123bc024 */
  push32((uint32_t)(0x123bc024u));
  /* 1239a7f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239a7fb call 0x12393980 */
  push32(0x1239a800u); f_12393980();
  /* 1239a800 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a803 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a806 jne 0x1239a809 */
  if (!C.zf) goto L_1239a809;
  /* 1239a808 int3  */
  x86_unimpl("int3 @ 0x1239a808");
L_1239a809:;
  /* 1239a809 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239a80b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239a80d jne 0x1239a7e5 */
  if (!C.zf) goto L_1239a7e5;
L_1239a80f:;
  /* 1239a80f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a813 jne 0x1239a833 */
  if (!C.zf) goto L_1239a833;
  /* 1239a815 push 0x123bc014 */
  push32((uint32_t)(0x123bc014u));
  /* 1239a81a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239a81c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1239a81e push 0x123bc024 */
  push32((uint32_t)(0x123bc024u));
  /* 1239a823 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239a825 call 0x12393980 */
  push32(0x1239a82au); f_12393980();
  /* 1239a82a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a82d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a830 jne 0x1239a833 */
  if (!C.zf) goto L_1239a833;
  /* 1239a832 int3  */
  x86_unimpl("int3 @ 0x1239a832");
L_1239a833:;
  /* 1239a833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239a837 jne 0x1239a80f */
  if (!C.zf) goto L_1239a80f;
  /* 1239a839 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a83c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1239a843 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a849 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1239a84c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a852 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1239a854 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a857 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1239a85e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1239a861 push ecx */
  push32((uint32_t)(ECX));
  /* 1239a862 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239a865 push edx */
  push32((uint32_t)(EDX));
  /* 1239a866 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a869 push eax */
  push32((uint32_t)(EAX));
  /* 1239a86a call 0x1239b850 */
  push32(0x1239a86fu); f_1239b850();
  /* 1239a86f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a872 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1239a875 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a878 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1239a87b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a87e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a881 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1239a884 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a887 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a88b jl 0x1239a8af */
  if ((C.sf!=C.of)) goto L_1239a8af;
  /* 1239a88d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a890 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1239a892 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1239a895 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239a897 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239a89d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1239a8a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a8a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1239a8a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a8a8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a8ab mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1239a8ad jmp 0x1239a8c0 */
  goto L_1239a8c0;
L_1239a8af:;
  /* 1239a8af mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239a8b2 push edx */
  push32((uint32_t)(EDX));
  /* 1239a8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239a8b5 call 0x1239b5d0 */
  push32(0x1239a8bau); f_1239b5d0();
  /* 1239a8ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a8bd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1239a8c0:;
  /* 1239a8c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239a8c3 pop edi */
  EDI = (pop32());
  /* 1239a8c4 pop esi */
  ESI = (pop32());
  /* 1239a8c5 pop ebx */
  EBX = (pop32());
  /* 1239a8c6 mov esp, ebp */
  ESP = (EBP);
  /* 1239a8c8 pop ebp */
  EBP = (pop32());
  /* 1239a8c9 ret  */
  ESPCHK(0x1239a7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8d0 @ 0x1239a8d0 (183 bytes, 58 insns) */
void f_1239a8d0(void) {
  FTRACE(0x1239a8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239a8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239a8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1239a8d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a8d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a8d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a8dc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a8e1 ja 0x1239a8fa */
  if ((!C.cf&&!C.zf)) goto L_1239a8fa;
  /* 1239a8e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a8e6 mov edx, dword ptr [0x123bec98] */
  EDX = (r32((uint32_t)(0x123bec98)));
  /* 1239a8ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a8ee mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1239a8f2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1239a8f5 jmp 0x1239a983 */
  goto L_1239a983;
L_1239a8fa:;
  /* 1239a8fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a8fd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1239a900 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239a906 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239a90c mov edx, dword ptr [0x123bec98] */
  EDX = (r32((uint32_t)(0x123bec98)));
  /* 1239a912 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a914 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1239a918 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1239a91d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239a91f je 0x1239a943 */
  if (C.zf) goto L_1239a943;
  /* 1239a921 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a924 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1239a927 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239a92d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1239a930 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1239a933 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1239a936 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1239a93a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1239a941 jmp 0x1239a954 */
  goto L_1239a954;
L_1239a943:;
  /* 1239a943 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1239a946 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1239a949 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1239a94d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1239a954:;
  /* 1239a954 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239a956 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239a958 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239a95a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1239a95d push ecx */
  push32((uint32_t)(ECX));
  /* 1239a95e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239a961 push edx */
  push32((uint32_t)(EDX));
  /* 1239a962 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1239a965 push eax */
  push32((uint32_t)(EAX));
  /* 1239a966 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239a968 call 0x1239caf0 */
  push32(0x1239a96du); f_1239caf0();
  /* 1239a96d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239a972 jne 0x1239a978 */
  if (!C.zf) goto L_1239a978;
  /* 1239a974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a976 jmp 0x1239a983 */
  goto L_1239a983;
L_1239a978:;
  /* 1239a978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239a97b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239a980 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1239a983:;
  /* 1239a983 mov esp, ebp */
  ESP = (EBP);
  /* 1239a985 pop ebp */
  EBP = (pop32());
  /* 1239a986 ret  */
  ESPCHK(0x1239a8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a990 @ 0x1239a990 (836 bytes, 238 insns) */
void f_1239a990(void) {
  FTRACE(0x1239a990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239a990 push ebp */
  push32((uint32_t)(EBP));
  /* 1239a991 mov ebp, esp */
  EBP = (ESP);
  /* 1239a993 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239a996 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1239a998 call 0x123982c0 */
  push32(0x1239a99du); f_123982c0();
  /* 1239a99d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a9a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a9a3 push eax */
  push32((uint32_t)(EAX));
  /* 1239a9a4 call 0x1239ace0 */
  push32(0x1239a9a9u); f_1239ace0();
  /* 1239a9a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a9ac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1239a9af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239a9b2 cmp ecx, dword ptr [0x123c1bc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1bc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a9b8 jne 0x1239a9cb */
  if (!C.zf) goto L_1239a9cb;
  /* 1239a9ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1239a9bc call 0x12398360 */
  push32(0x1239a9c1u); f_12398360();
  /* 1239a9c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a9c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a9c6 jmp 0x1239acd0 */
  goto L_1239acd0;
L_1239a9cb:;
  /* 1239a9cb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239a9cf jne 0x1239a9ec */
  if (!C.zf) goto L_1239a9ec;
  /* 1239a9d1 call 0x1239adc0 */
  push32(0x1239a9d6u); f_1239adc0();
  /* 1239a9d6 call 0x1239ae40 */
  push32(0x1239a9dbu); f_1239ae40();
  /* 1239a9db push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1239a9dd call 0x12398360 */
  push32(0x1239a9e2u); f_12398360();
  /* 1239a9e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a9e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239a9e7 jmp 0x1239acd0 */
  goto L_1239acd0;
L_1239a9ec:;
  /* 1239a9ec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239a9f3 jmp 0x1239a9fe */
  goto L_1239a9fe;
L_1239a9f5:;
  /* 1239a9f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239a9f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239a9fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239a9fe:;
  /* 1239a9fe cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239aa02 jae 0x1239ab4f */
  if (!C.cf) goto L_1239ab4f;
  /* 1239aa08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239aa0b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239aa0e mov ecx, dword ptr [eax + 0x123beeb8] */
  ECX = (r32((uint32_t)(EAX + 0x123beeb8)));
  /* 1239aa14 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239aa17 jne 0x1239ab4a */
  if (!C.zf) goto L_1239ab4a;
  /* 1239aa1d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1239aa24 jmp 0x1239aa2f */
  goto L_1239aa2f;
L_1239aa26:;
  /* 1239aa26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239aa29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239aa2c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1239aa2f:;
  /* 1239aa2f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239aa36 jae 0x1239aa44 */
  if (!C.cf) goto L_1239aa44;
  /* 1239aa38 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239aa3b mov byte ptr [eax + 0x123c1d60], 0 */
  w8((uint32_t)(EAX + 0x123c1d60), (0x0u));
  /* 1239aa42 jmp 0x1239aa26 */
  goto L_1239aa26;
L_1239aa44:;
  /* 1239aa44 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239aa4b jmp 0x1239aa56 */
  goto L_1239aa56;
L_1239aa4d:;
  /* 1239aa4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239aa50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239aa53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1239aa56:;
  /* 1239aa56 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239aa5a jae 0x1239aad7 */
  if (!C.cf) goto L_1239aad7;
  /* 1239aa5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239aa5f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239aa62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239aa65 lea ecx, [edx + eax*8 + 0x123beec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x123beec8));
  /* 1239aa6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239aa6f jmp 0x1239aa7a */
  goto L_1239aa7a;
L_1239aa71:;
  /* 1239aa71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239aa74 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239aa77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1239aa7a:;
  /* 1239aa7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239aa7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239aa7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1239aa81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239aa83 je 0x1239aad2 */
  if (C.zf) goto L_1239aad2;
  /* 1239aa85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239aa88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239aa8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1239aa8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239aa8f je 0x1239aad2 */
  if (C.zf) goto L_1239aad2;
  /* 1239aa91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239aa94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239aa96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1239aa98 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1239aa9b jmp 0x1239aaa6 */
  goto L_1239aaa6;
L_1239aa9d:;
  /* 1239aa9d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239aaa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239aaa3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1239aaa6:;
  /* 1239aaa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239aaa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239aaab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1239aaae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239aab1 ja 0x1239aad0 */
  if ((!C.cf&&!C.zf)) goto L_1239aad0;
  /* 1239aab3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239aab6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239aab9 mov dl, byte ptr [eax + 0x123c1d61] */
  DL = (r8((uint32_t)(EAX + 0x123c1d61)));
  /* 1239aabf or dl, byte ptr [ecx + 0x123beeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x123beeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1239aac5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239aac8 mov byte ptr [eax + 0x123c1d61], dl */
  w8((uint32_t)(EAX + 0x123c1d61), (DL));
  /* 1239aace jmp 0x1239aa9d */
  goto L_1239aa9d;
L_1239aad0:;
  /* 1239aad0 jmp 0x1239aa71 */
  goto L_1239aa71;
L_1239aad2:;
  /* 1239aad2 jmp 0x1239aa4d */
  goto L_1239aa4d;
L_1239aad7:;
  /* 1239aad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239aada mov dword ptr [0x123c1bc4], ecx */
  w32((uint32_t)(0x123c1bc4), (ECX));
  /* 1239aae0 mov dword ptr [0x123c1c4c], 1 */
  w32((uint32_t)(0x123c1c4c), (0x1u));
  /* 1239aaea mov edx, dword ptr [0x123c1bc4] */
  EDX = (r32((uint32_t)(0x123c1bc4)));
  /* 1239aaf0 push edx */
  push32((uint32_t)(EDX));
  /* 1239aaf1 call 0x1239ad40 */
  push32(0x1239aaf6u); f_1239ad40();
  /* 1239aaf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239aaf9 mov dword ptr [0x123c1e64], eax */
  w32((uint32_t)(0x123c1e64), (EAX));
  /* 1239aafe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239ab05 jmp 0x1239ab10 */
  goto L_1239ab10;
L_1239ab07:;
  /* 1239ab07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239ab0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ab0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1239ab10:;
  /* 1239ab10 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ab14 jae 0x1239ab34 */
  if (!C.cf) goto L_1239ab34;
  /* 1239ab16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ab19 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239ab1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239ab1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239ab22 mov cx, word ptr [ecx + eax*2 + 0x123beebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x123beebc)));
  /* 1239ab2a mov word ptr [edx*2 + 0x123c1c40], cx */
  w16((uint32_t)(EDX*2 + 0x123c1c40), (CX));
  /* 1239ab32 jmp 0x1239ab07 */
  goto L_1239ab07;
L_1239ab34:;
  /* 1239ab34 call 0x1239ae40 */
  push32(0x1239ab39u); f_1239ae40();
  /* 1239ab39 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1239ab3b call 0x12398360 */
  push32(0x1239ab40u); f_12398360();
  /* 1239ab40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ab43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ab45 jmp 0x1239acd0 */
  goto L_1239acd0;
L_1239ab4a:;
  /* 1239ab4a jmp 0x1239a9f5 */
  goto L_1239a9f5;
L_1239ab4f:;
  /* 1239ab4f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1239ab52 push edx */
  push32((uint32_t)(EDX));
  /* 1239ab53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ab56 push eax */
  push32((uint32_t)(EAX));
  /* 1239ab57 call dword ptr [0x123c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3354))), 0x1239ab5du);
  /* 1239ab5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ab60 jne 0x1239aca2 */
  if (!C.zf) goto L_1239aca2;
  /* 1239ab66 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1239ab6d jmp 0x1239ab78 */
  goto L_1239ab78;
L_1239ab6f:;
  /* 1239ab6f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ab72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ab75 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1239ab78:;
  /* 1239ab78 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ab7f jae 0x1239ab8d */
  if (!C.cf) goto L_1239ab8d;
  /* 1239ab81 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ab84 mov byte ptr [edx + 0x123c1d60], 0 */
  w8((uint32_t)(EDX + 0x123c1d60), (0x0u));
  /* 1239ab8b jmp 0x1239ab6f */
  goto L_1239ab6f;
L_1239ab8d:;
  /* 1239ab8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ab90 mov dword ptr [0x123c1bc4], eax */
  w32((uint32_t)(0x123c1bc4), (EAX));
  /* 1239ab95 mov dword ptr [0x123c1e64], 0 */
  w32((uint32_t)(0x123c1e64), (0x0u));
  /* 1239ab9f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239aba3 jbe 0x1239ac5e */
  if ((C.cf||C.zf)) goto L_1239ac5e;
  /* 1239aba9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1239abac mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1239abaf jmp 0x1239abba */
  goto L_1239abba;
L_1239abb1:;
  /* 1239abb1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239abb4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239abb7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1239abba:;
  /* 1239abba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239abbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239abbf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1239abc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239abc3 je 0x1239ac0c */
  if (C.zf) goto L_1239ac0c;
  /* 1239abc5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239abc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239abca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1239abcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239abcf je 0x1239ac0c */
  if (C.zf) goto L_1239ac0c;
  /* 1239abd1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239abd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239abd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1239abd8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1239abdb jmp 0x1239abe6 */
  goto L_1239abe6;
L_1239abdd:;
  /* 1239abdd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239abe0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239abe3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1239abe6:;
  /* 1239abe6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239abe9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239abeb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1239abee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239abf1 ja 0x1239ac0a */
  if ((!C.cf&&!C.zf)) goto L_1239ac0a;
  /* 1239abf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239abf6 mov cl, byte ptr [eax + 0x123c1d61] */
  CL = (r8((uint32_t)(EAX + 0x123c1d61)));
  /* 1239abfc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1239abff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ac02 mov byte ptr [edx + 0x123c1d61], cl */
  w8((uint32_t)(EDX + 0x123c1d61), (CL));
  /* 1239ac08 jmp 0x1239abdd */
  goto L_1239abdd;
L_1239ac0a:;
  /* 1239ac0a jmp 0x1239abb1 */
  goto L_1239abb1;
L_1239ac0c:;
  /* 1239ac0c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1239ac13 jmp 0x1239ac1e */
  goto L_1239ac1e;
L_1239ac15:;
  /* 1239ac15 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ac18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ac1b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1239ac1e:;
  /* 1239ac1e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ac25 jae 0x1239ac3e */
  if (!C.cf) goto L_1239ac3e;
  /* 1239ac27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ac2a mov dl, byte ptr [ecx + 0x123c1d61] */
  DL = (r8((uint32_t)(ECX + 0x123c1d61)));
  /* 1239ac30 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1239ac33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ac36 mov byte ptr [eax + 0x123c1d61], dl */
  w8((uint32_t)(EAX + 0x123c1d61), (DL));
  /* 1239ac3c jmp 0x1239ac15 */
  goto L_1239ac15;
L_1239ac3e:;
  /* 1239ac3e mov ecx, dword ptr [0x123c1bc4] */
  ECX = (r32((uint32_t)(0x123c1bc4)));
  /* 1239ac44 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ac45 call 0x1239ad40 */
  push32(0x1239ac4au); f_1239ad40();
  /* 1239ac4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ac4d mov dword ptr [0x123c1e64], eax */
  w32((uint32_t)(0x123c1e64), (EAX));
  /* 1239ac52 mov dword ptr [0x123c1c4c], 1 */
  w32((uint32_t)(0x123c1c4c), (0x1u));
  /* 1239ac5c jmp 0x1239ac68 */
  goto L_1239ac68;
L_1239ac5e:;
  /* 1239ac5e mov dword ptr [0x123c1c4c], 0 */
  w32((uint32_t)(0x123c1c4c), (0x0u));
L_1239ac68:;
  /* 1239ac68 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239ac6f jmp 0x1239ac7a */
  goto L_1239ac7a;
L_1239ac71:;
  /* 1239ac71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239ac74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ac77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1239ac7a:;
  /* 1239ac7a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ac7e jae 0x1239ac8f */
  if (!C.cf) goto L_1239ac8f;
  /* 1239ac80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239ac83 mov word ptr [eax*2 + 0x123c1c40], 0 */
  w16((uint32_t)(EAX*2 + 0x123c1c40), (0x0u));
  /* 1239ac8d jmp 0x1239ac71 */
  goto L_1239ac71;
L_1239ac8f:;
  /* 1239ac8f call 0x1239ae40 */
  push32(0x1239ac94u); f_1239ae40();
  /* 1239ac94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1239ac96 call 0x12398360 */
  push32(0x1239ac9bu); f_12398360();
  /* 1239ac9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ac9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239aca0 jmp 0x1239acd0 */
  goto L_1239acd0;
L_1239aca2:;
  /* 1239aca2 cmp dword ptr [0x123c06d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239aca9 je 0x1239acc3 */
  if (C.zf) goto L_1239acc3;
  /* 1239acab call 0x1239adc0 */
  push32(0x1239acb0u); f_1239adc0();
  /* 1239acb0 call 0x1239ae40 */
  push32(0x1239acb5u); f_1239ae40();
  /* 1239acb5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1239acb7 call 0x12398360 */
  push32(0x1239acbcu); f_12398360();
  /* 1239acbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239acbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239acc1 jmp 0x1239acd0 */
  goto L_1239acd0;
L_1239acc3:;
  /* 1239acc3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1239acc5 call 0x12398360 */
  push32(0x1239accau); f_12398360();
  /* 1239acca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239accd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1239acd0:;
  /* 1239acd0 mov esp, ebp */
  ESP = (EBP);
  /* 1239acd2 pop ebp */
  EBP = (pop32());
  /* 1239acd3 ret  */
  ESPCHK(0x1239a990u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1239ace0 (89 bytes, 21 insns) */
void f_1239ace0(void) {
  FTRACE(0x1239ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239ace1 mov ebp, esp */
  EBP = (ESP);
  /* 1239ace3 mov dword ptr [0x123c06d8], 0 */
  w32((uint32_t)(0x123c06d8), (0x0u));
  /* 1239aced cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239acf1 jne 0x1239ad05 */
  if (!C.zf) goto L_1239ad05;
  /* 1239acf3 mov dword ptr [0x123c06d8], 1 */
  w32((uint32_t)(0x123c06d8), (0x1u));
  /* 1239acfd call dword ptr [0x123c32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32c0))), 0x1239ad03u);
  /* 1239ad03 jmp 0x1239ad37 */
  goto L_1239ad37;
L_1239ad05:;
  /* 1239ad05 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ad09 jne 0x1239ad1d */
  if (!C.zf) goto L_1239ad1d;
  /* 1239ad0b mov dword ptr [0x123c06d8], 1 */
  w32((uint32_t)(0x123c06d8), (0x1u));
  /* 1239ad15 call dword ptr [0x123c3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3358))), 0x1239ad1bu);
  /* 1239ad1b jmp 0x1239ad37 */
  goto L_1239ad37;
L_1239ad1d:;
  /* 1239ad1d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ad21 jne 0x1239ad34 */
  if (!C.zf) goto L_1239ad34;
  /* 1239ad23 mov dword ptr [0x123c06d8], 1 */
  w32((uint32_t)(0x123c06d8), (0x1u));
  /* 1239ad2d mov eax, dword ptr [0x123c06f8] */
  EAX = (r32((uint32_t)(0x123c06f8)));
  /* 1239ad32 jmp 0x1239ad37 */
  goto L_1239ad37;
L_1239ad34:;
  /* 1239ad34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1239ad37:;
  /* 1239ad37 pop ebp */
  EBP = (pop32());
  /* 1239ad38 ret  */
  ESPCHK(0x1239ace0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad40 @ 0x1239ad40 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1239ad40(void) {
  FTRACE(0x1239ad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239ad40 push ebp */
  push32((uint32_t)(EBP));
  /* 1239ad41 mov ebp, esp */
  EBP = (ESP);
  /* 1239ad43 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ad44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ad47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239ad4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ad4d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239ad53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239ad56 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ad5a ja 0x1239ad8a */
  if ((!C.cf&&!C.zf)) goto L_1239ad8a;
  /* 1239ad5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ad5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239ad61 mov dl, byte ptr [eax + 0x1239ada4] */
  DL = (r8((uint32_t)(EAX + 0x1239ada4)));
  /* 1239ad67 jmp dword ptr [edx*4 + 0x1239ad90] */
  switch (EDX) {
    case 0: goto L_1239ad6e;
    case 1: goto L_1239ad75;
    case 2: goto L_1239ad7c;
    case 3: goto L_1239ad83;
    case 4: goto L_1239ad8a;
    default: x86_unimpl("switch@0x1239ad67 out of table"); return;
  }
L_1239ad6e:;
  /* 1239ad6e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1239ad73 jmp 0x1239ad8c */
  goto L_1239ad8c;
L_1239ad75:;
  /* 1239ad75 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1239ad7a jmp 0x1239ad8c */
  goto L_1239ad8c;
L_1239ad7c:;
  /* 1239ad7c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1239ad81 jmp 0x1239ad8c */
  goto L_1239ad8c;
L_1239ad83:;
  /* 1239ad83 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1239ad88 jmp 0x1239ad8c */
  goto L_1239ad8c;
L_1239ad8a:;
  /* 1239ad8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239ad8c:;
  /* 1239ad8c mov esp, ebp */
  ESP = (EBP);
  /* 1239ad8e pop ebp */
  EBP = (pop32());
  /* 1239ad8f ret  */
  ESPCHK(0x1239ad40u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1239adc0 (116 bytes, 29 insns) */
void f_1239adc0(void) {
  FTRACE(0x1239adc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239adc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239adc1 mov ebp, esp */
  EBP = (ESP);
  /* 1239adc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1239adc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239adcb jmp 0x1239add6 */
  goto L_1239add6;
L_1239adcd:;
  /* 1239adcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239add0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239add3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239add6:;
  /* 1239add6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239addd jge 0x1239adeb */
  if ((C.sf==C.of)) goto L_1239adeb;
  /* 1239addf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ade2 mov byte ptr [ecx + 0x123c1d60], 0 */
  w8((uint32_t)(ECX + 0x123c1d60), (0x0u));
  /* 1239ade9 jmp 0x1239adcd */
  goto L_1239adcd;
L_1239adeb:;
  /* 1239adeb mov dword ptr [0x123c1bc4], 0 */
  w32((uint32_t)(0x123c1bc4), (0x0u));
  /* 1239adf5 mov dword ptr [0x123c1c4c], 0 */
  w32((uint32_t)(0x123c1c4c), (0x0u));
  /* 1239adff mov dword ptr [0x123c1e64], 0 */
  w32((uint32_t)(0x123c1e64), (0x0u));
  /* 1239ae09 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239ae10 jmp 0x1239ae1b */
  goto L_1239ae1b;
L_1239ae12:;
  /* 1239ae12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ae15 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ae18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239ae1b:;
  /* 1239ae1b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ae1f jge 0x1239ae30 */
  if ((C.sf==C.of)) goto L_1239ae30;
  /* 1239ae21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ae24 mov word ptr [eax*2 + 0x123c1c40], 0 */
  w16((uint32_t)(EAX*2 + 0x123c1c40), (0x0u));
  /* 1239ae2e jmp 0x1239ae12 */
  goto L_1239ae12;
L_1239ae30:;
  /* 1239ae30 mov esp, ebp */
  ESP = (EBP);
  /* 1239ae32 pop ebp */
  EBP = (pop32());
  /* 1239ae33 ret  */
  ESPCHK(0x1239adc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae40 @ 0x1239ae40 (770 bytes, 175 insns) */
void f_1239ae40(void) {
  FTRACE(0x1239ae40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239ae40 push ebp */
  push32((uint32_t)(EBP));
  /* 1239ae41 mov ebp, esp */
  EBP = (ESP);
  /* 1239ae43 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239ae49 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1239ae4f push eax */
  push32((uint32_t)(EAX));
  /* 1239ae50 mov ecx, dword ptr [0x123c1bc4] */
  ECX = (r32((uint32_t)(0x123c1bc4)));
  /* 1239ae56 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ae57 call dword ptr [0x123c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3354))), 0x1239ae5du);
  /* 1239ae5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ae60 jne 0x1239b079 */
  if (!C.zf) goto L_1239b079;
  /* 1239ae66 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1239ae70 jmp 0x1239ae81 */
  goto L_1239ae81;
L_1239ae72:;
  /* 1239ae72 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239ae78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ae7b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1239ae81:;
  /* 1239ae81 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ae8b jae 0x1239aea2 */
  if (!C.cf) goto L_1239aea2;
  /* 1239ae8d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239ae93 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1239ae99 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1239aea0 jmp 0x1239ae72 */
  goto L_1239ae72;
L_1239aea2:;
  /* 1239aea2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1239aea9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1239aeaf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239aeb2 jmp 0x1239aebd */
  goto L_1239aebd;
L_1239aeb4:;
  /* 1239aeb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239aeb7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239aeba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239aebd:;
  /* 1239aebd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239aec0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239aec2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1239aec4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239aec6 je 0x1239af08 */
  if (C.zf) goto L_1239af08;
  /* 1239aec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239aecb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239aecd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1239aecf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1239aed5 jmp 0x1239aee6 */
  goto L_1239aee6;
L_1239aed7:;
  /* 1239aed7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239aedd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239aee0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1239aee6:;
  /* 1239aee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239aee9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239aeeb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1239aeee cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239aef4 ja 0x1239af06 */
  if ((!C.cf&&!C.zf)) goto L_1239af06;
  /* 1239aef6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239aefc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1239af04 jmp 0x1239aed7 */
  goto L_1239aed7;
L_1239af06:;
  /* 1239af06 jmp 0x1239aeb4 */
  goto L_1239aeb4;
L_1239af08:;
  /* 1239af08 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239af0a mov eax, dword ptr [0x123c1e64] */
  EAX = (r32((uint32_t)(0x123c1e64)));
  /* 1239af0f push eax */
  push32((uint32_t)(EAX));
  /* 1239af10 mov ecx, dword ptr [0x123c1bc4] */
  ECX = (r32((uint32_t)(0x123c1bc4)));
  /* 1239af16 push ecx */
  push32((uint32_t)(ECX));
  /* 1239af17 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1239af1d push edx */
  push32((uint32_t)(EDX));
  /* 1239af1e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1239af23 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1239af29 push eax */
  push32((uint32_t)(EAX));
  /* 1239af2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1239af2c call 0x1239caf0 */
  push32(0x1239af31u); f_1239caf0();
  /* 1239af31 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239af34 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239af36 mov ecx, dword ptr [0x123c1bc4] */
  ECX = (r32((uint32_t)(0x123c1bc4)));
  /* 1239af3c push ecx */
  push32((uint32_t)(ECX));
  /* 1239af3d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1239af42 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1239af48 push edx */
  push32((uint32_t)(EDX));
  /* 1239af49 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1239af4e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1239af54 push eax */
  push32((uint32_t)(EAX));
  /* 1239af55 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1239af5a mov ecx, dword ptr [0x123c1e64] */
  ECX = (r32((uint32_t)(0x123c1e64)));
  /* 1239af60 push ecx */
  push32((uint32_t)(ECX));
  /* 1239af61 call 0x1239ccb0 */
  push32(0x1239af66u); f_1239ccb0();
  /* 1239af66 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239af69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239af6b mov edx, dword ptr [0x123c1bc4] */
  EDX = (r32((uint32_t)(0x123c1bc4)));
  /* 1239af71 push edx */
  push32((uint32_t)(EDX));
  /* 1239af72 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1239af77 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1239af7d push eax */
  push32((uint32_t)(EAX));
  /* 1239af7e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1239af83 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1239af89 push ecx */
  push32((uint32_t)(ECX));
  /* 1239af8a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1239af8f mov edx, dword ptr [0x123c1e64] */
  EDX = (r32((uint32_t)(0x123c1e64)));
  /* 1239af95 push edx */
  push32((uint32_t)(EDX));
  /* 1239af96 call 0x1239ccb0 */
  push32(0x1239af9bu); f_1239ccb0();
  /* 1239af9b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239af9e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1239afa8 jmp 0x1239afb9 */
  goto L_1239afb9;
L_1239afaa:;
  /* 1239afaa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239afb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239afb3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1239afb9:;
  /* 1239afb9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239afc3 jae 0x1239b074 */
  if (!C.cf) goto L_1239b074;
  /* 1239afc9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239afcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239afd1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1239afd9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1239afdc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239afde je 0x1239b016 */
  if (C.zf) goto L_1239b016;
  /* 1239afe0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239afe6 mov cl, byte ptr [eax + 0x123c1d61] */
  CL = (r8((uint32_t)(EAX + 0x123c1d61)));
  /* 1239afec or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1239afef mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239aff5 mov byte ptr [edx + 0x123c1d61], cl */
  w8((uint32_t)(EDX + 0x123c1d61), (CL));
  /* 1239affb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b001 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b007 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1239b00e mov byte ptr [eax + 0x123c1c60], dl */
  w8((uint32_t)(EAX + 0x123c1c60), (DL));
  /* 1239b014 jmp 0x1239b06f */
  goto L_1239b06f;
L_1239b016:;
  /* 1239b016 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b01c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239b01e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1239b026 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1239b029 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239b02b je 0x1239b062 */
  if (C.zf) goto L_1239b062;
  /* 1239b02d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b033 mov al, byte ptr [edx + 0x123c1d61] */
  AL = (r8((uint32_t)(EDX + 0x123c1d61)));
  /* 1239b039 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1239b03b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b041 mov byte ptr [ecx + 0x123c1d61], al */
  w8((uint32_t)(ECX + 0x123c1d61), (AL));
  /* 1239b047 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b04d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b053 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1239b05a mov byte ptr [edx + 0x123c1c60], cl */
  w8((uint32_t)(EDX + 0x123c1c60), (CL));
  /* 1239b060 jmp 0x1239b06f */
  goto L_1239b06f;
L_1239b062:;
  /* 1239b062 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b068 mov byte ptr [edx + 0x123c1c60], 0 */
  w8((uint32_t)(EDX + 0x123c1c60), (0x0u));
L_1239b06f:;
  /* 1239b06f jmp 0x1239afaa */
  goto L_1239afaa;
L_1239b074:;
  /* 1239b074 jmp 0x1239b13e */
  goto L_1239b13e;
L_1239b079:;
  /* 1239b079 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1239b083 jmp 0x1239b094 */
  goto L_1239b094;
L_1239b085:;
  /* 1239b085 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b08b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b08e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1239b094:;
  /* 1239b094 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b09e jae 0x1239b13e */
  if (!C.cf) goto L_1239b13e;
  /* 1239b0a4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b0ab jb 0x1239b0e8 */
  if (C.cf) goto L_1239b0e8;
  /* 1239b0ad cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b0b4 ja 0x1239b0e8 */
  if ((!C.cf&&!C.zf)) goto L_1239b0e8;
  /* 1239b0b6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b0bc mov dl, byte ptr [ecx + 0x123c1d61] */
  DL = (r8((uint32_t)(ECX + 0x123c1d61)));
  /* 1239b0c2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1239b0c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b0cb mov byte ptr [eax + 0x123c1d61], dl */
  w8((uint32_t)(EAX + 0x123c1d61), (DL));
  /* 1239b0d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b0d7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b0da mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b0e0 mov byte ptr [edx + 0x123c1c60], cl */
  w8((uint32_t)(EDX + 0x123c1c60), (CL));
  /* 1239b0e6 jmp 0x1239b139 */
  goto L_1239b139;
L_1239b0e8:;
  /* 1239b0e8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b0ef jb 0x1239b12c */
  if (C.cf) goto L_1239b12c;
  /* 1239b0f1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b0f8 ja 0x1239b12c */
  if ((!C.cf&&!C.zf)) goto L_1239b12c;
  /* 1239b0fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b100 mov cl, byte ptr [eax + 0x123c1d61] */
  CL = (r8((uint32_t)(EAX + 0x123c1d61)));
  /* 1239b106 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1239b109 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b10f mov byte ptr [edx + 0x123c1d61], cl */
  w8((uint32_t)(EDX + 0x123c1d61), (CL));
  /* 1239b115 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b11b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b11e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b124 mov byte ptr [ecx + 0x123c1c60], al */
  w8((uint32_t)(ECX + 0x123c1c60), (AL));
  /* 1239b12a jmp 0x1239b139 */
  goto L_1239b139;
L_1239b12c:;
  /* 1239b12c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1239b132 mov byte ptr [edx + 0x123c1c60], 0 */
  w8((uint32_t)(EDX + 0x123c1c60), (0x0u));
L_1239b139:;
  /* 1239b139 jmp 0x1239b085 */
  goto L_1239b085;
L_1239b13e:;
  /* 1239b13e mov esp, ebp */
  ESP = (EBP);
  /* 1239b140 pop ebp */
  EBP = (pop32());
  /* 1239b141 ret  */
  ESPCHK(0x1239ae40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b150 @ 0x1239b150 (23 bytes, 9 insns) */
void f_1239b150(void) {
  FTRACE(0x1239b150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239b150 push ebp */
  push32((uint32_t)(EBP));
  /* 1239b151 mov ebp, esp */
  EBP = (ESP);
  /* 1239b153 cmp dword ptr [0x123c1c4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c1c4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b15a je 0x1239b163 */
  if (C.zf) goto L_1239b163;
  /* 1239b15c mov eax, dword ptr [0x123c1bc4] */
  EAX = (r32((uint32_t)(0x123c1bc4)));
  /* 1239b161 jmp 0x1239b165 */
  goto L_1239b165;
L_1239b163:;
  /* 1239b163 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239b165:;
  /* 1239b165 pop ebp */
  EBP = (pop32());
  /* 1239b166 ret  */
  ESPCHK(0x1239b150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b170 @ 0x1239b170 (34 bytes, 10 insns) */
void f_1239b170(void) {
  FTRACE(0x1239b170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239b170 push ebp */
  push32((uint32_t)(EBP));
  /* 1239b171 mov ebp, esp */
  EBP = (ESP);
  /* 1239b173 cmp dword ptr [0x123c2010], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c2010))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b17a jne 0x1239b190 */
  if (!C.zf) goto L_1239b190;
  /* 1239b17c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1239b17e call 0x1239a990 */
  push32(0x1239b183u); f_1239a990();
  /* 1239b183 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b186 mov dword ptr [0x123c2010], 1 */
  w32((uint32_t)(0x123c2010), (0x1u));
L_1239b190:;
  /* 1239b190 pop ebp */
  EBP = (pop32());
  /* 1239b191 ret  */
  ESPCHK(0x1239b170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1a0 @ 0x1239b1a0 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1239b1a0(void) {
  FTRACE(0x1239b1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239b1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239b1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1239b1a3 push edi */
  push32((uint32_t)(EDI));
  /* 1239b1a4 push esi */
  push32((uint32_t)(ESI));
  /* 1239b1a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1239b1a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239b1ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b1ae mov eax, ecx */
  EAX = (ECX);
  /* 1239b1b0 mov edx, ecx */
  EDX = (ECX);
  /* 1239b1b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b1b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b1b6 jbe 0x1239b1c0 */
  if ((C.cf||C.zf)) goto L_1239b1c0;
  /* 1239b1b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b1ba jb 0x1239b338 */
  if (C.cf) goto L_1239b338;
L_1239b1c0:;
  /* 1239b1c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1239b1c6 jne 0x1239b1dc */
  if (!C.zf) goto L_1239b1dc;
  /* 1239b1c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239b1cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1239b1ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b1d1 jb 0x1239b1fc */
  if (C.cf) goto L_1239b1fc;
  /* 1239b1d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239b1d5 jmp dword ptr [edx*4 + 0x1239b2e8] */
  switch (EDX) {
    case 0: goto L_1239b2f8;
    case 1: goto L_1239b300;
    case 2: goto L_1239b30c;
    case 3: goto L_1239b320;
    default: x86_unimpl("switch@0x1239b1d5 out of table"); return;
  }
L_1239b1dc:;
  /* 1239b1dc mov eax, edi */
  EAX = (EDI);
  /* 1239b1de mov edx, 3 */
  EDX = (0x3u);
  /* 1239b1e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b1e6 jb 0x1239b1f4 */
  if (C.cf) goto L_1239b1f4;
  /* 1239b1e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1239b1eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b1ed jmp dword ptr [eax*4 + 0x1239b200] */
  switch (EAX) {
    case 1: goto L_1239b210;
    case 2: goto L_1239b23c;
    case 3: goto L_1239b260;
    default: x86_unimpl("switch@0x1239b1ed out of table"); return;
  }
L_1239b1f4:;
  /* 1239b1f4 jmp dword ptr [ecx*4 + 0x1239b2f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1239b2f8)))); return;
  /* 1239b1fb nop  */
  /* nop */
L_1239b1fc:;
  /* 1239b1fc jmp dword ptr [ecx*4 + 0x1239b27c] */
  switch (ECX) {
    case 0: goto L_1239b2df;
    case 1: goto L_1239b2cc;
    case 2: goto L_1239b2c4;
    case 3: goto L_1239b2bc;
    case 4: goto L_1239b2b4;
    case 5: goto L_1239b2ac;
    case 6: goto L_1239b2a4;
    case 7: goto L_1239b29c;
    default: x86_unimpl("switch@0x1239b1fc out of table"); return;
  }
  /* 1239b203 nop  */
  /* nop */
L_1239b210:;
  /* 1239b210 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b212 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239b214 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239b216 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239b219 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239b21c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239b21f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239b222 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239b225 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b228 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b22b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b22e jb 0x1239b1fc */
  if (C.cf) goto L_1239b1fc;
  /* 1239b230 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239b232 jmp dword ptr [edx*4 + 0x1239b2e8] */
  switch (EDX) {
    case 0: goto L_1239b2f8;
    case 1: goto L_1239b300;
    case 2: goto L_1239b30c;
    case 3: goto L_1239b320;
    default: x86_unimpl("switch@0x1239b232 out of table"); return;
  }
  /* 1239b239 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239b23c:;
  /* 1239b23c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b23e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239b240 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239b242 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239b245 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239b248 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239b24b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b24e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b251 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b254 jb 0x1239b1fc */
  if (C.cf) goto L_1239b1fc;
  /* 1239b256 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239b258 jmp dword ptr [edx*4 + 0x1239b2e8] */
  switch (EDX) {
    case 0: goto L_1239b2f8;
    case 1: goto L_1239b300;
    case 2: goto L_1239b30c;
    case 3: goto L_1239b320;
    default: x86_unimpl("switch@0x1239b258 out of table"); return;
  }
  /* 1239b25f nop  */
  /* nop */
L_1239b260:;
  /* 1239b260 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b262 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239b264 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239b266 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1239b267 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239b26a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1239b26b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b26e jb 0x1239b1fc */
  if (C.cf) goto L_1239b1fc;
  /* 1239b270 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239b272 jmp dword ptr [edx*4 + 0x1239b2e8] */
  switch (EDX) {
    case 0: goto L_1239b2f8;
    case 1: goto L_1239b300;
    case 2: goto L_1239b30c;
    case 3: goto L_1239b320;
    default: x86_unimpl("switch@0x1239b272 out of table"); return;
  }
  /* 1239b279 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239b29c:;
  /* 1239b29c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1239b2a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1239b2a4:;
  /* 1239b2a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1239b2a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1239b2ac:;
  /* 1239b2ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1239b2b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1239b2b4:;
  /* 1239b2b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1239b2b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1239b2bc:;
  /* 1239b2bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1239b2c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1239b2c4:;
  /* 1239b2c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1239b2c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1239b2cc:;
  /* 1239b2cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1239b2d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1239b2d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1239b2db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b2dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1239b2df:;
  /* 1239b2df jmp dword ptr [edx*4 + 0x1239b2e8] */
  switch (EDX) {
    case 0: goto L_1239b2f8;
    case 1: goto L_1239b300;
    case 2: goto L_1239b30c;
    case 3: goto L_1239b320;
    default: x86_unimpl("switch@0x1239b2df out of table"); return;
  }
  /* 1239b2e6 mov edi, edi */
  EDI = (EDI);
L_1239b2f8:;
  /* 1239b2f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b2fb pop esi */
  ESI = (pop32());
  /* 1239b2fc pop edi */
  EDI = (pop32());
  /* 1239b2fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239b2fe ret  */
  ESPCHK(0x1239b1a0u, _esp0);
  ESP += 4; return;
  /* 1239b2ff nop  */
  /* nop */
L_1239b300:;
  /* 1239b300 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239b302 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239b304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b307 pop esi */
  ESI = (pop32());
  /* 1239b308 pop edi */
  EDI = (pop32());
  /* 1239b309 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239b30a ret  */
  ESPCHK(0x1239b1a0u, _esp0);
  ESP += 4; return;
  /* 1239b30b nop  */
  /* nop */
L_1239b30c:;
  /* 1239b30c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239b30e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239b310 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239b313 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239b316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b319 pop esi */
  ESI = (pop32());
  /* 1239b31a pop edi */
  EDI = (pop32());
  /* 1239b31b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239b31c ret  */
  ESPCHK(0x1239b1a0u, _esp0);
  ESP += 4; return;
  /* 1239b31d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239b320:;
  /* 1239b320 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239b322 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239b324 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239b327 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239b32a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239b32d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239b330 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b333 pop esi */
  ESI = (pop32());
  /* 1239b334 pop edi */
  EDI = (pop32());
  /* 1239b335 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239b336 ret  */
  ESPCHK(0x1239b1a0u, _esp0);
  ESP += 4; return;
  /* 1239b337 nop  */
  /* nop */
L_1239b338:;
  /* 1239b338 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1239b33c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1239b340 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1239b346 jne 0x1239b36c */
  if (!C.zf) goto L_1239b36c;
  /* 1239b348 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239b34b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1239b34e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b351 jb 0x1239b360 */
  if (C.cf) goto L_1239b360;
  /* 1239b353 std  */
  C.df=1;
  /* 1239b354 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239b356 cld  */
  C.df=0;
  /* 1239b357 jmp dword ptr [edx*4 + 0x1239b480] */
  switch (EDX) {
    case 0: goto L_1239b490;
    case 1: goto L_1239b498;
    case 2: goto L_1239b4a8;
    case 3: goto L_1239b4bc;
    default: x86_unimpl("switch@0x1239b357 out of table"); return;
  }
  /* 1239b35e mov edi, edi */
  EDI = (EDI);
L_1239b360:;
  /* 1239b360 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239b362 jmp dword ptr [ecx*4 + 0x1239b430] */
  switch (ECX) {
    case 0: goto L_1239b477;
    default: x86_unimpl("switch@0x1239b362 out of table"); return;
  }
  /* 1239b369 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239b36c:;
  /* 1239b36c mov eax, edi */
  EAX = (EDI);
  /* 1239b36e mov edx, 3 */
  EDX = (0x3u);
  /* 1239b373 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b376 jb 0x1239b384 */
  if (C.cf) goto L_1239b384;
  /* 1239b378 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1239b37b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b37d jmp dword ptr [eax*4 + 0x1239b388] */
  switch (EAX) {
    case 1: goto L_1239b398;
    case 2: goto L_1239b3b8;
    case 3: goto L_1239b3e0;
    default: x86_unimpl("switch@0x1239b37d out of table"); return;
  }
L_1239b384:;
  /* 1239b384 jmp dword ptr [ecx*4 + 0x1239b480] */
  switch (ECX) {
    case 0: goto L_1239b490;
    case 1: goto L_1239b498;
    case 2: goto L_1239b4a8;
    case 3: goto L_1239b4bc;
    default: x86_unimpl("switch@0x1239b384 out of table"); return;
  }
  /* 1239b38b nop  */
  /* nop */
L_1239b398:;
  /* 1239b398 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239b39b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b39d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239b3a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1239b3a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239b3a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1239b3a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b3a8 jb 0x1239b360 */
  if (C.cf) goto L_1239b360;
  /* 1239b3aa std  */
  C.df=1;
  /* 1239b3ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239b3ad cld  */
  C.df=0;
  /* 1239b3ae jmp dword ptr [edx*4 + 0x1239b480] */
  switch (EDX) {
    case 0: goto L_1239b490;
    case 1: goto L_1239b498;
    case 2: goto L_1239b4a8;
    case 3: goto L_1239b4bc;
    default: x86_unimpl("switch@0x1239b3ae out of table"); return;
  }
  /* 1239b3b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239b3b8:;
  /* 1239b3b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239b3bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b3bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239b3c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239b3c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239b3c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239b3c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b3cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b3cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b3d2 jb 0x1239b360 */
  if (C.cf) goto L_1239b360;
  /* 1239b3d4 std  */
  C.df=1;
  /* 1239b3d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239b3d7 cld  */
  C.df=0;
  /* 1239b3d8 jmp dword ptr [edx*4 + 0x1239b480] */
  switch (EDX) {
    case 0: goto L_1239b490;
    case 1: goto L_1239b498;
    case 2: goto L_1239b4a8;
    case 3: goto L_1239b4bc;
    default: x86_unimpl("switch@0x1239b3d8 out of table"); return;
  }
  /* 1239b3df nop  */
  /* nop */
L_1239b3e0:;
  /* 1239b3e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239b3e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b3e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239b3e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239b3eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239b3ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239b3f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239b3f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239b3f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b3fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b3fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b400 jb 0x1239b360 */
  if (C.cf) goto L_1239b360;
  /* 1239b406 std  */
  C.df=1;
  /* 1239b407 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239b409 cld  */
  C.df=0;
  /* 1239b40a jmp dword ptr [edx*4 + 0x1239b480] */
  switch (EDX) {
    case 0: goto L_1239b490;
    case 1: goto L_1239b498;
    case 2: goto L_1239b4a8;
    case 3: goto L_1239b4bc;
    default: x86_unimpl("switch@0x1239b40a out of table"); return;
  }
  /* 1239b411 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1239b414 xor al, 0xb4 */
  { uint32_t _r=(AL)^(0xb4u); AL = (_r); fl_logic(_r,8); }
  /* 1239b416 cmp dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b418 cmp al, 0xb4 */
  { uint32_t _a=(AL),_b=(0xb4u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1239b41a cmp dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b41c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1239b41d mov ah, 0x39 */
  AH = (0x39u);
  /* 1239b41f adc cl, byte ptr [esp + esi*4 + 0x39] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(ESP + ESI*4 + 0x39))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1239b423 adc dl, byte ptr [esp + esi*4 + 0x39] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ESP + ESI*4 + 0x39))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1239b427 adc bl, byte ptr [esp + esi*4 + 0x39] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ESP + ESI*4 + 0x39))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1239b42b adc ah, byte ptr [esp + esi*4 + 0x39] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ESP + ESI*4 + 0x39))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1239b434 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1239b438 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1239b43c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1239b440 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1239b444 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1239b448 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1239b44c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1239b450 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1239b454 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1239b458 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1239b45c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1239b460 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1239b464 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1239b468 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1239b46c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1239b473 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b475 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1239b477:;
  /* 1239b477 jmp dword ptr [edx*4 + 0x1239b480] */
  switch (EDX) {
    case 0: goto L_1239b490;
    case 1: goto L_1239b498;
    case 2: goto L_1239b4a8;
    case 3: goto L_1239b4bc;
    default: x86_unimpl("switch@0x1239b477 out of table"); return;
  }
  /* 1239b47e mov edi, edi */
  EDI = (EDI);
L_1239b490:;
  /* 1239b490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b493 pop esi */
  ESI = (pop32());
  /* 1239b494 pop edi */
  EDI = (pop32());
  /* 1239b495 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239b496 ret  */
  ESPCHK(0x1239b1a0u, _esp0);
  ESP += 4; return;
  /* 1239b497 nop  */
  /* nop */
L_1239b498:;
  /* 1239b498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239b49b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239b49e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b4a1 pop esi */
  ESI = (pop32());
  /* 1239b4a2 pop edi */
  EDI = (pop32());
  /* 1239b4a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239b4a4 ret  */
  ESPCHK(0x1239b1a0u, _esp0);
  ESP += 4; return;
  /* 1239b4a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239b4a8:;
  /* 1239b4a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239b4ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239b4ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239b4b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239b4b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b4b7 pop esi */
  ESI = (pop32());
  /* 1239b4b8 pop edi */
  EDI = (pop32());
  /* 1239b4b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239b4ba ret  */
  ESPCHK(0x1239b1a0u, _esp0);
  ESP += 4; return;
  /* 1239b4bb nop  */
  /* nop */
L_1239b4bc:;
  /* 1239b4bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239b4bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239b4c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239b4c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239b4c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239b4cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239b4ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b4d1 pop esi */
  ESI = (pop32());
  /* 1239b4d2 pop edi */
  EDI = (pop32());
  /* 1239b4d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239b4d4 ret  */
  ESPCHK(0x1239b1a0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1239b4e0 (104 bytes, 43 insns) */
void f_1239b4e0(void) {
  FTRACE(0x1239b4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239b4e0 push ebx */
  push32((uint32_t)(EBX));
  /* 1239b4e1 push esi */
  push32((uint32_t)(ESI));
  /* 1239b4e2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1239b4e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239b4e8 jne 0x1239b502 */
  if (!C.zf) goto L_1239b502;
  /* 1239b4ea mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1239b4ee mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1239b4f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b4f4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1239b4f6 mov ebx, eax */
  EBX = (EAX);
  /* 1239b4f8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1239b4fc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1239b4fe mov edx, ebx */
  EDX = (EBX);
  /* 1239b500 jmp 0x1239b543 */
  goto L_1239b543;
L_1239b502:;
  /* 1239b502 mov ecx, eax */
  ECX = (EAX);
  /* 1239b504 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1239b508 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1239b50c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1239b510:;
  /* 1239b510 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1239b512 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1239b514 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1239b516 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1239b518 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239b51a jne 0x1239b510 */
  if (!C.zf) goto L_1239b510;
  /* 1239b51c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1239b51e mov esi, eax */
  ESI = (EAX);
  /* 1239b520 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1239b524 mov ecx, eax */
  ECX = (EAX);
  /* 1239b526 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1239b52a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1239b52c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b52e jb 0x1239b53e */
  if (C.cf) goto L_1239b53e;
  /* 1239b530 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b534 ja 0x1239b53e */
  if ((!C.cf&&!C.zf)) goto L_1239b53e;
  /* 1239b536 jb 0x1239b53f */
  if (C.cf) goto L_1239b53f;
  /* 1239b538 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b53c jbe 0x1239b53f */
  if ((C.cf||C.zf)) goto L_1239b53f;
L_1239b53e:;
  /* 1239b53e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1239b53f:;
  /* 1239b53f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b541 mov eax, esi */
  EAX = (ESI);
L_1239b543:;
  /* 1239b543 pop esi */
  ESI = (pop32());
  /* 1239b544 pop ebx */
  EBX = (pop32());
  /* 1239b545 ret 0x10 */
  ESPCHK(0x1239b4e0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1239b550 (117 bytes, 44 insns) */
void f_1239b550(void) {
  FTRACE(0x1239b550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239b550 push ebx */
  push32((uint32_t)(EBX));
  /* 1239b551 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1239b555 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239b557 jne 0x1239b571 */
  if (!C.zf) goto L_1239b571;
  /* 1239b559 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1239b55d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1239b561 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b563 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1239b565 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1239b569 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1239b56b mov eax, edx */
  EAX = (EDX);
  /* 1239b56d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239b56f jmp 0x1239b5c1 */
  goto L_1239b5c1;
L_1239b571:;
  /* 1239b571 mov ecx, eax */
  ECX = (EAX);
  /* 1239b573 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1239b577 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1239b57b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1239b57f:;
  /* 1239b57f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1239b581 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1239b583 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1239b585 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1239b587 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239b589 jne 0x1239b57f */
  if (!C.zf) goto L_1239b57f;
  /* 1239b58b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1239b58d mov ecx, eax */
  ECX = (EAX);
  /* 1239b58f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1239b593 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1239b594 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1239b598 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b59a jb 0x1239b5aa */
  if (C.cf) goto L_1239b5aa;
  /* 1239b59c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b5a0 ja 0x1239b5aa */
  if ((!C.cf&&!C.zf)) goto L_1239b5aa;
  /* 1239b5a2 jb 0x1239b5b2 */
  if (C.cf) goto L_1239b5b2;
  /* 1239b5a4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b5a8 jbe 0x1239b5b2 */
  if ((C.cf||C.zf)) goto L_1239b5b2;
L_1239b5aa:;
  /* 1239b5aa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b5ae sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1239b5b2:;
  /* 1239b5b2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b5b6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b5ba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239b5bc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239b5be sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1239b5c1:;
  /* 1239b5c1 pop ebx */
  EBX = (pop32());
  /* 1239b5c2 ret 0x10 */
  ESPCHK(0x1239b550u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b5d0 @ 0x1239b5d0 (628 bytes, 214 insns) */
void f_1239b5d0(void) {
  FTRACE(0x1239b5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239b5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239b5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1239b5d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b5d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1239b5d7 push esi */
  push32((uint32_t)(ESI));
  /* 1239b5d8 push edi */
  push32((uint32_t)(EDI));
L_1239b5d9:;
  /* 1239b5d9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b5dd jne 0x1239b5fd */
  if (!C.zf) goto L_1239b5fd;
  /* 1239b5df push 0x123bc0dc */
  push32((uint32_t)(0x123bc0dcu));
  /* 1239b5e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239b5e6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1239b5e8 push 0x123bc0d0 */
  push32((uint32_t)(0x123bc0d0u));
  /* 1239b5ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1239b5ef call 0x12393980 */
  push32(0x1239b5f4u); f_12393980();
  /* 1239b5f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b5f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b5fa jne 0x1239b5fd */
  if (!C.zf) goto L_1239b5fd;
  /* 1239b5fc int3  */
  x86_unimpl("int3 @ 0x1239b5fc");
L_1239b5fd:;
  /* 1239b5fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239b5ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239b601 jne 0x1239b5d9 */
  if (!C.zf) goto L_1239b5d9;
  /* 1239b603 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239b606 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239b609 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b60c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1239b60f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1239b612 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b615 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239b618 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1239b61e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239b620 je 0x1239b62f */
  if (C.zf) goto L_1239b62f;
  /* 1239b622 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b625 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239b628 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1239b62b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239b62d je 0x1239b645 */
  if (C.zf) goto L_1239b645;
L_1239b62f:;
  /* 1239b62f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b632 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1239b635 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1239b637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b63a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1239b63d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239b640 jmp 0x1239b83d */
  goto L_1239b83d;
L_1239b645:;
  /* 1239b645 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b648 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1239b64b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1239b64e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239b650 je 0x1239b69c */
  if (C.zf) goto L_1239b69c;
  /* 1239b652 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b655 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1239b65c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b65f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1239b662 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1239b665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239b667 je 0x1239b685 */
  if (C.zf) goto L_1239b685;
  /* 1239b669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b66c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b66f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239b672 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1239b674 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b677 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239b67a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1239b67d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b680 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1239b683 jmp 0x1239b69c */
  goto L_1239b69c;
L_1239b685:;
  /* 1239b685 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b688 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239b68b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1239b68e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b691 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1239b694 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239b697 jmp 0x1239b83d */
  goto L_1239b83d;
L_1239b69c:;
  /* 1239b69c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b69f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239b6a2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1239b6a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b6a8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1239b6ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b6ae mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239b6b1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1239b6b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b6b7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1239b6ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b6bd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1239b6c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239b6cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239b6ce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1239b6d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b6d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239b6d7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1239b6dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239b6df jne 0x1239b70f */
  if (!C.zf) goto L_1239b70f;
  /* 1239b6e1 cmp dword ptr [ebp - 8], 0x123bf140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x123bf140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b6e8 je 0x1239b6f3 */
  if (C.zf) goto L_1239b6f3;
  /* 1239b6ea cmp dword ptr [ebp - 8], 0x123bf160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x123bf160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b6f1 jne 0x1239b703 */
  if (!C.zf) goto L_1239b703;
L_1239b6f3:;
  /* 1239b6f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239b6f6 push edx */
  push32((uint32_t)(EDX));
  /* 1239b6f7 call 0x1239d540 */
  push32(0x1239b6fcu); f_1239d540();
  /* 1239b6fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b6ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239b701 jne 0x1239b70f */
  if (!C.zf) goto L_1239b70f;
L_1239b703:;
  /* 1239b703 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b706 push eax */
  push32((uint32_t)(EAX));
  /* 1239b707 call 0x1239d470 */
  push32(0x1239b70cu); f_1239d470();
  /* 1239b70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239b70f:;
  /* 1239b70f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b712 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239b715 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1239b71b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239b71d je 0x1239b7fb */
  if (C.zf) goto L_1239b7fb;
L_1239b723:;
  /* 1239b723 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b726 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b729 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1239b72b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b72e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239b730 jge 0x1239b753 */
  if ((C.sf==C.of)) goto L_1239b753;
  /* 1239b732 push 0x123bc090 */
  push32((uint32_t)(0x123bc090u));
  /* 1239b737 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239b739 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1239b73e push 0x123bc0d0 */
  push32((uint32_t)(0x123bc0d0u));
  /* 1239b743 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239b745 call 0x12393980 */
  push32(0x1239b74au); f_12393980();
  /* 1239b74a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b74d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b750 jne 0x1239b753 */
  if (!C.zf) goto L_1239b753;
  /* 1239b752 int3  */
  x86_unimpl("int3 @ 0x1239b752");
L_1239b753:;
  /* 1239b753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239b755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239b757 jne 0x1239b723 */
  if (!C.zf) goto L_1239b723;
  /* 1239b759 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b75c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b75f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1239b761 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b764 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239b767 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b76a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1239b76d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b770 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b773 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1239b775 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b778 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1239b77b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b77e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b781 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1239b784 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b788 jle 0x1239b7a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1239b7a6;
  /* 1239b78a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239b78d push ecx */
  push32((uint32_t)(ECX));
  /* 1239b78e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b791 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239b794 push eax */
  push32((uint32_t)(EAX));
  /* 1239b795 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239b798 push ecx */
  push32((uint32_t)(ECX));
  /* 1239b799 call 0x1239d160 */
  push32(0x1239b79eu); f_1239d160();
  /* 1239b79e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b7a1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1239b7a4 jmp 0x1239b7ee */
  goto L_1239b7ee;
L_1239b7a6:;
  /* 1239b7a6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b7aa je 0x1239b7c9 */
  if (C.zf) goto L_1239b7c9;
  /* 1239b7ac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239b7af sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1239b7b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239b7b5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1239b7b8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239b7bb mov ecx, dword ptr [edx*4 + 0x123c1ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 1239b7c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b7c4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1239b7c7 jmp 0x1239b7d0 */
  goto L_1239b7d0;
L_1239b7c9:;
  /* 1239b7c9 mov dword ptr [ebp - 0x14], 0x123bea60 */
  w32((uint32_t)(EBP + -0x14), (0x123bea60u));
L_1239b7d0:;
  /* 1239b7d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239b7d3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1239b7d7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1239b7da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239b7dc je 0x1239b7ee */
  if (C.zf) goto L_1239b7ee;
  /* 1239b7de push 2 */
  push32((uint32_t)(0x2u));
  /* 1239b7e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239b7e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239b7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1239b7e6 call 0x1239d010 */
  push32(0x1239b7ebu); f_1239d010();
  /* 1239b7eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239b7ee:;
  /* 1239b7ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b7f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239b7f4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1239b7f7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1239b7f9 jmp 0x1239b819 */
  goto L_1239b819;
L_1239b7fb:;
  /* 1239b7fb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1239b802 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239b805 push edx */
  push32((uint32_t)(EDX));
  /* 1239b806 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1239b809 push eax */
  push32((uint32_t)(EAX));
  /* 1239b80a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239b80d push ecx */
  push32((uint32_t)(ECX));
  /* 1239b80e call 0x1239d160 */
  push32(0x1239b813u); f_1239d160();
  /* 1239b813 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b816 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1239b819:;
  /* 1239b819 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239b81c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b81f je 0x1239b835 */
  if (C.zf) goto L_1239b835;
  /* 1239b821 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b824 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239b827 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1239b82a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b82d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1239b830 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239b833 jmp 0x1239b83d */
  goto L_1239b83d;
L_1239b835:;
  /* 1239b835 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b838 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1239b83d:;
  /* 1239b83d pop edi */
  EDI = (pop32());
  /* 1239b83e pop esi */
  ESI = (pop32());
  /* 1239b83f pop ebx */
  EBX = (pop32());
  /* 1239b840 mov esp, ebp */
  ESP = (EBP);
  /* 1239b842 pop ebp */
  EBP = (pop32());
  /* 1239b843 ret  */
  ESPCHK(0x1239b5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b850 @ 0x1239b850 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1239b850(void) {
  FTRACE(0x1239b850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239b850 push ebp */
  push32((uint32_t)(EBP));
  /* 1239b851 mov ebp, esp */
  EBP = (ESP);
  /* 1239b853 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b859 push ebx */
  push32((uint32_t)(EBX));
  /* 1239b85a push esi */
  push32((uint32_t)(ESI));
  /* 1239b85b push edi */
  push32((uint32_t)(EDI));
  /* 1239b85c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1239b863 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1239b86d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1239b874:;
  /* 1239b874 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239b877 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1239b879 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1239b87c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239b880 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239b883 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b886 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1239b889 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239b88b je 0x1239c467 */
  if (C.zf) goto L_1239c467;
  /* 1239b891 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b898 jl 0x1239c467 */
  if ((C.sf!=C.of)) goto L_1239c467;
  /* 1239b89e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239b8a2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b8a5 jl 0x1239b8c6 */
  if ((C.sf!=C.of)) goto L_1239b8c6;
  /* 1239b8a7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239b8ab cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b8ae jg 0x1239b8c6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1239b8c6;
  /* 1239b8b0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239b8b4 movsx ecx, byte ptr [eax + 0x123bc0c8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x123bc0c8))));
  /* 1239b8bb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1239b8be mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1239b8c4 jmp 0x1239b8d0 */
  goto L_1239b8d0;
L_1239b8c6:;
  /* 1239b8c6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1239b8d0:;
  /* 1239b8d0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1239b8d6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1239b8d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239b8dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239b8df movsx edx, byte ptr [ecx + eax*8 + 0x123bc0e8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x123bc0e8))));
  /* 1239b8e7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1239b8ea mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1239b8ed mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239b8f0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1239b8f6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b8fd ja 0x1239c462 */
  if ((!C.cf&&!C.zf)) goto L_1239c462;
  /* 1239b903 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1239b909 jmp dword ptr [ecx*4 + 0x1239c474] */
  switch (ECX) {
    case 0: goto L_1239b910;
    case 1: goto L_1239b9aa;
    case 2: goto L_1239b9ec;
    case 3: goto L_1239ba5b;
    case 4: goto L_1239bab3;
    case 5: goto L_1239bac2;
    case 6: goto L_1239bb0e;
    case 7: goto L_1239bba1;
    case 8: goto L_1239ba38;
    case 9: goto L_1239ba43;
    case 10: goto L_1239ba2e;
    case 11: goto L_1239ba23;
    case 12: goto L_1239ba4e;
    case 13: goto L_1239ba56;
    default: x86_unimpl("switch@0x1239b909 out of table"); return;
  }
L_1239b910:;
  /* 1239b910 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1239b917 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239b91a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239b920 mov eax, dword ptr [0x123bec98] */
  EAX = (r32((uint32_t)(0x123bec98)));
  /* 1239b925 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239b927 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1239b92b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1239b931 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239b933 je 0x1239b98d */
  if (C.zf) goto L_1239b98d;
  /* 1239b935 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1239b93b push edx */
  push32((uint32_t)(EDX));
  /* 1239b93c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b93f push eax */
  push32((uint32_t)(EAX));
  /* 1239b940 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239b944 push ecx */
  push32((uint32_t)(ECX));
  /* 1239b945 call 0x1239c580 */
  push32(0x1239b94au); f_1239c580();
  /* 1239b94a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b94d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239b950 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1239b952 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1239b955 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239b958 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b95b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1239b95e:;
  /* 1239b95e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239b962 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239b964 jne 0x1239b987 */
  if (!C.zf) goto L_1239b987;
  /* 1239b966 push 0x123bc168 */
  push32((uint32_t)(0x123bc168u));
  /* 1239b96b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239b96d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1239b972 push 0x123bc15c */
  push32((uint32_t)(0x123bc15cu));
  /* 1239b977 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239b979 call 0x12393980 */
  push32(0x1239b97eu); f_12393980();
  /* 1239b97e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b981 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239b984 jne 0x1239b987 */
  if (!C.zf) goto L_1239b987;
  /* 1239b986 int3  */
  x86_unimpl("int3 @ 0x1239b986");
L_1239b987:;
  /* 1239b987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239b989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239b98b jne 0x1239b95e */
  if (!C.zf) goto L_1239b95e;
L_1239b98d:;
  /* 1239b98d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1239b993 push ecx */
  push32((uint32_t)(ECX));
  /* 1239b994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239b997 push edx */
  push32((uint32_t)(EDX));
  /* 1239b998 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239b99c push eax */
  push32((uint32_t)(EAX));
  /* 1239b99d call 0x1239c580 */
  push32(0x1239b9a2u); f_1239c580();
  /* 1239b9a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239b9a5 jmp 0x1239c462 */
  goto L_1239c462;
L_1239b9aa:;
  /* 1239b9aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239b9b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239b9b4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1239b9ba mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1239b9c0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1239b9c6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1239b9cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1239b9cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239b9d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1239b9e0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1239b9e7 jmp 0x1239c462 */
  goto L_1239c462;
L_1239b9ec:;
  /* 1239b9ec movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239b9f0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1239b9f6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1239b9fc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239b9ff mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1239ba05 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ba0c ja 0x1239ba56 */
  if ((!C.cf&&!C.zf)) goto L_1239ba56;
  /* 1239ba0e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1239ba14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ba16 mov al, byte ptr [ecx + 0x1239c4ac] */
  AL = (r8((uint32_t)(ECX + 0x1239c4ac)));
  /* 1239ba1c jmp dword ptr [eax*4 + 0x1239c494] */
  switch (EAX) {
    case 0: goto L_1239ba38;
    case 1: goto L_1239ba43;
    case 2: goto L_1239ba2e;
    case 3: goto L_1239ba23;
    case 4: goto L_1239ba4e;
    case 5: goto L_1239ba56;
    default: x86_unimpl("switch@0x1239ba1c out of table"); return;
  }
L_1239ba23:;
  /* 1239ba23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ba26 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1239ba29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239ba2c jmp 0x1239ba56 */
  goto L_1239ba56;
L_1239ba2e:;
  /* 1239ba2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ba31 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1239ba33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239ba36 jmp 0x1239ba56 */
  goto L_1239ba56;
L_1239ba38:;
  /* 1239ba38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ba3b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1239ba3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239ba41 jmp 0x1239ba56 */
  goto L_1239ba56;
L_1239ba43:;
  /* 1239ba43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ba46 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1239ba49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239ba4c jmp 0x1239ba56 */
  goto L_1239ba56;
L_1239ba4e:;
  /* 1239ba4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ba51 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1239ba53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239ba56:;
  /* 1239ba56 jmp 0x1239c462 */
  goto L_1239c462;
L_1239ba5b:;
  /* 1239ba5b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239ba5f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ba62 jne 0x1239ba97 */
  if (!C.zf) goto L_1239ba97;
  /* 1239ba64 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1239ba67 push edx */
  push32((uint32_t)(EDX));
  /* 1239ba68 call 0x1239c690 */
  push32(0x1239ba6du); f_1239c690();
  /* 1239ba6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ba70 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1239ba76 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ba7d jge 0x1239ba95 */
  if ((C.sf==C.of)) goto L_1239ba95;
  /* 1239ba7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ba82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1239ba84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239ba87 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1239ba8d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239ba8f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1239ba95:;
  /* 1239ba95 jmp 0x1239baae */
  goto L_1239baae;
L_1239ba97:;
  /* 1239ba97 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1239ba9d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239baa0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239baa4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1239baa8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1239baae:;
  /* 1239baae jmp 0x1239c462 */
  goto L_1239c462;
L_1239bab3:;
  /* 1239bab3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1239babd jmp 0x1239c462 */
  goto L_1239c462;
L_1239bac2:;
  /* 1239bac2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239bac6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bac9 jne 0x1239baf2 */
  if (!C.zf) goto L_1239baf2;
  /* 1239bacb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1239bace push eax */
  push32((uint32_t)(EAX));
  /* 1239bacf call 0x1239c690 */
  push32(0x1239bad4u); f_1239c690();
  /* 1239bad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bad7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1239badd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bae4 jge 0x1239baf0 */
  if ((C.sf==C.of)) goto L_1239baf0;
  /* 1239bae6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1239baf0:;
  /* 1239baf0 jmp 0x1239bb09 */
  goto L_1239bb09;
L_1239baf2:;
  /* 1239baf2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1239baf8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239bafb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239baff lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1239bb03 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1239bb09:;
  /* 1239bb09 jmp 0x1239c462 */
  goto L_1239c462;
L_1239bb0e:;
  /* 1239bb0e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239bb12 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1239bb18 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1239bb1e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239bb21 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1239bb27 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bb2e ja 0x1239bb9c */
  if ((!C.cf&&!C.zf)) goto L_1239bb9c;
  /* 1239bb30 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1239bb36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239bb38 mov al, byte ptr [ecx + 0x1239c4d1] */
  AL = (r8((uint32_t)(ECX + 0x1239c4d1)));
  /* 1239bb3e jmp dword ptr [eax*4 + 0x1239c4bd] */
  switch (EAX) {
    case 0: goto L_1239bb50;
    case 1: goto L_1239bb89;
    case 2: goto L_1239bb45;
    case 3: goto L_1239bb93;
    case 4: goto L_1239bb9c;
    default: x86_unimpl("switch@0x1239bb3e out of table"); return;
  }
L_1239bb45:;
  /* 1239bb45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bb48 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1239bb4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239bb4e jmp 0x1239bb9c */
  goto L_1239bb9c;
L_1239bb50:;
  /* 1239bb50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239bb53 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239bb56 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bb59 jne 0x1239bb7b */
  if (!C.zf) goto L_1239bb7b;
  /* 1239bb5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239bb5e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1239bb62 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bb65 jne 0x1239bb7b */
  if (!C.zf) goto L_1239bb7b;
  /* 1239bb67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239bb6a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bb6d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1239bb70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bb73 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1239bb76 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239bb79 jmp 0x1239bb87 */
  goto L_1239bb87;
L_1239bb7b:;
  /* 1239bb7b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1239bb82 jmp 0x1239b910 */
  goto L_1239b910;
L_1239bb87:;
  /* 1239bb87 jmp 0x1239bb9c */
  goto L_1239bb9c;
L_1239bb89:;
  /* 1239bb89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bb8c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1239bb8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239bb91 jmp 0x1239bb9c */
  goto L_1239bb9c;
L_1239bb93:;
  /* 1239bb93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bb96 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1239bb99 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1239bb9c:;
  /* 1239bb9c jmp 0x1239c462 */
  goto L_1239c462;
L_1239bba1:;
  /* 1239bba1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239bba5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1239bbab mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1239bbb1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239bbb4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1239bbba cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bbc1 ja 0x1239c287 */
  if ((!C.cf&&!C.zf)) goto L_1239c287;
  /* 1239bbc7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1239bbcd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239bbcf mov cl, byte ptr [edx + 0x1239c53c] */
  CL = (r8((uint32_t)(EDX + 0x1239c53c)));
  /* 1239bbd5 jmp dword ptr [ecx*4 + 0x1239c500] */
  switch (ECX) {
    case 0: goto L_1239bbdc;
    case 1: goto L_1239be70;
    case 2: goto L_1239bd00;
    case 3: goto L_1239bfa9;
    case 4: goto L_1239bc6b;
    case 5: goto L_1239bbf1;
    case 6: goto L_1239bf7b;
    case 7: goto L_1239be80;
    case 8: goto L_1239be25;
    case 9: goto L_1239bff5;
    case 10: goto L_1239bf9f;
    case 11: goto L_1239bd16;
    case 12: goto L_1239bf93;
    case 13: goto L_1239bfb5;
    case 14: goto L_1239c287;
    default: x86_unimpl("switch@0x1239bbd5 out of table"); return;
  }
L_1239bbdc:;
  /* 1239bbdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bbdf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1239bbe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239bbe6 jne 0x1239bbf1 */
  if (!C.zf) goto L_1239bbf1;
  /* 1239bbe8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bbeb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1239bbee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1239bbf1:;
  /* 1239bbf1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bbf4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1239bbfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239bbfc je 0x1239bc37 */
  if (C.zf) goto L_1239bc37;
  /* 1239bbfe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1239bc01 push eax */
  push32((uint32_t)(EAX));
  /* 1239bc02 call 0x1239c6d0 */
  push32(0x1239bc07u); f_1239c6d0();
  /* 1239bc07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bc0a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1239bc0e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1239bc12 push ecx */
  push32((uint32_t)(ECX));
  /* 1239bc13 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1239bc19 push edx */
  push32((uint32_t)(EDX));
  /* 1239bc1a call 0x1239d7b0 */
  push32(0x1239bc1fu); f_1239d7b0();
  /* 1239bc1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bc22 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1239bc25 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bc29 jge 0x1239bc35 */
  if ((C.sf==C.of)) goto L_1239bc35;
  /* 1239bc2b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1239bc35:;
  /* 1239bc35 jmp 0x1239bc5d */
  goto L_1239bc5d;
L_1239bc37:;
  /* 1239bc37 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1239bc3a push eax */
  push32((uint32_t)(EAX));
  /* 1239bc3b call 0x1239c690 */
  push32(0x1239bc40u); f_1239c690();
  /* 1239bc40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bc43 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1239bc4a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1239bc50 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1239bc56 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1239bc5d:;
  /* 1239bc5d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1239bc63 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1239bc66 jmp 0x1239c287 */
  goto L_1239c287;
L_1239bc6b:;
  /* 1239bc6b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1239bc6e push eax */
  push32((uint32_t)(EAX));
  /* 1239bc6f call 0x1239c690 */
  push32(0x1239bc74u); f_1239c690();
  /* 1239bc74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bc77 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1239bc7d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bc84 je 0x1239bc92 */
  if (C.zf) goto L_1239bc92;
  /* 1239bc86 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1239bc8c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bc90 jne 0x1239bcac */
  if (!C.zf) goto L_1239bcac;
L_1239bc92:;
  /* 1239bc92 mov edx, dword ptr [0x123befb0] */
  EDX = (r32((uint32_t)(0x123befb0)));
  /* 1239bc98 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1239bc9b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bc9e push eax */
  push32((uint32_t)(EAX));
  /* 1239bc9f call 0x123976f0 */
  push32(0x1239bca4u); f_123976f0();
  /* 1239bca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bca7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1239bcaa jmp 0x1239bcfb */
  goto L_1239bcfb;
L_1239bcac:;
  /* 1239bcac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bcaf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1239bcb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239bcb7 je 0x1239bcdc */
  if (C.zf) goto L_1239bcdc;
  /* 1239bcb9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1239bcbf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1239bcc2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1239bcc5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1239bccb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1239bcce shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1239bcd0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1239bcd3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1239bcda jmp 0x1239bcfb */
  goto L_1239bcfb;
L_1239bcdc:;
  /* 1239bcdc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1239bce3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1239bce9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1239bcec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1239bcef mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1239bcf5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1239bcf8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1239bcfb:;
  /* 1239bcfb jmp 0x1239c287 */
  goto L_1239c287;
L_1239bd00:;
  /* 1239bd00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bd03 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1239bd09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239bd0b jne 0x1239bd16 */
  if (!C.zf) goto L_1239bd16;
  /* 1239bd0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bd10 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1239bd13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239bd16:;
  /* 1239bd16 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bd1d jne 0x1239bd2b */
  if (!C.zf) goto L_1239bd2b;
  /* 1239bd1f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1239bd29 jmp 0x1239bd37 */
  goto L_1239bd37;
L_1239bd2b:;
  /* 1239bd2b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1239bd31 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1239bd37:;
  /* 1239bd37 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1239bd3d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1239bd43 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1239bd46 push edx */
  push32((uint32_t)(EDX));
  /* 1239bd47 call 0x1239c690 */
  push32(0x1239bd4cu); f_1239c690();
  /* 1239bd4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bd4f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1239bd52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bd55 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1239bd5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239bd5c je 0x1239bdc6 */
  if (C.zf) goto L_1239bdc6;
  /* 1239bd5e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bd62 jne 0x1239bd6d */
  if (!C.zf) goto L_1239bd6d;
  /* 1239bd64 mov ecx, dword ptr [0x123befb4] */
  ECX = (r32((uint32_t)(0x123befb4)));
  /* 1239bd6a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1239bd6d:;
  /* 1239bd6d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1239bd74 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bd77 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1239bd7d:;
  /* 1239bd7d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1239bd83 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1239bd89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239bd8c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1239bd92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239bd94 je 0x1239bdb6 */
  if (C.zf) goto L_1239bdb6;
  /* 1239bd96 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1239bd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239bd9e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1239bda1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239bda3 je 0x1239bdb6 */
  if (C.zf) goto L_1239bdb6;
  /* 1239bda5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1239bdab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bdae mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1239bdb4 jmp 0x1239bd7d */
  goto L_1239bd7d;
L_1239bdb6:;
  /* 1239bdb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1239bdbc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239bdbf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1239bdc1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1239bdc4 jmp 0x1239be20 */
  goto L_1239be20;
L_1239bdc6:;
  /* 1239bdc6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bdca jne 0x1239bdd4 */
  if (!C.zf) goto L_1239bdd4;
  /* 1239bdcc mov eax, dword ptr [0x123befb0] */
  EAX = (r32((uint32_t)(0x123befb0)));
  /* 1239bdd1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1239bdd4:;
  /* 1239bdd4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bdd7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1239bddd:;
  /* 1239bddd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1239bde3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1239bde9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239bdec mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1239bdf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239bdf4 je 0x1239be14 */
  if (C.zf) goto L_1239be14;
  /* 1239bdf6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1239bdfc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239bdff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239be01 je 0x1239be14 */
  if (C.zf) goto L_1239be14;
  /* 1239be03 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1239be09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239be0c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1239be12 jmp 0x1239bddd */
  goto L_1239bddd;
L_1239be14:;
  /* 1239be14 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1239be1a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239be1d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1239be20:;
  /* 1239be20 jmp 0x1239c287 */
  goto L_1239c287;
L_1239be25:;
  /* 1239be25 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1239be28 push edx */
  push32((uint32_t)(EDX));
  /* 1239be29 call 0x1239c690 */
  push32(0x1239be2eu); f_1239c690();
  /* 1239be2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239be31 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1239be37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239be3a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1239be3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239be3f je 0x1239be53 */
  if (C.zf) goto L_1239be53;
  /* 1239be41 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1239be47 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1239be4e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1239be51 jmp 0x1239be61 */
  goto L_1239be61;
L_1239be53:;
  /* 1239be53 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1239be59 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1239be5f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1239be61:;
  /* 1239be61 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1239be6b jmp 0x1239c287 */
  goto L_1239c287;
L_1239be70:;
  /* 1239be70 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1239be77 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1239be7a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1239be7d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1239be80:;
  /* 1239be80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239be83 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1239be85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239be88 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1239be8e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1239be91 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239be98 jge 0x1239bea6 */
  if ((C.sf==C.of)) goto L_1239bea6;
  /* 1239be9a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1239bea4 jmp 0x1239bec2 */
  goto L_1239bec2;
L_1239bea6:;
  /* 1239bea6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bead jne 0x1239bec2 */
  if (!C.zf) goto L_1239bec2;
  /* 1239beaf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239beb3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239beb6 jne 0x1239bec2 */
  if (!C.zf) goto L_1239bec2;
  /* 1239beb8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1239bec2:;
  /* 1239bec2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239bec5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bec8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1239becb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239bece sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239bed1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239bed3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1239bed6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1239bedc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1239bee2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239bee5 push ecx */
  push32((uint32_t)(ECX));
  /* 1239bee6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1239beec push edx */
  push32((uint32_t)(EDX));
  /* 1239beed movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239bef1 push eax */
  push32((uint32_t)(EAX));
  /* 1239bef2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bef5 push ecx */
  push32((uint32_t)(ECX));
  /* 1239bef6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1239befc push edx */
  push32((uint32_t)(EDX));
  /* 1239befd call dword ptr [0x123bf3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123bf3a0))), 0x1239bf03u);
  /* 1239bf03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bf06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bf09 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1239bf0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239bf10 je 0x1239bf28 */
  if (C.zf) goto L_1239bf28;
  /* 1239bf12 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bf19 jne 0x1239bf28 */
  if (!C.zf) goto L_1239bf28;
  /* 1239bf1b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bf1e push ecx */
  push32((uint32_t)(ECX));
  /* 1239bf1f call dword ptr [0x123bf3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123bf3ac))), 0x1239bf25u);
  /* 1239bf25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239bf28:;
  /* 1239bf28 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1239bf2c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bf2f jne 0x1239bf4a */
  if (!C.zf) goto L_1239bf4a;
  /* 1239bf31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bf34 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1239bf39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239bf3b jne 0x1239bf4a */
  if (!C.zf) goto L_1239bf4a;
  /* 1239bf3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bf40 push ecx */
  push32((uint32_t)(ECX));
  /* 1239bf41 call dword ptr [0x123bf3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123bf3a4))), 0x1239bf47u);
  /* 1239bf47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239bf4a:;
  /* 1239bf4a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bf4d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1239bf50 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239bf53 jne 0x1239bf67 */
  if (!C.zf) goto L_1239bf67;
  /* 1239bf55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bf58 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1239bf5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239bf5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bf61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bf64 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1239bf67:;
  /* 1239bf67 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239bf6a push eax */
  push32((uint32_t)(EAX));
  /* 1239bf6b call 0x123976f0 */
  push32(0x1239bf70u); f_123976f0();
  /* 1239bf70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bf73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1239bf76 jmp 0x1239c287 */
  goto L_1239c287;
L_1239bf7b:;
  /* 1239bf7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bf7e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1239bf81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239bf84 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1239bf8e jmp 0x1239c015 */
  goto L_1239c015;
L_1239bf93:;
  /* 1239bf93 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1239bf9d jmp 0x1239c015 */
  goto L_1239c015;
L_1239bf9f:;
  /* 1239bf9f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1239bfa9:;
  /* 1239bfa9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1239bfb3 jmp 0x1239bfbf */
  goto L_1239bfbf;
L_1239bfb5:;
  /* 1239bfb5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1239bfbf:;
  /* 1239bfbf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1239bfc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239bfcc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1239bfd2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239bfd4 je 0x1239bff3 */
  if (C.zf) goto L_1239bff3;
  /* 1239bfd6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1239bfdd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1239bfe3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239bfe6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1239bfec mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1239bff3:;
  /* 1239bff3 jmp 0x1239c015 */
  goto L_1239c015;
L_1239bff5:;
  /* 1239bff5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1239bfff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c002 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1239c008 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239c00a je 0x1239c015 */
  if (C.zf) goto L_1239c015;
  /* 1239c00c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c00f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1239c012 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239c015:;
  /* 1239c015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c018 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1239c01d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c01f je 0x1239c03e */
  if (C.zf) goto L_1239c03e;
  /* 1239c021 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1239c024 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c025 call 0x1239c6b0 */
  push32(0x1239c02au); f_1239c6b0();
  /* 1239c02a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c02d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1239c033 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1239c039 jmp 0x1239c0cf */
  goto L_1239c0cf;
L_1239c03e:;
  /* 1239c03e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c041 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c044 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c046 je 0x1239c090 */
  if (C.zf) goto L_1239c090;
  /* 1239c048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c04b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1239c04e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c050 je 0x1239c070 */
  if (C.zf) goto L_1239c070;
  /* 1239c052 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1239c055 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c056 call 0x1239c690 */
  push32(0x1239c05bu); f_1239c690();
  /* 1239c05b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c05e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1239c061 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1239c062 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1239c068 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1239c06e jmp 0x1239c08e */
  goto L_1239c08e;
L_1239c070:;
  /* 1239c070 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1239c073 push edx */
  push32((uint32_t)(EDX));
  /* 1239c074 call 0x1239c690 */
  push32(0x1239c079u); f_1239c690();
  /* 1239c079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c07c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239c081 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1239c082 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1239c088 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1239c08e:;
  /* 1239c08e jmp 0x1239c0cf */
  goto L_1239c0cf;
L_1239c090:;
  /* 1239c090 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c093 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1239c096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c098 je 0x1239c0b5 */
  if (C.zf) goto L_1239c0b5;
  /* 1239c09a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1239c09d push ecx */
  push32((uint32_t)(ECX));
  /* 1239c09e call 0x1239c690 */
  push32(0x1239c0a3u); f_1239c690();
  /* 1239c0a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c0a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1239c0a7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1239c0ad mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1239c0b3 jmp 0x1239c0cf */
  goto L_1239c0cf;
L_1239c0b5:;
  /* 1239c0b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1239c0b8 push edx */
  push32((uint32_t)(EDX));
  /* 1239c0b9 call 0x1239c690 */
  push32(0x1239c0beu); f_1239c690();
  /* 1239c0be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c0c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239c0c3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1239c0c9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1239c0cf:;
  /* 1239c0cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c0d2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c0d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c0d7 je 0x1239c117 */
  if (C.zf) goto L_1239c117;
  /* 1239c0d9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c0e0 jg 0x1239c117 */
  if ((!C.zf&&C.sf==C.of)) goto L_1239c117;
  /* 1239c0e2 jl 0x1239c0ed */
  if ((C.sf!=C.of)) goto L_1239c0ed;
  /* 1239c0e4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c0eb jae 0x1239c117 */
  if (!C.cf) goto L_1239c117;
L_1239c0ed:;
  /* 1239c0ed mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1239c0f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239c0f5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1239c0fb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c0fe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239c100 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1239c106 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1239c10c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c10f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1239c112 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239c115 jmp 0x1239c12f */
  goto L_1239c12f;
L_1239c117:;
  /* 1239c117 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1239c11d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1239c123 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1239c129 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1239c12f:;
  /* 1239c12f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c132 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c138 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c13a jne 0x1239c157 */
  if (!C.zf) goto L_1239c157;
  /* 1239c13c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1239c142 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1239c148 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1239c14b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1239c151 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1239c157:;
  /* 1239c157 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c15e jge 0x1239c16c */
  if ((C.sf==C.of)) goto L_1239c16c;
  /* 1239c160 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1239c16a jmp 0x1239c175 */
  goto L_1239c175;
L_1239c16c:;
  /* 1239c16c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c16f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c172 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239c175:;
  /* 1239c175 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1239c17b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1239c181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c183 jne 0x1239c18c */
  if (!C.zf) goto L_1239c18c;
  /* 1239c185 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1239c18c:;
  /* 1239c18c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1239c18f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1239c192:;
  /* 1239c192 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1239c198 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1239c19e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c1a1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1239c1a7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c1a9 jg 0x1239c1bf */
  if ((!C.zf&&C.sf==C.of)) goto L_1239c1bf;
  /* 1239c1ab mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1239c1b1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1239c1b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239c1b9 je 0x1239c240 */
  if (C.zf) goto L_1239c240;
L_1239c1bf:;
  /* 1239c1bf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1239c1c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1239c1c6 push edx */
  push32((uint32_t)(EDX));
  /* 1239c1c7 push eax */
  push32((uint32_t)(EAX));
  /* 1239c1c8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1239c1ce push edx */
  push32((uint32_t)(EDX));
  /* 1239c1cf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1239c1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1239c1d6 call 0x1239b550 */
  push32(0x1239c1dbu); f_1239b550();
  /* 1239c1db add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c1de mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1239c1e4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1239c1ea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1239c1eb push edx */
  push32((uint32_t)(EDX));
  /* 1239c1ec push eax */
  push32((uint32_t)(EAX));
  /* 1239c1ed mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1239c1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c1f4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1239c1fa push edx */
  push32((uint32_t)(EDX));
  /* 1239c1fb call 0x1239b4e0 */
  push32(0x1239c200u); f_1239b4e0();
  /* 1239c200 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1239c206 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1239c20c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c213 jle 0x1239c227 */
  if ((C.zf||C.sf!=C.of)) goto L_1239c227;
  /* 1239c215 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1239c21b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c221 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1239c227:;
  /* 1239c227 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239c22a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1239c230 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1239c232 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239c235 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c238 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1239c23b jmp 0x1239c192 */
  goto L_1239c192;
L_1239c240:;
  /* 1239c240 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1239c243 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c246 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1239c249 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239c24c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c24f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1239c252 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c255 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1239c25a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c25c je 0x1239c287 */
  if (C.zf) goto L_1239c287;
  /* 1239c25e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239c261 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239c264 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c267 jne 0x1239c26f */
  if (!C.zf) goto L_1239c26f;
  /* 1239c269 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c26d jne 0x1239c287 */
  if (!C.zf) goto L_1239c287;
L_1239c26f:;
  /* 1239c26f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239c272 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c275 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1239c278 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239c27b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1239c27e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239c281 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c284 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1239c287:;
  /* 1239c287 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c28e jne 0x1239c462 */
  if (!C.zf) goto L_1239c462;
  /* 1239c294 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c297 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1239c29a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c29c je 0x1239c2ed */
  if (C.zf) goto L_1239c2ed;
  /* 1239c29e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c2a1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1239c2a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239c2a9 je 0x1239c2bb */
  if (C.zf) goto L_1239c2bb;
  /* 1239c2ab mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1239c2b2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1239c2b9 jmp 0x1239c2ed */
  goto L_1239c2ed;
L_1239c2bb:;
  /* 1239c2bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c2be and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c2c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c2c3 je 0x1239c2d5 */
  if (C.zf) goto L_1239c2d5;
  /* 1239c2c5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1239c2cc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1239c2d3 jmp 0x1239c2ed */
  goto L_1239c2ed;
L_1239c2d5:;
  /* 1239c2d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c2d8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1239c2db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c2dd je 0x1239c2ed */
  if (C.zf) goto L_1239c2ed;
  /* 1239c2df mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1239c2e6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1239c2ed:;
  /* 1239c2ed mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1239c2f3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c2f6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c2f9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1239c2ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c302 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1239c305 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c307 jne 0x1239c325 */
  if (!C.zf) goto L_1239c325;
  /* 1239c309 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1239c30f push eax */
  push32((uint32_t)(EAX));
  /* 1239c310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c313 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c314 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1239c31a push edx */
  push32((uint32_t)(EDX));
  /* 1239c31b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1239c31d call 0x1239c600 */
  push32(0x1239c322u); f_1239c600();
  /* 1239c322 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239c325:;
  /* 1239c325 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1239c32b push eax */
  push32((uint32_t)(EAX));
  /* 1239c32c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c32f push ecx */
  push32((uint32_t)(ECX));
  /* 1239c330 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239c333 push edx */
  push32((uint32_t)(EDX));
  /* 1239c334 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1239c33a push eax */
  push32((uint32_t)(EAX));
  /* 1239c33b call 0x1239c640 */
  push32(0x1239c340u); f_1239c640();
  /* 1239c340 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c343 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c346 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1239c349 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239c34b je 0x1239c373 */
  if (C.zf) goto L_1239c373;
  /* 1239c34d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c350 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c353 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c355 jne 0x1239c373 */
  if (!C.zf) goto L_1239c373;
  /* 1239c357 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1239c35d push eax */
  push32((uint32_t)(EAX));
  /* 1239c35e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c361 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c362 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1239c368 push edx */
  push32((uint32_t)(EDX));
  /* 1239c369 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1239c36b call 0x1239c600 */
  push32(0x1239c370u); f_1239c600();
  /* 1239c370 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239c373:;
  /* 1239c373 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c377 je 0x1239c421 */
  if (C.zf) goto L_1239c421;
  /* 1239c37d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c381 jle 0x1239c421 */
  if ((C.zf||C.sf!=C.of)) goto L_1239c421;
  /* 1239c387 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239c38a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1239c390 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239c393 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1239c399:;
  /* 1239c399 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1239c39f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1239c3a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c3a8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1239c3ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c3b0 je 0x1239c41f */
  if (C.zf) goto L_1239c41f;
  /* 1239c3b2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1239c3b8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1239c3bb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1239c3c2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1239c3c9 push eax */
  push32((uint32_t)(EAX));
  /* 1239c3ca lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1239c3d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c3d1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1239c3d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c3da mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1239c3e0 call 0x1239d7b0 */
  push32(0x1239c3e5u); f_1239d7b0();
  /* 1239c3e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c3e8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1239c3ee cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c3f5 jg 0x1239c3f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1239c3f9;
  /* 1239c3f7 jmp 0x1239c41f */
  goto L_1239c41f;
L_1239c3f9:;
  /* 1239c3f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1239c3ff push eax */
  push32((uint32_t)(EAX));
  /* 1239c400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c403 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c404 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1239c40a push edx */
  push32((uint32_t)(EDX));
  /* 1239c40b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1239c411 push eax */
  push32((uint32_t)(EAX));
  /* 1239c412 call 0x1239c640 */
  push32(0x1239c417u); f_1239c640();
  /* 1239c417 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c41a jmp 0x1239c399 */
  goto L_1239c399;
L_1239c41f:;
  /* 1239c41f jmp 0x1239c43c */
  goto L_1239c43c;
L_1239c421:;
  /* 1239c421 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1239c427 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c42b push edx */
  push32((uint32_t)(EDX));
  /* 1239c42c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239c42f push eax */
  push32((uint32_t)(EAX));
  /* 1239c430 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239c433 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c434 call 0x1239c640 */
  push32(0x1239c439u); f_1239c640();
  /* 1239c439 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239c43c:;
  /* 1239c43c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c43f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c442 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239c444 je 0x1239c462 */
  if (C.zf) goto L_1239c462;
  /* 1239c446 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1239c44c push eax */
  push32((uint32_t)(EAX));
  /* 1239c44d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c450 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c451 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1239c457 push edx */
  push32((uint32_t)(EDX));
  /* 1239c458 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1239c45a call 0x1239c600 */
  push32(0x1239c45fu); f_1239c600();
  /* 1239c45f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239c462:;
  /* 1239c462 jmp 0x1239b874 */
  goto L_1239b874;
L_1239c467:;
  /* 1239c467 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1239c46d pop edi */
  EDI = (pop32());
  /* 1239c46e pop esi */
  ESI = (pop32());
  /* 1239c46f pop ebx */
  EBX = (pop32());
  /* 1239c470 mov esp, ebp */
  ESP = (EBP);
  /* 1239c472 pop ebp */
  EBP = (pop32());
  /* 1239c473 ret  */
  ESPCHK(0x1239b850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c580 @ 0x1239c580 (119 bytes, 44 insns) */
void f_1239c580(void) {
  FTRACE(0x1239c580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c580 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c581 mov ebp, esp */
  EBP = (ESP);
  /* 1239c583 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c584 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c587 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1239c58a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c58d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c590 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1239c593 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c596 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c59a jl 0x1239c5c2 */
  if ((C.sf!=C.of)) goto L_1239c5c2;
  /* 1239c59c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c59f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239c5a1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1239c5a4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1239c5a6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1239c5aa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239c5b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239c5b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c5b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1239c5b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c5bb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c5be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1239c5c0 jmp 0x1239c5d5 */
  goto L_1239c5d5;
L_1239c5c2:;
  /* 1239c5c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c5c5 push edx */
  push32((uint32_t)(EDX));
  /* 1239c5c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c5c9 push eax */
  push32((uint32_t)(EAX));
  /* 1239c5ca call 0x1239b5d0 */
  push32(0x1239c5cfu); f_1239b5d0();
  /* 1239c5cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c5d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239c5d5:;
  /* 1239c5d5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c5d9 jne 0x1239c5e6 */
  if (!C.zf) goto L_1239c5e6;
  /* 1239c5db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239c5de mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1239c5e4 jmp 0x1239c5f3 */
  goto L_1239c5f3;
L_1239c5e6:;
  /* 1239c5e6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239c5e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1239c5eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c5ee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239c5f1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1239c5f3:;
  /* 1239c5f3 mov esp, ebp */
  ESP = (EBP);
  /* 1239c5f5 pop ebp */
  EBP = (pop32());
  /* 1239c5f6 ret  */
  ESPCHK(0x1239c580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c600 @ 0x1239c600 (53 bytes, 23 insns) */
void f_1239c600(void) {
  FTRACE(0x1239c600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c600 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c601 mov ebp, esp */
  EBP = (ESP);
L_1239c603:;
  /* 1239c603 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c606 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c609 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c60c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1239c60f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c611 jle 0x1239c633 */
  if ((C.zf||C.sf!=C.of)) goto L_1239c633;
  /* 1239c613 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239c616 push edx */
  push32((uint32_t)(EDX));
  /* 1239c617 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239c61a push eax */
  push32((uint32_t)(EAX));
  /* 1239c61b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c61e push ecx */
  push32((uint32_t)(ECX));
  /* 1239c61f call 0x1239c580 */
  push32(0x1239c624u); f_1239c580();
  /* 1239c624 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c627 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239c62a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c62d jne 0x1239c631 */
  if (!C.zf) goto L_1239c631;
  /* 1239c62f jmp 0x1239c633 */
  goto L_1239c633;
L_1239c631:;
  /* 1239c631 jmp 0x1239c603 */
  goto L_1239c603;
L_1239c633:;
  /* 1239c633 pop ebp */
  EBP = (pop32());
  /* 1239c634 ret  */
  ESPCHK(0x1239c600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x1239c640 (74 bytes, 31 insns) */
void f_1239c640(void) {
  FTRACE(0x1239c640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c640 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c641 mov ebp, esp */
  EBP = (ESP);
  /* 1239c643 push ecx */
  push32((uint32_t)(ECX));
L_1239c644:;
  /* 1239c644 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c647 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c64a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c64d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1239c650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239c652 jle 0x1239c686 */
  if ((C.zf||C.sf!=C.of)) goto L_1239c686;
  /* 1239c654 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239c657 push edx */
  push32((uint32_t)(EDX));
  /* 1239c658 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239c65b push eax */
  push32((uint32_t)(EAX));
  /* 1239c65c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c65f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239c662 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239c665 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c668 push eax */
  push32((uint32_t)(EAX));
  /* 1239c669 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c66c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c66f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1239c672 call 0x1239c580 */
  push32(0x1239c677u); f_1239c580();
  /* 1239c677 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c67a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239c67d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c680 jne 0x1239c684 */
  if (!C.zf) goto L_1239c684;
  /* 1239c682 jmp 0x1239c686 */
  goto L_1239c686;
L_1239c684:;
  /* 1239c684 jmp 0x1239c644 */
  goto L_1239c644;
L_1239c686:;
  /* 1239c686 mov esp, ebp */
  ESP = (EBP);
  /* 1239c688 pop ebp */
  EBP = (pop32());
  /* 1239c689 ret  */
  ESPCHK(0x1239c640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c690 @ 0x1239c690 (26 bytes, 12 insns) */
void f_1239c690(void) {
  FTRACE(0x1239c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c690 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c691 mov ebp, esp */
  EBP = (ESP);
  /* 1239c693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c696 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239c698 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c69b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c69e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1239c6a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c6a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239c6a5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1239c6a8 pop ebp */
  EBP = (pop32());
  /* 1239c6a9 ret  */
  ESPCHK(0x1239c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x1239c6b0 (31 bytes, 14 insns) */
void f_1239c6b0(void) {
  FTRACE(0x1239c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1239c6b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c6b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239c6b8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c6bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c6be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1239c6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c6c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239c6c5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c6c8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1239c6ca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1239c6cd pop ebp */
  EBP = (pop32());
  /* 1239c6ce ret  */
  ESPCHK(0x1239c6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6d0 @ 0x1239c6d0 (27 bytes, 12 insns) */
void f_1239c6d0(void) {
  FTRACE(0x1239c6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1239c6d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c6d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239c6d8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c6db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c6de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1239c6e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c6e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239c6e5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1239c6e9 pop ebp */
  EBP = (pop32());
  /* 1239c6ea ret  */
  ESPCHK(0x1239c6d0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1239c6f0 (145 bytes, 42 insns) */
void f_1239c6f0(void) {
  FTRACE(0x1239c6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1239c6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1239c6f4 call 0x1239c7a0 */
  push32(0x1239c6f9u); f_1239c7a0();
  /* 1239c6f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c6fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1239c6fe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239c705 jmp 0x1239c710 */
  goto L_1239c710;
L_1239c707:;
  /* 1239c707 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c70a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c70d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239c710:;
  /* 1239c710 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c714 jae 0x1239c73a */
  if (!C.cf) goto L_1239c73a;
  /* 1239c716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c719 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c71c cmp ecx, dword ptr [eax*8 + 0x123befb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x123befb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c723 jne 0x1239c738 */
  if (!C.zf) goto L_1239c738;
  /* 1239c725 call 0x1239c790 */
  push32(0x1239c72au); f_1239c790();
  /* 1239c72a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239c72d mov ecx, dword ptr [edx*8 + 0x123befbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x123befbc)));
  /* 1239c734 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1239c736 jmp 0x1239c77d */
  goto L_1239c77d;
L_1239c738:;
  /* 1239c738 jmp 0x1239c707 */
  goto L_1239c707;
L_1239c73a:;
  /* 1239c73a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c73e jb 0x1239c753 */
  if (C.cf) goto L_1239c753;
  /* 1239c740 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c744 ja 0x1239c753 */
  if ((!C.cf&&!C.zf)) goto L_1239c753;
  /* 1239c746 call 0x1239c790 */
  push32(0x1239c74bu); f_1239c790();
  /* 1239c74b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1239c751 jmp 0x1239c77d */
  goto L_1239c77d;
L_1239c753:;
  /* 1239c753 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c75a jb 0x1239c772 */
  if (C.cf) goto L_1239c772;
  /* 1239c75c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c763 ja 0x1239c772 */
  if ((!C.cf&&!C.zf)) goto L_1239c772;
  /* 1239c765 call 0x1239c790 */
  push32(0x1239c76au); f_1239c790();
  /* 1239c76a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1239c770 jmp 0x1239c77d */
  goto L_1239c77d;
L_1239c772:;
  /* 1239c772 call 0x1239c790 */
  push32(0x1239c777u); f_1239c790();
  /* 1239c777 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1239c77d:;
  /* 1239c77d mov esp, ebp */
  ESP = (EBP);
  /* 1239c77f pop ebp */
  EBP = (pop32());
  /* 1239c780 ret  */
  ESPCHK(0x1239c6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c790 @ 0x1239c790 (13 bytes, 6 insns) */
void f_1239c790(void) {
  FTRACE(0x1239c790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c790 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c791 mov ebp, esp */
  EBP = (ESP);
  /* 1239c793 call 0x12394300 */
  push32(0x1239c798u); f_12394300();
  /* 1239c798 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c79b pop ebp */
  EBP = (pop32());
  /* 1239c79c ret  */
  ESPCHK(0x1239c790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a0 @ 0x1239c7a0 (13 bytes, 6 insns) */
void f_1239c7a0(void) {
  FTRACE(0x1239c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1239c7a3 call 0x12394300 */
  push32(0x1239c7a8u); f_12394300();
  /* 1239c7a8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c7ab pop ebp */
  EBP = (pop32());
  /* 1239c7ac ret  */
  ESPCHK(0x1239c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7b0 @ 0x1239c7b0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1239c7b0(void) {
  FTRACE(0x1239c7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239c7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239c7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1239c7b3 push edi */
  push32((uint32_t)(EDI));
  /* 1239c7b4 push esi */
  push32((uint32_t)(ESI));
  /* 1239c7b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1239c7b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239c7bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c7be mov eax, ecx */
  EAX = (ECX);
  /* 1239c7c0 mov edx, ecx */
  EDX = (ECX);
  /* 1239c7c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c7c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c7c6 jbe 0x1239c7d0 */
  if ((C.cf||C.zf)) goto L_1239c7d0;
  /* 1239c7c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c7ca jb 0x1239c948 */
  if (C.cf) goto L_1239c948;
L_1239c7d0:;
  /* 1239c7d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1239c7d6 jne 0x1239c7ec */
  if (!C.zf) goto L_1239c7ec;
  /* 1239c7d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239c7db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c7de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c7e1 jb 0x1239c80c */
  if (C.cf) goto L_1239c80c;
  /* 1239c7e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239c7e5 jmp dword ptr [edx*4 + 0x1239c8f8] */
  switch (EDX) {
    case 0: goto L_1239c908;
    case 1: goto L_1239c910;
    case 2: goto L_1239c91c;
    case 3: goto L_1239c930;
    default: x86_unimpl("switch@0x1239c7e5 out of table"); return;
  }
L_1239c7ec:;
  /* 1239c7ec mov eax, edi */
  EAX = (EDI);
  /* 1239c7ee mov edx, 3 */
  EDX = (0x3u);
  /* 1239c7f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c7f6 jb 0x1239c804 */
  if (C.cf) goto L_1239c804;
  /* 1239c7f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1239c7fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c7fd jmp dword ptr [eax*4 + 0x1239c810] */
  switch (EAX) {
    case 1: goto L_1239c820;
    case 2: goto L_1239c84c;
    case 3: goto L_1239c870;
    default: x86_unimpl("switch@0x1239c7fd out of table"); return;
  }
L_1239c804:;
  /* 1239c804 jmp dword ptr [ecx*4 + 0x1239c908] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1239c908)))); return;
  /* 1239c80b nop  */
  /* nop */
L_1239c80c:;
  /* 1239c80c jmp dword ptr [ecx*4 + 0x1239c88c] */
  switch (ECX) {
    case 0: goto L_1239c8ef;
    case 1: goto L_1239c8dc;
    case 2: goto L_1239c8d4;
    case 3: goto L_1239c8cc;
    case 4: goto L_1239c8c4;
    case 5: goto L_1239c8bc;
    case 6: goto L_1239c8b4;
    case 7: goto L_1239c8ac;
    default: x86_unimpl("switch@0x1239c80c out of table"); return;
  }
  /* 1239c813 nop  */
  /* nop */
L_1239c820:;
  /* 1239c820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239c822 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239c824 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239c826 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239c829 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239c82c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239c82f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239c832 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239c835 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c838 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c83b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c83e jb 0x1239c80c */
  if (C.cf) goto L_1239c80c;
  /* 1239c840 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239c842 jmp dword ptr [edx*4 + 0x1239c8f8] */
  switch (EDX) {
    case 0: goto L_1239c908;
    case 1: goto L_1239c910;
    case 2: goto L_1239c91c;
    case 3: goto L_1239c930;
    default: x86_unimpl("switch@0x1239c842 out of table"); return;
  }
  /* 1239c849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239c84c:;
  /* 1239c84c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239c84e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239c850 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239c852 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239c855 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239c858 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239c85b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c85e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c861 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c864 jb 0x1239c80c */
  if (C.cf) goto L_1239c80c;
  /* 1239c866 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239c868 jmp dword ptr [edx*4 + 0x1239c8f8] */
  switch (EDX) {
    case 0: goto L_1239c908;
    case 1: goto L_1239c910;
    case 2: goto L_1239c91c;
    case 3: goto L_1239c930;
    default: x86_unimpl("switch@0x1239c868 out of table"); return;
  }
  /* 1239c86f nop  */
  /* nop */
L_1239c870:;
  /* 1239c870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239c872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239c874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239c876 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1239c877 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239c87a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1239c87b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c87e jb 0x1239c80c */
  if (C.cf) goto L_1239c80c;
  /* 1239c880 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239c882 jmp dword ptr [edx*4 + 0x1239c8f8] */
  switch (EDX) {
    case 0: goto L_1239c908;
    case 1: goto L_1239c910;
    case 2: goto L_1239c91c;
    case 3: goto L_1239c930;
    default: x86_unimpl("switch@0x1239c882 out of table"); return;
  }
  /* 1239c889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239c8ac:;
  /* 1239c8ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1239c8b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1239c8b4:;
  /* 1239c8b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1239c8b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1239c8bc:;
  /* 1239c8bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1239c8c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1239c8c4:;
  /* 1239c8c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1239c8c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1239c8cc:;
  /* 1239c8cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1239c8d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1239c8d4:;
  /* 1239c8d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1239c8d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1239c8dc:;
  /* 1239c8dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1239c8e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1239c8e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1239c8eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239c8ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1239c8ef:;
  /* 1239c8ef jmp dword ptr [edx*4 + 0x1239c8f8] */
  switch (EDX) {
    case 0: goto L_1239c908;
    case 1: goto L_1239c910;
    case 2: goto L_1239c91c;
    case 3: goto L_1239c930;
    default: x86_unimpl("switch@0x1239c8ef out of table"); return;
  }
  /* 1239c8f6 mov edi, edi */
  EDI = (EDI);
L_1239c908:;
  /* 1239c908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c90b pop esi */
  ESI = (pop32());
  /* 1239c90c pop edi */
  EDI = (pop32());
  /* 1239c90d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239c90e ret  */
  ESPCHK(0x1239c7b0u, _esp0);
  ESP += 4; return;
  /* 1239c90f nop  */
  /* nop */
L_1239c910:;
  /* 1239c910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239c912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239c914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c917 pop esi */
  ESI = (pop32());
  /* 1239c918 pop edi */
  EDI = (pop32());
  /* 1239c919 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239c91a ret  */
  ESPCHK(0x1239c7b0u, _esp0);
  ESP += 4; return;
  /* 1239c91b nop  */
  /* nop */
L_1239c91c:;
  /* 1239c91c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239c91e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239c920 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239c923 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239c926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c929 pop esi */
  ESI = (pop32());
  /* 1239c92a pop edi */
  EDI = (pop32());
  /* 1239c92b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239c92c ret  */
  ESPCHK(0x1239c7b0u, _esp0);
  ESP += 4; return;
  /* 1239c92d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239c930:;
  /* 1239c930 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1239c932 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239c934 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239c937 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239c93a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239c93d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239c940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239c943 pop esi */
  ESI = (pop32());
  /* 1239c944 pop edi */
  EDI = (pop32());
  /* 1239c945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239c946 ret  */
  ESPCHK(0x1239c7b0u, _esp0);
  ESP += 4; return;
  /* 1239c947 nop  */
  /* nop */
L_1239c948:;
  /* 1239c948 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1239c94c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1239c950 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1239c956 jne 0x1239c97c */
  if (!C.zf) goto L_1239c97c;
  /* 1239c958 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239c95b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1239c95e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c961 jb 0x1239c970 */
  if (C.cf) goto L_1239c970;
  /* 1239c963 std  */
  C.df=1;
  /* 1239c964 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239c966 cld  */
  C.df=0;
  /* 1239c967 jmp dword ptr [edx*4 + 0x1239ca90] */
  switch (EDX) {
    case 0: goto L_1239caa0;
    case 1: goto L_1239caa8;
    case 2: goto L_1239cab8;
    case 3: goto L_1239cacc;
    default: x86_unimpl("switch@0x1239c967 out of table"); return;
  }
  /* 1239c96e mov edi, edi */
  EDI = (EDI);
L_1239c970:;
  /* 1239c970 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239c972 jmp dword ptr [ecx*4 + 0x1239ca40] */
  switch (ECX) {
    case 0: goto L_1239ca87;
    default: x86_unimpl("switch@0x1239c972 out of table"); return;
  }
  /* 1239c979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239c97c:;
  /* 1239c97c mov eax, edi */
  EAX = (EDI);
  /* 1239c97e mov edx, 3 */
  EDX = (0x3u);
  /* 1239c983 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c986 jb 0x1239c994 */
  if (C.cf) goto L_1239c994;
  /* 1239c988 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1239c98b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c98d jmp dword ptr [eax*4 + 0x1239c998] */
  switch (EAX) {
    case 1: goto L_1239c9a8;
    case 2: goto L_1239c9c8;
    case 3: goto L_1239c9f0;
    default: x86_unimpl("switch@0x1239c98d out of table"); return;
  }
L_1239c994:;
  /* 1239c994 jmp dword ptr [ecx*4 + 0x1239ca90] */
  switch (ECX) {
    case 0: goto L_1239caa0;
    case 1: goto L_1239caa8;
    case 2: goto L_1239cab8;
    case 3: goto L_1239cacc;
    default: x86_unimpl("switch@0x1239c994 out of table"); return;
  }
  /* 1239c99b nop  */
  /* nop */
L_1239c9a8:;
  /* 1239c9a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239c9ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239c9ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239c9b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1239c9b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239c9b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1239c9b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c9b8 jb 0x1239c970 */
  if (C.cf) goto L_1239c970;
  /* 1239c9ba std  */
  C.df=1;
  /* 1239c9bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239c9bd cld  */
  C.df=0;
  /* 1239c9be jmp dword ptr [edx*4 + 0x1239ca90] */
  switch (EDX) {
    case 0: goto L_1239caa0;
    case 1: goto L_1239caa8;
    case 2: goto L_1239cab8;
    case 3: goto L_1239cacc;
    default: x86_unimpl("switch@0x1239c9be out of table"); return;
  }
  /* 1239c9c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239c9c8:;
  /* 1239c9c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239c9cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239c9cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239c9d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239c9d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239c9d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239c9d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c9dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239c9df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239c9e2 jb 0x1239c970 */
  if (C.cf) goto L_1239c970;
  /* 1239c9e4 std  */
  C.df=1;
  /* 1239c9e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239c9e7 cld  */
  C.df=0;
  /* 1239c9e8 jmp dword ptr [edx*4 + 0x1239ca90] */
  switch (EDX) {
    case 0: goto L_1239caa0;
    case 1: goto L_1239caa8;
    case 2: goto L_1239cab8;
    case 3: goto L_1239cacc;
    default: x86_unimpl("switch@0x1239c9e8 out of table"); return;
  }
  /* 1239c9ef nop  */
  /* nop */
L_1239c9f0:;
  /* 1239c9f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239c9f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1239c9f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239c9f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239c9fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239c9fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239ca01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239ca04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239ca07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239ca0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239ca0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ca10 jb 0x1239c970 */
  if (C.cf) goto L_1239c970;
  /* 1239ca16 std  */
  C.df=1;
  /* 1239ca17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1239ca19 cld  */
  C.df=0;
  /* 1239ca1a jmp dword ptr [edx*4 + 0x1239ca90] */
  switch (EDX) {
    case 0: goto L_1239caa0;
    case 1: goto L_1239caa8;
    case 2: goto L_1239cab8;
    case 3: goto L_1239cacc;
    default: x86_unimpl("switch@0x1239ca1a out of table"); return;
  }
  /* 1239ca21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1239ca24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1239ca25 retf 0x1239 */
  x86_unimpl("retf @ 0x1239ca25");
  /* 1239ca28 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 1239ca29 retf 0x1239 */
  x86_unimpl("retf @ 0x1239ca29");
  /* 1239ca2c push esp */
  push32((uint32_t)(ESP));
  /* 1239ca2d retf 0x1239 */
  x86_unimpl("retf @ 0x1239ca2d");
  /* 1239ca30 pop esp */
  ESP = (pop32());
  /* 1239ca31 retf 0x1239 */
  x86_unimpl("retf @ 0x1239ca31");
  /* 1239ca34 retf 0x1239 */
  x86_unimpl("retf @ 0x1239ca34");
  /* 1239ca38 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x1239ca38");
  /* 1239ca39 retf 0x1239 */
  x86_unimpl("retf @ 0x1239ca39");
  /* 1239ca3c je 0x1239ca08 */
  if (C.zf) goto L_1239ca08;
  /* 1239ca3e cmp dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ca44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1239ca48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1239ca4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1239ca50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1239ca54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1239ca58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1239ca5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1239ca60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1239ca64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1239ca68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1239ca6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1239ca70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1239ca74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1239ca78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1239ca7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1239ca83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ca85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1239ca87:;
  /* 1239ca87 jmp dword ptr [edx*4 + 0x1239ca90] */
  switch (EDX) {
    case 0: goto L_1239caa0;
    case 1: goto L_1239caa8;
    case 2: goto L_1239cab8;
    case 3: goto L_1239cacc;
    default: x86_unimpl("switch@0x1239ca87 out of table"); return;
  }
  /* 1239ca8e mov edi, edi */
  EDI = (EDI);
L_1239caa0:;
  /* 1239caa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239caa3 pop esi */
  ESI = (pop32());
  /* 1239caa4 pop edi */
  EDI = (pop32());
  /* 1239caa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239caa6 ret  */
  ESPCHK(0x1239c7b0u, _esp0);
  ESP += 4; return;
  /* 1239caa7 nop  */
  /* nop */
L_1239caa8:;
  /* 1239caa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239caab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239caae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cab1 pop esi */
  ESI = (pop32());
  /* 1239cab2 pop edi */
  EDI = (pop32());
  /* 1239cab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239cab4 ret  */
  ESPCHK(0x1239c7b0u, _esp0);
  ESP += 4; return;
  /* 1239cab5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1239cab8:;
  /* 1239cab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239cabb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239cabe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239cac1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239cac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cac7 pop esi */
  ESI = (pop32());
  /* 1239cac8 pop edi */
  EDI = (pop32());
  /* 1239cac9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239caca ret  */
  ESPCHK(0x1239c7b0u, _esp0);
  ESP += 4; return;
  /* 1239cacb nop  */
  /* nop */
L_1239cacc:;
  /* 1239cacc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1239cacf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1239cad2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1239cad5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1239cad8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1239cadb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1239cade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cae1 pop esi */
  ESI = (pop32());
  /* 1239cae2 pop edi */
  EDI = (pop32());
  /* 1239cae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1239cae4 ret  */
  ESPCHK(0x1239c7b0u, _esp0);
  ESP += 4; return;
L_1239ca08: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1239ca08 (unresolved jump table)"); return;
}

/* FUN_1000caf0 @ 0x1239caf0 (421 bytes, 148 insns) */
void f_1239caf0(void) {
  FTRACE(0x1239caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239caf1 mov ebp, esp */
  EBP = (ESP);
  /* 1239caf3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1239caf5 push 0x123bc180 */
  push32((uint32_t)(0x123bc180u));
  /* 1239cafa push 0x1239d9c8 */
  push32((uint32_t)(0x1239d9c8u));
  /* 1239caff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1239cb05 push eax */
  push32((uint32_t)(EAX));
  /* 1239cb06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1239cb0d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239cb10 push ebx */
  push32((uint32_t)(EBX));
  /* 1239cb11 push esi */
  push32((uint32_t)(ESI));
  /* 1239cb12 push edi */
  push32((uint32_t)(EDI));
  /* 1239cb13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1239cb16 cmp dword ptr [0x123c06dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cb1d jne 0x1239cb6e */
  if (!C.zf) goto L_1239cb6e;
  /* 1239cb1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1239cb22 push eax */
  push32((uint32_t)(EAX));
  /* 1239cb23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239cb25 push 0x123bc17c */
  push32((uint32_t)(0x123bc17cu));
  /* 1239cb2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1239cb2c call dword ptr [0x123c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b4))), 0x1239cb32u);
  /* 1239cb32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239cb34 je 0x1239cb42 */
  if (C.zf) goto L_1239cb42;
  /* 1239cb36 mov dword ptr [0x123c06dc], 1 */
  w32((uint32_t)(0x123c06dc), (0x1u));
  /* 1239cb40 jmp 0x1239cb6e */
  goto L_1239cb6e;
L_1239cb42:;
  /* 1239cb42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1239cb45 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cb46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239cb48 push 0x123bc178 */
  push32((uint32_t)(0x123bc178u));
  /* 1239cb4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239cb4f push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cb51 call dword ptr [0x123c32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32c4))), 0x1239cb57u);
  /* 1239cb57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239cb59 je 0x1239cb67 */
  if (C.zf) goto L_1239cb67;
  /* 1239cb5b mov dword ptr [0x123c06dc], 2 */
  w32((uint32_t)(0x123c06dc), (0x2u));
  /* 1239cb65 jmp 0x1239cb6e */
  goto L_1239cb6e;
L_1239cb67:;
  /* 1239cb67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cb69 jmp 0x1239cc98 */
  goto L_1239cc98;
L_1239cb6e:;
  /* 1239cb6e cmp dword ptr [0x123c06dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123c06dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cb75 jne 0x1239cba5 */
  if (!C.zf) goto L_1239cba5;
  /* 1239cb77 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cb7b jne 0x1239cb86 */
  if (!C.zf) goto L_1239cb86;
  /* 1239cb7d mov edx, dword ptr [0x123c06e8] */
  EDX = (r32((uint32_t)(0x123c06e8)));
  /* 1239cb83 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1239cb86:;
  /* 1239cb86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239cb89 push eax */
  push32((uint32_t)(EAX));
  /* 1239cb8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239cb8d push ecx */
  push32((uint32_t)(ECX));
  /* 1239cb8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239cb91 push edx */
  push32((uint32_t)(EDX));
  /* 1239cb92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cb95 push eax */
  push32((uint32_t)(EAX));
  /* 1239cb96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1239cb99 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cb9a call dword ptr [0x123c32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32c4))), 0x1239cba0u);
  /* 1239cba0 jmp 0x1239cc98 */
  goto L_1239cc98;
L_1239cba5:;
  /* 1239cba5 cmp dword ptr [0x123c06dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c06dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cbac jne 0x1239cc96 */
  if (!C.zf) goto L_1239cc96;
  /* 1239cbb2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cbb6 jne 0x1239cbc1 */
  if (!C.zf) goto L_1239cbc1;
  /* 1239cbb8 mov edx, dword ptr [0x123c06f8] */
  EDX = (r32((uint32_t)(0x123c06f8)));
  /* 1239cbbe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1239cbc1:;
  /* 1239cbc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cbc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cbc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239cbc8 push eax */
  push32((uint32_t)(EAX));
  /* 1239cbc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239cbcc push ecx */
  push32((uint32_t)(ECX));
  /* 1239cbcd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1239cbd0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239cbd2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239cbd4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1239cbd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239cbda push edx */
  push32((uint32_t)(EDX));
  /* 1239cbdb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1239cbde push eax */
  push32((uint32_t)(EAX));
  /* 1239cbdf call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x1239cbe5u);
  /* 1239cbe5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1239cbe8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cbec jne 0x1239cbf5 */
  if (!C.zf) goto L_1239cbf5;
  /* 1239cbee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cbf0 jmp 0x1239cc98 */
  goto L_1239cc98;
L_1239cbf5:;
  /* 1239cbf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239cbfc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239cbff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1239cc01 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239cc04 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1239cc06 call 0x12397a60 */
  push32(0x1239cc0bu); f_12397a60();
  /* 1239cc0b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1239cc0e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1239cc11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1239cc14 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1239cc17 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239cc1a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1239cc1c push edx */
  push32((uint32_t)(EDX));
  /* 1239cc1d push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cc1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239cc22 push eax */
  push32((uint32_t)(EAX));
  /* 1239cc23 call 0x12398630 */
  push32(0x1239cc28u); f_12398630();
  /* 1239cc28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239cc2b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1239cc32 jmp 0x1239cc4b */
  goto L_1239cc4b;
  /* 1239cc34 mov eax, 1 */
  EAX = (0x1u);
  /* 1239cc39 ret  */
  ESPCHK(0x1239caf0u, _esp0);
  ESP += 4; return;
  /* 1239cc3a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1239cc3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1239cc44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1239cc4b:;
  /* 1239cc4b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cc4f jne 0x1239cc55 */
  if (!C.zf) goto L_1239cc55;
  /* 1239cc51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cc53 jmp 0x1239cc98 */
  goto L_1239cc98;
L_1239cc55:;
  /* 1239cc55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239cc58 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cc59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239cc5c push edx */
  push32((uint32_t)(EDX));
  /* 1239cc5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239cc60 push eax */
  push32((uint32_t)(EAX));
  /* 1239cc61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239cc64 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cc65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239cc67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1239cc6a push edx */
  push32((uint32_t)(EDX));
  /* 1239cc6b call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x1239cc71u);
  /* 1239cc71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1239cc74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cc78 jne 0x1239cc7e */
  if (!C.zf) goto L_1239cc7e;
  /* 1239cc7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cc7c jmp 0x1239cc98 */
  goto L_1239cc98;
L_1239cc7e:;
  /* 1239cc7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239cc81 push eax */
  push32((uint32_t)(EAX));
  /* 1239cc82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239cc85 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cc86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239cc89 push edx */
  push32((uint32_t)(EDX));
  /* 1239cc8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cc8d push eax */
  push32((uint32_t)(EAX));
  /* 1239cc8e call dword ptr [0x123c32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b4))), 0x1239cc94u);
  /* 1239cc94 jmp 0x1239cc98 */
  goto L_1239cc98;
L_1239cc96:;
  /* 1239cc96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239cc98:;
  /* 1239cc98 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1239cc9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239cc9e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1239cca5 pop edi */
  EDI = (pop32());
  /* 1239cca6 pop esi */
  ESI = (pop32());
  /* 1239cca7 pop ebx */
  EBX = (pop32());
  /* 1239cca8 mov esp, ebp */
  ESP = (EBP);
  /* 1239ccaa pop ebp */
  EBP = (pop32());
  /* 1239ccab ret  */
  ESPCHK(0x1239caf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb0 @ 0x1239ccb0 (727 bytes, 263 insns) */
void f_1239ccb0(void) {
  FTRACE(0x1239ccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239ccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239ccb1 mov ebp, esp */
  EBP = (ESP);
  /* 1239ccb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1239ccb5 push 0x123bc190 */
  push32((uint32_t)(0x123bc190u));
  /* 1239ccba push 0x1239d9c8 */
  push32((uint32_t)(0x1239d9c8u));
  /* 1239ccbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1239ccc5 push eax */
  push32((uint32_t)(EAX));
  /* 1239ccc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1239cccd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ccd0 push ebx */
  push32((uint32_t)(EBX));
  /* 1239ccd1 push esi */
  push32((uint32_t)(ESI));
  /* 1239ccd2 push edi */
  push32((uint32_t)(EDI));
  /* 1239ccd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1239ccd6 cmp dword ptr [0x123c0700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ccdd jne 0x1239cd36 */
  if (!C.zf) goto L_1239cd36;
  /* 1239ccdf push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239cce5 push 0x123bc17c */
  push32((uint32_t)(0x123bc17cu));
  /* 1239ccea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1239ccef push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ccf1 call dword ptr [0x123c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b8))), 0x1239ccf7u);
  /* 1239ccf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ccf9 je 0x1239cd07 */
  if (C.zf) goto L_1239cd07;
  /* 1239ccfb mov dword ptr [0x123c0700], 1 */
  w32((uint32_t)(0x123c0700), (0x1u));
  /* 1239cd05 jmp 0x1239cd36 */
  goto L_1239cd36;
L_1239cd07:;
  /* 1239cd07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cd09 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cd0b push 1 */
  push32((uint32_t)(0x1u));
  /* 1239cd0d push 0x123bc178 */
  push32((uint32_t)(0x123bc178u));
  /* 1239cd12 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1239cd17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cd19 call dword ptr [0x123c32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b0))), 0x1239cd1fu);
  /* 1239cd1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239cd21 je 0x1239cd2f */
  if (C.zf) goto L_1239cd2f;
  /* 1239cd23 mov dword ptr [0x123c0700], 2 */
  w32((uint32_t)(0x123c0700), (0x2u));
  /* 1239cd2d jmp 0x1239cd36 */
  goto L_1239cd36;
L_1239cd2f:;
  /* 1239cd2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cd31 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239cd36:;
  /* 1239cd36 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cd3a jle 0x1239cd4f */
  if ((C.zf||C.sf!=C.of)) goto L_1239cd4f;
  /* 1239cd3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239cd3f push eax */
  push32((uint32_t)(EAX));
  /* 1239cd40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239cd43 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cd44 call 0x1239cfc0 */
  push32(0x1239cd49u); f_1239cfc0();
  /* 1239cd49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239cd4c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1239cd4f:;
  /* 1239cd4f cmp dword ptr [0x123c0700], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123c0700))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cd56 jne 0x1239cd7b */
  if (!C.zf) goto L_1239cd7b;
  /* 1239cd58 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1239cd5b push edx */
  push32((uint32_t)(EDX));
  /* 1239cd5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1239cd5f push eax */
  push32((uint32_t)(EAX));
  /* 1239cd60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239cd63 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cd64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239cd67 push edx */
  push32((uint32_t)(EDX));
  /* 1239cd68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239cd6b push eax */
  push32((uint32_t)(EAX));
  /* 1239cd6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cd6f push ecx */
  push32((uint32_t)(ECX));
  /* 1239cd70 call dword ptr [0x123c32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b0))), 0x1239cd76u);
  /* 1239cd76 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239cd7b:;
  /* 1239cd7b cmp dword ptr [0x123c0700], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c0700))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cd82 jne 0x1239cf9f */
  if (!C.zf) goto L_1239cf9f;
  /* 1239cd88 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cd8c jne 0x1239cd97 */
  if (!C.zf) goto L_1239cd97;
  /* 1239cd8e mov edx, dword ptr [0x123c06f8] */
  EDX = (r32((uint32_t)(0x123c06f8)));
  /* 1239cd94 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1239cd97:;
  /* 1239cd97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cd99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cd9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239cd9e push eax */
  push32((uint32_t)(EAX));
  /* 1239cd9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239cda2 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cda3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1239cda6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239cda8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239cdaa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1239cdad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239cdb0 push edx */
  push32((uint32_t)(EDX));
  /* 1239cdb1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1239cdb4 push eax */
  push32((uint32_t)(EAX));
  /* 1239cdb5 call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x1239cdbbu);
  /* 1239cdbb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1239cdbe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cdc2 jne 0x1239cdcb */
  if (!C.zf) goto L_1239cdcb;
  /* 1239cdc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cdc6 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239cdcb:;
  /* 1239cdcb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239cdd2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1239cdd5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1239cdd7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239cdda and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1239cddc call 0x12397a60 */
  push32(0x1239cde1u); f_12397a60();
  /* 1239cde1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1239cde4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1239cde7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1239cdea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1239cded mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1239cdf4 jmp 0x1239ce0d */
  goto L_1239ce0d;
  /* 1239cdf6 mov eax, 1 */
  EAX = (0x1u);
  /* 1239cdfb ret  */
  ESPCHK(0x1239ccb0u, _esp0);
  ESP += 4; return;
  /* 1239cdfc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1239cdff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1239ce06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1239ce0d:;
  /* 1239ce0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ce11 jne 0x1239ce1a */
  if (!C.zf) goto L_1239ce1a;
  /* 1239ce13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ce15 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239ce1a:;
  /* 1239ce1a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1239ce1d push edx */
  push32((uint32_t)(EDX));
  /* 1239ce1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ce21 push eax */
  push32((uint32_t)(EAX));
  /* 1239ce22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239ce25 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ce26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239ce29 push edx */
  push32((uint32_t)(EDX));
  /* 1239ce2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1239ce2c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1239ce2f push eax */
  push32((uint32_t)(EAX));
  /* 1239ce30 call dword ptr [0x123c32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32bc))), 0x1239ce36u);
  /* 1239ce36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ce38 jne 0x1239ce41 */
  if (!C.zf) goto L_1239ce41;
  /* 1239ce3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ce3c jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239ce41:;
  /* 1239ce41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ce43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ce45 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1239ce48 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ce49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ce4c push edx */
  push32((uint32_t)(EDX));
  /* 1239ce4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ce50 push eax */
  push32((uint32_t)(EAX));
  /* 1239ce51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ce54 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ce55 call dword ptr [0x123c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b8))), 0x1239ce5bu);
  /* 1239ce5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1239ce5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ce62 jne 0x1239ce6b */
  if (!C.zf) goto L_1239ce6b;
  /* 1239ce64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ce66 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239ce6b:;
  /* 1239ce6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ce6e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1239ce74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239ce76 je 0x1239cebb */
  if (C.zf) goto L_1239cebb;
  /* 1239ce78 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ce7c je 0x1239ceb6 */
  if (C.zf) goto L_1239ceb6;
  /* 1239ce7e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239ce81 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ce84 jle 0x1239ce8d */
  if ((C.zf||C.sf!=C.of)) goto L_1239ce8d;
  /* 1239ce86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ce88 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239ce8d:;
  /* 1239ce8d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1239ce90 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ce91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1239ce94 push edx */
  push32((uint32_t)(EDX));
  /* 1239ce95 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1239ce98 push eax */
  push32((uint32_t)(EAX));
  /* 1239ce99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239ce9c push ecx */
  push32((uint32_t)(ECX));
  /* 1239ce9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239cea0 push edx */
  push32((uint32_t)(EDX));
  /* 1239cea1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cea4 push eax */
  push32((uint32_t)(EAX));
  /* 1239cea5 call dword ptr [0x123c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b8))), 0x1239ceabu);
  /* 1239ceab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239cead jne 0x1239ceb6 */
  if (!C.zf) goto L_1239ceb6;
  /* 1239ceaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ceb1 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239ceb6:;
  /* 1239ceb6 jmp 0x1239cf9a */
  goto L_1239cf9a;
L_1239cebb:;
  /* 1239cebb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239cebe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1239cec1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1239cec8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1239cecb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1239cecd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ced0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1239ced2 call 0x12397a60 */
  push32(0x1239ced7u); f_12397a60();
  /* 1239ced7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1239ceda mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1239cedd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1239cee0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1239cee3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1239ceea jmp 0x1239cf03 */
  goto L_1239cf03;
  /* 1239ceec mov eax, 1 */
  EAX = (0x1u);
  /* 1239cef1 ret  */
  ESPCHK(0x1239ccb0u, _esp0);
  ESP += 4; return;
  /* 1239cef2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1239cef5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1239cefc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1239cf03:;
  /* 1239cf03 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cf07 jne 0x1239cf10 */
  if (!C.zf) goto L_1239cf10;
  /* 1239cf09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cf0b jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239cf10:;
  /* 1239cf10 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1239cf13 push eax */
  push32((uint32_t)(EAX));
  /* 1239cf14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239cf17 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cf18 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1239cf1b push edx */
  push32((uint32_t)(EDX));
  /* 1239cf1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239cf1f push eax */
  push32((uint32_t)(EAX));
  /* 1239cf20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239cf23 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cf24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cf27 push edx */
  push32((uint32_t)(EDX));
  /* 1239cf28 call dword ptr [0x123c32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32b8))), 0x1239cf2eu);
  /* 1239cf2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239cf30 jne 0x1239cf36 */
  if (!C.zf) goto L_1239cf36;
  /* 1239cf32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cf34 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239cf36:;
  /* 1239cf36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cf3a jne 0x1239cf6a */
  if (!C.zf) goto L_1239cf6a;
  /* 1239cf3c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cf3e push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cf40 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cf42 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cf44 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1239cf47 push eax */
  push32((uint32_t)(EAX));
  /* 1239cf48 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239cf4b push ecx */
  push32((uint32_t)(ECX));
  /* 1239cf4c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1239cf51 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1239cf54 push edx */
  push32((uint32_t)(EDX));
  /* 1239cf55 call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x1239cf5bu);
  /* 1239cf5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1239cf5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cf62 jne 0x1239cf68 */
  if (!C.zf) goto L_1239cf68;
  /* 1239cf64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cf66 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239cf68:;
  /* 1239cf68 jmp 0x1239cf9a */
  goto L_1239cf9a;
L_1239cf6a:;
  /* 1239cf6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cf6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239cf6e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1239cf71 push eax */
  push32((uint32_t)(EAX));
  /* 1239cf72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1239cf75 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cf76 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1239cf79 push edx */
  push32((uint32_t)(EDX));
  /* 1239cf7a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1239cf7d push eax */
  push32((uint32_t)(EAX));
  /* 1239cf7e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1239cf83 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1239cf86 push ecx */
  push32((uint32_t)(ECX));
  /* 1239cf87 call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x1239cf8du);
  /* 1239cf8d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1239cf90 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239cf94 jne 0x1239cf9a */
  if (!C.zf) goto L_1239cf9a;
  /* 1239cf96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239cf98 jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239cf9a:;
  /* 1239cf9a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1239cf9d jmp 0x1239cfa1 */
  goto L_1239cfa1;
L_1239cf9f:;
  /* 1239cf9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239cfa1:;
  /* 1239cfa1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1239cfa4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239cfa7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1239cfae pop edi */
  EDI = (pop32());
  /* 1239cfaf pop esi */
  ESI = (pop32());
  /* 1239cfb0 pop ebx */
  EBX = (pop32());
  /* 1239cfb1 mov esp, ebp */
  ESP = (EBP);
  /* 1239cfb3 pop ebp */
  EBP = (pop32());
  /* 1239cfb4 ret  */
  ESPCHK(0x1239ccb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc0 @ 0x1239cfc0 (80 bytes, 32 insns) */
void f_1239cfc0(void) {
  FTRACE(0x1239cfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239cfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239cfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1239cfc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239cfc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239cfc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239cfcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239cfcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1239cfd2:;
  /* 1239cfd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239cfd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239cfd8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239cfdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239cfde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239cfe0 je 0x1239cff7 */
  if (C.zf) goto L_1239cff7;
  /* 1239cfe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239cfe5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239cfe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239cfea je 0x1239cff7 */
  if (C.zf) goto L_1239cff7;
  /* 1239cfec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239cfef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239cff2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239cff5 jmp 0x1239cfd2 */
  goto L_1239cfd2;
L_1239cff7:;
  /* 1239cff7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239cffa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239cffd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239cfff jne 0x1239d009 */
  if (!C.zf) goto L_1239d009;
  /* 1239d001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d004 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d007 jmp 0x1239d00c */
  goto L_1239d00c;
L_1239d009:;
  /* 1239d009 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1239d00c:;
  /* 1239d00c mov esp, ebp */
  ESP = (EBP);
  /* 1239d00e pop ebp */
  EBP = (pop32());
  /* 1239d00f ret  */
  ESPCHK(0x1239cfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d010 @ 0x1239d010 (130 bytes, 43 insns) */
void f_1239d010(void) {
  FTRACE(0x1239d010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d010 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d011 mov ebp, esp */
  EBP = (ESP);
  /* 1239d013 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d017 cmp eax, dword ptr [0x123c1ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d01d jae 0x1239d041 */
  if (!C.cf) goto L_1239d041;
  /* 1239d01f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d022 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239d025 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d028 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239d02b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d02e mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239d035 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1239d03a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1239d03d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239d03f jne 0x1239d05c */
  if (!C.zf) goto L_1239d05c;
L_1239d041:;
  /* 1239d041 call 0x1239c790 */
  push32(0x1239d046u); f_1239c790();
  /* 1239d046 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239d04c call 0x1239c7a0 */
  push32(0x1239d051u); f_1239c7a0();
  /* 1239d051 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239d057 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d05a jmp 0x1239d08e */
  goto L_1239d08e;
L_1239d05c:;
  /* 1239d05c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d05f push edx */
  push32((uint32_t)(EDX));
  /* 1239d060 call 0x1239dfb0 */
  push32(0x1239d065u); f_1239dfb0();
  /* 1239d065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d068 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239d06b push eax */
  push32((uint32_t)(EAX));
  /* 1239d06c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d06f push ecx */
  push32((uint32_t)(ECX));
  /* 1239d070 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d073 push edx */
  push32((uint32_t)(EDX));
  /* 1239d074 call 0x1239d0a0 */
  push32(0x1239d079u); f_1239d0a0();
  /* 1239d079 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d07c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239d07f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d082 push eax */
  push32((uint32_t)(EAX));
  /* 1239d083 call 0x1239e040 */
  push32(0x1239d088u); f_1239e040();
  /* 1239d088 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d08b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239d08e:;
  /* 1239d08e mov esp, ebp */
  ESP = (EBP);
  /* 1239d090 pop ebp */
  EBP = (pop32());
  /* 1239d091 ret  */
  ESPCHK(0x1239d010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x1239d0a0 (178 bytes, 56 insns) */
void f_1239d0a0(void) {
  FTRACE(0x1239d0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1239d0a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d0a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d0a9 push eax */
  push32((uint32_t)(EAX));
  /* 1239d0aa call 0x1239de30 */
  push32(0x1239d0afu); f_1239de30();
  /* 1239d0af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d0b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1239d0b5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d0b9 jne 0x1239d0ce */
  if (!C.zf) goto L_1239d0ce;
  /* 1239d0bb call 0x1239c790 */
  push32(0x1239d0c0u); f_1239c790();
  /* 1239d0c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239d0c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d0c9 jmp 0x1239d14e */
  goto L_1239d14e;
L_1239d0ce:;
  /* 1239d0ce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239d0d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d0d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239d0d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d0d7 push edx */
  push32((uint32_t)(EDX));
  /* 1239d0d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239d0db push eax */
  push32((uint32_t)(EAX));
  /* 1239d0dc call dword ptr [0x123c32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32a8))), 0x1239d0e2u);
  /* 1239d0e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239d0e5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d0e9 jne 0x1239d0f6 */
  if (!C.zf) goto L_1239d0f6;
  /* 1239d0eb call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x1239d0f1u);
  /* 1239d0f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239d0f4 jmp 0x1239d0fd */
  goto L_1239d0fd;
L_1239d0f6:;
  /* 1239d0f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1239d0fd:;
  /* 1239d0fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d101 je 0x1239d114 */
  if (C.zf) goto L_1239d114;
  /* 1239d103 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d106 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d107 call 0x1239c6f0 */
  push32(0x1239d10cu); f_1239c6f0();
  /* 1239d10c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d10f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d112 jmp 0x1239d14e */
  goto L_1239d14e;
L_1239d114:;
  /* 1239d114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d117 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1239d11a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d11d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d120 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d123 mov ecx, dword ptr [edx*4 + 0x123c1ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 1239d12a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1239d12e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1239d131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d134 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239d137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d13a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239d13d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d140 mov eax, dword ptr [eax*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239d147 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1239d14b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1239d14e:;
  /* 1239d14e mov esp, ebp */
  ESP = (EBP);
  /* 1239d150 pop ebp */
  EBP = (pop32());
  /* 1239d151 ret  */
  ESPCHK(0x1239d0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d160 @ 0x1239d160 (130 bytes, 43 insns) */
void f_1239d160(void) {
  FTRACE(0x1239d160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d160 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d161 mov ebp, esp */
  EBP = (ESP);
  /* 1239d163 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d167 cmp eax, dword ptr [0x123c1ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d16d jae 0x1239d191 */
  if (!C.cf) goto L_1239d191;
  /* 1239d16f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d172 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239d175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d178 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239d17b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d17e mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239d185 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1239d18a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1239d18d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239d18f jne 0x1239d1ac */
  if (!C.zf) goto L_1239d1ac;
L_1239d191:;
  /* 1239d191 call 0x1239c790 */
  push32(0x1239d196u); f_1239c790();
  /* 1239d196 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239d19c call 0x1239c7a0 */
  push32(0x1239d1a1u); f_1239c7a0();
  /* 1239d1a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239d1a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d1aa jmp 0x1239d1de */
  goto L_1239d1de;
L_1239d1ac:;
  /* 1239d1ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d1af push edx */
  push32((uint32_t)(EDX));
  /* 1239d1b0 call 0x1239dfb0 */
  push32(0x1239d1b5u); f_1239dfb0();
  /* 1239d1b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d1b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239d1bb push eax */
  push32((uint32_t)(EAX));
  /* 1239d1bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d1bf push ecx */
  push32((uint32_t)(ECX));
  /* 1239d1c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d1c3 push edx */
  push32((uint32_t)(EDX));
  /* 1239d1c4 call 0x1239d1f0 */
  push32(0x1239d1c9u); f_1239d1f0();
  /* 1239d1c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d1cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239d1cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d1d2 push eax */
  push32((uint32_t)(EAX));
  /* 1239d1d3 call 0x1239e040 */
  push32(0x1239d1d8u); f_1239e040();
  /* 1239d1d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d1db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239d1de:;
  /* 1239d1de mov esp, ebp */
  ESP = (EBP);
  /* 1239d1e0 pop ebp */
  EBP = (pop32());
  /* 1239d1e1 ret  */
  ESPCHK(0x1239d160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x1239d1f0 (627 bytes, 182 insns) */
void f_1239d1f0(void) {
  FTRACE(0x1239d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1239d1f3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d1f9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1239d200 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239d203 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1239d209 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d20d jne 0x1239d216 */
  if (!C.zf) goto L_1239d216;
  /* 1239d20f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239d211 jmp 0x1239d45f */
  goto L_1239d45f;
L_1239d216:;
  /* 1239d216 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d219 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239d21c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d21f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239d222 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d225 mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239d22c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1239d231 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1239d234 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239d236 je 0x1239d248 */
  if (C.zf) goto L_1239d248;
  /* 1239d238 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239d23a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239d23c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d23f push edx */
  push32((uint32_t)(EDX));
  /* 1239d240 call 0x1239d0a0 */
  push32(0x1239d245u); f_1239d0a0();
  /* 1239d245 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239d248:;
  /* 1239d248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d24b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239d24e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d251 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239d254 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d257 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239d25e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1239d263 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1239d268 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239d26a je 0x1239d37c */
  if (C.zf) goto L_1239d37c;
  /* 1239d270 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d273 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239d276 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1239d27d:;
  /* 1239d27d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d280 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d283 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d286 jae 0x1239d37a */
  if (!C.cf) goto L_1239d37a;
  /* 1239d28c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1239d292 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1239d295:;
  /* 1239d295 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239d298 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1239d29e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d2a0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d2a6 jge 0x1239d307 */
  if ((C.sf==C.of)) goto L_1239d307;
  /* 1239d2a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d2ab sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d2ae cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d2b1 jae 0x1239d307 */
  if (!C.cf) goto L_1239d307;
  /* 1239d2b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d2b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1239d2b8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1239d2be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d2c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d2c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239d2c7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1239d2ce cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d2d1 jne 0x1239d2f1 */
  if (!C.zf) goto L_1239d2f1;
  /* 1239d2d3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1239d2d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d2dc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1239d2e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239d2e5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1239d2e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239d2eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d2ee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1239d2f1:;
  /* 1239d2f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239d2f4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1239d2fa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1239d2fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239d2ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d302 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239d305 jmp 0x1239d295 */
  goto L_1239d295;
L_1239d307:;
  /* 1239d307 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239d309 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1239d30f push edx */
  push32((uint32_t)(EDX));
  /* 1239d310 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239d313 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1239d319 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d31b push eax */
  push32((uint32_t)(EAX));
  /* 1239d31c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1239d322 push edx */
  push32((uint32_t)(EDX));
  /* 1239d323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d326 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239d329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d32c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239d32f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d332 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239d339 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1239d33c push eax */
  push32((uint32_t)(EAX));
  /* 1239d33d call dword ptr [0x123c32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d8))), 0x1239d343u);
  /* 1239d343 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239d345 je 0x1239d36a */
  if (C.zf) goto L_1239d36a;
  /* 1239d347 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239d34a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d350 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1239d353 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239d356 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1239d35c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d35e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d364 jge 0x1239d368 */
  if ((C.sf==C.of)) goto L_1239d368;
  /* 1239d366 jmp 0x1239d37a */
  goto L_1239d37a;
L_1239d368:;
  /* 1239d368 jmp 0x1239d375 */
  goto L_1239d375;
L_1239d36a:;
  /* 1239d36a call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x1239d370u);
  /* 1239d370 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1239d373 jmp 0x1239d37a */
  goto L_1239d37a;
L_1239d375:;
  /* 1239d375 jmp 0x1239d27d */
  goto L_1239d27d;
L_1239d37a:;
  /* 1239d37a jmp 0x1239d3cc */
  goto L_1239d3cc;
L_1239d37c:;
  /* 1239d37c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239d37e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1239d384 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d385 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239d388 push edx */
  push32((uint32_t)(EDX));
  /* 1239d389 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d38c push eax */
  push32((uint32_t)(EAX));
  /* 1239d38d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d390 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239d393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d396 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239d399 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d39c mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239d3a3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1239d3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d3a7 call dword ptr [0x123c32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d8))), 0x1239d3adu);
  /* 1239d3ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239d3af je 0x1239d3c3 */
  if (C.zf) goto L_1239d3c3;
  /* 1239d3b1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239d3b8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1239d3be mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1239d3c1 jmp 0x1239d3cc */
  goto L_1239d3cc;
L_1239d3c3:;
  /* 1239d3c3 call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x1239d3c9u);
  /* 1239d3c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1239d3cc:;
  /* 1239d3cc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d3d0 jne 0x1239d456 */
  if (!C.zf) goto L_1239d456;
  /* 1239d3d6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d3da je 0x1239d40a */
  if (C.zf) goto L_1239d40a;
  /* 1239d3dc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d3e0 jne 0x1239d3f9 */
  if (!C.zf) goto L_1239d3f9;
  /* 1239d3e2 call 0x1239c790 */
  push32(0x1239d3e7u); f_1239c790();
  /* 1239d3e7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239d3ed call 0x1239c7a0 */
  push32(0x1239d3f2u); f_1239c7a0();
  /* 1239d3f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239d3f5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1239d3f7 jmp 0x1239d405 */
  goto L_1239d405;
L_1239d3f9:;
  /* 1239d3f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239d3fc push edx */
  push32((uint32_t)(EDX));
  /* 1239d3fd call 0x1239c6f0 */
  push32(0x1239d402u); f_1239c6f0();
  /* 1239d402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239d405:;
  /* 1239d405 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d408 jmp 0x1239d45f */
  goto L_1239d45f;
L_1239d40a:;
  /* 1239d40a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d40d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239d410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d413 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239d416 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d419 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239d420 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1239d425 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1239d428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239d42a je 0x1239d43b */
  if (C.zf) goto L_1239d43b;
  /* 1239d42c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d42f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239d432 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d435 jne 0x1239d43b */
  if (!C.zf) goto L_1239d43b;
  /* 1239d437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239d439 jmp 0x1239d45f */
  goto L_1239d45f;
L_1239d43b:;
  /* 1239d43b call 0x1239c790 */
  push32(0x1239d440u); f_1239c790();
  /* 1239d440 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1239d446 call 0x1239c7a0 */
  push32(0x1239d44bu); f_1239c7a0();
  /* 1239d44b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239d451 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d454 jmp 0x1239d45f */
  goto L_1239d45f;
L_1239d456:;
  /* 1239d456 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239d459 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1239d45f:;
  /* 1239d45f mov esp, ebp */
  ESP = (EBP);
  /* 1239d461 pop ebp */
  EBP = (pop32());
  /* 1239d462 ret  */
  ESPCHK(0x1239d1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d470 @ 0x1239d470 (199 bytes, 68 insns) */
void f_1239d470(void) {
  FTRACE(0x1239d470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d470 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d471 mov ebp, esp */
  EBP = (ESP);
  /* 1239d473 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d474 push ebx */
  push32((uint32_t)(EBX));
  /* 1239d475 push esi */
  push32((uint32_t)(ESI));
  /* 1239d476 push edi */
  push32((uint32_t)(EDI));
L_1239d477:;
  /* 1239d477 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d47b jne 0x1239d49b */
  if (!C.zf) goto L_1239d49b;
  /* 1239d47d push 0x123bc0dc */
  push32((uint32_t)(0x123bc0dcu));
  /* 1239d482 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239d484 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1239d486 push 0x123bc1a8 */
  push32((uint32_t)(0x123bc1a8u));
  /* 1239d48b push 2 */
  push32((uint32_t)(0x2u));
  /* 1239d48d call 0x12393980 */
  push32(0x1239d492u); f_12393980();
  /* 1239d492 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d495 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d498 jne 0x1239d49b */
  if (!C.zf) goto L_1239d49b;
  /* 1239d49a int3  */
  x86_unimpl("int3 @ 0x1239d49a");
L_1239d49b:;
  /* 1239d49b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239d49d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239d49f jne 0x1239d477 */
  if (!C.zf) goto L_1239d477;
  /* 1239d4a1 mov ecx, dword ptr [0x123c0704] */
  ECX = (r32((uint32_t)(0x123c0704)));
  /* 1239d4a7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d4aa mov dword ptr [0x123c0704], ecx */
  w32((uint32_t)(0x123c0704), (ECX));
  /* 1239d4b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d4b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239d4b6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1239d4b8 push 0x123bc1a8 */
  push32((uint32_t)(0x123bc1a8u));
  /* 1239d4bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1239d4bf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1239d4c4 call 0x123948c0 */
  push32(0x1239d4c9u); f_123948c0();
  /* 1239d4c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d4cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d4cf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1239d4d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d4d5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d4d9 je 0x1239d4f6 */
  if (C.zf) goto L_1239d4f6;
  /* 1239d4db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d4de mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239d4e1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1239d4e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d4e7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1239d4ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d4ed mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1239d4f4 jmp 0x1239d51b */
  goto L_1239d51b;
L_1239d4f6:;
  /* 1239d4f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d4f9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239d4fc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1239d4ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d502 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1239d505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d508 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d50b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d50e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1239d511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d514 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1239d51b:;
  /* 1239d51b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d51e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d521 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239d524 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1239d526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d529 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1239d530 pop edi */
  EDI = (pop32());
  /* 1239d531 pop esi */
  ESI = (pop32());
  /* 1239d532 pop ebx */
  EBX = (pop32());
  /* 1239d533 mov esp, ebp */
  ESP = (EBP);
  /* 1239d535 pop ebp */
  EBP = (pop32());
  /* 1239d536 ret  */
  ESPCHK(0x1239d470u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1239d540 (50 bytes, 17 insns) */
void f_1239d540(void) {
  FTRACE(0x1239d540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d540 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d541 mov ebp, esp */
  EBP = (ESP);
  /* 1239d543 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d546 cmp eax, dword ptr [0x123c1ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d54c jb 0x1239d552 */
  if (C.cf) goto L_1239d552;
  /* 1239d54e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239d550 jmp 0x1239d570 */
  goto L_1239d570;
L_1239d552:;
  /* 1239d552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d555 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239d558 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d55b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239d55e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d561 mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239d568 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1239d56d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1239d570:;
  /* 1239d570 pop ebp */
  EBP = (pop32());
  /* 1239d571 ret  */
  ESPCHK(0x1239d540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d580 @ 0x1239d580 (300 bytes, 80 insns) */
void f_1239d580(void) {
  FTRACE(0x1239d580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d580 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d581 mov ebp, esp */
  EBP = (ESP);
  /* 1239d583 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d584 cmp dword ptr [0x123c1bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c1bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d58b jne 0x1239d599 */
  if (!C.zf) goto L_1239d599;
  /* 1239d58d mov dword ptr [0x123c1bc0], 0x200 */
  w32((uint32_t)(0x123c1bc0), (0x200u));
  /* 1239d597 jmp 0x1239d5ac */
  goto L_1239d5ac;
L_1239d599:;
  /* 1239d599 cmp dword ptr [0x123c1bc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x123c1bc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d5a0 jge 0x1239d5ac */
  if ((C.sf==C.of)) goto L_1239d5ac;
  /* 1239d5a2 mov dword ptr [0x123c1bc0], 0x14 */
  w32((uint32_t)(0x123c1bc0), (0x14u));
L_1239d5ac:;
  /* 1239d5ac push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1239d5b1 push 0x123bc1b4 */
  push32((uint32_t)(0x123bc1b4u));
  /* 1239d5b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239d5b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1239d5ba mov eax, dword ptr [0x123c1bc0] */
  EAX = (r32((uint32_t)(0x123c1bc0)));
  /* 1239d5bf push eax */
  push32((uint32_t)(EAX));
  /* 1239d5c0 call 0x12394cd0 */
  push32(0x1239d5c5u); f_12394cd0();
  /* 1239d5c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d5c8 mov dword ptr [0x123c0878], eax */
  w32((uint32_t)(0x123c0878), (EAX));
  /* 1239d5cd cmp dword ptr [0x123c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d5d4 jne 0x1239d615 */
  if (!C.zf) goto L_1239d615;
  /* 1239d5d6 mov dword ptr [0x123c1bc0], 0x14 */
  w32((uint32_t)(0x123c1bc0), (0x14u));
  /* 1239d5e0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1239d5e5 push 0x123bc1b4 */
  push32((uint32_t)(0x123bc1b4u));
  /* 1239d5ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1239d5ec push 4 */
  push32((uint32_t)(0x4u));
  /* 1239d5ee mov ecx, dword ptr [0x123c1bc0] */
  ECX = (r32((uint32_t)(0x123c1bc0)));
  /* 1239d5f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d5f5 call 0x12394cd0 */
  push32(0x1239d5fau); f_12394cd0();
  /* 1239d5fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d5fd mov dword ptr [0x123c0878], eax */
  w32((uint32_t)(0x123c0878), (EAX));
  /* 1239d602 cmp dword ptr [0x123c0878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d609 jne 0x1239d615 */
  if (!C.zf) goto L_1239d615;
  /* 1239d60b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1239d60d call 0x12393830 */
  push32(0x1239d612u); f_12393830();
  /* 1239d612 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239d615:;
  /* 1239d615 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239d61c jmp 0x1239d627 */
  goto L_1239d627;
L_1239d61e:;
  /* 1239d61e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d621 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d624 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239d627:;
  /* 1239d627 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d62b jge 0x1239d646 */
  if ((C.sf==C.of)) goto L_1239d646;
  /* 1239d62d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d630 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239d633 add eax, 0x123bf120 */
  { uint32_t _a=(EAX),_b=(0x123bf120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d638 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d63b mov edx, dword ptr [0x123c0878] */
  EDX = (r32((uint32_t)(0x123c0878)));
  /* 1239d641 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1239d644 jmp 0x1239d61e */
  goto L_1239d61e;
L_1239d646:;
  /* 1239d646 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239d64d jmp 0x1239d658 */
  goto L_1239d658;
L_1239d64f:;
  /* 1239d64f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d652 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d655 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239d658:;
  /* 1239d658 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d65c jge 0x1239d6a8 */
  if ((C.sf==C.of)) goto L_1239d6a8;
  /* 1239d65e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d661 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239d664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d667 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239d66a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d66d mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239d674 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d678 je 0x1239d696 */
  if (C.zf) goto L_1239d696;
  /* 1239d67a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d67d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239d680 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d683 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239d686 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239d689 mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239d690 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d694 jne 0x1239d6a6 */
  if (!C.zf) goto L_1239d6a6;
L_1239d696:;
  /* 1239d696 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239d699 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239d69c mov dword ptr [ecx + 0x123bf130], 0xffffffff */
  w32((uint32_t)(ECX + 0x123bf130), (0xffffffffu));
L_1239d6a6:;
  /* 1239d6a6 jmp 0x1239d64f */
  goto L_1239d64f;
L_1239d6a8:;
  /* 1239d6a8 mov esp, ebp */
  ESP = (EBP);
  /* 1239d6aa pop ebp */
  EBP = (pop32());
  /* 1239d6ab ret  */
  ESPCHK(0x1239d580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6b0 @ 0x1239d6b0 (26 bytes, 9 insns) */
void f_1239d6b0(void) {
  FTRACE(0x1239d6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1239d6b3 call 0x1239e2b0 */
  push32(0x1239d6b8u); f_1239e2b0();
  /* 1239d6b8 movsx eax, byte ptr [0x123c051c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x123c051c))));
  /* 1239d6bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239d6c1 je 0x1239d6c8 */
  if (C.zf) goto L_1239d6c8;
  /* 1239d6c3 call 0x1239e070 */
  push32(0x1239d6c8u); f_1239e070();
L_1239d6c8:;
  /* 1239d6c8 pop ebp */
  EBP = (pop32());
  /* 1239d6c9 ret  */
  ESPCHK(0x1239d6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x1239d6d0 (61 bytes, 20 insns) */
void f_1239d6d0(void) {
  FTRACE(0x1239d6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1239d6d3 cmp dword ptr [ebp + 8], 0x123bf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x123bf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d6da jb 0x1239d6fe */
  if (C.cf) goto L_1239d6fe;
  /* 1239d6dc cmp dword ptr [ebp + 8], 0x123bf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x123bf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d6e3 ja 0x1239d6fe */
  if ((!C.cf&&!C.zf)) goto L_1239d6fe;
  /* 1239d6e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d6e8 sub eax, 0x123bf120 */
  { uint32_t _a=(EAX),_b=(0x123bf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d6ed sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239d6f0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d6f3 push eax */
  push32((uint32_t)(EAX));
  /* 1239d6f4 call 0x123982c0 */
  push32(0x1239d6f9u); f_123982c0();
  /* 1239d6f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d6fc jmp 0x1239d70b */
  goto L_1239d70b;
L_1239d6fe:;
  /* 1239d6fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d701 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d704 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d705 call dword ptr [0x123c3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3368))), 0x1239d70bu);
L_1239d70b:;
  /* 1239d70b pop ebp */
  EBP = (pop32());
  /* 1239d70c ret  */
  ESPCHK(0x1239d6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d710 @ 0x1239d710 (41 bytes, 16 insns) */
void f_1239d710(void) {
  FTRACE(0x1239d710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d710 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d711 mov ebp, esp */
  EBP = (ESP);
  /* 1239d713 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d717 jge 0x1239d72a */
  if ((C.sf==C.of)) goto L_1239d72a;
  /* 1239d719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d71c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d71f push eax */
  push32((uint32_t)(EAX));
  /* 1239d720 call 0x123982c0 */
  push32(0x1239d725u); f_123982c0();
  /* 1239d725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d728 jmp 0x1239d737 */
  goto L_1239d737;
L_1239d72a:;
  /* 1239d72a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d72d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d730 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d731 call dword ptr [0x123c3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3368))), 0x1239d737u);
L_1239d737:;
  /* 1239d737 pop ebp */
  EBP = (pop32());
  /* 1239d738 ret  */
  ESPCHK(0x1239d710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d740 @ 0x1239d740 (61 bytes, 20 insns) */
void f_1239d740(void) {
  FTRACE(0x1239d740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d740 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d741 mov ebp, esp */
  EBP = (ESP);
  /* 1239d743 cmp dword ptr [ebp + 8], 0x123bf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x123bf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d74a jb 0x1239d76e */
  if (C.cf) goto L_1239d76e;
  /* 1239d74c cmp dword ptr [ebp + 8], 0x123bf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x123bf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d753 ja 0x1239d76e */
  if ((!C.cf&&!C.zf)) goto L_1239d76e;
  /* 1239d755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d758 sub eax, 0x123bf120 */
  { uint32_t _a=(EAX),_b=(0x123bf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d75d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239d760 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d763 push eax */
  push32((uint32_t)(EAX));
  /* 1239d764 call 0x12398360 */
  push32(0x1239d769u); f_12398360();
  /* 1239d769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d76c jmp 0x1239d77b */
  goto L_1239d77b;
L_1239d76e:;
  /* 1239d76e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d771 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d774 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d775 call dword ptr [0x123c336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c336c))), 0x1239d77bu);
L_1239d77b:;
  /* 1239d77b pop ebp */
  EBP = (pop32());
  /* 1239d77c ret  */
  ESPCHK(0x1239d740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d780 @ 0x1239d780 (41 bytes, 16 insns) */
void f_1239d780(void) {
  FTRACE(0x1239d780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d780 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d781 mov ebp, esp */
  EBP = (ESP);
  /* 1239d783 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d787 jge 0x1239d79a */
  if ((C.sf==C.of)) goto L_1239d79a;
  /* 1239d789 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d78c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d78f push eax */
  push32((uint32_t)(EAX));
  /* 1239d790 call 0x12398360 */
  push32(0x1239d795u); f_12398360();
  /* 1239d795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d798 jmp 0x1239d7a7 */
  goto L_1239d7a7;
L_1239d79a:;
  /* 1239d79a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d79d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d7a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d7a1 call dword ptr [0x123c336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c336c))), 0x1239d7a7u);
L_1239d7a7:;
  /* 1239d7a7 pop ebp */
  EBP = (pop32());
  /* 1239d7a8 ret  */
  ESPCHK(0x1239d780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7b0 @ 0x1239d7b0 (119 bytes, 34 insns) */
void f_1239d7b0(void) {
  FTRACE(0x1239d7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1239d7b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d7b6 push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 1239d7bb call dword ptr [0x123c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ec))), 0x1239d7c1u);
  /* 1239d7c1 cmp dword ptr [0x123c0864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d7c8 je 0x1239d7e8 */
  if (C.zf) goto L_1239d7e8;
  /* 1239d7ca push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 1239d7cf call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x1239d7d5u);
  /* 1239d7d5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1239d7d7 call 0x123982c0 */
  push32(0x1239d7dcu); f_123982c0();
  /* 1239d7dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d7df mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1239d7e6 jmp 0x1239d7ef */
  goto L_1239d7ef;
L_1239d7e8:;
  /* 1239d7e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1239d7ef:;
  /* 1239d7ef mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1239d7f3 push eax */
  push32((uint32_t)(EAX));
  /* 1239d7f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d7f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d7f8 call 0x1239d830 */
  push32(0x1239d7fdu); f_1239d830();
  /* 1239d7fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d800 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239d803 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d807 je 0x1239d815 */
  if (C.zf) goto L_1239d815;
  /* 1239d809 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1239d80b call 0x12398360 */
  push32(0x1239d810u); f_12398360();
  /* 1239d810 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d813 jmp 0x1239d820 */
  goto L_1239d820;
L_1239d815:;
  /* 1239d815 push 0x123c0874 */
  push32((uint32_t)(0x123c0874u));
  /* 1239d81a call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x1239d820u);
L_1239d820:;
  /* 1239d820 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239d823 mov esp, ebp */
  ESP = (EBP);
  /* 1239d825 pop ebp */
  EBP = (pop32());
  /* 1239d826 ret  */
  ESPCHK(0x1239d7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d830 @ 0x1239d830 (160 bytes, 50 insns) */
void f_1239d830(void) {
  FTRACE(0x1239d830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d830 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d831 mov ebp, esp */
  EBP = (ESP);
  /* 1239d833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239d836 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d83a jne 0x1239d843 */
  if (!C.zf) goto L_1239d843;
  /* 1239d83c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239d83e jmp 0x1239d8cc */
  goto L_1239d8cc;
L_1239d843:;
  /* 1239d843 cmp dword ptr [0x123c06e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d84a jne 0x1239d87a */
  if (!C.zf) goto L_1239d87a;
  /* 1239d84c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239d84f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d854 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d859 jle 0x1239d86b */
  if ((C.zf||C.sf!=C.of)) goto L_1239d86b;
  /* 1239d85b call 0x1239c790 */
  push32(0x1239d860u); f_1239c790();
  /* 1239d860 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1239d866 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d869 jmp 0x1239d8cc */
  goto L_1239d8cc;
L_1239d86b:;
  /* 1239d86b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d86e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1239d871 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1239d873 mov eax, 1 */
  EAX = (0x1u);
  /* 1239d878 jmp 0x1239d8cc */
  goto L_1239d8cc;
L_1239d87a:;
  /* 1239d87a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239d881 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1239d884 push eax */
  push32((uint32_t)(EAX));
  /* 1239d885 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239d887 mov ecx, dword ptr [0x123beea4] */
  ECX = (r32((uint32_t)(0x123beea4)));
  /* 1239d88d push ecx */
  push32((uint32_t)(ECX));
  /* 1239d88e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d891 push edx */
  push32((uint32_t)(EDX));
  /* 1239d892 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239d894 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1239d897 push eax */
  push32((uint32_t)(EAX));
  /* 1239d898 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1239d89d mov ecx, dword ptr [0x123c06f8] */
  ECX = (r32((uint32_t)(0x123c06f8)));
  /* 1239d8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d8a4 call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x1239d8aau);
  /* 1239d8aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239d8ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d8b1 je 0x1239d8b9 */
  if (C.zf) goto L_1239d8b9;
  /* 1239d8b3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d8b7 je 0x1239d8c9 */
  if (C.zf) goto L_1239d8c9;
L_1239d8b9:;
  /* 1239d8b9 call 0x1239c790 */
  push32(0x1239d8beu); f_1239c790();
  /* 1239d8be mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1239d8c4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239d8c7 jmp 0x1239d8cc */
  goto L_1239d8cc;
L_1239d8c9:;
  /* 1239d8c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239d8cc:;
  /* 1239d8cc mov esp, ebp */
  ESP = (EBP);
  /* 1239d8ce pop ebp */
  EBP = (pop32());
  /* 1239d8cf ret  */
  ESPCHK(0x1239d830u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1239d8d0 (32 bytes, 18 insns) */
void f_1239d8d0(void) {
  FTRACE(0x1239d8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1239d8d3 push ebx */
  push32((uint32_t)(EBX));
  /* 1239d8d4 push esi */
  push32((uint32_t)(ESI));
  /* 1239d8d5 push edi */
  push32((uint32_t)(EDI));
  /* 1239d8d6 push ebp */
  push32((uint32_t)(EBP));
  /* 1239d8d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239d8d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239d8db push 0x1239d8e8 */
  push32((uint32_t)(0x1239d8e8u));
  /* 1239d8e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1239d8e3 call 0x123a501c */
  push32(0x1239d8e8u); f_123a501c();
  /* 1239d8e8 pop ebp */
  EBP = (pop32());
  /* 1239d8e9 pop edi */
  EDI = (pop32());
  /* 1239d8ea pop esi */
  ESI = (pop32());
  /* 1239d8eb pop ebx */
  EBX = (pop32());
  /* 1239d8ec mov esp, ebp */
  ESP = (EBP);
  /* 1239d8ee pop ebp */
  EBP = (pop32());
  /* 1239d8ef ret  */
  ESPCHK(0x1239d8d0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1239d912 (104 bytes, 33 insns) */
void f_1239d912(void) {
  FTRACE(0x1239d912u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d912 push ebx */
  push32((uint32_t)(EBX));
  /* 1239d913 push esi */
  push32((uint32_t)(ESI));
  /* 1239d914 push edi */
  push32((uint32_t)(EDI));
  /* 1239d915 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1239d919 push eax */
  push32((uint32_t)(EAX));
  /* 1239d91a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1239d91c push 0x1239d8f0 */
  push32((uint32_t)(0x1239d8f0u));
  /* 1239d921 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1239d928 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1239d92f:;
  /* 1239d92f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1239d933 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1239d936 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1239d939 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d93c je 0x1239d96c */
  if (C.zf) goto L_1239d96c;
  /* 1239d93e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d942 je 0x1239d96c */
  if (C.zf) goto L_1239d96c;
  /* 1239d944 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1239d947 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1239d94a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1239d94e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1239d951 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239d956 jne 0x1239d96a */
  if (!C.zf) goto L_1239d96a;
  /* 1239d958 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1239d95d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1239d961 call 0x1239d9a6 */
  push32(0x1239d966u); f_1239d9a6();
  /* 1239d966 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1239d96au);
L_1239d96a:;
  /* 1239d96a jmp 0x1239d92f */
  goto L_1239d92f;
L_1239d96c:;
  /* 1239d96c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1239d973 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239d976 pop edi */
  EDI = (pop32());
  /* 1239d977 pop esi */
  ESI = (pop32());
  /* 1239d978 pop ebx */
  EBX = (pop32());
  /* 1239d979 ret  */
  ESPCHK(0x1239d912u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a6 @ 0x1239d9a6 (24 bytes, 10 insns) */
void f_1239d9a6(void) {
  FTRACE(0x1239d9a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239d9a6 push ebx */
  push32((uint32_t)(EBX));
  /* 1239d9a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1239d9a8 mov ebx, 0x123bf3b8 */
  EBX = (0x123bf3b8u);
  /* 1239d9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239d9b0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1239d9b3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1239d9b6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1239d9b9 pop ecx */
  ECX = (pop32());
  /* 1239d9ba pop ebx */
  EBX = (pop32());
  /* 1239d9bb ret 4 */
  ESPCHK(0x1239d9a6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000da85 @ 0x1239da85 (27 bytes, 11 insns) */
void f_1239da85(void) {
  FTRACE(0x1239da85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239da85 push ebp */
  push32((uint32_t)(EBP));
  /* 1239da86 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1239da8a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1239da8c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1239da8f push eax */
  push32((uint32_t)(EAX));
  /* 1239da90 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1239da93 push eax */
  push32((uint32_t)(EAX));
  /* 1239da94 call 0x1239d912 */
  push32(0x1239da99u); f_1239d912();
  /* 1239da99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239da9c pop ebp */
  EBP = (pop32());
  /* 1239da9d ret 4 */
  ESPCHK(0x1239da85u, _esp0);
  ESP += 8; return;
}

/* FUN_1000daa0 @ 0x1239daa0 (482 bytes, 138 insns) */
void f_1239daa0(void) {
  FTRACE(0x1239daa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239daa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239daa1 mov ebp, esp */
  EBP = (ESP);
  /* 1239daa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239daa6 push esi */
  push32((uint32_t)(ESI));
  /* 1239daa7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1239daae push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1239dab0 call 0x123982c0 */
  push32(0x1239dab5u); f_123982c0();
  /* 1239dab5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dab8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239dabf jmp 0x1239daca */
  goto L_1239daca;
L_1239dac1:;
  /* 1239dac1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239dac4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dac7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1239daca:;
  /* 1239daca cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dace jge 0x1239dc70 */
  if ((C.sf==C.of)) goto L_1239dc70;
  /* 1239dad4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239dad7 cmp dword ptr [ecx*4 + 0x123c1ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x123c1ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dadf je 0x1239dbd6 */
  if (C.zf) goto L_1239dbd6;
  /* 1239dae5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239dae8 mov eax, dword ptr [edx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 1239daef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239daf2 jmp 0x1239dafd */
  goto L_1239dafd;
L_1239daf4:;
  /* 1239daf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239daf7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dafa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1239dafd:;
  /* 1239dafd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239db00 mov eax, dword ptr [edx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 1239db07 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239db0c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239db0f jae 0x1239dbc6 */
  if (!C.cf) goto L_1239dbc6;
  /* 1239db15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1239db1c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1239db1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239db21 jne 0x1239dbc1 */
  if (!C.zf) goto L_1239dbc1;
  /* 1239db27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db2a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239db2e jne 0x1239db69 */
  if (!C.zf) goto L_1239db69;
  /* 1239db30 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1239db32 call 0x123982c0 */
  push32(0x1239db37u); f_123982c0();
  /* 1239db37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239db3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db3d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239db41 jne 0x1239db5f */
  if (!C.zf) goto L_1239db5f;
  /* 1239db43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db46 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239db49 push edx */
  push32((uint32_t)(EDX));
  /* 1239db4a call dword ptr [0x123c3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3364))), 0x1239db50u);
  /* 1239db50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db53 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1239db56 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239db59 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1239db5f:;
  /* 1239db5f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1239db61 call 0x12398360 */
  push32(0x1239db66u); f_12398360();
  /* 1239db66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239db69:;
  /* 1239db69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db6c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239db6f push eax */
  push32((uint32_t)(EAX));
  /* 1239db70 call dword ptr [0x123c3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3368))), 0x1239db76u);
  /* 1239db76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db79 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1239db7d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1239db80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239db82 je 0x1239db96 */
  if (C.zf) goto L_1239db96;
  /* 1239db84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db87 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239db8a push eax */
  push32((uint32_t)(EAX));
  /* 1239db8b call dword ptr [0x123c336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c336c))), 0x1239db91u);
  /* 1239db91 jmp 0x1239daf4 */
  goto L_1239daf4;
L_1239db96:;
  /* 1239db96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239db99 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1239db9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239dba2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239dba5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239dba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dbab sub eax, dword ptr [edx*4 + 0x123c1ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x123c1ec0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239dbb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1239dbb3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1239dbb8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1239dbba add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dbbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239dbbf jmp 0x1239dbc6 */
  goto L_1239dbc6;
L_1239dbc1:;
  /* 1239dbc1 jmp 0x1239daf4 */
  goto L_1239daf4;
L_1239dbc6:;
  /* 1239dbc6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dbca je 0x1239dbd1 */
  if (C.zf) goto L_1239dbd1;
  /* 1239dbcc jmp 0x1239dc70 */
  goto L_1239dc70;
L_1239dbd1:;
  /* 1239dbd1 jmp 0x1239dc6b */
  goto L_1239dc6b;
L_1239dbd6:;
  /* 1239dbd6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1239dbd8 push 0x123bc1bc */
  push32((uint32_t)(0x123bc1bcu));
  /* 1239dbdd push 2 */
  push32((uint32_t)(0x2u));
  /* 1239dbdf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1239dbe4 call 0x123948c0 */
  push32(0x1239dbe9u); f_123948c0();
  /* 1239dbe9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dbec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239dbef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dbf3 je 0x1239dc69 */
  if (C.zf) goto L_1239dc69;
  /* 1239dbf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239dbf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dbfb mov dword ptr [eax*4 + 0x123c1ec0], ecx */
  w32((uint32_t)(EAX*4 + 0x123c1ec0), (ECX));
  /* 1239dc02 mov edx, dword ptr [0x123c1ffc] */
  EDX = (r32((uint32_t)(0x123c1ffc)));
  /* 1239dc08 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dc0b mov dword ptr [0x123c1ffc], edx */
  w32((uint32_t)(0x123c1ffc), (EDX));
  /* 1239dc11 jmp 0x1239dc1c */
  goto L_1239dc1c;
L_1239dc13:;
  /* 1239dc13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dc16 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dc19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239dc1c:;
  /* 1239dc1c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239dc1f mov edx, dword ptr [ecx*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239dc26 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dc2c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dc2f jae 0x1239dc54 */
  if (!C.cf) goto L_1239dc54;
  /* 1239dc31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dc34 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1239dc38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dc3b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1239dc41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dc44 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1239dc48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dc4b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1239dc52 jmp 0x1239dc13 */
  goto L_1239dc13;
L_1239dc54:;
  /* 1239dc54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239dc57 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239dc5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239dc5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239dc60 push edx */
  push32((uint32_t)(EDX));
  /* 1239dc61 call 0x1239dfb0 */
  push32(0x1239dc66u); f_1239dfb0();
  /* 1239dc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239dc69:;
  /* 1239dc69 jmp 0x1239dc70 */
  goto L_1239dc70;
L_1239dc6b:;
  /* 1239dc6b jmp 0x1239dac1 */
  goto L_1239dac1;
L_1239dc70:;
  /* 1239dc70 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1239dc72 call 0x12398360 */
  push32(0x1239dc77u); f_12398360();
  /* 1239dc77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dc7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239dc7d pop esi */
  ESI = (pop32());
  /* 1239dc7e mov esp, ebp */
  ESP = (EBP);
  /* 1239dc80 pop ebp */
  EBP = (pop32());
  /* 1239dc81 ret  */
  ESPCHK(0x1239daa0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1239dc90 (183 bytes, 57 insns) */
void f_1239dc90(void) {
  FTRACE(0x1239dc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239dc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1239dc91 mov ebp, esp */
  EBP = (ESP);
  /* 1239dc93 push ecx */
  push32((uint32_t)(ECX));
  /* 1239dc94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dc97 cmp eax, dword ptr [0x123c1ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dc9d jae 0x1239dd2a */
  if (!C.cf) goto L_1239dd2a;
  /* 1239dca3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dca6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239dca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dcac and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239dcaf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239dcb2 mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239dcb9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dcbd jne 0x1239dd2a */
  if (!C.zf) goto L_1239dd2a;
  /* 1239dcbf cmp dword ptr [0x123c04dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c04dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dcc6 jne 0x1239dd0a */
  if (!C.zf) goto L_1239dd0a;
  /* 1239dcc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dccb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239dcce cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dcd2 je 0x1239dce2 */
  if (C.zf) goto L_1239dce2;
  /* 1239dcd4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dcd8 je 0x1239dcf0 */
  if (C.zf) goto L_1239dcf0;
  /* 1239dcda cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dcde je 0x1239dcfe */
  if (C.zf) goto L_1239dcfe;
  /* 1239dce0 jmp 0x1239dd0a */
  goto L_1239dd0a;
L_1239dce2:;
  /* 1239dce2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239dce5 push edx */
  push32((uint32_t)(EDX));
  /* 1239dce6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1239dce8 call dword ptr [0x123c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ac))), 0x1239dceeu);
  /* 1239dcee jmp 0x1239dd0a */
  goto L_1239dd0a;
L_1239dcf0:;
  /* 1239dcf0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239dcf3 push eax */
  push32((uint32_t)(EAX));
  /* 1239dcf4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1239dcf6 call dword ptr [0x123c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ac))), 0x1239dcfcu);
  /* 1239dcfc jmp 0x1239dd0a */
  goto L_1239dd0a;
L_1239dcfe:;
  /* 1239dcfe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239dd01 push ecx */
  push32((uint32_t)(ECX));
  /* 1239dd02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1239dd04 call dword ptr [0x123c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ac))), 0x1239dd0au);
L_1239dd0a:;
  /* 1239dd0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dd0d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1239dd10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dd13 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1239dd16 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239dd19 mov ecx, dword ptr [edx*4 + 0x123c1ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 1239dd20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239dd23 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1239dd26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239dd28 jmp 0x1239dd43 */
  goto L_1239dd43;
L_1239dd2a:;
  /* 1239dd2a call 0x1239c790 */
  push32(0x1239dd2fu); f_1239c790();
  /* 1239dd2f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239dd35 call 0x1239c7a0 */
  push32(0x1239dd3au); f_1239c7a0();
  /* 1239dd3a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239dd40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1239dd43:;
  /* 1239dd43 mov esp, ebp */
  ESP = (EBP);
  /* 1239dd45 pop ebp */
  EBP = (pop32());
  /* 1239dd46 ret  */
  ESPCHK(0x1239dc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd50 @ 0x1239dd50 (216 bytes, 63 insns) */
void f_1239dd50(void) {
  FTRACE(0x1239dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 1239dd51 mov ebp, esp */
  EBP = (ESP);
  /* 1239dd53 push ecx */
  push32((uint32_t)(ECX));
  /* 1239dd54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dd57 cmp eax, dword ptr [0x123c1ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dd5d jae 0x1239de0b */
  if (!C.cf) goto L_1239de0b;
  /* 1239dd63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dd66 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239dd69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dd6c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239dd6f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239dd72 mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239dd79 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1239dd7e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1239dd81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239dd83 je 0x1239de0b */
  if (C.zf) goto L_1239de0b;
  /* 1239dd89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dd8c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1239dd8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dd92 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1239dd95 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239dd98 mov ecx, dword ptr [edx*4 + 0x123c1ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 1239dd9f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dda3 je 0x1239de0b */
  if (C.zf) goto L_1239de0b;
  /* 1239dda5 cmp dword ptr [0x123c04dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c04dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ddac jne 0x1239ddea */
  if (!C.zf) goto L_1239ddea;
  /* 1239ddae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ddb1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239ddb4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ddb8 je 0x1239ddc8 */
  if (C.zf) goto L_1239ddc8;
  /* 1239ddba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ddbe je 0x1239ddd4 */
  if (C.zf) goto L_1239ddd4;
  /* 1239ddc0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ddc4 je 0x1239dde0 */
  if (C.zf) goto L_1239dde0;
  /* 1239ddc6 jmp 0x1239ddea */
  goto L_1239ddea;
L_1239ddc8:;
  /* 1239ddc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ddca push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1239ddcc call dword ptr [0x123c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ac))), 0x1239ddd2u);
  /* 1239ddd2 jmp 0x1239ddea */
  goto L_1239ddea;
L_1239ddd4:;
  /* 1239ddd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ddd6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1239ddd8 call dword ptr [0x123c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ac))), 0x1239dddeu);
  /* 1239ddde jmp 0x1239ddea */
  goto L_1239ddea;
L_1239dde0:;
  /* 1239dde0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239dde2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1239dde4 call dword ptr [0x123c32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ac))), 0x1239ddeau);
L_1239ddea:;
  /* 1239ddea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dded sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239ddf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ddf3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239ddf6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239ddf9 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239de00 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1239de07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239de09 jmp 0x1239de24 */
  goto L_1239de24;
L_1239de0b:;
  /* 1239de0b call 0x1239c790 */
  push32(0x1239de10u); f_1239c790();
  /* 1239de10 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239de16 call 0x1239c7a0 */
  push32(0x1239de1bu); f_1239c7a0();
  /* 1239de1b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239de21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1239de24:;
  /* 1239de24 mov esp, ebp */
  ESP = (EBP);
  /* 1239de26 pop ebp */
  EBP = (pop32());
  /* 1239de27 ret  */
  ESPCHK(0x1239dd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de30 @ 0x1239de30 (102 bytes, 30 insns) */
void f_1239de30(void) {
  FTRACE(0x1239de30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239de30 push ebp */
  push32((uint32_t)(EBP));
  /* 1239de31 mov ebp, esp */
  EBP = (ESP);
  /* 1239de33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239de36 cmp eax, dword ptr [0x123c1ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239de3c jae 0x1239de7b */
  if (!C.cf) goto L_1239de7b;
  /* 1239de3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239de41 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239de44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239de47 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239de4a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239de4d mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239de54 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1239de59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1239de5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239de5e je 0x1239de7b */
  if (C.zf) goto L_1239de7b;
  /* 1239de60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239de63 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1239de66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239de69 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1239de6c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239de6f mov ecx, dword ptr [edx*4 + 0x123c1ec0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 1239de76 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1239de79 jmp 0x1239de94 */
  goto L_1239de94;
L_1239de7b:;
  /* 1239de7b call 0x1239c790 */
  push32(0x1239de80u); f_1239c790();
  /* 1239de80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239de86 call 0x1239c7a0 */
  push32(0x1239de8bu); f_1239c7a0();
  /* 1239de8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239de91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1239de94:;
  /* 1239de94 pop ebp */
  EBP = (pop32());
  /* 1239de95 ret  */
  ESPCHK(0x1239de30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dea0 @ 0x1239dea0 (260 bytes, 83 insns) */
void f_1239dea0(void) {
  FTRACE(0x1239dea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239dea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239dea1 mov ebp, esp */
  EBP = (ESP);
  /* 1239dea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239dea6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239deaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239dead and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1239deb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239deb2 je 0x1239debd */
  if (C.zf) goto L_1239debd;
  /* 1239deb4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1239deb7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1239deba mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1239debd:;
  /* 1239debd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239dec0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1239dec6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239dec8 je 0x1239ded2 */
  if (C.zf) goto L_1239ded2;
  /* 1239deca mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1239decd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1239decf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1239ded2:;
  /* 1239ded2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ded5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1239dedb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239dedd je 0x1239dee8 */
  if (C.zf) goto L_1239dee8;
  /* 1239dedf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1239dee2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1239dee5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1239dee8:;
  /* 1239dee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239deeb push eax */
  push32((uint32_t)(EAX));
  /* 1239deec call dword ptr [0x123c3264] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3264))), 0x1239def2u);
  /* 1239def2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239def5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239def9 jne 0x1239df12 */
  if (!C.zf) goto L_1239df12;
  /* 1239defb call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x1239df01u);
  /* 1239df01 push eax */
  push32((uint32_t)(EAX));
  /* 1239df02 call 0x1239c6f0 */
  push32(0x1239df07u); f_1239c6f0();
  /* 1239df07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239df0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239df0d jmp 0x1239dfa0 */
  goto L_1239dfa0;
L_1239df12:;
  /* 1239df12 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239df16 jne 0x1239df23 */
  if (!C.zf) goto L_1239df23;
  /* 1239df18 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1239df1b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1239df1e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1239df21 jmp 0x1239df32 */
  goto L_1239df32;
L_1239df23:;
  /* 1239df23 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239df27 jne 0x1239df32 */
  if (!C.zf) goto L_1239df32;
  /* 1239df29 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1239df2c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1239df2f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1239df32:;
  /* 1239df32 call 0x1239daa0 */
  push32(0x1239df37u); f_1239daa0();
  /* 1239df37 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239df3a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239df3e jne 0x1239df5b */
  if (!C.zf) goto L_1239df5b;
  /* 1239df40 call 0x1239c790 */
  push32(0x1239df45u); f_1239c790();
  /* 1239df45 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1239df4b call 0x1239c7a0 */
  push32(0x1239df50u); f_1239c7a0();
  /* 1239df50 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239df56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239df59 jmp 0x1239dfa0 */
  goto L_1239dfa0;
L_1239df5b:;
  /* 1239df5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239df5e push eax */
  push32((uint32_t)(EAX));
  /* 1239df5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239df62 push ecx */
  push32((uint32_t)(ECX));
  /* 1239df63 call 0x1239dc90 */
  push32(0x1239df68u); f_1239dc90();
  /* 1239df68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239df6b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1239df6e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1239df71 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1239df74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239df77 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239df7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239df7d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239df80 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239df83 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239df8a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1239df8d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1239df91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239df94 push ecx */
  push32((uint32_t)(ECX));
  /* 1239df95 call 0x1239e040 */
  push32(0x1239df9au); f_1239e040();
  /* 1239df9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239df9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1239dfa0:;
  /* 1239dfa0 mov esp, ebp */
  ESP = (EBP);
  /* 1239dfa2 pop ebp */
  EBP = (pop32());
  /* 1239dfa3 ret  */
  ESPCHK(0x1239dea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfb0 @ 0x1239dfb0 (134 bytes, 44 insns) */
void f_1239dfb0(void) {
  FTRACE(0x1239dfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239dfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239dfb1 mov ebp, esp */
  EBP = (ESP);
  /* 1239dfb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1239dfb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dfb7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239dfba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239dfbd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239dfc0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239dfc3 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239dfca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dfcc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239dfcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dfd2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dfd6 jne 0x1239e011 */
  if (!C.zf) goto L_1239e011;
  /* 1239dfd8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1239dfda call 0x123982c0 */
  push32(0x1239dfdfu); f_123982c0();
  /* 1239dfdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dfe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dfe5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239dfe9 jne 0x1239e007 */
  if (!C.zf) goto L_1239e007;
  /* 1239dfeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dfee add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239dff1 push edx */
  push32((uint32_t)(EDX));
  /* 1239dff2 call dword ptr [0x123c3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3364))), 0x1239dff8u);
  /* 1239dff8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239dffb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1239dffe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e004 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1239e007:;
  /* 1239e007 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1239e009 call 0x12398360 */
  push32(0x1239e00eu); f_12398360();
  /* 1239e00e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239e011:;
  /* 1239e011 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e014 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239e017 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e01a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239e01d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e020 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239e027 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1239e02b push eax */
  push32((uint32_t)(EAX));
  /* 1239e02c call dword ptr [0x123c3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3368))), 0x1239e032u);
  /* 1239e032 mov esp, ebp */
  ESP = (EBP);
  /* 1239e034 pop ebp */
  EBP = (pop32());
  /* 1239e035 ret  */
  ESPCHK(0x1239dfb0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1239e040 (38 bytes, 13 insns) */
void f_1239e040(void) {
  FTRACE(0x1239e040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e040 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e041 mov ebp, esp */
  EBP = (ESP);
  /* 1239e043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e046 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239e049 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e04c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239e04f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e052 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239e059 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1239e05d push eax */
  push32((uint32_t)(EAX));
  /* 1239e05e call dword ptr [0x123c336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c336c))), 0x1239e064u);
  /* 1239e064 pop ebp */
  EBP = (pop32());
  /* 1239e065 ret  */
  ESPCHK(0x1239e040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x1239e070 (218 bytes, 63 insns) */
void f_1239e070(void) {
  FTRACE(0x1239e070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e070 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e071 mov ebp, esp */
  EBP = (ESP);
  /* 1239e073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e076 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239e07d push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e07f call 0x123982c0 */
  push32(0x1239e084u); f_123982c0();
  /* 1239e084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e087 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1239e08e jmp 0x1239e099 */
  goto L_1239e099;
L_1239e090:;
  /* 1239e090 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e093 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e096 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1239e099:;
  /* 1239e099 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e09c cmp ecx, dword ptr [0x123c1bc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1bc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e0a2 jge 0x1239e139 */
  if ((C.sf==C.of)) goto L_1239e139;
  /* 1239e0a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e0ab mov eax, dword ptr [0x123c0878] */
  EAX = (r32((uint32_t)(0x123c0878)));
  /* 1239e0b0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e0b4 je 0x1239e134 */
  if (C.zf) goto L_1239e134;
  /* 1239e0b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e0b9 mov edx, dword ptr [0x123c0878] */
  EDX = (r32((uint32_t)(0x123c0878)));
  /* 1239e0bf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1239e0c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239e0c5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1239e0cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239e0cd je 0x1239e0f1 */
  if (C.zf) goto L_1239e0f1;
  /* 1239e0cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e0d2 mov eax, dword ptr [0x123c0878] */
  EAX = (r32((uint32_t)(0x123c0878)));
  /* 1239e0d7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1239e0da push ecx */
  push32((uint32_t)(ECX));
  /* 1239e0db call 0x1239ee60 */
  push32(0x1239e0e0u); f_1239ee60();
  /* 1239e0e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e0e3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e0e6 je 0x1239e0f1 */
  if (C.zf) goto L_1239e0f1;
  /* 1239e0e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e0eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e0ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239e0f1:;
  /* 1239e0f1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e0f5 jl 0x1239e134 */
  if ((C.sf!=C.of)) goto L_1239e134;
  /* 1239e0f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e0fa mov ecx, dword ptr [0x123c0878] */
  ECX = (r32((uint32_t)(0x123c0878)));
  /* 1239e100 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1239e103 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e106 push edx */
  push32((uint32_t)(EDX));
  /* 1239e107 call dword ptr [0x123c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c332c))), 0x1239e10du);
  /* 1239e10d push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e10f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e112 mov ecx, dword ptr [0x123c0878] */
  ECX = (r32((uint32_t)(0x123c0878)));
  /* 1239e118 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1239e11b push edx */
  push32((uint32_t)(EDX));
  /* 1239e11c call 0x12395350 */
  push32(0x1239e121u); f_12395350();
  /* 1239e121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e124 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e127 mov ecx, dword ptr [0x123c0878] */
  ECX = (r32((uint32_t)(0x123c0878)));
  /* 1239e12d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1239e134:;
  /* 1239e134 jmp 0x1239e090 */
  goto L_1239e090;
L_1239e139:;
  /* 1239e139 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e13b call 0x12398360 */
  push32(0x1239e140u); f_12398360();
  /* 1239e140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e143 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e146 mov esp, ebp */
  ESP = (EBP);
  /* 1239e148 pop ebp */
  EBP = (pop32());
  /* 1239e149 ret  */
  ESPCHK(0x1239e070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e150 @ 0x1239e150 (68 bytes, 26 insns) */
void f_1239e150(void) {
  FTRACE(0x1239e150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e150 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e151 mov ebp, esp */
  EBP = (ESP);
  /* 1239e153 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e154 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e158 jne 0x1239e166 */
  if (!C.zf) goto L_1239e166;
  /* 1239e15a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239e15c call 0x1239e2c0 */
  push32(0x1239e161u); f_1239e2c0();
  /* 1239e161 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e164 jmp 0x1239e190 */
  goto L_1239e190;
L_1239e166:;
  /* 1239e166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e169 push eax */
  push32((uint32_t)(EAX));
  /* 1239e16a call 0x1239d6d0 */
  push32(0x1239e16fu); f_1239d6d0();
  /* 1239e16f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e175 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e176 call 0x1239e1a0 */
  push32(0x1239e17bu); f_1239e1a0();
  /* 1239e17b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e17e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239e181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e184 push edx */
  push32((uint32_t)(EDX));
  /* 1239e185 call 0x1239d740 */
  push32(0x1239e18au); f_1239d740();
  /* 1239e18a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e18d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239e190:;
  /* 1239e190 mov esp, ebp */
  ESP = (EBP);
  /* 1239e192 pop ebp */
  EBP = (pop32());
  /* 1239e193 ret  */
  ESPCHK(0x1239e150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1a0 @ 0x1239e1a0 (65 bytes, 26 insns) */
void f_1239e1a0(void) {
  FTRACE(0x1239e1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1239e1a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e1a6 push eax */
  push32((uint32_t)(EAX));
  /* 1239e1a7 call 0x1239e1f0 */
  push32(0x1239e1acu); f_1239e1f0();
  /* 1239e1ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e1af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e1b1 je 0x1239e1b8 */
  if (C.zf) goto L_1239e1b8;
  /* 1239e1b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239e1b6 jmp 0x1239e1df */
  goto L_1239e1df;
L_1239e1b8:;
  /* 1239e1b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e1bb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239e1be and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1239e1c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239e1c6 je 0x1239e1dd */
  if (C.zf) goto L_1239e1dd;
  /* 1239e1c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e1cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239e1ce push ecx */
  push32((uint32_t)(ECX));
  /* 1239e1cf call 0x1239efb0 */
  push32(0x1239e1d4u); f_1239efb0();
  /* 1239e1d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e1d7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239e1d9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e1db jmp 0x1239e1df */
  goto L_1239e1df;
L_1239e1dd:;
  /* 1239e1dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239e1df:;
  /* 1239e1df pop ebp */
  EBP = (pop32());
  /* 1239e1e0 ret  */
  ESPCHK(0x1239e1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1f0 @ 0x1239e1f0 (183 bytes, 62 insns) */
void f_1239e1f0(void) {
  FTRACE(0x1239e1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1239e1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e1f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239e1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e200 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239e203 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e206 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239e209 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1239e20c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e20f jne 0x1239e28b */
  if (!C.zf) goto L_1239e28b;
  /* 1239e211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e214 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239e217 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1239e21d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239e21f je 0x1239e28b */
  if (C.zf) goto L_1239e28b;
  /* 1239e221 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e224 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e227 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1239e229 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e22c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239e22f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e233 jle 0x1239e28b */
  if ((C.zf||C.sf!=C.of)) goto L_1239e28b;
  /* 1239e235 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e238 push edx */
  push32((uint32_t)(EDX));
  /* 1239e239 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e23c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1239e23f push ecx */
  push32((uint32_t)(ECX));
  /* 1239e240 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e243 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1239e246 push eax */
  push32((uint32_t)(EAX));
  /* 1239e247 call 0x1239d160 */
  push32(0x1239e24cu); f_1239d160();
  /* 1239e24c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e24f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e252 jne 0x1239e275 */
  if (!C.zf) goto L_1239e275;
  /* 1239e254 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e257 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239e25a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1239e260 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239e262 je 0x1239e273 */
  if (C.zf) goto L_1239e273;
  /* 1239e264 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e267 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239e26a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1239e26d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e270 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1239e273:;
  /* 1239e273 jmp 0x1239e28b */
  goto L_1239e28b;
L_1239e275:;
  /* 1239e275 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e278 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239e27b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1239e27e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e281 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1239e284 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1239e28b:;
  /* 1239e28b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e28e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e291 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1239e294 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1239e296 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e299 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1239e2a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e2a3 mov esp, ebp */
  ESP = (EBP);
  /* 1239e2a5 pop ebp */
  EBP = (pop32());
  /* 1239e2a6 ret  */
  ESPCHK(0x1239e1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2b0 @ 0x1239e2b0 (15 bytes, 7 insns) */
void f_1239e2b0(void) {
  FTRACE(0x1239e2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1239e2b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239e2b5 call 0x1239e2c0 */
  push32(0x1239e2bau); f_1239e2c0();
  /* 1239e2ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e2bd pop ebp */
  EBP = (pop32());
  /* 1239e2be ret  */
  ESPCHK(0x1239e2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2c0 @ 0x1239e2c0 (319 bytes, 94 insns) */
void f_1239e2c0(void) {
  FTRACE(0x1239e2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1239e2c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e2c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239e2cd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239e2d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e2d6 call 0x123982c0 */
  push32(0x1239e2dbu); f_123982c0();
  /* 1239e2db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e2de mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239e2e5 jmp 0x1239e2f0 */
  goto L_1239e2f0;
L_1239e2e7:;
  /* 1239e2e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e2ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e2ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1239e2f0:;
  /* 1239e2f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e2f3 cmp ecx, dword ptr [0x123c1bc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c1bc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e2f9 jge 0x1239e3e3 */
  if ((C.sf==C.of)) goto L_1239e3e3;
  /* 1239e2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e302 mov eax, dword ptr [0x123c0878] */
  EAX = (r32((uint32_t)(0x123c0878)));
  /* 1239e307 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e30b je 0x1239e3de */
  if (C.zf) goto L_1239e3de;
  /* 1239e311 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e314 mov edx, dword ptr [0x123c0878] */
  EDX = (r32((uint32_t)(0x123c0878)));
  /* 1239e31a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1239e31d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239e320 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1239e326 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239e328 je 0x1239e3de */
  if (C.zf) goto L_1239e3de;
  /* 1239e32e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e331 mov eax, dword ptr [0x123c0878] */
  EAX = (r32((uint32_t)(0x123c0878)));
  /* 1239e336 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1239e339 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e33a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e33d push edx */
  push32((uint32_t)(EDX));
  /* 1239e33e call 0x1239d710 */
  push32(0x1239e343u); f_1239d710();
  /* 1239e343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e346 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e349 mov ecx, dword ptr [0x123c0878] */
  ECX = (r32((uint32_t)(0x123c0878)));
  /* 1239e34f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1239e352 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1239e355 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1239e35a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e35c je 0x1239e3c5 */
  if (C.zf) goto L_1239e3c5;
  /* 1239e35e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e362 jne 0x1239e389 */
  if (!C.zf) goto L_1239e389;
  /* 1239e364 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e367 mov edx, dword ptr [0x123c0878] */
  EDX = (r32((uint32_t)(0x123c0878)));
  /* 1239e36d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1239e370 push eax */
  push32((uint32_t)(EAX));
  /* 1239e371 call 0x1239e1a0 */
  push32(0x1239e376u); f_1239e1a0();
  /* 1239e376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e379 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e37c je 0x1239e387 */
  if (C.zf) goto L_1239e387;
  /* 1239e37e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e384 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1239e387:;
  /* 1239e387 jmp 0x1239e3c5 */
  goto L_1239e3c5;
L_1239e389:;
  /* 1239e389 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e38d jne 0x1239e3c5 */
  if (!C.zf) goto L_1239e3c5;
  /* 1239e38f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e392 mov eax, dword ptr [0x123c0878] */
  EAX = (r32((uint32_t)(0x123c0878)));
  /* 1239e397 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1239e39a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239e39d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1239e3a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239e3a2 je 0x1239e3c5 */
  if (C.zf) goto L_1239e3c5;
  /* 1239e3a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e3a7 mov ecx, dword ptr [0x123c0878] */
  ECX = (r32((uint32_t)(0x123c0878)));
  /* 1239e3ad mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1239e3b0 push edx */
  push32((uint32_t)(EDX));
  /* 1239e3b1 call 0x1239e1a0 */
  push32(0x1239e3b6u); f_1239e1a0();
  /* 1239e3b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e3b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e3bc jne 0x1239e3c5 */
  if (!C.zf) goto L_1239e3c5;
  /* 1239e3be mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1239e3c5:;
  /* 1239e3c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e3c8 mov ecx, dword ptr [0x123c0878] */
  ECX = (r32((uint32_t)(0x123c0878)));
  /* 1239e3ce mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1239e3d1 push edx */
  push32((uint32_t)(EDX));
  /* 1239e3d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e3d5 push eax */
  push32((uint32_t)(EAX));
  /* 1239e3d6 call 0x1239d780 */
  push32(0x1239e3dbu); f_1239d780();
  /* 1239e3db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239e3de:;
  /* 1239e3de jmp 0x1239e2e7 */
  goto L_1239e2e7;
L_1239e3e3:;
  /* 1239e3e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e3e5 call 0x12398360 */
  push32(0x1239e3eau); f_12398360();
  /* 1239e3ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e3ed cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e3f1 jne 0x1239e3f8 */
  if (!C.zf) goto L_1239e3f8;
  /* 1239e3f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e3f6 jmp 0x1239e3fb */
  goto L_1239e3fb;
L_1239e3f8:;
  /* 1239e3f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1239e3fb:;
  /* 1239e3fb mov esp, ebp */
  ESP = (EBP);
  /* 1239e3fd pop ebp */
  EBP = (pop32());
  /* 1239e3fe ret  */
  ESPCHK(0x1239e2c0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1239e400 (15 bytes, 7 insns) */
void f_1239e400(void) {
  FTRACE(0x1239e400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e400 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e401 mov ebp, esp */
  EBP = (ESP);
  /* 1239e403 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e405 call 0x12393830 */
  push32(0x1239e40au); f_12393830();
  /* 1239e40a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e40d pop ebp */
  EBP = (pop32());
  /* 1239e40e ret  */
  ESPCHK(0x1239e400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e410 @ 0x1239e410 (1007 bytes, 269 insns) */
void f_1239e410(void) {
  FTRACE(0x1239e410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e410 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e411 mov ebp, esp */
  EBP = (ESP);
  /* 1239e413 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e419 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e41d jl 0x1239e425 */
  if ((C.sf!=C.of)) goto L_1239e425;
  /* 1239e41f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e423 jle 0x1239e42c */
  if ((C.zf||C.sf!=C.of)) goto L_1239e42c;
L_1239e425:;
  /* 1239e425 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239e427 jmp 0x1239e7fb */
  goto L_1239e7fb;
L_1239e42c:;
  /* 1239e42c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1239e42e call 0x123982c0 */
  push32(0x1239e433u); f_123982c0();
  /* 1239e433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e436 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1239e43d mov eax, dword ptr [0x123c0864] */
  EAX = (r32((uint32_t)(0x123c0864)));
  /* 1239e442 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e445 mov dword ptr [0x123c0864], eax */
  w32((uint32_t)(0x123c0864), (EAX));
L_1239e44a:;
  /* 1239e44a cmp dword ptr [0x123c0874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e451 je 0x1239e45d */
  if (C.zf) goto L_1239e45d;
  /* 1239e453 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239e455 call dword ptr [0x123c329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c329c))), 0x1239e45bu);
  /* 1239e45b jmp 0x1239e44a */
  goto L_1239e44a;
L_1239e45d:;
  /* 1239e45d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e461 je 0x1239e4a1 */
  if (C.zf) goto L_1239e4a1;
  /* 1239e463 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e467 je 0x1239e481 */
  if (C.zf) goto L_1239e481;
  /* 1239e469 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239e46c push ecx */
  push32((uint32_t)(ECX));
  /* 1239e46d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e470 push edx */
  push32((uint32_t)(EDX));
  /* 1239e471 call 0x1239e800 */
  push32(0x1239e476u); f_1239e800();
  /* 1239e476 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e479 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1239e47f jmp 0x1239e493 */
  goto L_1239e493;
L_1239e481:;
  /* 1239e481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e484 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e487 mov ecx, dword ptr [eax + 0x123bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x123bf4dc)));
  /* 1239e48d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1239e493:;
  /* 1239e493 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1239e499 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1239e49c jmp 0x1239e7db */
  goto L_1239e7db;
L_1239e4a1:;
  /* 1239e4a1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1239e4a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239e4af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e4b3 je 0x1239e7d3 */
  if (C.zf) goto L_1239e7d3;
  /* 1239e4b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239e4bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239e4bf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e4c2 jne 0x1239e6e4 */
  if (!C.zf) goto L_1239e6e4;
  /* 1239e4c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239e4cb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1239e4cf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e4d2 jne 0x1239e6e4 */
  if (!C.zf) goto L_1239e6e4;
  /* 1239e4d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239e4db movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1239e4df cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e4e2 jne 0x1239e6e4 */
  if (!C.zf) goto L_1239e6e4;
  /* 1239e4e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239e4eb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1239e4f1:;
  /* 1239e4f1 push 0x123bc20c */
  push32((uint32_t)(0x123bc20cu));
  /* 1239e4f6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1239e4fc push ecx */
  push32((uint32_t)(ECX));
  /* 1239e4fd call 0x123a0660 */
  push32(0x1239e502u); f_123a0660();
  /* 1239e502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e505 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1239e50b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e512 je 0x1239e53d */
  if (C.zf) goto L_1239e53d;
  /* 1239e514 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e51a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e520 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1239e526 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e52d je 0x1239e53d */
  if (C.zf) goto L_1239e53d;
  /* 1239e52f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e535 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239e538 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e53b jne 0x1239e563 */
  if (!C.zf) goto L_1239e563;
L_1239e53d:;
  /* 1239e53d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e541 je 0x1239e55c */
  if (C.zf) goto L_1239e55c;
  /* 1239e543 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1239e545 call 0x12398360 */
  push32(0x1239e54au); f_12398360();
  /* 1239e54a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e54d mov edx, dword ptr [0x123c0864] */
  EDX = (r32((uint32_t)(0x123c0864)));
  /* 1239e553 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e556 mov dword ptr [0x123c0864], edx */
  w32((uint32_t)(0x123c0864), (EDX));
L_1239e55c:;
  /* 1239e55c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239e55e jmp 0x1239e7fb */
  goto L_1239e7fb;
L_1239e563:;
  /* 1239e563 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1239e56a jmp 0x1239e575 */
  goto L_1239e575;
L_1239e56c:;
  /* 1239e56c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239e56f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e572 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1239e575:;
  /* 1239e575 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e579 jg 0x1239e5c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1239e5c3;
  /* 1239e57b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1239e581 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e582 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1239e588 push edx */
  push32((uint32_t)(EDX));
  /* 1239e589 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239e58c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e58f mov ecx, dword ptr [eax + 0x123bf4d8] */
  ECX = (r32((uint32_t)(EAX + 0x123bf4d8)));
  /* 1239e595 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e596 call 0x123a0620 */
  push32(0x1239e59bu); f_123a0620();
  /* 1239e59b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e59e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e5a0 jne 0x1239e5c1 */
  if (!C.zf) goto L_1239e5c1;
  /* 1239e5a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239e5a5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e5a8 mov eax, dword ptr [edx + 0x123bf4d8] */
  EAX = (r32((uint32_t)(EDX + 0x123bf4d8)));
  /* 1239e5ae push eax */
  push32((uint32_t)(EAX));
  /* 1239e5af call 0x123976f0 */
  push32(0x1239e5b4u); f_123976f0();
  /* 1239e5b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e5b7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e5bd jne 0x1239e5c1 */
  if (!C.zf) goto L_1239e5c1;
  /* 1239e5bf jmp 0x1239e5c3 */
  goto L_1239e5c3;
L_1239e5c1:;
  /* 1239e5c1 jmp 0x1239e56c */
  goto L_1239e56c;
L_1239e5c3:;
  /* 1239e5c3 push 0x123bc208 */
  push32((uint32_t)(0x123bc208u));
  /* 1239e5c8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e5ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e5d1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1239e5d7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e5dd push edx */
  push32((uint32_t)(EDX));
  /* 1239e5de call 0x123a05e0 */
  push32(0x1239e5e3u); f_123a05e0();
  /* 1239e5e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e5e6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1239e5ec cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e5f3 jne 0x1239e629 */
  if (!C.zf) goto L_1239e629;
  /* 1239e5f5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e5fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239e5fe cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e601 je 0x1239e629 */
  if (C.zf) goto L_1239e629;
  /* 1239e603 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e607 je 0x1239e622 */
  if (C.zf) goto L_1239e622;
  /* 1239e609 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1239e60b call 0x12398360 */
  push32(0x1239e610u); f_12398360();
  /* 1239e610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e613 mov edx, dword ptr [0x123c0864] */
  EDX = (r32((uint32_t)(0x123c0864)));
  /* 1239e619 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e61c mov dword ptr [0x123c0864], edx */
  w32((uint32_t)(0x123c0864), (EDX));
L_1239e622:;
  /* 1239e622 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239e624 jmp 0x1239e7fb */
  goto L_1239e7fb;
L_1239e629:;
  /* 1239e629 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e62d jg 0x1239e67a */
  if ((!C.zf&&C.sf==C.of)) goto L_1239e67a;
  /* 1239e62f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1239e635 push eax */
  push32((uint32_t)(EAX));
  /* 1239e636 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e63c push ecx */
  push32((uint32_t)(ECX));
  /* 1239e63d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1239e643 push edx */
  push32((uint32_t)(EDX));
  /* 1239e644 call 0x123980e0 */
  push32(0x1239e649u); f_123980e0();
  /* 1239e649 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e64c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1239e652 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1239e65a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1239e660 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e661 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239e664 push edx */
  push32((uint32_t)(EDX));
  /* 1239e665 call 0x1239e800 */
  push32(0x1239e66au); f_1239e800();
  /* 1239e66a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e66d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e66f je 0x1239e67a */
  if (C.zf) goto L_1239e67a;
  /* 1239e671 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e674 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e677 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1239e67a:;
  /* 1239e67a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e680 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e686 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1239e68c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1239e692 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1239e695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e697 je 0x1239e6a8 */
  if (C.zf) goto L_1239e6a8;
  /* 1239e699 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1239e69f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e6a2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1239e6a8:;
  /* 1239e6a8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1239e6ae movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1239e6b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e6b3 jne 0x1239e4f1 */
  if (!C.zf) goto L_1239e4f1;
  /* 1239e6b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e6bd je 0x1239e6cc */
  if (C.zf) goto L_1239e6cc;
  /* 1239e6bf call 0x1239e9a0 */
  push32(0x1239e6c4u); f_1239e9a0();
  /* 1239e6c4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1239e6ca jmp 0x1239e6d6 */
  goto L_1239e6d6;
L_1239e6cc:;
  /* 1239e6cc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1239e6d6:;
  /* 1239e6d6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1239e6dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239e6df jmp 0x1239e7d1 */
  goto L_1239e7d1;
L_1239e6e4:;
  /* 1239e6e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e6e7 push edx */
  push32((uint32_t)(EDX));
  /* 1239e6e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239e6ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1239e6ec lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1239e6f2 push eax */
  push32((uint32_t)(EAX));
  /* 1239e6f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239e6f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e6f7 call 0x1239eaa0 */
  push32(0x1239e6fcu); f_1239eaa0();
  /* 1239e6fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e6ff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239e702 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e706 je 0x1239e7d1 */
  if (C.zf) goto L_1239e7d1;
  /* 1239e70c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1239e713 jmp 0x1239e71e */
  goto L_1239e71e;
L_1239e715:;
  /* 1239e715 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239e718 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e71b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1239e71e:;
  /* 1239e71e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e722 jg 0x1239e780 */
  if ((!C.zf&&C.sf==C.of)) goto L_1239e780;
  /* 1239e724 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e728 je 0x1239e77e */
  if (C.zf) goto L_1239e77e;
  /* 1239e72a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239e72d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e730 mov ecx, dword ptr [eax + 0x123bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x123bf4dc)));
  /* 1239e736 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e737 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1239e73d push edx */
  push32((uint32_t)(EDX));
  /* 1239e73e call 0x123a0550 */
  push32(0x1239e743u); f_123a0550();
  /* 1239e743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e746 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e748 je 0x1239e775 */
  if (C.zf) goto L_1239e775;
  /* 1239e74a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1239e750 push eax */
  push32((uint32_t)(EAX));
  /* 1239e751 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239e754 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e755 call 0x1239e800 */
  push32(0x1239e75au); f_1239e800();
  /* 1239e75a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e75d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e75f je 0x1239e76c */
  if (C.zf) goto L_1239e76c;
  /* 1239e761 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e764 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e767 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1239e76a jmp 0x1239e773 */
  goto L_1239e773;
L_1239e76c:;
  /* 1239e76c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1239e773:;
  /* 1239e773 jmp 0x1239e77e */
  goto L_1239e77e;
L_1239e775:;
  /* 1239e775 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e778 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e77b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1239e77e:;
  /* 1239e77e jmp 0x1239e715 */
  goto L_1239e715;
L_1239e780:;
  /* 1239e780 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e784 je 0x1239e7ab */
  if (C.zf) goto L_1239e7ab;
  /* 1239e786 call 0x1239e9a0 */
  push32(0x1239e78bu); f_1239e9a0();
  /* 1239e78b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239e78e push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e790 mov ecx, dword ptr [0x123bf4dc] */
  ECX = (r32((uint32_t)(0x123bf4dc)));
  /* 1239e796 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e797 call 0x12395350 */
  push32(0x1239e79cu); f_12395350();
  /* 1239e79c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e79f mov dword ptr [0x123bf4dc], 0 */
  w32((uint32_t)(0x123bf4dc), (0x0u));
  /* 1239e7a9 jmp 0x1239e7d1 */
  goto L_1239e7d1;
L_1239e7ab:;
  /* 1239e7ab cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e7af je 0x1239e7be */
  if (C.zf) goto L_1239e7be;
  /* 1239e7b1 call 0x1239e9a0 */
  push32(0x1239e7b6u); f_1239e9a0();
  /* 1239e7b6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1239e7bc jmp 0x1239e7c8 */
  goto L_1239e7c8;
L_1239e7be:;
  /* 1239e7be mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1239e7c8:;
  /* 1239e7c8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1239e7ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1239e7d1:;
  /* 1239e7d1 jmp 0x1239e7db */
  goto L_1239e7db;
L_1239e7d3:;
  /* 1239e7d3 call 0x1239e9a0 */
  push32(0x1239e7d8u); f_1239e9a0();
  /* 1239e7d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1239e7db:;
  /* 1239e7db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e7df je 0x1239e7f8 */
  if (C.zf) goto L_1239e7f8;
  /* 1239e7e1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1239e7e3 call 0x12398360 */
  push32(0x1239e7e8u); f_12398360();
  /* 1239e7e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e7eb mov eax, dword ptr [0x123c0864] */
  EAX = (r32((uint32_t)(0x123c0864)));
  /* 1239e7f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e7f3 mov dword ptr [0x123c0864], eax */
  w32((uint32_t)(0x123c0864), (EAX));
L_1239e7f8:;
  /* 1239e7f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1239e7fb:;
  /* 1239e7fb mov esp, ebp */
  ESP = (EBP);
  /* 1239e7fd pop ebp */
  EBP = (pop32());
  /* 1239e7fe ret  */
  ESPCHK(0x1239e410u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e800 @ 0x1239e800 (403 bytes, 117 insns) */
void f_1239e800(void) {
  FTRACE(0x1239e800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e800 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e801 mov ebp, esp */
  EBP = (ESP);
  /* 1239e803 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e809 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e80c push eax */
  push32((uint32_t)(EAX));
  /* 1239e80d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1239e813 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e814 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1239e81a push edx */
  push32((uint32_t)(EDX));
  /* 1239e81b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1239e821 push eax */
  push32((uint32_t)(EAX));
  /* 1239e822 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239e825 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e826 call 0x1239eaa0 */
  push32(0x1239e82bu); f_1239eaa0();
  /* 1239e82b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e82e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e830 jne 0x1239e839 */
  if (!C.zf) goto L_1239e839;
  /* 1239e832 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239e834 jmp 0x1239e98f */
  goto L_1239e98f;
L_1239e839:;
  /* 1239e839 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1239e83e push 0x123bc210 */
  push32((uint32_t)(0x123bc210u));
  /* 1239e843 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e845 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1239e84b push edx */
  push32((uint32_t)(EDX));
  /* 1239e84c call 0x123976f0 */
  push32(0x1239e851u); f_123976f0();
  /* 1239e851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e854 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e857 push eax */
  push32((uint32_t)(EAX));
  /* 1239e858 call 0x123948c0 */
  push32(0x1239e85du); f_123948c0();
  /* 1239e85d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e860 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239e863 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e867 jne 0x1239e870 */
  if (!C.zf) goto L_1239e870;
  /* 1239e869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239e86b jmp 0x1239e98f */
  goto L_1239e98f;
L_1239e870:;
  /* 1239e870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e873 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e876 mov ecx, dword ptr [eax + 0x123bf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x123bf4dc)));
  /* 1239e87c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239e87f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e882 mov eax, dword ptr [edx*4 + 0x123c06e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123c06e0)));
  /* 1239e889 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239e88c push 6 */
  push32((uint32_t)(0x6u));
  /* 1239e88e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e891 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e894 add ecx, 0x123c0730 */
  { uint32_t _a=(ECX),_b=(0x123c0730u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e89a push ecx */
  push32((uint32_t)(ECX));
  /* 1239e89b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1239e89e push edx */
  push32((uint32_t)(EDX));
  /* 1239e89f call 0x1239b1a0 */
  push32(0x1239e8a4u); f_1239b1a0();
  /* 1239e8a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e8a7 mov eax, dword ptr [0x123c06f8] */
  EAX = (r32((uint32_t)(0x123c06f8)));
  /* 1239e8ac mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1239e8af lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1239e8b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1239e8b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e8b9 push edx */
  push32((uint32_t)(EDX));
  /* 1239e8ba call 0x12397870 */
  push32(0x1239e8bfu); f_12397870();
  /* 1239e8bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e8c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e8c5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e8c8 mov dword ptr [ecx + 0x123bf4dc], eax */
  w32((uint32_t)(ECX + 0x123bf4dc), (EAX));
  /* 1239e8ce mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1239e8d4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239e8da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e8dd mov dword ptr [eax*4 + 0x123c06e0], edx */
  w32((uint32_t)(EAX*4 + 0x123c06e0), (EDX));
  /* 1239e8e4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1239e8e6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1239e8ec push ecx */
  push32((uint32_t)(ECX));
  /* 1239e8ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e8f0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e8f3 add edx, 0x123c0730 */
  { uint32_t _a=(EDX),_b=(0x123c0730u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e8f9 push edx */
  push32((uint32_t)(EDX));
  /* 1239e8fa call 0x1239b1a0 */
  push32(0x1239e8ffu); f_1239b1a0();
  /* 1239e8ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e902 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e906 jne 0x1239e913 */
  if (!C.zf) goto L_1239e913;
  /* 1239e908 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e90e mov dword ptr [0x123c06f8], eax */
  w32((uint32_t)(0x123c06f8), (EAX));
L_1239e913:;
  /* 1239e913 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e917 jne 0x1239e925 */
  if (!C.zf) goto L_1239e925;
  /* 1239e919 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1239e91f mov dword ptr [0x123c06fc], ecx */
  w32((uint32_t)(0x123c06fc), (ECX));
L_1239e925:;
  /* 1239e925 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e928 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e92b call dword ptr [edx + 0x123bf4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x123bf4e0))), 0x1239e931u);
  /* 1239e931 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239e933 je 0x1239e96c */
  if (C.zf) goto L_1239e96c;
  /* 1239e935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e938 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e93b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e93e mov dword ptr [eax + 0x123bf4dc], ecx */
  w32((uint32_t)(EAX + 0x123bf4dc), (ECX));
  /* 1239e944 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e946 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239e949 push edx */
  push32((uint32_t)(EDX));
  /* 1239e94a call 0x12395350 */
  push32(0x1239e94fu); f_12395350();
  /* 1239e94f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e952 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e955 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e958 mov dword ptr [eax*4 + 0x123c06e0], ecx */
  w32((uint32_t)(EAX*4 + 0x123c06e0), (ECX));
  /* 1239e95f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239e962 mov dword ptr [0x123c06f8], edx */
  w32((uint32_t)(0x123c06f8), (EDX));
  /* 1239e968 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239e96a jmp 0x1239e98f */
  goto L_1239e98f;
L_1239e96c:;
  /* 1239e96c cmp dword ptr [ebp - 0xc], 0x123bf3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x123bf3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e973 je 0x1239e983 */
  if (C.zf) goto L_1239e983;
  /* 1239e975 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e977 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239e97a push eax */
  push32((uint32_t)(EAX));
  /* 1239e97b call 0x12395350 */
  push32(0x1239e980u); f_12395350();
  /* 1239e980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239e983:;
  /* 1239e983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239e986 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e989 mov eax, dword ptr [ecx + 0x123bf4dc] */
  EAX = (r32((uint32_t)(ECX + 0x123bf4dc)));
L_1239e98f:;
  /* 1239e98f mov esp, ebp */
  ESP = (EBP);
  /* 1239e991 pop ebp */
  EBP = (pop32());
  /* 1239e992 ret  */
  ESPCHK(0x1239e800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9a0 @ 0x1239e9a0 (256 bytes, 72 insns) */
void f_1239e9a0(void) {
  FTRACE(0x1239e9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239e9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239e9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1239e9a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239e9a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1239e9ad cmp dword ptr [0x123bf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123bf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239e9b4 jne 0x1239e9d4 */
  if (!C.zf) goto L_1239e9d4;
  /* 1239e9b6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1239e9bb push 0x123bc210 */
  push32((uint32_t)(0x123bc210u));
  /* 1239e9c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239e9c2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1239e9c7 call 0x123948c0 */
  push32(0x1239e9ccu); f_123948c0();
  /* 1239e9cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e9cf mov dword ptr [0x123bf4dc], eax */
  w32((uint32_t)(0x123bf4dc), (EAX));
L_1239e9d4:;
  /* 1239e9d4 mov eax, dword ptr [0x123bf4dc] */
  EAX = (r32((uint32_t)(0x123bf4dc)));
  /* 1239e9d9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1239e9dc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1239e9e3 jmp 0x1239e9ee */
  goto L_1239e9ee;
L_1239e9e5:;
  /* 1239e9e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e9e8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239e9eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1239e9ee:;
  /* 1239e9ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239e9f1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239e9f4 mov eax, dword ptr [edx + 0x123bf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x123bf4dc)));
  /* 1239e9fa push eax */
  push32((uint32_t)(EAX));
  /* 1239e9fb push 0x123bc21c */
  push32((uint32_t)(0x123bc21cu));
  /* 1239ea00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ea03 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239ea06 mov edx, dword ptr [ecx + 0x123bf4d8] */
  EDX = (r32((uint32_t)(ECX + 0x123bf4d8)));
  /* 1239ea0c push edx */
  push32((uint32_t)(EDX));
  /* 1239ea0d push 3 */
  push32((uint32_t)(0x3u));
  /* 1239ea0f mov eax, dword ptr [0x123bf4dc] */
  EAX = (r32((uint32_t)(0x123bf4dc)));
  /* 1239ea14 push eax */
  push32((uint32_t)(EAX));
  /* 1239ea15 call 0x1239ec40 */
  push32(0x1239ea1au); f_1239ec40();
  /* 1239ea1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ea1d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ea21 jge 0x1239ea69 */
  if ((C.sf==C.of)) goto L_1239ea69;
  /* 1239ea23 push 0x123bc208 */
  push32((uint32_t)(0x123bc208u));
  /* 1239ea28 mov ecx, dword ptr [0x123bf4dc] */
  ECX = (r32((uint32_t)(0x123bf4dc)));
  /* 1239ea2e push ecx */
  push32((uint32_t)(ECX));
  /* 1239ea2f call 0x12397880 */
  push32(0x1239ea34u); f_12397880();
  /* 1239ea34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ea37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ea3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ea3d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239ea40 mov eax, dword ptr [edx + 0x123bf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x123bf4dc)));
  /* 1239ea46 push eax */
  push32((uint32_t)(EAX));
  /* 1239ea47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ea4a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239ea4d mov edx, dword ptr [ecx + 0x123bf4dc] */
  EDX = (r32((uint32_t)(ECX + 0x123bf4dc)));
  /* 1239ea53 push edx */
  push32((uint32_t)(EDX));
  /* 1239ea54 call 0x123a0550 */
  push32(0x1239ea59u); f_123a0550();
  /* 1239ea59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ea5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ea5e je 0x1239ea67 */
  if (C.zf) goto L_1239ea67;
  /* 1239ea60 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1239ea67:;
  /* 1239ea67 jmp 0x1239ea97 */
  goto L_1239ea97;
L_1239ea69:;
  /* 1239ea69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ea6d jne 0x1239ea76 */
  if (!C.zf) goto L_1239ea76;
  /* 1239ea6f mov eax, dword ptr [0x123bf4dc] */
  EAX = (r32((uint32_t)(0x123bf4dc)));
  /* 1239ea74 jmp 0x1239ea9c */
  goto L_1239ea9c;
L_1239ea76:;
  /* 1239ea76 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239ea78 mov eax, dword ptr [0x123bf4dc] */
  EAX = (r32((uint32_t)(0x123bf4dc)));
  /* 1239ea7d push eax */
  push32((uint32_t)(EAX));
  /* 1239ea7e call 0x12395350 */
  push32(0x1239ea83u); f_12395350();
  /* 1239ea83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ea86 mov dword ptr [0x123bf4dc], 0 */
  w32((uint32_t)(0x123bf4dc), (0x0u));
  /* 1239ea90 mov eax, dword ptr [0x123bf4f4] */
  EAX = (r32((uint32_t)(0x123bf4f4)));
  /* 1239ea95 jmp 0x1239ea9c */
  goto L_1239ea9c;
L_1239ea97:;
  /* 1239ea97 jmp 0x1239e9e5 */
  goto L_1239e9e5;
L_1239ea9c:;
  /* 1239ea9c mov esp, ebp */
  ESP = (EBP);
  /* 1239ea9e pop ebp */
  EBP = (pop32());
  /* 1239ea9f ret  */
  ESPCHK(0x1239e9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x1239eaa0 (388 bytes, 115 insns) */
void f_1239eaa0(void) {
  FTRACE(0x1239eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1239eaa3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239eaa9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239eaad jne 0x1239eab6 */
  if (!C.zf) goto L_1239eab6;
  /* 1239eaaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239eab1 jmp 0x1239ec20 */
  goto L_1239ec20;
L_1239eab6:;
  /* 1239eab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eab9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239eabc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239eabf jne 0x1239eb10 */
  if (!C.zf) goto L_1239eb10;
  /* 1239eac1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eac4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1239eac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239eaca jne 0x1239eb10 */
  if (!C.zf) goto L_1239eb10;
  /* 1239eacc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239eacf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1239ead2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ead5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1239ead9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239eadd je 0x1239eaf9 */
  if (C.zf) goto L_1239eaf9;
  /* 1239eadf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239eae2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1239eae7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239eaea mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1239eaf0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239eaf3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1239eaf9:;
  /* 1239eaf9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239eafd je 0x1239eb08 */
  if (C.zf) goto L_1239eb08;
  /* 1239eaff mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239eb02 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1239eb08:;
  /* 1239eb08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239eb0b jmp 0x1239ec20 */
  goto L_1239ec20;
L_1239eb10:;
  /* 1239eb10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eb13 push ecx */
  push32((uint32_t)(ECX));
  /* 1239eb14 push 0x123bf450 */
  push32((uint32_t)(0x123bf450u));
  /* 1239eb19 call 0x123a0550 */
  push32(0x1239eb1eu); f_123a0550();
  /* 1239eb1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239eb21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239eb23 je 0x1239ebd8 */
  if (C.zf) goto L_1239ebd8;
  /* 1239eb29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eb2c push edx */
  push32((uint32_t)(EDX));
  /* 1239eb2d push 0x123bf3cc */
  push32((uint32_t)(0x123bf3ccu));
  /* 1239eb32 call 0x123a0550 */
  push32(0x1239eb37u); f_123a0550();
  /* 1239eb37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239eb3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239eb3c je 0x1239ebd8 */
  if (C.zf) goto L_1239ebd8;
  /* 1239eb42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eb45 push eax */
  push32((uint32_t)(EAX));
  /* 1239eb46 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1239eb4c push ecx */
  push32((uint32_t)(ECX));
  /* 1239eb4d call 0x1239ec90 */
  push32(0x1239eb52u); f_1239ec90();
  /* 1239eb52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239eb55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239eb57 je 0x1239eb60 */
  if (C.zf) goto L_1239eb60;
  /* 1239eb59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239eb5b jmp 0x1239ec20 */
  goto L_1239ec20;
L_1239eb60:;
  /* 1239eb60 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1239eb66 push edx */
  push32((uint32_t)(EDX));
  /* 1239eb67 push 0x123c0708 */
  push32((uint32_t)(0x123c0708u));
  /* 1239eb6c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1239eb72 push eax */
  push32((uint32_t)(EAX));
  /* 1239eb73 call 0x123a06a0 */
  push32(0x1239eb78u); f_123a06a0();
  /* 1239eb78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239eb7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239eb7d jne 0x1239eb86 */
  if (!C.zf) goto L_1239eb86;
  /* 1239eb7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239eb81 jmp 0x1239ec20 */
  goto L_1239ec20;
L_1239eb86:;
  /* 1239eb86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239eb88 mov cx, word ptr [0x123c070c] */
  CX = (r16((uint32_t)(0x123c070c)));
  /* 1239eb8f mov dword ptr [0x123c0710], ecx */
  w32((uint32_t)(0x123c0710), (ECX));
  /* 1239eb95 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1239eb9b push edx */
  push32((uint32_t)(EDX));
  /* 1239eb9c push 0x123bf450 */
  push32((uint32_t)(0x123bf450u));
  /* 1239eba1 call 0x1239edf0 */
  push32(0x1239eba6u); f_1239edf0();
  /* 1239eba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239eba9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ebac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239ebaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239ebb1 je 0x1239ebc6 */
  if (C.zf) goto L_1239ebc6;
  /* 1239ebb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ebb6 push edx */
  push32((uint32_t)(EDX));
  /* 1239ebb7 push 0x123bf3cc */
  push32((uint32_t)(0x123bf3ccu));
  /* 1239ebbc call 0x12397870 */
  push32(0x1239ebc1u); f_12397870();
  /* 1239ebc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ebc4 jmp 0x1239ebd8 */
  goto L_1239ebd8;
L_1239ebc6:;
  /* 1239ebc6 push 0x123bf450 */
  push32((uint32_t)(0x123bf450u));
  /* 1239ebcb push 0x123bf3cc */
  push32((uint32_t)(0x123bf3ccu));
  /* 1239ebd0 call 0x12397870 */
  push32(0x1239ebd5u); f_12397870();
  /* 1239ebd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239ebd8:;
  /* 1239ebd8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ebdc je 0x1239ebf1 */
  if (C.zf) goto L_1239ebf1;
  /* 1239ebde push 6 */
  push32((uint32_t)(0x6u));
  /* 1239ebe0 push 0x123c0708 */
  push32((uint32_t)(0x123c0708u));
  /* 1239ebe5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239ebe8 push eax */
  push32((uint32_t)(EAX));
  /* 1239ebe9 call 0x1239b1a0 */
  push32(0x1239ebeeu); f_1239b1a0();
  /* 1239ebee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239ebf1:;
  /* 1239ebf1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ebf5 je 0x1239ec0a */
  if (C.zf) goto L_1239ec0a;
  /* 1239ebf7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1239ebf9 push 0x123c0710 */
  push32((uint32_t)(0x123c0710u));
  /* 1239ebfe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239ec01 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ec02 call 0x1239b1a0 */
  push32(0x1239ec07u); f_1239b1a0();
  /* 1239ec07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239ec0a:;
  /* 1239ec0a push 0x123bf450 */
  push32((uint32_t)(0x123bf450u));
  /* 1239ec0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ec12 push edx */
  push32((uint32_t)(EDX));
  /* 1239ec13 call 0x12397870 */
  push32(0x1239ec18u); f_12397870();
  /* 1239ec18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ec1b mov eax, 0x123bf450 */
  EAX = (0x123bf450u);
L_1239ec20:;
  /* 1239ec20 mov esp, ebp */
  ESP = (EBP);
  /* 1239ec22 pop ebp */
  EBP = (pop32());
  /* 1239ec23 ret  */
  ESPCHK(0x1239eaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec30 @ 0x1239ec30 (7 bytes, 5 insns) */
void f_1239ec30(void) {
  FTRACE(0x1239ec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239ec30 push ebp */
  push32((uint32_t)(EBP));
  /* 1239ec31 mov ebp, esp */
  EBP = (ESP);
  /* 1239ec33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ec35 pop ebp */
  EBP = (pop32());
  /* 1239ec36 ret  */
  ESPCHK(0x1239ec30u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1239ec40 (79 bytes, 28 insns) */
void f_1239ec40(void) {
  FTRACE(0x1239ec40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239ec40 push ebp */
  push32((uint32_t)(EBP));
  /* 1239ec41 mov ebp, esp */
  EBP = (ESP);
  /* 1239ec43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239ec46 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1239ec49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239ec4c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239ec53 jmp 0x1239ec5e */
  goto L_1239ec5e;
L_1239ec55:;
  /* 1239ec55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ec58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ec5b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1239ec5e:;
  /* 1239ec5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ec61 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ec64 jge 0x1239ec84 */
  if ((C.sf==C.of)) goto L_1239ec84;
  /* 1239ec66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ec69 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ec6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239ec6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ec72 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1239ec75 push edx */
  push32((uint32_t)(EDX));
  /* 1239ec76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ec79 push eax */
  push32((uint32_t)(EAX));
  /* 1239ec7a call 0x12397880 */
  push32(0x1239ec7fu); f_12397880();
  /* 1239ec7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ec82 jmp 0x1239ec55 */
  goto L_1239ec55;
L_1239ec84:;
  /* 1239ec84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239ec8b mov esp, ebp */
  ESP = (EBP);
  /* 1239ec8d pop ebp */
  EBP = (pop32());
  /* 1239ec8e ret  */
  ESPCHK(0x1239ec40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x1239ec90 (349 bytes, 122 insns) */
void f_1239ec90(void) {
  FTRACE(0x1239ec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239ec90 push ebp */
  push32((uint32_t)(EBP));
  /* 1239ec91 mov ebp, esp */
  EBP = (ESP);
  /* 1239ec93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239ec96 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1239ec9b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ec9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eca0 push eax */
  push32((uint32_t)(EAX));
  /* 1239eca1 call 0x12398630 */
  push32(0x1239eca6u); f_12398630();
  /* 1239eca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239eca9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ecac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239ecaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239ecb1 jne 0x1239ecba */
  if (!C.zf) goto L_1239ecba;
  /* 1239ecb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ecb5 jmp 0x1239ede9 */
  goto L_1239ede9;
L_1239ecba:;
  /* 1239ecba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ecbd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239ecc0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ecc3 jne 0x1239ecf0 */
  if (!C.zf) goto L_1239ecf0;
  /* 1239ecc5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ecc8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1239eccc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ecce je 0x1239ecf0 */
  if (C.zf) goto L_1239ecf0;
  /* 1239ecd0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ecd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ecd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ecd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ecda add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ece0 push edx */
  push32((uint32_t)(EDX));
  /* 1239ece1 call 0x12397870 */
  push32(0x1239ece6u); f_12397870();
  /* 1239ece6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ece9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239eceb jmp 0x1239ede9 */
  goto L_1239ede9;
L_1239ecf0:;
  /* 1239ecf0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239ecf7 jmp 0x1239ed02 */
  goto L_1239ed02;
L_1239ecf9:;
  /* 1239ecf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ecfc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ecff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239ed02:;
  /* 1239ed02 push 0x123bc220 */
  push32((uint32_t)(0x123bc220u));
  /* 1239ed07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ed0a push ecx */
  push32((uint32_t)(ECX));
  /* 1239ed0b call 0x123a05e0 */
  push32(0x1239ed10u); f_123a05e0();
  /* 1239ed10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ed13 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1239ed16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed1a jne 0x1239ed24 */
  if (!C.zf) goto L_1239ed24;
  /* 1239ed1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239ed1f jmp 0x1239ede9 */
  goto L_1239ede9;
L_1239ed24:;
  /* 1239ed24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ed27 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ed2a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1239ed2c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1239ed2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed33 jne 0x1239ed5a */
  if (!C.zf) goto L_1239ed5a;
  /* 1239ed35 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed39 jge 0x1239ed5a */
  if ((C.sf==C.of)) goto L_1239ed5a;
  /* 1239ed3b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1239ed3f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed42 je 0x1239ed5a */
  if (C.zf) goto L_1239ed5a;
  /* 1239ed44 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239ed47 push edx */
  push32((uint32_t)(EDX));
  /* 1239ed48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ed4b push eax */
  push32((uint32_t)(EAX));
  /* 1239ed4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ed4f push ecx */
  push32((uint32_t)(ECX));
  /* 1239ed50 call 0x123980e0 */
  push32(0x1239ed55u); f_123980e0();
  /* 1239ed55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ed58 jmp 0x1239edc0 */
  goto L_1239edc0;
L_1239ed5a:;
  /* 1239ed5a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed5e jne 0x1239ed88 */
  if (!C.zf) goto L_1239ed88;
  /* 1239ed60 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed64 jge 0x1239ed88 */
  if ((C.sf==C.of)) goto L_1239ed88;
  /* 1239ed66 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1239ed6a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed6d je 0x1239ed88 */
  if (C.zf) goto L_1239ed88;
  /* 1239ed6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239ed72 push eax */
  push32((uint32_t)(EAX));
  /* 1239ed73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ed76 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ed77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ed7a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ed7d push edx */
  push32((uint32_t)(EDX));
  /* 1239ed7e call 0x123980e0 */
  push32(0x1239ed83u); f_123980e0();
  /* 1239ed83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ed86 jmp 0x1239edc0 */
  goto L_1239edc0;
L_1239ed88:;
  /* 1239ed88 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed8c jne 0x1239edbb */
  if (!C.zf) goto L_1239edbb;
  /* 1239ed8e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1239ed92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ed94 je 0x1239ed9f */
  if (C.zf) goto L_1239ed9f;
  /* 1239ed96 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1239ed9a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ed9d jne 0x1239edbb */
  if (!C.zf) goto L_1239edbb;
L_1239ed9f:;
  /* 1239ed9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239eda2 push edx */
  push32((uint32_t)(EDX));
  /* 1239eda3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239eda6 push eax */
  push32((uint32_t)(EAX));
  /* 1239eda7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239edaa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239edb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1239edb1 call 0x123980e0 */
  push32(0x1239edb6u); f_123980e0();
  /* 1239edb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239edb9 jmp 0x1239edc0 */
  goto L_1239edc0;
L_1239edbb:;
  /* 1239edbb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239edbe jmp 0x1239ede9 */
  goto L_1239ede9;
L_1239edc0:;
  /* 1239edc0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1239edc4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239edc7 jne 0x1239edcb */
  if (!C.zf) goto L_1239edcb;
  /* 1239edc9 jmp 0x1239ede7 */
  goto L_1239ede7;
L_1239edcb:;
  /* 1239edcb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1239edcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239edd1 jne 0x1239edd5 */
  if (!C.zf) goto L_1239edd5;
  /* 1239edd3 jmp 0x1239ede7 */
  goto L_1239ede7;
L_1239edd5:;
  /* 1239edd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239edd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239eddb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1239eddf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1239ede2 jmp 0x1239ecf9 */
  goto L_1239ecf9;
L_1239ede7:;
  /* 1239ede7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239ede9:;
  /* 1239ede9 mov esp, ebp */
  ESP = (EBP);
  /* 1239edeb pop ebp */
  EBP = (pop32());
  /* 1239edec ret  */
  ESPCHK(0x1239ec90u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1239edf0 (101 bytes, 36 insns) */
void f_1239edf0(void) {
  FTRACE(0x1239edf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239edf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239edf1 mov ebp, esp */
  EBP = (ESP);
  /* 1239edf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239edf6 push eax */
  push32((uint32_t)(EAX));
  /* 1239edf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239edfa push ecx */
  push32((uint32_t)(ECX));
  /* 1239edfb call 0x12397870 */
  push32(0x1239ee00u); f_12397870();
  /* 1239ee00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ee03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ee06 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1239ee0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ee0c je 0x1239ee28 */
  if (C.zf) goto L_1239ee28;
  /* 1239ee0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ee11 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ee14 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ee15 push 0x123bc228 */
  push32((uint32_t)(0x123bc228u));
  /* 1239ee1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1239ee1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ee1f push edx */
  push32((uint32_t)(EDX));
  /* 1239ee20 call 0x1239ec40 */
  push32(0x1239ee25u); f_1239ec40();
  /* 1239ee25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239ee28:;
  /* 1239ee28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ee2b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1239ee32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239ee34 je 0x1239ee53 */
  if (C.zf) goto L_1239ee53;
  /* 1239ee36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239ee39 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ee3f push edx */
  push32((uint32_t)(EDX));
  /* 1239ee40 push 0x123bc224 */
  push32((uint32_t)(0x123bc224u));
  /* 1239ee45 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239ee47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ee4a push eax */
  push32((uint32_t)(EAX));
  /* 1239ee4b call 0x1239ec40 */
  push32(0x1239ee50u); f_1239ec40();
  /* 1239ee50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239ee53:;
  /* 1239ee53 pop ebp */
  EBP = (pop32());
  /* 1239ee54 ret  */
  ESPCHK(0x1239edf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee60 @ 0x1239ee60 (130 bytes, 50 insns) */
void f_1239ee60(void) {
  FTRACE(0x1239ee60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239ee60 push ebp */
  push32((uint32_t)(EBP));
  /* 1239ee61 mov ebp, esp */
  EBP = (ESP);
  /* 1239ee63 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ee64 push ebx */
  push32((uint32_t)(EBX));
  /* 1239ee65 push esi */
  push32((uint32_t)(ESI));
  /* 1239ee66 push edi */
  push32((uint32_t)(EDI));
  /* 1239ee67 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1239ee6e:;
  /* 1239ee6e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ee72 jne 0x1239ee92 */
  if (!C.zf) goto L_1239ee92;
  /* 1239ee74 push 0x123bc238 */
  push32((uint32_t)(0x123bc238u));
  /* 1239ee79 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ee7b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1239ee7d push 0x123bc22c */
  push32((uint32_t)(0x123bc22cu));
  /* 1239ee82 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239ee84 call 0x12393980 */
  push32(0x1239ee89u); f_12393980();
  /* 1239ee89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ee8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ee8f jne 0x1239ee92 */
  if (!C.zf) goto L_1239ee92;
  /* 1239ee91 int3  */
  x86_unimpl("int3 @ 0x1239ee91");
L_1239ee92:;
  /* 1239ee92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239ee94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ee96 jne 0x1239ee6e */
  if (!C.zf) goto L_1239ee6e;
  /* 1239ee98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ee9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239ee9e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1239eea1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239eea3 je 0x1239eeb1 */
  if (C.zf) goto L_1239eeb1;
  /* 1239eea5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eea8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1239eeaf jmp 0x1239eed8 */
  goto L_1239eed8;
L_1239eeb1:;
  /* 1239eeb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eeb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1239eeb5 call 0x1239d6d0 */
  push32(0x1239eebau); f_1239d6d0();
  /* 1239eeba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239eebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eec0 push edx */
  push32((uint32_t)(EDX));
  /* 1239eec1 call 0x1239eef0 */
  push32(0x1239eec6u); f_1239eef0();
  /* 1239eec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239eec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239eecc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eecf push eax */
  push32((uint32_t)(EAX));
  /* 1239eed0 call 0x1239d740 */
  push32(0x1239eed5u); f_1239d740();
  /* 1239eed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239eed8:;
  /* 1239eed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239eedb pop edi */
  EDI = (pop32());
  /* 1239eedc pop esi */
  ESI = (pop32());
  /* 1239eedd pop ebx */
  EBX = (pop32());
  /* 1239eede mov esp, ebp */
  ESP = (EBP);
  /* 1239eee0 pop ebp */
  EBP = (pop32());
  /* 1239eee1 ret  */
  ESPCHK(0x1239ee60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eef0 @ 0x1239eef0 (190 bytes, 67 insns) */
void f_1239eef0(void) {
  FTRACE(0x1239eef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239eef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239eef1 mov ebp, esp */
  EBP = (ESP);
  /* 1239eef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239eef6 push ebx */
  push32((uint32_t)(EBX));
  /* 1239eef7 push esi */
  push32((uint32_t)(ESI));
  /* 1239eef8 push edi */
  push32((uint32_t)(EDI));
  /* 1239eef9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1239ef00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ef03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1239ef06:;
  /* 1239ef06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ef0a jne 0x1239ef2a */
  if (!C.zf) goto L_1239ef2a;
  /* 1239ef0c push 0x123bc0dc */
  push32((uint32_t)(0x123bc0dcu));
  /* 1239ef11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ef13 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1239ef15 push 0x123bc22c */
  push32((uint32_t)(0x123bc22cu));
  /* 1239ef1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1239ef1c call 0x12393980 */
  push32(0x1239ef21u); f_12393980();
  /* 1239ef21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ef24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ef27 jne 0x1239ef2a */
  if (!C.zf) goto L_1239ef2a;
  /* 1239ef29 int3  */
  x86_unimpl("int3 @ 0x1239ef29");
L_1239ef2a:;
  /* 1239ef2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239ef2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239ef2e jne 0x1239ef06 */
  if (!C.zf) goto L_1239ef06;
  /* 1239ef30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ef33 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1239ef36 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1239ef3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ef3d je 0x1239ef9a */
  if (C.zf) goto L_1239ef9a;
  /* 1239ef3f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ef42 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ef43 call 0x1239e1f0 */
  push32(0x1239ef48u); f_1239e1f0();
  /* 1239ef48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ef4b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239ef4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ef51 push edx */
  push32((uint32_t)(EDX));
  /* 1239ef52 call 0x123a1570 */
  push32(0x1239ef57u); f_123a1570();
  /* 1239ef57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ef5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ef5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239ef60 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ef61 call 0x123a1440 */
  push32(0x1239ef66u); f_123a1440();
  /* 1239ef66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ef69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239ef6b jge 0x1239ef76 */
  if ((C.sf==C.of)) goto L_1239ef76;
  /* 1239ef6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1239ef74 jmp 0x1239ef9a */
  goto L_1239ef9a;
L_1239ef76:;
  /* 1239ef76 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ef79 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239ef7d je 0x1239ef9a */
  if (C.zf) goto L_1239ef9a;
  /* 1239ef7f push 2 */
  push32((uint32_t)(0x2u));
  /* 1239ef81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ef84 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1239ef87 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ef88 call 0x12395350 */
  push32(0x1239ef8du); f_12395350();
  /* 1239ef8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ef90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ef93 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1239ef9a:;
  /* 1239ef9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ef9d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1239efa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239efa7 pop edi */
  EDI = (pop32());
  /* 1239efa8 pop esi */
  ESI = (pop32());
  /* 1239efa9 pop ebx */
  EBX = (pop32());
  /* 1239efaa mov esp, ebp */
  ESP = (EBP);
  /* 1239efac pop ebp */
  EBP = (pop32());
  /* 1239efad ret  */
  ESPCHK(0x1239eef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efb0 @ 0x1239efb0 (210 bytes, 63 insns) */
void f_1239efb0(void) {
  FTRACE(0x1239efb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239efb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239efb1 mov ebp, esp */
  EBP = (ESP);
  /* 1239efb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1239efb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239efb7 cmp eax, dword ptr [0x123c1ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239efbd jae 0x1239efe1 */
  if (!C.cf) goto L_1239efe1;
  /* 1239efbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239efc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1239efc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239efc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1239efcb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239efce mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239efd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1239efda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1239efdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239efdf jne 0x1239eff4 */
  if (!C.zf) goto L_1239eff4;
L_1239efe1:;
  /* 1239efe1 call 0x1239c790 */
  push32(0x1239efe6u); f_1239c790();
  /* 1239efe6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239efec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239efef jmp 0x1239f07e */
  goto L_1239f07e;
L_1239eff4:;
  /* 1239eff4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239eff7 push edx */
  push32((uint32_t)(EDX));
  /* 1239eff8 call 0x1239dfb0 */
  push32(0x1239effdu); f_1239dfb0();
  /* 1239effd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f003 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1239f006 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f009 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1239f00c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239f00f mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239f016 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1239f01b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1239f01e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239f020 je 0x1239f05d */
  if (C.zf) goto L_1239f05d;
  /* 1239f022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f025 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f026 call 0x1239de30 */
  push32(0x1239f02bu); f_1239de30();
  /* 1239f02b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f02e push eax */
  push32((uint32_t)(EAX));
  /* 1239f02f call dword ptr [0x123c3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3298))), 0x1239f035u);
  /* 1239f035 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239f037 jne 0x1239f044 */
  if (!C.zf) goto L_1239f044;
  /* 1239f039 call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x1239f03fu);
  /* 1239f03f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239f042 jmp 0x1239f04b */
  goto L_1239f04b;
L_1239f044:;
  /* 1239f044 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1239f04b:;
  /* 1239f04b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239f04f jne 0x1239f053 */
  if (!C.zf) goto L_1239f053;
  /* 1239f051 jmp 0x1239f06f */
  goto L_1239f06f;
L_1239f053:;
  /* 1239f053 call 0x1239c7a0 */
  push32(0x1239f058u); f_1239c7a0();
  /* 1239f058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f05b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1239f05d:;
  /* 1239f05d call 0x1239c790 */
  push32(0x1239f062u); f_1239c790();
  /* 1239f062 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1239f068 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1239f06f:;
  /* 1239f06f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f072 push eax */
  push32((uint32_t)(EAX));
  /* 1239f073 call 0x1239e040 */
  push32(0x1239f078u); f_1239e040();
  /* 1239f078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f07b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239f07e:;
  /* 1239f07e mov esp, ebp */
  ESP = (EBP);
  /* 1239f080 pop ebp */
  EBP = (pop32());
  /* 1239f081 ret  */
  ESPCHK(0x1239efb0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1239f090 (219 bytes, 64 insns) */
void f_1239f090(void) {
  FTRACE(0x1239f090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239f090 push ebp */
  push32((uint32_t)(EBP));
  /* 1239f091 mov ebp, esp */
  EBP = (ESP);
  /* 1239f093 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f094 cmp dword ptr [0x123c06f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239f09b je 0x1239f131 */
  if (C.zf) goto L_1239f131;
  /* 1239f0a1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1239f0a3 push 0x123bc248 */
  push32((uint32_t)(0x123bc248u));
  /* 1239f0a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f0aa push 0xac */
  push32((uint32_t)(0xacu));
  /* 1239f0af push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f0b1 call 0x12394cd0 */
  push32(0x1239f0b6u); f_12394cd0();
  /* 1239f0b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f0b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239f0bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239f0c0 jne 0x1239f0cc */
  if (!C.zf) goto L_1239f0cc;
  /* 1239f0c2 mov eax, 1 */
  EAX = (0x1u);
  /* 1239f0c7 jmp 0x1239f167 */
  goto L_1239f167;
L_1239f0cc:;
  /* 1239f0cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f0cf push eax */
  push32((uint32_t)(EAX));
  /* 1239f0d0 call 0x1239f170 */
  push32(0x1239f0d5u); f_1239f170();
  /* 1239f0d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f0d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239f0da je 0x1239f0fd */
  if (C.zf) goto L_1239f0fd;
  /* 1239f0dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f0df push ecx */
  push32((uint32_t)(ECX));
  /* 1239f0e0 call 0x1239f700 */
  push32(0x1239f0e5u); f_1239f700();
  /* 1239f0e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f0e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f0ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f0ed push edx */
  push32((uint32_t)(EDX));
  /* 1239f0ee call 0x12395350 */
  push32(0x1239f0f3u); f_12395350();
  /* 1239f0f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f0f6 mov eax, 1 */
  EAX = (0x1u);
  /* 1239f0fb jmp 0x1239f167 */
  goto L_1239f167;
L_1239f0fd:;
  /* 1239f0fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f100 mov dword ptr [0x123bfc98], eax */
  w32((uint32_t)(0x123bfc98), (EAX));
  /* 1239f105 mov ecx, dword ptr [0x123c0714] */
  ECX = (r32((uint32_t)(0x123c0714)));
  /* 1239f10b push ecx */
  push32((uint32_t)(ECX));
  /* 1239f10c call 0x1239f700 */
  push32(0x1239f111u); f_1239f700();
  /* 1239f111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f114 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f116 mov edx, dword ptr [0x123c0714] */
  EDX = (r32((uint32_t)(0x123c0714)));
  /* 1239f11c push edx */
  push32((uint32_t)(EDX));
  /* 1239f11d call 0x12395350 */
  push32(0x1239f122u); f_12395350();
  /* 1239f122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f128 mov dword ptr [0x123c0714], eax */
  w32((uint32_t)(0x123c0714), (EAX));
  /* 1239f12d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239f12f jmp 0x1239f167 */
  goto L_1239f167;
L_1239f131:;
  /* 1239f131 mov dword ptr [0x123bfc98], 0x123bfca0 */
  w32((uint32_t)(0x123bfc98), (0x123bfca0u));
  /* 1239f13b mov ecx, dword ptr [0x123c0714] */
  ECX = (r32((uint32_t)(0x123c0714)));
  /* 1239f141 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f142 call 0x1239f700 */
  push32(0x1239f147u); f_1239f700();
  /* 1239f147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f14a push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f14c mov edx, dword ptr [0x123c0714] */
  EDX = (r32((uint32_t)(0x123c0714)));
  /* 1239f152 push edx */
  push32((uint32_t)(EDX));
  /* 1239f153 call 0x12395350 */
  push32(0x1239f158u); f_12395350();
  /* 1239f158 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f15b mov dword ptr [0x123c0714], 0 */
  w32((uint32_t)(0x123c0714), (0x0u));
  /* 1239f165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239f167:;
  /* 1239f167 mov esp, ebp */
  ESP = (EBP);
  /* 1239f169 pop ebp */
  EBP = (pop32());
  /* 1239f16a ret  */
  ESPCHK(0x1239f090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f170 @ 0x1239f170 (1423 bytes, 533 insns) */
void f_1239f170(void) {
  FTRACE(0x1239f170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239f170 push ebp */
  push32((uint32_t)(EBP));
  /* 1239f171 mov ebp, esp */
  EBP = (ESP);
  /* 1239f173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239f176 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1239f17d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239f17f mov ax, word ptr [0x123c074e] */
  AX = (r16((uint32_t)(0x123c074e)));
  /* 1239f185 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239f188 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f18a mov cx, word ptr [0x123c0750] */
  CX = (r16((uint32_t)(0x123c0750)));
  /* 1239f191 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239f194 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239f198 jne 0x1239f1a2 */
  if (!C.zf) goto L_1239f1a2;
  /* 1239f19a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239f19d jmp 0x1239f6fb */
  goto L_1239f6fb;
L_1239f1a2:;
  /* 1239f1a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f1a5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f1a8 push edx */
  push32((uint32_t)(EDX));
  /* 1239f1a9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1239f1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f1ae push eax */
  push32((uint32_t)(EAX));
  /* 1239f1af push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f1b1 call 0x123a2a80 */
  push32(0x1239f1b6u); f_123a2a80();
  /* 1239f1b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f1b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f1bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f1be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f1c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f1c4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f1c7 push edx */
  push32((uint32_t)(EDX));
  /* 1239f1c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1239f1ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f1cd push eax */
  push32((uint32_t)(EAX));
  /* 1239f1ce push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f1d0 call 0x123a2a80 */
  push32(0x1239f1d5u); f_123a2a80();
  /* 1239f1d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f1d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f1db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f1dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f1e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f1e3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f1e6 push edx */
  push32((uint32_t)(EDX));
  /* 1239f1e7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1239f1e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f1ec push eax */
  push32((uint32_t)(EAX));
  /* 1239f1ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f1ef call 0x123a2a80 */
  push32(0x1239f1f4u); f_123a2a80();
  /* 1239f1f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f1f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f1fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f1fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f1ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f202 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f205 push edx */
  push32((uint32_t)(EDX));
  /* 1239f206 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1239f208 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f20b push eax */
  push32((uint32_t)(EAX));
  /* 1239f20c push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f20e call 0x123a2a80 */
  push32(0x1239f213u); f_123a2a80();
  /* 1239f213 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f219 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f21b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f21e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f221 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f224 push edx */
  push32((uint32_t)(EDX));
  /* 1239f225 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1239f227 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f22a push eax */
  push32((uint32_t)(EAX));
  /* 1239f22b push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f22d call 0x123a2a80 */
  push32(0x1239f232u); f_123a2a80();
  /* 1239f232 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f235 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f238 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f23a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f23d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f240 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f243 push edx */
  push32((uint32_t)(EDX));
  /* 1239f244 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1239f246 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f249 push eax */
  push32((uint32_t)(EAX));
  /* 1239f24a push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f24c call 0x123a2a80 */
  push32(0x1239f251u); f_123a2a80();
  /* 1239f251 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f254 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f257 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f259 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f25c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f25f push edx */
  push32((uint32_t)(EDX));
  /* 1239f260 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1239f262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f265 push eax */
  push32((uint32_t)(EAX));
  /* 1239f266 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f268 call 0x123a2a80 */
  push32(0x1239f26du); f_123a2a80();
  /* 1239f26d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f273 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f275 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f27b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f27e push edx */
  push32((uint32_t)(EDX));
  /* 1239f27f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1239f281 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f284 push eax */
  push32((uint32_t)(EAX));
  /* 1239f285 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f287 call 0x123a2a80 */
  push32(0x1239f28cu); f_123a2a80();
  /* 1239f28c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f28f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f292 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f294 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f297 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f29a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f29d push edx */
  push32((uint32_t)(EDX));
  /* 1239f29e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1239f2a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f2a3 push eax */
  push32((uint32_t)(EAX));
  /* 1239f2a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f2a6 call 0x123a2a80 */
  push32(0x1239f2abu); f_123a2a80();
  /* 1239f2ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f2ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f2b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f2b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f2b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f2b9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f2bc push edx */
  push32((uint32_t)(EDX));
  /* 1239f2bd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1239f2bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f2c2 push eax */
  push32((uint32_t)(EAX));
  /* 1239f2c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f2c5 call 0x123a2a80 */
  push32(0x1239f2cau); f_123a2a80();
  /* 1239f2ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f2cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f2d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f2d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f2d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f2d8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f2db push edx */
  push32((uint32_t)(EDX));
  /* 1239f2dc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1239f2de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f2e1 push eax */
  push32((uint32_t)(EAX));
  /* 1239f2e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f2e4 call 0x123a2a80 */
  push32(0x1239f2e9u); f_123a2a80();
  /* 1239f2e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f2ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f2ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f2f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f2f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f2f7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f2fa push edx */
  push32((uint32_t)(EDX));
  /* 1239f2fb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1239f2fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f300 push eax */
  push32((uint32_t)(EAX));
  /* 1239f301 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f303 call 0x123a2a80 */
  push32(0x1239f308u); f_123a2a80();
  /* 1239f308 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f30b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f30e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f310 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f313 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f316 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f319 push edx */
  push32((uint32_t)(EDX));
  /* 1239f31a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1239f31c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f31f push eax */
  push32((uint32_t)(EAX));
  /* 1239f320 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f322 call 0x123a2a80 */
  push32(0x1239f327u); f_123a2a80();
  /* 1239f327 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f32a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f32d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f32f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f332 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f335 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f338 push edx */
  push32((uint32_t)(EDX));
  /* 1239f339 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1239f33b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f33e push eax */
  push32((uint32_t)(EAX));
  /* 1239f33f push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f341 call 0x123a2a80 */
  push32(0x1239f346u); f_123a2a80();
  /* 1239f346 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f349 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f34c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f34e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f354 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f357 push edx */
  push32((uint32_t)(EDX));
  /* 1239f358 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1239f35a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f35d push eax */
  push32((uint32_t)(EAX));
  /* 1239f35e push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f360 call 0x123a2a80 */
  push32(0x1239f365u); f_123a2a80();
  /* 1239f365 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f368 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f36b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f36d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f370 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f373 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f376 push edx */
  push32((uint32_t)(EDX));
  /* 1239f377 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1239f379 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f37c push eax */
  push32((uint32_t)(EAX));
  /* 1239f37d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f37f call 0x123a2a80 */
  push32(0x1239f384u); f_123a2a80();
  /* 1239f384 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f387 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f38a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f38c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f38f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f392 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f395 push edx */
  push32((uint32_t)(EDX));
  /* 1239f396 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1239f398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f39b push eax */
  push32((uint32_t)(EAX));
  /* 1239f39c push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f39e call 0x123a2a80 */
  push32(0x1239f3a3u); f_123a2a80();
  /* 1239f3a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f3a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f3a9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f3ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f3ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f3b1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f3b4 push edx */
  push32((uint32_t)(EDX));
  /* 1239f3b5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1239f3b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f3ba push eax */
  push32((uint32_t)(EAX));
  /* 1239f3bb push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f3bd call 0x123a2a80 */
  push32(0x1239f3c2u); f_123a2a80();
  /* 1239f3c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f3c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f3c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f3ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f3cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f3d0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f3d3 push edx */
  push32((uint32_t)(EDX));
  /* 1239f3d4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1239f3d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f3d9 push eax */
  push32((uint32_t)(EAX));
  /* 1239f3da push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f3dc call 0x123a2a80 */
  push32(0x1239f3e1u); f_123a2a80();
  /* 1239f3e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f3e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f3e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f3e9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f3ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f3ef add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f3f2 push edx */
  push32((uint32_t)(EDX));
  /* 1239f3f3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1239f3f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f3f8 push eax */
  push32((uint32_t)(EAX));
  /* 1239f3f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f3fb call 0x123a2a80 */
  push32(0x1239f400u); f_123a2a80();
  /* 1239f400 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f403 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f406 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f408 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f40b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f40e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f411 push edx */
  push32((uint32_t)(EDX));
  /* 1239f412 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1239f414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f417 push eax */
  push32((uint32_t)(EAX));
  /* 1239f418 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f41a call 0x123a2a80 */
  push32(0x1239f41fu); f_123a2a80();
  /* 1239f41f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f422 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f425 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f427 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f42a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f42d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f430 push edx */
  push32((uint32_t)(EDX));
  /* 1239f431 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1239f433 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f436 push eax */
  push32((uint32_t)(EAX));
  /* 1239f437 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f439 call 0x123a2a80 */
  push32(0x1239f43eu); f_123a2a80();
  /* 1239f43e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f441 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f444 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f446 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f449 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f44c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f44f push edx */
  push32((uint32_t)(EDX));
  /* 1239f450 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1239f452 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f455 push eax */
  push32((uint32_t)(EAX));
  /* 1239f456 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f458 call 0x123a2a80 */
  push32(0x1239f45du); f_123a2a80();
  /* 1239f45d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f463 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f465 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f468 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f46b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f46e push edx */
  push32((uint32_t)(EDX));
  /* 1239f46f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1239f471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f474 push eax */
  push32((uint32_t)(EAX));
  /* 1239f475 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f477 call 0x123a2a80 */
  push32(0x1239f47cu); f_123a2a80();
  /* 1239f47c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f47f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f482 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f484 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f48a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f48d push edx */
  push32((uint32_t)(EDX));
  /* 1239f48e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1239f490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f493 push eax */
  push32((uint32_t)(EAX));
  /* 1239f494 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f496 call 0x123a2a80 */
  push32(0x1239f49bu); f_123a2a80();
  /* 1239f49b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f49e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f4a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f4a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f4a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f4a9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f4ac push edx */
  push32((uint32_t)(EDX));
  /* 1239f4ad push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1239f4af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f4b2 push eax */
  push32((uint32_t)(EAX));
  /* 1239f4b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f4b5 call 0x123a2a80 */
  push32(0x1239f4bau); f_123a2a80();
  /* 1239f4ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f4bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f4c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f4c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f4c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f4c8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f4cb push edx */
  push32((uint32_t)(EDX));
  /* 1239f4cc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1239f4ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f4d1 push eax */
  push32((uint32_t)(EAX));
  /* 1239f4d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f4d4 call 0x123a2a80 */
  push32(0x1239f4d9u); f_123a2a80();
  /* 1239f4d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f4dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f4df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f4e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f4e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f4e7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f4ea push edx */
  push32((uint32_t)(EDX));
  /* 1239f4eb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1239f4ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f4f0 push eax */
  push32((uint32_t)(EAX));
  /* 1239f4f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f4f3 call 0x123a2a80 */
  push32(0x1239f4f8u); f_123a2a80();
  /* 1239f4f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f4fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f4fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f500 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f503 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f506 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f509 push edx */
  push32((uint32_t)(EDX));
  /* 1239f50a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1239f50c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f50f push eax */
  push32((uint32_t)(EAX));
  /* 1239f510 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f512 call 0x123a2a80 */
  push32(0x1239f517u); f_123a2a80();
  /* 1239f517 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f51a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f51d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f51f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f522 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f525 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f528 push edx */
  push32((uint32_t)(EDX));
  /* 1239f529 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1239f52b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f52e push eax */
  push32((uint32_t)(EAX));
  /* 1239f52f push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f531 call 0x123a2a80 */
  push32(0x1239f536u); f_123a2a80();
  /* 1239f536 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f539 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f53c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f53e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f544 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f547 push edx */
  push32((uint32_t)(EDX));
  /* 1239f548 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1239f54a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f54d push eax */
  push32((uint32_t)(EAX));
  /* 1239f54e push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f550 call 0x123a2a80 */
  push32(0x1239f555u); f_123a2a80();
  /* 1239f555 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f558 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f55b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f55d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f560 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f563 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f566 push edx */
  push32((uint32_t)(EDX));
  /* 1239f567 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1239f569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f56c push eax */
  push32((uint32_t)(EAX));
  /* 1239f56d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f56f call 0x123a2a80 */
  push32(0x1239f574u); f_123a2a80();
  /* 1239f574 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f577 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f57a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f57c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f57f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f582 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f588 push edx */
  push32((uint32_t)(EDX));
  /* 1239f589 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1239f58b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f58e push eax */
  push32((uint32_t)(EAX));
  /* 1239f58f push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f591 call 0x123a2a80 */
  push32(0x1239f596u); f_123a2a80();
  /* 1239f596 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f599 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f59c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f59e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f5a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f5a4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f5aa push edx */
  push32((uint32_t)(EDX));
  /* 1239f5ab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1239f5ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f5b0 push eax */
  push32((uint32_t)(EAX));
  /* 1239f5b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f5b3 call 0x123a2a80 */
  push32(0x1239f5b8u); f_123a2a80();
  /* 1239f5b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f5bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f5be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f5c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f5c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f5c6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f5cc push edx */
  push32((uint32_t)(EDX));
  /* 1239f5cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1239f5cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f5d2 push eax */
  push32((uint32_t)(EAX));
  /* 1239f5d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f5d5 call 0x123a2a80 */
  push32(0x1239f5dau); f_123a2a80();
  /* 1239f5da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f5dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f5e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f5e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f5e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f5e8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f5ee push edx */
  push32((uint32_t)(EDX));
  /* 1239f5ef push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1239f5f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f5f4 push eax */
  push32((uint32_t)(EAX));
  /* 1239f5f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f5f7 call 0x123a2a80 */
  push32(0x1239f5fcu); f_123a2a80();
  /* 1239f5fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f5ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f602 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f604 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f60a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f610 push edx */
  push32((uint32_t)(EDX));
  /* 1239f611 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1239f613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f616 push eax */
  push32((uint32_t)(EAX));
  /* 1239f617 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f619 call 0x123a2a80 */
  push32(0x1239f61eu); f_123a2a80();
  /* 1239f61e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f621 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f624 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f626 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f629 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f62c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f632 push edx */
  push32((uint32_t)(EDX));
  /* 1239f633 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1239f635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f638 push eax */
  push32((uint32_t)(EAX));
  /* 1239f639 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f63b call 0x123a2a80 */
  push32(0x1239f640u); f_123a2a80();
  /* 1239f640 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f643 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f646 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f648 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f64b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f64e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f654 push edx */
  push32((uint32_t)(EDX));
  /* 1239f655 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1239f657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f65a push eax */
  push32((uint32_t)(EAX));
  /* 1239f65b push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f65d call 0x123a2a80 */
  push32(0x1239f662u); f_123a2a80();
  /* 1239f662 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f665 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f668 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f66a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f66d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f670 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f676 push edx */
  push32((uint32_t)(EDX));
  /* 1239f677 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1239f679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239f67c push eax */
  push32((uint32_t)(EAX));
  /* 1239f67d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f67f call 0x123a2a80 */
  push32(0x1239f684u); f_123a2a80();
  /* 1239f684 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f687 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f68a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f68c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f68f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f692 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f698 push edx */
  push32((uint32_t)(EDX));
  /* 1239f699 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1239f69b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239f69e push eax */
  push32((uint32_t)(EAX));
  /* 1239f69f push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f6a1 call 0x123a2a80 */
  push32(0x1239f6a6u); f_123a2a80();
  /* 1239f6a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f6a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f6ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f6ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f6b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f6b4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f6ba push edx */
  push32((uint32_t)(EDX));
  /* 1239f6bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1239f6bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239f6c0 push eax */
  push32((uint32_t)(EAX));
  /* 1239f6c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f6c3 call 0x123a2a80 */
  push32(0x1239f6c8u); f_123a2a80();
  /* 1239f6c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f6cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f6ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f6d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f6d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f6d6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f6dc push edx */
  push32((uint32_t)(EDX));
  /* 1239f6dd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1239f6e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239f6e5 push eax */
  push32((uint32_t)(EAX));
  /* 1239f6e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239f6e8 call 0x123a2a80 */
  push32(0x1239f6edu); f_123a2a80();
  /* 1239f6ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f6f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239f6f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239f6f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239f6f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1239f6fb:;
  /* 1239f6fb mov esp, ebp */
  ESP = (EBP);
  /* 1239f6fd pop ebp */
  EBP = (pop32());
  /* 1239f6fe ret  */
  ESPCHK(0x1239f170u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1239f700 (779 bytes, 265 insns) */
void f_1239f700(void) {
  FTRACE(0x1239f700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239f700 push ebp */
  push32((uint32_t)(EBP));
  /* 1239f701 mov ebp, esp */
  EBP = (ESP);
  /* 1239f703 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239f707 jne 0x1239f70e */
  if (!C.zf) goto L_1239f70e;
  /* 1239f709 jmp 0x1239fa09 */
  goto L_1239fa09;
L_1239f70e:;
  /* 1239f70e push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f713 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1239f716 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f717 call 0x12395350 */
  push32(0x1239f71cu); f_12395350();
  /* 1239f71c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f71f push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f724 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239f727 push eax */
  push32((uint32_t)(EAX));
  /* 1239f728 call 0x12395350 */
  push32(0x1239f72du); f_12395350();
  /* 1239f72d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f730 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f732 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f735 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1239f738 push edx */
  push32((uint32_t)(EDX));
  /* 1239f739 call 0x12395350 */
  push32(0x1239f73eu); f_12395350();
  /* 1239f73e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f741 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f743 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f746 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1239f749 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f74a call 0x12395350 */
  push32(0x1239f74fu); f_12395350();
  /* 1239f74f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f752 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f754 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f757 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1239f75a push eax */
  push32((uint32_t)(EAX));
  /* 1239f75b call 0x12395350 */
  push32(0x1239f760u); f_12395350();
  /* 1239f760 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f763 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f765 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f768 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1239f76b push edx */
  push32((uint32_t)(EDX));
  /* 1239f76c call 0x12395350 */
  push32(0x1239f771u); f_12395350();
  /* 1239f771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f774 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f776 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f779 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239f77b push ecx */
  push32((uint32_t)(ECX));
  /* 1239f77c call 0x12395350 */
  push32(0x1239f781u); f_12395350();
  /* 1239f781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f784 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f786 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f789 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1239f78c push eax */
  push32((uint32_t)(EAX));
  /* 1239f78d call 0x12395350 */
  push32(0x1239f792u); f_12395350();
  /* 1239f792 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f795 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f797 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f79a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1239f79d push edx */
  push32((uint32_t)(EDX));
  /* 1239f79e call 0x12395350 */
  push32(0x1239f7a3u); f_12395350();
  /* 1239f7a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f7a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f7ab mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1239f7ae push ecx */
  push32((uint32_t)(ECX));
  /* 1239f7af call 0x12395350 */
  push32(0x1239f7b4u); f_12395350();
  /* 1239f7b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f7b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f7b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f7bc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1239f7bf push eax */
  push32((uint32_t)(EAX));
  /* 1239f7c0 call 0x12395350 */
  push32(0x1239f7c5u); f_12395350();
  /* 1239f7c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f7c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f7ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f7cd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1239f7d0 push edx */
  push32((uint32_t)(EDX));
  /* 1239f7d1 call 0x12395350 */
  push32(0x1239f7d6u); f_12395350();
  /* 1239f7d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f7d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f7db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f7de mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1239f7e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f7e2 call 0x12395350 */
  push32(0x1239f7e7u); f_12395350();
  /* 1239f7e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f7ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f7ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f7ef mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1239f7f2 push eax */
  push32((uint32_t)(EAX));
  /* 1239f7f3 call 0x12395350 */
  push32(0x1239f7f8u); f_12395350();
  /* 1239f7f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f7fb push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f7fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f800 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1239f803 push edx */
  push32((uint32_t)(EDX));
  /* 1239f804 call 0x12395350 */
  push32(0x1239f809u); f_12395350();
  /* 1239f809 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f80c push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f80e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f811 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1239f814 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f815 call 0x12395350 */
  push32(0x1239f81au); f_12395350();
  /* 1239f81a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f81d push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f81f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f822 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1239f825 push eax */
  push32((uint32_t)(EAX));
  /* 1239f826 call 0x12395350 */
  push32(0x1239f82bu); f_12395350();
  /* 1239f82b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f82e push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f833 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1239f836 push edx */
  push32((uint32_t)(EDX));
  /* 1239f837 call 0x12395350 */
  push32(0x1239f83cu); f_12395350();
  /* 1239f83c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f83f push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f844 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1239f847 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f848 call 0x12395350 */
  push32(0x1239f84du); f_12395350();
  /* 1239f84d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f850 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f855 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1239f858 push eax */
  push32((uint32_t)(EAX));
  /* 1239f859 call 0x12395350 */
  push32(0x1239f85eu); f_12395350();
  /* 1239f85e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f861 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f863 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f866 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1239f869 push edx */
  push32((uint32_t)(EDX));
  /* 1239f86a call 0x12395350 */
  push32(0x1239f86fu); f_12395350();
  /* 1239f86f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f872 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f877 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1239f87a push ecx */
  push32((uint32_t)(ECX));
  /* 1239f87b call 0x12395350 */
  push32(0x1239f880u); f_12395350();
  /* 1239f880 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f883 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f888 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1239f88b push eax */
  push32((uint32_t)(EAX));
  /* 1239f88c call 0x12395350 */
  push32(0x1239f891u); f_12395350();
  /* 1239f891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f894 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f896 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f899 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1239f89c push edx */
  push32((uint32_t)(EDX));
  /* 1239f89d call 0x12395350 */
  push32(0x1239f8a2u); f_12395350();
  /* 1239f8a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f8a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f8a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f8aa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1239f8ad push ecx */
  push32((uint32_t)(ECX));
  /* 1239f8ae call 0x12395350 */
  push32(0x1239f8b3u); f_12395350();
  /* 1239f8b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f8b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f8b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f8bb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1239f8be push eax */
  push32((uint32_t)(EAX));
  /* 1239f8bf call 0x12395350 */
  push32(0x1239f8c4u); f_12395350();
  /* 1239f8c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f8c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f8c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f8cc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1239f8cf push edx */
  push32((uint32_t)(EDX));
  /* 1239f8d0 call 0x12395350 */
  push32(0x1239f8d5u); f_12395350();
  /* 1239f8d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f8d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f8da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f8dd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1239f8e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f8e1 call 0x12395350 */
  push32(0x1239f8e6u); f_12395350();
  /* 1239f8e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f8e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f8eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f8ee mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1239f8f1 push eax */
  push32((uint32_t)(EAX));
  /* 1239f8f2 call 0x12395350 */
  push32(0x1239f8f7u); f_12395350();
  /* 1239f8f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f8fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f8fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f8ff mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1239f902 push edx */
  push32((uint32_t)(EDX));
  /* 1239f903 call 0x12395350 */
  push32(0x1239f908u); f_12395350();
  /* 1239f908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f90b push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f90d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f910 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1239f913 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f914 call 0x12395350 */
  push32(0x1239f919u); f_12395350();
  /* 1239f919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f91c push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f91e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f921 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1239f924 push eax */
  push32((uint32_t)(EAX));
  /* 1239f925 call 0x12395350 */
  push32(0x1239f92au); f_12395350();
  /* 1239f92a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f92d push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f92f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f932 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1239f938 push edx */
  push32((uint32_t)(EDX));
  /* 1239f939 call 0x12395350 */
  push32(0x1239f93eu); f_12395350();
  /* 1239f93e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f941 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f946 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1239f94c push ecx */
  push32((uint32_t)(ECX));
  /* 1239f94d call 0x12395350 */
  push32(0x1239f952u); f_12395350();
  /* 1239f952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f955 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f95a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1239f960 push eax */
  push32((uint32_t)(EAX));
  /* 1239f961 call 0x12395350 */
  push32(0x1239f966u); f_12395350();
  /* 1239f966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f969 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f96b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f96e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1239f974 push edx */
  push32((uint32_t)(EDX));
  /* 1239f975 call 0x12395350 */
  push32(0x1239f97au); f_12395350();
  /* 1239f97a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f97d push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f97f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f982 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1239f988 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f989 call 0x12395350 */
  push32(0x1239f98eu); f_12395350();
  /* 1239f98e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f991 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f993 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f996 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1239f99c push eax */
  push32((uint32_t)(EAX));
  /* 1239f99d call 0x12395350 */
  push32(0x1239f9a2u); f_12395350();
  /* 1239f9a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f9a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f9a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f9aa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1239f9b0 push edx */
  push32((uint32_t)(EDX));
  /* 1239f9b1 call 0x12395350 */
  push32(0x1239f9b6u); f_12395350();
  /* 1239f9b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f9b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f9bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f9be mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1239f9c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1239f9c5 call 0x12395350 */
  push32(0x1239f9cau); f_12395350();
  /* 1239f9ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f9cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f9cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f9d2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1239f9d8 push eax */
  push32((uint32_t)(EAX));
  /* 1239f9d9 call 0x12395350 */
  push32(0x1239f9deu); f_12395350();
  /* 1239f9de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f9e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f9e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f9e6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1239f9ec push edx */
  push32((uint32_t)(EDX));
  /* 1239f9ed call 0x12395350 */
  push32(0x1239f9f2u); f_12395350();
  /* 1239f9f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239f9f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239f9f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239f9fa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1239fa00 push ecx */
  push32((uint32_t)(ECX));
  /* 1239fa01 call 0x12395350 */
  push32(0x1239fa06u); f_12395350();
  /* 1239fa06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239fa09:;
  /* 1239fa09 pop ebp */
  EBP = (pop32());
  /* 1239fa0a ret  */
  ESPCHK(0x1239f700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa10 @ 0x1239fa10 (678 bytes, 180 insns) */
void f_1239fa10(void) {
  FTRACE(0x1239fa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239fa10 push ebp */
  push32((uint32_t)(EBP));
  /* 1239fa11 mov ebp, esp */
  EBP = (ESP);
  /* 1239fa13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239fa16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239fa1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239fa1f mov ax, word ptr [0x123c074a] */
  AX = (r16((uint32_t)(0x123c074a)));
  /* 1239fa25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239fa28 cmp dword ptr [0x123c06f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fa2f je 0x1239fb8a */
  if (C.zf) goto L_1239fb8a;
  /* 1239fa35 push 0x123c0718 */
  push32((uint32_t)(0x123c0718u));
  /* 1239fa3a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1239fa3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fa3f push ecx */
  push32((uint32_t)(ECX));
  /* 1239fa40 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239fa42 call 0x123a2a80 */
  push32(0x1239fa47u); f_123a2a80();
  /* 1239fa47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fa4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239fa4d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1239fa4f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1239fa52 push 0x123c071c */
  push32((uint32_t)(0x123c071cu));
  /* 1239fa57 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1239fa59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fa5c push eax */
  push32((uint32_t)(EAX));
  /* 1239fa5d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239fa5f call 0x123a2a80 */
  push32(0x1239fa64u); f_123a2a80();
  /* 1239fa64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fa67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239fa6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239fa6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239fa6f push 0x123c0720 */
  push32((uint32_t)(0x123c0720u));
  /* 1239fa74 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1239fa76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fa79 push edx */
  push32((uint32_t)(EDX));
  /* 1239fa7a push 1 */
  push32((uint32_t)(0x1u));
  /* 1239fa7c call 0x123a2a80 */
  push32(0x1239fa81u); f_123a2a80();
  /* 1239fa81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fa84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239fa87 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239fa89 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239fa8c mov edx, dword ptr [0x123c0720] */
  EDX = (r32((uint32_t)(0x123c0720)));
  /* 1239fa92 push edx */
  push32((uint32_t)(EDX));
  /* 1239fa93 call 0x1239fcc0 */
  push32(0x1239fa98u); f_1239fcc0();
  /* 1239fa98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fa9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fa9f je 0x1239faf9 */
  if (C.zf) goto L_1239faf9;
  /* 1239faa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239faa3 mov eax, dword ptr [0x123c0718] */
  EAX = (r32((uint32_t)(0x123c0718)));
  /* 1239faa8 push eax */
  push32((uint32_t)(EAX));
  /* 1239faa9 call 0x12395350 */
  push32(0x1239faaeu); f_12395350();
  /* 1239faae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fab1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fab3 mov ecx, dword ptr [0x123c071c] */
  ECX = (r32((uint32_t)(0x123c071c)));
  /* 1239fab9 push ecx */
  push32((uint32_t)(ECX));
  /* 1239faba call 0x12395350 */
  push32(0x1239fabfu); f_12395350();
  /* 1239fabf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fac4 mov edx, dword ptr [0x123c0720] */
  EDX = (r32((uint32_t)(0x123c0720)));
  /* 1239faca push edx */
  push32((uint32_t)(EDX));
  /* 1239facb call 0x12395350 */
  push32(0x1239fad0u); f_12395350();
  /* 1239fad0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fad3 mov dword ptr [0x123c0718], 0 */
  w32((uint32_t)(0x123c0718), (0x0u));
  /* 1239fadd mov dword ptr [0x123c071c], 0 */
  w32((uint32_t)(0x123c071c), (0x0u));
  /* 1239fae7 mov dword ptr [0x123c0720], 0 */
  w32((uint32_t)(0x123c0720), (0x0u));
  /* 1239faf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239faf4 jmp 0x1239fcb2 */
  goto L_1239fcb2;
L_1239faf9:;
  /* 1239faf9 mov eax, dword ptr [0x123bfd88] */
  EAX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fafe cmp dword ptr [eax], 0x123bfd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x123bfd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fb04 je 0x1239fb40 */
  if (C.zf) goto L_1239fb40;
  /* 1239fb06 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fb08 mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fb0e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239fb10 push edx */
  push32((uint32_t)(EDX));
  /* 1239fb11 call 0x12395350 */
  push32(0x1239fb16u); f_12395350();
  /* 1239fb16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fb19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fb1b mov eax, dword ptr [0x123bfd88] */
  EAX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fb20 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1239fb23 push ecx */
  push32((uint32_t)(ECX));
  /* 1239fb24 call 0x12395350 */
  push32(0x1239fb29u); f_12395350();
  /* 1239fb29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fb2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fb2e mov edx, dword ptr [0x123bfd88] */
  EDX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fb34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239fb37 push eax */
  push32((uint32_t)(EAX));
  /* 1239fb38 call 0x12395350 */
  push32(0x1239fb3du); f_12395350();
  /* 1239fb3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239fb40:;
  /* 1239fb40 mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fb46 mov edx, dword ptr [0x123c0718] */
  EDX = (r32((uint32_t)(0x123c0718)));
  /* 1239fb4c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1239fb4e mov eax, dword ptr [0x123bfd88] */
  EAX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fb53 mov ecx, dword ptr [0x123c071c] */
  ECX = (r32((uint32_t)(0x123c071c)));
  /* 1239fb59 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1239fb5c mov edx, dword ptr [0x123bfd88] */
  EDX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fb62 mov eax, dword ptr [0x123c0720] */
  EAX = (r32((uint32_t)(0x123c0720)));
  /* 1239fb67 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1239fb6a mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fb70 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239fb72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1239fb74 mov byte ptr [0x123beea8], al */
  w8((uint32_t)(0x123beea8), (AL));
  /* 1239fb79 mov dword ptr [0x123beeac], 1 */
  w32((uint32_t)(0x123beeac), (0x1u));
  /* 1239fb83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239fb85 jmp 0x1239fcb2 */
  goto L_1239fcb2;
L_1239fb8a:;
  /* 1239fb8a push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fb8c mov ecx, dword ptr [0x123c0718] */
  ECX = (r32((uint32_t)(0x123c0718)));
  /* 1239fb92 push ecx */
  push32((uint32_t)(ECX));
  /* 1239fb93 call 0x12395350 */
  push32(0x1239fb98u); f_12395350();
  /* 1239fb98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fb9b push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fb9d mov edx, dword ptr [0x123c071c] */
  EDX = (r32((uint32_t)(0x123c071c)));
  /* 1239fba3 push edx */
  push32((uint32_t)(EDX));
  /* 1239fba4 call 0x12395350 */
  push32(0x1239fba9u); f_12395350();
  /* 1239fba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fbac push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fbae mov eax, dword ptr [0x123c0720] */
  EAX = (r32((uint32_t)(0x123c0720)));
  /* 1239fbb3 push eax */
  push32((uint32_t)(EAX));
  /* 1239fbb4 call 0x12395350 */
  push32(0x1239fbb9u); f_12395350();
  /* 1239fbb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fbbc mov dword ptr [0x123c0718], 0 */
  w32((uint32_t)(0x123c0718), (0x0u));
  /* 1239fbc6 mov dword ptr [0x123c071c], 0 */
  w32((uint32_t)(0x123c071c), (0x0u));
  /* 1239fbd0 mov dword ptr [0x123c0720], 0 */
  w32((uint32_t)(0x123c0720), (0x0u));
  /* 1239fbda push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1239fbdf push 0x123bc254 */
  push32((uint32_t)(0x123bc254u));
  /* 1239fbe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fbe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fbe8 call 0x123948c0 */
  push32(0x1239fbedu); f_123948c0();
  /* 1239fbed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fbf0 mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fbf6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1239fbf8 mov edx, dword ptr [0x123bfd88] */
  EDX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fbfe cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fc01 jne 0x1239fc0b */
  if (!C.zf) goto L_1239fc0b;
  /* 1239fc03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239fc06 jmp 0x1239fcb2 */
  goto L_1239fcb2;
L_1239fc0b:;
  /* 1239fc0b push 0x123bc224 */
  push32((uint32_t)(0x123bc224u));
  /* 1239fc10 mov eax, dword ptr [0x123bfd88] */
  EAX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fc15 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239fc17 push ecx */
  push32((uint32_t)(ECX));
  /* 1239fc18 call 0x12397870 */
  push32(0x1239fc1du); f_12397870();
  /* 1239fc1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fc20 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1239fc25 push 0x123bc254 */
  push32((uint32_t)(0x123bc254u));
  /* 1239fc2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fc2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fc2e call 0x123948c0 */
  push32(0x1239fc33u); f_123948c0();
  /* 1239fc33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fc36 mov edx, dword ptr [0x123bfd88] */
  EDX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fc3c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1239fc3f mov eax, dword ptr [0x123bfd88] */
  EAX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fc44 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fc48 jne 0x1239fc4f */
  if (!C.zf) goto L_1239fc4f;
  /* 1239fc4a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239fc4d jmp 0x1239fcb2 */
  goto L_1239fcb2;
L_1239fc4f:;
  /* 1239fc4f mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fc55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1239fc58 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1239fc5b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1239fc60 push 0x123bc254 */
  push32((uint32_t)(0x123bc254u));
  /* 1239fc65 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fc67 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fc69 call 0x123948c0 */
  push32(0x1239fc6eu); f_123948c0();
  /* 1239fc6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fc71 mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fc77 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1239fc7a mov edx, dword ptr [0x123bfd88] */
  EDX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fc80 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fc84 jne 0x1239fc8b */
  if (!C.zf) goto L_1239fc8b;
  /* 1239fc86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239fc89 jmp 0x1239fcb2 */
  goto L_1239fcb2;
L_1239fc8b:;
  /* 1239fc8b mov eax, dword ptr [0x123bfd88] */
  EAX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fc90 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1239fc93 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1239fc96 mov edx, dword ptr [0x123bfd88] */
  EDX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fc9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1239fc9e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1239fca0 mov byte ptr [0x123beea8], cl */
  w8((uint32_t)(0x123beea8), (CL));
  /* 1239fca6 mov dword ptr [0x123beeac], 1 */
  w32((uint32_t)(0x123beeac), (0x1u));
  /* 1239fcb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239fcb2:;
  /* 1239fcb2 mov esp, ebp */
  ESP = (EBP);
  /* 1239fcb4 pop ebp */
  EBP = (pop32());
  /* 1239fcb5 ret  */
  ESPCHK(0x1239fa10u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1239fcc0 (125 bytes, 49 insns) */
void f_1239fcc0(void) {
  FTRACE(0x1239fcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239fcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1239fcc1 mov ebp, esp */
  EBP = (ESP);
  /* 1239fcc3 push ecx */
  push32((uint32_t)(ECX));
L_1239fcc4:;
  /* 1239fcc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fcc7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239fcca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239fccc je 0x1239fd39 */
  if (C.zf) goto L_1239fd39;
  /* 1239fcce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fcd1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1239fcd4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fcd7 jl 0x1239fcfd */
  if ((C.sf!=C.of)) goto L_1239fcfd;
  /* 1239fcd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fcdc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239fcdf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fce2 jg 0x1239fcfd */
  if ((!C.zf&&C.sf==C.of)) goto L_1239fcfd;
  /* 1239fce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fce7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239fcea sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239fced mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fcf0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1239fcf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fcf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fcf8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1239fcfb jmp 0x1239fd37 */
  goto L_1239fd37;
L_1239fcfd:;
  /* 1239fcfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fd00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1239fd03 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fd06 jne 0x1239fd2e */
  if (!C.zf) goto L_1239fd2e;
  /* 1239fd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fd0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239fd0e:;
  /* 1239fd0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fd11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fd14 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1239fd17 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1239fd19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fd1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fd1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1239fd22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fd25 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1239fd28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239fd2a jne 0x1239fd0e */
  if (!C.zf) goto L_1239fd0e;
  /* 1239fd2c jmp 0x1239fd37 */
  goto L_1239fd37;
L_1239fd2e:;
  /* 1239fd2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fd31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fd34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1239fd37:;
  /* 1239fd37 jmp 0x1239fcc4 */
  goto L_1239fcc4;
L_1239fd39:;
  /* 1239fd39 mov esp, ebp */
  ESP = (EBP);
  /* 1239fd3b pop ebp */
  EBP = (pop32());
  /* 1239fd3c ret  */
  ESPCHK(0x1239fcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd40 @ 0x1239fd40 (304 bytes, 85 insns) */
void f_1239fd40(void) {
  FTRACE(0x1239fd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239fd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1239fd41 mov ebp, esp */
  EBP = (ESP);
  /* 1239fd43 push ecx */
  push32((uint32_t)(ECX));
  /* 1239fd44 cmp dword ptr [0x123c06ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fd4b je 0x1239fe0c */
  if (C.zf) goto L_1239fe0c;
  /* 1239fd51 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1239fd53 push 0x123bc260 */
  push32((uint32_t)(0x123bc260u));
  /* 1239fd58 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fd5a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1239fd5c push 1 */
  push32((uint32_t)(0x1u));
  /* 1239fd5e call 0x12394cd0 */
  push32(0x1239fd63u); f_12394cd0();
  /* 1239fd63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fd66 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239fd69 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fd6d jne 0x1239fd79 */
  if (!C.zf) goto L_1239fd79;
  /* 1239fd6f mov eax, 1 */
  EAX = (0x1u);
  /* 1239fd74 jmp 0x1239fe6c */
  goto L_1239fe6c;
L_1239fd79:;
  /* 1239fd79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fd7c push eax */
  push32((uint32_t)(EAX));
  /* 1239fd7d call 0x1239fe70 */
  push32(0x1239fd82u); f_1239fe70();
  /* 1239fd82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fd85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239fd87 je 0x1239fdad */
  if (C.zf) goto L_1239fdad;
  /* 1239fd89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fd8c push ecx */
  push32((uint32_t)(ECX));
  /* 1239fd8d call 0x123a0100 */
  push32(0x1239fd92u); f_123a0100();
  /* 1239fd92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fd95 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fd97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fd9a push edx */
  push32((uint32_t)(EDX));
  /* 1239fd9b call 0x12395350 */
  push32(0x1239fda0u); f_12395350();
  /* 1239fda0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fda3 mov eax, 1 */
  EAX = (0x1u);
  /* 1239fda8 jmp 0x1239fe6c */
  goto L_1239fe6c;
L_1239fdad:;
  /* 1239fdad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fdb0 mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fdb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239fdb8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1239fdba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fdbd mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fdc3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1239fdc6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1239fdc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fdcc mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fdd2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1239fdd5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1239fdd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fddb mov dword ptr [0x123bfd88], eax */
  w32((uint32_t)(0x123bfd88), (EAX));
  /* 1239fde0 mov ecx, dword ptr [0x123c0724] */
  ECX = (r32((uint32_t)(0x123c0724)));
  /* 1239fde6 push ecx */
  push32((uint32_t)(ECX));
  /* 1239fde7 call 0x123a0100 */
  push32(0x1239fdecu); f_123a0100();
  /* 1239fdec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fdef push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fdf1 mov edx, dword ptr [0x123c0724] */
  EDX = (r32((uint32_t)(0x123c0724)));
  /* 1239fdf7 push edx */
  push32((uint32_t)(EDX));
  /* 1239fdf8 call 0x12395350 */
  push32(0x1239fdfdu); f_12395350();
  /* 1239fdfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fe00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fe03 mov dword ptr [0x123c0724], eax */
  w32((uint32_t)(0x123c0724), (EAX));
  /* 1239fe08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239fe0a jmp 0x1239fe6c */
  goto L_1239fe6c;
L_1239fe0c:;
  /* 1239fe0c mov ecx, dword ptr [0x123bfd88] */
  ECX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fe12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239fe14 mov dword ptr [0x123bfd58], edx */
  w32((uint32_t)(0x123bfd58), (EDX));
  /* 1239fe1a mov eax, dword ptr [0x123bfd88] */
  EAX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fe1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1239fe22 mov dword ptr [0x123bfd5c], ecx */
  w32((uint32_t)(0x123bfd5c), (ECX));
  /* 1239fe28 mov edx, dword ptr [0x123bfd88] */
  EDX = (r32((uint32_t)(0x123bfd88)));
  /* 1239fe2e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1239fe31 mov dword ptr [0x123bfd60], eax */
  w32((uint32_t)(0x123bfd60), (EAX));
  /* 1239fe36 mov dword ptr [0x123bfd88], 0x123bfd58 */
  w32((uint32_t)(0x123bfd88), (0x123bfd58u));
  /* 1239fe40 mov ecx, dword ptr [0x123c0724] */
  ECX = (r32((uint32_t)(0x123c0724)));
  /* 1239fe46 push ecx */
  push32((uint32_t)(ECX));
  /* 1239fe47 call 0x123a0100 */
  push32(0x1239fe4cu); f_123a0100();
  /* 1239fe4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fe4f push 2 */
  push32((uint32_t)(0x2u));
  /* 1239fe51 mov edx, dword ptr [0x123c0724] */
  EDX = (r32((uint32_t)(0x123c0724)));
  /* 1239fe57 push edx */
  push32((uint32_t)(EDX));
  /* 1239fe58 call 0x12395350 */
  push32(0x1239fe5du); f_12395350();
  /* 1239fe5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fe60 mov dword ptr [0x123c0724], 0 */
  w32((uint32_t)(0x123c0724), (0x0u));
  /* 1239fe6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239fe6c:;
  /* 1239fe6c mov esp, ebp */
  ESP = (EBP);
  /* 1239fe6e pop ebp */
  EBP = (pop32());
  /* 1239fe6f ret  */
  ESPCHK(0x1239fd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe70 @ 0x1239fe70 (525 bytes, 200 insns) */
void f_1239fe70(void) {
  FTRACE(0x1239fe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239fe70 push ebp */
  push32((uint32_t)(EBP));
  /* 1239fe71 mov ebp, esp */
  EBP = (ESP);
  /* 1239fe73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239fe76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239fe7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239fe7f mov ax, word ptr [0x123c0744] */
  AX = (r16((uint32_t)(0x123c0744)));
  /* 1239fe85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239fe88 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239fe8c jne 0x1239fe96 */
  if (!C.zf) goto L_1239fe96;
  /* 1239fe8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239fe91 jmp 0x123a0079 */
  goto L_123a0079;
L_1239fe96:;
  /* 1239fe96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fe99 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fe9c push ecx */
  push32((uint32_t)(ECX));
  /* 1239fe9d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1239fe9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fea2 push edx */
  push32((uint32_t)(EDX));
  /* 1239fea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239fea5 call 0x123a2a80 */
  push32(0x1239feaau); f_123a2a80();
  /* 1239feaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fead mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239feb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239feb2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239feb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239feb8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239febb push edx */
  push32((uint32_t)(EDX));
  /* 1239febc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1239febe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fec1 push eax */
  push32((uint32_t)(EAX));
  /* 1239fec2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239fec4 call 0x123a2a80 */
  push32(0x1239fec9u); f_123a2a80();
  /* 1239fec9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fecc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239fecf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239fed1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239fed4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fed7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239feda push edx */
  push32((uint32_t)(EDX));
  /* 1239fedb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1239fedd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239fee0 push eax */
  push32((uint32_t)(EAX));
  /* 1239fee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239fee3 call 0x123a2a80 */
  push32(0x1239fee8u); f_123a2a80();
  /* 1239fee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239feeb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239feee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239fef0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239fef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fef6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fef9 push edx */
  push32((uint32_t)(EDX));
  /* 1239fefa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1239fefc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239feff push eax */
  push32((uint32_t)(EAX));
  /* 1239ff00 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239ff02 call 0x123a2a80 */
  push32(0x1239ff07u); f_123a2a80();
  /* 1239ff07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ff0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239ff0f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239ff12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ff15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff18 push edx */
  push32((uint32_t)(EDX));
  /* 1239ff19 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1239ff1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ff1e push eax */
  push32((uint32_t)(EAX));
  /* 1239ff1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1239ff21 call 0x123a2a80 */
  push32(0x1239ff26u); f_123a2a80();
  /* 1239ff26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ff2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239ff2e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239ff31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ff34 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1239ff37 push eax */
  push32((uint32_t)(EAX));
  /* 1239ff38 call 0x123a0080 */
  push32(0x1239ff3du); f_123a0080();
  /* 1239ff3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ff43 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff46 push ecx */
  push32((uint32_t)(ECX));
  /* 1239ff47 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1239ff49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ff4c push edx */
  push32((uint32_t)(EDX));
  /* 1239ff4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239ff4f call 0x123a2a80 */
  push32(0x1239ff54u); f_123a2a80();
  /* 1239ff54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ff5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239ff5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239ff5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ff62 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff65 push edx */
  push32((uint32_t)(EDX));
  /* 1239ff66 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1239ff68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ff6b push eax */
  push32((uint32_t)(EAX));
  /* 1239ff6c push 1 */
  push32((uint32_t)(0x1u));
  /* 1239ff6e call 0x123a2a80 */
  push32(0x1239ff73u); f_123a2a80();
  /* 1239ff73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ff79 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239ff7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239ff7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ff81 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff84 push edx */
  push32((uint32_t)(EDX));
  /* 1239ff85 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1239ff87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ff8a push eax */
  push32((uint32_t)(EAX));
  /* 1239ff8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ff8d call 0x123a2a80 */
  push32(0x1239ff92u); f_123a2a80();
  /* 1239ff92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ff95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ff98 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239ff9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239ff9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ffa0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ffa3 push edx */
  push32((uint32_t)(EDX));
  /* 1239ffa4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1239ffa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ffa9 push eax */
  push32((uint32_t)(EAX));
  /* 1239ffaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ffac call 0x123a2a80 */
  push32(0x1239ffb1u); f_123a2a80();
  /* 1239ffb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ffb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ffb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239ffb9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239ffbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ffbf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ffc2 push edx */
  push32((uint32_t)(EDX));
  /* 1239ffc3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1239ffc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ffc8 push eax */
  push32((uint32_t)(EAX));
  /* 1239ffc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ffcb call 0x123a2a80 */
  push32(0x1239ffd0u); f_123a2a80();
  /* 1239ffd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ffd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239ffd6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239ffd8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239ffdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239ffde add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239ffe1 push edx */
  push32((uint32_t)(EDX));
  /* 1239ffe2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1239ffe4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239ffe7 push eax */
  push32((uint32_t)(EAX));
  /* 1239ffe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239ffea call 0x123a2a80 */
  push32(0x1239ffefu); f_123a2a80();
  /* 1239ffef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239fff2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239fff5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1239fff7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1239fffa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239fffd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0000 push edx */
  push32((uint32_t)(EDX));
  /* 123a0001 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 123a0003 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a0006 push eax */
  push32((uint32_t)(EAX));
  /* 123a0007 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a0009 call 0x123a2a80 */
  push32(0x123a000eu); f_123a2a80();
  /* 123a000e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0011 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a0014 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0016 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a0019 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a001c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a001f push edx */
  push32((uint32_t)(EDX));
  /* 123a0020 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 123a0022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a0025 push eax */
  push32((uint32_t)(EAX));
  /* 123a0026 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a0028 call 0x123a2a80 */
  push32(0x123a002du); f_123a2a80();
  /* 123a002d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0030 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a0033 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0035 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a0038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a003b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a003e push edx */
  push32((uint32_t)(EDX));
  /* 123a003f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 123a0041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a0044 push eax */
  push32((uint32_t)(EAX));
  /* 123a0045 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a0047 call 0x123a2a80 */
  push32(0x123a004cu); f_123a2a80();
  /* 123a004c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a004f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a0052 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0054 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a0057 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a005a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a005d push edx */
  push32((uint32_t)(EDX));
  /* 123a005e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 123a0060 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a0063 push eax */
  push32((uint32_t)(EAX));
  /* 123a0064 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a0066 call 0x123a2a80 */
  push32(0x123a006bu); f_123a2a80();
  /* 123a006b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a006e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a0071 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0073 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a0076 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123a0079:;
  /* 123a0079 mov esp, ebp */
  ESP = (EBP);
  /* 123a007b pop ebp */
  EBP = (pop32());
  /* 123a007c ret  */
  ESPCHK(0x1239fe70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x123a0080 (125 bytes, 49 insns) */
void f_123a0080(void) {
  FTRACE(0x123a0080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0080 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0081 mov ebp, esp */
  EBP = (ESP);
  /* 123a0083 push ecx */
  push32((uint32_t)(ECX));
L_123a0084:;
  /* 123a0084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0087 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a008a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a008c je 0x123a00f9 */
  if (C.zf) goto L_123a00f9;
  /* 123a008e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0091 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a0094 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0097 jl 0x123a00bd */
  if ((C.sf!=C.of)) goto L_123a00bd;
  /* 123a0099 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a009c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a009f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a00a2 jg 0x123a00bd */
  if ((!C.zf&&C.sf==C.of)) goto L_123a00bd;
  /* 123a00a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a00a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a00aa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a00ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a00b0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123a00b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a00b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a00b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a00bb jmp 0x123a00f7 */
  goto L_123a00f7;
L_123a00bd:;
  /* 123a00bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a00c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a00c3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a00c6 jne 0x123a00ee */
  if (!C.zf) goto L_123a00ee;
  /* 123a00c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a00cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123a00ce:;
  /* 123a00ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a00d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a00d4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123a00d7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123a00d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a00dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a00df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a00e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a00e5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a00e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a00ea jne 0x123a00ce */
  if (!C.zf) goto L_123a00ce;
  /* 123a00ec jmp 0x123a00f7 */
  goto L_123a00f7;
L_123a00ee:;
  /* 123a00ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a00f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a00f4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_123a00f7:;
  /* 123a00f7 jmp 0x123a0084 */
  goto L_123a0084;
L_123a00f9:;
  /* 123a00f9 mov esp, ebp */
  ESP = (EBP);
  /* 123a00fb pop ebp */
  EBP = (pop32());
  /* 123a00fc ret  */
  ESPCHK(0x123a0080u, _esp0);
  ESP += 4; return;
}

/* FUN_10010100 @ 0x123a0100 (147 bytes, 52 insns) */
void f_123a0100(void) {
  FTRACE(0x123a0100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0100 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0101 mov ebp, esp */
  EBP = (ESP);
  /* 123a0103 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0107 jne 0x123a010e */
  if (!C.zf) goto L_123a010e;
  /* 123a0109 jmp 0x123a0191 */
  goto L_123a0191;
L_123a010e:;
  /* 123a010e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0111 cmp dword ptr [eax + 0xc], 0x123c0780 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x123c0780u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0118 je 0x123a0191 */
  if (C.zf) goto L_123a0191;
  /* 123a011a push 2 */
  push32((uint32_t)(0x2u));
  /* 123a011c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a011f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123a0122 push edx */
  push32((uint32_t)(EDX));
  /* 123a0123 call 0x12395350 */
  push32(0x123a0128u); f_12395350();
  /* 123a0128 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a012b push 2 */
  push32((uint32_t)(0x2u));
  /* 123a012d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0130 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123a0133 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0134 call 0x12395350 */
  push32(0x123a0139u); f_12395350();
  /* 123a0139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a013c push 2 */
  push32((uint32_t)(0x2u));
  /* 123a013e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0141 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 123a0144 push eax */
  push32((uint32_t)(EAX));
  /* 123a0145 call 0x12395350 */
  push32(0x123a014au); f_12395350();
  /* 123a014a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a014d push 2 */
  push32((uint32_t)(0x2u));
  /* 123a014f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0152 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123a0155 push edx */
  push32((uint32_t)(EDX));
  /* 123a0156 call 0x12395350 */
  push32(0x123a015bu); f_12395350();
  /* 123a015b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a015e push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0163 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 123a0166 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0167 call 0x12395350 */
  push32(0x123a016cu); f_12395350();
  /* 123a016c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a016f push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0174 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 123a0177 push eax */
  push32((uint32_t)(EAX));
  /* 123a0178 call 0x12395350 */
  push32(0x123a017du); f_12395350();
  /* 123a017d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0180 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0182 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0185 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 123a0188 push edx */
  push32((uint32_t)(EDX));
  /* 123a0189 call 0x12395350 */
  push32(0x123a018eu); f_12395350();
  /* 123a018e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a0191:;
  /* 123a0191 pop ebp */
  EBP = (pop32());
  /* 123a0192 ret  */
  ESPCHK(0x123a0100u, _esp0);
  ESP += 4; return;
}

/* FUN_100101a0 @ 0x123a01a0 (928 bytes, 284 insns) */
void f_123a01a0(void) {
  FTRACE(0x123a01a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a01a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a01a1 mov ebp, esp */
  EBP = (ESP);
  /* 123a01a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a01a6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 123a01ad mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 123a01b4 cmp dword ptr [0x123c06e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a01bb je 0x123a04f1 */
  if (C.zf) goto L_123a04f1;
  /* 123a01c1 cmp dword ptr [0x123c06f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a01c8 jne 0x123a01f0 */
  if (!C.zf) goto L_123a01f0;
  /* 123a01ca push 0x123c06f8 */
  push32((uint32_t)(0x123c06f8u));
  /* 123a01cf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 123a01d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a01d6 mov ax, word ptr [0x123c073c] */
  AX = (r16((uint32_t)(0x123c073c)));
  /* 123a01dc push eax */
  push32((uint32_t)(EAX));
  /* 123a01dd push 0 */
  push32((uint32_t)(0x0u));
  /* 123a01df call 0x123a2a80 */
  push32(0x123a01e4u); f_123a2a80();
  /* 123a01e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a01e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a01e9 je 0x123a01f0 */
  if (C.zf) goto L_123a01f0;
  /* 123a01eb jmp 0x123a04b2 */
  goto L_123a04b2;
L_123a01f0:;
  /* 123a01f0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 123a01f2 push 0x123bc26c */
  push32((uint32_t)(0x123bc26cu));
  /* 123a01f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a01f9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 123a01fe call 0x123948c0 */
  push32(0x123a0203u); f_123948c0();
  /* 123a0203 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0206 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 123a0209 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123a020b push 0x123bc26c */
  push32((uint32_t)(0x123bc26cu));
  /* 123a0210 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0212 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 123a0217 call 0x123948c0 */
  push32(0x123a021cu); f_123948c0();
  /* 123a021c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a021f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 123a0222 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 123a0224 push 0x123bc26c */
  push32((uint32_t)(0x123bc26cu));
  /* 123a0229 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a022b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 123a0230 call 0x123948c0 */
  push32(0x123a0235u); f_123948c0();
  /* 123a0235 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0238 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 123a023b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 123a023d push 0x123bc26c */
  push32((uint32_t)(0x123bc26cu));
  /* 123a0242 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0244 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 123a0249 call 0x123948c0 */
  push32(0x123a024eu); f_123948c0();
  /* 123a024e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0251 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123a0254 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0258 je 0x123a026c */
  if (C.zf) goto L_123a026c;
  /* 123a025a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a025e je 0x123a026c */
  if (C.zf) goto L_123a026c;
  /* 123a0260 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0264 je 0x123a026c */
  if (C.zf) goto L_123a026c;
  /* 123a0266 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a026a jne 0x123a0271 */
  if (!C.zf) goto L_123a0271;
L_123a026c:;
  /* 123a026c jmp 0x123a04b2 */
  goto L_123a04b2;
L_123a0271:;
  /* 123a0271 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123a0274 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123a0277 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123a027e jmp 0x123a0289 */
  goto L_123a0289;
L_123a0280:;
  /* 123a0280 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a0283 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0286 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_123a0289:;
  /* 123a0289 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0290 jge 0x123a02a5 */
  if ((C.sf==C.of)) goto L_123a02a5;
  /* 123a0292 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a0295 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 123a0298 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123a029a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a029d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a02a0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123a02a3 jmp 0x123a0280 */
  goto L_123a0280;
L_123a02a5:;
  /* 123a02a5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 123a02a8 push eax */
  push32((uint32_t)(EAX));
  /* 123a02a9 mov ecx, dword ptr [0x123c06f8] */
  ECX = (r32((uint32_t)(0x123c06f8)));
  /* 123a02af push ecx */
  push32((uint32_t)(ECX));
  /* 123a02b0 call dword ptr [0x123c3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3354))), 0x123a02b6u);
  /* 123a02b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a02b8 jne 0x123a02bf */
  if (!C.zf) goto L_123a02bf;
  /* 123a02ba jmp 0x123a04b2 */
  goto L_123a04b2;
L_123a02bf:;
  /* 123a02bf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a02c3 jbe 0x123a02ca */
  if ((C.cf||C.zf)) goto L_123a02ca;
  /* 123a02c5 jmp 0x123a04b2 */
  goto L_123a04b2;
L_123a02ca:;
  /* 123a02ca mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a02cd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123a02d3 mov dword ptr [0x123beea4], edx */
  w32((uint32_t)(0x123beea4), (EDX));
  /* 123a02d9 cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a02e0 jle 0x123a0339 */
  if ((C.zf||C.sf!=C.of)) goto L_123a0339;
  /* 123a02e2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 123a02e5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123a02e8 jmp 0x123a02f3 */
  goto L_123a02f3;
L_123a02ea:;
  /* 123a02ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a02ed add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a02f0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_123a02f3:;
  /* 123a02f3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a02f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a02f8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a02fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a02fc je 0x123a0339 */
  if (C.zf) goto L_123a0339;
  /* 123a02fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a0301 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a0303 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 123a0306 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a0308 je 0x123a0339 */
  if (C.zf) goto L_123a0339;
  /* 123a030a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a030d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a030f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a0311 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 123a0314 jmp 0x123a031f */
  goto L_123a031f;
L_123a0316:;
  /* 123a0316 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a0319 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a031c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_123a031f:;
  /* 123a031f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a0322 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0324 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123a0327 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a032a jg 0x123a0337 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a0337;
  /* 123a032c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123a032f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0332 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123a0335 jmp 0x123a0316 */
  goto L_123a0316;
L_123a0337:;
  /* 123a0337 jmp 0x123a02ea */
  goto L_123a02ea;
L_123a0339:;
  /* 123a0339 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a033b push 0 */
  push32((uint32_t)(0x0u));
  /* 123a033d push 0 */
  push32((uint32_t)(0x0u));
  /* 123a033f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123a0342 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0345 push eax */
  push32((uint32_t)(EAX));
  /* 123a0346 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123a034b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123a034e push ecx */
  push32((uint32_t)(ECX));
  /* 123a034f push 1 */
  push32((uint32_t)(0x1u));
  /* 123a0351 call 0x1239caf0 */
  push32(0x123a0356u); f_1239caf0();
  /* 123a0356 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0359 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a035b jne 0x123a0362 */
  if (!C.zf) goto L_123a0362;
  /* 123a035d jmp 0x123a04b2 */
  goto L_123a04b2;
L_123a0362:;
  /* 123a0362 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123a0365 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 123a036a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a036d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 123a0370 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 123a0377 jmp 0x123a0382 */
  goto L_123a0382;
L_123a0379:;
  /* 123a0379 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a037c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a037f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_123a0382:;
  /* 123a0382 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0389 jge 0x123a03a0 */
  if ((C.sf==C.of)) goto L_123a03a0;
  /* 123a038b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a038e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 123a0392 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 123a0395 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123a0398 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a039b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 123a039e jmp 0x123a0379 */
  goto L_123a0379;
L_123a03a0:;
  /* 123a03a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a03a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a03a4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a03a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a03aa push edx */
  push32((uint32_t)(EDX));
  /* 123a03ab push 0x100 */
  push32((uint32_t)(0x100u));
  /* 123a03b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a03b3 push eax */
  push32((uint32_t)(EAX));
  /* 123a03b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a03b6 call 0x123a2d20 */
  push32(0x123a03bbu); f_123a2d20();
  /* 123a03bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a03be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a03c0 jne 0x123a03c7 */
  if (!C.zf) goto L_123a03c7;
  /* 123a03c2 jmp 0x123a04b2 */
  goto L_123a04b2;
L_123a03c7:;
  /* 123a03c7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a03ca mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 123a03cf cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a03d6 jle 0x123a0433 */
  if ((C.zf||C.sf!=C.of)) goto L_123a0433;
  /* 123a03d8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 123a03db mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123a03de jmp 0x123a03e9 */
  goto L_123a03e9;
L_123a03e0:;
  /* 123a03e0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a03e3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a03e6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_123a03e9:;
  /* 123a03e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a03ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123a03ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123a03f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a03f2 je 0x123a0433 */
  if (C.zf) goto L_123a0433;
  /* 123a03f4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a03f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a03f9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 123a03fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a03fe je 0x123a0433 */
  if (C.zf) goto L_123a0433;
  /* 123a0400 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a0403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a0405 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a0407 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 123a040a jmp 0x123a0415 */
  goto L_123a0415;
L_123a040c:;
  /* 123a040c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a040f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0412 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_123a0415:;
  /* 123a0415 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a0418 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a041a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 123a041d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0420 jg 0x123a0431 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a0431;
  /* 123a0422 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 123a0425 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123a0428 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 123a042f jmp 0x123a040c */
  goto L_123a040c;
L_123a0431:;
  /* 123a0431 jmp 0x123a03e0 */
  goto L_123a03e0;
L_123a0433:;
  /* 123a0433 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123a0436 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0439 mov dword ptr [0x123bec98], eax */
  w32((uint32_t)(0x123bec98), (EAX));
  /* 123a043e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a0441 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0444 mov dword ptr [0x123bec9c], ecx */
  w32((uint32_t)(0x123bec9c), (ECX));
  /* 123a044a cmp dword ptr [0x123c0728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0451 je 0x123a0464 */
  if (C.zf) goto L_123a0464;
  /* 123a0453 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0455 mov edx, dword ptr [0x123c0728] */
  EDX = (r32((uint32_t)(0x123c0728)));
  /* 123a045b push edx */
  push32((uint32_t)(EDX));
  /* 123a045c call 0x12395350 */
  push32(0x123a0461u); f_12395350();
  /* 123a0461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a0464:;
  /* 123a0464 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 123a0467 mov dword ptr [0x123c0728], eax */
  w32((uint32_t)(0x123c0728), (EAX));
  /* 123a046c cmp dword ptr [0x123c072c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c072c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0473 je 0x123a0486 */
  if (C.zf) goto L_123a0486;
  /* 123a0475 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0477 mov ecx, dword ptr [0x123c072c] */
  ECX = (r32((uint32_t)(0x123c072c)));
  /* 123a047d push ecx */
  push32((uint32_t)(ECX));
  /* 123a047e call 0x12395350 */
  push32(0x123a0483u); f_12395350();
  /* 123a0483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a0486:;
  /* 123a0486 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a0489 mov dword ptr [0x123c072c], edx */
  w32((uint32_t)(0x123c072c), (EDX));
  /* 123a048f push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0491 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123a0494 push eax */
  push32((uint32_t)(EAX));
  /* 123a0495 call 0x12395350 */
  push32(0x123a049au); f_12395350();
  /* 123a049a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a049d push 2 */
  push32((uint32_t)(0x2u));
  /* 123a049f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a04a2 push ecx */
  push32((uint32_t)(ECX));
  /* 123a04a3 call 0x12395350 */
  push32(0x123a04a8u); f_12395350();
  /* 123a04a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a04ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a04ad jmp 0x123a053c */
  goto L_123a053c;
L_123a04b2:;
  /* 123a04b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a04b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 123a04b7 push edx */
  push32((uint32_t)(EDX));
  /* 123a04b8 call 0x12395350 */
  push32(0x123a04bdu); f_12395350();
  /* 123a04bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a04c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a04c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 123a04c5 push eax */
  push32((uint32_t)(EAX));
  /* 123a04c6 call 0x12395350 */
  push32(0x123a04cbu); f_12395350();
  /* 123a04cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a04ce push 2 */
  push32((uint32_t)(0x2u));
  /* 123a04d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 123a04d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a04d4 call 0x12395350 */
  push32(0x123a04d9u); f_12395350();
  /* 123a04d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a04dc push 2 */
  push32((uint32_t)(0x2u));
  /* 123a04de mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 123a04e1 push edx */
  push32((uint32_t)(EDX));
  /* 123a04e2 call 0x12395350 */
  push32(0x123a04e7u); f_12395350();
  /* 123a04e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a04ea mov eax, 1 */
  EAX = (0x1u);
  /* 123a04ef jmp 0x123a053c */
  goto L_123a053c;
L_123a04f1:;
  /* 123a04f1 mov dword ptr [0x123bec98], 0x123beca2 */
  w32((uint32_t)(0x123bec98), (0x123beca2u));
  /* 123a04fb mov dword ptr [0x123bec9c], 0x123beca2 */
  w32((uint32_t)(0x123bec9c), (0x123beca2u));
  /* 123a0505 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0507 mov eax, dword ptr [0x123c0728] */
  EAX = (r32((uint32_t)(0x123c0728)));
  /* 123a050c push eax */
  push32((uint32_t)(EAX));
  /* 123a050d call 0x12395350 */
  push32(0x123a0512u); f_12395350();
  /* 123a0512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0515 push 2 */
  push32((uint32_t)(0x2u));
  /* 123a0517 mov ecx, dword ptr [0x123c072c] */
  ECX = (r32((uint32_t)(0x123c072c)));
  /* 123a051d push ecx */
  push32((uint32_t)(ECX));
  /* 123a051e call 0x12395350 */
  push32(0x123a0523u); f_12395350();
  /* 123a0523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0526 mov dword ptr [0x123c0728], 0 */
  w32((uint32_t)(0x123c0728), (0x0u));
  /* 123a0530 mov dword ptr [0x123c072c], 0 */
  w32((uint32_t)(0x123c072c), (0x0u));
  /* 123a053a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a053c:;
  /* 123a053c mov esp, ebp */
  ESP = (EBP);
  /* 123a053e pop ebp */
  EBP = (pop32());
  /* 123a053f ret  */
  ESPCHK(0x123a01a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010540 @ 0x123a0540 (7 bytes, 5 insns) */
void f_123a0540(void) {
  FTRACE(0x123a0540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0540 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0541 mov ebp, esp */
  EBP = (ESP);
  /* 123a0543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a0545 pop ebp */
  EBP = (pop32());
  /* 123a0546 ret  */
  ESPCHK(0x123a0540u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x123a0550 (129 bytes, 56 insns) */
void f_123a0550(void) {
  FTRACE(0x123a0550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0550 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 123a0554 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 123a0558 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 123a055e jne 0x123a059c */
  if (!C.zf) goto L_123a059c;
L_123a0560:;
  /* 123a0560 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123a0562 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a0564 jne 0x123a0594 */
  if (!C.zf) goto L_123a0594;
  /* 123a0566 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a0568 je 0x123a0590 */
  if (C.zf) goto L_123a0590;
  /* 123a056a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a056d jne 0x123a0594 */
  if (!C.zf) goto L_123a0594;
  /* 123a056f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123a0571 je 0x123a0590 */
  if (C.zf) goto L_123a0590;
  /* 123a0573 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 123a0576 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a0579 jne 0x123a0594 */
  if (!C.zf) goto L_123a0594;
  /* 123a057b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a057d je 0x123a0590 */
  if (C.zf) goto L_123a0590;
  /* 123a057f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a0582 jne 0x123a0594 */
  if (!C.zf) goto L_123a0594;
  /* 123a0584 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0587 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a058a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123a058c jne 0x123a0560 */
  if (!C.zf) goto L_123a0560;
  /* 123a058e mov edi, edi */
  EDI = (EDI);
L_123a0590:;
  /* 123a0590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a0592 ret  */
  ESPCHK(0x123a0550u, _esp0);
  ESP += 4; return;
  /* 123a0593 nop  */
  /* nop */
L_123a0594:;
  /* 123a0594 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0596 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123a0598 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 123a0599 ret  */
  ESPCHK(0x123a0550u, _esp0);
  ESP += 4; return;
  /* 123a059a mov edi, edi */
  EDI = (EDI);
L_123a059c:;
  /* 123a059c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 123a05a2 je 0x123a05b8 */
  if (C.zf) goto L_123a05b8;
  /* 123a05a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a05a6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123a05a7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a05a9 jne 0x123a0594 */
  if (!C.zf) goto L_123a0594;
  /* 123a05ab inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123a05ac or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a05ae je 0x123a0590 */
  if (C.zf) goto L_123a0590;
  /* 123a05b0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 123a05b6 je 0x123a0560 */
  if (C.zf) goto L_123a0560;
L_123a05b8:;
  /* 123a05b8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 123a05bb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a05be cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a05c0 jne 0x123a0594 */
  if (!C.zf) goto L_123a0594;
  /* 123a05c2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a05c4 je 0x123a0590 */
  if (C.zf) goto L_123a0590;
  /* 123a05c6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a05c9 jne 0x123a0594 */
  if (!C.zf) goto L_123a0594;
  /* 123a05cb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 123a05cd je 0x123a0590 */
  if (C.zf) goto L_123a0590;
  /* 123a05cf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a05d2 jmp 0x123a0560 */
  goto L_123a0560;
}

/* FUN_100105e0 @ 0x123a05e0 (62 bytes, 35 insns) */
void f_123a05e0(void) {
  FTRACE(0x123a05e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a05e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a05e1 mov ebp, esp */
  EBP = (ESP);
  /* 123a05e3 push esi */
  push32((uint32_t)(ESI));
  /* 123a05e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a05e6 push eax */
  push32((uint32_t)(EAX));
  /* 123a05e7 push eax */
  push32((uint32_t)(EAX));
  /* 123a05e8 push eax */
  push32((uint32_t)(EAX));
  /* 123a05e9 push eax */
  push32((uint32_t)(EAX));
  /* 123a05ea push eax */
  push32((uint32_t)(EAX));
  /* 123a05eb push eax */
  push32((uint32_t)(EAX));
  /* 123a05ec push eax */
  push32((uint32_t)(EAX));
  /* 123a05ed push eax */
  push32((uint32_t)(EAX));
  /* 123a05ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a05f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123a05f4:;
  /* 123a05f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a05f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a05f8 je 0x123a0601 */
  if (C.zf) goto L_123a0601;
  /* 123a05fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123a05fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x123a05fb");
  /* 123a05ff jmp 0x123a05f4 */
  goto L_123a05f4;
L_123a0601:;
  /* 123a0601 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0604 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123a0607 nop  */
  /* nop */
L_123a0608:;
  /* 123a0608 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123a0609 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123a060b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a060d je 0x123a0616 */
  if (C.zf) goto L_123a0616;
  /* 123a060f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123a0610 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x123a0610");
  /* 123a0614 jae 0x123a0608 */
  if (!C.cf) goto L_123a0608;
L_123a0616:;
  /* 123a0616 mov eax, ecx */
  EAX = (ECX);
  /* 123a0618 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a061b pop esi */
  ESI = (pop32());
  /* 123a061c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123a061d ret  */
  ESPCHK(0x123a05e0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x123a0620 (56 bytes, 31 insns) */
void f_123a0620(void) {
  FTRACE(0x123a0620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0620 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0621 mov ebp, esp */
  EBP = (ESP);
  /* 123a0623 push edi */
  push32((uint32_t)(EDI));
  /* 123a0624 push esi */
  push32((uint32_t)(ESI));
  /* 123a0625 push ebx */
  push32((uint32_t)(EBX));
  /* 123a0626 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a0629 jecxz 0x123a0651 */
  x86_unimpl("jecxz @ 0x123a0629");
  /* 123a062b mov ebx, ecx */
  EBX = (ECX);
  /* 123a062d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0630 mov esi, edi */
  ESI = (EDI);
  /* 123a0632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a0634 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 123a0636 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0638 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a063a mov edi, esi */
  EDI = (ESI);
  /* 123a063c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 123a063f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 123a0641 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 123a0644 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0646 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 123a0649 ja 0x123a064f */
  if ((!C.cf&&!C.zf)) goto L_123a064f;
  /* 123a064b je 0x123a0651 */
  if (C.zf) goto L_123a0651;
  /* 123a064d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123a064e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_123a064f:;
  /* 123a064f not ecx */
  ECX = (~(ECX));
L_123a0651:;
  /* 123a0651 mov eax, ecx */
  EAX = (ECX);
  /* 123a0653 pop ebx */
  EBX = (pop32());
  /* 123a0654 pop esi */
  ESI = (pop32());
  /* 123a0655 pop edi */
  EDI = (pop32());
  /* 123a0656 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123a0657 ret  */
  ESPCHK(0x123a0620u, _esp0);
  ESP += 4; return;
}

/* FUN_10010660 @ 0x123a0660 (58 bytes, 32 insns) */
void f_123a0660(void) {
  FTRACE(0x123a0660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0660 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0661 mov ebp, esp */
  EBP = (ESP);
  /* 123a0663 push esi */
  push32((uint32_t)(ESI));
  /* 123a0664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a0666 push eax */
  push32((uint32_t)(EAX));
  /* 123a0667 push eax */
  push32((uint32_t)(EAX));
  /* 123a0668 push eax */
  push32((uint32_t)(EAX));
  /* 123a0669 push eax */
  push32((uint32_t)(EAX));
  /* 123a066a push eax */
  push32((uint32_t)(EAX));
  /* 123a066b push eax */
  push32((uint32_t)(EAX));
  /* 123a066c push eax */
  push32((uint32_t)(EAX));
  /* 123a066d push eax */
  push32((uint32_t)(EAX));
  /* 123a066e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a0671 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_123a0674:;
  /* 123a0674 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a0676 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a0678 je 0x123a0681 */
  if (C.zf) goto L_123a0681;
  /* 123a067a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 123a067b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x123a067b");
  /* 123a067f jmp 0x123a0674 */
  goto L_123a0674;
L_123a0681:;
  /* 123a0681 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_123a0684:;
  /* 123a0684 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 123a0686 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 123a0688 je 0x123a0694 */
  if (C.zf) goto L_123a0694;
  /* 123a068a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 123a068b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x123a068b");
  /* 123a068f jae 0x123a0684 */
  if (!C.cf) goto L_123a0684;
  /* 123a0691 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_123a0694:;
  /* 123a0694 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0697 pop esi */
  ESI = (pop32());
  /* 123a0698 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 123a0699 ret  */
  ESPCHK(0x123a0660u, _esp0);
  ESP += 4; return;
}

/* FUN_100106a0 @ 0x123a06a0 (512 bytes, 147 insns) */
void f_123a06a0(void) {
  FTRACE(0x123a06a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a06a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a06a1 mov ebp, esp */
  EBP = (ESP);
  /* 123a06a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a06a6 cmp dword ptr [0x123c0774], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0774))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a06ad jne 0x123a06d2 */
  if (!C.zf) goto L_123a06d2;
  /* 123a06af call 0x123a1170 */
  push32(0x123a06b4u); f_123a1170();
  /* 123a06b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a06b6 je 0x123a06c2 */
  if (C.zf) goto L_123a06c2;
  /* 123a06b8 mov eax, dword ptr [0x123c328c] */
  EAX = (r32((uint32_t)(0x123c328c)));
  /* 123a06bd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a06c0 jmp 0x123a06c9 */
  goto L_123a06c9;
L_123a06c2:;
  /* 123a06c2 mov dword ptr [ebp - 8], 0x123a11c0 */
  w32((uint32_t)(EBP + -0x8), (0x123a11c0u));
L_123a06c9:;
  /* 123a06c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a06cc mov dword ptr [0x123c0774], ecx */
  w32((uint32_t)(0x123c0774), (ECX));
L_123a06d2:;
  /* 123a06d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a06d6 jne 0x123a06e2 */
  if (!C.zf) goto L_123a06e2;
  /* 123a06d8 call 0x123a0fc0 */
  push32(0x123a06ddu); f_123a0fc0();
  /* 123a06dd jmp 0x123a07ae */
  goto L_123a07ae;
L_123a06e2:;
  /* 123a06e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a06e5 mov dword ptr [0x123c0764], edx */
  w32((uint32_t)(0x123c0764), (EDX));
  /* 123a06eb cmp dword ptr [0x123c0764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a06f2 je 0x123a0714 */
  if (C.zf) goto L_123a0714;
  /* 123a06f4 mov eax, dword ptr [0x123c0764] */
  EAX = (r32((uint32_t)(0x123c0764)));
  /* 123a06f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a06fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a06fe je 0x123a0714 */
  if (C.zf) goto L_123a0714;
  /* 123a0700 push 0x123c0764 */
  push32((uint32_t)(0x123c0764u));
  /* 123a0705 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 123a0707 push 0x123bfa90 */
  push32((uint32_t)(0x123bfa90u));
  /* 123a070c call 0x123a08a0 */
  push32(0x123a0711u); f_123a08a0();
  /* 123a0711 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a0714:;
  /* 123a0714 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0717 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a071a mov dword ptr [0x123c0768], edx */
  w32((uint32_t)(0x123c0768), (EDX));
  /* 123a0720 cmp dword ptr [0x123c0768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0727 je 0x123a0749 */
  if (C.zf) goto L_123a0749;
  /* 123a0729 mov eax, dword ptr [0x123c0768] */
  EAX = (r32((uint32_t)(0x123c0768)));
  /* 123a072e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a0731 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a0733 je 0x123a0749 */
  if (C.zf) goto L_123a0749;
  /* 123a0735 push 0x123c0768 */
  push32((uint32_t)(0x123c0768u));
  /* 123a073a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123a073c push 0x123bf9d8 */
  push32((uint32_t)(0x123bf9d8u));
  /* 123a0741 call 0x123a08a0 */
  push32(0x123a0746u); f_123a08a0();
  /* 123a0746 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a0749:;
  /* 123a0749 mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
  /* 123a0753 cmp dword ptr [0x123c0764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a075a je 0x123a078d */
  if (C.zf) goto L_123a078d;
  /* 123a075c mov edx, dword ptr [0x123c0764] */
  EDX = (r32((uint32_t)(0x123c0764)));
  /* 123a0762 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123a0765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0767 je 0x123a078d */
  if (C.zf) goto L_123a078d;
  /* 123a0769 cmp dword ptr [0x123c0768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0770 je 0x123a0786 */
  if (C.zf) goto L_123a0786;
  /* 123a0772 mov ecx, dword ptr [0x123c0768] */
  ECX = (r32((uint32_t)(0x123c0768)));
  /* 123a0778 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 123a077b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a077d je 0x123a0786 */
  if (C.zf) goto L_123a0786;
  /* 123a077f call 0x123a0930 */
  push32(0x123a0784u); f_123a0930();
  /* 123a0784 jmp 0x123a078b */
  goto L_123a078b;
L_123a0786:;
  /* 123a0786 call 0x123a0d20 */
  push32(0x123a078bu); f_123a0d20();
L_123a078b:;
  /* 123a078b jmp 0x123a07ae */
  goto L_123a07ae;
L_123a078d:;
  /* 123a078d cmp dword ptr [0x123c0768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0794 je 0x123a07a9 */
  if (C.zf) goto L_123a07a9;
  /* 123a0796 mov eax, dword ptr [0x123c0768] */
  EAX = (r32((uint32_t)(0x123c0768)));
  /* 123a079b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a079e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a07a0 je 0x123a07a9 */
  if (C.zf) goto L_123a07a9;
  /* 123a07a2 call 0x123a0ec0 */
  push32(0x123a07a7u); f_123a0ec0();
  /* 123a07a7 jmp 0x123a07ae */
  goto L_123a07ae;
L_123a07a9:;
  /* 123a07a9 call 0x123a0fc0 */
  push32(0x123a07aeu); f_123a0fc0();
L_123a07ae:;
  /* 123a07ae cmp dword ptr [0x123c076c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c076c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a07b5 jne 0x123a07be */
  if (!C.zf) goto L_123a07be;
  /* 123a07b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a07b9 jmp 0x123a089c */
  goto L_123a089c;
L_123a07be:;
  /* 123a07be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a07c1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a07c7 push edx */
  push32((uint32_t)(EDX));
  /* 123a07c8 call 0x123a0ff0 */
  push32(0x123a07cdu); f_123a0ff0();
  /* 123a07cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a07d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a07d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a07d7 je 0x123a07ec */
  if (C.zf) goto L_123a07ec;
  /* 123a07d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a07dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a07e1 push eax */
  push32((uint32_t)(EAX));
  /* 123a07e2 call dword ptr [0x123c3290] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3290))), 0x123a07e8u);
  /* 123a07e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a07ea jne 0x123a07f3 */
  if (!C.zf) goto L_123a07f3;
L_123a07ec:;
  /* 123a07ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a07ee jmp 0x123a089c */
  goto L_123a089c;
L_123a07f3:;
  /* 123a07f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a07f5 mov ecx, dword ptr [0x123c0754] */
  ECX = (r32((uint32_t)(0x123c0754)));
  /* 123a07fb push ecx */
  push32((uint32_t)(ECX));
  /* 123a07fc call dword ptr [0x123c32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32a0))), 0x123a0802u);
  /* 123a0802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0804 jne 0x123a080d */
  if (!C.zf) goto L_123a080d;
  /* 123a0806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a0808 jmp 0x123a089c */
  goto L_123a089c;
L_123a080d:;
  /* 123a080d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0811 je 0x123a0838 */
  if (C.zf) goto L_123a0838;
  /* 123a0813 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a0816 mov ax, word ptr [0x123c0754] */
  AX = (r16((uint32_t)(0x123c0754)));
  /* 123a081c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 123a081f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a0822 mov dx, word ptr [0x123c0770] */
  DX = (r16((uint32_t)(0x123c0770)));
  /* 123a0829 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 123a082d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a0830 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 123a0834 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_123a0838:;
  /* 123a0838 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a083c je 0x123a0897 */
  if (C.zf) goto L_123a0897;
  /* 123a083e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 123a0840 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a0843 push edx */
  push32((uint32_t)(EDX));
  /* 123a0844 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 123a0849 mov eax, dword ptr [0x123c0754] */
  EAX = (r32((uint32_t)(0x123c0754)));
  /* 123a084e push eax */
  push32((uint32_t)(EAX));
  /* 123a084f call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a0855u);
  /* 123a0855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0857 jne 0x123a085d */
  if (!C.zf) goto L_123a085d;
  /* 123a0859 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a085b jmp 0x123a089c */
  goto L_123a089c;
L_123a085d:;
  /* 123a085d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 123a085f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a0862 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0865 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0866 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 123a086b mov edx, dword ptr [0x123c0770] */
  EDX = (r32((uint32_t)(0x123c0770)));
  /* 123a0871 push edx */
  push32((uint32_t)(EDX));
  /* 123a0872 call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a0878u);
  /* 123a0878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a087a jne 0x123a0880 */
  if (!C.zf) goto L_123a0880;
  /* 123a087c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a087e jmp 0x123a089c */
  goto L_123a089c;
L_123a0880:;
  /* 123a0880 push 0xa */
  push32((uint32_t)(0xau));
  /* 123a0882 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a0885 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a088a push eax */
  push32((uint32_t)(EAX));
  /* 123a088b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a088e push ecx */
  push32((uint32_t)(ECX));
  /* 123a088f call 0x12397400 */
  push32(0x123a0894u); f_12397400();
  /* 123a0894 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a0897:;
  /* 123a0897 mov eax, 1 */
  EAX = (0x1u);
L_123a089c:;
  /* 123a089c mov esp, ebp */
  ESP = (EBP);
  /* 123a089e pop ebp */
  EBP = (pop32());
  /* 123a089f ret  */
  ESPCHK(0x123a06a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108a0 @ 0x123a08a0 (130 bytes, 47 insns) */
void f_123a08a0(void) {
  FTRACE(0x123a08a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a08a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a08a1 mov ebp, esp */
  EBP = (ESP);
  /* 123a08a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a08a6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123a08ad mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_123a08b4:;
  /* 123a08b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a08b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a08ba jg 0x123a091e */
  if ((!C.zf&&C.sf==C.of)) goto L_123a091e;
  /* 123a08bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a08c0 je 0x123a091e */
  if (C.zf) goto L_123a091e;
  /* 123a08c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a08c5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a08c8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a08c9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a08cb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123a08cd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a08d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a08d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a08d6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 123a08d9 push eax */
  push32((uint32_t)(EAX));
  /* 123a08da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a08dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123a08df push edx */
  push32((uint32_t)(EDX));
  /* 123a08e0 call 0x123a2f90 */
  push32(0x123a08e5u); f_123a2f90();
  /* 123a08e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a08e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a08eb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a08ef jne 0x123a0902 */
  if (!C.zf) goto L_123a0902;
  /* 123a08f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a08f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a08f7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 123a08fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a08fe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123a0900 jmp 0x123a091c */
  goto L_123a091c;
L_123a0902:;
  /* 123a0902 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0906 jge 0x123a0913 */
  if ((C.sf==C.of)) goto L_123a0913;
  /* 123a0908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a090b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a090e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 123a0911 jmp 0x123a091c */
  goto L_123a091c;
L_123a0913:;
  /* 123a0913 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a0916 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0919 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_123a091c:;
  /* 123a091c jmp 0x123a08b4 */
  goto L_123a08b4;
L_123a091e:;
  /* 123a091e mov esp, ebp */
  ESP = (EBP);
  /* 123a0920 pop ebp */
  EBP = (pop32());
  /* 123a0921 ret  */
  ESPCHK(0x123a08a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010930 @ 0x123a0930 (186 bytes, 50 insns) */
void f_123a0930(void) {
  FTRACE(0x123a0930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0930 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0931 mov ebp, esp */
  EBP = (ESP);
  /* 123a0933 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0934 mov eax, dword ptr [0x123c0764] */
  EAX = (r32((uint32_t)(0x123c0764)));
  /* 123a0939 push eax */
  push32((uint32_t)(EAX));
  /* 123a093a call 0x123976f0 */
  push32(0x123a093fu); f_123976f0();
  /* 123a093f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0942 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0944 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0947 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123a094a mov dword ptr [0x123c0760], ecx */
  w32((uint32_t)(0x123c0760), (ECX));
  /* 123a0950 mov edx, dword ptr [0x123c0768] */
  EDX = (r32((uint32_t)(0x123c0768)));
  /* 123a0956 push edx */
  push32((uint32_t)(EDX));
  /* 123a0957 call 0x123976f0 */
  push32(0x123a095cu); f_123976f0();
  /* 123a095c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a095f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0961 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0964 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123a0967 mov dword ptr [0x123c0758], ecx */
  w32((uint32_t)(0x123c0758), (ECX));
  /* 123a096d mov dword ptr [0x123c0754], 0 */
  w32((uint32_t)(0x123c0754), (0x0u));
  /* 123a0977 cmp dword ptr [0x123c0760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a097e je 0x123a0989 */
  if (C.zf) goto L_123a0989;
  /* 123a0980 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123a0987 jmp 0x123a099b */
  goto L_123a099b;
L_123a0989:;
  /* 123a0989 mov edx, dword ptr [0x123c0764] */
  EDX = (r32((uint32_t)(0x123c0764)));
  /* 123a098f push edx */
  push32((uint32_t)(EDX));
  /* 123a0990 call 0x123a13d0 */
  push32(0x123a0995u); f_123a13d0();
  /* 123a0995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0998 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123a099b:;
  /* 123a099b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a099e mov dword ptr [0x123c075c], eax */
  w32((uint32_t)(0x123c075c), (EAX));
  /* 123a09a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a09a5 push 0x123a09f0 */
  push32((uint32_t)(0x123a09f0u));
  /* 123a09aa call dword ptr [0x123c3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3294))), 0x123a09b0u);
  /* 123a09b0 mov ecx, dword ptr [0x123c076c] */
  ECX = (r32((uint32_t)(0x123c076c)));
  /* 123a09b6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 123a09bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a09be je 0x123a09dc */
  if (C.zf) goto L_123a09dc;
  /* 123a09c0 mov edx, dword ptr [0x123c076c] */
  EDX = (r32((uint32_t)(0x123c076c)));
  /* 123a09c6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 123a09cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a09ce je 0x123a09dc */
  if (C.zf) goto L_123a09dc;
  /* 123a09d0 mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a09d5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 123a09d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a09da jne 0x123a09e6 */
  if (!C.zf) goto L_123a09e6;
L_123a09dc:;
  /* 123a09dc mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
L_123a09e6:;
  /* 123a09e6 mov esp, ebp */
  ESP = (EBP);
  /* 123a09e8 pop ebp */
  EBP = (pop32());
  /* 123a09e9 ret  */
  ESPCHK(0x123a0930u, _esp0);
  ESP += 4; return;
}

/* FUN_100109f0 @ 0x123a09f0 (804 bytes, 220 insns) */
void f_123a09f0(void) {
  FTRACE(0x123a09f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a09f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a09f1 mov ebp, esp */
  EBP = (ESP);
  /* 123a09f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a09f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a09f9 push eax */
  push32((uint32_t)(EAX));
  /* 123a09fa call 0x123a1350 */
  push32(0x123a09ffu); f_123a1350();
  /* 123a09ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0a02 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 123a0a05 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123a0a07 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123a0a0a push ecx */
  push32((uint32_t)(ECX));
  /* 123a0a0b mov edx, dword ptr [0x123c0758] */
  EDX = (r32((uint32_t)(0x123c0758)));
  /* 123a0a11 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0a13 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0a15 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 123a0a1b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0a21 push edx */
  push32((uint32_t)(EDX));
  /* 123a0a22 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0a25 push eax */
  push32((uint32_t)(EAX));
  /* 123a0a26 call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a0a2cu);
  /* 123a0a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0a2e jne 0x123a0a44 */
  if (!C.zf) goto L_123a0a44;
  /* 123a0a30 mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
  /* 123a0a3a mov eax, 1 */
  EAX = (0x1u);
  /* 123a0a3f jmp 0x123a0d0e */
  goto L_123a0d0e;
L_123a0a44:;
  /* 123a0a44 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123a0a47 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0a48 mov edx, dword ptr [0x123c0768] */
  EDX = (r32((uint32_t)(0x123c0768)));
  /* 123a0a4e push edx */
  push32((uint32_t)(EDX));
  /* 123a0a4f call 0x123a2f90 */
  push32(0x123a0a54u); f_123a2f90();
  /* 123a0a54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0a59 jne 0x123a0b7f */
  if (!C.zf) goto L_123a0b7f;
  /* 123a0a5f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123a0a61 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123a0a64 push eax */
  push32((uint32_t)(EAX));
  /* 123a0a65 mov ecx, dword ptr [0x123c0760] */
  ECX = (r32((uint32_t)(0x123c0760)));
  /* 123a0a6b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0a6d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0a6f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 123a0a75 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0a7b push ecx */
  push32((uint32_t)(ECX));
  /* 123a0a7c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0a7f push edx */
  push32((uint32_t)(EDX));
  /* 123a0a80 call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a0a86u);
  /* 123a0a86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0a88 jne 0x123a0a9e */
  if (!C.zf) goto L_123a0a9e;
  /* 123a0a8a mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
  /* 123a0a94 mov eax, 1 */
  EAX = (0x1u);
  /* 123a0a99 jmp 0x123a0d0e */
  goto L_123a0d0e;
L_123a0a9e:;
  /* 123a0a9e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123a0aa1 push eax */
  push32((uint32_t)(EAX));
  /* 123a0aa2 mov ecx, dword ptr [0x123c0764] */
  ECX = (r32((uint32_t)(0x123c0764)));
  /* 123a0aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0aa9 call 0x123a2f90 */
  push32(0x123a0aaeu); f_123a2f90();
  /* 123a0aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0ab3 jne 0x123a0ae0 */
  if (!C.zf) goto L_123a0ae0;
  /* 123a0ab5 mov edx, dword ptr [0x123c076c] */
  EDX = (r32((uint32_t)(0x123c076c)));
  /* 123a0abb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 123a0ac1 mov dword ptr [0x123c076c], edx */
  w32((uint32_t)(0x123c076c), (EDX));
  /* 123a0ac7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0aca mov dword ptr [0x123c0770], eax */
  w32((uint32_t)(0x123c0770), (EAX));
  /* 123a0acf mov ecx, dword ptr [0x123c0770] */
  ECX = (r32((uint32_t)(0x123c0770)));
  /* 123a0ad5 mov dword ptr [0x123c0754], ecx */
  w32((uint32_t)(0x123c0754), (ECX));
  /* 123a0adb jmp 0x123a0b7f */
  goto L_123a0b7f;
L_123a0ae0:;
  /* 123a0ae0 mov edx, dword ptr [0x123c076c] */
  EDX = (r32((uint32_t)(0x123c076c)));
  /* 123a0ae6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 123a0ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a0aeb jne 0x123a0b7f */
  if (!C.zf) goto L_123a0b7f;
  /* 123a0af1 cmp dword ptr [0x123c075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0af8 je 0x123a0b4d */
  if (C.zf) goto L_123a0b4d;
  /* 123a0afa mov eax, dword ptr [0x123c075c] */
  EAX = (r32((uint32_t)(0x123c075c)));
  /* 123a0aff push eax */
  push32((uint32_t)(EAX));
  /* 123a0b00 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123a0b03 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0b04 mov edx, dword ptr [0x123c0764] */
  EDX = (r32((uint32_t)(0x123c0764)));
  /* 123a0b0a push edx */
  push32((uint32_t)(EDX));
  /* 123a0b0b call 0x123a3060 */
  push32(0x123a0b10u); f_123a3060();
  /* 123a0b10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0b15 jne 0x123a0b4d */
  if (!C.zf) goto L_123a0b4d;
  /* 123a0b17 mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0b1c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 123a0b1e mov dword ptr [0x123c076c], eax */
  w32((uint32_t)(0x123c076c), (EAX));
  /* 123a0b23 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0b26 mov dword ptr [0x123c0770], ecx */
  w32((uint32_t)(0x123c0770), (ECX));
  /* 123a0b2c mov edx, dword ptr [0x123c0764] */
  EDX = (r32((uint32_t)(0x123c0764)));
  /* 123a0b32 push edx */
  push32((uint32_t)(EDX));
  /* 123a0b33 call 0x123976f0 */
  push32(0x123a0b38u); f_123976f0();
  /* 123a0b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0b3b cmp eax, dword ptr [0x123c075c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c075c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0b41 jne 0x123a0b4b */
  if (!C.zf) goto L_123a0b4b;
  /* 123a0b43 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0b46 mov dword ptr [0x123c0754], eax */
  w32((uint32_t)(0x123c0754), (EAX));
L_123a0b4b:;
  /* 123a0b4b jmp 0x123a0b7f */
  goto L_123a0b7f;
L_123a0b4d:;
  /* 123a0b4d mov ecx, dword ptr [0x123c076c] */
  ECX = (r32((uint32_t)(0x123c076c)));
  /* 123a0b53 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123a0b56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a0b58 jne 0x123a0b7f */
  if (!C.zf) goto L_123a0b7f;
  /* 123a0b5a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0b5d push edx */
  push32((uint32_t)(EDX));
  /* 123a0b5e call 0x123a1090 */
  push32(0x123a0b63u); f_123a1090();
  /* 123a0b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0b68 je 0x123a0b7f */
  if (C.zf) goto L_123a0b7f;
  /* 123a0b6a mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0b6f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 123a0b71 mov dword ptr [0x123c076c], eax */
  w32((uint32_t)(0x123c076c), (EAX));
  /* 123a0b76 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0b79 mov dword ptr [0x123c0770], ecx */
  w32((uint32_t)(0x123c0770), (ECX));
L_123a0b7f:;
  /* 123a0b7f mov edx, dword ptr [0x123c076c] */
  EDX = (r32((uint32_t)(0x123c076c)));
  /* 123a0b85 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 123a0b8b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0b91 je 0x123a0d01 */
  if (C.zf) goto L_123a0d01;
  /* 123a0b97 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123a0b99 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123a0b9c push eax */
  push32((uint32_t)(EAX));
  /* 123a0b9d mov ecx, dword ptr [0x123c0760] */
  ECX = (r32((uint32_t)(0x123c0760)));
  /* 123a0ba3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0ba5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0ba7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 123a0bad add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0bb4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0bb7 push edx */
  push32((uint32_t)(EDX));
  /* 123a0bb8 call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a0bbeu);
  /* 123a0bbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0bc0 jne 0x123a0bd6 */
  if (!C.zf) goto L_123a0bd6;
  /* 123a0bc2 mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
  /* 123a0bcc mov eax, 1 */
  EAX = (0x1u);
  /* 123a0bd1 jmp 0x123a0d0e */
  goto L_123a0d0e;
L_123a0bd6:;
  /* 123a0bd6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123a0bd9 push eax */
  push32((uint32_t)(EAX));
  /* 123a0bda mov ecx, dword ptr [0x123c0764] */
  ECX = (r32((uint32_t)(0x123c0764)));
  /* 123a0be0 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0be1 call 0x123a2f90 */
  push32(0x123a0be6u); f_123a2f90();
  /* 123a0be6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0beb jne 0x123a0ca0 */
  if (!C.zf) goto L_123a0ca0;
  /* 123a0bf1 mov edx, dword ptr [0x123c076c] */
  EDX = (r32((uint32_t)(0x123c076c)));
  /* 123a0bf7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 123a0bfa mov dword ptr [0x123c076c], edx */
  w32((uint32_t)(0x123c076c), (EDX));
  /* 123a0c00 cmp dword ptr [0x123c0760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0c07 je 0x123a0c2a */
  if (C.zf) goto L_123a0c2a;
  /* 123a0c09 mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0c0e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 123a0c11 mov dword ptr [0x123c076c], eax */
  w32((uint32_t)(0x123c076c), (EAX));
  /* 123a0c16 cmp dword ptr [0x123c0754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0c1d jne 0x123a0c28 */
  if (!C.zf) goto L_123a0c28;
  /* 123a0c1f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0c22 mov dword ptr [0x123c0754], ecx */
  w32((uint32_t)(0x123c0754), (ECX));
L_123a0c28:;
  /* 123a0c28 jmp 0x123a0c9e */
  goto L_123a0c9e;
L_123a0c2a:;
  /* 123a0c2a cmp dword ptr [0x123c075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0c31 je 0x123a0c7f */
  if (C.zf) goto L_123a0c7f;
  /* 123a0c33 mov edx, dword ptr [0x123c0764] */
  EDX = (r32((uint32_t)(0x123c0764)));
  /* 123a0c39 push edx */
  push32((uint32_t)(EDX));
  /* 123a0c3a call 0x123976f0 */
  push32(0x123a0c3fu); f_123976f0();
  /* 123a0c3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0c42 cmp eax, dword ptr [0x123c075c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c075c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0c48 jne 0x123a0c7f */
  if (!C.zf) goto L_123a0c7f;
  /* 123a0c4a push 1 */
  push32((uint32_t)(0x1u));
  /* 123a0c4c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0c4f push eax */
  push32((uint32_t)(EAX));
  /* 123a0c50 call 0x123a10e0 */
  push32(0x123a0c55u); f_123a10e0();
  /* 123a0c55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0c5a je 0x123a0c7d */
  if (C.zf) goto L_123a0c7d;
  /* 123a0c5c mov ecx, dword ptr [0x123c076c] */
  ECX = (r32((uint32_t)(0x123c076c)));
  /* 123a0c62 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 123a0c65 mov dword ptr [0x123c076c], ecx */
  w32((uint32_t)(0x123c076c), (ECX));
  /* 123a0c6b cmp dword ptr [0x123c0754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0c72 jne 0x123a0c7d */
  if (!C.zf) goto L_123a0c7d;
  /* 123a0c74 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0c77 mov dword ptr [0x123c0754], edx */
  w32((uint32_t)(0x123c0754), (EDX));
L_123a0c7d:;
  /* 123a0c7d jmp 0x123a0c9e */
  goto L_123a0c9e;
L_123a0c7f:;
  /* 123a0c7f mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0c84 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 123a0c87 mov dword ptr [0x123c076c], eax */
  w32((uint32_t)(0x123c076c), (EAX));
  /* 123a0c8c cmp dword ptr [0x123c0754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0c93 jne 0x123a0c9e */
  if (!C.zf) goto L_123a0c9e;
  /* 123a0c95 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0c98 mov dword ptr [0x123c0754], ecx */
  w32((uint32_t)(0x123c0754), (ECX));
L_123a0c9e:;
  /* 123a0c9e jmp 0x123a0d01 */
  goto L_123a0d01;
L_123a0ca0:;
  /* 123a0ca0 cmp dword ptr [0x123c0760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0ca7 jne 0x123a0d01 */
  if (!C.zf) goto L_123a0d01;
  /* 123a0ca9 cmp dword ptr [0x123c075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0cb0 je 0x123a0d01 */
  if (C.zf) goto L_123a0d01;
  /* 123a0cb2 mov edx, dword ptr [0x123c075c] */
  EDX = (r32((uint32_t)(0x123c075c)));
  /* 123a0cb8 push edx */
  push32((uint32_t)(EDX));
  /* 123a0cb9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 123a0cbc push eax */
  push32((uint32_t)(EAX));
  /* 123a0cbd mov ecx, dword ptr [0x123c0764] */
  ECX = (r32((uint32_t)(0x123c0764)));
  /* 123a0cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0cc4 call 0x123a3060 */
  push32(0x123a0cc9u); f_123a3060();
  /* 123a0cc9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0ccc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0cce jne 0x123a0d01 */
  if (!C.zf) goto L_123a0d01;
  /* 123a0cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a0cd2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0cd5 push edx */
  push32((uint32_t)(EDX));
  /* 123a0cd6 call 0x123a10e0 */
  push32(0x123a0cdbu); f_123a10e0();
  /* 123a0cdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0cde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0ce0 je 0x123a0d01 */
  if (C.zf) goto L_123a0d01;
  /* 123a0ce2 mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0ce7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 123a0cea mov dword ptr [0x123c076c], eax */
  w32((uint32_t)(0x123c076c), (EAX));
  /* 123a0cef cmp dword ptr [0x123c0754], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0754))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0cf6 jne 0x123a0d01 */
  if (!C.zf) goto L_123a0d01;
  /* 123a0cf8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0cfb mov dword ptr [0x123c0754], ecx */
  w32((uint32_t)(0x123c0754), (ECX));
L_123a0d01:;
  /* 123a0d01 mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0d06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123a0d09 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0d0b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0d0d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_123a0d0e:;
  /* 123a0d0e mov esp, ebp */
  ESP = (EBP);
  /* 123a0d10 pop ebp */
  EBP = (pop32());
  /* 123a0d11 ret 4 */
  ESPCHK(0x123a09f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010d20 @ 0x123a0d20 (116 bytes, 33 insns) */
void f_123a0d20(void) {
  FTRACE(0x123a0d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0d20 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0d21 mov ebp, esp */
  EBP = (ESP);
  /* 123a0d23 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0d24 mov eax, dword ptr [0x123c0764] */
  EAX = (r32((uint32_t)(0x123c0764)));
  /* 123a0d29 push eax */
  push32((uint32_t)(EAX));
  /* 123a0d2a call 0x123976f0 */
  push32(0x123a0d2fu); f_123976f0();
  /* 123a0d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0d32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0d34 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0d37 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123a0d3a mov dword ptr [0x123c0760], ecx */
  w32((uint32_t)(0x123c0760), (ECX));
  /* 123a0d40 cmp dword ptr [0x123c0760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0d47 je 0x123a0d52 */
  if (C.zf) goto L_123a0d52;
  /* 123a0d49 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123a0d50 jmp 0x123a0d64 */
  goto L_123a0d64;
L_123a0d52:;
  /* 123a0d52 mov edx, dword ptr [0x123c0764] */
  EDX = (r32((uint32_t)(0x123c0764)));
  /* 123a0d58 push edx */
  push32((uint32_t)(EDX));
  /* 123a0d59 call 0x123a13d0 */
  push32(0x123a0d5eu); f_123a13d0();
  /* 123a0d5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0d61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123a0d64:;
  /* 123a0d64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a0d67 mov dword ptr [0x123c075c], eax */
  w32((uint32_t)(0x123c075c), (EAX));
  /* 123a0d6c push 1 */
  push32((uint32_t)(0x1u));
  /* 123a0d6e push 0x123a0da0 */
  push32((uint32_t)(0x123a0da0u));
  /* 123a0d73 call dword ptr [0x123c3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3294))), 0x123a0d79u);
  /* 123a0d79 mov ecx, dword ptr [0x123c076c] */
  ECX = (r32((uint32_t)(0x123c076c)));
  /* 123a0d7f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123a0d82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a0d84 jne 0x123a0d90 */
  if (!C.zf) goto L_123a0d90;
  /* 123a0d86 mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
L_123a0d90:;
  /* 123a0d90 mov esp, ebp */
  ESP = (EBP);
  /* 123a0d92 pop ebp */
  EBP = (pop32());
  /* 123a0d93 ret  */
  ESPCHK(0x123a0d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010da0 @ 0x123a0da0 (287 bytes, 86 insns) */
void f_123a0da0(void) {
  FTRACE(0x123a0da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0da0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0da1 mov ebp, esp */
  EBP = (ESP);
  /* 123a0da3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0da9 push eax */
  push32((uint32_t)(EAX));
  /* 123a0daa call 0x123a1350 */
  push32(0x123a0dafu); f_123a1350();
  /* 123a0daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0db2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 123a0db5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123a0db7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123a0dba push ecx */
  push32((uint32_t)(ECX));
  /* 123a0dbb mov edx, dword ptr [0x123c0760] */
  EDX = (r32((uint32_t)(0x123c0760)));
  /* 123a0dc1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0dc3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0dc5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 123a0dcb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0dd1 push edx */
  push32((uint32_t)(EDX));
  /* 123a0dd2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0dd5 push eax */
  push32((uint32_t)(EAX));
  /* 123a0dd6 call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a0ddcu);
  /* 123a0ddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0dde jne 0x123a0df4 */
  if (!C.zf) goto L_123a0df4;
  /* 123a0de0 mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
  /* 123a0dea mov eax, 1 */
  EAX = (0x1u);
  /* 123a0def jmp 0x123a0eb9 */
  goto L_123a0eb9;
L_123a0df4:;
  /* 123a0df4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123a0df7 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0df8 mov edx, dword ptr [0x123c0764] */
  EDX = (r32((uint32_t)(0x123c0764)));
  /* 123a0dfe push edx */
  push32((uint32_t)(EDX));
  /* 123a0dff call 0x123a2f90 */
  push32(0x123a0e04u); f_123a2f90();
  /* 123a0e04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0e07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0e09 jne 0x123a0e49 */
  if (!C.zf) goto L_123a0e49;
  /* 123a0e0b cmp dword ptr [0x123c0760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0e12 jne 0x123a0e26 */
  if (!C.zf) goto L_123a0e26;
  /* 123a0e14 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a0e16 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0e19 push eax */
  push32((uint32_t)(EAX));
  /* 123a0e1a call 0x123a10e0 */
  push32(0x123a0e1fu); f_123a10e0();
  /* 123a0e1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0e22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0e24 je 0x123a0e47 */
  if (C.zf) goto L_123a0e47;
L_123a0e26:;
  /* 123a0e26 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0e29 mov dword ptr [0x123c0770], ecx */
  w32((uint32_t)(0x123c0770), (ECX));
  /* 123a0e2f mov edx, dword ptr [0x123c0770] */
  EDX = (r32((uint32_t)(0x123c0770)));
  /* 123a0e35 mov dword ptr [0x123c0754], edx */
  w32((uint32_t)(0x123c0754), (EDX));
  /* 123a0e3b mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0e40 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 123a0e42 mov dword ptr [0x123c076c], eax */
  w32((uint32_t)(0x123c076c), (EAX));
L_123a0e47:;
  /* 123a0e47 jmp 0x123a0eac */
  goto L_123a0eac;
L_123a0e49:;
  /* 123a0e49 cmp dword ptr [0x123c0760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0e50 jne 0x123a0eac */
  if (!C.zf) goto L_123a0eac;
  /* 123a0e52 cmp dword ptr [0x123c075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0e59 je 0x123a0eac */
  if (C.zf) goto L_123a0eac;
  /* 123a0e5b mov ecx, dword ptr [0x123c075c] */
  ECX = (r32((uint32_t)(0x123c075c)));
  /* 123a0e61 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0e62 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 123a0e65 push edx */
  push32((uint32_t)(EDX));
  /* 123a0e66 mov eax, dword ptr [0x123c0764] */
  EAX = (r32((uint32_t)(0x123c0764)));
  /* 123a0e6b push eax */
  push32((uint32_t)(EAX));
  /* 123a0e6c call 0x123a3060 */
  push32(0x123a0e71u); f_123a3060();
  /* 123a0e71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0e76 jne 0x123a0eac */
  if (!C.zf) goto L_123a0eac;
  /* 123a0e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a0e7a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0e7d push ecx */
  push32((uint32_t)(ECX));
  /* 123a0e7e call 0x123a10e0 */
  push32(0x123a0e83u); f_123a10e0();
  /* 123a0e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0e88 je 0x123a0eac */
  if (C.zf) goto L_123a0eac;
  /* 123a0e8a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0e8d mov dword ptr [0x123c0770], edx */
  w32((uint32_t)(0x123c0770), (EDX));
  /* 123a0e93 mov eax, dword ptr [0x123c0770] */
  EAX = (r32((uint32_t)(0x123c0770)));
  /* 123a0e98 mov dword ptr [0x123c0754], eax */
  w32((uint32_t)(0x123c0754), (EAX));
  /* 123a0e9d mov ecx, dword ptr [0x123c076c] */
  ECX = (r32((uint32_t)(0x123c076c)));
  /* 123a0ea3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123a0ea6 mov dword ptr [0x123c076c], ecx */
  w32((uint32_t)(0x123c076c), (ECX));
L_123a0eac:;
  /* 123a0eac mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0eb1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123a0eb4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0eb6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0eb8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_123a0eb9:;
  /* 123a0eb9 mov esp, ebp */
  ESP = (EBP);
  /* 123a0ebb pop ebp */
  EBP = (pop32());
  /* 123a0ebc ret 4 */
  ESPCHK(0x123a0da0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010ec0 @ 0x123a0ec0 (69 bytes, 20 insns) */
void f_123a0ec0(void) {
  FTRACE(0x123a0ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0ec1 mov ebp, esp */
  EBP = (ESP);
  /* 123a0ec3 mov eax, dword ptr [0x123c0768] */
  EAX = (r32((uint32_t)(0x123c0768)));
  /* 123a0ec8 push eax */
  push32((uint32_t)(EAX));
  /* 123a0ec9 call 0x123976f0 */
  push32(0x123a0eceu); f_123976f0();
  /* 123a0ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0ed1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a0ed3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0ed6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 123a0ed9 mov dword ptr [0x123c0758], ecx */
  w32((uint32_t)(0x123c0758), (ECX));
  /* 123a0edf push 1 */
  push32((uint32_t)(0x1u));
  /* 123a0ee1 push 0x123a0f10 */
  push32((uint32_t)(0x123a0f10u));
  /* 123a0ee6 call dword ptr [0x123c3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3294))), 0x123a0eecu);
  /* 123a0eec mov edx, dword ptr [0x123c076c] */
  EDX = (r32((uint32_t)(0x123c076c)));
  /* 123a0ef2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123a0ef5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a0ef7 jne 0x123a0f03 */
  if (!C.zf) goto L_123a0f03;
  /* 123a0ef9 mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
L_123a0f03:;
  /* 123a0f03 pop ebp */
  EBP = (pop32());
  /* 123a0f04 ret  */
  ESPCHK(0x123a0ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f10 @ 0x123a0f10 (172 bytes, 54 insns) */
void f_123a0f10(void) {
  FTRACE(0x123a0f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0f10 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0f11 mov ebp, esp */
  EBP = (ESP);
  /* 123a0f13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0f19 push eax */
  push32((uint32_t)(EAX));
  /* 123a0f1a call 0x123a1350 */
  push32(0x123a0f1fu); f_123a1350();
  /* 123a0f1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0f22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 123a0f25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123a0f27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123a0f2a push ecx */
  push32((uint32_t)(ECX));
  /* 123a0f2b mov edx, dword ptr [0x123c0758] */
  EDX = (r32((uint32_t)(0x123c0758)));
  /* 123a0f31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0f33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0f35 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 123a0f3b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0f41 push edx */
  push32((uint32_t)(EDX));
  /* 123a0f42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0f45 push eax */
  push32((uint32_t)(EAX));
  /* 123a0f46 call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a0f4cu);
  /* 123a0f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0f4e jne 0x123a0f61 */
  if (!C.zf) goto L_123a0f61;
  /* 123a0f50 mov dword ptr [0x123c076c], 0 */
  w32((uint32_t)(0x123c076c), (0x0u));
  /* 123a0f5a mov eax, 1 */
  EAX = (0x1u);
  /* 123a0f5f jmp 0x123a0fb6 */
  goto L_123a0fb6;
L_123a0f61:;
  /* 123a0f61 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 123a0f64 push ecx */
  push32((uint32_t)(ECX));
  /* 123a0f65 mov edx, dword ptr [0x123c0768] */
  EDX = (r32((uint32_t)(0x123c0768)));
  /* 123a0f6b push edx */
  push32((uint32_t)(EDX));
  /* 123a0f6c call 0x123a2f90 */
  push32(0x123a0f71u); f_123a2f90();
  /* 123a0f71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0f74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0f76 jne 0x123a0fa9 */
  if (!C.zf) goto L_123a0fa9;
  /* 123a0f78 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0f7b push eax */
  push32((uint32_t)(EAX));
  /* 123a0f7c call 0x123a1090 */
  push32(0x123a0f81u); f_123a1090();
  /* 123a0f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a0f84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a0f86 je 0x123a0fa9 */
  if (C.zf) goto L_123a0fa9;
  /* 123a0f88 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 123a0f8b mov dword ptr [0x123c0770], ecx */
  w32((uint32_t)(0x123c0770), (ECX));
  /* 123a0f91 mov edx, dword ptr [0x123c0770] */
  EDX = (r32((uint32_t)(0x123c0770)));
  /* 123a0f97 mov dword ptr [0x123c0754], edx */
  w32((uint32_t)(0x123c0754), (EDX));
  /* 123a0f9d mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0fa2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 123a0fa4 mov dword ptr [0x123c076c], eax */
  w32((uint32_t)(0x123c076c), (EAX));
L_123a0fa9:;
  /* 123a0fa9 mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0fae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123a0fb1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123a0fb3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0fb5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_123a0fb6:;
  /* 123a0fb6 mov esp, ebp */
  ESP = (EBP);
  /* 123a0fb8 pop ebp */
  EBP = (pop32());
  /* 123a0fb9 ret 4 */
  ESPCHK(0x123a0f10u, _esp0);
  ESP += 8; return;
}

/* FUN_10010fc0 @ 0x123a0fc0 (43 bytes, 11 insns) */
void f_123a0fc0(void) {
  FTRACE(0x123a0fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0fc1 mov ebp, esp */
  EBP = (ESP);
  /* 123a0fc3 mov eax, dword ptr [0x123c076c] */
  EAX = (r32((uint32_t)(0x123c076c)));
  /* 123a0fc8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 123a0fcd mov dword ptr [0x123c076c], eax */
  w32((uint32_t)(0x123c076c), (EAX));
  /* 123a0fd2 call dword ptr [0x123c3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3284))), 0x123a0fd8u);
  /* 123a0fd8 mov dword ptr [0x123c0770], eax */
  w32((uint32_t)(0x123c0770), (EAX));
  /* 123a0fdd mov ecx, dword ptr [0x123c0770] */
  ECX = (r32((uint32_t)(0x123c0770)));
  /* 123a0fe3 mov dword ptr [0x123c0754], ecx */
  w32((uint32_t)(0x123c0754), (ECX));
  /* 123a0fe9 pop ebp */
  EBP = (pop32());
  /* 123a0fea ret  */
  ESPCHK(0x123a0fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ff0 @ 0x123a0ff0 (155 bytes, 57 insns) */
void f_123a0ff0(void) {
  FTRACE(0x123a0ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a0ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a0ff1 mov ebp, esp */
  EBP = (ESP);
  /* 123a0ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a0ff6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a0ffa je 0x123a101b */
  if (C.zf) goto L_123a101b;
  /* 123a0ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a0fff movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123a1002 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a1004 je 0x123a101b */
  if (C.zf) goto L_123a101b;
  /* 123a1006 push 0x123bc8fc */
  push32((uint32_t)(0x123bc8fcu));
  /* 123a100b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a100e push edx */
  push32((uint32_t)(EDX));
  /* 123a100f call 0x123a0550 */
  push32(0x123a1014u); f_123a0550();
  /* 123a1014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a1019 jne 0x123a1043 */
  if (!C.zf) goto L_123a1043;
L_123a101b:;
  /* 123a101b push 8 */
  push32((uint32_t)(0x8u));
  /* 123a101d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 123a1020 push eax */
  push32((uint32_t)(EAX));
  /* 123a1021 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 123a1026 mov ecx, dword ptr [0x123c0770] */
  ECX = (r32((uint32_t)(0x123c0770)));
  /* 123a102c push ecx */
  push32((uint32_t)(ECX));
  /* 123a102d call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a1033u);
  /* 123a1033 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a1035 jne 0x123a103b */
  if (!C.zf) goto L_123a103b;
  /* 123a1037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a1039 jmp 0x123a1087 */
  goto L_123a1087;
L_123a103b:;
  /* 123a103b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 123a103e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 123a1041 jmp 0x123a107b */
  goto L_123a107b;
L_123a1043:;
  /* 123a1043 push 0x123bc8f8 */
  push32((uint32_t)(0x123bc8f8u));
  /* 123a1048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a104b push eax */
  push32((uint32_t)(EAX));
  /* 123a104c call 0x123a0550 */
  push32(0x123a1051u); f_123a0550();
  /* 123a1051 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a1056 jne 0x123a107b */
  if (!C.zf) goto L_123a107b;
  /* 123a1058 push 8 */
  push32((uint32_t)(0x8u));
  /* 123a105a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 123a105d push ecx */
  push32((uint32_t)(ECX));
  /* 123a105e push 0xb */
  push32((uint32_t)(0xbu));
  /* 123a1060 mov edx, dword ptr [0x123c0770] */
  EDX = (r32((uint32_t)(0x123c0770)));
  /* 123a1066 push edx */
  push32((uint32_t)(EDX));
  /* 123a1067 call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a106du);
  /* 123a106d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a106f jne 0x123a1075 */
  if (!C.zf) goto L_123a1075;
  /* 123a1071 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a1073 jmp 0x123a1087 */
  goto L_123a1087;
L_123a1075:;
  /* 123a1075 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 123a1078 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123a107b:;
  /* 123a107b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a107e push ecx */
  push32((uint32_t)(ECX));
  /* 123a107f call 0x123a3170 */
  push32(0x123a1084u); f_123a3170();
  /* 123a1084 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123a1087:;
  /* 123a1087 mov esp, ebp */
  ESP = (EBP);
  /* 123a1089 pop ebp */
  EBP = (pop32());
  /* 123a108a ret  */
  ESPCHK(0x123a0ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011090 @ 0x123a1090 (79 bytes, 26 insns) */
void f_123a1090(void) {
  FTRACE(0x123a1090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1090 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1091 mov ebp, esp */
  EBP = (ESP);
  /* 123a1093 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1096 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 123a109a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 123a109e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123a10a5 jmp 0x123a10b0 */
  goto L_123a10b0;
L_123a10a7:;
  /* 123a10a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a10aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a10ad mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123a10b0:;
  /* 123a10b0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a10b4 jae 0x123a10d6 */
  if (!C.cf) goto L_123a10d6;
  /* 123a10b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a10b9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123a10bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a10c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123a10c4 mov cx, word ptr [eax*2 + 0x123bf9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x123bf9c4)));
  /* 123a10cc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a10ce jne 0x123a10d4 */
  if (!C.zf) goto L_123a10d4;
  /* 123a10d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a10d2 jmp 0x123a10db */
  goto L_123a10db;
L_123a10d4:;
  /* 123a10d4 jmp 0x123a10a7 */
  goto L_123a10a7;
L_123a10d6:;
  /* 123a10d6 mov eax, 1 */
  EAX = (0x1u);
L_123a10db:;
  /* 123a10db mov esp, ebp */
  ESP = (EBP);
  /* 123a10dd pop ebp */
  EBP = (pop32());
  /* 123a10de ret  */
  ESPCHK(0x123a1090u, _esp0);
  ESP += 4; return;
}

/* FUN_100110e0 @ 0x123a10e0 (135 bytes, 48 insns) */
void f_123a10e0(void) {
  FTRACE(0x123a10e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a10e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a10e1 mov ebp, esp */
  EBP = (ESP);
  /* 123a10e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a10e6 push esi */
  push32((uint32_t)(ESI));
  /* 123a10e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a10ea and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a10ef and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a10f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a10f9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 123a10fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a1101 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a1104 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 123a1106 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 123a1109 push ecx */
  push32((uint32_t)(ECX));
  /* 123a110a push 1 */
  push32((uint32_t)(0x1u));
  /* 123a110c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a110f push edx */
  push32((uint32_t)(EDX));
  /* 123a1110 call dword ptr [0x123c0774] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0774))), 0x123a1116u);
  /* 123a1116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a1118 jne 0x123a111e */
  if (!C.zf) goto L_123a111e;
  /* 123a111a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a111c jmp 0x123a1162 */
  goto L_123a1162;
L_123a111e:;
  /* 123a111e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 123a1121 push eax */
  push32((uint32_t)(EAX));
  /* 123a1122 call 0x123a1350 */
  push32(0x123a1127u); f_123a1350();
  /* 123a1127 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a112a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a112d je 0x123a115d */
  if (C.zf) goto L_123a115d;
  /* 123a112f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1133 je 0x123a115d */
  if (C.zf) goto L_123a115d;
  /* 123a1135 mov ecx, dword ptr [0x123c0764] */
  ECX = (r32((uint32_t)(0x123c0764)));
  /* 123a113b push ecx */
  push32((uint32_t)(ECX));
  /* 123a113c call 0x123a13d0 */
  push32(0x123a1141u); f_123a13d0();
  /* 123a1141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1144 mov esi, eax */
  ESI = (EAX);
  /* 123a1146 mov edx, dword ptr [0x123c0764] */
  EDX = (r32((uint32_t)(0x123c0764)));
  /* 123a114c push edx */
  push32((uint32_t)(EDX));
  /* 123a114d call 0x123976f0 */
  push32(0x123a1152u); f_123976f0();
  /* 123a1152 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1155 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1157 jne 0x123a115d */
  if (!C.zf) goto L_123a115d;
  /* 123a1159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a115b jmp 0x123a1162 */
  goto L_123a1162;
L_123a115d:;
  /* 123a115d mov eax, 1 */
  EAX = (0x1u);
L_123a1162:;
  /* 123a1162 pop esi */
  ESI = (pop32());
  /* 123a1163 mov esp, ebp */
  ESP = (EBP);
  /* 123a1165 pop ebp */
  EBP = (pop32());
  /* 123a1166 ret  */
  ESPCHK(0x123a10e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011170 @ 0x123a1170 (77 bytes, 18 insns) */
void f_123a1170(void) {
  FTRACE(0x123a1170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1170 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1171 mov ebp, esp */
  EBP = (ESP);
  /* 123a1173 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1179 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 123a1183 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 123a1189 push eax */
  push32((uint32_t)(EAX));
  /* 123a118a call dword ptr [0x123c3280] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3280))), 0x123a1190u);
  /* 123a1190 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a1192 je 0x123a11a9 */
  if (C.zf) goto L_123a11a9;
  /* 123a1194 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a119b jne 0x123a11a9 */
  if (!C.zf) goto L_123a11a9;
  /* 123a119d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 123a11a7 jmp 0x123a11b3 */
  goto L_123a11b3;
L_123a11a9:;
  /* 123a11a9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_123a11b3:;
  /* 123a11b3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 123a11b9 mov esp, ebp */
  ESP = (EBP);
  /* 123a11bb pop ebp */
  EBP = (pop32());
  /* 123a11bc ret  */
  ESPCHK(0x123a1170u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x123a11c0 (388 bytes, 118 insns) */
void f_123a11c0(void) {
  FTRACE(0x123a11c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a11c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a11c1 mov ebp, esp */
  EBP = (ESP);
  /* 123a11c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a11c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a11cd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 123a11d4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_123a11db:;
  /* 123a11db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a11de cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a11e1 jg 0x123a1328 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a1328;
  /* 123a11e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a11ea add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a11ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 123a11ee sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a11f0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 123a11f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a11f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a11f8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a11fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a11fe cmp edx, dword ptr [ecx + 0x123bf520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x123bf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1204 jne 0x123a12fe */
  if (!C.zf) goto L_123a12fe;
  /* 123a120a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a120d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a1210 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1214 ja 0x123a1237 */
  if ((!C.cf&&!C.zf)) goto L_123a1237;
  /* 123a1216 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a121a je 0x123a12a9 */
  if (C.zf) goto L_123a12a9;
  /* 123a1220 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1224 je 0x123a1254 */
  if (C.zf) goto L_123a1254;
  /* 123a1226 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a122a je 0x123a1276 */
  if (C.zf) goto L_123a1276;
  /* 123a122c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1230 je 0x123a1298 */
  if (C.zf) goto L_123a1298;
  /* 123a1232 jmp 0x123a12c8 */
  goto L_123a12c8;
L_123a1237:;
  /* 123a1237 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a123e je 0x123a1265 */
  if (C.zf) goto L_123a1265;
  /* 123a1240 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1247 je 0x123a1287 */
  if (C.zf) goto L_123a1287;
  /* 123a1249 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1250 je 0x123a12ba */
  if (C.zf) goto L_123a12ba;
  /* 123a1252 jmp 0x123a12c8 */
  goto L_123a12c8;
L_123a1254:;
  /* 123a1254 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1257 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a125a add ecx, 0x123bf524 */
  { uint32_t _a=(ECX),_b=(0x123bf524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1260 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a1263 jmp 0x123a12c8 */
  goto L_123a12c8;
L_123a1265:;
  /* 123a1265 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1268 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a126b mov eax, dword ptr [edx + 0x123bf52c] */
  EAX = (r32((uint32_t)(EDX + 0x123bf52c)));
  /* 123a1271 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a1274 jmp 0x123a12c8 */
  goto L_123a12c8;
L_123a1276:;
  /* 123a1276 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1279 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a127c add ecx, 0x123bf530 */
  { uint32_t _a=(ECX),_b=(0x123bf530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1282 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a1285 jmp 0x123a12c8 */
  goto L_123a12c8;
L_123a1287:;
  /* 123a1287 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a128a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a128d mov eax, dword ptr [edx + 0x123bf534] */
  EAX = (r32((uint32_t)(EDX + 0x123bf534)));
  /* 123a1293 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a1296 jmp 0x123a12c8 */
  goto L_123a12c8;
L_123a1298:;
  /* 123a1298 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a129b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a129e add ecx, 0x123bf538 */
  { uint32_t _a=(ECX),_b=(0x123bf538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a12a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a12a7 jmp 0x123a12c8 */
  goto L_123a12c8;
L_123a12a9:;
  /* 123a12a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a12ac imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a12af add edx, 0x123bf53c */
  { uint32_t _a=(EDX),_b=(0x123bf53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a12b5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a12b8 jmp 0x123a12c8 */
  goto L_123a12c8;
L_123a12ba:;
  /* 123a12ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a12bd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a12c0 add eax, 0x123bf544 */
  { uint32_t _a=(EAX),_b=(0x123bf544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a12c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123a12c8:;
  /* 123a12c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a12cc je 0x123a12d4 */
  if (C.zf) goto L_123a12d4;
  /* 123a12ce cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a12d2 jge 0x123a12d6 */
  if ((C.sf==C.of)) goto L_123a12d6;
L_123a12d4:;
  /* 123a12d4 jmp 0x123a1328 */
  goto L_123a1328;
L_123a12d6:;
  /* 123a12d6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a12d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a12dc push ecx */
  push32((uint32_t)(ECX));
  /* 123a12dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a12e0 push edx */
  push32((uint32_t)(EDX));
  /* 123a12e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a12e4 push eax */
  push32((uint32_t)(EAX));
  /* 123a12e5 call 0x123980e0 */
  push32(0x123a12eau); f_123980e0();
  /* 123a12ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a12ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a12f0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a12f3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 123a12f7 mov eax, 1 */
  EAX = (0x1u);
  /* 123a12fc jmp 0x123a133e */
  goto L_123a133e;
L_123a12fe:;
  /* 123a12fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1301 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a1304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1307 cmp eax, dword ptr [edx + 0x123bf520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x123bf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a130d jae 0x123a131a */
  if (!C.cf) goto L_123a131a;
  /* 123a130f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1312 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1315 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123a1318 jmp 0x123a1323 */
  goto L_123a1323;
L_123a131a:;
  /* 123a131a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a131d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1320 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123a1323:;
  /* 123a1323 jmp 0x123a11db */
  goto L_123a11db;
L_123a1328:;
  /* 123a1328 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a132b push eax */
  push32((uint32_t)(EAX));
  /* 123a132c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a132f push ecx */
  push32((uint32_t)(ECX));
  /* 123a1330 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1333 push edx */
  push32((uint32_t)(EDX));
  /* 123a1334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1337 push eax */
  push32((uint32_t)(EAX));
  /* 123a1338 call dword ptr [0x123c328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c328c))), 0x123a133eu);
L_123a133e:;
  /* 123a133e mov esp, ebp */
  ESP = (EBP);
  /* 123a1340 pop ebp */
  EBP = (pop32());
  /* 123a1341 ret 0x10 */
  ESPCHK(0x123a11c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10011350 @ 0x123a1350 (118 bytes, 42 insns) */
void f_123a1350(void) {
  FTRACE(0x123a1350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1350 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1351 mov ebp, esp */
  EBP = (ESP);
  /* 123a1353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1356 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123a135d:;
  /* 123a135d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1360 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a1362 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 123a1365 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123a1369 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a136c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a136f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 123a1372 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a1374 je 0x123a13bf */
  if (C.zf) goto L_123a13bf;
  /* 123a1376 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123a137a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a137d jl 0x123a1392 */
  if ((C.sf!=C.of)) goto L_123a1392;
  /* 123a137f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123a1383 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1386 jg 0x123a1392 */
  if ((!C.zf&&C.sf==C.of)) goto L_123a1392;
  /* 123a1388 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 123a138b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123a138d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 123a1390 jmp 0x123a13ac */
  goto L_123a13ac;
L_123a1392:;
  /* 123a1392 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123a1396 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1399 jl 0x123a13ac */
  if ((C.sf!=C.of)) goto L_123a13ac;
  /* 123a139b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123a139f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a13a2 jg 0x123a13ac */
  if ((!C.zf&&C.sf==C.of)) goto L_123a13ac;
  /* 123a13a4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 123a13a7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 123a13a9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_123a13ac:;
  /* 123a13ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a13af shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 123a13b2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 123a13b6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 123a13ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a13bd jmp 0x123a135d */
  goto L_123a135d;
L_123a13bf:;
  /* 123a13bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a13c2 mov esp, ebp */
  ESP = (EBP);
  /* 123a13c4 pop ebp */
  EBP = (pop32());
  /* 123a13c5 ret  */
  ESPCHK(0x123a1350u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x123a13d0 (101 bytes, 36 insns) */
void f_123a13d0(void) {
  FTRACE(0x123a13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a13d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a13d1 mov ebp, esp */
  EBP = (ESP);
  /* 123a13d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a13d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123a13dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a13e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123a13e2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 123a13e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a13e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a13eb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_123a13ee:;
  /* 123a13ee movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 123a13f2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a13f5 jl 0x123a1400 */
  if ((C.sf!=C.of)) goto L_123a1400;
  /* 123a13f7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 123a13fb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a13fe jle 0x123a1412 */
  if ((C.zf||C.sf!=C.of)) goto L_123a1412;
L_123a1400:;
  /* 123a1400 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 123a1404 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1407 jl 0x123a142e */
  if ((C.sf!=C.of)) goto L_123a142e;
  /* 123a1409 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 123a140d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1410 jg 0x123a142e */
  if ((!C.zf&&C.sf==C.of)) goto L_123a142e;
L_123a1412:;
  /* 123a1412 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a1415 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1418 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a141b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a141e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123a1420 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 123a1423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1426 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1429 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 123a142c jmp 0x123a13ee */
  goto L_123a13ee;
L_123a142e:;
  /* 123a142e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a1431 mov esp, ebp */
  ESP = (EBP);
  /* 123a1433 pop ebp */
  EBP = (pop32());
  /* 123a1434 ret  */
  ESPCHK(0x123a13d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011440 @ 0x123a1440 (122 bytes, 39 insns) */
void f_123a1440(void) {
  FTRACE(0x123a1440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1440 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1441 mov ebp, esp */
  EBP = (ESP);
  /* 123a1443 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1447 cmp eax, dword ptr [0x123c1ffc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c1ffc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a144d jae 0x123a1471 */
  if (!C.cf) goto L_123a1471;
  /* 123a144f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1452 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 123a1455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1458 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 123a145b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a145e mov eax, dword ptr [ecx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 123a1465 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 123a146a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 123a146d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a146f jne 0x123a148c */
  if (!C.zf) goto L_123a148c;
L_123a1471:;
  /* 123a1471 call 0x1239c790 */
  push32(0x123a1476u); f_1239c790();
  /* 123a1476 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 123a147c call 0x1239c7a0 */
  push32(0x123a1481u); f_1239c7a0();
  /* 123a1481 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123a1487 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a148a jmp 0x123a14b6 */
  goto L_123a14b6;
L_123a148c:;
  /* 123a148c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a148f push edx */
  push32((uint32_t)(EDX));
  /* 123a1490 call 0x1239dfb0 */
  push32(0x123a1495u); f_1239dfb0();
  /* 123a1495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a149b push eax */
  push32((uint32_t)(EAX));
  /* 123a149c call 0x123a14c0 */
  push32(0x123a14a1u); f_123a14c0();
  /* 123a14a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a14a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a14a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a14aa push ecx */
  push32((uint32_t)(ECX));
  /* 123a14ab call 0x1239e040 */
  push32(0x123a14b0u); f_1239e040();
  /* 123a14b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a14b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123a14b6:;
  /* 123a14b6 mov esp, ebp */
  ESP = (EBP);
  /* 123a14b8 pop ebp */
  EBP = (pop32());
  /* 123a14b9 ret  */
  ESPCHK(0x123a1440u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x123a14c0 (170 bytes, 59 insns) */
void f_123a14c0(void) {
  FTRACE(0x123a14c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a14c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a14c1 mov ebp, esp */
  EBP = (ESP);
  /* 123a14c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a14c4 push esi */
  push32((uint32_t)(ESI));
  /* 123a14c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a14c8 push eax */
  push32((uint32_t)(EAX));
  /* 123a14c9 call 0x1239de30 */
  push32(0x123a14ceu); f_1239de30();
  /* 123a14ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a14d1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a14d4 je 0x123a1513 */
  if (C.zf) goto L_123a1513;
  /* 123a14d6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a14da je 0x123a14e2 */
  if (C.zf) goto L_123a14e2;
  /* 123a14dc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a14e0 jne 0x123a14fc */
  if (!C.zf) goto L_123a14fc;
L_123a14e2:;
  /* 123a14e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 123a14e4 call 0x1239de30 */
  push32(0x123a14e9u); f_1239de30();
  /* 123a14e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a14ec mov esi, eax */
  ESI = (EAX);
  /* 123a14ee push 2 */
  push32((uint32_t)(0x2u));
  /* 123a14f0 call 0x1239de30 */
  push32(0x123a14f5u); f_1239de30();
  /* 123a14f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a14f8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a14fa je 0x123a1513 */
  if (C.zf) goto L_123a1513;
L_123a14fc:;
  /* 123a14fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a14ff push ecx */
  push32((uint32_t)(ECX));
  /* 123a1500 call 0x1239de30 */
  push32(0x123a1505u); f_1239de30();
  /* 123a1505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1508 push eax */
  push32((uint32_t)(EAX));
  /* 123a1509 call dword ptr [0x123c3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3288))), 0x123a150fu);
  /* 123a150f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a1511 je 0x123a151c */
  if (C.zf) goto L_123a151c;
L_123a1513:;
  /* 123a1513 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123a151a jmp 0x123a1525 */
  goto L_123a1525;
L_123a151c:;
  /* 123a151c call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x123a1522u);
  /* 123a1522 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123a1525:;
  /* 123a1525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1528 push edx */
  push32((uint32_t)(EDX));
  /* 123a1529 call 0x1239dd50 */
  push32(0x123a152eu); f_1239dd50();
  /* 123a152e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1534 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123a1537 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a153a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123a153d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123a1540 mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 123a1547 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 123a154c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1550 je 0x123a1563 */
  if (C.zf) goto L_123a1563;
  /* 123a1552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a1555 push eax */
  push32((uint32_t)(EAX));
  /* 123a1556 call 0x1239c6f0 */
  push32(0x123a155bu); f_1239c6f0();
  /* 123a155b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a155e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123a1561 jmp 0x123a1565 */
  goto L_123a1565;
L_123a1563:;
  /* 123a1563 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123a1565:;
  /* 123a1565 pop esi */
  ESI = (pop32());
  /* 123a1566 mov esp, ebp */
  ESP = (EBP);
  /* 123a1568 pop ebp */
  EBP = (pop32());
  /* 123a1569 ret  */
  ESPCHK(0x123a14c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011570 @ 0x123a1570 (146 bytes, 52 insns) */
void f_123a1570(void) {
  FTRACE(0x123a1570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1570 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1571 mov ebp, esp */
  EBP = (ESP);
  /* 123a1573 push ebx */
  push32((uint32_t)(EBX));
  /* 123a1574 push esi */
  push32((uint32_t)(ESI));
  /* 123a1575 push edi */
  push32((uint32_t)(EDI));
L_123a1576:;
  /* 123a1576 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a157a jne 0x123a159a */
  if (!C.zf) goto L_123a159a;
  /* 123a157c push 0x123bc238 */
  push32((uint32_t)(0x123bc238u));
  /* 123a1581 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a1583 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 123a1585 push 0x123bc900 */
  push32((uint32_t)(0x123bc900u));
  /* 123a158a push 2 */
  push32((uint32_t)(0x2u));
  /* 123a158c call 0x12393980 */
  push32(0x123a1591u); f_12393980();
  /* 123a1591 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1594 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1597 jne 0x123a159a */
  if (!C.zf) goto L_123a159a;
  /* 123a1599 int3  */
  x86_unimpl("int3 @ 0x123a1599");
L_123a159a:;
  /* 123a159a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123a159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123a159e jne 0x123a1576 */
  if (!C.zf) goto L_123a1576;
  /* 123a15a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a15a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123a15a6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 123a15ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123a15ae je 0x123a15fd */
  if (C.zf) goto L_123a15fd;
  /* 123a15b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a15b3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 123a15b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 123a15b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123a15bb je 0x123a15fd */
  if (C.zf) goto L_123a15fd;
  /* 123a15bd push 2 */
  push32((uint32_t)(0x2u));
  /* 123a15bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a15c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 123a15c5 push eax */
  push32((uint32_t)(EAX));
  /* 123a15c6 call 0x12395350 */
  push32(0x123a15cbu); f_12395350();
  /* 123a15cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a15ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a15d1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 123a15d4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 123a15da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a15dd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 123a15e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a15e3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 123a15e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a15ec mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 123a15f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a15f6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_123a15fd:;
  /* 123a15fd pop edi */
  EDI = (pop32());
  /* 123a15fe pop esi */
  ESI = (pop32());
  /* 123a15ff pop ebx */
  EBX = (pop32());
  /* 123a1600 pop ebp */
  EBP = (pop32());
  /* 123a1601 ret  */
  ESPCHK(0x123a1570u, _esp0);
  ESP += 4; return;
}

/* FUN_10011610 @ 0x123a1610 (289 bytes, 97 insns) */
void f_123a1610(void) {
  FTRACE(0x123a1610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1610 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1611 mov ebp, esp */
  EBP = (ESP);
  /* 123a1613 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1616 push esi */
  push32((uint32_t)(ESI));
  /* 123a1617 mov eax, dword ptr [0x123bfc98] */
  EAX = (r32((uint32_t)(0x123bfc98)));
  /* 123a161c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a161f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123a1626 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a162d jmp 0x123a1638 */
  goto L_123a1638;
L_123a162f:;
  /* 123a162f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1632 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1635 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123a1638:;
  /* 123a1638 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a163c jae 0x123a1671 */
  if (!C.cf) goto L_123a1671;
  /* 123a163e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1641 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1644 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123a1647 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1648 call 0x123976f0 */
  push32(0x123a164du); f_123976f0();
  /* 123a164d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1650 mov esi, eax */
  ESI = (EAX);
  /* 123a1652 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1655 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1658 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 123a165c push ecx */
  push32((uint32_t)(ECX));
  /* 123a165d call 0x123976f0 */
  push32(0x123a1662u); f_123976f0();
  /* 123a1662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1665 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1668 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123a166c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a166f jmp 0x123a162f */
  goto L_123a162f;
L_123a1671:;
  /* 123a1671 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a1674 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1677 push eax */
  push32((uint32_t)(EAX));
  /* 123a1678 call 0x123948a0 */
  push32(0x123a167du); f_123948a0();
  /* 123a167d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1680 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a1683 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1687 je 0x123a1729 */
  if (C.zf) goto L_123a1729;
  /* 123a168d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a1690 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123a1693 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a169a jmp 0x123a16a5 */
  goto L_123a16a5;
L_123a169c:;
  /* 123a169c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a169f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a16a2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123a16a5:;
  /* 123a16a5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a16a9 jae 0x123a171a */
  if (!C.cf) goto L_123a171a;
  /* 123a16ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a16ae mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 123a16b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a16b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a16b7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123a16ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a16bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a16c0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123a16c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123a16c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a16c7 push edx */
  push32((uint32_t)(EDX));
  /* 123a16c8 call 0x12397870 */
  push32(0x123a16cdu); f_12397870();
  /* 123a16cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a16d0 push eax */
  push32((uint32_t)(EAX));
  /* 123a16d1 call 0x123976f0 */
  push32(0x123a16d6u); f_123976f0();
  /* 123a16d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a16d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a16dc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a16de mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123a16e1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a16e4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 123a16e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a16ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a16ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a16f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a16f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a16f6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 123a16fa push eax */
  push32((uint32_t)(EAX));
  /* 123a16fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a16fe push ecx */
  push32((uint32_t)(ECX));
  /* 123a16ff call 0x12397870 */
  push32(0x123a1704u); f_12397870();
  /* 123a1704 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1707 push eax */
  push32((uint32_t)(EAX));
  /* 123a1708 call 0x123976f0 */
  push32(0x123a170du); f_123976f0();
  /* 123a170d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1710 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1713 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1715 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123a1718 jmp 0x123a169c */
  goto L_123a169c;
L_123a171a:;
  /* 123a171a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a171d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123a1720 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1723 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1726 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_123a1729:;
  /* 123a1729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a172c pop esi */
  ESI = (pop32());
  /* 123a172d mov esp, ebp */
  ESP = (EBP);
  /* 123a172f pop ebp */
  EBP = (pop32());
  /* 123a1730 ret  */
  ESPCHK(0x123a1610u, _esp0);
  ESP += 4; return;
}

/* FUN_10011740 @ 0x123a1740 (291 bytes, 97 insns) */
void f_123a1740(void) {
  FTRACE(0x123a1740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1740 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1741 mov ebp, esp */
  EBP = (ESP);
  /* 123a1743 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1746 push esi */
  push32((uint32_t)(ESI));
  /* 123a1747 mov eax, dword ptr [0x123bfc98] */
  EAX = (r32((uint32_t)(0x123bfc98)));
  /* 123a174c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a174f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123a1756 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a175d jmp 0x123a1768 */
  goto L_123a1768;
L_123a175f:;
  /* 123a175f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1762 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1765 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123a1768:;
  /* 123a1768 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a176c jae 0x123a17a2 */
  if (!C.cf) goto L_123a17a2;
  /* 123a176e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1774 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 123a1778 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1779 call 0x123976f0 */
  push32(0x123a177eu); f_123976f0();
  /* 123a177e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1781 mov esi, eax */
  ESI = (EAX);
  /* 123a1783 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1786 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1789 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 123a178d push ecx */
  push32((uint32_t)(ECX));
  /* 123a178e call 0x123976f0 */
  push32(0x123a1793u); f_123976f0();
  /* 123a1793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1796 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1799 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123a179d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a17a0 jmp 0x123a175f */
  goto L_123a175f;
L_123a17a2:;
  /* 123a17a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a17a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a17a8 push eax */
  push32((uint32_t)(EAX));
  /* 123a17a9 call 0x123948a0 */
  push32(0x123a17aeu); f_123948a0();
  /* 123a17ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a17b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a17b4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a17b8 je 0x123a185b */
  if (C.zf) goto L_123a185b;
  /* 123a17be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a17c1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123a17c4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a17cb jmp 0x123a17d6 */
  goto L_123a17d6;
L_123a17cd:;
  /* 123a17cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a17d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a17d3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123a17d6:;
  /* 123a17d6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a17da jae 0x123a184c */
  if (!C.cf) goto L_123a184c;
  /* 123a17dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a17df mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 123a17e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a17e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a17e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123a17eb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a17ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a17f1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 123a17f5 push ecx */
  push32((uint32_t)(ECX));
  /* 123a17f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a17f9 push edx */
  push32((uint32_t)(EDX));
  /* 123a17fa call 0x12397870 */
  push32(0x123a17ffu); f_12397870();
  /* 123a17ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1802 push eax */
  push32((uint32_t)(EAX));
  /* 123a1803 call 0x123976f0 */
  push32(0x123a1808u); f_123976f0();
  /* 123a1808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a180b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a180e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1810 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 123a1813 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1816 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 123a1819 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a181c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a181f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a1822 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1825 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1828 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123a182c push eax */
  push32((uint32_t)(EAX));
  /* 123a182d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1830 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1831 call 0x12397870 */
  push32(0x123a1836u); f_12397870();
  /* 123a1836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1839 push eax */
  push32((uint32_t)(EAX));
  /* 123a183a call 0x123976f0 */
  push32(0x123a183fu); f_123976f0();
  /* 123a183f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1842 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1845 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1847 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123a184a jmp 0x123a17cd */
  goto L_123a17cd;
L_123a184c:;
  /* 123a184c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a184f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 123a1852 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1855 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1858 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_123a185b:;
  /* 123a185b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a185e pop esi */
  ESI = (pop32());
  /* 123a185f mov esp, ebp */
  ESP = (EBP);
  /* 123a1861 pop ebp */
  EBP = (pop32());
  /* 123a1862 ret  */
  ESPCHK(0x123a1740u, _esp0);
  ESP += 4; return;
}

/* FUN_10011870 @ 0x123a1870 (878 bytes, 273 insns) */
void f_123a1870(void) {
  FTRACE(0x123a1870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1870 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1871 mov ebp, esp */
  EBP = (ESP);
  /* 123a1873 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123a1876 push esi */
  push32((uint32_t)(ESI));
  /* 123a1877 mov eax, dword ptr [0x123bfc98] */
  EAX = (r32((uint32_t)(0x123bfc98)));
  /* 123a187c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123a187f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123a1886 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a188d jmp 0x123a1898 */
  goto L_123a1898;
L_123a188f:;
  /* 123a188f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1892 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1895 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123a1898:;
  /* 123a1898 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a189c jae 0x123a18d1 */
  if (!C.cf) goto L_123a18d1;
  /* 123a189e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a18a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a18a4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 123a18a7 push ecx */
  push32((uint32_t)(ECX));
  /* 123a18a8 call 0x123976f0 */
  push32(0x123a18adu); f_123976f0();
  /* 123a18ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a18b0 mov esi, eax */
  ESI = (EAX);
  /* 123a18b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a18b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a18b8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 123a18bc push ecx */
  push32((uint32_t)(ECX));
  /* 123a18bd call 0x123976f0 */
  push32(0x123a18c2u); f_123976f0();
  /* 123a18c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a18c5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a18c8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123a18cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a18cf jmp 0x123a188f */
  goto L_123a188f;
L_123a18d1:;
  /* 123a18d1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a18d8 jmp 0x123a18e3 */
  goto L_123a18e3;
L_123a18da:;
  /* 123a18da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a18dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a18e0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123a18e3:;
  /* 123a18e3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a18e7 jae 0x123a191d */
  if (!C.cf) goto L_123a191d;
  /* 123a18e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a18ec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a18ef mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 123a18f3 push eax */
  push32((uint32_t)(EAX));
  /* 123a18f4 call 0x123976f0 */
  push32(0x123a18f9u); f_123976f0();
  /* 123a18f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a18fc mov esi, eax */
  ESI = (EAX);
  /* 123a18fe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1901 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1904 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123a1908 push eax */
  push32((uint32_t)(EAX));
  /* 123a1909 call 0x123976f0 */
  push32(0x123a190eu); f_123976f0();
  /* 123a190e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1911 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1914 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123a1918 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123a191b jmp 0x123a18da */
  goto L_123a18da;
L_123a191d:;
  /* 123a191d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1920 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 123a1926 push eax */
  push32((uint32_t)(EAX));
  /* 123a1927 call 0x123976f0 */
  push32(0x123a192cu); f_123976f0();
  /* 123a192c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a192f mov esi, eax */
  ESI = (EAX);
  /* 123a1931 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1934 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 123a193a push edx */
  push32((uint32_t)(EDX));
  /* 123a193b call 0x123976f0 */
  push32(0x123a1940u); f_123976f0();
  /* 123a1940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1943 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1946 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 123a194a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a194d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1950 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 123a1956 push edx */
  push32((uint32_t)(EDX));
  /* 123a1957 call 0x123976f0 */
  push32(0x123a195cu); f_123976f0();
  /* 123a195c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a195f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a1962 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123a1966 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a1969 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a196c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 123a1972 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1973 call 0x123976f0 */
  push32(0x123a1978u); f_123976f0();
  /* 123a1978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a197b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a197e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123a1982 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123a1985 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1988 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 123a198e push edx */
  push32((uint32_t)(EDX));
  /* 123a198f call 0x123976f0 */
  push32(0x123a1994u); f_123976f0();
  /* 123a1994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1997 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a199a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123a199e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123a19a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123a19a4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a19a9 push eax */
  push32((uint32_t)(EAX));
  /* 123a19aa call 0x123948a0 */
  push32(0x123a19afu); f_123948a0();
  /* 123a19af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a19b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123a19b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a19b9 je 0x123a1bd6 */
  if (C.zf) goto L_123a1bd6;
  /* 123a19bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a19c2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123a19c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a19c8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a19ce mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123a19d1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 123a19d6 mov eax, dword ptr [0x123bfc98] */
  EAX = (r32((uint32_t)(0x123bfc98)));
  /* 123a19db push eax */
  push32((uint32_t)(EAX));
  /* 123a19dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a19df push ecx */
  push32((uint32_t)(ECX));
  /* 123a19e0 call 0x1239b1a0 */
  push32(0x123a19e5u); f_1239b1a0();
  /* 123a19e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a19e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a19ef jmp 0x123a19fa */
  goto L_123a19fa;
L_123a19f1:;
  /* 123a19f1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a19f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a19f7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_123a19fa:;
  /* 123a19fa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a19fe jae 0x123a1a6e */
  if (!C.cf) goto L_123a1a6e;
  /* 123a1a00 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1a03 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1a06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1a09 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 123a1a0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1a0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1a12 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 123a1a15 push edx */
  push32((uint32_t)(EDX));
  /* 123a1a16 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1a19 push eax */
  push32((uint32_t)(EAX));
  /* 123a1a1a call 0x12397870 */
  push32(0x123a1a1fu); f_12397870();
  /* 123a1a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1a22 push eax */
  push32((uint32_t)(EAX));
  /* 123a1a23 call 0x123976f0 */
  push32(0x123a1a28u); f_123976f0();
  /* 123a1a28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1a2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1a2e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123a1a32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123a1a35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1a38 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1a3b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1a3e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 123a1a42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1a45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1a48 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 123a1a4c push edx */
  push32((uint32_t)(EDX));
  /* 123a1a4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1a50 push eax */
  push32((uint32_t)(EAX));
  /* 123a1a51 call 0x12397870 */
  push32(0x123a1a56u); f_12397870();
  /* 123a1a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1a59 push eax */
  push32((uint32_t)(EAX));
  /* 123a1a5a call 0x123976f0 */
  push32(0x123a1a5fu); f_123976f0();
  /* 123a1a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1a62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1a65 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123a1a69 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123a1a6c jmp 0x123a19f1 */
  goto L_123a19f1;
L_123a1a6e:;
  /* 123a1a6e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 123a1a75 jmp 0x123a1a80 */
  goto L_123a1a80;
L_123a1a77:;
  /* 123a1a77 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1a7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1a7d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_123a1a80:;
  /* 123a1a80 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123a1a84 jae 0x123a1af6 */
  if (!C.cf) goto L_123a1af6;
  /* 123a1a86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1a89 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1a8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1a8f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 123a1a93 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1a96 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1a99 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 123a1a9d push eax */
  push32((uint32_t)(EAX));
  /* 123a1a9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1aa2 call 0x12397870 */
  push32(0x123a1aa7u); f_12397870();
  /* 123a1aa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1aaa push eax */
  push32((uint32_t)(EAX));
  /* 123a1aab call 0x123976f0 */
  push32(0x123a1ab0u); f_123976f0();
  /* 123a1ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1ab3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1ab6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123a1aba mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a1abd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1ac0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1ac3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1ac6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 123a1aca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123a1acd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1ad0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 123a1ad4 push eax */
  push32((uint32_t)(EAX));
  /* 123a1ad5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1ad8 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1ad9 call 0x12397870 */
  push32(0x123a1adeu); f_12397870();
  /* 123a1ade add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1ae1 push eax */
  push32((uint32_t)(EAX));
  /* 123a1ae2 call 0x123976f0 */
  push32(0x123a1ae7u); f_123976f0();
  /* 123a1ae7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1aea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1aed lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123a1af1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a1af4 jmp 0x123a1a77 */
  goto L_123a1a77;
L_123a1af6:;
  /* 123a1af6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1af9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1afc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 123a1b02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1b05 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 123a1b0b push ecx */
  push32((uint32_t)(ECX));
  /* 123a1b0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b0f push edx */
  push32((uint32_t)(EDX));
  /* 123a1b10 call 0x12397870 */
  push32(0x123a1b15u); f_12397870();
  /* 123a1b15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1b18 push eax */
  push32((uint32_t)(EAX));
  /* 123a1b19 call 0x123976f0 */
  push32(0x123a1b1eu); f_123976f0();
  /* 123a1b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1b21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b24 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123a1b28 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123a1b2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1b2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b31 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 123a1b37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1b3a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 123a1b40 push eax */
  push32((uint32_t)(EAX));
  /* 123a1b41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b44 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1b45 call 0x12397870 */
  push32(0x123a1b4au); f_12397870();
  /* 123a1b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1b4d push eax */
  push32((uint32_t)(EAX));
  /* 123a1b4e call 0x123976f0 */
  push32(0x123a1b53u); f_123976f0();
  /* 123a1b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1b56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b59 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123a1b5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a1b60 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1b63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b66 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 123a1b6c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1b6f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 123a1b75 push ecx */
  push32((uint32_t)(ECX));
  /* 123a1b76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b79 push edx */
  push32((uint32_t)(EDX));
  /* 123a1b7a call 0x12397870 */
  push32(0x123a1b7fu); f_12397870();
  /* 123a1b7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1b82 push eax */
  push32((uint32_t)(EAX));
  /* 123a1b83 call 0x123976f0 */
  push32(0x123a1b88u); f_123976f0();
  /* 123a1b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1b8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b8e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 123a1b92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123a1b95 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1b98 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1b9b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 123a1ba1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123a1ba4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 123a1baa push eax */
  push32((uint32_t)(EAX));
  /* 123a1bab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1bae push ecx */
  push32((uint32_t)(ECX));
  /* 123a1baf call 0x12397870 */
  push32(0x123a1bb4u); f_12397870();
  /* 123a1bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1bb7 push eax */
  push32((uint32_t)(EAX));
  /* 123a1bb8 call 0x123976f0 */
  push32(0x123a1bbdu); f_123976f0();
  /* 123a1bbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1bc0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1bc3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 123a1bc7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123a1bca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123a1bcd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 123a1bd0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_123a1bd6:;
  /* 123a1bd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123a1bd9 pop esi */
  ESI = (pop32());
  /* 123a1bda mov esp, ebp */
  ESP = (EBP);
  /* 123a1bdc pop ebp */
  EBP = (pop32());
  /* 123a1bdd ret  */
  ESPCHK(0x123a1870u, _esp0);
  ESP += 4; return;
}

/* FUN_10011be0 @ 0x123a1be0 (31 bytes, 15 insns) */
void f_123a1be0(void) {
  FTRACE(0x123a1be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123a1be0 push ebp */
  push32((uint32_t)(EBP));
  /* 123a1be1 mov ebp, esp */
  EBP = (ESP);
  /* 123a1be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123a1be5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123a1be8 push eax */
  push32((uint32_t)(EAX));
  /* 123a1be9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123a1bec push ecx */
  push32((uint32_t)(ECX));
  /* 123a1bed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123a1bf0 push edx */
  push32((uint32_t)(EDX));
  /* 123a1bf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123a1bf4 push eax */
  push32((uint32_t)(EAX));
  /* 123a1bf5 call 0x123a1c00 */
  push32(0x123a1bfau); f_123a1c00();
  /* 123a1bfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123a1bfd pop ebp */
  EBP = (pop32());
  /* 123a1bfe ret  */
  ESPCHK(0x123a1be0u, _esp0);
  ESP += 4; return;
}

