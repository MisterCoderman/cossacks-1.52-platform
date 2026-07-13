#include "recomp.h"

/* FUN_10006aa0 @ 0x10bd6aa0 (10 bytes, 5 insns) */
void f_10bd6aa0(void) {
  FTRACE(0x10bd6aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6aa3 mov eax, dword ptr [0x10bfcc94] */
  EAX = (r32((uint32_t)(0x10bfcc94)));
  /* 10bd6aa8 pop ebp */
  EBP = (pop32());
  /* 10bd6aa9 ret  */
  ESPCHK(0x10bd6aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ab0 @ 0x10bd6ab0 (31 bytes, 11 insns) */
void f_10bd6ab0(void) {
  FTRACE(0x10bd6ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6ab3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6aba jbe 0x10bd6ac0 */
  if ((C.cf||C.zf)) goto L_10bd6ac0;
  /* 10bd6abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd6abe jmp 0x10bd6acd */
  goto L_10bd6acd;
L_10bd6ac0:;
  /* 10bd6ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6ac3 mov dword ptr [0x10bfcc94], eax */
  w32((uint32_t)(0x10bfcc94), (EAX));
  /* 10bd6ac8 mov eax, 1 */
  EAX = (0x1u);
L_10bd6acd:;
  /* 10bd6acd pop ebp */
  EBP = (pop32());
  /* 10bd6ace ret  */
  ESPCHK(0x10bd6ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x10bd6ad0 (89 bytes, 20 insns) */
void f_10bd6ad0(void) {
  FTRACE(0x10bd6ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6ad3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10bd6ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd6ada mov eax, dword ptr [0x10bffdac] */
  EAX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd6adf push eax */
  push32((uint32_t)(EAX));
  /* 10bd6ae0 call dword ptr [0x10c002e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002e8))), 0x10bd6ae6u);
  /* 10bd6ae6 mov dword ptr [0x10bffda8], eax */
  w32((uint32_t)(0x10bffda8), (EAX));
  /* 10bd6aeb cmp dword ptr [0x10bffda8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bffda8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6af2 jne 0x10bd6af8 */
  if (!C.zf) goto L_10bd6af8;
  /* 10bd6af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd6af6 jmp 0x10bd6b27 */
  goto L_10bd6b27;
L_10bd6af8:;
  /* 10bd6af8 mov ecx, dword ptr [0x10bffda8] */
  ECX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd6afe mov dword ptr [0x10bffd9c], ecx */
  w32((uint32_t)(0x10bffd9c), (ECX));
  /* 10bd6b04 mov dword ptr [0x10bffda0], 0 */
  w32((uint32_t)(0x10bffda0), (0x0u));
  /* 10bd6b0e mov dword ptr [0x10bffda4], 0 */
  w32((uint32_t)(0x10bffda4), (0x0u));
  /* 10bd6b18 mov dword ptr [0x10bffd88], 0x10 */
  w32((uint32_t)(0x10bffd88), (0x10u));
  /* 10bd6b22 mov eax, 1 */
  EAX = (0x1u);
L_10bd6b27:;
  /* 10bd6b27 pop ebp */
  EBP = (pop32());
  /* 10bd6b28 ret  */
  ESPCHK(0x10bd6ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x10bd6b30 (85 bytes, 29 insns) */
void f_10bd6b30(void) {
  FTRACE(0x10bd6b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6b31 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6b33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6b36 mov eax, dword ptr [0x10bffda4] */
  EAX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd6b3b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd6b3e mov ecx, dword ptr [0x10bffda8] */
  ECX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd6b44 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6b46 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bd6b49 mov edx, dword ptr [0x10bffda8] */
  EDX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd6b4f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10bd6b52:;
  /* 10bd6b52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6b55 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6b58 jae 0x10bd6b7f */
  if (!C.cf) goto L_10bd6b7f;
  /* 10bd6b5a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6b5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6b60 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6b63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd6b66 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6b6d jae 0x10bd6b74 */
  if (!C.cf) goto L_10bd6b74;
  /* 10bd6b6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6b72 jmp 0x10bd6b81 */
  goto L_10bd6b81;
L_10bd6b74:;
  /* 10bd6b74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6b77 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6b7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd6b7d jmp 0x10bd6b52 */
  goto L_10bd6b52;
L_10bd6b7f:;
  /* 10bd6b7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd6b81:;
  /* 10bd6b81 mov esp, ebp */
  ESP = (EBP);
  /* 10bd6b83 pop ebp */
  EBP = (pop32());
  /* 10bd6b84 ret  */
  ESPCHK(0x10bd6b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b90 @ 0x10bd6b90 (95 bytes, 33 insns) */
void f_10bd6b90(void) {
  FTRACE(0x10bd6b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6b91 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6b93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6b96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6b99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6b9c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6b9f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd6ba2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6ba5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10bd6ba8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd6bab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd6bb0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6bb3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd6bb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6bb8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd6bbb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd6bbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd6bbf jne 0x10bd6be1 */
  if (!C.zf) goto L_10bd6be1;
  /* 10bd6bc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6bc4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd6bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd6bc9 jne 0x10bd6be1 */
  if (!C.zf) goto L_10bd6be1;
  /* 10bd6bcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6bce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6bd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd6bd6 je 0x10bd6be1 */
  if (C.zf) goto L_10bd6be1;
  /* 10bd6bd8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10bd6bdf jmp 0x10bd6be8 */
  goto L_10bd6be8;
L_10bd6be1:;
  /* 10bd6be1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10bd6be8:;
  /* 10bd6be8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd6beb mov esp, ebp */
  ESP = (EBP);
  /* 10bd6bed pop ebp */
  EBP = (pop32());
  /* 10bd6bee ret  */
  ESPCHK(0x10bd6b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x10bd6bf0 (1485 bytes, 453 insns) */
void f_10bd6bf0(void) {
  FTRACE(0x10bd6bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd6bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd6bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd6bf3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6bf9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd6bfc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10bd6bff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6c02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6c05 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6c08 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd6c0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd6c0e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10bd6c11 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd6c14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6c17 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd6c1d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6c20 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10bd6c27 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd6c2a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd6c2d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6c30 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10bd6c33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6c36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd6c38 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6c3b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10bd6c3e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6c41 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6c44 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10bd6c47 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd6c4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd6c4c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bd6c4f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6c52 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10bd6c55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd6c58 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd6c5b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6c5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd6c60 jne 0x10bd6d88 */
  if (!C.zf) goto L_10bd6d88;
  /* 10bd6c66 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd6c69 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10bd6c6c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6c6f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10bd6c72 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6c76 jbe 0x10bd6c7f */
  if ((C.cf||C.zf)) goto L_10bd6c7f;
  /* 10bd6c78 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10bd6c7f:;
  /* 10bd6c7f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd6c82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd6c85 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd6c88 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6c8b jne 0x10bd6d61 */
  if (!C.zf) goto L_10bd6d61;
  /* 10bd6c91 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6c95 jae 0x10bd6cf6 */
  if (!C.cf) goto L_10bd6cf6;
  /* 10bd6c97 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd6c9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd6c9f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd6ca1 not eax */
  EAX = (~(EAX));
  /* 10bd6ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6ca6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6ca9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10bd6cad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6caf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6cb2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6cb5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10bd6cb9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6cbc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6cbf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10bd6cc2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd6cc5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6cc8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6ccb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10bd6cce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6cd1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6cd4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd6cd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd6cda jne 0x10bd6cf4 */
  if (!C.zf) goto L_10bd6cf4;
  /* 10bd6cdc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd6ce1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd6ce4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd6ce6 not eax */
  EAX = (~(EAX));
  /* 10bd6ce8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6ceb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd6ced and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd6cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6cf2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10bd6cf4:;
  /* 10bd6cf4 jmp 0x10bd6d61 */
  goto L_10bd6d61;
L_10bd6cf6:;
  /* 10bd6cf6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd6cf9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6cfc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd6d01 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd6d03 not edx */
  EDX = (~(EDX));
  /* 10bd6d05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6d08 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6d0b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10bd6d12 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd6d14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6d17 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6d1a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10bd6d21 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6d24 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6d27 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd6d2a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd6d2d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6d30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6d33 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10bd6d36 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6d39 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6d3c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd6d40 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd6d42 jne 0x10bd6d61 */
  if (!C.zf) goto L_10bd6d61;
  /* 10bd6d44 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd6d47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6d4a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd6d4f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd6d51 not edx */
  EDX = (~(EDX));
  /* 10bd6d53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6d56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd6d59 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6d5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6d5e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10bd6d61:;
  /* 10bd6d61 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd6d64 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd6d67 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd6d6a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd6d6d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10bd6d70 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd6d73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd6d76 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd6d79 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd6d7c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bd6d7f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd6d82 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6d85 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10bd6d88:;
  /* 10bd6d88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd6d8b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10bd6d8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6d91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bd6d94 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6d98 jbe 0x10bd6da1 */
  if ((C.cf||C.zf)) goto L_10bd6da1;
  /* 10bd6d9a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10bd6da1:;
  /* 10bd6da1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd6da4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6da7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd6da9 jne 0x10bd6f05 */
  if (!C.zf) goto L_10bd6f05;
  /* 10bd6daf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6db2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6db5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10bd6db8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd6dbb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10bd6dbe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6dc1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10bd6dc4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6dc8 jbe 0x10bd6dd1 */
  if ((C.cf||C.zf)) goto L_10bd6dd1;
  /* 10bd6dca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10bd6dd1:;
  /* 10bd6dd1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd6dd4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6dd7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10bd6dda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd6ddd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10bd6de0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6de3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10bd6de6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6dea jbe 0x10bd6df3 */
  if ((C.cf||C.zf)) goto L_10bd6df3;
  /* 10bd6dec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10bd6df3:;
  /* 10bd6df3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd6df6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6df9 je 0x10bd6eff */
  if (C.zf) goto L_10bd6eff;
  /* 10bd6dff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd6e02 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd6e05 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd6e08 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6e0b jne 0x10bd6ee1 */
  if (!C.zf) goto L_10bd6ee1;
  /* 10bd6e11 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6e15 jae 0x10bd6e76 */
  if (!C.cf) goto L_10bd6e76;
  /* 10bd6e17 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd6e1c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd6e1f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd6e21 not edx */
  EDX = (~(EDX));
  /* 10bd6e23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6e26 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6e29 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10bd6e2d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd6e2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6e32 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6e35 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10bd6e39 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6e3c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6e3f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd6e42 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd6e45 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6e48 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6e4b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10bd6e4e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6e51 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6e54 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd6e58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd6e5a jne 0x10bd6e74 */
  if (!C.zf) goto L_10bd6e74;
  /* 10bd6e5c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd6e61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd6e64 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd6e66 not edx */
  EDX = (~(EDX));
  /* 10bd6e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6e6b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd6e6d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6e6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6e72 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd6e74:;
  /* 10bd6e74 jmp 0x10bd6ee1 */
  goto L_10bd6ee1;
L_10bd6e76:;
  /* 10bd6e76 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd6e79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6e7c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd6e81 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd6e83 not eax */
  EAX = (~(EAX));
  /* 10bd6e85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6e88 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6e8b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10bd6e92 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6e94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6e97 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6e9a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10bd6ea1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6ea4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6ea7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10bd6eaa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd6ead mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6eb0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6eb3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10bd6eb6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6eb9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6ebc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd6ec0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd6ec2 jne 0x10bd6ee1 */
  if (!C.zf) goto L_10bd6ee1;
  /* 10bd6ec4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd6ec7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6eca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd6ecf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd6ed1 not eax */
  EAX = (~(EAX));
  /* 10bd6ed3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6ed6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd6ed9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd6edb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6ede mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10bd6ee1:;
  /* 10bd6ee1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd6ee4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd6ee7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd6eea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd6eed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bd6ef0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd6ef3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd6ef6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd6ef9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd6efc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10bd6eff:;
  /* 10bd6eff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd6f02 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10bd6f05:;
  /* 10bd6f05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd6f08 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6f0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd6f0d jne 0x10bd6f1b */
  if (!C.zf) goto L_10bd6f1b;
  /* 10bd6f0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd6f12 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6f15 je 0x10bd702b */
  if (C.zf) goto L_10bd702b;
L_10bd6f1b:;
  /* 10bd6f1b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd6f1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd6f21 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10bd6f24 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10bd6f27 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6f2a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd6f2d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd6f30 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10bd6f33 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6f36 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd6f39 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10bd6f3c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd6f3f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6f42 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10bd6f45 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6f48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd6f4b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6f4e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bd6f51 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6f54 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd6f57 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd6f5a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6f5d jne 0x10bd702b */
  if (!C.zf) goto L_10bd702b;
  /* 10bd6f63 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd6f67 jae 0x10bd6fc4 */
  if (!C.cf) goto L_10bd6fc4;
  /* 10bd6f69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6f6c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6f6f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd6f73 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6f76 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6f79 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd6f7c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd6f7f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6f82 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6f85 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10bd6f88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd6f8a jne 0x10bd6fa2 */
  if (!C.zf) goto L_10bd6fa2;
  /* 10bd6f8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd6f91 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd6f94 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd6f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6f99 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd6f9b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6f9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6fa0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd6fa2:;
  /* 10bd6fa2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd6fa7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd6faa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd6fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6faf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6fb2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10bd6fb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6fb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd6fbb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6fbe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10bd6fc2 jmp 0x10bd702b */
  goto L_10bd702b;
L_10bd6fc4:;
  /* 10bd6fc4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6fc7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6fca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd6fce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6fd1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6fd4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd6fd7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd6fda mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd6fdd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd6fe0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10bd6fe3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd6fe5 jne 0x10bd7002 */
  if (!C.zf) goto L_10bd7002;
  /* 10bd6fe7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd6fea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd6fed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd6ff2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd6ff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6ff7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd6ffa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd6ffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd6fff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10bd7002:;
  /* 10bd7002 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7005 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7008 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd700d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd700f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7012 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd7015 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10bd701c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd701e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7021 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10bd7024 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10bd702b:;
  /* 10bd702b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd702e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7031 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10bd7033 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd7036 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7039 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd703c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10bd703f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd7042 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd7044 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7047 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd704a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd704c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd704f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7052 jne 0x10bd71b9 */
  if (!C.zf) goto L_10bd71b9;
  /* 10bd7058 cmp dword ptr [0x10bffda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bffda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd705f je 0x10bd71a8 */
  if (C.zf) goto L_10bd71a8;
  /* 10bd7065 mov eax, dword ptr [0x10bffd98] */
  EAX = (r32((uint32_t)(0x10bffd98)));
  /* 10bd706a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10bd706d mov ecx, dword ptr [0x10bffda0] */
  ECX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd7073 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd7076 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7078 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10bd707b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10bd7080 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bd7085 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7088 push eax */
  push32((uint32_t)(EAX));
  /* 10bd7089 call dword ptr [0x10c002cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002cc))), 0x10bd708fu);
  /* 10bd708f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7094 mov ecx, dword ptr [0x10bffd98] */
  ECX = (r32((uint32_t)(0x10bffd98)));
  /* 10bd709a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd709c mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd70a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd70a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd70a6 mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd70ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bd70af mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd70b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd70b7 mov edx, dword ptr [0x10bffd98] */
  EDX = (r32((uint32_t)(0x10bffd98)));
  /* 10bd70bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10bd70c8 mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd70cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd70d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10bd70d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd70d6 mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd70db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd70de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10bd70e1 mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd70e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd70ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10bd70ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd70f0 jne 0x10bd7106 */
  if (!C.zf) goto L_10bd7106;
  /* 10bd70f2 mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd70f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd70fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10bd70fd mov ecx, dword ptr [0x10bffda0] */
  ECX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd7103 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10bd7106:;
  /* 10bd7106 mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd710c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7110 jne 0x10bd71a8 */
  if (!C.zf) goto L_10bd71a8;
  /* 10bd7116 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bd711b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd711d mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd7122 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bd7125 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd7126 call dword ptr [0x10c002cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002cc))), 0x10bd712cu);
  /* 10bd712c mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd7132 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd7135 push eax */
  push32((uint32_t)(EAX));
  /* 10bd7136 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd7138 mov ecx, dword ptr [0x10bffdac] */
  ECX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd713e push ecx */
  push32((uint32_t)(ECX));
  /* 10bd713f call dword ptr [0x10c002c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c8))), 0x10bd7145u);
  /* 10bd7145 mov edx, dword ptr [0x10bffda4] */
  EDX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd714b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd714e mov eax, dword ptr [0x10bffda8] */
  EAX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd7153 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7155 mov ecx, dword ptr [0x10bffda0] */
  ECX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd715b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd715e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7160 push eax */
  push32((uint32_t)(EAX));
  /* 10bd7161 mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd7167 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd716a push edx */
  push32((uint32_t)(EDX));
  /* 10bd716b mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd7170 push eax */
  push32((uint32_t)(EAX));
  /* 10bd7171 call 0x10bda720 */
  push32(0x10bd7176u); f_10bda720();
  /* 10bd7176 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7179 mov ecx, dword ptr [0x10bffda4] */
  ECX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd717f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7182 mov dword ptr [0x10bffda4], ecx */
  w32((uint32_t)(0x10bffda4), (ECX));
  /* 10bd7188 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd718b cmp edx, dword ptr [0x10bffda0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10bffda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7191 jbe 0x10bd719c */
  if ((C.cf||C.zf)) goto L_10bd719c;
  /* 10bd7193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7196 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7199 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10bd719c:;
  /* 10bd719c mov ecx, dword ptr [0x10bffda8] */
  ECX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd71a2 mov dword ptr [0x10bffd9c], ecx */
  w32((uint32_t)(0x10bffd9c), (ECX));
L_10bd71a8:;
  /* 10bd71a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd71ab mov dword ptr [0x10bffda0], edx */
  w32((uint32_t)(0x10bffda0), (EDX));
  /* 10bd71b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd71b4 mov dword ptr [0x10bffd98], eax */
  w32((uint32_t)(0x10bffd98), (EAX));
L_10bd71b9:;
  /* 10bd71b9 mov esp, ebp */
  ESP = (EBP);
  /* 10bd71bb pop ebp */
  EBP = (pop32());
  /* 10bd71bc ret  */
  ESPCHK(0x10bd6bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071c0 @ 0x10bd71c0 (1334 bytes, 427 insns) */
void f_10bd71c0(void) {
  FTRACE(0x10bd71c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd71c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd71c1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd71c3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd71c6 push esi */
  push32((uint32_t)(ESI));
  /* 10bd71c7 mov eax, dword ptr [0x10bffda4] */
  EAX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd71cc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd71cf mov ecx, dword ptr [0x10bffda8] */
  ECX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd71d5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd71d7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10bd71da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd71dd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd71e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd71e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10bd71e6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd71e9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10bd71ec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd71ef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bd71f2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd71f6 jge 0x10bd720c */
  if ((C.sf==C.of)) goto L_10bd720c;
  /* 10bd71f8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd71fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd71fe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7200 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10bd7203 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10bd720a jmp 0x10bd7221 */
  goto L_10bd7221;
L_10bd720c:;
  /* 10bd720c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10bd7213 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7216 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7219 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd721c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd721e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10bd7221:;
  /* 10bd7221 mov ecx, dword ptr [0x10bffd9c] */
  ECX = (r32((uint32_t)(0x10bffd9c)));
  /* 10bd7227 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10bd722a:;
  /* 10bd722a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd722d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7230 jae 0x10bd7256 */
  if (!C.cf) goto L_10bd7256;
  /* 10bd7232 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7235 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7238 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10bd723a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd723d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd7240 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7243 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7245 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd7247 je 0x10bd724b */
  if (C.zf) goto L_10bd724b;
  /* 10bd7249 jmp 0x10bd7256 */
  goto L_10bd7256;
L_10bd724b:;
  /* 10bd724b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd724e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7251 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10bd7254 jmp 0x10bd722a */
  goto L_10bd722a;
L_10bd7256:;
  /* 10bd7256 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7259 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd725c jne 0x10bd733d */
  if (!C.zf) goto L_10bd733d;
  /* 10bd7262 mov eax, dword ptr [0x10bffda8] */
  EAX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd7267 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10bd726a:;
  /* 10bd726a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd726d cmp ecx, dword ptr [0x10bffd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7273 jae 0x10bd7299 */
  if (!C.cf) goto L_10bd7299;
  /* 10bd7275 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7278 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd727b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10bd727d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7280 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd7283 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10bd7286 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd728a je 0x10bd728e */
  if (C.zf) goto L_10bd728e;
  /* 10bd728c jmp 0x10bd7299 */
  goto L_10bd7299;
L_10bd728e:;
  /* 10bd728e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7291 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7294 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd7297 jmp 0x10bd726a */
  goto L_10bd726a;
L_10bd7299:;
  /* 10bd7299 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd729c cmp ecx, dword ptr [0x10bffd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd72a2 jne 0x10bd733d */
  if (!C.zf) goto L_10bd733d;
L_10bd72a8:;
  /* 10bd72a8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd72ab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd72ae jae 0x10bd72c6 */
  if (!C.cf) goto L_10bd72c6;
  /* 10bd72b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd72b3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd72b7 je 0x10bd72bb */
  if (C.zf) goto L_10bd72bb;
  /* 10bd72b9 jmp 0x10bd72c6 */
  goto L_10bd72c6;
L_10bd72bb:;
  /* 10bd72bb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd72be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd72c1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10bd72c4 jmp 0x10bd72a8 */
  goto L_10bd72a8;
L_10bd72c6:;
  /* 10bd72c6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd72c9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd72cc jne 0x10bd7317 */
  if (!C.zf) goto L_10bd7317;
  /* 10bd72ce mov eax, dword ptr [0x10bffda8] */
  EAX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd72d3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10bd72d6:;
  /* 10bd72d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd72d9 cmp ecx, dword ptr [0x10bffd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd72df jae 0x10bd72f7 */
  if (!C.cf) goto L_10bd72f7;
  /* 10bd72e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd72e4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd72e8 je 0x10bd72ec */
  if (C.zf) goto L_10bd72ec;
  /* 10bd72ea jmp 0x10bd72f7 */
  goto L_10bd72f7;
L_10bd72ec:;
  /* 10bd72ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd72ef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd72f2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd72f5 jmp 0x10bd72d6 */
  goto L_10bd72d6;
L_10bd72f7:;
  /* 10bd72f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd72fa cmp ecx, dword ptr [0x10bffd9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffd9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7300 jne 0x10bd7317 */
  if (!C.zf) goto L_10bd7317;
  /* 10bd7302 call 0x10bd7700 */
  push32(0x10bd7307u); f_10bd7700();
  /* 10bd7307 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd730a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd730e jne 0x10bd7317 */
  if (!C.zf) goto L_10bd7317;
  /* 10bd7310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7312 jmp 0x10bd76f1 */
  goto L_10bd76f1;
L_10bd7317:;
  /* 10bd7317 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd731a push edx */
  push32((uint32_t)(EDX));
  /* 10bd731b call 0x10bd7810 */
  push32(0x10bd7320u); f_10bd7810();
  /* 10bd7320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7323 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7326 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bd7329 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10bd732b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd732e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd7331 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7334 jne 0x10bd733d */
  if (!C.zf) goto L_10bd733d;
  /* 10bd7336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7338 jmp 0x10bd76f1 */
  goto L_10bd76f1;
L_10bd733d:;
  /* 10bd733d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7340 mov dword ptr [0x10bffd9c], edx */
  w32((uint32_t)(0x10bffd9c), (EDX));
  /* 10bd7346 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7349 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd734c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10bd734f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7352 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd7354 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10bd7357 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd735b je 0x10bd7380 */
  if (C.zf) goto L_10bd7380;
  /* 10bd735d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7360 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7363 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7366 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10bd736a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd736d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7370 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd7373 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10bd737a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10bd737c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd737e jne 0x10bd73b5 */
  if (!C.zf) goto L_10bd73b5;
L_10bd7380:;
  /* 10bd7380 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10bd7387:;
  /* 10bd7387 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd738a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd738d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7390 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10bd7394 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7397 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd739a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd739d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10bd73a4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10bd73a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd73a8 jne 0x10bd73b5 */
  if (!C.zf) goto L_10bd73b5;
  /* 10bd73aa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd73ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd73b0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10bd73b3 jmp 0x10bd7387 */
  goto L_10bd7387;
L_10bd73b5:;
  /* 10bd73b5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd73b8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd73be mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd73c1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10bd73c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd73cb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10bd73d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd73d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd73d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd73db and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10bd73df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10bd73e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd73e6 jne 0x10bd7402 */
  if (!C.zf) goto L_10bd7402;
  /* 10bd73e8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10bd73ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd73f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd73f5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bd73f8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10bd73ff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10bd7402:;
  /* 10bd7402 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7406 jl 0x10bd741b */
  if ((C.sf!=C.of)) goto L_10bd741b;
  /* 10bd7408 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd740b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bd740d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10bd7410 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7413 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7416 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10bd7419 jmp 0x10bd7402 */
  goto L_10bd7402;
L_10bd741b:;
  /* 10bd741b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd741e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7421 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10bd7425 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bd7428 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd742b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd742d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7430 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd7433 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd7436 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bd7439 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd743c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bd743f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7443 jle 0x10bd744c */
  if ((C.zf||C.sf!=C.of)) goto L_10bd744c;
  /* 10bd7445 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10bd744c:;
  /* 10bd744c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd744f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7452 je 0x10bd7670 */
  if (C.zf) goto L_10bd7670;
  /* 10bd7458 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd745b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd745e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7461 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7464 jne 0x10bd753a */
  if (!C.zf) goto L_10bd753a;
  /* 10bd746a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd746e jge 0x10bd74cf */
  if ((C.sf==C.of)) goto L_10bd74cf;
  /* 10bd7470 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7475 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7478 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd747a not eax */
  EAX = (~(EAX));
  /* 10bd747c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd747f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7482 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10bd7486 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7488 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd748b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd748e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10bd7492 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7495 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7498 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10bd749b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd749e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd74a1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd74a4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10bd74a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd74aa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd74ad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd74b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd74b3 jne 0x10bd74cd */
  if (!C.zf) goto L_10bd74cd;
  /* 10bd74b5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd74ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd74bd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd74bf not eax */
  EAX = (~(EAX));
  /* 10bd74c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd74c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd74c6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd74c8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd74cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10bd74cd:;
  /* 10bd74cd jmp 0x10bd753a */
  goto L_10bd753a;
L_10bd74cf:;
  /* 10bd74cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd74d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd74d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd74da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd74dc not edx */
  EDX = (~(EDX));
  /* 10bd74de mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd74e1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd74e4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10bd74eb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd74ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd74f0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd74f3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10bd74fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd74fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7500 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd7503 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd7506 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7509 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd750c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10bd750f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7512 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7515 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd7519 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd751b jne 0x10bd753a */
  if (!C.zf) goto L_10bd753a;
  /* 10bd751d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7520 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7523 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7528 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd752a not edx */
  EDX = (~(EDX));
  /* 10bd752c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd752f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7532 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7534 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7537 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10bd753a:;
  /* 10bd753a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd753d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd7540 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7543 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd7546 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10bd7549 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd754c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd754f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7552 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd7555 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bd7558 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd755c je 0x10bd7670 */
  if (C.zf) goto L_10bd7670;
  /* 10bd7562 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7565 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7568 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10bd756b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bd756e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7571 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd7574 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7577 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bd757a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd757d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd7580 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bd7583 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd7586 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7589 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10bd758c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd758f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7592 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7595 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bd7598 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd759b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd759e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd75a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd75a4 jne 0x10bd7670 */
  if (!C.zf) goto L_10bd7670;
  /* 10bd75aa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd75ae jge 0x10bd760a */
  if ((C.sf==C.of)) goto L_10bd760a;
  /* 10bd75b0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd75b3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd75b6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd75ba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd75bd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd75c0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10bd75c3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd75c5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd75c8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd75cb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10bd75ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd75d0 jne 0x10bd75e8 */
  if (!C.zf) goto L_10bd75e8;
  /* 10bd75d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd75d7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd75da shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd75dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd75df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd75e1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd75e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd75e6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10bd75e8:;
  /* 10bd75e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd75ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd75f0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd75f2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd75f5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd75f8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10bd75fc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd75fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7601 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7604 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10bd7608 jmp 0x10bd7670 */
  goto L_10bd7670;
L_10bd760a:;
  /* 10bd760a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd760d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7610 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd7614 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7617 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd761a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10bd761d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd761f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7622 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7625 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10bd7628 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd762a jne 0x10bd7647 */
  if (!C.zf) goto L_10bd7647;
  /* 10bd762c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd762f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7632 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7637 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7639 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd763c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd763f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd7641 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7644 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10bd7647:;
  /* 10bd7647 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd764a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd764d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7652 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7654 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7657 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd765a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10bd7661 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7663 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7666 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd7669 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10bd7670:;
  /* 10bd7670 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7674 je 0x10bd768a */
  if (C.zf) goto L_10bd768a;
  /* 10bd7676 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd767c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bd767e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7681 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd7687 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10bd768a:;
  /* 10bd768a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd768d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7690 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bd7693 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7696 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7699 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd769c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bd769e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd76a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd76a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd76a7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd76aa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10bd76ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd76b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd76b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd76b5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd76b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd76ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd76bd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10bd76bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd76c1 jne 0x10bd76e3 */
  if (!C.zf) goto L_10bd76e3;
  /* 10bd76c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd76c6 cmp eax, dword ptr [0x10bffda0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bffda0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd76cc jne 0x10bd76e3 */
  if (!C.zf) goto L_10bd76e3;
  /* 10bd76ce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd76d1 cmp ecx, dword ptr [0x10bffd98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffd98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd76d7 jne 0x10bd76e3 */
  if (!C.zf) goto L_10bd76e3;
  /* 10bd76d9 mov dword ptr [0x10bffda0], 0 */
  w32((uint32_t)(0x10bffda0), (0x0u));
L_10bd76e3:;
  /* 10bd76e3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10bd76e6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd76e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10bd76eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd76ee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10bd76f1:;
  /* 10bd76f1 pop esi */
  ESI = (pop32());
  /* 10bd76f2 mov esp, ebp */
  ESP = (EBP);
  /* 10bd76f4 pop ebp */
  EBP = (pop32());
  /* 10bd76f5 ret  */
  ESPCHK(0x10bd71c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x10bd7700 (271 bytes, 78 insns) */
void f_10bd7700(void) {
  FTRACE(0x10bd7700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd7700 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd7701 mov ebp, esp */
  EBP = (ESP);
  /* 10bd7703 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd7704 mov eax, dword ptr [0x10bffda4] */
  EAX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd7709 cmp eax, dword ptr [0x10bffd88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bffd88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd770f jne 0x10bd775b */
  if (!C.zf) goto L_10bd775b;
  /* 10bd7711 mov ecx, dword ptr [0x10bffd88] */
  ECX = (r32((uint32_t)(0x10bffd88)));
  /* 10bd7717 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd771a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd771d push ecx */
  push32((uint32_t)(ECX));
  /* 10bd771e mov edx, dword ptr [0x10bffda8] */
  EDX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd7724 push edx */
  push32((uint32_t)(EDX));
  /* 10bd7725 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd7727 mov eax, dword ptr [0x10bffdac] */
  EAX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd772c push eax */
  push32((uint32_t)(EAX));
  /* 10bd772d call dword ptr [0x10c002ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002ec))), 0x10bd7733u);
  /* 10bd7733 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd7736 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd773a jne 0x10bd7743 */
  if (!C.zf) goto L_10bd7743;
  /* 10bd773c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd773e jmp 0x10bd780b */
  goto L_10bd780b;
L_10bd7743:;
  /* 10bd7743 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7746 mov dword ptr [0x10bffda8], ecx */
  w32((uint32_t)(0x10bffda8), (ECX));
  /* 10bd774c mov edx, dword ptr [0x10bffd88] */
  EDX = (r32((uint32_t)(0x10bffd88)));
  /* 10bd7752 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7755 mov dword ptr [0x10bffd88], edx */
  w32((uint32_t)(0x10bffd88), (EDX));
L_10bd775b:;
  /* 10bd775b mov eax, dword ptr [0x10bffda4] */
  EAX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd7760 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd7763 mov ecx, dword ptr [0x10bffda8] */
  ECX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd7769 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd776b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd776e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10bd7773 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bd7775 mov edx, dword ptr [0x10bffdac] */
  EDX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd777b push edx */
  push32((uint32_t)(EDX));
  /* 10bd777c call dword ptr [0x10c002e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002e8))), 0x10bd7782u);
  /* 10bd7782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7785 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10bd7788 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd778b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd778f jne 0x10bd7795 */
  if (!C.zf) goto L_10bd7795;
  /* 10bd7791 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7793 jmp 0x10bd780b */
  goto L_10bd780b;
L_10bd7795:;
  /* 10bd7795 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd7797 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10bd779c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10bd77a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd77a3 call dword ptr [0x10c002f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002f0))), 0x10bd77a9u);
  /* 10bd77a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd77ac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10bd77af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd77b2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd77b6 jne 0x10bd77d2 */
  if (!C.zf) goto L_10bd77d2;
  /* 10bd77b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd77bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd77be push ecx */
  push32((uint32_t)(ECX));
  /* 10bd77bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd77c1 mov edx, dword ptr [0x10bffdac] */
  EDX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd77c7 push edx */
  push32((uint32_t)(EDX));
  /* 10bd77c8 call dword ptr [0x10c002c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c8))), 0x10bd77ceu);
  /* 10bd77ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd77d0 jmp 0x10bd780b */
  goto L_10bd780b;
L_10bd77d2:;
  /* 10bd77d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd77d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bd77db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd77de mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10bd77e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd77e8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10bd77ef mov eax, dword ptr [0x10bffda4] */
  EAX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd77f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd77f7 mov dword ptr [0x10bffda4], eax */
  w32((uint32_t)(0x10bffda4), (EAX));
  /* 10bd77fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd77ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bd7802 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10bd7808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bd780b:;
  /* 10bd780b mov esp, ebp */
  ESP = (EBP);
  /* 10bd780d pop ebp */
  EBP = (pop32());
  /* 10bd780e ret  */
  ESPCHK(0x10bd7700u, _esp0);
  ESP += 4; return;
}

/* FUN_10007810 @ 0x10bd7810 (494 bytes, 149 insns) */
void f_10bd7810(void) {
  FTRACE(0x10bd7810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd7810 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd7811 mov ebp, esp */
  EBP = (ESP);
  /* 10bd7813 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7819 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd781c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10bd781f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7822 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bd7825 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd7828 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10bd782f:;
  /* 10bd782f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7833 jl 0x10bd7848 */
  if ((C.sf!=C.of)) goto L_10bd7848;
  /* 10bd7835 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd7838 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10bd783a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd783d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7840 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7843 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10bd7846 jmp 0x10bd782f */
  goto L_10bd782f;
L_10bd7848:;
  /* 10bd7848 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd784b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd7851 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7854 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10bd785b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10bd785e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10bd7865 jmp 0x10bd7870 */
  goto L_10bd7870;
L_10bd7867:;
  /* 10bd7867 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd786a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd786d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10bd7870:;
  /* 10bd7870 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7874 jge 0x10bd7896 */
  if ((C.sf==C.of)) goto L_10bd7896;
  /* 10bd7876 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7879 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd787c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10bd787f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd7882 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7885 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7888 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bd788b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd788e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7891 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10bd7894 jmp 0x10bd7867 */
  goto L_10bd7867;
L_10bd7896:;
  /* 10bd7896 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7899 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10bd789c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd789f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bd78a2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd78a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bd78a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bd78a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bd78ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bd78b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd78b6 push edx */
  push32((uint32_t)(EDX));
  /* 10bd78b7 call dword ptr [0x10c002f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002f0))), 0x10bd78bdu);
  /* 10bd78bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd78bf jne 0x10bd78c9 */
  if (!C.zf) goto L_10bd78c9;
  /* 10bd78c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd78c4 jmp 0x10bd79fa */
  goto L_10bd79fa;
L_10bd78c9:;
  /* 10bd78c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd78cc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd78d1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10bd78d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd78d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd78da jmp 0x10bd78e8 */
  goto L_10bd78e8;
L_10bd78dc:;
  /* 10bd78dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd78df add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd78e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd78e8:;
  /* 10bd78e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd78eb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd78ee ja 0x10bd794d */
  if ((!C.cf&&!C.zf)) goto L_10bd794d;
  /* 10bd78f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd78f3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10bd78fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd78fd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10bd7907 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd790a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd790d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd7910 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7913 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10bd7919 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd791c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7922 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7925 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10bd7928 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd792b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7931 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7934 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bd7937 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd793a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd793f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bd7942 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7945 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10bd794b jmp 0x10bd78dc */
  goto L_10bd78dc;
L_10bd794d:;
  /* 10bd794d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd7950 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7956 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bd7959 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd795c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd795f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7962 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10bd7965 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7968 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd796b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd796e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7971 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7974 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bd7977 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd797a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd797d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7980 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10bd7983 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7986 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bd7989 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd798c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd798f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7992 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10bd7995 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7998 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd799b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10bd79a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd79a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd79a9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10bd79b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd79b7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10bd79bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd79be mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10bd79c1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd79c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd79c7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10bd79ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd79cc jne 0x10bd79dd */
  if (!C.zf) goto L_10bd79dd;
  /* 10bd79ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd79d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd79d4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd79d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd79da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10bd79dd:;
  /* 10bd79dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd79e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd79e5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd79e7 not edx */
  EDX = (~(EDX));
  /* 10bd79e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd79ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd79ef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd79f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd79f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bd79f7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10bd79fa:;
  /* 10bd79fa mov esp, ebp */
  ESP = (EBP);
  /* 10bd79fc pop ebp */
  EBP = (pop32());
  /* 10bd79fd ret  */
  ESPCHK(0x10bd7810u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a00 @ 0x10bd7a00 (1515 bytes, 489 insns) */
void f_10bd7a00(void) {
  FTRACE(0x10bd7a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd7a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd7a01 mov ebp, esp */
  EBP = (ESP);
  /* 10bd7a03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7a06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd7a09 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7a0c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10bd7a0e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10bd7a11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7a14 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10bd7a17 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10bd7a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7a1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd7a20 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7a23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bd7a26 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd7a29 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10bd7a2c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd7a2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7a32 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd7a38 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7a3b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10bd7a42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bd7a45 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd7a48 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7a4b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bd7a4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7a51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd7a53 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7a56 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10bd7a59 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7a5c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7a5f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10bd7a62 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7a65 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd7a67 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10bd7a6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd7a6d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7a70 jle 0x10bd7d26 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd7d26;
  /* 10bd7a76 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7a79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7a7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd7a7e jne 0x10bd7a8b */
  if (!C.zf) goto L_10bd7a8b;
  /* 10bd7a80 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7a83 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7a86 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7a89 jle 0x10bd7a92 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd7a92;
L_10bd7a8b:;
  /* 10bd7a8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7a8d jmp 0x10bd7fe7 */
  goto L_10bd7fe7;
L_10bd7a92:;
  /* 10bd7a92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7a95 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10bd7a98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7a9b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bd7a9e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7aa2 jbe 0x10bd7aab */
  if ((C.cf||C.zf)) goto L_10bd7aab;
  /* 10bd7aa4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10bd7aab:;
  /* 10bd7aab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7aae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7ab1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd7ab4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7ab7 jne 0x10bd7b8d */
  if (!C.zf) goto L_10bd7b8d;
  /* 10bd7abd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7ac1 jae 0x10bd7b22 */
  if (!C.cf) goto L_10bd7b22;
  /* 10bd7ac3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7ac8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7acb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7acd not edx */
  EDX = (~(EDX));
  /* 10bd7acf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7ad2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7ad5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10bd7ad9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7adb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7ade mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7ae1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10bd7ae5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7ae8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7aeb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd7aee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd7af1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7af4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7af7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10bd7afa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7afd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7b00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd7b04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd7b06 jne 0x10bd7b20 */
  if (!C.zf) goto L_10bd7b20;
  /* 10bd7b08 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7b0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7b10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7b12 not edx */
  EDX = (~(EDX));
  /* 10bd7b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7b17 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd7b19 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7b1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7b1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd7b20:;
  /* 10bd7b20 jmp 0x10bd7b8d */
  goto L_10bd7b8d;
L_10bd7b22:;
  /* 10bd7b22 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7b25 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7b28 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7b2d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7b2f not eax */
  EAX = (~(EAX));
  /* 10bd7b31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7b34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7b37 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10bd7b3e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7b40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7b43 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7b46 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10bd7b4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7b50 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7b53 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10bd7b56 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd7b59 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7b5c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7b5f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10bd7b62 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7b65 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7b68 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd7b6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd7b6e jne 0x10bd7b8d */
  if (!C.zf) goto L_10bd7b8d;
  /* 10bd7b70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7b73 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7b76 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7b7b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7b7d not eax */
  EAX = (~(EAX));
  /* 10bd7b7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7b82 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd7b85 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd7b87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7b8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10bd7b8d:;
  /* 10bd7b8d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7b90 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd7b93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7b96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7b99 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bd7b9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7b9f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd7ba2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7ba5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd7ba8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10bd7bab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7bae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7bb1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7bb4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd7bb7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7bbb jle 0x10bd7d07 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd7d07;
  /* 10bd7bc1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7bc4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7bc7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10bd7bca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7bcd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10bd7bd0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7bd3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10bd7bd6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7bda jbe 0x10bd7be3 */
  if ((C.cf||C.zf)) goto L_10bd7be3;
  /* 10bd7bdc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10bd7be3:;
  /* 10bd7be3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7be6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd7be9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10bd7bec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10bd7bef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7bf2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7bf5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd7bf8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10bd7bfb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7bfe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7c01 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10bd7c04 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7c07 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7c0a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10bd7c0d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7c10 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd7c13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7c16 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bd7c19 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7c1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7c1f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd7c22 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7c25 jne 0x10bd7cf3 */
  if (!C.zf) goto L_10bd7cf3;
  /* 10bd7c2b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7c2f jae 0x10bd7c8c */
  if (!C.cf) goto L_10bd7c8c;
  /* 10bd7c31 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7c34 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7c37 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd7c3b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7c3e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7c41 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd7c44 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd7c47 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7c4a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7c4d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10bd7c50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd7c52 jne 0x10bd7c6a */
  if (!C.zf) goto L_10bd7c6a;
  /* 10bd7c54 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7c59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7c5c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7c5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7c61 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd7c63 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7c65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7c68 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd7c6a:;
  /* 10bd7c6a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7c6f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7c72 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7c74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7c77 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7c7a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10bd7c7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7c80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7c83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7c86 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10bd7c8a jmp 0x10bd7cf3 */
  goto L_10bd7cf3;
L_10bd7c8c:;
  /* 10bd7c8c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7c8f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7c92 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd7c96 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7c99 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7c9c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd7c9f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd7ca2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7ca5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7ca8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10bd7cab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd7cad jne 0x10bd7cca */
  if (!C.zf) goto L_10bd7cca;
  /* 10bd7caf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7cb2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7cb5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7cba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7cbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7cbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7cc2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7cc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7cc7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10bd7cca:;
  /* 10bd7cca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7ccd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7cd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7cd5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7cd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7cda mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7cdd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10bd7ce4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7ce6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7ce9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7cec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10bd7cf3:;
  /* 10bd7cf3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7cf6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7cf9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10bd7cfb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7cfe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7d01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7d04 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10bd7d07:;
  /* 10bd7d07 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd7d0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7d0d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7d10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bd7d12 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd7d15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7d18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7d1b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7d1e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10bd7d21 jmp 0x10bd7fe2 */
  goto L_10bd7fe2;
L_10bd7d26:;
  /* 10bd7d26 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd7d29 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7d2c jge 0x10bd7fe2 */
  if ((C.sf==C.of)) goto L_10bd7fe2;
  /* 10bd7d32 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd7d35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7d38 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7d3b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bd7d3d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bd7d40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7d43 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7d46 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7d49 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10bd7d4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7d4f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7d52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bd7d55 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7d58 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7d5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bd7d5e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7d61 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bd7d64 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7d67 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10bd7d6a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7d6e jbe 0x10bd7d77 */
  if ((C.cf||C.zf)) goto L_10bd7d77;
  /* 10bd7d70 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10bd7d77:;
  /* 10bd7d77 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7d7a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd7d7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd7d7f jne 0x10bd7ec0 */
  if (!C.zf) goto L_10bd7ec0;
  /* 10bd7d85 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd7d88 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10bd7d8b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7d8e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bd7d91 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7d95 jbe 0x10bd7d9e */
  if ((C.cf||C.zf)) goto L_10bd7d9e;
  /* 10bd7d97 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10bd7d9e:;
  /* 10bd7d9e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7da1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7da4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd7da7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7daa jne 0x10bd7e80 */
  if (!C.zf) goto L_10bd7e80;
  /* 10bd7db0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7db4 jae 0x10bd7e15 */
  if (!C.cf) goto L_10bd7e15;
  /* 10bd7db6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7dbb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7dbe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7dc0 not edx */
  EDX = (~(EDX));
  /* 10bd7dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7dc5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7dc8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10bd7dcc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7dce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7dd1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7dd4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10bd7dd8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7ddb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7dde mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10bd7de1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd7de4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7de7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7dea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10bd7ded mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7df0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7df3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd7df7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd7df9 jne 0x10bd7e13 */
  if (!C.zf) goto L_10bd7e13;
  /* 10bd7dfb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7e00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7e03 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7e05 not edx */
  EDX = (~(EDX));
  /* 10bd7e07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7e0a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd7e0c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7e0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7e11 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10bd7e13:;
  /* 10bd7e13 jmp 0x10bd7e80 */
  goto L_10bd7e80;
L_10bd7e15:;
  /* 10bd7e15 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7e18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7e1b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7e20 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7e22 not eax */
  EAX = (~(EAX));
  /* 10bd7e24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7e27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7e2a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10bd7e31 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd7e33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7e36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7e39 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10bd7e40 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7e43 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7e46 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10bd7e49 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd7e4c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7e4f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7e52 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10bd7e55 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7e58 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7e5b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bd7e5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd7e61 jne 0x10bd7e80 */
  if (!C.zf) goto L_10bd7e80;
  /* 10bd7e63 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd7e66 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7e69 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7e6e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7e70 not eax */
  EAX = (~(EAX));
  /* 10bd7e72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7e75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd7e78 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd7e7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7e7d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10bd7e80:;
  /* 10bd7e80 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7e83 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd7e86 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7e89 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7e8c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bd7e8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7e92 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd7e95 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd7e98 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd7e9b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10bd7e9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7ea1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7ea4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bd7ea7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7eaa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bd7ead sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7eb0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10bd7eb3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7eb7 jbe 0x10bd7ec0 */
  if ((C.cf||C.zf)) goto L_10bd7ec0;
  /* 10bd7eb9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10bd7ec0:;
  /* 10bd7ec0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7ec3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd7ec6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10bd7ec9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10bd7ecc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7ecf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7ed2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7ed5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bd7ed8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7edb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7ede mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bd7ee1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd7ee4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7ee7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10bd7eea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7eed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7ef0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7ef3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10bd7ef6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7ef9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7efc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd7eff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7f02 jne 0x10bd7fce */
  if (!C.zf) goto L_10bd7fce;
  /* 10bd7f08 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7f0c jae 0x10bd7f68 */
  if (!C.cf) goto L_10bd7f68;
  /* 10bd7f0e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7f11 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7f14 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd7f18 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7f1b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7f1e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10bd7f21 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd7f23 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7f26 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7f29 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10bd7f2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd7f2e jne 0x10bd7f46 */
  if (!C.zf) goto L_10bd7f46;
  /* 10bd7f30 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7f35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7f38 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7f3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7f3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd7f3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd7f41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7f44 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10bd7f46:;
  /* 10bd7f46 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7f4b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7f4e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7f50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7f53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7f56 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10bd7f5a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7f5f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7f62 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10bd7f66 jmp 0x10bd7fce */
  goto L_10bd7fce;
L_10bd7f68:;
  /* 10bd7f68 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7f6b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7f6e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10bd7f72 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7f75 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7f78 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10bd7f7b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd7f7d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7f80 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7f83 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10bd7f86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd7f88 jne 0x10bd7fa5 */
  if (!C.zf) goto L_10bd7fa5;
  /* 10bd7f8a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7f8d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7f90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10bd7f95 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10bd7f97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7f9a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd7f9d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd7f9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd7fa2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10bd7fa5:;
  /* 10bd7fa5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd7fa8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd7fab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd7fb0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd7fb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7fb5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7fb8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10bd7fbf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd7fc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd7fc4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bd7fc7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10bd7fce:;
  /* 10bd7fce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7fd1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7fd4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bd7fd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd7fd9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd7fdc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd7fdf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10bd7fe2:;
  /* 10bd7fe2 mov eax, 1 */
  EAX = (0x1u);
L_10bd7fe7:;
  /* 10bd7fe7 mov esp, ebp */
  ESP = (EBP);
  /* 10bd7fe9 pop ebp */
  EBP = (pop32());
  /* 10bd7fea ret  */
  ESPCHK(0x10bd7a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x10bd7ff0 (304 bytes, 79 insns) */
void f_10bd7ff0(void) {
  FTRACE(0x10bd7ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd7ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd7ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd7ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd7ff4 cmp dword ptr [0x10bffda0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bffda0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd7ffb je 0x10bd811c */
  if (C.zf) goto L_10bd811c;
  /* 10bd8001 mov eax, dword ptr [0x10bffd98] */
  EAX = (r32((uint32_t)(0x10bffd98)));
  /* 10bd8006 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10bd8009 mov ecx, dword ptr [0x10bffda0] */
  ECX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd800f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd8012 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8014 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd8017 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10bd801c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bd8021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8024 push eax */
  push32((uint32_t)(EAX));
  /* 10bd8025 call dword ptr [0x10c002cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002cc))), 0x10bd802bu);
  /* 10bd802b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd8030 mov ecx, dword ptr [0x10bffd98] */
  ECX = (r32((uint32_t)(0x10bffd98)));
  /* 10bd8036 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd8038 mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd803d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bd8040 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8042 mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd8048 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bd804b mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd8050 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd8053 mov edx, dword ptr [0x10bffd98] */
  EDX = (r32((uint32_t)(0x10bffd98)));
  /* 10bd8059 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10bd8064 mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd8069 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd806c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10bd806f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10bd8072 mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd8077 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd807a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10bd807d mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd8083 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd8086 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10bd808a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd808c jne 0x10bd80a2 */
  if (!C.zf) goto L_10bd80a2;
  /* 10bd808e mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd8094 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd8097 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10bd8099 mov ecx, dword ptr [0x10bffda0] */
  ECX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd809f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10bd80a2:;
  /* 10bd80a2 mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd80a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd80ac jne 0x10bd8112 */
  if (!C.zf) goto L_10bd8112;
  /* 10bd80ae cmp dword ptr [0x10bffda4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bffda4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd80b5 jle 0x10bd8112 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd8112;
  /* 10bd80b7 mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd80bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bd80bf push ecx */
  push32((uint32_t)(ECX));
  /* 10bd80c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd80c2 mov edx, dword ptr [0x10bffdac] */
  EDX = (r32((uint32_t)(0x10bffdac)));
  /* 10bd80c8 push edx */
  push32((uint32_t)(EDX));
  /* 10bd80c9 call dword ptr [0x10c002c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002c8))), 0x10bd80cfu);
  /* 10bd80cf mov eax, dword ptr [0x10bffda4] */
  EAX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd80d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd80d7 mov ecx, dword ptr [0x10bffda8] */
  ECX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd80dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd80df mov edx, dword ptr [0x10bffda0] */
  EDX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd80e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd80e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd80ea push ecx */
  push32((uint32_t)(ECX));
  /* 10bd80eb mov eax, dword ptr [0x10bffda0] */
  EAX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd80f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd80f3 push eax */
  push32((uint32_t)(EAX));
  /* 10bd80f4 mov ecx, dword ptr [0x10bffda0] */
  ECX = (r32((uint32_t)(0x10bffda0)));
  /* 10bd80fa push ecx */
  push32((uint32_t)(ECX));
  /* 10bd80fb call 0x10bda720 */
  push32(0x10bd8100u); f_10bda720();
  /* 10bd8100 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8103 mov edx, dword ptr [0x10bffda4] */
  EDX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd8109 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd810c mov dword ptr [0x10bffda4], edx */
  w32((uint32_t)(0x10bffda4), (EDX));
L_10bd8112:;
  /* 10bd8112 mov dword ptr [0x10bffda0], 0 */
  w32((uint32_t)(0x10bffda0), (0x0u));
L_10bd811c:;
  /* 10bd811c mov esp, ebp */
  ESP = (EBP);
  /* 10bd811e pop ebp */
  EBP = (pop32());
  /* 10bd811f ret  */
  ESPCHK(0x10bd7ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008120 @ 0x10bd8120 (1565 bytes, 343 insns) */
void f_10bd8120(void) {
  FTRACE(0x10bd8120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd8120 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd8121 mov ebp, esp */
  EBP = (ESP);
  /* 10bd8123 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8129 mov eax, dword ptr [0x10bffda4] */
  EAX = (r32((uint32_t)(0x10bffda4)));
  /* 10bd812e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd8131 push eax */
  push32((uint32_t)(EAX));
  /* 10bd8132 mov ecx, dword ptr [0x10bffda8] */
  ECX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd8138 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8139 call dword ptr [0x10c002a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002a0))), 0x10bd813fu);
  /* 10bd813f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd8141 je 0x10bd814b */
  if (C.zf) goto L_10bd814b;
  /* 10bd8143 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8146 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd814b:;
  /* 10bd814b mov edx, dword ptr [0x10bffda8] */
  EDX = (r32((uint32_t)(0x10bffda8)));
  /* 10bd8151 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10bd8157 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10bd8161 jmp 0x10bd8172 */
  goto L_10bd8172;
L_10bd8163:;
  /* 10bd8163 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10bd8169 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd816c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10bd8172:;
  /* 10bd8172 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10bd8178 cmp ecx, dword ptr [0x10bffda4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd817e jge 0x10bd8737 */
  if ((C.sf==C.of)) goto L_10bd8737;
  /* 10bd8184 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10bd818a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd818d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10bd8193 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10bd8198 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10bd819e push ecx */
  push32((uint32_t)(ECX));
  /* 10bd819f call dword ptr [0x10c002a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002a0))), 0x10bd81a5u);
  /* 10bd81a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd81a7 je 0x10bd81b3 */
  if (C.zf) goto L_10bd81b3;
  /* 10bd81a9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10bd81ae jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd81b3:;
  /* 10bd81b3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10bd81b9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bd81bc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10bd81c2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10bd81c8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd81ce mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10bd81d1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10bd81d7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bd81da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd81dd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10bd81e7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10bd81f1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bd81f8 jmp 0x10bd8203 */
  goto L_10bd8203;
L_10bd81fa:;
  /* 10bd81fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd81fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8200 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10bd8203:;
  /* 10bd8203 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8207 jge 0x10bd86fb */
  if ((C.sf==C.of)) goto L_10bd86fb;
  /* 10bd820d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10bd8217 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10bd8221 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10bd822b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10bd8235 jmp 0x10bd8246 */
  goto L_10bd8246;
L_10bd8237:;
  /* 10bd8237 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10bd823d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8240 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10bd8246:;
  /* 10bd8246 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd824d jge 0x10bd8262 */
  if ((C.sf==C.of)) goto L_10bd8262;
  /* 10bd824f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10bd8255 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10bd8260 jmp 0x10bd8237 */
  goto L_10bd8237;
L_10bd8262:;
  /* 10bd8262 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8266 jl 0x10bd869d */
  if ((C.sf!=C.of)) goto L_10bd869d;
  /* 10bd826c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10bd8271 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10bd8277 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8278 call dword ptr [0x10c002a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002a0))), 0x10bd827eu);
  /* 10bd827e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd8280 je 0x10bd828c */
  if (C.zf) goto L_10bd828c;
  /* 10bd8282 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10bd8287 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd828c:;
  /* 10bd828c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10bd8292 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bd8295 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10bd829f jmp 0x10bd82b0 */
  goto L_10bd82b0;
L_10bd82a1:;
  /* 10bd82a1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10bd82a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd82aa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10bd82b0:;
  /* 10bd82b0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd82b7 jge 0x10bd8434 */
  if ((C.sf==C.of)) goto L_10bd8434;
  /* 10bd82bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd82c0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd82c3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10bd82c9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd82cf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd82d5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10bd82db mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd82e1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd82e5 jne 0x10bd82f2 */
  if (!C.zf) goto L_10bd82f2;
  /* 10bd82e7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10bd82ed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd82f0 je 0x10bd82fc */
  if (C.zf) goto L_10bd82fc;
L_10bd82f2:;
  /* 10bd82f2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10bd82f7 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd82fc:;
  /* 10bd82fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd8302 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd8304 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10bd830a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10bd8310 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10bd8316 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10bd831c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd831f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd8321 je 0x10bd8359 */
  if (C.zf) goto L_10bd8359;
  /* 10bd8323 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10bd8329 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd832c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10bd8332 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd833c jle 0x10bd8348 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd8348;
  /* 10bd833e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10bd8343 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd8348:;
  /* 10bd8348 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10bd834e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8351 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10bd8357 jmp 0x10bd839b */
  goto L_10bd839b;
L_10bd8359:;
  /* 10bd8359 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10bd835f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10bd8362 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8365 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10bd836b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8372 jle 0x10bd837e */
  if ((C.zf||C.sf!=C.of)) goto L_10bd837e;
  /* 10bd8374 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10bd837e:;
  /* 10bd837e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10bd8384 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10bd838b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd838e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10bd8394 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10bd839b:;
  /* 10bd839b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd83a2 jl 0x10bd83bd */
  if ((C.sf!=C.of)) goto L_10bd83bd;
  /* 10bd83a4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10bd83aa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd83ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd83af jne 0x10bd83bd */
  if (!C.zf) goto L_10bd83bd;
  /* 10bd83b1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd83bb jle 0x10bd83c7 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd83c7;
L_10bd83bd:;
  /* 10bd83bd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10bd83c2 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd83c7:;
  /* 10bd83c7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd83cd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd83d3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bd83d6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd83dc je 0x10bd83e8 */
  if (C.zf) goto L_10bd83e8;
  /* 10bd83de mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10bd83e3 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd83e8:;
  /* 10bd83e8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd83ee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd83f4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10bd83fa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd8400 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8406 jb 0x10bd82fc */
  if (C.cf) goto L_10bd82fc;
  /* 10bd840c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd8412 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8418 je 0x10bd8424 */
  if (C.zf) goto L_10bd8424;
  /* 10bd841a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10bd841f jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd8424:;
  /* 10bd8424 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd8427 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd842c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bd842f jmp 0x10bd82a1 */
  goto L_10bd82a1;
L_10bd8434:;
  /* 10bd8434 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd8437 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd8439 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd843f je 0x10bd844b */
  if (C.zf) goto L_10bd844b;
  /* 10bd8441 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10bd8446 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd844b:;
  /* 10bd844b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd844e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10bd8454 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10bd845b jmp 0x10bd8466 */
  goto L_10bd8466;
L_10bd845d:;
  /* 10bd845d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd8460 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8463 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10bd8466:;
  /* 10bd8466 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd846a jge 0x10bd869d */
  if ((C.sf==C.of)) goto L_10bd869d;
  /* 10bd8470 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10bd847a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10bd8480 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10bd8486:;
  /* 10bd8486 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd848c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd848f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10bd8495 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10bd849b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd84a1 je 0x10bd85ca */
  if (C.zf) goto L_10bd85ca;
  /* 10bd84a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd84aa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10bd84b0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd84b7 je 0x10bd85ca */
  if (C.zf) goto L_10bd85ca;
  /* 10bd84bd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10bd84c3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd84c9 jb 0x10bd84de */
  if (C.cf) goto L_10bd84de;
  /* 10bd84cb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10bd84d1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd84d6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd84dc jb 0x10bd84e8 */
  if (C.cf) goto L_10bd84e8;
L_10bd84de:;
  /* 10bd84de mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10bd84e3 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd84e8:;
  /* 10bd84e8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10bd84ee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd84f4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10bd84fa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10bd8500 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8503 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10bd8506 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd8509 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd850e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10bd8514:;
  /* 10bd8514 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd8517 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd851d je 0x10bd853e */
  if (C.zf) goto L_10bd853e;
  /* 10bd851f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd8522 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8528 jne 0x10bd852c */
  if (!C.zf) goto L_10bd852c;
  /* 10bd852a jmp 0x10bd853e */
  goto L_10bd853e;
L_10bd852c:;
  /* 10bd852c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd852f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bd8531 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8534 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd8537 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8539 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10bd853c jmp 0x10bd8514 */
  goto L_10bd8514;
L_10bd853e:;
  /* 10bd853e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd8541 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8547 jne 0x10bd8553 */
  if (!C.zf) goto L_10bd8553;
  /* 10bd8549 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10bd854e jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd8553:;
  /* 10bd8553 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10bd8559 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd855b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10bd855e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8561 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10bd8567 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd856e jle 0x10bd857a */
  if ((C.zf||C.sf!=C.of)) goto L_10bd857a;
  /* 10bd8570 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10bd857a:;
  /* 10bd857a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10bd8580 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8583 je 0x10bd858f */
  if (C.zf) goto L_10bd858f;
  /* 10bd8585 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10bd858a jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd858f:;
  /* 10bd858f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10bd8595 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd8598 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd859e je 0x10bd85aa */
  if (C.zf) goto L_10bd85aa;
  /* 10bd85a0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10bd85a5 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd85aa:;
  /* 10bd85aa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10bd85b0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10bd85b6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10bd85bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd85bf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10bd85c5 jmp 0x10bd8486 */
  goto L_10bd8486;
L_10bd85ca:;
  /* 10bd85ca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd85d1 je 0x10bd8641 */
  if (C.zf) goto L_10bd8641;
  /* 10bd85d3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd85d7 jge 0x10bd860b */
  if ((C.sf==C.of)) goto L_10bd860b;
  /* 10bd85d9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd85de mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd85e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd85e3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10bd85e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd85eb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10bd85f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd85f6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd85f9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd85fb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10bd8601 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8603 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10bd8609 jmp 0x10bd8641 */
  goto L_10bd8641;
L_10bd860b:;
  /* 10bd860b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd860e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8611 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd8616 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd8618 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10bd861e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8620 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10bd8626 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd8629 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd862c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10bd8631 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10bd8633 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10bd8639 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd863b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10bd8641:;
  /* 10bd8641 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10bd8647 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd864a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8650 jne 0x10bd8664 */
  if (!C.zf) goto L_10bd8664;
  /* 10bd8652 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd8655 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10bd865b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8662 je 0x10bd866e */
  if (C.zf) goto L_10bd866e;
L_10bd8664:;
  /* 10bd8664 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10bd8669 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd866e:;
  /* 10bd866e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10bd8674 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bd8677 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd867d je 0x10bd8689 */
  if (C.zf) goto L_10bd8689;
  /* 10bd867f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10bd8684 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd8689:;
  /* 10bd8689 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10bd868f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8692 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10bd8698 jmp 0x10bd845d */
  goto L_10bd845d;
L_10bd869d:;
  /* 10bd869d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd86a0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10bd86a6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10bd86ac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd86b0 jne 0x10bd86ca */
  if (!C.zf) goto L_10bd86ca;
  /* 10bd86b2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd86b5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10bd86bb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10bd86c1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd86c8 je 0x10bd86d1 */
  if (C.zf) goto L_10bd86d1;
L_10bd86ca:;
  /* 10bd86ca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10bd86cf jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd86d1:;
  /* 10bd86d1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10bd86d7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd86dd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10bd86e3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd86e6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd86eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bd86ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd86f1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10bd86f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd86f6 jmp 0x10bd81fa */
  goto L_10bd81fa;
L_10bd86fb:;
  /* 10bd86fb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10bd8701 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10bd8707 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8709 jne 0x10bd871c */
  if (!C.zf) goto L_10bd871c;
  /* 10bd870b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10bd8711 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10bd8717 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd871a je 0x10bd8723 */
  if (C.zf) goto L_10bd8723;
L_10bd871c:;
  /* 10bd871c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10bd8721 jmp 0x10bd8739 */
  goto L_10bd8739;
L_10bd8723:;
  /* 10bd8723 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10bd8729 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd872c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10bd8732 jmp 0x10bd8163 */
  goto L_10bd8163;
L_10bd8737:;
  /* 10bd8737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd8739:;
  /* 10bd8739 mov esp, ebp */
  ESP = (EBP);
  /* 10bd873b pop ebp */
  EBP = (pop32());
  /* 10bd873c ret  */
  ESPCHK(0x10bd8120u, _esp0);
  ESP += 4; return;
}

/* FUN_10008740 @ 0x10bd8740 (250 bytes, 92 insns) */
void f_10bd8740(void) {
  FTRACE(0x10bd8740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd8740 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd8741 mov ebp, esp */
  EBP = (ESP);
  /* 10bd8743 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8746 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd8747 push esi */
  push32((uint32_t)(ESI));
  /* 10bd8748 push edi */
  push32((uint32_t)(EDI));
  /* 10bd8749 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10bd874c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bd874f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10bd8752 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10bd8755:;
  /* 10bd8755 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8759 jne 0x10bd8779 */
  if (!C.zf) goto L_10bd8779;
  /* 10bd875b push 0x10bf9dec */
  push32((uint32_t)(0x10bf9decu));
  /* 10bd8760 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd8762 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10bd8764 push 0x10bf9de0 */
  push32((uint32_t)(0x10bf9de0u));
  /* 10bd8769 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd876b call 0x10bd18f0 */
  push32(0x10bd8770u); f_10bd18f0();
  /* 10bd8770 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8773 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8776 jne 0x10bd8779 */
  if (!C.zf) goto L_10bd8779;
  /* 10bd8778 int3  */
  x86_unimpl("int3 @ 0x10bd8778");
L_10bd8779:;
  /* 10bd8779 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd877b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd877d jne 0x10bd8755 */
  if (!C.zf) goto L_10bd8755;
L_10bd877f:;
  /* 10bd877f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8783 jne 0x10bd87a3 */
  if (!C.zf) goto L_10bd87a3;
  /* 10bd8785 push 0x10bf9dd0 */
  push32((uint32_t)(0x10bf9dd0u));
  /* 10bd878a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd878c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10bd878e push 0x10bf9de0 */
  push32((uint32_t)(0x10bf9de0u));
  /* 10bd8793 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd8795 call 0x10bd18f0 */
  push32(0x10bd879au); f_10bd18f0();
  /* 10bd879a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd879d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd87a0 jne 0x10bd87a3 */
  if (!C.zf) goto L_10bd87a3;
  /* 10bd87a2 int3  */
  x86_unimpl("int3 @ 0x10bd87a2");
L_10bd87a3:;
  /* 10bd87a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd87a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd87a7 jne 0x10bd877f */
  if (!C.zf) goto L_10bd877f;
  /* 10bd87a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd87ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10bd87b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd87b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd87b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bd87bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd87bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd87c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10bd87c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd87c7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10bd87ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bd87d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd87d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd87d5 push edx */
  push32((uint32_t)(EDX));
  /* 10bd87d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd87d9 push eax */
  push32((uint32_t)(EAX));
  /* 10bd87da call 0x10bd97c0 */
  push32(0x10bd87dfu); f_10bd97c0();
  /* 10bd87df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd87e2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bd87e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd87e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd87eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd87ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd87f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10bd87f4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd87f7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd87fb jl 0x10bd881f */
  if ((C.sf!=C.of)) goto L_10bd881f;
  /* 10bd87fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8800 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd8802 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10bd8805 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8807 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd880d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10bd8810 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8813 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bd8815 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8818 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd881b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd881d jmp 0x10bd8830 */
  goto L_10bd8830;
L_10bd881f:;
  /* 10bd881f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8822 push edx */
  push32((uint32_t)(EDX));
  /* 10bd8823 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd8825 call 0x10bd9540 */
  push32(0x10bd882au); f_10bd9540();
  /* 10bd882a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd882d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10bd8830:;
  /* 10bd8830 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd8833 pop edi */
  EDI = (pop32());
  /* 10bd8834 pop esi */
  ESI = (pop32());
  /* 10bd8835 pop ebx */
  EBX = (pop32());
  /* 10bd8836 mov esp, ebp */
  ESP = (EBP);
  /* 10bd8838 pop ebp */
  EBP = (pop32());
  /* 10bd8839 ret  */
  ESPCHK(0x10bd8740u, _esp0);
  ESP += 4; return;
}

/* FUN_10008840 @ 0x10bd8840 (183 bytes, 58 insns) */
void f_10bd8840(void) {
  FTRACE(0x10bd8840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd8840 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd8841 mov ebp, esp */
  EBP = (ESP);
  /* 10bd8843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8849 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd884c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8851 ja 0x10bd886a */
  if ((!C.cf&&!C.zf)) goto L_10bd886a;
  /* 10bd8853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8856 mov edx, dword ptr [0x10bfcc98] */
  EDX = (r32((uint32_t)(0x10bfcc98)));
  /* 10bd885c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd885e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10bd8862 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8865 jmp 0x10bd88f3 */
  goto L_10bd88f3;
L_10bd886a:;
  /* 10bd886a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd886d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10bd8870 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8876 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd887c mov edx, dword ptr [0x10bfcc98] */
  EDX = (r32((uint32_t)(0x10bfcc98)));
  /* 10bd8882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8884 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10bd8888 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd888d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd888f je 0x10bd88b3 */
  if (C.zf) goto L_10bd88b3;
  /* 10bd8891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8894 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10bd8897 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd889d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10bd88a0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10bd88a3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10bd88a6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10bd88aa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10bd88b1 jmp 0x10bd88c4 */
  goto L_10bd88c4;
L_10bd88b3:;
  /* 10bd88b3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10bd88b6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10bd88b9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10bd88bd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10bd88c4:;
  /* 10bd88c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd88c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd88c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd88ca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10bd88cd push ecx */
  push32((uint32_t)(ECX));
  /* 10bd88ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd88d1 push edx */
  push32((uint32_t)(EDX));
  /* 10bd88d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10bd88d5 push eax */
  push32((uint32_t)(EAX));
  /* 10bd88d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd88d8 call 0x10bdaa60 */
  push32(0x10bd88ddu); f_10bdaa60();
  /* 10bd88dd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd88e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd88e2 jne 0x10bd88e8 */
  if (!C.zf) goto L_10bd88e8;
  /* 10bd88e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd88e6 jmp 0x10bd88f3 */
  goto L_10bd88f3;
L_10bd88e8:;
  /* 10bd88e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd88eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd88f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10bd88f3:;
  /* 10bd88f3 mov esp, ebp */
  ESP = (EBP);
  /* 10bd88f5 pop ebp */
  EBP = (pop32());
  /* 10bd88f6 ret  */
  ESPCHK(0x10bd8840u, _esp0);
  ESP += 4; return;
}

/* FUN_10008900 @ 0x10bd8900 (836 bytes, 238 insns) */
void f_10bd8900(void) {
  FTRACE(0x10bd8900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd8900 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd8901 mov ebp, esp */
  EBP = (ESP);
  /* 10bd8903 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8906 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bd8908 call 0x10bd6230 */
  push32(0x10bd890du); f_10bd6230();
  /* 10bd890d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8913 push eax */
  push32((uint32_t)(EAX));
  /* 10bd8914 call 0x10bd8c50 */
  push32(0x10bd8919u); f_10bd8c50();
  /* 10bd8919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd891c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bd891f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8922 cmp ecx, dword ptr [0x10bffae4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffae4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8928 jne 0x10bd893b */
  if (!C.zf) goto L_10bd893b;
  /* 10bd892a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bd892c call 0x10bd62d0 */
  push32(0x10bd8931u); f_10bd62d0();
  /* 10bd8931 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8936 jmp 0x10bd8c40 */
  goto L_10bd8c40;
L_10bd893b:;
  /* 10bd893b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd893f jne 0x10bd895c */
  if (!C.zf) goto L_10bd895c;
  /* 10bd8941 call 0x10bd8d30 */
  push32(0x10bd8946u); f_10bd8d30();
  /* 10bd8946 call 0x10bd8db0 */
  push32(0x10bd894bu); f_10bd8db0();
  /* 10bd894b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bd894d call 0x10bd62d0 */
  push32(0x10bd8952u); f_10bd62d0();
  /* 10bd8952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8955 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8957 jmp 0x10bd8c40 */
  goto L_10bd8c40;
L_10bd895c:;
  /* 10bd895c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd8963 jmp 0x10bd896e */
  goto L_10bd896e;
L_10bd8965:;
  /* 10bd8965 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8968 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd896b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd896e:;
  /* 10bd896e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8972 jae 0x10bd8abf */
  if (!C.cf) goto L_10bd8abf;
  /* 10bd8978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd897b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd897e mov ecx, dword ptr [eax + 0x10bfceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10bfceb8)));
  /* 10bd8984 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8987 jne 0x10bd8aba */
  if (!C.zf) goto L_10bd8aba;
  /* 10bd898d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10bd8994 jmp 0x10bd899f */
  goto L_10bd899f;
L_10bd8996:;
  /* 10bd8996 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8999 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd899c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10bd899f:;
  /* 10bd899f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd89a6 jae 0x10bd89b4 */
  if (!C.cf) goto L_10bd89b4;
  /* 10bd89a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd89ab mov byte ptr [eax + 0x10bffc80], 0 */
  w8((uint32_t)(EAX + 0x10bffc80), (0x0u));
  /* 10bd89b2 jmp 0x10bd8996 */
  goto L_10bd8996;
L_10bd89b4:;
  /* 10bd89b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bd89bb jmp 0x10bd89c6 */
  goto L_10bd89c6;
L_10bd89bd:;
  /* 10bd89bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd89c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd89c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10bd89c6:;
  /* 10bd89c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd89ca jae 0x10bd8a47 */
  if (!C.cf) goto L_10bd8a47;
  /* 10bd89cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd89cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd89d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd89d5 lea ecx, [edx + eax*8 + 0x10bfcec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10bfcec8));
  /* 10bd89dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd89df jmp 0x10bd89ea */
  goto L_10bd89ea;
L_10bd89e1:;
  /* 10bd89e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd89e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd89e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10bd89ea:;
  /* 10bd89ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd89ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd89ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bd89f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd89f3 je 0x10bd8a42 */
  if (C.zf) goto L_10bd8a42;
  /* 10bd89f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd89f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd89fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10bd89fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd89ff je 0x10bd8a42 */
  if (C.zf) goto L_10bd8a42;
  /* 10bd8a01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd8a04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd8a06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd8a08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10bd8a0b jmp 0x10bd8a16 */
  goto L_10bd8a16;
L_10bd8a0d:;
  /* 10bd8a0d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8a10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8a13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10bd8a16:;
  /* 10bd8a16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd8a19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd8a1b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10bd8a1e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8a21 ja 0x10bd8a40 */
  if ((!C.cf&&!C.zf)) goto L_10bd8a40;
  /* 10bd8a23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8a26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd8a29 mov dl, byte ptr [eax + 0x10bffc81] */
  DL = (r8((uint32_t)(EAX + 0x10bffc81)));
  /* 10bd8a2f or dl, byte ptr [ecx + 0x10bfceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10bfceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10bd8a35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8a38 mov byte ptr [eax + 0x10bffc81], dl */
  w8((uint32_t)(EAX + 0x10bffc81), (DL));
  /* 10bd8a3e jmp 0x10bd8a0d */
  goto L_10bd8a0d;
L_10bd8a40:;
  /* 10bd8a40 jmp 0x10bd89e1 */
  goto L_10bd89e1;
L_10bd8a42:;
  /* 10bd8a42 jmp 0x10bd89bd */
  goto L_10bd89bd;
L_10bd8a47:;
  /* 10bd8a47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8a4a mov dword ptr [0x10bffae4], ecx */
  w32((uint32_t)(0x10bffae4), (ECX));
  /* 10bd8a50 mov dword ptr [0x10bffb6c], 1 */
  w32((uint32_t)(0x10bffb6c), (0x1u));
  /* 10bd8a5a mov edx, dword ptr [0x10bffae4] */
  EDX = (r32((uint32_t)(0x10bffae4)));
  /* 10bd8a60 push edx */
  push32((uint32_t)(EDX));
  /* 10bd8a61 call 0x10bd8cb0 */
  push32(0x10bd8a66u); f_10bd8cb0();
  /* 10bd8a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8a69 mov dword ptr [0x10bffd84], eax */
  w32((uint32_t)(0x10bffd84), (EAX));
  /* 10bd8a6e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bd8a75 jmp 0x10bd8a80 */
  goto L_10bd8a80;
L_10bd8a77:;
  /* 10bd8a77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd8a7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8a7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bd8a80:;
  /* 10bd8a80 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8a84 jae 0x10bd8aa4 */
  if (!C.cf) goto L_10bd8aa4;
  /* 10bd8a86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8a89 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd8a8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd8a8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd8a92 mov cx, word ptr [ecx + eax*2 + 0x10bfcebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10bfcebc)));
  /* 10bd8a9a mov word ptr [edx*2 + 0x10bffb60], cx */
  w16((uint32_t)(EDX*2 + 0x10bffb60), (CX));
  /* 10bd8aa2 jmp 0x10bd8a77 */
  goto L_10bd8a77;
L_10bd8aa4:;
  /* 10bd8aa4 call 0x10bd8db0 */
  push32(0x10bd8aa9u); f_10bd8db0();
  /* 10bd8aa9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bd8aab call 0x10bd62d0 */
  push32(0x10bd8ab0u); f_10bd62d0();
  /* 10bd8ab0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8ab3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8ab5 jmp 0x10bd8c40 */
  goto L_10bd8c40;
L_10bd8aba:;
  /* 10bd8aba jmp 0x10bd8965 */
  goto L_10bd8965;
L_10bd8abf:;
  /* 10bd8abf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10bd8ac2 push edx */
  push32((uint32_t)(EDX));
  /* 10bd8ac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8ac6 push eax */
  push32((uint32_t)(EAX));
  /* 10bd8ac7 call dword ptr [0x10c002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002b4))), 0x10bd8acdu);
  /* 10bd8acd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8ad0 jne 0x10bd8c12 */
  if (!C.zf) goto L_10bd8c12;
  /* 10bd8ad6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10bd8add jmp 0x10bd8ae8 */
  goto L_10bd8ae8;
L_10bd8adf:;
  /* 10bd8adf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8ae5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10bd8ae8:;
  /* 10bd8ae8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8aef jae 0x10bd8afd */
  if (!C.cf) goto L_10bd8afd;
  /* 10bd8af1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8af4 mov byte ptr [edx + 0x10bffc80], 0 */
  w8((uint32_t)(EDX + 0x10bffc80), (0x0u));
  /* 10bd8afb jmp 0x10bd8adf */
  goto L_10bd8adf;
L_10bd8afd:;
  /* 10bd8afd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8b00 mov dword ptr [0x10bffae4], eax */
  w32((uint32_t)(0x10bffae4), (EAX));
  /* 10bd8b05 mov dword ptr [0x10bffd84], 0 */
  w32((uint32_t)(0x10bffd84), (0x0u));
  /* 10bd8b0f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8b13 jbe 0x10bd8bce */
  if ((C.cf||C.zf)) goto L_10bd8bce;
  /* 10bd8b19 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10bd8b1c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10bd8b1f jmp 0x10bd8b2a */
  goto L_10bd8b2a;
L_10bd8b21:;
  /* 10bd8b21 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd8b24 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8b27 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10bd8b2a:;
  /* 10bd8b2a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd8b2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8b2f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bd8b31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd8b33 je 0x10bd8b7c */
  if (C.zf) goto L_10bd8b7c;
  /* 10bd8b35 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd8b38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8b3a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10bd8b3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd8b3f je 0x10bd8b7c */
  if (C.zf) goto L_10bd8b7c;
  /* 10bd8b41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd8b44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd8b46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd8b48 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10bd8b4b jmp 0x10bd8b56 */
  goto L_10bd8b56;
L_10bd8b4d:;
  /* 10bd8b4d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8b50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8b53 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10bd8b56:;
  /* 10bd8b56 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd8b59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd8b5b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10bd8b5e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8b61 ja 0x10bd8b7a */
  if ((!C.cf&&!C.zf)) goto L_10bd8b7a;
  /* 10bd8b63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8b66 mov cl, byte ptr [eax + 0x10bffc81] */
  CL = (r8((uint32_t)(EAX + 0x10bffc81)));
  /* 10bd8b6c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10bd8b6f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8b72 mov byte ptr [edx + 0x10bffc81], cl */
  w8((uint32_t)(EDX + 0x10bffc81), (CL));
  /* 10bd8b78 jmp 0x10bd8b4d */
  goto L_10bd8b4d;
L_10bd8b7a:;
  /* 10bd8b7a jmp 0x10bd8b21 */
  goto L_10bd8b21;
L_10bd8b7c:;
  /* 10bd8b7c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10bd8b83 jmp 0x10bd8b8e */
  goto L_10bd8b8e;
L_10bd8b85:;
  /* 10bd8b85 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8b88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8b8b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10bd8b8e:;
  /* 10bd8b8e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8b95 jae 0x10bd8bae */
  if (!C.cf) goto L_10bd8bae;
  /* 10bd8b97 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8b9a mov dl, byte ptr [ecx + 0x10bffc81] */
  DL = (r8((uint32_t)(ECX + 0x10bffc81)));
  /* 10bd8ba0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10bd8ba3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bd8ba6 mov byte ptr [eax + 0x10bffc81], dl */
  w8((uint32_t)(EAX + 0x10bffc81), (DL));
  /* 10bd8bac jmp 0x10bd8b85 */
  goto L_10bd8b85;
L_10bd8bae:;
  /* 10bd8bae mov ecx, dword ptr [0x10bffae4] */
  ECX = (r32((uint32_t)(0x10bffae4)));
  /* 10bd8bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8bb5 call 0x10bd8cb0 */
  push32(0x10bd8bbau); f_10bd8cb0();
  /* 10bd8bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8bbd mov dword ptr [0x10bffd84], eax */
  w32((uint32_t)(0x10bffd84), (EAX));
  /* 10bd8bc2 mov dword ptr [0x10bffb6c], 1 */
  w32((uint32_t)(0x10bffb6c), (0x1u));
  /* 10bd8bcc jmp 0x10bd8bd8 */
  goto L_10bd8bd8;
L_10bd8bce:;
  /* 10bd8bce mov dword ptr [0x10bffb6c], 0 */
  w32((uint32_t)(0x10bffb6c), (0x0u));
L_10bd8bd8:;
  /* 10bd8bd8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bd8bdf jmp 0x10bd8bea */
  goto L_10bd8bea;
L_10bd8be1:;
  /* 10bd8be1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd8be4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8be7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10bd8bea:;
  /* 10bd8bea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8bee jae 0x10bd8bff */
  if (!C.cf) goto L_10bd8bff;
  /* 10bd8bf0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd8bf3 mov word ptr [eax*2 + 0x10bffb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10bffb60), (0x0u));
  /* 10bd8bfd jmp 0x10bd8be1 */
  goto L_10bd8be1;
L_10bd8bff:;
  /* 10bd8bff call 0x10bd8db0 */
  push32(0x10bd8c04u); f_10bd8db0();
  /* 10bd8c04 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bd8c06 call 0x10bd62d0 */
  push32(0x10bd8c0bu); f_10bd62d0();
  /* 10bd8c0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8c0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8c10 jmp 0x10bd8c40 */
  goto L_10bd8c40;
L_10bd8c12:;
  /* 10bd8c12 cmp dword ptr [0x10bfe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8c19 je 0x10bd8c33 */
  if (C.zf) goto L_10bd8c33;
  /* 10bd8c1b call 0x10bd8d30 */
  push32(0x10bd8c20u); f_10bd8d30();
  /* 10bd8c20 call 0x10bd8db0 */
  push32(0x10bd8c25u); f_10bd8db0();
  /* 10bd8c25 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bd8c27 call 0x10bd62d0 */
  push32(0x10bd8c2cu); f_10bd62d0();
  /* 10bd8c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd8c31 jmp 0x10bd8c40 */
  goto L_10bd8c40;
L_10bd8c33:;
  /* 10bd8c33 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bd8c35 call 0x10bd62d0 */
  push32(0x10bd8c3au); f_10bd62d0();
  /* 10bd8c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8c3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10bd8c40:;
  /* 10bd8c40 mov esp, ebp */
  ESP = (EBP);
  /* 10bd8c42 pop ebp */
  EBP = (pop32());
  /* 10bd8c43 ret  */
  ESPCHK(0x10bd8900u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10bd8c50 (89 bytes, 21 insns) */
void f_10bd8c50(void) {
  FTRACE(0x10bd8c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd8c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd8c51 mov ebp, esp */
  EBP = (ESP);
  /* 10bd8c53 mov dword ptr [0x10bfe600], 0 */
  w32((uint32_t)(0x10bfe600), (0x0u));
  /* 10bd8c5d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8c61 jne 0x10bd8c75 */
  if (!C.zf) goto L_10bd8c75;
  /* 10bd8c63 mov dword ptr [0x10bfe600], 1 */
  w32((uint32_t)(0x10bfe600), (0x1u));
  /* 10bd8c6d call dword ptr [0x10c002fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002fc))), 0x10bd8c73u);
  /* 10bd8c73 jmp 0x10bd8ca7 */
  goto L_10bd8ca7;
L_10bd8c75:;
  /* 10bd8c75 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8c79 jne 0x10bd8c8d */
  if (!C.zf) goto L_10bd8c8d;
  /* 10bd8c7b mov dword ptr [0x10bfe600], 1 */
  w32((uint32_t)(0x10bfe600), (0x1u));
  /* 10bd8c85 call dword ptr [0x10c002f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002f8))), 0x10bd8c8bu);
  /* 10bd8c8b jmp 0x10bd8ca7 */
  goto L_10bd8ca7;
L_10bd8c8d:;
  /* 10bd8c8d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8c91 jne 0x10bd8ca4 */
  if (!C.zf) goto L_10bd8ca4;
  /* 10bd8c93 mov dword ptr [0x10bfe600], 1 */
  w32((uint32_t)(0x10bfe600), (0x1u));
  /* 10bd8c9d mov eax, dword ptr [0x10bfe620] */
  EAX = (r32((uint32_t)(0x10bfe620)));
  /* 10bd8ca2 jmp 0x10bd8ca7 */
  goto L_10bd8ca7;
L_10bd8ca4:;
  /* 10bd8ca4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10bd8ca7:;
  /* 10bd8ca7 pop ebp */
  EBP = (pop32());
  /* 10bd8ca8 ret  */
  ESPCHK(0x10bd8c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x10bd8cb0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10bd8cb0(void) {
  FTRACE(0x10bd8cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd8cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd8cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd8cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd8cb7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd8cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8cbd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8cc3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd8cc6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8cca ja 0x10bd8cfa */
  if ((!C.cf&&!C.zf)) goto L_10bd8cfa;
  /* 10bd8ccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8ccf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd8cd1 mov dl, byte ptr [eax + 0x10bd8d14] */
  DL = (r8((uint32_t)(EAX + 0x10bd8d14)));
  /* 10bd8cd7 jmp dword ptr [edx*4 + 0x10bd8d00] */
  switch (EDX) {
    case 0: goto L_10bd8cde;
    case 1: goto L_10bd8ce5;
    case 2: goto L_10bd8cec;
    case 3: goto L_10bd8cf3;
    case 4: goto L_10bd8cfa;
    default: x86_unimpl("switch@0x10bd8cd7 out of table"); return;
  }
L_10bd8cde:;
  /* 10bd8cde mov eax, 0x411 */
  EAX = (0x411u);
  /* 10bd8ce3 jmp 0x10bd8cfc */
  goto L_10bd8cfc;
L_10bd8ce5:;
  /* 10bd8ce5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10bd8cea jmp 0x10bd8cfc */
  goto L_10bd8cfc;
L_10bd8cec:;
  /* 10bd8cec mov eax, 0x412 */
  EAX = (0x412u);
  /* 10bd8cf1 jmp 0x10bd8cfc */
  goto L_10bd8cfc;
L_10bd8cf3:;
  /* 10bd8cf3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10bd8cf8 jmp 0x10bd8cfc */
  goto L_10bd8cfc;
L_10bd8cfa:;
  /* 10bd8cfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd8cfc:;
  /* 10bd8cfc mov esp, ebp */
  ESP = (EBP);
  /* 10bd8cfe pop ebp */
  EBP = (pop32());
  /* 10bd8cff ret  */
  ESPCHK(0x10bd8cb0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10bd8d30 (116 bytes, 29 insns) */
void f_10bd8d30(void) {
  FTRACE(0x10bd8d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd8d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd8d31 mov ebp, esp */
  EBP = (ESP);
  /* 10bd8d33 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8d34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd8d3b jmp 0x10bd8d46 */
  goto L_10bd8d46;
L_10bd8d3d:;
  /* 10bd8d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8d40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8d43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd8d46:;
  /* 10bd8d46 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8d4d jge 0x10bd8d5b */
  if ((C.sf==C.of)) goto L_10bd8d5b;
  /* 10bd8d4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8d52 mov byte ptr [ecx + 0x10bffc80], 0 */
  w8((uint32_t)(ECX + 0x10bffc80), (0x0u));
  /* 10bd8d59 jmp 0x10bd8d3d */
  goto L_10bd8d3d;
L_10bd8d5b:;
  /* 10bd8d5b mov dword ptr [0x10bffae4], 0 */
  w32((uint32_t)(0x10bffae4), (0x0u));
  /* 10bd8d65 mov dword ptr [0x10bffb6c], 0 */
  w32((uint32_t)(0x10bffb6c), (0x0u));
  /* 10bd8d6f mov dword ptr [0x10bffd84], 0 */
  w32((uint32_t)(0x10bffd84), (0x0u));
  /* 10bd8d79 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd8d80 jmp 0x10bd8d8b */
  goto L_10bd8d8b;
L_10bd8d82:;
  /* 10bd8d82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8d85 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8d88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd8d8b:;
  /* 10bd8d8b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8d8f jge 0x10bd8da0 */
  if ((C.sf==C.of)) goto L_10bd8da0;
  /* 10bd8d91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8d94 mov word ptr [eax*2 + 0x10bffb60], 0 */
  w16((uint32_t)(EAX*2 + 0x10bffb60), (0x0u));
  /* 10bd8d9e jmp 0x10bd8d82 */
  goto L_10bd8d82;
L_10bd8da0:;
  /* 10bd8da0 mov esp, ebp */
  ESP = (EBP);
  /* 10bd8da2 pop ebp */
  EBP = (pop32());
  /* 10bd8da3 ret  */
  ESPCHK(0x10bd8d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008db0 @ 0x10bd8db0 (770 bytes, 175 insns) */
void f_10bd8db0(void) {
  FTRACE(0x10bd8db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd8db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd8db1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd8db3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd8db9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10bd8dbf push eax */
  push32((uint32_t)(EAX));
  /* 10bd8dc0 mov ecx, dword ptr [0x10bffae4] */
  ECX = (r32((uint32_t)(0x10bffae4)));
  /* 10bd8dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8dc7 call dword ptr [0x10c002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002b4))), 0x10bd8dcdu);
  /* 10bd8dcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8dd0 jne 0x10bd8fe9 */
  if (!C.zf) goto L_10bd8fe9;
  /* 10bd8dd6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10bd8de0 jmp 0x10bd8df1 */
  goto L_10bd8df1;
L_10bd8de2:;
  /* 10bd8de2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8de8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8deb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10bd8df1:;
  /* 10bd8df1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8dfb jae 0x10bd8e12 */
  if (!C.cf) goto L_10bd8e12;
  /* 10bd8dfd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8e03 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10bd8e09 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10bd8e10 jmp 0x10bd8de2 */
  goto L_10bd8de2;
L_10bd8e12:;
  /* 10bd8e12 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10bd8e19 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10bd8e1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd8e22 jmp 0x10bd8e2d */
  goto L_10bd8e2d;
L_10bd8e24:;
  /* 10bd8e24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8e27 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8e2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd8e2d:;
  /* 10bd8e2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8e30 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd8e32 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bd8e34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd8e36 je 0x10bd8e78 */
  if (C.zf) goto L_10bd8e78;
  /* 10bd8e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8e3b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8e3d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bd8e3f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10bd8e45 jmp 0x10bd8e56 */
  goto L_10bd8e56;
L_10bd8e47:;
  /* 10bd8e47 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8e4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8e50 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10bd8e56:;
  /* 10bd8e56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd8e59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8e5b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10bd8e5e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8e64 ja 0x10bd8e76 */
  if ((!C.cf&&!C.zf)) goto L_10bd8e76;
  /* 10bd8e66 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8e6c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10bd8e74 jmp 0x10bd8e47 */
  goto L_10bd8e47;
L_10bd8e76:;
  /* 10bd8e76 jmp 0x10bd8e24 */
  goto L_10bd8e24;
L_10bd8e78:;
  /* 10bd8e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd8e7a mov eax, dword ptr [0x10bffd84] */
  EAX = (r32((uint32_t)(0x10bffd84)));
  /* 10bd8e7f push eax */
  push32((uint32_t)(EAX));
  /* 10bd8e80 mov ecx, dword ptr [0x10bffae4] */
  ECX = (r32((uint32_t)(0x10bffae4)));
  /* 10bd8e86 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8e87 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10bd8e8d push edx */
  push32((uint32_t)(EDX));
  /* 10bd8e8e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bd8e93 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10bd8e99 push eax */
  push32((uint32_t)(EAX));
  /* 10bd8e9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bd8e9c call 0x10bdaa60 */
  push32(0x10bd8ea1u); f_10bdaa60();
  /* 10bd8ea1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd8ea6 mov ecx, dword ptr [0x10bffae4] */
  ECX = (r32((uint32_t)(0x10bffae4)));
  /* 10bd8eac push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8ead push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bd8eb2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10bd8eb8 push edx */
  push32((uint32_t)(EDX));
  /* 10bd8eb9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bd8ebe lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10bd8ec4 push eax */
  push32((uint32_t)(EAX));
  /* 10bd8ec5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bd8eca mov ecx, dword ptr [0x10bffd84] */
  ECX = (r32((uint32_t)(0x10bffd84)));
  /* 10bd8ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8ed1 call 0x10bdac20 */
  push32(0x10bd8ed6u); f_10bdac20();
  /* 10bd8ed6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd8edb mov edx, dword ptr [0x10bffae4] */
  EDX = (r32((uint32_t)(0x10bffae4)));
  /* 10bd8ee1 push edx */
  push32((uint32_t)(EDX));
  /* 10bd8ee2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bd8ee7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10bd8eed push eax */
  push32((uint32_t)(EAX));
  /* 10bd8eee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bd8ef3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10bd8ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd8efa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10bd8eff mov edx, dword ptr [0x10bffd84] */
  EDX = (r32((uint32_t)(0x10bffd84)));
  /* 10bd8f05 push edx */
  push32((uint32_t)(EDX));
  /* 10bd8f06 call 0x10bdac20 */
  push32(0x10bd8f0bu); f_10bdac20();
  /* 10bd8f0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8f0e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10bd8f18 jmp 0x10bd8f29 */
  goto L_10bd8f29;
L_10bd8f1a:;
  /* 10bd8f1a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8f20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8f23 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10bd8f29:;
  /* 10bd8f29 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd8f33 jae 0x10bd8fe4 */
  if (!C.cf) goto L_10bd8fe4;
  /* 10bd8f39 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8f3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd8f41 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10bd8f49 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd8f4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd8f4e je 0x10bd8f86 */
  if (C.zf) goto L_10bd8f86;
  /* 10bd8f50 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8f56 mov cl, byte ptr [eax + 0x10bffc81] */
  CL = (r8((uint32_t)(EAX + 0x10bffc81)));
  /* 10bd8f5c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10bd8f5f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8f65 mov byte ptr [edx + 0x10bffc81], cl */
  w8((uint32_t)(EDX + 0x10bffc81), (CL));
  /* 10bd8f6b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8f71 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8f77 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10bd8f7e mov byte ptr [eax + 0x10bffb80], dl */
  w8((uint32_t)(EAX + 0x10bffb80), (DL));
  /* 10bd8f84 jmp 0x10bd8fdf */
  goto L_10bd8fdf;
L_10bd8f86:;
  /* 10bd8f86 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8f8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8f8e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10bd8f96 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd8f99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd8f9b je 0x10bd8fd2 */
  if (C.zf) goto L_10bd8fd2;
  /* 10bd8f9d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8fa3 mov al, byte ptr [edx + 0x10bffc81] */
  AL = (r8((uint32_t)(EDX + 0x10bffc81)));
  /* 10bd8fa9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10bd8fab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8fb1 mov byte ptr [ecx + 0x10bffc81], al */
  w8((uint32_t)(ECX + 0x10bffc81), (AL));
  /* 10bd8fb7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8fbd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8fc3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10bd8fca mov byte ptr [edx + 0x10bffb80], cl */
  w8((uint32_t)(EDX + 0x10bffb80), (CL));
  /* 10bd8fd0 jmp 0x10bd8fdf */
  goto L_10bd8fdf;
L_10bd8fd2:;
  /* 10bd8fd2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8fd8 mov byte ptr [edx + 0x10bffb80], 0 */
  w8((uint32_t)(EDX + 0x10bffb80), (0x0u));
L_10bd8fdf:;
  /* 10bd8fdf jmp 0x10bd8f1a */
  goto L_10bd8f1a;
L_10bd8fe4:;
  /* 10bd8fe4 jmp 0x10bd90ae */
  goto L_10bd90ae;
L_10bd8fe9:;
  /* 10bd8fe9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10bd8ff3 jmp 0x10bd9004 */
  goto L_10bd9004;
L_10bd8ff5:;
  /* 10bd8ff5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd8ffb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd8ffe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10bd9004:;
  /* 10bd9004 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd900e jae 0x10bd90ae */
  if (!C.cf) goto L_10bd90ae;
  /* 10bd9014 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd901b jb 0x10bd9058 */
  if (C.cf) goto L_10bd9058;
  /* 10bd901d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9024 ja 0x10bd9058 */
  if ((!C.cf&&!C.zf)) goto L_10bd9058;
  /* 10bd9026 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd902c mov dl, byte ptr [ecx + 0x10bffc81] */
  DL = (r8((uint32_t)(ECX + 0x10bffc81)));
  /* 10bd9032 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10bd9035 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd903b mov byte ptr [eax + 0x10bffc81], dl */
  w8((uint32_t)(EAX + 0x10bffc81), (DL));
  /* 10bd9041 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd9047 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd904a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd9050 mov byte ptr [edx + 0x10bffb80], cl */
  w8((uint32_t)(EDX + 0x10bffb80), (CL));
  /* 10bd9056 jmp 0x10bd90a9 */
  goto L_10bd90a9;
L_10bd9058:;
  /* 10bd9058 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd905f jb 0x10bd909c */
  if (C.cf) goto L_10bd909c;
  /* 10bd9061 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9068 ja 0x10bd909c */
  if ((!C.cf&&!C.zf)) goto L_10bd909c;
  /* 10bd906a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd9070 mov cl, byte ptr [eax + 0x10bffc81] */
  CL = (r8((uint32_t)(EAX + 0x10bffc81)));
  /* 10bd9076 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10bd9079 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd907f mov byte ptr [edx + 0x10bffc81], cl */
  w8((uint32_t)(EDX + 0x10bffc81), (CL));
  /* 10bd9085 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd908b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd908e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd9094 mov byte ptr [ecx + 0x10bffb80], al */
  w8((uint32_t)(ECX + 0x10bffb80), (AL));
  /* 10bd909a jmp 0x10bd90a9 */
  goto L_10bd90a9;
L_10bd909c:;
  /* 10bd909c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10bd90a2 mov byte ptr [edx + 0x10bffb80], 0 */
  w8((uint32_t)(EDX + 0x10bffb80), (0x0u));
L_10bd90a9:;
  /* 10bd90a9 jmp 0x10bd8ff5 */
  goto L_10bd8ff5;
L_10bd90ae:;
  /* 10bd90ae mov esp, ebp */
  ESP = (EBP);
  /* 10bd90b0 pop ebp */
  EBP = (pop32());
  /* 10bd90b1 ret  */
  ESPCHK(0x10bd8db0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c0 @ 0x10bd90c0 (23 bytes, 9 insns) */
void f_10bd90c0(void) {
  FTRACE(0x10bd90c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd90c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd90c1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd90c3 cmp dword ptr [0x10bffb6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bffb6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd90ca je 0x10bd90d3 */
  if (C.zf) goto L_10bd90d3;
  /* 10bd90cc mov eax, dword ptr [0x10bffae4] */
  EAX = (r32((uint32_t)(0x10bffae4)));
  /* 10bd90d1 jmp 0x10bd90d5 */
  goto L_10bd90d5;
L_10bd90d3:;
  /* 10bd90d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bd90d5:;
  /* 10bd90d5 pop ebp */
  EBP = (pop32());
  /* 10bd90d6 ret  */
  ESPCHK(0x10bd90c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090e0 @ 0x10bd90e0 (34 bytes, 10 insns) */
void f_10bd90e0(void) {
  FTRACE(0x10bd90e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd90e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd90e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd90e3 cmp dword ptr [0x10bfff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd90ea jne 0x10bd9100 */
  if (!C.zf) goto L_10bd9100;
  /* 10bd90ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10bd90ee call 0x10bd8900 */
  push32(0x10bd90f3u); f_10bd8900();
  /* 10bd90f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd90f6 mov dword ptr [0x10bfff30], 1 */
  w32((uint32_t)(0x10bfff30), (0x1u));
L_10bd9100:;
  /* 10bd9100 pop ebp */
  EBP = (pop32());
  /* 10bd9101 ret  */
  ESPCHK(0x10bd90e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x10bd9110 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10bd9110(void) {
  FTRACE(0x10bd9110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd9110 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd9111 mov ebp, esp */
  EBP = (ESP);
  /* 10bd9113 push edi */
  push32((uint32_t)(EDI));
  /* 10bd9114 push esi */
  push32((uint32_t)(ESI));
  /* 10bd9115 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd9118 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd911b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd911e mov eax, ecx */
  EAX = (ECX);
  /* 10bd9120 mov edx, ecx */
  EDX = (ECX);
  /* 10bd9122 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9124 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9126 jbe 0x10bd9130 */
  if ((C.cf||C.zf)) goto L_10bd9130;
  /* 10bd9128 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd912a jb 0x10bd92a8 */
  if (C.cf) goto L_10bd92a8;
L_10bd9130:;
  /* 10bd9130 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bd9136 jne 0x10bd914c */
  if (!C.zf) goto L_10bd914c;
  /* 10bd9138 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd913b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd913e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9141 jb 0x10bd916c */
  if (C.cf) goto L_10bd916c;
  /* 10bd9143 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bd9145 jmp dword ptr [edx*4 + 0x10bd9258] */
  switch (EDX) {
    case 0: goto L_10bd9268;
    case 1: goto L_10bd9270;
    case 2: goto L_10bd927c;
    case 3: goto L_10bd9290;
    default: x86_unimpl("switch@0x10bd9145 out of table"); return;
  }
L_10bd914c:;
  /* 10bd914c mov eax, edi */
  EAX = (EDI);
  /* 10bd914e mov edx, 3 */
  EDX = (0x3u);
  /* 10bd9153 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9156 jb 0x10bd9164 */
  if (C.cf) goto L_10bd9164;
  /* 10bd9158 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd915b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd915d jmp dword ptr [eax*4 + 0x10bd9170] */
  switch (EAX) {
    case 1: goto L_10bd9180;
    case 2: goto L_10bd91ac;
    case 3: goto L_10bd91d0;
    default: x86_unimpl("switch@0x10bd915d out of table"); return;
  }
L_10bd9164:;
  /* 10bd9164 jmp dword ptr [ecx*4 + 0x10bd9268] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10bd9268)))); return;
  /* 10bd916b nop  */
  /* nop */
L_10bd916c:;
  /* 10bd916c jmp dword ptr [ecx*4 + 0x10bd91ec] */
  switch (ECX) {
    case 0: goto L_10bd924f;
    case 1: goto L_10bd923c;
    case 2: goto L_10bd9234;
    case 3: goto L_10bd922c;
    case 4: goto L_10bd9224;
    case 5: goto L_10bd921c;
    case 6: goto L_10bd9214;
    case 7: goto L_10bd920c;
    default: x86_unimpl("switch@0x10bd916c out of table"); return;
  }
  /* 10bd9173 nop  */
  /* nop */
L_10bd9180:;
  /* 10bd9180 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9182 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bd9184 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd9186 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bd9189 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bd918c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bd918f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd9192 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bd9195 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9198 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd919b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd919e jb 0x10bd916c */
  if (C.cf) goto L_10bd916c;
  /* 10bd91a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bd91a2 jmp dword ptr [edx*4 + 0x10bd9258] */
  switch (EDX) {
    case 0: goto L_10bd9268;
    case 1: goto L_10bd9270;
    case 2: goto L_10bd927c;
    case 3: goto L_10bd9290;
    default: x86_unimpl("switch@0x10bd91a2 out of table"); return;
  }
  /* 10bd91a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bd91ac:;
  /* 10bd91ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd91ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bd91b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd91b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bd91b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd91b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bd91bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd91be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd91c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd91c4 jb 0x10bd916c */
  if (C.cf) goto L_10bd916c;
  /* 10bd91c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bd91c8 jmp dword ptr [edx*4 + 0x10bd9258] */
  switch (EDX) {
    case 0: goto L_10bd9268;
    case 1: goto L_10bd9270;
    case 2: goto L_10bd927c;
    case 3: goto L_10bd9290;
    default: x86_unimpl("switch@0x10bd91c8 out of table"); return;
  }
  /* 10bd91cf nop  */
  /* nop */
L_10bd91d0:;
  /* 10bd91d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd91d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bd91d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd91d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bd91d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd91da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bd91db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd91de jb 0x10bd916c */
  if (C.cf) goto L_10bd916c;
  /* 10bd91e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bd91e2 jmp dword ptr [edx*4 + 0x10bd9258] */
  switch (EDX) {
    case 0: goto L_10bd9268;
    case 1: goto L_10bd9270;
    case 2: goto L_10bd927c;
    case 3: goto L_10bd9290;
    default: x86_unimpl("switch@0x10bd91e2 out of table"); return;
  }
  /* 10bd91e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bd920c:;
  /* 10bd920c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10bd9210 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10bd9214:;
  /* 10bd9214 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10bd9218 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10bd921c:;
  /* 10bd921c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10bd9220 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10bd9224:;
  /* 10bd9224 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10bd9228 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10bd922c:;
  /* 10bd922c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10bd9230 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10bd9234:;
  /* 10bd9234 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10bd9238 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10bd923c:;
  /* 10bd923c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10bd9240 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10bd9244 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bd924b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd924d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bd924f:;
  /* 10bd924f jmp dword ptr [edx*4 + 0x10bd9258] */
  switch (EDX) {
    case 0: goto L_10bd9268;
    case 1: goto L_10bd9270;
    case 2: goto L_10bd927c;
    case 3: goto L_10bd9290;
    default: x86_unimpl("switch@0x10bd924f out of table"); return;
  }
  /* 10bd9256 mov edi, edi */
  EDI = (EDI);
L_10bd9268:;
  /* 10bd9268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd926b pop esi */
  ESI = (pop32());
  /* 10bd926c pop edi */
  EDI = (pop32());
  /* 10bd926d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bd926e ret  */
  ESPCHK(0x10bd9110u, _esp0);
  ESP += 4; return;
  /* 10bd926f nop  */
  /* nop */
L_10bd9270:;
  /* 10bd9270 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bd9272 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd9274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd9277 pop esi */
  ESI = (pop32());
  /* 10bd9278 pop edi */
  EDI = (pop32());
  /* 10bd9279 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bd927a ret  */
  ESPCHK(0x10bd9110u, _esp0);
  ESP += 4; return;
  /* 10bd927b nop  */
  /* nop */
L_10bd927c:;
  /* 10bd927c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bd927e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd9280 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bd9283 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bd9286 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd9289 pop esi */
  ESI = (pop32());
  /* 10bd928a pop edi */
  EDI = (pop32());
  /* 10bd928b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bd928c ret  */
  ESPCHK(0x10bd9110u, _esp0);
  ESP += 4; return;
  /* 10bd928d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bd9290:;
  /* 10bd9290 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bd9292 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bd9294 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bd9297 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bd929a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bd929d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bd92a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd92a3 pop esi */
  ESI = (pop32());
  /* 10bd92a4 pop edi */
  EDI = (pop32());
  /* 10bd92a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bd92a6 ret  */
  ESPCHK(0x10bd9110u, _esp0);
  ESP += 4; return;
  /* 10bd92a7 nop  */
  /* nop */
L_10bd92a8:;
  /* 10bd92a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10bd92ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10bd92b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bd92b6 jne 0x10bd92dc */
  if (!C.zf) goto L_10bd92dc;
  /* 10bd92b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd92bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd92be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd92c1 jb 0x10bd92d0 */
  if (C.cf) goto L_10bd92d0;
  /* 10bd92c3 std  */
  C.df=1;
  /* 10bd92c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bd92c6 cld  */
  C.df=0;
  /* 10bd92c7 jmp dword ptr [edx*4 + 0x10bd93f0] */
  switch (EDX) {
    case 0: goto L_10bd9400;
    case 1: goto L_10bd9408;
    case 2: goto L_10bd9418;
    case 3: goto L_10bd942c;
    default: x86_unimpl("switch@0x10bd92c7 out of table"); return;
  }
  /* 10bd92ce mov edi, edi */
  EDI = (EDI);
L_10bd92d0:;
  /* 10bd92d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd92d2 jmp dword ptr [ecx*4 + 0x10bd93a0] */
  switch (ECX) {
    case 0: goto L_10bd93e7;
    default: x86_unimpl("switch@0x10bd92d2 out of table"); return;
  }
  /* 10bd92d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bd92dc:;
  /* 10bd92dc mov eax, edi */
  EAX = (EDI);
  /* 10bd92de mov edx, 3 */
  EDX = (0x3u);
  /* 10bd92e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd92e6 jb 0x10bd92f4 */
  if (C.cf) goto L_10bd92f4;
  /* 10bd92e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd92eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd92ed jmp dword ptr [eax*4 + 0x10bd92f8] */
  switch (EAX) {
    case 1: goto L_10bd9308;
    case 2: goto L_10bd9328;
    case 3: goto L_10bd9350;
    default: x86_unimpl("switch@0x10bd92ed out of table"); return;
  }
L_10bd92f4:;
  /* 10bd92f4 jmp dword ptr [ecx*4 + 0x10bd93f0] */
  switch (ECX) {
    case 0: goto L_10bd9400;
    case 1: goto L_10bd9408;
    case 2: goto L_10bd9418;
    case 3: goto L_10bd942c;
    default: x86_unimpl("switch@0x10bd92f4 out of table"); return;
  }
  /* 10bd92fb nop  */
  /* nop */
L_10bd9308:;
  /* 10bd9308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bd930b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd930d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bd9310 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10bd9311 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd9314 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bd9315 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9318 jb 0x10bd92d0 */
  if (C.cf) goto L_10bd92d0;
  /* 10bd931a std  */
  C.df=1;
  /* 10bd931b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bd931d cld  */
  C.df=0;
  /* 10bd931e jmp dword ptr [edx*4 + 0x10bd93f0] */
  switch (EDX) {
    case 0: goto L_10bd9400;
    case 1: goto L_10bd9408;
    case 2: goto L_10bd9418;
    case 3: goto L_10bd942c;
    default: x86_unimpl("switch@0x10bd931e out of table"); return;
  }
  /* 10bd9325 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bd9328:;
  /* 10bd9328 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bd932b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd932d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bd9330 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bd9333 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd9336 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bd9339 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd933c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd933f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9342 jb 0x10bd92d0 */
  if (C.cf) goto L_10bd92d0;
  /* 10bd9344 std  */
  C.df=1;
  /* 10bd9345 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bd9347 cld  */
  C.df=0;
  /* 10bd9348 jmp dword ptr [edx*4 + 0x10bd93f0] */
  switch (EDX) {
    case 0: goto L_10bd9400;
    case 1: goto L_10bd9408;
    case 2: goto L_10bd9418;
    case 3: goto L_10bd942c;
    default: x86_unimpl("switch@0x10bd9348 out of table"); return;
  }
  /* 10bd934f nop  */
  /* nop */
L_10bd9350:;
  /* 10bd9350 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bd9353 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9355 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bd9358 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bd935b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bd935e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bd9361 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bd9364 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bd9367 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd936a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd936d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9370 jb 0x10bd92d0 */
  if (C.cf) goto L_10bd92d0;
  /* 10bd9376 std  */
  C.df=1;
  /* 10bd9377 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bd9379 cld  */
  C.df=0;
  /* 10bd937a jmp dword ptr [edx*4 + 0x10bd93f0] */
  switch (EDX) {
    case 0: goto L_10bd9400;
    case 1: goto L_10bd9408;
    case 2: goto L_10bd9418;
    case 3: goto L_10bd942c;
    default: x86_unimpl("switch@0x10bd937a out of table"); return;
  }
  /* 10bd9381 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10bd9384 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10bd9385 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 10bd9386 mov ebp, 0xbd93ac10 */
  EBP = (0xbd93ac10u);
  /* 10bd938b adc byte ptr [ebx + edx*4 - 0x6c43ef43], dh */
  { uint32_t _a=(r8((uint32_t)(EBX + EDX*4 + -0x6c43ef43))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDX*4 + -0x6c43ef43), (_r)); fl_add(_a,_b,_r,8); }
  /* 10bd9392 mov ebp, 0xbd93c410 */
  EBP = (0xbd93c410u);
  /* 10bd9397 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd9399 xchg ebx, eax */
  { uint32_t _t=(EBX); EBX = (EAX); EAX = (_t); }
  /* 10bd939a mov ebp, 0xbd93d410 */
  EBP = (0xbd93d410u);
  /* 10bd93a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10bd93a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10bd93ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10bd93b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10bd93b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10bd93b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10bd93bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10bd93c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10bd93c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10bd93c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10bd93cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10bd93d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10bd93d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10bd93d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10bd93dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bd93e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd93e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bd93e7:;
  /* 10bd93e7 jmp dword ptr [edx*4 + 0x10bd93f0] */
  switch (EDX) {
    case 0: goto L_10bd9400;
    case 1: goto L_10bd9408;
    case 2: goto L_10bd9418;
    case 3: goto L_10bd942c;
    default: x86_unimpl("switch@0x10bd93e7 out of table"); return;
  }
  /* 10bd93ee mov edi, edi */
  EDI = (EDI);
L_10bd9400:;
  /* 10bd9400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd9403 pop esi */
  ESI = (pop32());
  /* 10bd9404 pop edi */
  EDI = (pop32());
  /* 10bd9405 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bd9406 ret  */
  ESPCHK(0x10bd9110u, _esp0);
  ESP += 4; return;
  /* 10bd9407 nop  */
  /* nop */
L_10bd9408:;
  /* 10bd9408 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bd940b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bd940e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd9411 pop esi */
  ESI = (pop32());
  /* 10bd9412 pop edi */
  EDI = (pop32());
  /* 10bd9413 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bd9414 ret  */
  ESPCHK(0x10bd9110u, _esp0);
  ESP += 4; return;
  /* 10bd9415 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bd9418:;
  /* 10bd9418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bd941b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bd941e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bd9421 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bd9424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd9427 pop esi */
  ESI = (pop32());
  /* 10bd9428 pop edi */
  EDI = (pop32());
  /* 10bd9429 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bd942a ret  */
  ESPCHK(0x10bd9110u, _esp0);
  ESP += 4; return;
  /* 10bd942b nop  */
  /* nop */
L_10bd942c:;
  /* 10bd942c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bd942f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bd9432 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bd9435 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bd9438 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bd943b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bd943e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd9441 pop esi */
  ESI = (pop32());
  /* 10bd9442 pop edi */
  EDI = (pop32());
  /* 10bd9443 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bd9444 ret  */
  ESPCHK(0x10bd9110u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10bd9450 (104 bytes, 43 insns) */
void f_10bd9450(void) {
  FTRACE(0x10bd9450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd9450 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd9451 push esi */
  push32((uint32_t)(ESI));
  /* 10bd9452 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10bd9456 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9458 jne 0x10bd9472 */
  if (!C.zf) goto L_10bd9472;
  /* 10bd945a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10bd945e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bd9462 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9464 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd9466 mov ebx, eax */
  EBX = (EAX);
  /* 10bd9468 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bd946c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd946e mov edx, ebx */
  EDX = (EBX);
  /* 10bd9470 jmp 0x10bd94b3 */
  goto L_10bd94b3;
L_10bd9472:;
  /* 10bd9472 mov ecx, eax */
  ECX = (EAX);
  /* 10bd9474 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10bd9478 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bd947c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10bd9480:;
  /* 10bd9480 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10bd9482 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10bd9484 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10bd9486 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10bd9488 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd948a jne 0x10bd9480 */
  if (!C.zf) goto L_10bd9480;
  /* 10bd948c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd948e mov esi, eax */
  ESI = (EAX);
  /* 10bd9490 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10bd9494 mov ecx, eax */
  ECX = (EAX);
  /* 10bd9496 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10bd949a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10bd949c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd949e jb 0x10bd94ae */
  if (C.cf) goto L_10bd94ae;
  /* 10bd94a0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd94a4 ja 0x10bd94ae */
  if ((!C.cf&&!C.zf)) goto L_10bd94ae;
  /* 10bd94a6 jb 0x10bd94af */
  if (C.cf) goto L_10bd94af;
  /* 10bd94a8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd94ac jbe 0x10bd94af */
  if ((C.cf||C.zf)) goto L_10bd94af;
L_10bd94ae:;
  /* 10bd94ae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10bd94af:;
  /* 10bd94af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd94b1 mov eax, esi */
  EAX = (ESI);
L_10bd94b3:;
  /* 10bd94b3 pop esi */
  ESI = (pop32());
  /* 10bd94b4 pop ebx */
  EBX = (pop32());
  /* 10bd94b5 ret 0x10 */
  ESPCHK(0x10bd9450u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10bd94c0 (117 bytes, 44 insns) */
void f_10bd94c0(void) {
  FTRACE(0x10bd94c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd94c0 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd94c1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10bd94c5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd94c7 jne 0x10bd94e1 */
  if (!C.zf) goto L_10bd94e1;
  /* 10bd94c9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bd94cd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bd94d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd94d3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd94d5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bd94d9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd94db mov eax, edx */
  EAX = (EDX);
  /* 10bd94dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bd94df jmp 0x10bd9531 */
  goto L_10bd9531;
L_10bd94e1:;
  /* 10bd94e1 mov ecx, eax */
  ECX = (EAX);
  /* 10bd94e3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bd94e7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10bd94eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10bd94ef:;
  /* 10bd94ef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10bd94f1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10bd94f3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10bd94f5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10bd94f7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd94f9 jne 0x10bd94ef */
  if (!C.zf) goto L_10bd94ef;
  /* 10bd94fb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bd94fd mov ecx, eax */
  ECX = (EAX);
  /* 10bd94ff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10bd9503 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10bd9504 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10bd9508 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd950a jb 0x10bd951a */
  if (C.cf) goto L_10bd951a;
  /* 10bd950c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9510 ja 0x10bd951a */
  if ((!C.cf&&!C.zf)) goto L_10bd951a;
  /* 10bd9512 jb 0x10bd9522 */
  if (C.cf) goto L_10bd9522;
  /* 10bd9514 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9518 jbe 0x10bd9522 */
  if ((C.cf||C.zf)) goto L_10bd9522;
L_10bd951a:;
  /* 10bd951a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd951e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10bd9522:;
  /* 10bd9522 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9526 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd952a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd952c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd952e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10bd9531:;
  /* 10bd9531 pop ebx */
  EBX = (pop32());
  /* 10bd9532 ret 0x10 */
  ESPCHK(0x10bd94c0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009540 @ 0x10bd9540 (628 bytes, 214 insns) */
void f_10bd9540(void) {
  FTRACE(0x10bd9540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd9540 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd9541 mov ebp, esp */
  EBP = (ESP);
  /* 10bd9543 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9546 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd9547 push esi */
  push32((uint32_t)(ESI));
  /* 10bd9548 push edi */
  push32((uint32_t)(EDI));
L_10bd9549:;
  /* 10bd9549 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd954d jne 0x10bd956d */
  if (!C.zf) goto L_10bd956d;
  /* 10bd954f push 0x10bf9e98 */
  push32((uint32_t)(0x10bf9e98u));
  /* 10bd9554 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd9556 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10bd9558 push 0x10bf9e8c */
  push32((uint32_t)(0x10bf9e8cu));
  /* 10bd955d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd955f call 0x10bd18f0 */
  push32(0x10bd9564u); f_10bd18f0();
  /* 10bd9564 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9567 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd956a jne 0x10bd956d */
  if (!C.zf) goto L_10bd956d;
  /* 10bd956c int3  */
  x86_unimpl("int3 @ 0x10bd956c");
L_10bd956d:;
  /* 10bd956d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd956f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9571 jne 0x10bd9549 */
  if (!C.zf) goto L_10bd9549;
  /* 10bd9573 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd9576 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bd9579 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd957c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bd957f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd9582 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9585 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd9588 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd958e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd9590 je 0x10bd959f */
  if (C.zf) goto L_10bd959f;
  /* 10bd9592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9595 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bd9598 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd959b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd959d je 0x10bd95b5 */
  if (C.zf) goto L_10bd95b5;
L_10bd959f:;
  /* 10bd959f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bd95a5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10bd95a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95aa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10bd95ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd95b0 jmp 0x10bd97ad */
  goto L_10bd97ad;
L_10bd95b5:;
  /* 10bd95b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95b8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bd95bb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd95be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd95c0 je 0x10bd960c */
  if (C.zf) goto L_10bd960c;
  /* 10bd95c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95c5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10bd95cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95cf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bd95d2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd95d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd95d7 je 0x10bd95f5 */
  if (C.zf) goto L_10bd95f5;
  /* 10bd95d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95df mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bd95e2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bd95e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd95ea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd95ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95f0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10bd95f3 jmp 0x10bd960c */
  goto L_10bd960c;
L_10bd95f5:;
  /* 10bd95f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd95f8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd95fb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd95fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9601 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10bd9604 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9607 jmp 0x10bd97ad */
  goto L_10bd97ad;
L_10bd960c:;
  /* 10bd960c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd960f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd9612 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9615 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9618 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10bd961b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd961e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd9621 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9624 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9627 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10bd962a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd962d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10bd9634 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd963b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd963e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10bd9641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9644 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bd9647 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd964d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd964f jne 0x10bd967f */
  if (!C.zf) goto L_10bd967f;
  /* 10bd9651 cmp dword ptr [ebp - 8], 0x10bfd140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10bfd140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9658 je 0x10bd9663 */
  if (C.zf) goto L_10bd9663;
  /* 10bd965a cmp dword ptr [ebp - 8], 0x10bfd160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10bfd160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9661 jne 0x10bd9673 */
  if (!C.zf) goto L_10bd9673;
L_10bd9663:;
  /* 10bd9663 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd9666 push edx */
  push32((uint32_t)(EDX));
  /* 10bd9667 call 0x10bdb4b0 */
  push32(0x10bd966cu); f_10bdb4b0();
  /* 10bd966c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd966f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9671 jne 0x10bd967f */
  if (!C.zf) goto L_10bd967f;
L_10bd9673:;
  /* 10bd9673 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9676 push eax */
  push32((uint32_t)(EAX));
  /* 10bd9677 call 0x10bdb3e0 */
  push32(0x10bd967cu); f_10bdb3e0();
  /* 10bd967c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd967f:;
  /* 10bd967f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9682 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bd9685 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd968b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd968d je 0x10bd976b */
  if (C.zf) goto L_10bd976b;
L_10bd9693:;
  /* 10bd9693 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9696 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9699 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10bd969b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd969e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd96a0 jge 0x10bd96c3 */
  if ((C.sf==C.of)) goto L_10bd96c3;
  /* 10bd96a2 push 0x10bf9e4c */
  push32((uint32_t)(0x10bf9e4cu));
  /* 10bd96a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd96a9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10bd96ae push 0x10bf9e8c */
  push32((uint32_t)(0x10bf9e8cu));
  /* 10bd96b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd96b5 call 0x10bd18f0 */
  push32(0x10bd96bau); f_10bd18f0();
  /* 10bd96ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd96bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd96c0 jne 0x10bd96c3 */
  if (!C.zf) goto L_10bd96c3;
  /* 10bd96c2 int3  */
  x86_unimpl("int3 @ 0x10bd96c2");
L_10bd96c3:;
  /* 10bd96c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd96c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd96c7 jne 0x10bd9693 */
  if (!C.zf) goto L_10bd9693;
  /* 10bd96c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd96cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd96cf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bd96d1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd96d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd96d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd96da mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bd96dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd96e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd96e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bd96e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd96e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bd96eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd96ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd96f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10bd96f4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd96f8 jle 0x10bd9716 */
  if ((C.zf||C.sf!=C.of)) goto L_10bd9716;
  /* 10bd96fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd96fd push ecx */
  push32((uint32_t)(ECX));
  /* 10bd96fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9701 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bd9704 push eax */
  push32((uint32_t)(EAX));
  /* 10bd9705 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd9708 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9709 call 0x10bdb0d0 */
  push32(0x10bd970eu); f_10bdb0d0();
  /* 10bd970e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9711 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bd9714 jmp 0x10bd975e */
  goto L_10bd975e;
L_10bd9716:;
  /* 10bd9716 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd971a je 0x10bd9739 */
  if (C.zf) goto L_10bd9739;
  /* 10bd971c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd971f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10bd9722 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd9725 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9728 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd972b mov ecx, dword ptr [edx*4 + 0x10bffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bd9732 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9734 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bd9737 jmp 0x10bd9740 */
  goto L_10bd9740;
L_10bd9739:;
  /* 10bd9739 mov dword ptr [ebp - 0x14], 0x10bfca60 */
  w32((uint32_t)(EBP + -0x14), (0x10bfca60u));
L_10bd9740:;
  /* 10bd9740 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bd9743 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10bd9747 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd974a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd974c je 0x10bd975e */
  if (C.zf) goto L_10bd975e;
  /* 10bd974e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd9750 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd9752 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd9755 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9756 call 0x10bdaf80 */
  push32(0x10bd975bu); f_10bdaf80();
  /* 10bd975b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd975e:;
  /* 10bd975e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9761 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bd9764 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10bd9767 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10bd9769 jmp 0x10bd9789 */
  goto L_10bd9789;
L_10bd976b:;
  /* 10bd976b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bd9772 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9775 push edx */
  push32((uint32_t)(EDX));
  /* 10bd9776 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10bd9779 push eax */
  push32((uint32_t)(EAX));
  /* 10bd977a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bd977d push ecx */
  push32((uint32_t)(ECX));
  /* 10bd977e call 0x10bdb0d0 */
  push32(0x10bd9783u); f_10bdb0d0();
  /* 10bd9783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9786 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bd9789:;
  /* 10bd9789 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd978c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd978f je 0x10bd97a5 */
  if (C.zf) goto L_10bd97a5;
  /* 10bd9791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9794 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bd9797 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd979a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd979d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10bd97a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd97a3 jmp 0x10bd97ad */
  goto L_10bd97ad;
L_10bd97a5:;
  /* 10bd97a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd97a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10bd97ad:;
  /* 10bd97ad pop edi */
  EDI = (pop32());
  /* 10bd97ae pop esi */
  ESI = (pop32());
  /* 10bd97af pop ebx */
  EBX = (pop32());
  /* 10bd97b0 mov esp, ebp */
  ESP = (EBP);
  /* 10bd97b2 pop ebp */
  EBP = (pop32());
  /* 10bd97b3 ret  */
  ESPCHK(0x10bd9540u, _esp0);
  ESP += 4; return;
}

/* FUN_100097c0 @ 0x10bd97c0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10bd97c0(void) {
  FTRACE(0x10bd97c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bd97c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bd97c1 mov ebp, esp */
  EBP = (ESP);
  /* 10bd97c3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd97c9 push ebx */
  push32((uint32_t)(EBX));
  /* 10bd97ca push esi */
  push32((uint32_t)(ESI));
  /* 10bd97cb push edi */
  push32((uint32_t)(EDI));
  /* 10bd97cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10bd97d3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10bd97dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10bd97e4:;
  /* 10bd97e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd97e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bd97e9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10bd97ec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd97f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd97f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd97f6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10bd97f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd97fb je 0x10bda3d7 */
  if (C.zf) goto L_10bda3d7;
  /* 10bd9801 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9808 jl 0x10bda3d7 */
  if ((C.sf!=C.of)) goto L_10bda3d7;
  /* 10bd980e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9812 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9815 jl 0x10bd9836 */
  if ((C.sf!=C.of)) goto L_10bd9836;
  /* 10bd9817 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd981b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd981e jg 0x10bd9836 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bd9836;
  /* 10bd9820 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9824 movsx ecx, byte ptr [eax + 0x10bf9e84] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10bf9e84))));
  /* 10bd982b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10bd982e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10bd9834 jmp 0x10bd9840 */
  goto L_10bd9840;
L_10bd9836:;
  /* 10bd9836 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10bd9840:;
  /* 10bd9840 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10bd9846 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10bd9849 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bd984c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd984f movsx edx, byte ptr [ecx + eax*8 + 0x10bf9ea4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10bf9ea4))));
  /* 10bd9857 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10bd985a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10bd985d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bd9860 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10bd9866 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd986d ja 0x10bda3d2 */
  if ((!C.cf&&!C.zf)) goto L_10bda3d2;
  /* 10bd9873 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10bd9879 jmp dword ptr [ecx*4 + 0x10bda3e4] */
  switch (ECX) {
    case 0: goto L_10bd9880;
    case 1: goto L_10bd991a;
    case 2: goto L_10bd995c;
    case 3: goto L_10bd99cb;
    case 4: goto L_10bd9a23;
    case 5: goto L_10bd9a32;
    case 6: goto L_10bd9a7e;
    case 7: goto L_10bd9b11;
    case 8: goto L_10bd99a8;
    case 9: goto L_10bd99b3;
    case 10: goto L_10bd999e;
    case 11: goto L_10bd9993;
    case 12: goto L_10bd99be;
    case 13: goto L_10bd99c6;
    default: x86_unimpl("switch@0x10bd9879 out of table"); return;
  }
L_10bd9880:;
  /* 10bd9880 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10bd9887 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bd988a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9890 mov eax, dword ptr [0x10bfcc98] */
  EAX = (r32((uint32_t)(0x10bfcc98)));
  /* 10bd9895 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd9897 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10bd989b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd98a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd98a3 je 0x10bd98fd */
  if (C.zf) goto L_10bd98fd;
  /* 10bd98a5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10bd98ab push edx */
  push32((uint32_t)(EDX));
  /* 10bd98ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd98af push eax */
  push32((uint32_t)(EAX));
  /* 10bd98b0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd98b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd98b5 call 0x10bda4f0 */
  push32(0x10bd98bau); f_10bda4f0();
  /* 10bd98ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd98bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd98c0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bd98c2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10bd98c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd98c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd98cb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10bd98ce:;
  /* 10bd98ce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd98d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd98d4 jne 0x10bd98f7 */
  if (!C.zf) goto L_10bd98f7;
  /* 10bd98d6 push 0x10bf9f24 */
  push32((uint32_t)(0x10bf9f24u));
  /* 10bd98db push 0 */
  push32((uint32_t)(0x0u));
  /* 10bd98dd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10bd98e2 push 0x10bf9f18 */
  push32((uint32_t)(0x10bf9f18u));
  /* 10bd98e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bd98e9 call 0x10bd18f0 */
  push32(0x10bd98eeu); f_10bd18f0();
  /* 10bd98ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd98f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd98f4 jne 0x10bd98f7 */
  if (!C.zf) goto L_10bd98f7;
  /* 10bd98f6 int3  */
  x86_unimpl("int3 @ 0x10bd98f6");
L_10bd98f7:;
  /* 10bd98f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd98f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd98fb jne 0x10bd98ce */
  if (!C.zf) goto L_10bd98ce;
L_10bd98fd:;
  /* 10bd98fd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10bd9903 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9904 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bd9907 push edx */
  push32((uint32_t)(EDX));
  /* 10bd9908 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd990c push eax */
  push32((uint32_t)(EAX));
  /* 10bd990d call 0x10bda4f0 */
  push32(0x10bd9912u); f_10bda4f0();
  /* 10bd9912 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9915 jmp 0x10bda3d2 */
  goto L_10bda3d2;
L_10bd991a:;
  /* 10bd991a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bd9921 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9924 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10bd992a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10bd9930 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10bd9936 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10bd993c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10bd993f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bd9946 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10bd9950 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10bd9957 jmp 0x10bda3d2 */
  goto L_10bda3d2;
L_10bd995c:;
  /* 10bd995c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9960 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10bd9966 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10bd996c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd996f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10bd9975 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd997c ja 0x10bd99c6 */
  if ((!C.cf&&!C.zf)) goto L_10bd99c6;
  /* 10bd997e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10bd9984 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9986 mov al, byte ptr [ecx + 0x10bda41c] */
  AL = (r8((uint32_t)(ECX + 0x10bda41c)));
  /* 10bd998c jmp dword ptr [eax*4 + 0x10bda404] */
  switch (EAX) {
    case 0: goto L_10bd99a8;
    case 1: goto L_10bd99b3;
    case 2: goto L_10bd999e;
    case 3: goto L_10bd9993;
    case 4: goto L_10bd99be;
    case 5: goto L_10bd99c6;
    default: x86_unimpl("switch@0x10bd998c out of table"); return;
  }
L_10bd9993:;
  /* 10bd9993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9996 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9999 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd999c jmp 0x10bd99c6 */
  goto L_10bd99c6;
L_10bd999e:;
  /* 10bd999e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd99a1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10bd99a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd99a6 jmp 0x10bd99c6 */
  goto L_10bd99c6;
L_10bd99a8:;
  /* 10bd99a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd99ab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd99ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd99b1 jmp 0x10bd99c6 */
  goto L_10bd99c6;
L_10bd99b3:;
  /* 10bd99b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd99b6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10bd99b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd99bc jmp 0x10bd99c6 */
  goto L_10bd99c6;
L_10bd99be:;
  /* 10bd99be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd99c1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10bd99c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bd99c6:;
  /* 10bd99c6 jmp 0x10bda3d2 */
  goto L_10bda3d2;
L_10bd99cb:;
  /* 10bd99cb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd99cf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd99d2 jne 0x10bd9a07 */
  if (!C.zf) goto L_10bd9a07;
  /* 10bd99d4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10bd99d7 push edx */
  push32((uint32_t)(EDX));
  /* 10bd99d8 call 0x10bda600 */
  push32(0x10bd99ddu); f_10bda600();
  /* 10bd99dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd99e0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10bd99e6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd99ed jge 0x10bd9a05 */
  if ((C.sf==C.of)) goto L_10bd9a05;
  /* 10bd99ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd99f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10bd99f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd99f7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10bd99fd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bd99ff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10bd9a05:;
  /* 10bd9a05 jmp 0x10bd9a1e */
  goto L_10bd9a1e;
L_10bd9a07:;
  /* 10bd9a07 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10bd9a0d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd9a10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9a14 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10bd9a18 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10bd9a1e:;
  /* 10bd9a1e jmp 0x10bda3d2 */
  goto L_10bda3d2;
L_10bd9a23:;
  /* 10bd9a23 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10bd9a2d jmp 0x10bda3d2 */
  goto L_10bda3d2;
L_10bd9a32:;
  /* 10bd9a32 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9a36 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9a39 jne 0x10bd9a62 */
  if (!C.zf) goto L_10bd9a62;
  /* 10bd9a3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10bd9a3e push eax */
  push32((uint32_t)(EAX));
  /* 10bd9a3f call 0x10bda600 */
  push32(0x10bd9a44u); f_10bda600();
  /* 10bd9a44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9a47 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10bd9a4d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9a54 jge 0x10bd9a60 */
  if ((C.sf==C.of)) goto L_10bd9a60;
  /* 10bd9a56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10bd9a60:;
  /* 10bd9a60 jmp 0x10bd9a79 */
  goto L_10bd9a79;
L_10bd9a62:;
  /* 10bd9a62 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10bd9a68 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bd9a6b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9a6f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10bd9a73 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10bd9a79:;
  /* 10bd9a79 jmp 0x10bda3d2 */
  goto L_10bda3d2;
L_10bd9a7e:;
  /* 10bd9a7e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9a82 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10bd9a88 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10bd9a8e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9a91 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10bd9a97 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9a9e ja 0x10bd9b0c */
  if ((!C.cf&&!C.zf)) goto L_10bd9b0c;
  /* 10bd9aa0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10bd9aa6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9aa8 mov al, byte ptr [ecx + 0x10bda441] */
  AL = (r8((uint32_t)(ECX + 0x10bda441)));
  /* 10bd9aae jmp dword ptr [eax*4 + 0x10bda42d] */
  switch (EAX) {
    case 0: goto L_10bd9ac0;
    case 1: goto L_10bd9af9;
    case 2: goto L_10bd9ab5;
    case 3: goto L_10bd9b03;
    case 4: goto L_10bd9b0c;
    default: x86_unimpl("switch@0x10bd9aae out of table"); return;
  }
L_10bd9ab5:;
  /* 10bd9ab5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9ab8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9abb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd9abe jmp 0x10bd9b0c */
  goto L_10bd9b0c;
L_10bd9ac0:;
  /* 10bd9ac0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd9ac3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bd9ac6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9ac9 jne 0x10bd9aeb */
  if (!C.zf) goto L_10bd9aeb;
  /* 10bd9acb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd9ace movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10bd9ad2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9ad5 jne 0x10bd9aeb */
  if (!C.zf) goto L_10bd9aeb;
  /* 10bd9ad7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bd9ada add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9add mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bd9ae0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9ae3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10bd9ae6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bd9ae9 jmp 0x10bd9af7 */
  goto L_10bd9af7;
L_10bd9aeb:;
  /* 10bd9aeb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10bd9af2 jmp 0x10bd9880 */
  goto L_10bd9880;
L_10bd9af7:;
  /* 10bd9af7 jmp 0x10bd9b0c */
  goto L_10bd9b0c;
L_10bd9af9:;
  /* 10bd9af9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9afc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10bd9afe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd9b01 jmp 0x10bd9b0c */
  goto L_10bd9b0c;
L_10bd9b03:;
  /* 10bd9b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9b06 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10bd9b09 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd9b0c:;
  /* 10bd9b0c jmp 0x10bda3d2 */
  goto L_10bda3d2;
L_10bd9b11:;
  /* 10bd9b11 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9b15 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10bd9b1b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10bd9b21 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9b24 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10bd9b2a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9b31 ja 0x10bda1f7 */
  if ((!C.cf&&!C.zf)) goto L_10bda1f7;
  /* 10bd9b37 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10bd9b3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bd9b3f mov cl, byte ptr [edx + 0x10bda4ac] */
  CL = (r8((uint32_t)(EDX + 0x10bda4ac)));
  /* 10bd9b45 jmp dword ptr [ecx*4 + 0x10bda470] */
  switch (ECX) {
    case 0: goto L_10bd9b4c;
    case 1: goto L_10bd9de0;
    case 2: goto L_10bd9c70;
    case 3: goto L_10bd9f19;
    case 4: goto L_10bd9bdb;
    case 5: goto L_10bd9b61;
    case 6: goto L_10bd9eeb;
    case 7: goto L_10bd9df0;
    case 8: goto L_10bd9d95;
    case 9: goto L_10bd9f65;
    case 10: goto L_10bd9f0f;
    case 11: goto L_10bd9c86;
    case 12: goto L_10bd9f03;
    case 13: goto L_10bd9f25;
    case 14: goto L_10bda1f7;
    default: x86_unimpl("switch@0x10bd9b45 out of table"); return;
  }
L_10bd9b4c:;
  /* 10bd9b4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9b4f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9b56 jne 0x10bd9b61 */
  if (!C.zf) goto L_10bd9b61;
  /* 10bd9b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9b5b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10bd9b5e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bd9b61:;
  /* 10bd9b61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9b64 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9b6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd9b6c je 0x10bd9ba7 */
  if (C.zf) goto L_10bd9ba7;
  /* 10bd9b6e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10bd9b71 push eax */
  push32((uint32_t)(EAX));
  /* 10bd9b72 call 0x10bda640 */
  push32(0x10bd9b77u); f_10bda640();
  /* 10bd9b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9b7a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10bd9b7e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10bd9b82 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9b83 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10bd9b89 push edx */
  push32((uint32_t)(EDX));
  /* 10bd9b8a call 0x10bdb720 */
  push32(0x10bd9b8fu); f_10bdb720();
  /* 10bd9b8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9b92 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bd9b95 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9b99 jge 0x10bd9ba5 */
  if ((C.sf==C.of)) goto L_10bd9ba5;
  /* 10bd9b9b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10bd9ba5:;
  /* 10bd9ba5 jmp 0x10bd9bcd */
  goto L_10bd9bcd;
L_10bd9ba7:;
  /* 10bd9ba7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10bd9baa push eax */
  push32((uint32_t)(EAX));
  /* 10bd9bab call 0x10bda600 */
  push32(0x10bd9bb0u); f_10bda600();
  /* 10bd9bb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9bb3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10bd9bba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10bd9bc0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10bd9bc6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10bd9bcd:;
  /* 10bd9bcd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10bd9bd3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10bd9bd6 jmp 0x10bda1f7 */
  goto L_10bda1f7;
L_10bd9bdb:;
  /* 10bd9bdb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10bd9bde push eax */
  push32((uint32_t)(EAX));
  /* 10bd9bdf call 0x10bda600 */
  push32(0x10bd9be4u); f_10bda600();
  /* 10bd9be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9be7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10bd9bed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9bf4 je 0x10bd9c02 */
  if (C.zf) goto L_10bd9c02;
  /* 10bd9bf6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10bd9bfc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9c00 jne 0x10bd9c1c */
  if (!C.zf) goto L_10bd9c1c;
L_10bd9c02:;
  /* 10bd9c02 mov edx, dword ptr [0x10bfcfb0] */
  EDX = (r32((uint32_t)(0x10bfcfb0)));
  /* 10bd9c08 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10bd9c0b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9c0e push eax */
  push32((uint32_t)(EAX));
  /* 10bd9c0f call 0x10bd5660 */
  push32(0x10bd9c14u); f_10bd5660();
  /* 10bd9c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9c17 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bd9c1a jmp 0x10bd9c6b */
  goto L_10bd9c6b;
L_10bd9c1c:;
  /* 10bd9c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9c1f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd9c25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd9c27 je 0x10bd9c4c */
  if (C.zf) goto L_10bd9c4c;
  /* 10bd9c29 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10bd9c2f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10bd9c32 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bd9c35 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10bd9c3b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10bd9c3e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10bd9c40 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10bd9c43 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10bd9c4a jmp 0x10bd9c6b */
  goto L_10bd9c6b;
L_10bd9c4c:;
  /* 10bd9c4c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10bd9c53 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10bd9c59 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bd9c5c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10bd9c5f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10bd9c65 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10bd9c68 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10bd9c6b:;
  /* 10bd9c6b jmp 0x10bda1f7 */
  goto L_10bda1f7;
L_10bd9c70:;
  /* 10bd9c70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9c73 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd9c79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd9c7b jne 0x10bd9c86 */
  if (!C.zf) goto L_10bd9c86;
  /* 10bd9c7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9c80 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10bd9c83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd9c86:;
  /* 10bd9c86 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9c8d jne 0x10bd9c9b */
  if (!C.zf) goto L_10bd9c9b;
  /* 10bd9c8f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10bd9c99 jmp 0x10bd9ca7 */
  goto L_10bd9ca7;
L_10bd9c9b:;
  /* 10bd9c9b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10bd9ca1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10bd9ca7:;
  /* 10bd9ca7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10bd9cad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10bd9cb3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10bd9cb6 push edx */
  push32((uint32_t)(EDX));
  /* 10bd9cb7 call 0x10bda600 */
  push32(0x10bd9cbcu); f_10bda600();
  /* 10bd9cbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9cbf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bd9cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9cc5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9ccc je 0x10bd9d36 */
  if (C.zf) goto L_10bd9d36;
  /* 10bd9cce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9cd2 jne 0x10bd9cdd */
  if (!C.zf) goto L_10bd9cdd;
  /* 10bd9cd4 mov ecx, dword ptr [0x10bfcfb4] */
  ECX = (r32((uint32_t)(0x10bfcfb4)));
  /* 10bd9cda mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10bd9cdd:;
  /* 10bd9cdd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10bd9ce4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9ce7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10bd9ced:;
  /* 10bd9ced mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10bd9cf3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10bd9cf9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9cfc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10bd9d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9d04 je 0x10bd9d26 */
  if (C.zf) goto L_10bd9d26;
  /* 10bd9d06 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10bd9d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9d0e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10bd9d11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9d13 je 0x10bd9d26 */
  if (C.zf) goto L_10bd9d26;
  /* 10bd9d15 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10bd9d1b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9d1e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10bd9d24 jmp 0x10bd9ced */
  goto L_10bd9ced;
L_10bd9d26:;
  /* 10bd9d26 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10bd9d2c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9d2f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10bd9d31 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10bd9d34 jmp 0x10bd9d90 */
  goto L_10bd9d90;
L_10bd9d36:;
  /* 10bd9d36 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9d3a jne 0x10bd9d44 */
  if (!C.zf) goto L_10bd9d44;
  /* 10bd9d3c mov eax, dword ptr [0x10bfcfb0] */
  EAX = (r32((uint32_t)(0x10bfcfb0)));
  /* 10bd9d41 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10bd9d44:;
  /* 10bd9d44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9d47 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10bd9d4d:;
  /* 10bd9d4d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10bd9d53 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10bd9d59 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9d5c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10bd9d62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd9d64 je 0x10bd9d84 */
  if (C.zf) goto L_10bd9d84;
  /* 10bd9d66 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10bd9d6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bd9d6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd9d71 je 0x10bd9d84 */
  if (C.zf) goto L_10bd9d84;
  /* 10bd9d73 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10bd9d79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9d7c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10bd9d82 jmp 0x10bd9d4d */
  goto L_10bd9d4d;
L_10bd9d84:;
  /* 10bd9d84 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10bd9d8a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9d8d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10bd9d90:;
  /* 10bd9d90 jmp 0x10bda1f7 */
  goto L_10bda1f7;
L_10bd9d95:;
  /* 10bd9d95 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10bd9d98 push edx */
  push32((uint32_t)(EDX));
  /* 10bd9d99 call 0x10bda600 */
  push32(0x10bd9d9eu); f_10bda600();
  /* 10bd9d9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9da1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10bd9da7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9daa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9dad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9daf je 0x10bd9dc3 */
  if (C.zf) goto L_10bd9dc3;
  /* 10bd9db1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10bd9db7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10bd9dbe mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10bd9dc1 jmp 0x10bd9dd1 */
  goto L_10bd9dd1;
L_10bd9dc3:;
  /* 10bd9dc3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10bd9dc9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10bd9dcf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10bd9dd1:;
  /* 10bd9dd1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10bd9ddb jmp 0x10bda1f7 */
  goto L_10bda1f7;
L_10bd9de0:;
  /* 10bd9de0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10bd9de7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10bd9dea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bd9ded mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10bd9df0:;
  /* 10bd9df0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9df3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10bd9df5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bd9df8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10bd9dfe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10bd9e01 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9e08 jge 0x10bd9e16 */
  if ((C.sf==C.of)) goto L_10bd9e16;
  /* 10bd9e0a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10bd9e14 jmp 0x10bd9e32 */
  goto L_10bd9e32;
L_10bd9e16:;
  /* 10bd9e16 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9e1d jne 0x10bd9e32 */
  if (!C.zf) goto L_10bd9e32;
  /* 10bd9e1f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9e23 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9e26 jne 0x10bd9e32 */
  if (!C.zf) goto L_10bd9e32;
  /* 10bd9e28 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10bd9e32:;
  /* 10bd9e32 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd9e35 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9e38 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10bd9e3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bd9e3e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bd9e41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bd9e43 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bd9e46 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10bd9e4c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10bd9e52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bd9e55 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9e56 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10bd9e5c push edx */
  push32((uint32_t)(EDX));
  /* 10bd9e5d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9e61 push eax */
  push32((uint32_t)(EAX));
  /* 10bd9e62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9e65 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9e66 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10bd9e6c push edx */
  push32((uint32_t)(EDX));
  /* 10bd9e6d call dword ptr [0x10bfd3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfd3a0))), 0x10bd9e73u);
  /* 10bd9e73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9e76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9e79 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9e7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9e80 je 0x10bd9e98 */
  if (C.zf) goto L_10bd9e98;
  /* 10bd9e82 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9e89 jne 0x10bd9e98 */
  if (!C.zf) goto L_10bd9e98;
  /* 10bd9e8b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9e8e push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9e8f call dword ptr [0x10bfd3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfd3ac))), 0x10bd9e95u);
  /* 10bd9e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd9e98:;
  /* 10bd9e98 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10bd9e9c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9e9f jne 0x10bd9eba */
  if (!C.zf) goto L_10bd9eba;
  /* 10bd9ea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9ea4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9eab jne 0x10bd9eba */
  if (!C.zf) goto L_10bd9eba;
  /* 10bd9ead mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9eb1 call dword ptr [0x10bfd3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfd3a4))), 0x10bd9eb7u);
  /* 10bd9eb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bd9eba:;
  /* 10bd9eba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9ebd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bd9ec0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bd9ec3 jne 0x10bd9ed7 */
  if (!C.zf) goto L_10bd9ed7;
  /* 10bd9ec5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9ec8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10bd9ecb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd9ece mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9ed1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9ed4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10bd9ed7:;
  /* 10bd9ed7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bd9eda push eax */
  push32((uint32_t)(EAX));
  /* 10bd9edb call 0x10bd5660 */
  push32(0x10bd9ee0u); f_10bd5660();
  /* 10bd9ee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9ee3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bd9ee6 jmp 0x10bda1f7 */
  goto L_10bda1f7;
L_10bd9eeb:;
  /* 10bd9eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9eee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd9ef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bd9ef4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10bd9efe jmp 0x10bd9f85 */
  goto L_10bd9f85;
L_10bd9f03:;
  /* 10bd9f03 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10bd9f0d jmp 0x10bd9f85 */
  goto L_10bd9f85;
L_10bd9f0f:;
  /* 10bd9f0f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10bd9f19:;
  /* 10bd9f19 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10bd9f23 jmp 0x10bd9f2f */
  goto L_10bd9f2f;
L_10bd9f25:;
  /* 10bd9f25 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10bd9f2f:;
  /* 10bd9f2f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10bd9f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9f3c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9f42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd9f44 je 0x10bd9f63 */
  if (C.zf) goto L_10bd9f63;
  /* 10bd9f46 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10bd9f4d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10bd9f53 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9f56 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10bd9f5c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10bd9f63:;
  /* 10bd9f63 jmp 0x10bd9f85 */
  goto L_10bd9f85;
L_10bd9f65:;
  /* 10bd9f65 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10bd9f6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9f72 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10bd9f78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bd9f7a je 0x10bd9f85 */
  if (C.zf) goto L_10bd9f85;
  /* 10bd9f7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9f7f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10bd9f82 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bd9f85:;
  /* 10bd9f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9f88 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9f8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9f8f je 0x10bd9fae */
  if (C.zf) goto L_10bd9fae;
  /* 10bd9f91 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10bd9f94 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9f95 call 0x10bda620 */
  push32(0x10bd9f9au); f_10bda620();
  /* 10bd9f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9f9d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10bd9fa3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10bd9fa9 jmp 0x10bda03f */
  goto L_10bda03f;
L_10bd9fae:;
  /* 10bd9fae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9fb1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10bd9fb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bd9fb6 je 0x10bda000 */
  if (C.zf) goto L_10bda000;
  /* 10bd9fb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bd9fbb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bd9fc0 je 0x10bd9fe0 */
  if (C.zf) goto L_10bd9fe0;
  /* 10bd9fc2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10bd9fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bd9fc6 call 0x10bda600 */
  push32(0x10bd9fcbu); f_10bda600();
  /* 10bd9fcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9fce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10bd9fd1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bd9fd2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10bd9fd8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10bd9fde jmp 0x10bd9ffe */
  goto L_10bd9ffe;
L_10bd9fe0:;
  /* 10bd9fe0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10bd9fe3 push edx */
  push32((uint32_t)(EDX));
  /* 10bd9fe4 call 0x10bda600 */
  push32(0x10bd9fe9u); f_10bda600();
  /* 10bd9fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bd9fec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bd9ff1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bd9ff2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10bd9ff8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10bd9ffe:;
  /* 10bd9ffe jmp 0x10bda03f */
  goto L_10bda03f;
L_10bda000:;
  /* 10bda000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda003 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10bda006 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bda008 je 0x10bda025 */
  if (C.zf) goto L_10bda025;
  /* 10bda00a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10bda00d push ecx */
  push32((uint32_t)(ECX));
  /* 10bda00e call 0x10bda600 */
  push32(0x10bda013u); f_10bda600();
  /* 10bda013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda016 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bda017 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10bda01d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10bda023 jmp 0x10bda03f */
  goto L_10bda03f;
L_10bda025:;
  /* 10bda025 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10bda028 push edx */
  push32((uint32_t)(EDX));
  /* 10bda029 call 0x10bda600 */
  push32(0x10bda02eu); f_10bda600();
  /* 10bda02e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda031 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bda033 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10bda039 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10bda03f:;
  /* 10bda03f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda042 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10bda045 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bda047 je 0x10bda087 */
  if (C.zf) goto L_10bda087;
  /* 10bda049 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda050 jg 0x10bda087 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bda087;
  /* 10bda052 jl 0x10bda05d */
  if ((C.sf!=C.of)) goto L_10bda05d;
  /* 10bda054 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda05b jae 0x10bda087 */
  if (!C.cf) goto L_10bda087;
L_10bda05d:;
  /* 10bda05d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10bda063 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bda065 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10bda06b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda06e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bda070 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10bda076 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10bda07c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda07f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10bda082 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bda085 jmp 0x10bda09f */
  goto L_10bda09f;
L_10bda087:;
  /* 10bda087 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10bda08d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10bda093 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10bda099 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10bda09f:;
  /* 10bda09f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda0a2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10bda0a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bda0aa jne 0x10bda0c7 */
  if (!C.zf) goto L_10bda0c7;
  /* 10bda0ac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10bda0b2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10bda0b8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10bda0bb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10bda0c1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10bda0c7:;
  /* 10bda0c7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda0ce jge 0x10bda0dc */
  if ((C.sf==C.of)) goto L_10bda0dc;
  /* 10bda0d0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10bda0da jmp 0x10bda0e5 */
  goto L_10bda0e5;
L_10bda0dc:;
  /* 10bda0dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda0df and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10bda0e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bda0e5:;
  /* 10bda0e5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10bda0eb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10bda0f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bda0f3 jne 0x10bda0fc */
  if (!C.zf) goto L_10bda0fc;
  /* 10bda0f5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10bda0fc:;
  /* 10bda0fc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10bda0ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10bda102:;
  /* 10bda102 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10bda108 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10bda10e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda111 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10bda117 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bda119 jg 0x10bda12f */
  if ((!C.zf&&C.sf==C.of)) goto L_10bda12f;
  /* 10bda11b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10bda121 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10bda127 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bda129 je 0x10bda1b0 */
  if (C.zf) goto L_10bda1b0;
L_10bda12f:;
  /* 10bda12f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10bda135 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bda136 push edx */
  push32((uint32_t)(EDX));
  /* 10bda137 push eax */
  push32((uint32_t)(EAX));
  /* 10bda138 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10bda13e push edx */
  push32((uint32_t)(EDX));
  /* 10bda13f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10bda145 push eax */
  push32((uint32_t)(EAX));
  /* 10bda146 call 0x10bd94c0 */
  push32(0x10bda14bu); f_10bd94c0();
  /* 10bda14b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda14e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10bda154 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10bda15a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bda15b push edx */
  push32((uint32_t)(EDX));
  /* 10bda15c push eax */
  push32((uint32_t)(EAX));
  /* 10bda15d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10bda163 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda164 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10bda16a push edx */
  push32((uint32_t)(EDX));
  /* 10bda16b call 0x10bd9450 */
  push32(0x10bda170u); f_10bd9450();
  /* 10bda170 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10bda176 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10bda17c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda183 jle 0x10bda197 */
  if ((C.zf||C.sf!=C.of)) goto L_10bda197;
  /* 10bda185 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10bda18b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda191 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10bda197:;
  /* 10bda197 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bda19a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10bda1a0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10bda1a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bda1a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda1a8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bda1ab jmp 0x10bda102 */
  goto L_10bda102;
L_10bda1b0:;
  /* 10bda1b0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10bda1b3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda1b6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10bda1b9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bda1bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda1bf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10bda1c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda1c5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10bda1ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bda1cc je 0x10bda1f7 */
  if (C.zf) goto L_10bda1f7;
  /* 10bda1ce mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bda1d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bda1d4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda1d7 jne 0x10bda1df */
  if (!C.zf) goto L_10bda1df;
  /* 10bda1d9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda1dd jne 0x10bda1f7 */
  if (!C.zf) goto L_10bda1f7;
L_10bda1df:;
  /* 10bda1df mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bda1e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda1e5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bda1e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bda1eb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10bda1ee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bda1f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda1f4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10bda1f7:;
  /* 10bda1f7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda1fe jne 0x10bda3d2 */
  if (!C.zf) goto L_10bda3d2;
  /* 10bda204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda207 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10bda20a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bda20c je 0x10bda25d */
  if (C.zf) goto L_10bda25d;
  /* 10bda20e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda211 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10bda217 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bda219 je 0x10bda22b */
  if (C.zf) goto L_10bda22b;
  /* 10bda21b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10bda222 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10bda229 jmp 0x10bda25d */
  goto L_10bda25d;
L_10bda22b:;
  /* 10bda22b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda22e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bda231 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bda233 je 0x10bda245 */
  if (C.zf) goto L_10bda245;
  /* 10bda235 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10bda23c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10bda243 jmp 0x10bda25d */
  goto L_10bda25d;
L_10bda245:;
  /* 10bda245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda248 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10bda24b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bda24d je 0x10bda25d */
  if (C.zf) goto L_10bda25d;
  /* 10bda24f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10bda256 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10bda25d:;
  /* 10bda25d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10bda263 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda266 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda269 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10bda26f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda272 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10bda275 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bda277 jne 0x10bda295 */
  if (!C.zf) goto L_10bda295;
  /* 10bda279 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10bda27f push eax */
  push32((uint32_t)(EAX));
  /* 10bda280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda283 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda284 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10bda28a push edx */
  push32((uint32_t)(EDX));
  /* 10bda28b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10bda28d call 0x10bda570 */
  push32(0x10bda292u); f_10bda570();
  /* 10bda292 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bda295:;
  /* 10bda295 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10bda29b push eax */
  push32((uint32_t)(EAX));
  /* 10bda29c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda29f push ecx */
  push32((uint32_t)(ECX));
  /* 10bda2a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bda2a3 push edx */
  push32((uint32_t)(EDX));
  /* 10bda2a4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10bda2aa push eax */
  push32((uint32_t)(EAX));
  /* 10bda2ab call 0x10bda5b0 */
  push32(0x10bda2b0u); f_10bda5b0();
  /* 10bda2b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda2b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda2b6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10bda2b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bda2bb je 0x10bda2e3 */
  if (C.zf) goto L_10bda2e3;
  /* 10bda2bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda2c0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10bda2c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bda2c5 jne 0x10bda2e3 */
  if (!C.zf) goto L_10bda2e3;
  /* 10bda2c7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10bda2cd push eax */
  push32((uint32_t)(EAX));
  /* 10bda2ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda2d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda2d2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10bda2d8 push edx */
  push32((uint32_t)(EDX));
  /* 10bda2d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10bda2db call 0x10bda570 */
  push32(0x10bda2e0u); f_10bda570();
  /* 10bda2e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bda2e3:;
  /* 10bda2e3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda2e7 je 0x10bda391 */
  if (C.zf) goto L_10bda391;
  /* 10bda2ed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda2f1 jle 0x10bda391 */
  if ((C.zf||C.sf!=C.of)) goto L_10bda391;
  /* 10bda2f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bda2fa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10bda300 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bda303 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10bda309:;
  /* 10bda309 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10bda30f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10bda315 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda318 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10bda31e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bda320 je 0x10bda38f */
  if (C.zf) goto L_10bda38f;
  /* 10bda322 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10bda328 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10bda32b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10bda332 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10bda339 push eax */
  push32((uint32_t)(EAX));
  /* 10bda33a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10bda340 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda341 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10bda347 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda34a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10bda350 call 0x10bdb720 */
  push32(0x10bda355u); f_10bdb720();
  /* 10bda355 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda358 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10bda35e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda365 jg 0x10bda369 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bda369;
  /* 10bda367 jmp 0x10bda38f */
  goto L_10bda38f;
L_10bda369:;
  /* 10bda369 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10bda36f push eax */
  push32((uint32_t)(EAX));
  /* 10bda370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda373 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda374 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10bda37a push edx */
  push32((uint32_t)(EDX));
  /* 10bda37b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10bda381 push eax */
  push32((uint32_t)(EAX));
  /* 10bda382 call 0x10bda5b0 */
  push32(0x10bda387u); f_10bda5b0();
  /* 10bda387 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda38a jmp 0x10bda309 */
  goto L_10bda309;
L_10bda38f:;
  /* 10bda38f jmp 0x10bda3ac */
  goto L_10bda3ac;
L_10bda391:;
  /* 10bda391 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10bda397 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda398 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda39b push edx */
  push32((uint32_t)(EDX));
  /* 10bda39c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bda39f push eax */
  push32((uint32_t)(EAX));
  /* 10bda3a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bda3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda3a4 call 0x10bda5b0 */
  push32(0x10bda3a9u); f_10bda5b0();
  /* 10bda3a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bda3ac:;
  /* 10bda3ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda3af and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10bda3b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bda3b4 je 0x10bda3d2 */
  if (C.zf) goto L_10bda3d2;
  /* 10bda3b6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10bda3bc push eax */
  push32((uint32_t)(EAX));
  /* 10bda3bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda3c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda3c1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10bda3c7 push edx */
  push32((uint32_t)(EDX));
  /* 10bda3c8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10bda3ca call 0x10bda570 */
  push32(0x10bda3cfu); f_10bda570();
  /* 10bda3cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bda3d2:;
  /* 10bda3d2 jmp 0x10bd97e4 */
  goto L_10bd97e4;
L_10bda3d7:;
  /* 10bda3d7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10bda3dd pop edi */
  EDI = (pop32());
  /* 10bda3de pop esi */
  ESI = (pop32());
  /* 10bda3df pop ebx */
  EBX = (pop32());
  /* 10bda3e0 mov esp, ebp */
  ESP = (EBP);
  /* 10bda3e2 pop ebp */
  EBP = (pop32());
  /* 10bda3e3 ret  */
  ESPCHK(0x10bd97c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4f0 @ 0x10bda4f0 (119 bytes, 44 insns) */
void f_10bda4f0(void) {
  FTRACE(0x10bda4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda4f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bda4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda4f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda4f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bda4fa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda4fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda500 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10bda503 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda506 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda50a jl 0x10bda532 */
  if ((C.sf!=C.of)) goto L_10bda532;
  /* 10bda50c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda50f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bda511 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10bda514 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10bda516 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10bda51a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bda520 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bda523 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda526 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bda528 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda52b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda52e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bda530 jmp 0x10bda545 */
  goto L_10bda545;
L_10bda532:;
  /* 10bda532 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda535 push edx */
  push32((uint32_t)(EDX));
  /* 10bda536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda539 push eax */
  push32((uint32_t)(EAX));
  /* 10bda53a call 0x10bd9540 */
  push32(0x10bda53fu); f_10bd9540();
  /* 10bda53f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bda545:;
  /* 10bda545 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda549 jne 0x10bda556 */
  if (!C.zf) goto L_10bda556;
  /* 10bda54b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bda54e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10bda554 jmp 0x10bda563 */
  goto L_10bda563;
L_10bda556:;
  /* 10bda556 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bda559 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bda55b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda55e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bda561 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10bda563:;
  /* 10bda563 mov esp, ebp */
  ESP = (EBP);
  /* 10bda565 pop ebp */
  EBP = (pop32());
  /* 10bda566 ret  */
  ESPCHK(0x10bda4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x10bda570 (53 bytes, 23 insns) */
void f_10bda570(void) {
  FTRACE(0x10bda570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda570 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda571 mov ebp, esp */
  EBP = (ESP);
L_10bda573:;
  /* 10bda573 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda576 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda579 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda57c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bda57f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bda581 jle 0x10bda5a3 */
  if ((C.zf||C.sf!=C.of)) goto L_10bda5a3;
  /* 10bda583 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bda586 push edx */
  push32((uint32_t)(EDX));
  /* 10bda587 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bda58a push eax */
  push32((uint32_t)(EAX));
  /* 10bda58b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda58e push ecx */
  push32((uint32_t)(ECX));
  /* 10bda58f call 0x10bda4f0 */
  push32(0x10bda594u); f_10bda4f0();
  /* 10bda594 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda597 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bda59a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda59d jne 0x10bda5a1 */
  if (!C.zf) goto L_10bda5a1;
  /* 10bda59f jmp 0x10bda5a3 */
  goto L_10bda5a3;
L_10bda5a1:;
  /* 10bda5a1 jmp 0x10bda573 */
  goto L_10bda573;
L_10bda5a3:;
  /* 10bda5a3 pop ebp */
  EBP = (pop32());
  /* 10bda5a4 ret  */
  ESPCHK(0x10bda570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5b0 @ 0x10bda5b0 (74 bytes, 31 insns) */
void f_10bda5b0(void) {
  FTRACE(0x10bda5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10bda5b3 push ecx */
  push32((uint32_t)(ECX));
L_10bda5b4:;
  /* 10bda5b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda5b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda5ba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda5bd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bda5c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bda5c2 jle 0x10bda5f6 */
  if ((C.zf||C.sf!=C.of)) goto L_10bda5f6;
  /* 10bda5c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bda5c7 push edx */
  push32((uint32_t)(EDX));
  /* 10bda5c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bda5cb push eax */
  push32((uint32_t)(EAX));
  /* 10bda5cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda5cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bda5d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bda5d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda5d8 push eax */
  push32((uint32_t)(EAX));
  /* 10bda5d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda5dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda5df mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10bda5e2 call 0x10bda4f0 */
  push32(0x10bda5e7u); f_10bda4f0();
  /* 10bda5e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda5ea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bda5ed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda5f0 jne 0x10bda5f4 */
  if (!C.zf) goto L_10bda5f4;
  /* 10bda5f2 jmp 0x10bda5f6 */
  goto L_10bda5f6;
L_10bda5f4:;
  /* 10bda5f4 jmp 0x10bda5b4 */
  goto L_10bda5b4;
L_10bda5f6:;
  /* 10bda5f6 mov esp, ebp */
  ESP = (EBP);
  /* 10bda5f8 pop ebp */
  EBP = (pop32());
  /* 10bda5f9 ret  */
  ESPCHK(0x10bda5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a600 @ 0x10bda600 (26 bytes, 12 insns) */
void f_10bda600(void) {
  FTRACE(0x10bda600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda600 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda601 mov ebp, esp */
  EBP = (ESP);
  /* 10bda603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda606 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bda608 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda60b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda60e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bda610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda613 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bda615 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bda618 pop ebp */
  EBP = (pop32());
  /* 10bda619 ret  */
  ESPCHK(0x10bda600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a620 @ 0x10bda620 (31 bytes, 14 insns) */
void f_10bda620(void) {
  FTRACE(0x10bda620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda620 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda621 mov ebp, esp */
  EBP = (ESP);
  /* 10bda623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda626 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bda628 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda62b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda62e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bda630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda633 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bda635 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda638 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10bda63a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bda63d pop ebp */
  EBP = (pop32());
  /* 10bda63e ret  */
  ESPCHK(0x10bda620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a640 @ 0x10bda640 (27 bytes, 12 insns) */
void f_10bda640(void) {
  FTRACE(0x10bda640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda640 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda641 mov ebp, esp */
  EBP = (ESP);
  /* 10bda643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda646 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bda648 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda64b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda64e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10bda650 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda653 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bda655 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10bda659 pop ebp */
  EBP = (pop32());
  /* 10bda65a ret  */
  ESPCHK(0x10bda640u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10bda660 (145 bytes, 42 insns) */
void f_10bda660(void) {
  FTRACE(0x10bda660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda660 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda661 mov ebp, esp */
  EBP = (ESP);
  /* 10bda663 push ecx */
  push32((uint32_t)(ECX));
  /* 10bda664 call 0x10bda710 */
  push32(0x10bda669u); f_10bda710();
  /* 10bda669 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda66c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bda66e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bda675 jmp 0x10bda680 */
  goto L_10bda680;
L_10bda677:;
  /* 10bda677 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda67a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda67d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bda680:;
  /* 10bda680 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda684 jae 0x10bda6aa */
  if (!C.cf) goto L_10bda6aa;
  /* 10bda686 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda689 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda68c cmp ecx, dword ptr [eax*8 + 0x10bfcfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10bfcfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda693 jne 0x10bda6a8 */
  if (!C.zf) goto L_10bda6a8;
  /* 10bda695 call 0x10bda700 */
  push32(0x10bda69au); f_10bda700();
  /* 10bda69a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bda69d mov ecx, dword ptr [edx*8 + 0x10bfcfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10bfcfbc)));
  /* 10bda6a4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bda6a6 jmp 0x10bda6ed */
  goto L_10bda6ed;
L_10bda6a8:;
  /* 10bda6a8 jmp 0x10bda677 */
  goto L_10bda677;
L_10bda6aa:;
  /* 10bda6aa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda6ae jb 0x10bda6c3 */
  if (C.cf) goto L_10bda6c3;
  /* 10bda6b0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda6b4 ja 0x10bda6c3 */
  if ((!C.cf&&!C.zf)) goto L_10bda6c3;
  /* 10bda6b6 call 0x10bda700 */
  push32(0x10bda6bbu); f_10bda700();
  /* 10bda6bb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10bda6c1 jmp 0x10bda6ed */
  goto L_10bda6ed;
L_10bda6c3:;
  /* 10bda6c3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda6ca jb 0x10bda6e2 */
  if (C.cf) goto L_10bda6e2;
  /* 10bda6cc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda6d3 ja 0x10bda6e2 */
  if ((!C.cf&&!C.zf)) goto L_10bda6e2;
  /* 10bda6d5 call 0x10bda700 */
  push32(0x10bda6dau); f_10bda700();
  /* 10bda6da mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10bda6e0 jmp 0x10bda6ed */
  goto L_10bda6ed;
L_10bda6e2:;
  /* 10bda6e2 call 0x10bda700 */
  push32(0x10bda6e7u); f_10bda700();
  /* 10bda6e7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10bda6ed:;
  /* 10bda6ed mov esp, ebp */
  ESP = (EBP);
  /* 10bda6ef pop ebp */
  EBP = (pop32());
  /* 10bda6f0 ret  */
  ESPCHK(0x10bda660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a700 @ 0x10bda700 (13 bytes, 6 insns) */
void f_10bda700(void) {
  FTRACE(0x10bda700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda700 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda701 mov ebp, esp */
  EBP = (ESP);
  /* 10bda703 call 0x10bd2270 */
  push32(0x10bda708u); f_10bd2270();
  /* 10bda708 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda70b pop ebp */
  EBP = (pop32());
  /* 10bda70c ret  */
  ESPCHK(0x10bda700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a710 @ 0x10bda710 (13 bytes, 6 insns) */
void f_10bda710(void) {
  FTRACE(0x10bda710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda710 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda711 mov ebp, esp */
  EBP = (ESP);
  /* 10bda713 call 0x10bd2270 */
  push32(0x10bda718u); f_10bd2270();
  /* 10bda718 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda71b pop ebp */
  EBP = (pop32());
  /* 10bda71c ret  */
  ESPCHK(0x10bda710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a720 @ 0x10bda720 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10bda720(void) {
  FTRACE(0x10bda720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bda720 push ebp */
  push32((uint32_t)(EBP));
  /* 10bda721 mov ebp, esp */
  EBP = (ESP);
  /* 10bda723 push edi */
  push32((uint32_t)(EDI));
  /* 10bda724 push esi */
  push32((uint32_t)(ESI));
  /* 10bda725 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bda728 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bda72b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda72e mov eax, ecx */
  EAX = (ECX);
  /* 10bda730 mov edx, ecx */
  EDX = (ECX);
  /* 10bda732 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda734 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda736 jbe 0x10bda740 */
  if ((C.cf||C.zf)) goto L_10bda740;
  /* 10bda738 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda73a jb 0x10bda8b8 */
  if (C.cf) goto L_10bda8b8;
L_10bda740:;
  /* 10bda740 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bda746 jne 0x10bda75c */
  if (!C.zf) goto L_10bda75c;
  /* 10bda748 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bda74b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bda74e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda751 jb 0x10bda77c */
  if (C.cf) goto L_10bda77c;
  /* 10bda753 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bda755 jmp dword ptr [edx*4 + 0x10bda868] */
  switch (EDX) {
    case 0: goto L_10bda878;
    case 1: goto L_10bda880;
    case 2: goto L_10bda88c;
    case 3: goto L_10bda8a0;
    default: x86_unimpl("switch@0x10bda755 out of table"); return;
  }
L_10bda75c:;
  /* 10bda75c mov eax, edi */
  EAX = (EDI);
  /* 10bda75e mov edx, 3 */
  EDX = (0x3u);
  /* 10bda763 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda766 jb 0x10bda774 */
  if (C.cf) goto L_10bda774;
  /* 10bda768 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bda76b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda76d jmp dword ptr [eax*4 + 0x10bda780] */
  switch (EAX) {
    case 1: goto L_10bda790;
    case 2: goto L_10bda7bc;
    case 3: goto L_10bda7e0;
    default: x86_unimpl("switch@0x10bda76d out of table"); return;
  }
L_10bda774:;
  /* 10bda774 jmp dword ptr [ecx*4 + 0x10bda878] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10bda878)))); return;
  /* 10bda77b nop  */
  /* nop */
L_10bda77c:;
  /* 10bda77c jmp dword ptr [ecx*4 + 0x10bda7fc] */
  switch (ECX) {
    case 0: goto L_10bda85f;
    case 1: goto L_10bda84c;
    case 2: goto L_10bda844;
    case 3: goto L_10bda83c;
    case 4: goto L_10bda834;
    case 5: goto L_10bda82c;
    case 6: goto L_10bda824;
    case 7: goto L_10bda81c;
    default: x86_unimpl("switch@0x10bda77c out of table"); return;
  }
  /* 10bda783 nop  */
  /* nop */
L_10bda790:;
  /* 10bda790 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bda792 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bda794 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bda796 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bda799 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bda79c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bda79f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bda7a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bda7a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda7a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda7ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda7ae jb 0x10bda77c */
  if (C.cf) goto L_10bda77c;
  /* 10bda7b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bda7b2 jmp dword ptr [edx*4 + 0x10bda868] */
  switch (EDX) {
    case 0: goto L_10bda878;
    case 1: goto L_10bda880;
    case 2: goto L_10bda88c;
    case 3: goto L_10bda8a0;
    default: x86_unimpl("switch@0x10bda7b2 out of table"); return;
  }
  /* 10bda7b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bda7bc:;
  /* 10bda7bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bda7be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bda7c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bda7c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bda7c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bda7c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bda7cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda7ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda7d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda7d4 jb 0x10bda77c */
  if (C.cf) goto L_10bda77c;
  /* 10bda7d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bda7d8 jmp dword ptr [edx*4 + 0x10bda868] */
  switch (EDX) {
    case 0: goto L_10bda878;
    case 1: goto L_10bda880;
    case 2: goto L_10bda88c;
    case 3: goto L_10bda8a0;
    default: x86_unimpl("switch@0x10bda7d8 out of table"); return;
  }
  /* 10bda7df nop  */
  /* nop */
L_10bda7e0:;
  /* 10bda7e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bda7e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bda7e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bda7e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bda7e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bda7ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10bda7eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda7ee jb 0x10bda77c */
  if (C.cf) goto L_10bda77c;
  /* 10bda7f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bda7f2 jmp dword ptr [edx*4 + 0x10bda868] */
  switch (EDX) {
    case 0: goto L_10bda878;
    case 1: goto L_10bda880;
    case 2: goto L_10bda88c;
    case 3: goto L_10bda8a0;
    default: x86_unimpl("switch@0x10bda7f2 out of table"); return;
  }
  /* 10bda7f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bda81c:;
  /* 10bda81c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10bda820 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10bda824:;
  /* 10bda824 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10bda828 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10bda82c:;
  /* 10bda82c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10bda830 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10bda834:;
  /* 10bda834 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10bda838 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10bda83c:;
  /* 10bda83c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10bda840 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10bda844:;
  /* 10bda844 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10bda848 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10bda84c:;
  /* 10bda84c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10bda850 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10bda854 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bda85b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda85d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bda85f:;
  /* 10bda85f jmp dword ptr [edx*4 + 0x10bda868] */
  switch (EDX) {
    case 0: goto L_10bda878;
    case 1: goto L_10bda880;
    case 2: goto L_10bda88c;
    case 3: goto L_10bda8a0;
    default: x86_unimpl("switch@0x10bda85f out of table"); return;
  }
  /* 10bda866 mov edi, edi */
  EDI = (EDI);
L_10bda878:;
  /* 10bda878 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda87b pop esi */
  ESI = (pop32());
  /* 10bda87c pop edi */
  EDI = (pop32());
  /* 10bda87d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bda87e ret  */
  ESPCHK(0x10bda720u, _esp0);
  ESP += 4; return;
  /* 10bda87f nop  */
  /* nop */
L_10bda880:;
  /* 10bda880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bda882 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bda884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda887 pop esi */
  ESI = (pop32());
  /* 10bda888 pop edi */
  EDI = (pop32());
  /* 10bda889 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bda88a ret  */
  ESPCHK(0x10bda720u, _esp0);
  ESP += 4; return;
  /* 10bda88b nop  */
  /* nop */
L_10bda88c:;
  /* 10bda88c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bda88e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bda890 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bda893 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bda896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda899 pop esi */
  ESI = (pop32());
  /* 10bda89a pop edi */
  EDI = (pop32());
  /* 10bda89b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bda89c ret  */
  ESPCHK(0x10bda720u, _esp0);
  ESP += 4; return;
  /* 10bda89d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bda8a0:;
  /* 10bda8a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bda8a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10bda8a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bda8a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bda8aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bda8ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bda8b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bda8b3 pop esi */
  ESI = (pop32());
  /* 10bda8b4 pop edi */
  EDI = (pop32());
  /* 10bda8b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bda8b6 ret  */
  ESPCHK(0x10bda720u, _esp0);
  ESP += 4; return;
  /* 10bda8b7 nop  */
  /* nop */
L_10bda8b8:;
  /* 10bda8b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10bda8bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10bda8c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10bda8c6 jne 0x10bda8ec */
  if (!C.zf) goto L_10bda8ec;
  /* 10bda8c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bda8cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bda8ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda8d1 jb 0x10bda8e0 */
  if (C.cf) goto L_10bda8e0;
  /* 10bda8d3 std  */
  C.df=1;
  /* 10bda8d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bda8d6 cld  */
  C.df=0;
  /* 10bda8d7 jmp dword ptr [edx*4 + 0x10bdaa00] */
  switch (EDX) {
    case 0: goto L_10bdaa10;
    case 1: goto L_10bdaa18;
    case 2: goto L_10bdaa28;
    case 3: goto L_10bdaa3c;
    default: x86_unimpl("switch@0x10bda8d7 out of table"); return;
  }
  /* 10bda8de mov edi, edi */
  EDI = (EDI);
L_10bda8e0:;
  /* 10bda8e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bda8e2 jmp dword ptr [ecx*4 + 0x10bda9b0] */
  switch (ECX) {
    case 0: goto L_10bda9f7;
    default: x86_unimpl("switch@0x10bda8e2 out of table"); return;
  }
  /* 10bda8e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bda8ec:;
  /* 10bda8ec mov eax, edi */
  EAX = (EDI);
  /* 10bda8ee mov edx, 3 */
  EDX = (0x3u);
  /* 10bda8f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda8f6 jb 0x10bda904 */
  if (C.cf) goto L_10bda904;
  /* 10bda8f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10bda8fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda8fd jmp dword ptr [eax*4 + 0x10bda908] */
  switch (EAX) {
    case 1: goto L_10bda918;
    case 2: goto L_10bda938;
    case 3: goto L_10bda960;
    default: x86_unimpl("switch@0x10bda8fd out of table"); return;
  }
L_10bda904:;
  /* 10bda904 jmp dword ptr [ecx*4 + 0x10bdaa00] */
  switch (ECX) {
    case 0: goto L_10bdaa10;
    case 1: goto L_10bdaa18;
    case 2: goto L_10bdaa28;
    case 3: goto L_10bdaa3c;
    default: x86_unimpl("switch@0x10bda904 out of table"); return;
  }
  /* 10bda90b nop  */
  /* nop */
L_10bda918:;
  /* 10bda918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bda91b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bda91d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bda920 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10bda921 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bda924 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10bda925 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda928 jb 0x10bda8e0 */
  if (C.cf) goto L_10bda8e0;
  /* 10bda92a std  */
  C.df=1;
  /* 10bda92b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bda92d cld  */
  C.df=0;
  /* 10bda92e jmp dword ptr [edx*4 + 0x10bdaa00] */
  switch (EDX) {
    case 0: goto L_10bdaa10;
    case 1: goto L_10bdaa18;
    case 2: goto L_10bdaa28;
    case 3: goto L_10bdaa3c;
    default: x86_unimpl("switch@0x10bda92e out of table"); return;
  }
  /* 10bda935 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bda938:;
  /* 10bda938 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bda93b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bda93d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bda940 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bda943 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bda946 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bda949 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda94c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda94f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda952 jb 0x10bda8e0 */
  if (C.cf) goto L_10bda8e0;
  /* 10bda954 std  */
  C.df=1;
  /* 10bda955 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bda957 cld  */
  C.df=0;
  /* 10bda958 jmp dword ptr [edx*4 + 0x10bdaa00] */
  switch (EDX) {
    case 0: goto L_10bdaa10;
    case 1: goto L_10bdaa18;
    case 2: goto L_10bdaa28;
    case 3: goto L_10bdaa3c;
    default: x86_unimpl("switch@0x10bda958 out of table"); return;
  }
  /* 10bda95f nop  */
  /* nop */
L_10bda960:;
  /* 10bda960 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bda963 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10bda965 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bda968 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bda96b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bda96e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bda971 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10bda974 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bda977 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda97a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bda97d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bda980 jb 0x10bda8e0 */
  if (C.cf) goto L_10bda8e0;
  /* 10bda986 std  */
  C.df=1;
  /* 10bda987 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10bda989 cld  */
  C.df=0;
  /* 10bda98a jmp dword ptr [edx*4 + 0x10bdaa00] */
  switch (EDX) {
    case 0: goto L_10bdaa10;
    case 1: goto L_10bdaa18;
    case 2: goto L_10bdaa28;
    case 3: goto L_10bdaa3c;
    default: x86_unimpl("switch@0x10bda98a out of table"); return;
  }
  /* 10bda991 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10bda994 mov ah, 0xa9 */
  AH = (0xa9u);
  /* 10bda996 mov ebp, 0xbda9bc10 */
  EBP = (0xbda9bc10u);
  /* 10bda99b adc ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10bda99d test eax, 0xa9cc10bd */
  { uint32_t _r=(EAX)&(0xa9cc10bdu); fl_logic(_r,32); }
  /* 10bda9a2 mov ebp, 0xbda9d410 */
  EBP = (0xbda9d410u);
  /* 10bda9a7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10bda9a9 test eax, 0xa9e410bd */
  { uint32_t _r=(EAX)&(0xa9e410bdu); fl_logic(_r,32); }
  /* 10bda9b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10bda9b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10bda9bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10bda9c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10bda9c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10bda9c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10bda9cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10bda9d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10bda9d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10bda9d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10bda9dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10bda9e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10bda9e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10bda9e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10bda9ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10bda9f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10bda9f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10bda9f7:;
  /* 10bda9f7 jmp dword ptr [edx*4 + 0x10bdaa00] */
  switch (EDX) {
    case 0: goto L_10bdaa10;
    case 1: goto L_10bdaa18;
    case 2: goto L_10bdaa28;
    case 3: goto L_10bdaa3c;
    default: x86_unimpl("switch@0x10bda9f7 out of table"); return;
  }
  /* 10bda9fe mov edi, edi */
  EDI = (EDI);
L_10bdaa10:;
  /* 10bdaa10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaa13 pop esi */
  ESI = (pop32());
  /* 10bdaa14 pop edi */
  EDI = (pop32());
  /* 10bdaa15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bdaa16 ret  */
  ESPCHK(0x10bda720u, _esp0);
  ESP += 4; return;
  /* 10bdaa17 nop  */
  /* nop */
L_10bdaa18:;
  /* 10bdaa18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bdaa1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bdaa1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaa21 pop esi */
  ESI = (pop32());
  /* 10bdaa22 pop edi */
  EDI = (pop32());
  /* 10bdaa23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bdaa24 ret  */
  ESPCHK(0x10bda720u, _esp0);
  ESP += 4; return;
  /* 10bdaa25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bdaa28:;
  /* 10bdaa28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bdaa2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bdaa2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bdaa31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bdaa34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaa37 pop esi */
  ESI = (pop32());
  /* 10bdaa38 pop edi */
  EDI = (pop32());
  /* 10bdaa39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bdaa3a ret  */
  ESPCHK(0x10bda720u, _esp0);
  ESP += 4; return;
  /* 10bdaa3b nop  */
  /* nop */
L_10bdaa3c:;
  /* 10bdaa3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10bdaa3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10bdaa42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10bdaa45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10bdaa48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10bdaa4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10bdaa4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaa51 pop esi */
  ESI = (pop32());
  /* 10bdaa52 pop edi */
  EDI = (pop32());
  /* 10bdaa53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bdaa54 ret  */
  ESPCHK(0x10bda720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa60 @ 0x10bdaa60 (421 bytes, 148 insns) */
void f_10bdaa60(void) {
  FTRACE(0x10bdaa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdaa60 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdaa61 mov ebp, esp */
  EBP = (ESP);
  /* 10bdaa63 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bdaa65 push 0x10bf9f40 */
  push32((uint32_t)(0x10bf9f40u));
  /* 10bdaa6a push 0x10bdb938 */
  push32((uint32_t)(0x10bdb938u));
  /* 10bdaa6f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10bdaa75 push eax */
  push32((uint32_t)(EAX));
  /* 10bdaa76 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10bdaa7d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdaa80 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdaa81 push esi */
  push32((uint32_t)(ESI));
  /* 10bdaa82 push edi */
  push32((uint32_t)(EDI));
  /* 10bdaa83 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bdaa86 cmp dword ptr [0x10bfe604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdaa8d jne 0x10bdaade */
  if (!C.zf) goto L_10bdaade;
  /* 10bdaa8f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10bdaa92 push eax */
  push32((uint32_t)(EAX));
  /* 10bdaa93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdaa95 push 0x10bf9f38 */
  push32((uint32_t)(0x10bf9f38u));
  /* 10bdaa9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdaa9c call dword ptr [0x10c00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00308))), 0x10bdaaa2u);
  /* 10bdaaa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdaaa4 je 0x10bdaab2 */
  if (C.zf) goto L_10bdaab2;
  /* 10bdaaa6 mov dword ptr [0x10bfe604], 1 */
  w32((uint32_t)(0x10bfe604), (0x1u));
  /* 10bdaab0 jmp 0x10bdaade */
  goto L_10bdaade;
L_10bdaab2:;
  /* 10bdaab2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10bdaab5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdaab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdaab8 push 0x10bf9f34 */
  push32((uint32_t)(0x10bf9f34u));
  /* 10bdaabd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdaabf push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdaac1 call dword ptr [0x10c00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00304))), 0x10bdaac7u);
  /* 10bdaac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdaac9 je 0x10bdaad7 */
  if (C.zf) goto L_10bdaad7;
  /* 10bdaacb mov dword ptr [0x10bfe604], 2 */
  w32((uint32_t)(0x10bfe604), (0x2u));
  /* 10bdaad5 jmp 0x10bdaade */
  goto L_10bdaade;
L_10bdaad7:;
  /* 10bdaad7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdaad9 jmp 0x10bdac08 */
  goto L_10bdac08;
L_10bdaade:;
  /* 10bdaade cmp dword ptr [0x10bfe604], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe604))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdaae5 jne 0x10bdab15 */
  if (!C.zf) goto L_10bdab15;
  /* 10bdaae7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdaaeb jne 0x10bdaaf6 */
  if (!C.zf) goto L_10bdaaf6;
  /* 10bdaaed mov edx, dword ptr [0x10bfe610] */
  EDX = (r32((uint32_t)(0x10bfe610)));
  /* 10bdaaf3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10bdaaf6:;
  /* 10bdaaf6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdaaf9 push eax */
  push32((uint32_t)(EAX));
  /* 10bdaafa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdaafd push ecx */
  push32((uint32_t)(ECX));
  /* 10bdaafe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdab01 push edx */
  push32((uint32_t)(EDX));
  /* 10bdab02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdab05 push eax */
  push32((uint32_t)(EAX));
  /* 10bdab06 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10bdab09 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdab0a call dword ptr [0x10c00304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00304))), 0x10bdab10u);
  /* 10bdab10 jmp 0x10bdac08 */
  goto L_10bdac08;
L_10bdab15:;
  /* 10bdab15 cmp dword ptr [0x10bfe604], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe604))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdab1c jne 0x10bdac06 */
  if (!C.zf) goto L_10bdac06;
  /* 10bdab22 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdab26 jne 0x10bdab31 */
  if (!C.zf) goto L_10bdab31;
  /* 10bdab28 mov edx, dword ptr [0x10bfe620] */
  EDX = (r32((uint32_t)(0x10bfe620)));
  /* 10bdab2e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10bdab31:;
  /* 10bdab31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdab33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdab35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdab38 push eax */
  push32((uint32_t)(EAX));
  /* 10bdab39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdab3c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdab3d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10bdab40 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bdab42 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdab44 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdab47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdab4a push edx */
  push32((uint32_t)(EDX));
  /* 10bdab4b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdab4e push eax */
  push32((uint32_t)(EAX));
  /* 10bdab4f call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10bdab55u);
  /* 10bdab55 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bdab58 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdab5c jne 0x10bdab65 */
  if (!C.zf) goto L_10bdab65;
  /* 10bdab5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdab60 jmp 0x10bdac08 */
  goto L_10bdac08;
L_10bdab65:;
  /* 10bdab65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdab6c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bdab6f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bdab71 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdab74 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bdab76 call 0x10bd59d0 */
  push32(0x10bdab7bu); f_10bd59d0();
  /* 10bdab7b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10bdab7e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bdab81 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bdab84 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10bdab87 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bdab8a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10bdab8c push edx */
  push32((uint32_t)(EDX));
  /* 10bdab8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdab8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bdab92 push eax */
  push32((uint32_t)(EAX));
  /* 10bdab93 call 0x10bd65a0 */
  push32(0x10bdab98u); f_10bd65a0();
  /* 10bdab98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdab9b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10bdaba2 jmp 0x10bdabbb */
  goto L_10bdabbb;
  /* 10bdaba4 mov eax, 1 */
  EAX = (0x1u);
  /* 10bdaba9 ret  */
  ESPCHK(0x10bdaa60u, _esp0);
  ESP += 4; return;
  /* 10bdabaa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdabad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10bdabb4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10bdabbb:;
  /* 10bdabbb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdabbf jne 0x10bdabc5 */
  if (!C.zf) goto L_10bdabc5;
  /* 10bdabc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdabc3 jmp 0x10bdac08 */
  goto L_10bdac08;
L_10bdabc5:;
  /* 10bdabc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bdabc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdabc9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bdabcc push edx */
  push32((uint32_t)(EDX));
  /* 10bdabcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdabd0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdabd1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdabd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdabd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdabd7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdabda push edx */
  push32((uint32_t)(EDX));
  /* 10bdabdb call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10bdabe1u);
  /* 10bdabe1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bdabe4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdabe8 jne 0x10bdabee */
  if (!C.zf) goto L_10bdabee;
  /* 10bdabea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdabec jmp 0x10bdac08 */
  goto L_10bdac08;
L_10bdabee:;
  /* 10bdabee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdabf1 push eax */
  push32((uint32_t)(EAX));
  /* 10bdabf2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bdabf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdabf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bdabf9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdabfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdabfd push eax */
  push32((uint32_t)(EAX));
  /* 10bdabfe call dword ptr [0x10c00308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00308))), 0x10bdac04u);
  /* 10bdac04 jmp 0x10bdac08 */
  goto L_10bdac08;
L_10bdac06:;
  /* 10bdac06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bdac08:;
  /* 10bdac08 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10bdac0b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdac0e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10bdac15 pop edi */
  EDI = (pop32());
  /* 10bdac16 pop esi */
  ESI = (pop32());
  /* 10bdac17 pop ebx */
  EBX = (pop32());
  /* 10bdac18 mov esp, ebp */
  ESP = (EBP);
  /* 10bdac1a pop ebp */
  EBP = (pop32());
  /* 10bdac1b ret  */
  ESPCHK(0x10bdaa60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac20 @ 0x10bdac20 (727 bytes, 263 insns) */
void f_10bdac20(void) {
  FTRACE(0x10bdac20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdac20 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdac21 mov ebp, esp */
  EBP = (ESP);
  /* 10bdac23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10bdac25 push 0x10bf9f50 */
  push32((uint32_t)(0x10bf9f50u));
  /* 10bdac2a push 0x10bdb938 */
  push32((uint32_t)(0x10bdb938u));
  /* 10bdac2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10bdac35 push eax */
  push32((uint32_t)(EAX));
  /* 10bdac36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10bdac3d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdac40 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdac41 push esi */
  push32((uint32_t)(ESI));
  /* 10bdac42 push edi */
  push32((uint32_t)(EDI));
  /* 10bdac43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bdac46 cmp dword ptr [0x10bfe628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdac4d jne 0x10bdaca6 */
  if (!C.zf) goto L_10bdaca6;
  /* 10bdac4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdac51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdac53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdac55 push 0x10bf9f38 */
  push32((uint32_t)(0x10bf9f38u));
  /* 10bdac5a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bdac5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdac61 call dword ptr [0x10c00310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00310))), 0x10bdac67u);
  /* 10bdac67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdac69 je 0x10bdac77 */
  if (C.zf) goto L_10bdac77;
  /* 10bdac6b mov dword ptr [0x10bfe628], 1 */
  w32((uint32_t)(0x10bfe628), (0x1u));
  /* 10bdac75 jmp 0x10bdaca6 */
  goto L_10bdaca6;
L_10bdac77:;
  /* 10bdac77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdac79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdac7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdac7d push 0x10bf9f34 */
  push32((uint32_t)(0x10bf9f34u));
  /* 10bdac82 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bdac87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdac89 call dword ptr [0x10c0030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0030c))), 0x10bdac8fu);
  /* 10bdac8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdac91 je 0x10bdac9f */
  if (C.zf) goto L_10bdac9f;
  /* 10bdac93 mov dword ptr [0x10bfe628], 2 */
  w32((uint32_t)(0x10bfe628), (0x2u));
  /* 10bdac9d jmp 0x10bdaca6 */
  goto L_10bdaca6;
L_10bdac9f:;
  /* 10bdac9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdaca1 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdaca6:;
  /* 10bdaca6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdacaa jle 0x10bdacbf */
  if ((C.zf||C.sf!=C.of)) goto L_10bdacbf;
  /* 10bdacac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdacaf push eax */
  push32((uint32_t)(EAX));
  /* 10bdacb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdacb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdacb4 call 0x10bdaf30 */
  push32(0x10bdacb9u); f_10bdaf30();
  /* 10bdacb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdacbc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10bdacbf:;
  /* 10bdacbf cmp dword ptr [0x10bfe628], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe628))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdacc6 jne 0x10bdaceb */
  if (!C.zf) goto L_10bdaceb;
  /* 10bdacc8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10bdaccb push edx */
  push32((uint32_t)(EDX));
  /* 10bdaccc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdaccf push eax */
  push32((uint32_t)(EAX));
  /* 10bdacd0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdacd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdacd4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdacd7 push edx */
  push32((uint32_t)(EDX));
  /* 10bdacd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdacdb push eax */
  push32((uint32_t)(EAX));
  /* 10bdacdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdacdf push ecx */
  push32((uint32_t)(ECX));
  /* 10bdace0 call dword ptr [0x10c0030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0030c))), 0x10bdace6u);
  /* 10bdace6 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdaceb:;
  /* 10bdaceb cmp dword ptr [0x10bfe628], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe628))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdacf2 jne 0x10bdaf0f */
  if (!C.zf) goto L_10bdaf0f;
  /* 10bdacf8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdacfc jne 0x10bdad07 */
  if (!C.zf) goto L_10bdad07;
  /* 10bdacfe mov edx, dword ptr [0x10bfe620] */
  EDX = (r32((uint32_t)(0x10bfe620)));
  /* 10bdad04 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10bdad07:;
  /* 10bdad07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdad09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdad0b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdad0e push eax */
  push32((uint32_t)(EAX));
  /* 10bdad0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdad12 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdad13 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10bdad16 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bdad18 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdad1a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdad1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdad20 push edx */
  push32((uint32_t)(EDX));
  /* 10bdad21 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10bdad24 push eax */
  push32((uint32_t)(EAX));
  /* 10bdad25 call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10bdad2bu);
  /* 10bdad2b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10bdad2e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdad32 jne 0x10bdad3b */
  if (!C.zf) goto L_10bdad3b;
  /* 10bdad34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdad36 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdad3b:;
  /* 10bdad3b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdad42 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bdad45 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bdad47 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdad4a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bdad4c call 0x10bd59d0 */
  push32(0x10bdad51u); f_10bd59d0();
  /* 10bdad51 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10bdad54 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bdad57 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bdad5a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10bdad5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10bdad64 jmp 0x10bdad7d */
  goto L_10bdad7d;
  /* 10bdad66 mov eax, 1 */
  EAX = (0x1u);
  /* 10bdad6b ret  */
  ESPCHK(0x10bdac20u, _esp0);
  ESP += 4; return;
  /* 10bdad6c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdad6f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10bdad76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10bdad7d:;
  /* 10bdad7d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdad81 jne 0x10bdad8a */
  if (!C.zf) goto L_10bdad8a;
  /* 10bdad83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdad85 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdad8a:;
  /* 10bdad8a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bdad8d push edx */
  push32((uint32_t)(EDX));
  /* 10bdad8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bdad91 push eax */
  push32((uint32_t)(EAX));
  /* 10bdad92 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdad95 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdad96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdad99 push edx */
  push32((uint32_t)(EDX));
  /* 10bdad9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdad9c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10bdad9f push eax */
  push32((uint32_t)(EAX));
  /* 10bdada0 call dword ptr [0x10c00300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00300))), 0x10bdada6u);
  /* 10bdada6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdada8 jne 0x10bdadb1 */
  if (!C.zf) goto L_10bdadb1;
  /* 10bdadaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdadac jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdadb1:;
  /* 10bdadb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdadb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdadb5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bdadb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdadb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bdadbc push edx */
  push32((uint32_t)(EDX));
  /* 10bdadbd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdadc0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdadc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdadc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdadc5 call dword ptr [0x10c00310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00310))), 0x10bdadcbu);
  /* 10bdadcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bdadce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdadd2 jne 0x10bdaddb */
  if (!C.zf) goto L_10bdaddb;
  /* 10bdadd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdadd6 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdaddb:;
  /* 10bdaddb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdadde and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdade4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdade6 je 0x10bdae2b */
  if (C.zf) goto L_10bdae2b;
  /* 10bdade8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdadec je 0x10bdae26 */
  if (C.zf) goto L_10bdae26;
  /* 10bdadee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bdadf1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdadf4 jle 0x10bdadfd */
  if ((C.zf||C.sf!=C.of)) goto L_10bdadfd;
  /* 10bdadf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdadf8 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdadfd:;
  /* 10bdadfd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10bdae00 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdae01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdae04 push edx */
  push32((uint32_t)(EDX));
  /* 10bdae05 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bdae08 push eax */
  push32((uint32_t)(EAX));
  /* 10bdae09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bdae0c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdae0d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdae10 push edx */
  push32((uint32_t)(EDX));
  /* 10bdae11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdae14 push eax */
  push32((uint32_t)(EAX));
  /* 10bdae15 call dword ptr [0x10c00310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00310))), 0x10bdae1bu);
  /* 10bdae1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdae1d jne 0x10bdae26 */
  if (!C.zf) goto L_10bdae26;
  /* 10bdae1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdae21 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdae26:;
  /* 10bdae26 jmp 0x10bdaf0a */
  goto L_10bdaf0a;
L_10bdae2b:;
  /* 10bdae2b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bdae2e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10bdae31 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bdae38 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bdae3b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bdae3d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdae40 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10bdae42 call 0x10bd59d0 */
  push32(0x10bdae47u); f_10bd59d0();
  /* 10bdae47 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10bdae4a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10bdae4d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10bdae50 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10bdae53 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10bdae5a jmp 0x10bdae73 */
  goto L_10bdae73;
  /* 10bdae5c mov eax, 1 */
  EAX = (0x1u);
  /* 10bdae61 ret  */
  ESPCHK(0x10bdac20u, _esp0);
  ESP += 4; return;
  /* 10bdae62 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdae65 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10bdae6c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10bdae73:;
  /* 10bdae73 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdae77 jne 0x10bdae80 */
  if (!C.zf) goto L_10bdae80;
  /* 10bdae79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdae7b jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdae80:;
  /* 10bdae80 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bdae83 push eax */
  push32((uint32_t)(EAX));
  /* 10bdae84 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bdae87 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdae88 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bdae8b push edx */
  push32((uint32_t)(EDX));
  /* 10bdae8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bdae8f push eax */
  push32((uint32_t)(EAX));
  /* 10bdae90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdae93 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdae94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdae97 push edx */
  push32((uint32_t)(EDX));
  /* 10bdae98 call dword ptr [0x10c00310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00310))), 0x10bdae9eu);
  /* 10bdae9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdaea0 jne 0x10bdaea6 */
  if (!C.zf) goto L_10bdaea6;
  /* 10bdaea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdaea4 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdaea6:;
  /* 10bdaea6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdaeaa jne 0x10bdaeda */
  if (!C.zf) goto L_10bdaeda;
  /* 10bdaeac push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdaeae push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdaeb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdaeb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdaeb4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bdaeb7 push eax */
  push32((uint32_t)(EAX));
  /* 10bdaeb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bdaebb push ecx */
  push32((uint32_t)(ECX));
  /* 10bdaebc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10bdaec1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10bdaec4 push edx */
  push32((uint32_t)(EDX));
  /* 10bdaec5 call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10bdaecbu);
  /* 10bdaecb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bdaece cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdaed2 jne 0x10bdaed8 */
  if (!C.zf) goto L_10bdaed8;
  /* 10bdaed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdaed6 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdaed8:;
  /* 10bdaed8 jmp 0x10bdaf0a */
  goto L_10bdaf0a;
L_10bdaeda:;
  /* 10bdaeda push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdaedc push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdaede mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10bdaee1 push eax */
  push32((uint32_t)(EAX));
  /* 10bdaee2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10bdaee5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdaee6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bdaee9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdaeea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bdaeed push eax */
  push32((uint32_t)(EAX));
  /* 10bdaeee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10bdaef3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10bdaef6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdaef7 call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10bdaefdu);
  /* 10bdaefd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bdaf00 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdaf04 jne 0x10bdaf0a */
  if (!C.zf) goto L_10bdaf0a;
  /* 10bdaf06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdaf08 jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdaf0a:;
  /* 10bdaf0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bdaf0d jmp 0x10bdaf11 */
  goto L_10bdaf11;
L_10bdaf0f:;
  /* 10bdaf0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bdaf11:;
  /* 10bdaf11 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10bdaf14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdaf17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10bdaf1e pop edi */
  EDI = (pop32());
  /* 10bdaf1f pop esi */
  ESI = (pop32());
  /* 10bdaf20 pop ebx */
  EBX = (pop32());
  /* 10bdaf21 mov esp, ebp */
  ESP = (EBP);
  /* 10bdaf23 pop ebp */
  EBP = (pop32());
  /* 10bdaf24 ret  */
  ESPCHK(0x10bdac20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af30 @ 0x10bdaf30 (80 bytes, 32 insns) */
void f_10bdaf30(void) {
  FTRACE(0x10bdaf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdaf30 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdaf31 mov ebp, esp */
  EBP = (ESP);
  /* 10bdaf33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdaf36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdaf39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdaf3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaf3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bdaf42:;
  /* 10bdaf42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdaf45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdaf48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdaf4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdaf4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdaf50 je 0x10bdaf67 */
  if (C.zf) goto L_10bdaf67;
  /* 10bdaf52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdaf55 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bdaf58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdaf5a je 0x10bdaf67 */
  if (C.zf) goto L_10bdaf67;
  /* 10bdaf5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdaf5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdaf62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdaf65 jmp 0x10bdaf42 */
  goto L_10bdaf42;
L_10bdaf67:;
  /* 10bdaf67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdaf6a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bdaf6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdaf6f jne 0x10bdaf79 */
  if (!C.zf) goto L_10bdaf79;
  /* 10bdaf71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdaf74 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdaf77 jmp 0x10bdaf7c */
  goto L_10bdaf7c;
L_10bdaf79:;
  /* 10bdaf79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10bdaf7c:;
  /* 10bdaf7c mov esp, ebp */
  ESP = (EBP);
  /* 10bdaf7e pop ebp */
  EBP = (pop32());
  /* 10bdaf7f ret  */
  ESPCHK(0x10bdaf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af80 @ 0x10bdaf80 (130 bytes, 43 insns) */
void f_10bdaf80(void) {
  FTRACE(0x10bdaf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdaf80 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdaf81 mov ebp, esp */
  EBP = (ESP);
  /* 10bdaf83 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdaf84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaf87 cmp eax, dword ptr [0x10bfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdaf8d jae 0x10bdafb1 */
  if (!C.cf) goto L_10bdafb1;
  /* 10bdaf8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaf92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdaf95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaf98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdaf9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdaf9e mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdafa5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10bdafaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdafad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdafaf jne 0x10bdafcc */
  if (!C.zf) goto L_10bdafcc;
L_10bdafb1:;
  /* 10bdafb1 call 0x10bda700 */
  push32(0x10bdafb6u); f_10bda700();
  /* 10bdafb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdafbc call 0x10bda710 */
  push32(0x10bdafc1u); f_10bda710();
  /* 10bdafc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bdafc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdafca jmp 0x10bdaffe */
  goto L_10bdaffe;
L_10bdafcc:;
  /* 10bdafcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdafcf push edx */
  push32((uint32_t)(EDX));
  /* 10bdafd0 call 0x10bdbf20 */
  push32(0x10bdafd5u); f_10bdbf20();
  /* 10bdafd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdafd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdafdb push eax */
  push32((uint32_t)(EAX));
  /* 10bdafdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdafdf push ecx */
  push32((uint32_t)(ECX));
  /* 10bdafe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdafe3 push edx */
  push32((uint32_t)(EDX));
  /* 10bdafe4 call 0x10bdb010 */
  push32(0x10bdafe9u); f_10bdb010();
  /* 10bdafe9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdafec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdafef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdaff2 push eax */
  push32((uint32_t)(EAX));
  /* 10bdaff3 call 0x10bdbfb0 */
  push32(0x10bdaff8u); f_10bdbfb0();
  /* 10bdaff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdaffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bdaffe:;
  /* 10bdaffe mov esp, ebp */
  ESP = (EBP);
  /* 10bdb000 pop ebp */
  EBP = (pop32());
  /* 10bdb001 ret  */
  ESPCHK(0x10bdaf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x10bdb010 (178 bytes, 56 insns) */
void f_10bdb010(void) {
  FTRACE(0x10bdb010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb010 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb011 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb019 push eax */
  push32((uint32_t)(EAX));
  /* 10bdb01a call 0x10bdbda0 */
  push32(0x10bdb01fu); f_10bdbda0();
  /* 10bdb01f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb022 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdb025 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb029 jne 0x10bdb03e */
  if (!C.zf) goto L_10bdb03e;
  /* 10bdb02b call 0x10bda700 */
  push32(0x10bdb030u); f_10bda700();
  /* 10bdb030 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdb036 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb039 jmp 0x10bdb0be */
  goto L_10bdb0be;
L_10bdb03e:;
  /* 10bdb03e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdb041 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb042 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdb044 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdb047 push edx */
  push32((uint32_t)(EDX));
  /* 10bdb048 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdb04b push eax */
  push32((uint32_t)(EAX));
  /* 10bdb04c call dword ptr [0x10c002f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002f4))), 0x10bdb052u);
  /* 10bdb052 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdb055 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb059 jne 0x10bdb066 */
  if (!C.zf) goto L_10bdb066;
  /* 10bdb05b call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bdb061u);
  /* 10bdb061 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdb064 jmp 0x10bdb06d */
  goto L_10bdb06d;
L_10bdb066:;
  /* 10bdb066 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bdb06d:;
  /* 10bdb06d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb071 je 0x10bdb084 */
  if (C.zf) goto L_10bdb084;
  /* 10bdb073 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb076 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb077 call 0x10bda660 */
  push32(0x10bdb07cu); f_10bda660();
  /* 10bdb07c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb07f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb082 jmp 0x10bdb0be */
  goto L_10bdb0be;
L_10bdb084:;
  /* 10bdb084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb087 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10bdb08a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb08d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb090 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb093 mov ecx, dword ptr [edx*4 + 0x10bffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bdb09a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10bdb09e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10bdb0a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb0a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdb0a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb0aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdb0ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb0b0 mov eax, dword ptr [eax*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdb0b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10bdb0bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10bdb0be:;
  /* 10bdb0be mov esp, ebp */
  ESP = (EBP);
  /* 10bdb0c0 pop ebp */
  EBP = (pop32());
  /* 10bdb0c1 ret  */
  ESPCHK(0x10bdb010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d0 @ 0x10bdb0d0 (130 bytes, 43 insns) */
void f_10bdb0d0(void) {
  FTRACE(0x10bdb0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb0d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb0d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb0d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb0d7 cmp eax, dword ptr [0x10bfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb0dd jae 0x10bdb101 */
  if (!C.cf) goto L_10bdb101;
  /* 10bdb0df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb0e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdb0e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb0e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdb0eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb0ee mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdb0f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10bdb0fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdb0fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdb0ff jne 0x10bdb11c */
  if (!C.zf) goto L_10bdb11c;
L_10bdb101:;
  /* 10bdb101 call 0x10bda700 */
  push32(0x10bdb106u); f_10bda700();
  /* 10bdb106 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdb10c call 0x10bda710 */
  push32(0x10bdb111u); f_10bda710();
  /* 10bdb111 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bdb117 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb11a jmp 0x10bdb14e */
  goto L_10bdb14e;
L_10bdb11c:;
  /* 10bdb11c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb11f push edx */
  push32((uint32_t)(EDX));
  /* 10bdb120 call 0x10bdbf20 */
  push32(0x10bdb125u); f_10bdbf20();
  /* 10bdb125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb128 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdb12b push eax */
  push32((uint32_t)(EAX));
  /* 10bdb12c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdb12f push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb130 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb133 push edx */
  push32((uint32_t)(EDX));
  /* 10bdb134 call 0x10bdb160 */
  push32(0x10bdb139u); f_10bdb160();
  /* 10bdb139 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb13c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdb13f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb142 push eax */
  push32((uint32_t)(EAX));
  /* 10bdb143 call 0x10bdbfb0 */
  push32(0x10bdb148u); f_10bdbfb0();
  /* 10bdb148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb14b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bdb14e:;
  /* 10bdb14e mov esp, ebp */
  ESP = (EBP);
  /* 10bdb150 pop ebp */
  EBP = (pop32());
  /* 10bdb151 ret  */
  ESPCHK(0x10bdb0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b160 @ 0x10bdb160 (627 bytes, 182 insns) */
void f_10bdb160(void) {
  FTRACE(0x10bdb160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb160 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb161 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb163 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb169 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdb170 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdb173 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10bdb179 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb17d jne 0x10bdb186 */
  if (!C.zf) goto L_10bdb186;
  /* 10bdb17f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb181 jmp 0x10bdb3cf */
  goto L_10bdb3cf;
L_10bdb186:;
  /* 10bdb186 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb189 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdb18c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb18f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdb192 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb195 mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdb19c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10bdb1a1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdb1a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdb1a6 je 0x10bdb1b8 */
  if (C.zf) goto L_10bdb1b8;
  /* 10bdb1a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdb1aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdb1ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb1af push edx */
  push32((uint32_t)(EDX));
  /* 10bdb1b0 call 0x10bdb010 */
  push32(0x10bdb1b5u); f_10bdb010();
  /* 10bdb1b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdb1b8:;
  /* 10bdb1b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb1bb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdb1be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb1c1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdb1c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb1c7 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdb1ce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10bdb1d3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb1d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdb1da je 0x10bdb2ec */
  if (C.zf) goto L_10bdb2ec;
  /* 10bdb1e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdb1e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bdb1e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10bdb1ed:;
  /* 10bdb1ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb1f0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb1f3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb1f6 jae 0x10bdb2ea */
  if (!C.cf) goto L_10bdb2ea;
  /* 10bdb1fc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10bdb202 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bdb205:;
  /* 10bdb205 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdb208 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10bdb20e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb210 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb216 jge 0x10bdb277 */
  if ((C.sf==C.of)) goto L_10bdb277;
  /* 10bdb218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb21b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb21e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb221 jae 0x10bdb277 */
  if (!C.cf) goto L_10bdb277;
  /* 10bdb223 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb226 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bdb228 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10bdb22e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb231 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb234 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdb237 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10bdb23e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb241 jne 0x10bdb261 */
  if (!C.zf) goto L_10bdb261;
  /* 10bdb243 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10bdb249 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb24c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10bdb252 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdb255 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10bdb258 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdb25b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb25e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10bdb261:;
  /* 10bdb261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdb264 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10bdb26a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10bdb26c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdb26f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb272 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdb275 jmp 0x10bdb205 */
  goto L_10bdb205;
L_10bdb277:;
  /* 10bdb277 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdb279 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10bdb27f push edx */
  push32((uint32_t)(EDX));
  /* 10bdb280 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdb283 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10bdb289 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb28b push eax */
  push32((uint32_t)(EAX));
  /* 10bdb28c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10bdb292 push edx */
  push32((uint32_t)(EDX));
  /* 10bdb293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb296 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdb299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb29c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdb29f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb2a2 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdb2a9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10bdb2ac push eax */
  push32((uint32_t)(EAX));
  /* 10bdb2ad call dword ptr [0x10c00248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00248))), 0x10bdb2b3u);
  /* 10bdb2b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdb2b5 je 0x10bdb2da */
  if (C.zf) goto L_10bdb2da;
  /* 10bdb2b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdb2ba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb2c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10bdb2c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdb2c6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10bdb2cc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb2ce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb2d4 jge 0x10bdb2d8 */
  if ((C.sf==C.of)) goto L_10bdb2d8;
  /* 10bdb2d6 jmp 0x10bdb2ea */
  goto L_10bdb2ea;
L_10bdb2d8:;
  /* 10bdb2d8 jmp 0x10bdb2e5 */
  goto L_10bdb2e5;
L_10bdb2da:;
  /* 10bdb2da call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bdb2e0u);
  /* 10bdb2e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdb2e3 jmp 0x10bdb2ea */
  goto L_10bdb2ea;
L_10bdb2e5:;
  /* 10bdb2e5 jmp 0x10bdb1ed */
  goto L_10bdb1ed;
L_10bdb2ea:;
  /* 10bdb2ea jmp 0x10bdb33c */
  goto L_10bdb33c;
L_10bdb2ec:;
  /* 10bdb2ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdb2ee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10bdb2f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb2f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdb2f8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdb2f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdb2fc push eax */
  push32((uint32_t)(EAX));
  /* 10bdb2fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb300 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdb303 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb306 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdb309 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb30c mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdb313 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10bdb316 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb317 call dword ptr [0x10c00248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00248))), 0x10bdb31du);
  /* 10bdb31d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdb31f je 0x10bdb333 */
  if (C.zf) goto L_10bdb333;
  /* 10bdb321 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bdb328 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10bdb32e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10bdb331 jmp 0x10bdb33c */
  goto L_10bdb33c;
L_10bdb333:;
  /* 10bdb333 call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bdb339u);
  /* 10bdb339 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bdb33c:;
  /* 10bdb33c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb340 jne 0x10bdb3c6 */
  if (!C.zf) goto L_10bdb3c6;
  /* 10bdb346 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb34a je 0x10bdb37a */
  if (C.zf) goto L_10bdb37a;
  /* 10bdb34c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb350 jne 0x10bdb369 */
  if (!C.zf) goto L_10bdb369;
  /* 10bdb352 call 0x10bda700 */
  push32(0x10bdb357u); f_10bda700();
  /* 10bdb357 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdb35d call 0x10bda710 */
  push32(0x10bdb362u); f_10bda710();
  /* 10bdb362 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdb365 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10bdb367 jmp 0x10bdb375 */
  goto L_10bdb375;
L_10bdb369:;
  /* 10bdb369 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdb36c push edx */
  push32((uint32_t)(EDX));
  /* 10bdb36d call 0x10bda660 */
  push32(0x10bdb372u); f_10bda660();
  /* 10bdb372 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdb375:;
  /* 10bdb375 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb378 jmp 0x10bdb3cf */
  goto L_10bdb3cf;
L_10bdb37a:;
  /* 10bdb37a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb37d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdb380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb383 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdb386 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb389 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdb390 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10bdb395 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb398 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdb39a je 0x10bdb3ab */
  if (C.zf) goto L_10bdb3ab;
  /* 10bdb39c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdb39f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bdb3a2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb3a5 jne 0x10bdb3ab */
  if (!C.zf) goto L_10bdb3ab;
  /* 10bdb3a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb3a9 jmp 0x10bdb3cf */
  goto L_10bdb3cf;
L_10bdb3ab:;
  /* 10bdb3ab call 0x10bda700 */
  push32(0x10bdb3b0u); f_10bda700();
  /* 10bdb3b0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10bdb3b6 call 0x10bda710 */
  push32(0x10bdb3bbu); f_10bda710();
  /* 10bdb3bb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bdb3c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb3c4 jmp 0x10bdb3cf */
  goto L_10bdb3cf;
L_10bdb3c6:;
  /* 10bdb3c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdb3c9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10bdb3cf:;
  /* 10bdb3cf mov esp, ebp */
  ESP = (EBP);
  /* 10bdb3d1 pop ebp */
  EBP = (pop32());
  /* 10bdb3d2 ret  */
  ESPCHK(0x10bdb160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3e0 @ 0x10bdb3e0 (199 bytes, 68 insns) */
void f_10bdb3e0(void) {
  FTRACE(0x10bdb3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb3e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb3e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb3e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdb3e5 push esi */
  push32((uint32_t)(ESI));
  /* 10bdb3e6 push edi */
  push32((uint32_t)(EDI));
L_10bdb3e7:;
  /* 10bdb3e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb3eb jne 0x10bdb40b */
  if (!C.zf) goto L_10bdb40b;
  /* 10bdb3ed push 0x10bf9e98 */
  push32((uint32_t)(0x10bf9e98u));
  /* 10bdb3f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdb3f4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10bdb3f6 push 0x10bf9f68 */
  push32((uint32_t)(0x10bf9f68u));
  /* 10bdb3fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdb3fd call 0x10bd18f0 */
  push32(0x10bdb402u); f_10bd18f0();
  /* 10bdb402 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb405 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb408 jne 0x10bdb40b */
  if (!C.zf) goto L_10bdb40b;
  /* 10bdb40a int3  */
  x86_unimpl("int3 @ 0x10bdb40a");
L_10bdb40b:;
  /* 10bdb40b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb40d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdb40f jne 0x10bdb3e7 */
  if (!C.zf) goto L_10bdb3e7;
  /* 10bdb411 mov ecx, dword ptr [0x10bfe62c] */
  ECX = (r32((uint32_t)(0x10bfe62c)));
  /* 10bdb417 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb41a mov dword ptr [0x10bfe62c], ecx */
  w32((uint32_t)(0x10bfe62c), (ECX));
  /* 10bdb420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb423 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bdb426 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10bdb428 push 0x10bf9f68 */
  push32((uint32_t)(0x10bf9f68u));
  /* 10bdb42d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdb42f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10bdb434 call 0x10bd2830 */
  push32(0x10bdb439u); f_10bd2830();
  /* 10bdb439 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb43c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb43f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10bdb442 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb445 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb449 je 0x10bdb466 */
  if (C.zf) goto L_10bdb466;
  /* 10bdb44b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb44e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bdb451 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdb454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb457 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10bdb45a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb45d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10bdb464 jmp 0x10bdb48b */
  goto L_10bdb48b;
L_10bdb466:;
  /* 10bdb466 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb469 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdb46c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdb46f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb472 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10bdb475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb478 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb47b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb47e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10bdb481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb484 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10bdb48b:;
  /* 10bdb48b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb48e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb491 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bdb494 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bdb496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb499 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10bdb4a0 pop edi */
  EDI = (pop32());
  /* 10bdb4a1 pop esi */
  ESI = (pop32());
  /* 10bdb4a2 pop ebx */
  EBX = (pop32());
  /* 10bdb4a3 mov esp, ebp */
  ESP = (EBP);
  /* 10bdb4a5 pop ebp */
  EBP = (pop32());
  /* 10bdb4a6 ret  */
  ESPCHK(0x10bdb3e0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10bdb4b0 (50 bytes, 17 insns) */
void f_10bdb4b0(void) {
  FTRACE(0x10bdb4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb4b6 cmp eax, dword ptr [0x10bfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb4bc jb 0x10bdb4c2 */
  if (C.cf) goto L_10bdb4c2;
  /* 10bdb4be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb4c0 jmp 0x10bdb4e0 */
  goto L_10bdb4e0;
L_10bdb4c2:;
  /* 10bdb4c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb4c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdb4c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb4cb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdb4ce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb4d1 mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdb4d8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10bdb4dd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10bdb4e0:;
  /* 10bdb4e0 pop ebp */
  EBP = (pop32());
  /* 10bdb4e1 ret  */
  ESPCHK(0x10bdb4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4f0 @ 0x10bdb4f0 (300 bytes, 80 insns) */
void f_10bdb4f0(void) {
  FTRACE(0x10bdb4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb4f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb4f4 cmp dword ptr [0x10bffae0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bffae0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb4fb jne 0x10bdb509 */
  if (!C.zf) goto L_10bdb509;
  /* 10bdb4fd mov dword ptr [0x10bffae0], 0x200 */
  w32((uint32_t)(0x10bffae0), (0x200u));
  /* 10bdb507 jmp 0x10bdb51c */
  goto L_10bdb51c;
L_10bdb509:;
  /* 10bdb509 cmp dword ptr [0x10bffae0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10bffae0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb510 jge 0x10bdb51c */
  if ((C.sf==C.of)) goto L_10bdb51c;
  /* 10bdb512 mov dword ptr [0x10bffae0], 0x14 */
  w32((uint32_t)(0x10bffae0), (0x14u));
L_10bdb51c:;
  /* 10bdb51c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10bdb521 push 0x10bf9f74 */
  push32((uint32_t)(0x10bf9f74u));
  /* 10bdb526 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdb528 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bdb52a mov eax, dword ptr [0x10bffae0] */
  EAX = (r32((uint32_t)(0x10bffae0)));
  /* 10bdb52f push eax */
  push32((uint32_t)(EAX));
  /* 10bdb530 call 0x10bd2c40 */
  push32(0x10bdb535u); f_10bd2c40();
  /* 10bdb535 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb538 mov dword ptr [0x10bfe7a0], eax */
  w32((uint32_t)(0x10bfe7a0), (EAX));
  /* 10bdb53d cmp dword ptr [0x10bfe7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb544 jne 0x10bdb585 */
  if (!C.zf) goto L_10bdb585;
  /* 10bdb546 mov dword ptr [0x10bffae0], 0x14 */
  w32((uint32_t)(0x10bffae0), (0x14u));
  /* 10bdb550 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10bdb555 push 0x10bf9f74 */
  push32((uint32_t)(0x10bf9f74u));
  /* 10bdb55a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdb55c push 4 */
  push32((uint32_t)(0x4u));
  /* 10bdb55e mov ecx, dword ptr [0x10bffae0] */
  ECX = (r32((uint32_t)(0x10bffae0)));
  /* 10bdb564 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb565 call 0x10bd2c40 */
  push32(0x10bdb56au); f_10bd2c40();
  /* 10bdb56a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb56d mov dword ptr [0x10bfe7a0], eax */
  w32((uint32_t)(0x10bfe7a0), (EAX));
  /* 10bdb572 cmp dword ptr [0x10bfe7a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe7a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb579 jne 0x10bdb585 */
  if (!C.zf) goto L_10bdb585;
  /* 10bdb57b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bdb57d call 0x10bd17a0 */
  push32(0x10bdb582u); f_10bd17a0();
  /* 10bdb582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdb585:;
  /* 10bdb585 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdb58c jmp 0x10bdb597 */
  goto L_10bdb597;
L_10bdb58e:;
  /* 10bdb58e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb591 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb594 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bdb597:;
  /* 10bdb597 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb59b jge 0x10bdb5b6 */
  if ((C.sf==C.of)) goto L_10bdb5b6;
  /* 10bdb59d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb5a0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdb5a3 add eax, 0x10bfd120 */
  { uint32_t _a=(EAX),_b=(0x10bfd120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb5a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb5ab mov edx, dword ptr [0x10bfe7a0] */
  EDX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdb5b1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10bdb5b4 jmp 0x10bdb58e */
  goto L_10bdb58e;
L_10bdb5b6:;
  /* 10bdb5b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdb5bd jmp 0x10bdb5c8 */
  goto L_10bdb5c8;
L_10bdb5bf:;
  /* 10bdb5bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb5c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb5c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bdb5c8:;
  /* 10bdb5c8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb5cc jge 0x10bdb618 */
  if ((C.sf==C.of)) goto L_10bdb618;
  /* 10bdb5ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb5d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdb5d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb5d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdb5da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb5dd mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdb5e4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb5e8 je 0x10bdb606 */
  if (C.zf) goto L_10bdb606;
  /* 10bdb5ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb5ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdb5f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb5f3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdb5f6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdb5f9 mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdb600 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb604 jne 0x10bdb616 */
  if (!C.zf) goto L_10bdb616;
L_10bdb606:;
  /* 10bdb606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdb609 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdb60c mov dword ptr [ecx + 0x10bfd130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10bfd130), (0xffffffffu));
L_10bdb616:;
  /* 10bdb616 jmp 0x10bdb5bf */
  goto L_10bdb5bf;
L_10bdb618:;
  /* 10bdb618 mov esp, ebp */
  ESP = (EBP);
  /* 10bdb61a pop ebp */
  EBP = (pop32());
  /* 10bdb61b ret  */
  ESPCHK(0x10bdb4f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b620 @ 0x10bdb620 (26 bytes, 9 insns) */
void f_10bdb620(void) {
  FTRACE(0x10bdb620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb620 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb621 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb623 call 0x10bdc220 */
  push32(0x10bdb628u); f_10bdc220();
  /* 10bdb628 movsx eax, byte ptr [0x10bfe448] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10bfe448))));
  /* 10bdb62f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdb631 je 0x10bdb638 */
  if (C.zf) goto L_10bdb638;
  /* 10bdb633 call 0x10bdbfe0 */
  push32(0x10bdb638u); f_10bdbfe0();
L_10bdb638:;
  /* 10bdb638 pop ebp */
  EBP = (pop32());
  /* 10bdb639 ret  */
  ESPCHK(0x10bdb620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b640 @ 0x10bdb640 (61 bytes, 20 insns) */
void f_10bdb640(void) {
  FTRACE(0x10bdb640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb640 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb641 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb643 cmp dword ptr [ebp + 8], 0x10bfd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10bfd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb64a jb 0x10bdb66e */
  if (C.cf) goto L_10bdb66e;
  /* 10bdb64c cmp dword ptr [ebp + 8], 0x10bfd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10bfd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb653 ja 0x10bdb66e */
  if ((!C.cf&&!C.zf)) goto L_10bdb66e;
  /* 10bdb655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb658 sub eax, 0x10bfd120 */
  { uint32_t _a=(EAX),_b=(0x10bfd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb65d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdb660 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb663 push eax */
  push32((uint32_t)(EAX));
  /* 10bdb664 call 0x10bd6230 */
  push32(0x10bdb669u); f_10bd6230();
  /* 10bdb669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb66c jmp 0x10bdb67b */
  goto L_10bdb67b;
L_10bdb66e:;
  /* 10bdb66e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb671 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb674 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb675 call dword ptr [0x10c002d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d8))), 0x10bdb67bu);
L_10bdb67b:;
  /* 10bdb67b pop ebp */
  EBP = (pop32());
  /* 10bdb67c ret  */
  ESPCHK(0x10bdb640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b680 @ 0x10bdb680 (41 bytes, 16 insns) */
void f_10bdb680(void) {
  FTRACE(0x10bdb680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb680 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb681 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb683 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb687 jge 0x10bdb69a */
  if ((C.sf==C.of)) goto L_10bdb69a;
  /* 10bdb689 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb68c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb68f push eax */
  push32((uint32_t)(EAX));
  /* 10bdb690 call 0x10bd6230 */
  push32(0x10bdb695u); f_10bd6230();
  /* 10bdb695 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb698 jmp 0x10bdb6a7 */
  goto L_10bdb6a7;
L_10bdb69a:;
  /* 10bdb69a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdb69d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb6a1 call dword ptr [0x10c002d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d8))), 0x10bdb6a7u);
L_10bdb6a7:;
  /* 10bdb6a7 pop ebp */
  EBP = (pop32());
  /* 10bdb6a8 ret  */
  ESPCHK(0x10bdb680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6b0 @ 0x10bdb6b0 (61 bytes, 20 insns) */
void f_10bdb6b0(void) {
  FTRACE(0x10bdb6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb6b1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb6b3 cmp dword ptr [ebp + 8], 0x10bfd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10bfd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb6ba jb 0x10bdb6de */
  if (C.cf) goto L_10bdb6de;
  /* 10bdb6bc cmp dword ptr [ebp + 8], 0x10bfd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10bfd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb6c3 ja 0x10bdb6de */
  if ((!C.cf&&!C.zf)) goto L_10bdb6de;
  /* 10bdb6c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb6c8 sub eax, 0x10bfd120 */
  { uint32_t _a=(EAX),_b=(0x10bfd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb6cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdb6d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb6d3 push eax */
  push32((uint32_t)(EAX));
  /* 10bdb6d4 call 0x10bd62d0 */
  push32(0x10bdb6d9u); f_10bd62d0();
  /* 10bdb6d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb6dc jmp 0x10bdb6eb */
  goto L_10bdb6eb;
L_10bdb6de:;
  /* 10bdb6de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb6e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb6e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb6e5 call dword ptr [0x10c002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002dc))), 0x10bdb6ebu);
L_10bdb6eb:;
  /* 10bdb6eb pop ebp */
  EBP = (pop32());
  /* 10bdb6ec ret  */
  ESPCHK(0x10bdb6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x10bdb6f0 (41 bytes, 16 insns) */
void f_10bdb6f0(void) {
  FTRACE(0x10bdb6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb6f1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb6f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb6f7 jge 0x10bdb70a */
  if ((C.sf==C.of)) goto L_10bdb70a;
  /* 10bdb6f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb6fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb6ff push eax */
  push32((uint32_t)(EAX));
  /* 10bdb700 call 0x10bd62d0 */
  push32(0x10bdb705u); f_10bd62d0();
  /* 10bdb705 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb708 jmp 0x10bdb717 */
  goto L_10bdb717;
L_10bdb70a:;
  /* 10bdb70a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdb70d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb710 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb711 call dword ptr [0x10c002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002dc))), 0x10bdb717u);
L_10bdb717:;
  /* 10bdb717 pop ebp */
  EBP = (pop32());
  /* 10bdb718 ret  */
  ESPCHK(0x10bdb6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x10bdb720 (119 bytes, 34 insns) */
void f_10bdb720(void) {
  FTRACE(0x10bdb720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb720 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb721 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb726 push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10bdb72b call dword ptr [0x10c0025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0025c))), 0x10bdb731u);
  /* 10bdb731 cmp dword ptr [0x10bfe78c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe78c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb738 je 0x10bdb758 */
  if (C.zf) goto L_10bdb758;
  /* 10bdb73a push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10bdb73f call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10bdb745u);
  /* 10bdb745 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bdb747 call 0x10bd6230 */
  push32(0x10bdb74cu); f_10bd6230();
  /* 10bdb74c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb74f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bdb756 jmp 0x10bdb75f */
  goto L_10bdb75f;
L_10bdb758:;
  /* 10bdb758 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bdb75f:;
  /* 10bdb75f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10bdb763 push eax */
  push32((uint32_t)(EAX));
  /* 10bdb764 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb767 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb768 call 0x10bdb7a0 */
  push32(0x10bdb76du); f_10bdb7a0();
  /* 10bdb76d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb770 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdb773 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb777 je 0x10bdb785 */
  if (C.zf) goto L_10bdb785;
  /* 10bdb779 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bdb77b call 0x10bd62d0 */
  push32(0x10bdb780u); f_10bd62d0();
  /* 10bdb780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb783 jmp 0x10bdb790 */
  goto L_10bdb790;
L_10bdb785:;
  /* 10bdb785 push 0x10bfe79c */
  push32((uint32_t)(0x10bfe79cu));
  /* 10bdb78a call dword ptr [0x10c0024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0024c))), 0x10bdb790u);
L_10bdb790:;
  /* 10bdb790 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdb793 mov esp, ebp */
  ESP = (EBP);
  /* 10bdb795 pop ebp */
  EBP = (pop32());
  /* 10bdb796 ret  */
  ESPCHK(0x10bdb720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x10bdb7a0 (160 bytes, 50 insns) */
void f_10bdb7a0(void) {
  FTRACE(0x10bdb7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb7a1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb7a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdb7a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb7aa jne 0x10bdb7b3 */
  if (!C.zf) goto L_10bdb7b3;
  /* 10bdb7ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb7ae jmp 0x10bdb83c */
  goto L_10bdb83c;
L_10bdb7b3:;
  /* 10bdb7b3 cmp dword ptr [0x10bfe610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb7ba jne 0x10bdb7ea */
  if (!C.zf) goto L_10bdb7ea;
  /* 10bdb7bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdb7bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb7c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb7c9 jle 0x10bdb7db */
  if ((C.zf||C.sf!=C.of)) goto L_10bdb7db;
  /* 10bdb7cb call 0x10bda700 */
  push32(0x10bdb7d0u); f_10bda700();
  /* 10bdb7d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10bdb7d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb7d9 jmp 0x10bdb83c */
  goto L_10bdb83c;
L_10bdb7db:;
  /* 10bdb7db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb7de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10bdb7e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10bdb7e3 mov eax, 1 */
  EAX = (0x1u);
  /* 10bdb7e8 jmp 0x10bdb83c */
  goto L_10bdb83c;
L_10bdb7ea:;
  /* 10bdb7ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdb7f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10bdb7f4 push eax */
  push32((uint32_t)(EAX));
  /* 10bdb7f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdb7f7 mov ecx, dword ptr [0x10bfcea4] */
  ECX = (r32((uint32_t)(0x10bfcea4)));
  /* 10bdb7fd push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb7fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb801 push edx */
  push32((uint32_t)(EDX));
  /* 10bdb802 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdb804 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10bdb807 push eax */
  push32((uint32_t)(EAX));
  /* 10bdb808 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10bdb80d mov ecx, dword ptr [0x10bfe620] */
  ECX = (r32((uint32_t)(0x10bfe620)));
  /* 10bdb813 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb814 call dword ptr [0x10c00214] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00214))), 0x10bdb81au);
  /* 10bdb81a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdb81d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb821 je 0x10bdb829 */
  if (C.zf) goto L_10bdb829;
  /* 10bdb823 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb827 je 0x10bdb839 */
  if (C.zf) goto L_10bdb839;
L_10bdb829:;
  /* 10bdb829 call 0x10bda700 */
  push32(0x10bdb82eu); f_10bda700();
  /* 10bdb82e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10bdb834 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdb837 jmp 0x10bdb83c */
  goto L_10bdb83c;
L_10bdb839:;
  /* 10bdb839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bdb83c:;
  /* 10bdb83c mov esp, ebp */
  ESP = (EBP);
  /* 10bdb83e pop ebp */
  EBP = (pop32());
  /* 10bdb83f ret  */
  ESPCHK(0x10bdb7a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10bdb840 (32 bytes, 18 insns) */
void f_10bdb840(void) {
  FTRACE(0x10bdb840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb840 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb841 mov ebp, esp */
  EBP = (ESP);
  /* 10bdb843 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdb844 push esi */
  push32((uint32_t)(ESI));
  /* 10bdb845 push edi */
  push32((uint32_t)(EDI));
  /* 10bdb846 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb847 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdb849 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdb84b push 0x10bdb858 */
  push32((uint32_t)(0x10bdb858u));
  /* 10bdb850 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10bdb853 call 0x10be2f8c */
  push32(0x10bdb858u); f_10be2f8c();
  /* 10bdb858 pop ebp */
  EBP = (pop32());
  /* 10bdb859 pop edi */
  EDI = (pop32());
  /* 10bdb85a pop esi */
  ESI = (pop32());
  /* 10bdb85b pop ebx */
  EBX = (pop32());
  /* 10bdb85c mov esp, ebp */
  ESP = (EBP);
  /* 10bdb85e pop ebp */
  EBP = (pop32());
  /* 10bdb85f ret  */
  ESPCHK(0x10bdb840u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10bdb882 (104 bytes, 33 insns) */
void f_10bdb882(void) {
  FTRACE(0x10bdb882u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb882 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdb883 push esi */
  push32((uint32_t)(ESI));
  /* 10bdb884 push edi */
  push32((uint32_t)(EDI));
  /* 10bdb885 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10bdb889 push eax */
  push32((uint32_t)(EAX));
  /* 10bdb88a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10bdb88c push 0x10bdb860 */
  push32((uint32_t)(0x10bdb860u));
  /* 10bdb891 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10bdb898 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10bdb89f:;
  /* 10bdb89f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10bdb8a3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bdb8a6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10bdb8a9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb8ac je 0x10bdb8dc */
  if (C.zf) goto L_10bdb8dc;
  /* 10bdb8ae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb8b2 je 0x10bdb8dc */
  if (C.zf) goto L_10bdb8dc;
  /* 10bdb8b4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10bdb8b7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10bdb8ba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10bdb8be mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10bdb8c1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdb8c6 jne 0x10bdb8da */
  if (!C.zf) goto L_10bdb8da;
  /* 10bdb8c8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10bdb8cd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10bdb8d1 call 0x10bdb916 */
  push32(0x10bdb8d6u); f_10bdb916();
  /* 10bdb8d6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10bdb8dau);
L_10bdb8da:;
  /* 10bdb8da jmp 0x10bdb89f */
  goto L_10bdb89f;
L_10bdb8dc:;
  /* 10bdb8dc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10bdb8e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdb8e6 pop edi */
  EDI = (pop32());
  /* 10bdb8e7 pop esi */
  ESI = (pop32());
  /* 10bdb8e8 pop ebx */
  EBX = (pop32());
  /* 10bdb8e9 ret  */
  ESPCHK(0x10bdb882u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b916 @ 0x10bdb916 (24 bytes, 10 insns) */
void f_10bdb916(void) {
  FTRACE(0x10bdb916u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb916 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdb917 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdb918 mov ebx, 0x10bfd3b8 */
  EBX = (0x10bfd3b8u);
  /* 10bdb91d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdb920 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10bdb923 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10bdb926 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10bdb929 pop ecx */
  ECX = (pop32());
  /* 10bdb92a pop ebx */
  EBX = (pop32());
  /* 10bdb92b ret 4 */
  ESPCHK(0x10bdb916u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b9f5 @ 0x10bdb9f5 (27 bytes, 11 insns) */
void f_10bdb9f5(void) {
  FTRACE(0x10bdb9f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdb9f5 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdb9f6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bdb9fa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10bdb9fc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10bdb9ff push eax */
  push32((uint32_t)(EAX));
  /* 10bdba00 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bdba03 push eax */
  push32((uint32_t)(EAX));
  /* 10bdba04 call 0x10bdb882 */
  push32(0x10bdba09u); f_10bdb882();
  /* 10bdba09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdba0c pop ebp */
  EBP = (pop32());
  /* 10bdba0d ret 4 */
  ESPCHK(0x10bdb9f5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ba10 @ 0x10bdba10 (482 bytes, 138 insns) */
void f_10bdba10(void) {
  FTRACE(0x10bdba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdba10 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdba11 mov ebp, esp */
  EBP = (ESP);
  /* 10bdba13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdba16 push esi */
  push32((uint32_t)(ESI));
  /* 10bdba17 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10bdba1e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10bdba20 call 0x10bd6230 */
  push32(0x10bdba25u); f_10bd6230();
  /* 10bdba25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdba28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bdba2f jmp 0x10bdba3a */
  goto L_10bdba3a;
L_10bdba31:;
  /* 10bdba31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdba34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdba37 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bdba3a:;
  /* 10bdba3a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdba3e jge 0x10bdbbe0 */
  if ((C.sf==C.of)) goto L_10bdbbe0;
  /* 10bdba44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdba47 cmp dword ptr [ecx*4 + 0x10bffde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10bffde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdba4f je 0x10bdbb46 */
  if (C.zf) goto L_10bdbb46;
  /* 10bdba55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdba58 mov eax, dword ptr [edx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bdba5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdba62 jmp 0x10bdba6d */
  goto L_10bdba6d;
L_10bdba64:;
  /* 10bdba64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdba67 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdba6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bdba6d:;
  /* 10bdba6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdba70 mov eax, dword ptr [edx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bdba77 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdba7c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdba7f jae 0x10bdbb36 */
  if (!C.cf) goto L_10bdbb36;
  /* 10bdba85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdba88 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bdba8c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdba8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdba91 jne 0x10bdbb31 */
  if (!C.zf) goto L_10bdbb31;
  /* 10bdba97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdba9a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdba9e jne 0x10bdbad9 */
  if (!C.zf) goto L_10bdbad9;
  /* 10bdbaa0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bdbaa2 call 0x10bd6230 */
  push32(0x10bdbaa7u); f_10bd6230();
  /* 10bdbaa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbaaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbaad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbab1 jne 0x10bdbacf */
  if (!C.zf) goto L_10bdbacf;
  /* 10bdbab3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbab6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbab9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdbaba call dword ptr [0x10c002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d4))), 0x10bdbac0u);
  /* 10bdbac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbac3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bdbac6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbac9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbacc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10bdbacf:;
  /* 10bdbacf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bdbad1 call 0x10bd62d0 */
  push32(0x10bdbad6u); f_10bd62d0();
  /* 10bdbad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdbad9:;
  /* 10bdbad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbadc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbadf push eax */
  push32((uint32_t)(EAX));
  /* 10bdbae0 call dword ptr [0x10c002d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d8))), 0x10bdbae6u);
  /* 10bdbae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbae9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10bdbaed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdbaf0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdbaf2 je 0x10bdbb06 */
  if (C.zf) goto L_10bdbb06;
  /* 10bdbaf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbaf7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbafa push eax */
  push32((uint32_t)(EAX));
  /* 10bdbafb call dword ptr [0x10c002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002dc))), 0x10bdbb01u);
  /* 10bdbb01 jmp 0x10bdba64 */
  goto L_10bdba64;
L_10bdbb06:;
  /* 10bdbb06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbb09 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10bdbb0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdbb12 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdbb15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdbb18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbb1b sub eax, dword ptr [edx*4 + 0x10bffde0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10bffde0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdbb22 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bdbb23 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10bdbb28 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10bdbb2a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbb2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdbb2f jmp 0x10bdbb36 */
  goto L_10bdbb36;
L_10bdbb31:;
  /* 10bdbb31 jmp 0x10bdba64 */
  goto L_10bdba64;
L_10bdbb36:;
  /* 10bdbb36 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbb3a je 0x10bdbb41 */
  if (C.zf) goto L_10bdbb41;
  /* 10bdbb3c jmp 0x10bdbbe0 */
  goto L_10bdbbe0;
L_10bdbb41:;
  /* 10bdbb41 jmp 0x10bdbbdb */
  goto L_10bdbbdb;
L_10bdbb46:;
  /* 10bdbb46 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10bdbb48 push 0x10bf9f7c */
  push32((uint32_t)(0x10bf9f7cu));
  /* 10bdbb4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdbb4f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10bdbb54 call 0x10bd2830 */
  push32(0x10bdbb59u); f_10bd2830();
  /* 10bdbb59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbb5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdbb5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbb63 je 0x10bdbbd9 */
  if (C.zf) goto L_10bdbbd9;
  /* 10bdbb65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdbb68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbb6b mov dword ptr [eax*4 + 0x10bffde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10bffde0), (ECX));
  /* 10bdbb72 mov edx, dword ptr [0x10bfff1c] */
  EDX = (r32((uint32_t)(0x10bfff1c)));
  /* 10bdbb78 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbb7b mov dword ptr [0x10bfff1c], edx */
  w32((uint32_t)(0x10bfff1c), (EDX));
  /* 10bdbb81 jmp 0x10bdbb8c */
  goto L_10bdbb8c;
L_10bdbb83:;
  /* 10bdbb83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbb86 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbb89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bdbb8c:;
  /* 10bdbb8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdbb8f mov edx, dword ptr [ecx*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdbb96 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbb9c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbb9f jae 0x10bdbbc4 */
  if (!C.cf) goto L_10bdbbc4;
  /* 10bdbba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbba4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10bdbba8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbbab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10bdbbb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbbb4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10bdbbb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbbbb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10bdbbc2 jmp 0x10bdbb83 */
  goto L_10bdbb83;
L_10bdbbc4:;
  /* 10bdbbc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdbbc7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdbbca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdbbcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdbbd0 push edx */
  push32((uint32_t)(EDX));
  /* 10bdbbd1 call 0x10bdbf20 */
  push32(0x10bdbbd6u); f_10bdbf20();
  /* 10bdbbd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdbbd9:;
  /* 10bdbbd9 jmp 0x10bdbbe0 */
  goto L_10bdbbe0;
L_10bdbbdb:;
  /* 10bdbbdb jmp 0x10bdba31 */
  goto L_10bdba31;
L_10bdbbe0:;
  /* 10bdbbe0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10bdbbe2 call 0x10bd62d0 */
  push32(0x10bdbbe7u); f_10bd62d0();
  /* 10bdbbe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbbea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdbbed pop esi */
  ESI = (pop32());
  /* 10bdbbee mov esp, ebp */
  ESP = (EBP);
  /* 10bdbbf0 pop ebp */
  EBP = (pop32());
  /* 10bdbbf1 ret  */
  ESPCHK(0x10bdba10u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10bdbc00 (183 bytes, 57 insns) */
void f_10bdbc00(void) {
  FTRACE(0x10bdbc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdbc00 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdbc01 mov ebp, esp */
  EBP = (ESP);
  /* 10bdbc03 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdbc04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbc07 cmp eax, dword ptr [0x10bfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbc0d jae 0x10bdbc9a */
  if (!C.cf) goto L_10bdbc9a;
  /* 10bdbc13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbc16 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdbc19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbc1c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdbc1f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbc22 mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdbc29 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbc2d jne 0x10bdbc9a */
  if (!C.zf) goto L_10bdbc9a;
  /* 10bdbc2f cmp dword ptr [0x10bfe408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbc36 jne 0x10bdbc7a */
  if (!C.zf) goto L_10bdbc7a;
  /* 10bdbc38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbc3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bdbc3e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbc42 je 0x10bdbc52 */
  if (C.zf) goto L_10bdbc52;
  /* 10bdbc44 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbc48 je 0x10bdbc60 */
  if (C.zf) goto L_10bdbc60;
  /* 10bdbc4a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbc4e je 0x10bdbc6e */
  if (C.zf) goto L_10bdbc6e;
  /* 10bdbc50 jmp 0x10bdbc7a */
  goto L_10bdbc7a;
L_10bdbc52:;
  /* 10bdbc52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdbc55 push edx */
  push32((uint32_t)(EDX));
  /* 10bdbc56 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10bdbc58 call dword ptr [0x10c0031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0031c))), 0x10bdbc5eu);
  /* 10bdbc5e jmp 0x10bdbc7a */
  goto L_10bdbc7a;
L_10bdbc60:;
  /* 10bdbc60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdbc63 push eax */
  push32((uint32_t)(EAX));
  /* 10bdbc64 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10bdbc66 call dword ptr [0x10c0031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0031c))), 0x10bdbc6cu);
  /* 10bdbc6c jmp 0x10bdbc7a */
  goto L_10bdbc7a;
L_10bdbc6e:;
  /* 10bdbc6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdbc71 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdbc72 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10bdbc74 call dword ptr [0x10c0031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0031c))), 0x10bdbc7au);
L_10bdbc7a:;
  /* 10bdbc7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbc7d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10bdbc80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbc83 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdbc86 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbc89 mov ecx, dword ptr [edx*4 + 0x10bffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bdbc90 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdbc93 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10bdbc96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdbc98 jmp 0x10bdbcb3 */
  goto L_10bdbcb3;
L_10bdbc9a:;
  /* 10bdbc9a call 0x10bda700 */
  push32(0x10bdbc9fu); f_10bda700();
  /* 10bdbc9f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdbca5 call 0x10bda710 */
  push32(0x10bdbcaau); f_10bda710();
  /* 10bdbcaa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bdbcb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10bdbcb3:;
  /* 10bdbcb3 mov esp, ebp */
  ESP = (EBP);
  /* 10bdbcb5 pop ebp */
  EBP = (pop32());
  /* 10bdbcb6 ret  */
  ESPCHK(0x10bdbc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcc0 @ 0x10bdbcc0 (216 bytes, 63 insns) */
void f_10bdbcc0(void) {
  FTRACE(0x10bdbcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdbcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdbcc1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdbcc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdbcc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbcc7 cmp eax, dword ptr [0x10bfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbccd jae 0x10bdbd7b */
  if (!C.cf) goto L_10bdbd7b;
  /* 10bdbcd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbcd6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdbcd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbcdc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdbcdf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbce2 mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdbce9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10bdbcee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdbcf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdbcf3 je 0x10bdbd7b */
  if (C.zf) goto L_10bdbd7b;
  /* 10bdbcf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbcfc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10bdbcff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbd02 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdbd05 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbd08 mov ecx, dword ptr [edx*4 + 0x10bffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bdbd0f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbd13 je 0x10bdbd7b */
  if (C.zf) goto L_10bdbd7b;
  /* 10bdbd15 cmp dword ptr [0x10bfe408], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe408))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbd1c jne 0x10bdbd5a */
  if (!C.zf) goto L_10bdbd5a;
  /* 10bdbd1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbd21 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bdbd24 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbd28 je 0x10bdbd38 */
  if (C.zf) goto L_10bdbd38;
  /* 10bdbd2a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbd2e je 0x10bdbd44 */
  if (C.zf) goto L_10bdbd44;
  /* 10bdbd30 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbd34 je 0x10bdbd50 */
  if (C.zf) goto L_10bdbd50;
  /* 10bdbd36 jmp 0x10bdbd5a */
  goto L_10bdbd5a;
L_10bdbd38:;
  /* 10bdbd38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdbd3a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10bdbd3c call dword ptr [0x10c0031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0031c))), 0x10bdbd42u);
  /* 10bdbd42 jmp 0x10bdbd5a */
  goto L_10bdbd5a;
L_10bdbd44:;
  /* 10bdbd44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdbd46 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10bdbd48 call dword ptr [0x10c0031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0031c))), 0x10bdbd4eu);
  /* 10bdbd4e jmp 0x10bdbd5a */
  goto L_10bdbd5a;
L_10bdbd50:;
  /* 10bdbd50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdbd52 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10bdbd54 call dword ptr [0x10c0031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0031c))), 0x10bdbd5au);
L_10bdbd5a:;
  /* 10bdbd5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbd5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdbd60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbd63 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdbd66 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbd69 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdbd70 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10bdbd77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdbd79 jmp 0x10bdbd94 */
  goto L_10bdbd94;
L_10bdbd7b:;
  /* 10bdbd7b call 0x10bda700 */
  push32(0x10bdbd80u); f_10bda700();
  /* 10bdbd80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdbd86 call 0x10bda710 */
  push32(0x10bdbd8bu); f_10bda710();
  /* 10bdbd8b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bdbd91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10bdbd94:;
  /* 10bdbd94 mov esp, ebp */
  ESP = (EBP);
  /* 10bdbd96 pop ebp */
  EBP = (pop32());
  /* 10bdbd97 ret  */
  ESPCHK(0x10bdbcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bda0 @ 0x10bdbda0 (102 bytes, 30 insns) */
void f_10bdbda0(void) {
  FTRACE(0x10bdbda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdbda0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdbda1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdbda3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbda6 cmp eax, dword ptr [0x10bfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbdac jae 0x10bdbdeb */
  if (!C.cf) goto L_10bdbdeb;
  /* 10bdbdae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbdb1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdbdb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbdb7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdbdba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbdbd mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdbdc4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10bdbdc9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdbdcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdbdce je 0x10bdbdeb */
  if (C.zf) goto L_10bdbdeb;
  /* 10bdbdd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbdd3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10bdbdd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbdd9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdbddc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbddf mov ecx, dword ptr [edx*4 + 0x10bffde0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10bffde0)));
  /* 10bdbde6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10bdbde9 jmp 0x10bdbe04 */
  goto L_10bdbe04;
L_10bdbdeb:;
  /* 10bdbdeb call 0x10bda700 */
  push32(0x10bdbdf0u); f_10bda700();
  /* 10bdbdf0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdbdf6 call 0x10bda710 */
  push32(0x10bdbdfbu); f_10bda710();
  /* 10bdbdfb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bdbe01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10bdbe04:;
  /* 10bdbe04 pop ebp */
  EBP = (pop32());
  /* 10bdbe05 ret  */
  ESPCHK(0x10bdbda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be10 @ 0x10bdbe10 (260 bytes, 83 insns) */
void f_10bdbe10(void) {
  FTRACE(0x10bdbe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdbe10 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdbe11 mov ebp, esp */
  EBP = (ESP);
  /* 10bdbe13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdbe16 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bdbe1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdbe1d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdbe20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdbe22 je 0x10bdbe2d */
  if (C.zf) goto L_10bdbe2d;
  /* 10bdbe24 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10bdbe27 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10bdbe2a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10bdbe2d:;
  /* 10bdbe2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdbe30 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdbe36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdbe38 je 0x10bdbe42 */
  if (C.zf) goto L_10bdbe42;
  /* 10bdbe3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10bdbe3d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10bdbe3f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10bdbe42:;
  /* 10bdbe42 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdbe45 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdbe4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdbe4d je 0x10bdbe58 */
  if (C.zf) goto L_10bdbe58;
  /* 10bdbe4f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10bdbe52 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10bdbe55 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10bdbe58:;
  /* 10bdbe58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbe5b push eax */
  push32((uint32_t)(EAX));
  /* 10bdbe5c call dword ptr [0x10c00294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00294))), 0x10bdbe62u);
  /* 10bdbe62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdbe65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbe69 jne 0x10bdbe82 */
  if (!C.zf) goto L_10bdbe82;
  /* 10bdbe6b call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bdbe71u);
  /* 10bdbe71 push eax */
  push32((uint32_t)(EAX));
  /* 10bdbe72 call 0x10bda660 */
  push32(0x10bdbe77u); f_10bda660();
  /* 10bdbe77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbe7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdbe7d jmp 0x10bdbf10 */
  goto L_10bdbf10;
L_10bdbe82:;
  /* 10bdbe82 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbe86 jne 0x10bdbe93 */
  if (!C.zf) goto L_10bdbe93;
  /* 10bdbe88 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10bdbe8b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10bdbe8e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10bdbe91 jmp 0x10bdbea2 */
  goto L_10bdbea2;
L_10bdbe93:;
  /* 10bdbe93 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbe97 jne 0x10bdbea2 */
  if (!C.zf) goto L_10bdbea2;
  /* 10bdbe99 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10bdbe9c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10bdbe9f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10bdbea2:;
  /* 10bdbea2 call 0x10bdba10 */
  push32(0x10bdbea7u); f_10bdba10();
  /* 10bdbea7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdbeaa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbeae jne 0x10bdbecb */
  if (!C.zf) goto L_10bdbecb;
  /* 10bdbeb0 call 0x10bda700 */
  push32(0x10bdbeb5u); f_10bda700();
  /* 10bdbeb5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10bdbebb call 0x10bda710 */
  push32(0x10bdbec0u); f_10bda710();
  /* 10bdbec0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bdbec6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdbec9 jmp 0x10bdbf10 */
  goto L_10bdbf10;
L_10bdbecb:;
  /* 10bdbecb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbece push eax */
  push32((uint32_t)(EAX));
  /* 10bdbecf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdbed2 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdbed3 call 0x10bdbc00 */
  push32(0x10bdbed8u); f_10bdbc00();
  /* 10bdbed8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbedb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10bdbede or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10bdbee1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10bdbee4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdbee7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdbeea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdbeed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdbef0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbef3 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdbefa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10bdbefd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10bdbf01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdbf04 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdbf05 call 0x10bdbfb0 */
  push32(0x10bdbf0au); f_10bdbfb0();
  /* 10bdbf0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbf0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10bdbf10:;
  /* 10bdbf10 mov esp, ebp */
  ESP = (EBP);
  /* 10bdbf12 pop ebp */
  EBP = (pop32());
  /* 10bdbf13 ret  */
  ESPCHK(0x10bdbe10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf20 @ 0x10bdbf20 (134 bytes, 44 insns) */
void f_10bdbf20(void) {
  FTRACE(0x10bdbf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdbf20 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdbf21 mov ebp, esp */
  EBP = (ESP);
  /* 10bdbf23 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdbf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbf27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdbf2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbf2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdbf30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbf33 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdbf3a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbf3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10bdbf3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbf42 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbf46 jne 0x10bdbf81 */
  if (!C.zf) goto L_10bdbf81;
  /* 10bdbf48 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bdbf4a call 0x10bd6230 */
  push32(0x10bdbf4fu); f_10bd6230();
  /* 10bdbf4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbf52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbf55 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdbf59 jne 0x10bdbf77 */
  if (!C.zf) goto L_10bdbf77;
  /* 10bdbf5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbf5e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbf61 push edx */
  push32((uint32_t)(EDX));
  /* 10bdbf62 call dword ptr [0x10c002d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d4))), 0x10bdbf68u);
  /* 10bdbf68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbf6b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bdbf6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbf71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdbf74 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10bdbf77:;
  /* 10bdbf77 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10bdbf79 call 0x10bd62d0 */
  push32(0x10bdbf7eu); f_10bd62d0();
  /* 10bdbf7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdbf81:;
  /* 10bdbf81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbf84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdbf87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbf8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdbf8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbf90 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdbf97 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10bdbf9b push eax */
  push32((uint32_t)(EAX));
  /* 10bdbf9c call dword ptr [0x10c002d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002d8))), 0x10bdbfa2u);
  /* 10bdbfa2 mov esp, ebp */
  ESP = (EBP);
  /* 10bdbfa4 pop ebp */
  EBP = (pop32());
  /* 10bdbfa5 ret  */
  ESPCHK(0x10bdbf20u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10bdbfb0 (38 bytes, 13 insns) */
void f_10bdbfb0(void) {
  FTRACE(0x10bdbfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdbfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdbfb1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdbfb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbfb6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdbfb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdbfbc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdbfbf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdbfc2 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdbfc9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10bdbfcd push eax */
  push32((uint32_t)(EAX));
  /* 10bdbfce call dword ptr [0x10c002dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002dc))), 0x10bdbfd4u);
  /* 10bdbfd4 pop ebp */
  EBP = (pop32());
  /* 10bdbfd5 ret  */
  ESPCHK(0x10bdbfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfe0 @ 0x10bdbfe0 (218 bytes, 63 insns) */
void f_10bdbfe0(void) {
  FTRACE(0x10bdbfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdbfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdbfe1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdbfe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdbfe6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdbfed push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdbfef call 0x10bd6230 */
  push32(0x10bdbff4u); f_10bd6230();
  /* 10bdbff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdbff7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10bdbffe jmp 0x10bdc009 */
  goto L_10bdc009;
L_10bdc000:;
  /* 10bdc000 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc003 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc006 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bdc009:;
  /* 10bdc009 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc00c cmp ecx, dword ptr [0x10bffae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc012 jge 0x10bdc0a9 */
  if ((C.sf==C.of)) goto L_10bdc0a9;
  /* 10bdc018 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc01b mov eax, dword ptr [0x10bfe7a0] */
  EAX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc020 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc024 je 0x10bdc0a4 */
  if (C.zf) goto L_10bdc0a4;
  /* 10bdc026 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc029 mov edx, dword ptr [0x10bfe7a0] */
  EDX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc02f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10bdc032 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bdc035 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdc03b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdc03d je 0x10bdc061 */
  if (C.zf) goto L_10bdc061;
  /* 10bdc03f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc042 mov eax, dword ptr [0x10bfe7a0] */
  EAX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc047 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10bdc04a push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc04b call 0x10bdcdd0 */
  push32(0x10bdc050u); f_10bdcdd0();
  /* 10bdc050 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc053 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc056 je 0x10bdc061 */
  if (C.zf) goto L_10bdc061;
  /* 10bdc058 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc05b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc05e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10bdc061:;
  /* 10bdc061 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc065 jl 0x10bdc0a4 */
  if ((C.sf!=C.of)) goto L_10bdc0a4;
  /* 10bdc067 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc06a mov ecx, dword ptr [0x10bfe7a0] */
  ECX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc070 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10bdc073 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc076 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc077 call dword ptr [0x10c0029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0029c))), 0x10bdc07du);
  /* 10bdc07d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc07f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc082 mov ecx, dword ptr [0x10bfe7a0] */
  ECX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc088 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10bdc08b push edx */
  push32((uint32_t)(EDX));
  /* 10bdc08c call 0x10bd32c0 */
  push32(0x10bdc091u); f_10bd32c0();
  /* 10bdc091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc094 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc097 mov ecx, dword ptr [0x10bfe7a0] */
  ECX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc09d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10bdc0a4:;
  /* 10bdc0a4 jmp 0x10bdc000 */
  goto L_10bdc000;
L_10bdc0a9:;
  /* 10bdc0a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc0ab call 0x10bd62d0 */
  push32(0x10bdc0b0u); f_10bd62d0();
  /* 10bdc0b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc0b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc0b6 mov esp, ebp */
  ESP = (EBP);
  /* 10bdc0b8 pop ebp */
  EBP = (pop32());
  /* 10bdc0b9 ret  */
  ESPCHK(0x10bdbfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x10bdc0c0 (68 bytes, 26 insns) */
void f_10bdc0c0(void) {
  FTRACE(0x10bdc0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc0c1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc0c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc0c8 jne 0x10bdc0d6 */
  if (!C.zf) goto L_10bdc0d6;
  /* 10bdc0ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdc0cc call 0x10bdc230 */
  push32(0x10bdc0d1u); f_10bdc230();
  /* 10bdc0d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc0d4 jmp 0x10bdc100 */
  goto L_10bdc100;
L_10bdc0d6:;
  /* 10bdc0d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc0d9 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc0da call 0x10bdb640 */
  push32(0x10bdc0dfu); f_10bdb640();
  /* 10bdc0df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc0e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc0e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc0e6 call 0x10bdc110 */
  push32(0x10bdc0ebu); f_10bdc110();
  /* 10bdc0eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc0ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdc0f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc0f4 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc0f5 call 0x10bdb6b0 */
  push32(0x10bdc0fau); f_10bdb6b0();
  /* 10bdc0fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc0fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bdc100:;
  /* 10bdc100 mov esp, ebp */
  ESP = (EBP);
  /* 10bdc102 pop ebp */
  EBP = (pop32());
  /* 10bdc103 ret  */
  ESPCHK(0x10bdc0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c110 @ 0x10bdc110 (65 bytes, 26 insns) */
void f_10bdc110(void) {
  FTRACE(0x10bdc110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc110 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc111 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc116 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc117 call 0x10bdc160 */
  push32(0x10bdc11cu); f_10bdc160();
  /* 10bdc11c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc11f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc121 je 0x10bdc128 */
  if (C.zf) goto L_10bdc128;
  /* 10bdc123 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdc126 jmp 0x10bdc14f */
  goto L_10bdc14f;
L_10bdc128:;
  /* 10bdc128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc12b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdc12e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdc134 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdc136 je 0x10bdc14d */
  if (C.zf) goto L_10bdc14d;
  /* 10bdc138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc13b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bdc13e push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc13f call 0x10bdcf20 */
  push32(0x10bdc144u); f_10bdcf20();
  /* 10bdc144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc147 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bdc149 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc14b jmp 0x10bdc14f */
  goto L_10bdc14f;
L_10bdc14d:;
  /* 10bdc14d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bdc14f:;
  /* 10bdc14f pop ebp */
  EBP = (pop32());
  /* 10bdc150 ret  */
  ESPCHK(0x10bdc110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c160 @ 0x10bdc160 (183 bytes, 62 insns) */
void f_10bdc160(void) {
  FTRACE(0x10bdc160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc160 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc161 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc163 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdc16d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc170 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdc173 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc176 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdc179 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdc17c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc17f jne 0x10bdc1fb */
  if (!C.zf) goto L_10bdc1fb;
  /* 10bdc181 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc184 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bdc187 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdc18d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdc18f je 0x10bdc1fb */
  if (C.zf) goto L_10bdc1fb;
  /* 10bdc191 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc197 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10bdc199 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc19c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdc19f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc1a3 jle 0x10bdc1fb */
  if ((C.zf||C.sf!=C.of)) goto L_10bdc1fb;
  /* 10bdc1a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc1a8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc1a9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc1ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bdc1af push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc1b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc1b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10bdc1b6 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc1b7 call 0x10bdb0d0 */
  push32(0x10bdc1bcu); f_10bdb0d0();
  /* 10bdc1bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc1bf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc1c2 jne 0x10bdc1e5 */
  if (!C.zf) goto L_10bdc1e5;
  /* 10bdc1c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc1c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdc1ca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdc1d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdc1d2 je 0x10bdc1e3 */
  if (C.zf) goto L_10bdc1e3;
  /* 10bdc1d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc1d7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bdc1da and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdc1dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc1e0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10bdc1e3:;
  /* 10bdc1e3 jmp 0x10bdc1fb */
  goto L_10bdc1fb;
L_10bdc1e5:;
  /* 10bdc1e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc1e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bdc1eb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdc1ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc1f1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10bdc1f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10bdc1fb:;
  /* 10bdc1fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc1fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc201 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bdc204 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bdc206 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc209 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10bdc210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc213 mov esp, ebp */
  ESP = (EBP);
  /* 10bdc215 pop ebp */
  EBP = (pop32());
  /* 10bdc216 ret  */
  ESPCHK(0x10bdc160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c220 @ 0x10bdc220 (15 bytes, 7 insns) */
void f_10bdc220(void) {
  FTRACE(0x10bdc220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc220 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc221 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc223 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdc225 call 0x10bdc230 */
  push32(0x10bdc22au); f_10bdc230();
  /* 10bdc22a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc22d pop ebp */
  EBP = (pop32());
  /* 10bdc22e ret  */
  ESPCHK(0x10bdc220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c230 @ 0x10bdc230 (319 bytes, 94 insns) */
void f_10bdc230(void) {
  FTRACE(0x10bdc230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc230 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc231 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc236 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdc23d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdc244 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc246 call 0x10bd6230 */
  push32(0x10bdc24bu); f_10bd6230();
  /* 10bdc24b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc24e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bdc255 jmp 0x10bdc260 */
  goto L_10bdc260;
L_10bdc257:;
  /* 10bdc257 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc25a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc25d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bdc260:;
  /* 10bdc260 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc263 cmp ecx, dword ptr [0x10bffae0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10bffae0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc269 jge 0x10bdc353 */
  if ((C.sf==C.of)) goto L_10bdc353;
  /* 10bdc26f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc272 mov eax, dword ptr [0x10bfe7a0] */
  EAX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc277 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc27b je 0x10bdc34e */
  if (C.zf) goto L_10bdc34e;
  /* 10bdc281 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc284 mov edx, dword ptr [0x10bfe7a0] */
  EDX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc28a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10bdc28d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bdc290 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdc296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdc298 je 0x10bdc34e */
  if (C.zf) goto L_10bdc34e;
  /* 10bdc29e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc2a1 mov eax, dword ptr [0x10bfe7a0] */
  EAX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc2a6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10bdc2a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc2aa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc2ad push edx */
  push32((uint32_t)(EDX));
  /* 10bdc2ae call 0x10bdb680 */
  push32(0x10bdc2b3u); f_10bdb680();
  /* 10bdc2b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc2b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc2b9 mov ecx, dword ptr [0x10bfe7a0] */
  ECX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc2bf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10bdc2c2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bdc2c5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdc2ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc2cc je 0x10bdc335 */
  if (C.zf) goto L_10bdc335;
  /* 10bdc2ce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc2d2 jne 0x10bdc2f9 */
  if (!C.zf) goto L_10bdc2f9;
  /* 10bdc2d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc2d7 mov edx, dword ptr [0x10bfe7a0] */
  EDX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc2dd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10bdc2e0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc2e1 call 0x10bdc110 */
  push32(0x10bdc2e6u); f_10bdc110();
  /* 10bdc2e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc2e9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc2ec je 0x10bdc2f7 */
  if (C.zf) goto L_10bdc2f7;
  /* 10bdc2ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc2f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc2f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bdc2f7:;
  /* 10bdc2f7 jmp 0x10bdc335 */
  goto L_10bdc335;
L_10bdc2f9:;
  /* 10bdc2f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc2fd jne 0x10bdc335 */
  if (!C.zf) goto L_10bdc335;
  /* 10bdc2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc302 mov eax, dword ptr [0x10bfe7a0] */
  EAX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc307 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10bdc30a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdc30d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdc310 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdc312 je 0x10bdc335 */
  if (C.zf) goto L_10bdc335;
  /* 10bdc314 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc317 mov ecx, dword ptr [0x10bfe7a0] */
  ECX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc31d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10bdc320 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc321 call 0x10bdc110 */
  push32(0x10bdc326u); f_10bdc110();
  /* 10bdc326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc329 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc32c jne 0x10bdc335 */
  if (!C.zf) goto L_10bdc335;
  /* 10bdc32e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10bdc335:;
  /* 10bdc335 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc338 mov ecx, dword ptr [0x10bfe7a0] */
  ECX = (r32((uint32_t)(0x10bfe7a0)));
  /* 10bdc33e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10bdc341 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc342 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc345 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc346 call 0x10bdb6f0 */
  push32(0x10bdc34bu); f_10bdb6f0();
  /* 10bdc34b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdc34e:;
  /* 10bdc34e jmp 0x10bdc257 */
  goto L_10bdc257;
L_10bdc353:;
  /* 10bdc353 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc355 call 0x10bd62d0 */
  push32(0x10bdc35au); f_10bd62d0();
  /* 10bdc35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc35d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc361 jne 0x10bdc368 */
  if (!C.zf) goto L_10bdc368;
  /* 10bdc363 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc366 jmp 0x10bdc36b */
  goto L_10bdc36b;
L_10bdc368:;
  /* 10bdc368 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10bdc36b:;
  /* 10bdc36b mov esp, ebp */
  ESP = (EBP);
  /* 10bdc36d pop ebp */
  EBP = (pop32());
  /* 10bdc36e ret  */
  ESPCHK(0x10bdc230u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10bdc370 (15 bytes, 7 insns) */
void f_10bdc370(void) {
  FTRACE(0x10bdc370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc370 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc371 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc373 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc375 call 0x10bd17a0 */
  push32(0x10bdc37au); f_10bd17a0();
  /* 10bdc37a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc37d pop ebp */
  EBP = (pop32());
  /* 10bdc37e ret  */
  ESPCHK(0x10bdc370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c380 @ 0x10bdc380 (1007 bytes, 269 insns) */
void f_10bdc380(void) {
  FTRACE(0x10bdc380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc380 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc381 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc383 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc389 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc38d jl 0x10bdc395 */
  if ((C.sf!=C.of)) goto L_10bdc395;
  /* 10bdc38f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc393 jle 0x10bdc39c */
  if ((C.zf||C.sf!=C.of)) goto L_10bdc39c;
L_10bdc395:;
  /* 10bdc395 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdc397 jmp 0x10bdc76b */
  goto L_10bdc76b;
L_10bdc39c:;
  /* 10bdc39c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bdc39e call 0x10bd6230 */
  push32(0x10bdc3a3u); f_10bd6230();
  /* 10bdc3a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc3a6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bdc3ad mov eax, dword ptr [0x10bfe78c] */
  EAX = (r32((uint32_t)(0x10bfe78c)));
  /* 10bdc3b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc3b5 mov dword ptr [0x10bfe78c], eax */
  w32((uint32_t)(0x10bfe78c), (EAX));
L_10bdc3ba:;
  /* 10bdc3ba cmp dword ptr [0x10bfe79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc3c1 je 0x10bdc3cd */
  if (C.zf) goto L_10bdc3cd;
  /* 10bdc3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdc3c5 call dword ptr [0x10c00320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00320))), 0x10bdc3cbu);
  /* 10bdc3cb jmp 0x10bdc3ba */
  goto L_10bdc3ba;
L_10bdc3cd:;
  /* 10bdc3cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc3d1 je 0x10bdc411 */
  if (C.zf) goto L_10bdc411;
  /* 10bdc3d3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc3d7 je 0x10bdc3f1 */
  if (C.zf) goto L_10bdc3f1;
  /* 10bdc3d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdc3dc push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc3dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc3e0 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc3e1 call 0x10bdc770 */
  push32(0x10bdc3e6u); f_10bdc770();
  /* 10bdc3e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc3e9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10bdc3ef jmp 0x10bdc403 */
  goto L_10bdc403;
L_10bdc3f1:;
  /* 10bdc3f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc3f4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc3f7 mov ecx, dword ptr [eax + 0x10bfd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10bfd4dc)));
  /* 10bdc3fd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10bdc403:;
  /* 10bdc403 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10bdc409 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bdc40c jmp 0x10bdc74b */
  goto L_10bdc74b;
L_10bdc411:;
  /* 10bdc411 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10bdc418 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bdc41f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc423 je 0x10bdc743 */
  if (C.zf) goto L_10bdc743;
  /* 10bdc429 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdc42c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bdc42f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc432 jne 0x10bdc654 */
  if (!C.zf) goto L_10bdc654;
  /* 10bdc438 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdc43b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10bdc43f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc442 jne 0x10bdc654 */
  if (!C.zf) goto L_10bdc654;
  /* 10bdc448 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdc44b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10bdc44f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc452 jne 0x10bdc654 */
  if (!C.zf) goto L_10bdc654;
  /* 10bdc458 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdc45b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10bdc461:;
  /* 10bdc461 push 0x10bf9fcc */
  push32((uint32_t)(0x10bf9fccu));
  /* 10bdc466 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10bdc46c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc46d call 0x10bde5d0 */
  push32(0x10bdc472u); f_10bde5d0();
  /* 10bdc472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc475 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10bdc47b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc482 je 0x10bdc4ad */
  if (C.zf) goto L_10bdc4ad;
  /* 10bdc484 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc48a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc490 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10bdc496 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc49d je 0x10bdc4ad */
  if (C.zf) goto L_10bdc4ad;
  /* 10bdc49f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc4a5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bdc4a8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc4ab jne 0x10bdc4d3 */
  if (!C.zf) goto L_10bdc4d3;
L_10bdc4ad:;
  /* 10bdc4ad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc4b1 je 0x10bdc4cc */
  if (C.zf) goto L_10bdc4cc;
  /* 10bdc4b3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bdc4b5 call 0x10bd62d0 */
  push32(0x10bdc4bau); f_10bd62d0();
  /* 10bdc4ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc4bd mov edx, dword ptr [0x10bfe78c] */
  EDX = (r32((uint32_t)(0x10bfe78c)));
  /* 10bdc4c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc4c6 mov dword ptr [0x10bfe78c], edx */
  w32((uint32_t)(0x10bfe78c), (EDX));
L_10bdc4cc:;
  /* 10bdc4cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdc4ce jmp 0x10bdc76b */
  goto L_10bdc76b;
L_10bdc4d3:;
  /* 10bdc4d3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10bdc4da jmp 0x10bdc4e5 */
  goto L_10bdc4e5;
L_10bdc4dc:;
  /* 10bdc4dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdc4df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc4e2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10bdc4e5:;
  /* 10bdc4e5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc4e9 jg 0x10bdc533 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bdc533;
  /* 10bdc4eb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10bdc4f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc4f2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10bdc4f8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc4f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdc4fc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc4ff mov ecx, dword ptr [eax + 0x10bfd4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10bfd4d8)));
  /* 10bdc505 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc506 call 0x10bde590 */
  push32(0x10bdc50bu); f_10bde590();
  /* 10bdc50b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc50e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc510 jne 0x10bdc531 */
  if (!C.zf) goto L_10bdc531;
  /* 10bdc512 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdc515 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc518 mov eax, dword ptr [edx + 0x10bfd4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10bfd4d8)));
  /* 10bdc51e push eax */
  push32((uint32_t)(EAX));
  /* 10bdc51f call 0x10bd5660 */
  push32(0x10bdc524u); f_10bd5660();
  /* 10bdc524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc527 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc52d jne 0x10bdc531 */
  if (!C.zf) goto L_10bdc531;
  /* 10bdc52f jmp 0x10bdc533 */
  goto L_10bdc533;
L_10bdc531:;
  /* 10bdc531 jmp 0x10bdc4dc */
  goto L_10bdc4dc;
L_10bdc533:;
  /* 10bdc533 push 0x10bf9fc8 */
  push32((uint32_t)(0x10bf9fc8u));
  /* 10bdc538 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc53e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc541 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10bdc547 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc54d push edx */
  push32((uint32_t)(EDX));
  /* 10bdc54e call 0x10bde550 */
  push32(0x10bdc553u); f_10bde550();
  /* 10bdc553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc556 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10bdc55c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc563 jne 0x10bdc599 */
  if (!C.zf) goto L_10bdc599;
  /* 10bdc565 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc56b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bdc56e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc571 je 0x10bdc599 */
  if (C.zf) goto L_10bdc599;
  /* 10bdc573 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc577 je 0x10bdc592 */
  if (C.zf) goto L_10bdc592;
  /* 10bdc579 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bdc57b call 0x10bd62d0 */
  push32(0x10bdc580u); f_10bd62d0();
  /* 10bdc580 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc583 mov edx, dword ptr [0x10bfe78c] */
  EDX = (r32((uint32_t)(0x10bfe78c)));
  /* 10bdc589 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc58c mov dword ptr [0x10bfe78c], edx */
  w32((uint32_t)(0x10bfe78c), (EDX));
L_10bdc592:;
  /* 10bdc592 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdc594 jmp 0x10bdc76b */
  goto L_10bdc76b;
L_10bdc599:;
  /* 10bdc599 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc59d jg 0x10bdc5ea */
  if ((!C.zf&&C.sf==C.of)) goto L_10bdc5ea;
  /* 10bdc59f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10bdc5a5 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc5a6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc5ac push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc5ad lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10bdc5b3 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc5b4 call 0x10bd6050 */
  push32(0x10bdc5b9u); f_10bd6050();
  /* 10bdc5b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc5bc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10bdc5c2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10bdc5ca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10bdc5d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc5d1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdc5d4 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc5d5 call 0x10bdc770 */
  push32(0x10bdc5dau); f_10bdc770();
  /* 10bdc5da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc5dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc5df je 0x10bdc5ea */
  if (C.zf) goto L_10bdc5ea;
  /* 10bdc5e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc5e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc5e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bdc5ea:;
  /* 10bdc5ea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc5f0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc5f6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10bdc5fc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10bdc602 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bdc605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc607 je 0x10bdc618 */
  if (C.zf) goto L_10bdc618;
  /* 10bdc609 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10bdc60f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc612 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10bdc618:;
  /* 10bdc618 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10bdc61e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bdc621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc623 jne 0x10bdc461 */
  if (!C.zf) goto L_10bdc461;
  /* 10bdc629 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc62d je 0x10bdc63c */
  if (C.zf) goto L_10bdc63c;
  /* 10bdc62f call 0x10bdc910 */
  push32(0x10bdc634u); f_10bdc910();
  /* 10bdc634 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10bdc63a jmp 0x10bdc646 */
  goto L_10bdc646;
L_10bdc63c:;
  /* 10bdc63c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10bdc646:;
  /* 10bdc646 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10bdc64c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdc64f jmp 0x10bdc741 */
  goto L_10bdc741;
L_10bdc654:;
  /* 10bdc654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc657 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc658 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdc65a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdc65c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10bdc662 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdc666 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc667 call 0x10bdca10 */
  push32(0x10bdc66cu); f_10bdca10();
  /* 10bdc66c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc66f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdc672 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc676 je 0x10bdc741 */
  if (C.zf) goto L_10bdc741;
  /* 10bdc67c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdc683 jmp 0x10bdc68e */
  goto L_10bdc68e;
L_10bdc685:;
  /* 10bdc685 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdc688 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc68b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10bdc68e:;
  /* 10bdc68e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc692 jg 0x10bdc6f0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bdc6f0;
  /* 10bdc694 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc698 je 0x10bdc6ee */
  if (C.zf) goto L_10bdc6ee;
  /* 10bdc69a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdc69d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc6a0 mov ecx, dword ptr [eax + 0x10bfd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10bfd4dc)));
  /* 10bdc6a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc6a7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10bdc6ad push edx */
  push32((uint32_t)(EDX));
  /* 10bdc6ae call 0x10bde4c0 */
  push32(0x10bdc6b3u); f_10bde4c0();
  /* 10bdc6b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc6b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc6b8 je 0x10bdc6e5 */
  if (C.zf) goto L_10bdc6e5;
  /* 10bdc6ba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10bdc6c0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc6c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdc6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc6c5 call 0x10bdc770 */
  push32(0x10bdc6cau); f_10bdc770();
  /* 10bdc6ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc6cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc6cf je 0x10bdc6dc */
  if (C.zf) goto L_10bdc6dc;
  /* 10bdc6d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc6d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc6d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10bdc6da jmp 0x10bdc6e3 */
  goto L_10bdc6e3;
L_10bdc6dc:;
  /* 10bdc6dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10bdc6e3:;
  /* 10bdc6e3 jmp 0x10bdc6ee */
  goto L_10bdc6ee;
L_10bdc6e5:;
  /* 10bdc6e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc6e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc6eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10bdc6ee:;
  /* 10bdc6ee jmp 0x10bdc685 */
  goto L_10bdc685;
L_10bdc6f0:;
  /* 10bdc6f0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc6f4 je 0x10bdc71b */
  if (C.zf) goto L_10bdc71b;
  /* 10bdc6f6 call 0x10bdc910 */
  push32(0x10bdc6fbu); f_10bdc910();
  /* 10bdc6fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdc6fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc700 mov ecx, dword ptr [0x10bfd4dc] */
  ECX = (r32((uint32_t)(0x10bfd4dc)));
  /* 10bdc706 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc707 call 0x10bd32c0 */
  push32(0x10bdc70cu); f_10bd32c0();
  /* 10bdc70c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc70f mov dword ptr [0x10bfd4dc], 0 */
  w32((uint32_t)(0x10bfd4dc), (0x0u));
  /* 10bdc719 jmp 0x10bdc741 */
  goto L_10bdc741;
L_10bdc71b:;
  /* 10bdc71b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc71f je 0x10bdc72e */
  if (C.zf) goto L_10bdc72e;
  /* 10bdc721 call 0x10bdc910 */
  push32(0x10bdc726u); f_10bdc910();
  /* 10bdc726 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10bdc72c jmp 0x10bdc738 */
  goto L_10bdc738;
L_10bdc72e:;
  /* 10bdc72e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10bdc738:;
  /* 10bdc738 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10bdc73e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10bdc741:;
  /* 10bdc741 jmp 0x10bdc74b */
  goto L_10bdc74b;
L_10bdc743:;
  /* 10bdc743 call 0x10bdc910 */
  push32(0x10bdc748u); f_10bdc910();
  /* 10bdc748 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bdc74b:;
  /* 10bdc74b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc74f je 0x10bdc768 */
  if (C.zf) goto L_10bdc768;
  /* 10bdc751 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10bdc753 call 0x10bd62d0 */
  push32(0x10bdc758u); f_10bd62d0();
  /* 10bdc758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc75b mov eax, dword ptr [0x10bfe78c] */
  EAX = (r32((uint32_t)(0x10bfe78c)));
  /* 10bdc760 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc763 mov dword ptr [0x10bfe78c], eax */
  w32((uint32_t)(0x10bfe78c), (EAX));
L_10bdc768:;
  /* 10bdc768 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10bdc76b:;
  /* 10bdc76b mov esp, ebp */
  ESP = (EBP);
  /* 10bdc76d pop ebp */
  EBP = (pop32());
  /* 10bdc76e ret  */
  ESPCHK(0x10bdc380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x10bdc770 (403 bytes, 117 insns) */
void f_10bdc770(void) {
  FTRACE(0x10bdc770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc770 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc771 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc773 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc779 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc77c push eax */
  push32((uint32_t)(EAX));
  /* 10bdc77d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10bdc783 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc784 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10bdc78a push edx */
  push32((uint32_t)(EDX));
  /* 10bdc78b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10bdc791 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc792 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdc795 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc796 call 0x10bdca10 */
  push32(0x10bdc79bu); f_10bdca10();
  /* 10bdc79b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc79e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc7a0 jne 0x10bdc7a9 */
  if (!C.zf) goto L_10bdc7a9;
  /* 10bdc7a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdc7a4 jmp 0x10bdc8ff */
  goto L_10bdc8ff;
L_10bdc7a9:;
  /* 10bdc7a9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10bdc7ae push 0x10bf9fd0 */
  push32((uint32_t)(0x10bf9fd0u));
  /* 10bdc7b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc7b5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10bdc7bb push edx */
  push32((uint32_t)(EDX));
  /* 10bdc7bc call 0x10bd5660 */
  push32(0x10bdc7c1u); f_10bd5660();
  /* 10bdc7c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc7c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc7c7 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc7c8 call 0x10bd2830 */
  push32(0x10bdc7cdu); f_10bd2830();
  /* 10bdc7cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc7d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdc7d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc7d7 jne 0x10bdc7e0 */
  if (!C.zf) goto L_10bdc7e0;
  /* 10bdc7d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdc7db jmp 0x10bdc8ff */
  goto L_10bdc8ff;
L_10bdc7e0:;
  /* 10bdc7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc7e3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc7e6 mov ecx, dword ptr [eax + 0x10bfd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10bfd4dc)));
  /* 10bdc7ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdc7ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc7f2 mov eax, dword ptr [edx*4 + 0x10bfe608] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10bfe608)));
  /* 10bdc7f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdc7fc push 6 */
  push32((uint32_t)(0x6u));
  /* 10bdc7fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc801 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc804 add ecx, 0x10bfe658 */
  { uint32_t _a=(ECX),_b=(0x10bfe658u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc80a push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc80b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10bdc80e push edx */
  push32((uint32_t)(EDX));
  /* 10bdc80f call 0x10bd9110 */
  push32(0x10bdc814u); f_10bd9110();
  /* 10bdc814 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc817 mov eax, dword ptr [0x10bfe620] */
  EAX = (r32((uint32_t)(0x10bfe620)));
  /* 10bdc81c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bdc81f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10bdc825 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc826 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc829 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc82a call 0x10bd57e0 */
  push32(0x10bdc82fu); f_10bd57e0();
  /* 10bdc82f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc832 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc835 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc838 mov dword ptr [ecx + 0x10bfd4dc], eax */
  w32((uint32_t)(ECX + 0x10bfd4dc), (EAX));
  /* 10bdc83e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10bdc844 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdc84a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc84d mov dword ptr [eax*4 + 0x10bfe608], edx */
  w32((uint32_t)(EAX*4 + 0x10bfe608), (EDX));
  /* 10bdc854 push 6 */
  push32((uint32_t)(0x6u));
  /* 10bdc856 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10bdc85c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc85d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc860 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc863 add edx, 0x10bfe658 */
  { uint32_t _a=(EDX),_b=(0x10bfe658u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc869 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc86a call 0x10bd9110 */
  push32(0x10bdc86fu); f_10bd9110();
  /* 10bdc86f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc872 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc876 jne 0x10bdc883 */
  if (!C.zf) goto L_10bdc883;
  /* 10bdc878 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc87e mov dword ptr [0x10bfe620], eax */
  w32((uint32_t)(0x10bfe620), (EAX));
L_10bdc883:;
  /* 10bdc883 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc887 jne 0x10bdc895 */
  if (!C.zf) goto L_10bdc895;
  /* 10bdc889 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10bdc88f mov dword ptr [0x10bfe624], ecx */
  w32((uint32_t)(0x10bfe624), (ECX));
L_10bdc895:;
  /* 10bdc895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc898 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc89b call dword ptr [edx + 0x10bfd4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10bfd4e0))), 0x10bdc8a1u);
  /* 10bdc8a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc8a3 je 0x10bdc8dc */
  if (C.zf) goto L_10bdc8dc;
  /* 10bdc8a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc8a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc8ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc8ae mov dword ptr [eax + 0x10bfd4dc], ecx */
  w32((uint32_t)(EAX + 0x10bfd4dc), (ECX));
  /* 10bdc8b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc8b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdc8b9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc8ba call 0x10bd32c0 */
  push32(0x10bdc8bfu); f_10bd32c0();
  /* 10bdc8bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc8c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc8c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc8c8 mov dword ptr [eax*4 + 0x10bfe608], ecx */
  w32((uint32_t)(EAX*4 + 0x10bfe608), (ECX));
  /* 10bdc8cf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdc8d2 mov dword ptr [0x10bfe620], edx */
  w32((uint32_t)(0x10bfe620), (EDX));
  /* 10bdc8d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdc8da jmp 0x10bdc8ff */
  goto L_10bdc8ff;
L_10bdc8dc:;
  /* 10bdc8dc cmp dword ptr [ebp - 0xc], 0x10bfd3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10bfd3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc8e3 je 0x10bdc8f3 */
  if (C.zf) goto L_10bdc8f3;
  /* 10bdc8e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc8e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdc8ea push eax */
  push32((uint32_t)(EAX));
  /* 10bdc8eb call 0x10bd32c0 */
  push32(0x10bdc8f0u); f_10bd32c0();
  /* 10bdc8f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdc8f3:;
  /* 10bdc8f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdc8f6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc8f9 mov eax, dword ptr [ecx + 0x10bfd4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10bfd4dc)));
L_10bdc8ff:;
  /* 10bdc8ff mov esp, ebp */
  ESP = (EBP);
  /* 10bdc901 pop ebp */
  EBP = (pop32());
  /* 10bdc902 ret  */
  ESPCHK(0x10bdc770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c910 @ 0x10bdc910 (256 bytes, 72 insns) */
void f_10bdc910(void) {
  FTRACE(0x10bdc910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdc910 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdc911 mov ebp, esp */
  EBP = (ESP);
  /* 10bdc913 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdc916 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10bdc91d cmp dword ptr [0x10bfd4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfd4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc924 jne 0x10bdc944 */
  if (!C.zf) goto L_10bdc944;
  /* 10bdc926 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10bdc92b push 0x10bf9fd0 */
  push32((uint32_t)(0x10bf9fd0u));
  /* 10bdc930 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc932 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10bdc937 call 0x10bd2830 */
  push32(0x10bdc93cu); f_10bd2830();
  /* 10bdc93c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc93f mov dword ptr [0x10bfd4dc], eax */
  w32((uint32_t)(0x10bfd4dc), (EAX));
L_10bdc944:;
  /* 10bdc944 mov eax, dword ptr [0x10bfd4dc] */
  EAX = (r32((uint32_t)(0x10bfd4dc)));
  /* 10bdc949 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10bdc94c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10bdc953 jmp 0x10bdc95e */
  goto L_10bdc95e;
L_10bdc955:;
  /* 10bdc955 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc958 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc95b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10bdc95e:;
  /* 10bdc95e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc961 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc964 mov eax, dword ptr [edx + 0x10bfd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10bfd4dc)));
  /* 10bdc96a push eax */
  push32((uint32_t)(EAX));
  /* 10bdc96b push 0x10bf9fdc */
  push32((uint32_t)(0x10bf9fdcu));
  /* 10bdc970 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc973 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc976 mov edx, dword ptr [ecx + 0x10bfd4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10bfd4d8)));
  /* 10bdc97c push edx */
  push32((uint32_t)(EDX));
  /* 10bdc97d push 3 */
  push32((uint32_t)(0x3u));
  /* 10bdc97f mov eax, dword ptr [0x10bfd4dc] */
  EAX = (r32((uint32_t)(0x10bfd4dc)));
  /* 10bdc984 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc985 call 0x10bdcbb0 */
  push32(0x10bdc98au); f_10bdcbb0();
  /* 10bdc98a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc98d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc991 jge 0x10bdc9d9 */
  if ((C.sf==C.of)) goto L_10bdc9d9;
  /* 10bdc993 push 0x10bf9fc8 */
  push32((uint32_t)(0x10bf9fc8u));
  /* 10bdc998 mov ecx, dword ptr [0x10bfd4dc] */
  ECX = (r32((uint32_t)(0x10bfd4dc)));
  /* 10bdc99e push ecx */
  push32((uint32_t)(ECX));
  /* 10bdc99f call 0x10bd57f0 */
  push32(0x10bdc9a4u); f_10bd57f0();
  /* 10bdc9a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc9a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc9aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc9ad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc9b0 mov eax, dword ptr [edx + 0x10bfd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10bfd4dc)));
  /* 10bdc9b6 push eax */
  push32((uint32_t)(EAX));
  /* 10bdc9b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdc9ba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdc9bd mov edx, dword ptr [ecx + 0x10bfd4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10bfd4dc)));
  /* 10bdc9c3 push edx */
  push32((uint32_t)(EDX));
  /* 10bdc9c4 call 0x10bde4c0 */
  push32(0x10bdc9c9u); f_10bde4c0();
  /* 10bdc9c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc9cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdc9ce je 0x10bdc9d7 */
  if (C.zf) goto L_10bdc9d7;
  /* 10bdc9d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10bdc9d7:;
  /* 10bdc9d7 jmp 0x10bdca07 */
  goto L_10bdca07;
L_10bdc9d9:;
  /* 10bdc9d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdc9dd jne 0x10bdc9e6 */
  if (!C.zf) goto L_10bdc9e6;
  /* 10bdc9df mov eax, dword ptr [0x10bfd4dc] */
  EAX = (r32((uint32_t)(0x10bfd4dc)));
  /* 10bdc9e4 jmp 0x10bdca0c */
  goto L_10bdca0c;
L_10bdc9e6:;
  /* 10bdc9e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdc9e8 mov eax, dword ptr [0x10bfd4dc] */
  EAX = (r32((uint32_t)(0x10bfd4dc)));
  /* 10bdc9ed push eax */
  push32((uint32_t)(EAX));
  /* 10bdc9ee call 0x10bd32c0 */
  push32(0x10bdc9f3u); f_10bd32c0();
  /* 10bdc9f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdc9f6 mov dword ptr [0x10bfd4dc], 0 */
  w32((uint32_t)(0x10bfd4dc), (0x0u));
  /* 10bdca00 mov eax, dword ptr [0x10bfd4f4] */
  EAX = (r32((uint32_t)(0x10bfd4f4)));
  /* 10bdca05 jmp 0x10bdca0c */
  goto L_10bdca0c;
L_10bdca07:;
  /* 10bdca07 jmp 0x10bdc955 */
  goto L_10bdc955;
L_10bdca0c:;
  /* 10bdca0c mov esp, ebp */
  ESP = (EBP);
  /* 10bdca0e pop ebp */
  EBP = (pop32());
  /* 10bdca0f ret  */
  ESPCHK(0x10bdc910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca10 @ 0x10bdca10 (388 bytes, 115 insns) */
void f_10bdca10(void) {
  FTRACE(0x10bdca10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdca10 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdca11 mov ebp, esp */
  EBP = (ESP);
  /* 10bdca13 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdca19 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdca1d jne 0x10bdca26 */
  if (!C.zf) goto L_10bdca26;
  /* 10bdca1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdca21 jmp 0x10bdcb90 */
  goto L_10bdcb90;
L_10bdca26:;
  /* 10bdca26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdca29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bdca2c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdca2f jne 0x10bdca80 */
  if (!C.zf) goto L_10bdca80;
  /* 10bdca31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdca34 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10bdca38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdca3a jne 0x10bdca80 */
  if (!C.zf) goto L_10bdca80;
  /* 10bdca3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdca3f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10bdca42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdca45 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10bdca49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdca4d je 0x10bdca69 */
  if (C.zf) goto L_10bdca69;
  /* 10bdca4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdca52 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10bdca57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdca5a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10bdca60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdca63 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10bdca69:;
  /* 10bdca69 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdca6d je 0x10bdca78 */
  if (C.zf) goto L_10bdca78;
  /* 10bdca6f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdca72 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10bdca78:;
  /* 10bdca78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdca7b jmp 0x10bdcb90 */
  goto L_10bdcb90;
L_10bdca80:;
  /* 10bdca80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdca83 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdca84 push 0x10bfd450 */
  push32((uint32_t)(0x10bfd450u));
  /* 10bdca89 call 0x10bde4c0 */
  push32(0x10bdca8eu); f_10bde4c0();
  /* 10bdca8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdca91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdca93 je 0x10bdcb48 */
  if (C.zf) goto L_10bdcb48;
  /* 10bdca99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdca9c push edx */
  push32((uint32_t)(EDX));
  /* 10bdca9d push 0x10bfd3cc */
  push32((uint32_t)(0x10bfd3ccu));
  /* 10bdcaa2 call 0x10bde4c0 */
  push32(0x10bdcaa7u); f_10bde4c0();
  /* 10bdcaa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcaaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcaac je 0x10bdcb48 */
  if (C.zf) goto L_10bdcb48;
  /* 10bdcab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcab5 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcab6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10bdcabc push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcabd call 0x10bdcc00 */
  push32(0x10bdcac2u); f_10bdcc00();
  /* 10bdcac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcac7 je 0x10bdcad0 */
  if (C.zf) goto L_10bdcad0;
  /* 10bdcac9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcacb jmp 0x10bdcb90 */
  goto L_10bdcb90;
L_10bdcad0:;
  /* 10bdcad0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10bdcad6 push edx */
  push32((uint32_t)(EDX));
  /* 10bdcad7 push 0x10bfe630 */
  push32((uint32_t)(0x10bfe630u));
  /* 10bdcadc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10bdcae2 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcae3 call 0x10bde610 */
  push32(0x10bdcae8u); f_10bde610();
  /* 10bdcae8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcaeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcaed jne 0x10bdcaf6 */
  if (!C.zf) goto L_10bdcaf6;
  /* 10bdcaef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcaf1 jmp 0x10bdcb90 */
  goto L_10bdcb90;
L_10bdcaf6:;
  /* 10bdcaf6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdcaf8 mov cx, word ptr [0x10bfe634] */
  CX = (r16((uint32_t)(0x10bfe634)));
  /* 10bdcaff mov dword ptr [0x10bfe638], ecx */
  w32((uint32_t)(0x10bfe638), (ECX));
  /* 10bdcb05 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10bdcb0b push edx */
  push32((uint32_t)(EDX));
  /* 10bdcb0c push 0x10bfd450 */
  push32((uint32_t)(0x10bfd450u));
  /* 10bdcb11 call 0x10bdcd60 */
  push32(0x10bdcb16u); f_10bdcd60();
  /* 10bdcb16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcb19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcb1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bdcb1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdcb21 je 0x10bdcb36 */
  if (C.zf) goto L_10bdcb36;
  /* 10bdcb23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcb26 push edx */
  push32((uint32_t)(EDX));
  /* 10bdcb27 push 0x10bfd3cc */
  push32((uint32_t)(0x10bfd3ccu));
  /* 10bdcb2c call 0x10bd57e0 */
  push32(0x10bdcb31u); f_10bd57e0();
  /* 10bdcb31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcb34 jmp 0x10bdcb48 */
  goto L_10bdcb48;
L_10bdcb36:;
  /* 10bdcb36 push 0x10bfd450 */
  push32((uint32_t)(0x10bfd450u));
  /* 10bdcb3b push 0x10bfd3cc */
  push32((uint32_t)(0x10bfd3ccu));
  /* 10bdcb40 call 0x10bd57e0 */
  push32(0x10bdcb45u); f_10bd57e0();
  /* 10bdcb45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdcb48:;
  /* 10bdcb48 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcb4c je 0x10bdcb61 */
  if (C.zf) goto L_10bdcb61;
  /* 10bdcb4e push 6 */
  push32((uint32_t)(0x6u));
  /* 10bdcb50 push 0x10bfe630 */
  push32((uint32_t)(0x10bfe630u));
  /* 10bdcb55 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdcb58 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcb59 call 0x10bd9110 */
  push32(0x10bdcb5eu); f_10bd9110();
  /* 10bdcb5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdcb61:;
  /* 10bdcb61 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcb65 je 0x10bdcb7a */
  if (C.zf) goto L_10bdcb7a;
  /* 10bdcb67 push 4 */
  push32((uint32_t)(0x4u));
  /* 10bdcb69 push 0x10bfe638 */
  push32((uint32_t)(0x10bfe638u));
  /* 10bdcb6e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdcb71 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcb72 call 0x10bd9110 */
  push32(0x10bdcb77u); f_10bd9110();
  /* 10bdcb77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdcb7a:;
  /* 10bdcb7a push 0x10bfd450 */
  push32((uint32_t)(0x10bfd450u));
  /* 10bdcb7f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcb82 push edx */
  push32((uint32_t)(EDX));
  /* 10bdcb83 call 0x10bd57e0 */
  push32(0x10bdcb88u); f_10bd57e0();
  /* 10bdcb88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcb8b mov eax, 0x10bfd450 */
  EAX = (0x10bfd450u);
L_10bdcb90:;
  /* 10bdcb90 mov esp, ebp */
  ESP = (EBP);
  /* 10bdcb92 pop ebp */
  EBP = (pop32());
  /* 10bdcb93 ret  */
  ESPCHK(0x10bdca10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cba0 @ 0x10bdcba0 (7 bytes, 5 insns) */
void f_10bdcba0(void) {
  FTRACE(0x10bdcba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdcba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdcba1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdcba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcba5 pop ebp */
  EBP = (pop32());
  /* 10bdcba6 ret  */
  ESPCHK(0x10bdcba0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10bdcbb0 (79 bytes, 28 insns) */
void f_10bdcbb0(void) {
  FTRACE(0x10bdcbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdcbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdcbb1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdcbb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdcbb6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10bdcbb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdcbbc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdcbc3 jmp 0x10bdcbce */
  goto L_10bdcbce;
L_10bdcbc5:;
  /* 10bdcbc5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcbc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcbcb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10bdcbce:;
  /* 10bdcbce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcbd1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcbd4 jge 0x10bdcbf4 */
  if ((C.sf==C.of)) goto L_10bdcbf4;
  /* 10bdcbd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdcbd9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcbdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdcbdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdcbe2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10bdcbe5 push edx */
  push32((uint32_t)(EDX));
  /* 10bdcbe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcbe9 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcbea call 0x10bd57f0 */
  push32(0x10bdcbefu); f_10bd57f0();
  /* 10bdcbef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcbf2 jmp 0x10bdcbc5 */
  goto L_10bdcbc5;
L_10bdcbf4:;
  /* 10bdcbf4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdcbfb mov esp, ebp */
  ESP = (EBP);
  /* 10bdcbfd pop ebp */
  EBP = (pop32());
  /* 10bdcbfe ret  */
  ESPCHK(0x10bdcbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc00 @ 0x10bdcc00 (349 bytes, 122 insns) */
void f_10bdcc00(void) {
  FTRACE(0x10bdcc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdcc00 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdcc01 mov ebp, esp */
  EBP = (ESP);
  /* 10bdcc03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdcc06 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10bdcc0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdcc0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcc10 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcc11 call 0x10bd65a0 */
  push32(0x10bdcc16u); f_10bd65a0();
  /* 10bdcc16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcc19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcc1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bdcc1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdcc21 jne 0x10bdcc2a */
  if (!C.zf) goto L_10bdcc2a;
  /* 10bdcc23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcc25 jmp 0x10bdcd59 */
  goto L_10bdcd59;
L_10bdcc2a:;
  /* 10bdcc2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcc2d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bdcc30 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcc33 jne 0x10bdcc60 */
  if (!C.zf) goto L_10bdcc60;
  /* 10bdcc35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcc38 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10bdcc3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcc3e je 0x10bdcc60 */
  if (C.zf) goto L_10bdcc60;
  /* 10bdcc40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcc43 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcc46 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcc47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcc4a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcc50 push edx */
  push32((uint32_t)(EDX));
  /* 10bdcc51 call 0x10bd57e0 */
  push32(0x10bdcc56u); f_10bd57e0();
  /* 10bdcc56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcc59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcc5b jmp 0x10bdcd59 */
  goto L_10bdcd59;
L_10bdcc60:;
  /* 10bdcc60 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdcc67 jmp 0x10bdcc72 */
  goto L_10bdcc72;
L_10bdcc69:;
  /* 10bdcc69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdcc6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcc6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bdcc72:;
  /* 10bdcc72 push 0x10bf9fe0 */
  push32((uint32_t)(0x10bf9fe0u));
  /* 10bdcc77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcc7a push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcc7b call 0x10bde550 */
  push32(0x10bdcc80u); f_10bde550();
  /* 10bdcc80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcc83 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdcc86 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcc8a jne 0x10bdcc94 */
  if (!C.zf) goto L_10bdcc94;
  /* 10bdcc8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcc8f jmp 0x10bdcd59 */
  goto L_10bdcd59;
L_10bdcc94:;
  /* 10bdcc94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcc97 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcc9a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bdcc9c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10bdcc9f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcca3 jne 0x10bdccca */
  if (!C.zf) goto L_10bdccca;
  /* 10bdcca5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcca9 jge 0x10bdccca */
  if ((C.sf==C.of)) goto L_10bdccca;
  /* 10bdccab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdccaf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdccb2 je 0x10bdccca */
  if (C.zf) goto L_10bdccca;
  /* 10bdccb4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdccb7 push edx */
  push32((uint32_t)(EDX));
  /* 10bdccb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdccbb push eax */
  push32((uint32_t)(EAX));
  /* 10bdccbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdccbf push ecx */
  push32((uint32_t)(ECX));
  /* 10bdccc0 call 0x10bd6050 */
  push32(0x10bdccc5u); f_10bd6050();
  /* 10bdccc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdccc8 jmp 0x10bdcd30 */
  goto L_10bdcd30;
L_10bdccca:;
  /* 10bdccca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdccce jne 0x10bdccf8 */
  if (!C.zf) goto L_10bdccf8;
  /* 10bdccd0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdccd4 jge 0x10bdccf8 */
  if ((C.sf==C.of)) goto L_10bdccf8;
  /* 10bdccd6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdccda cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdccdd je 0x10bdccf8 */
  if (C.zf) goto L_10bdccf8;
  /* 10bdccdf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdcce2 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcce3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcce6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcce7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdccea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcced push edx */
  push32((uint32_t)(EDX));
  /* 10bdccee call 0x10bd6050 */
  push32(0x10bdccf3u); f_10bd6050();
  /* 10bdccf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdccf6 jmp 0x10bdcd30 */
  goto L_10bdcd30;
L_10bdccf8:;
  /* 10bdccf8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdccfc jne 0x10bdcd2b */
  if (!C.zf) goto L_10bdcd2b;
  /* 10bdccfe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdcd02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcd04 je 0x10bdcd0f */
  if (C.zf) goto L_10bdcd0f;
  /* 10bdcd06 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdcd0a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcd0d jne 0x10bdcd2b */
  if (!C.zf) goto L_10bdcd2b;
L_10bdcd0f:;
  /* 10bdcd0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdcd12 push edx */
  push32((uint32_t)(EDX));
  /* 10bdcd13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcd16 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcd17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcd1a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcd20 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcd21 call 0x10bd6050 */
  push32(0x10bdcd26u); f_10bd6050();
  /* 10bdcd26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcd29 jmp 0x10bdcd30 */
  goto L_10bdcd30;
L_10bdcd2b:;
  /* 10bdcd2b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcd2e jmp 0x10bdcd59 */
  goto L_10bdcd59;
L_10bdcd30:;
  /* 10bdcd30 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdcd34 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcd37 jne 0x10bdcd3b */
  if (!C.zf) goto L_10bdcd3b;
  /* 10bdcd39 jmp 0x10bdcd57 */
  goto L_10bdcd57;
L_10bdcd3b:;
  /* 10bdcd3b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdcd3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcd41 jne 0x10bdcd45 */
  if (!C.zf) goto L_10bdcd45;
  /* 10bdcd43 jmp 0x10bdcd57 */
  goto L_10bdcd57;
L_10bdcd45:;
  /* 10bdcd45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdcd48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcd4b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10bdcd4f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10bdcd52 jmp 0x10bdcc69 */
  goto L_10bdcc69;
L_10bdcd57:;
  /* 10bdcd57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bdcd59:;
  /* 10bdcd59 mov esp, ebp */
  ESP = (EBP);
  /* 10bdcd5b pop ebp */
  EBP = (pop32());
  /* 10bdcd5c ret  */
  ESPCHK(0x10bdcc00u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10bdcd60 (101 bytes, 36 insns) */
void f_10bdcd60(void) {
  FTRACE(0x10bdcd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdcd60 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdcd61 mov ebp, esp */
  EBP = (ESP);
  /* 10bdcd63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcd66 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcd67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcd6a push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcd6b call 0x10bd57e0 */
  push32(0x10bdcd70u); f_10bd57e0();
  /* 10bdcd70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcd73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcd76 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10bdcd7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcd7c je 0x10bdcd98 */
  if (C.zf) goto L_10bdcd98;
  /* 10bdcd7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcd81 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcd84 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcd85 push 0x10bf9fe8 */
  push32((uint32_t)(0x10bf9fe8u));
  /* 10bdcd8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdcd8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcd8f push edx */
  push32((uint32_t)(EDX));
  /* 10bdcd90 call 0x10bdcbb0 */
  push32(0x10bdcd95u); f_10bdcbb0();
  /* 10bdcd95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdcd98:;
  /* 10bdcd98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcd9b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10bdcda2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdcda4 je 0x10bdcdc3 */
  if (C.zf) goto L_10bdcdc3;
  /* 10bdcda6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdcda9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcdaf push edx */
  push32((uint32_t)(EDX));
  /* 10bdcdb0 push 0x10bf9fe4 */
  push32((uint32_t)(0x10bf9fe4u));
  /* 10bdcdb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdcdb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcdba push eax */
  push32((uint32_t)(EAX));
  /* 10bdcdbb call 0x10bdcbb0 */
  push32(0x10bdcdc0u); f_10bdcbb0();
  /* 10bdcdc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdcdc3:;
  /* 10bdcdc3 pop ebp */
  EBP = (pop32());
  /* 10bdcdc4 ret  */
  ESPCHK(0x10bdcd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdd0 @ 0x10bdcdd0 (130 bytes, 50 insns) */
void f_10bdcdd0(void) {
  FTRACE(0x10bdcdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdcdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdcdd1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdcdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcdd4 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdcdd5 push esi */
  push32((uint32_t)(ESI));
  /* 10bdcdd6 push edi */
  push32((uint32_t)(EDI));
  /* 10bdcdd7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10bdcdde:;
  /* 10bdcdde cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcde2 jne 0x10bdce02 */
  if (!C.zf) goto L_10bdce02;
  /* 10bdcde4 push 0x10bf9ff8 */
  push32((uint32_t)(0x10bf9ff8u));
  /* 10bdcde9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdcdeb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10bdcded push 0x10bf9fec */
  push32((uint32_t)(0x10bf9fecu));
  /* 10bdcdf2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdcdf4 call 0x10bd18f0 */
  push32(0x10bdcdf9u); f_10bd18f0();
  /* 10bdcdf9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcdfc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcdff jne 0x10bdce02 */
  if (!C.zf) goto L_10bdce02;
  /* 10bdce01 int3  */
  x86_unimpl("int3 @ 0x10bdce01");
L_10bdce02:;
  /* 10bdce02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdce04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdce06 jne 0x10bdcdde */
  if (!C.zf) goto L_10bdcdde;
  /* 10bdce08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdce0b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdce0e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdce11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdce13 je 0x10bdce21 */
  if (C.zf) goto L_10bdce21;
  /* 10bdce15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdce18 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10bdce1f jmp 0x10bdce48 */
  goto L_10bdce48;
L_10bdce21:;
  /* 10bdce21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdce24 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdce25 call 0x10bdb640 */
  push32(0x10bdce2au); f_10bdb640();
  /* 10bdce2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdce2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdce30 push edx */
  push32((uint32_t)(EDX));
  /* 10bdce31 call 0x10bdce60 */
  push32(0x10bdce36u); f_10bdce60();
  /* 10bdce36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdce39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdce3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdce3f push eax */
  push32((uint32_t)(EAX));
  /* 10bdce40 call 0x10bdb6b0 */
  push32(0x10bdce45u); f_10bdb6b0();
  /* 10bdce45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdce48:;
  /* 10bdce48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdce4b pop edi */
  EDI = (pop32());
  /* 10bdce4c pop esi */
  ESI = (pop32());
  /* 10bdce4d pop ebx */
  EBX = (pop32());
  /* 10bdce4e mov esp, ebp */
  ESP = (EBP);
  /* 10bdce50 pop ebp */
  EBP = (pop32());
  /* 10bdce51 ret  */
  ESPCHK(0x10bdcdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce60 @ 0x10bdce60 (190 bytes, 67 insns) */
void f_10bdce60(void) {
  FTRACE(0x10bdce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdce60 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdce61 mov ebp, esp */
  EBP = (ESP);
  /* 10bdce63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdce66 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdce67 push esi */
  push32((uint32_t)(ESI));
  /* 10bdce68 push edi */
  push32((uint32_t)(EDI));
  /* 10bdce69 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10bdce70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdce73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bdce76:;
  /* 10bdce76 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdce7a jne 0x10bdce9a */
  if (!C.zf) goto L_10bdce9a;
  /* 10bdce7c push 0x10bf9e98 */
  push32((uint32_t)(0x10bf9e98u));
  /* 10bdce81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdce83 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10bdce85 push 0x10bf9fec */
  push32((uint32_t)(0x10bf9fecu));
  /* 10bdce8a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdce8c call 0x10bd18f0 */
  push32(0x10bdce91u); f_10bd18f0();
  /* 10bdce91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdce94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdce97 jne 0x10bdce9a */
  if (!C.zf) goto L_10bdce9a;
  /* 10bdce99 int3  */
  x86_unimpl("int3 @ 0x10bdce99");
L_10bdce9a:;
  /* 10bdce9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdce9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdce9e jne 0x10bdce76 */
  if (!C.zf) goto L_10bdce76;
  /* 10bdcea0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcea3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10bdcea6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdceab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcead je 0x10bdcf0a */
  if (C.zf) goto L_10bdcf0a;
  /* 10bdceaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdceb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdceb3 call 0x10bdc160 */
  push32(0x10bdceb8u); f_10bdc160();
  /* 10bdceb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcebb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdcebe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcec1 push edx */
  push32((uint32_t)(EDX));
  /* 10bdcec2 call 0x10bdf4e0 */
  push32(0x10bdcec7u); f_10bdf4e0();
  /* 10bdcec7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdceca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcecd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bdced0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdced1 call 0x10bdf3b0 */
  push32(0x10bdced6u); f_10bdf3b0();
  /* 10bdced6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdced9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcedb jge 0x10bdcee6 */
  if ((C.sf==C.of)) goto L_10bdcee6;
  /* 10bdcedd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10bdcee4 jmp 0x10bdcf0a */
  goto L_10bdcf0a;
L_10bdcee6:;
  /* 10bdcee6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcee9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdceed je 0x10bdcf0a */
  if (C.zf) goto L_10bdcf0a;
  /* 10bdceef push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdcef1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcef4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10bdcef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcef8 call 0x10bd32c0 */
  push32(0x10bdcefdu); f_10bd32c0();
  /* 10bdcefd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcf00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcf03 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10bdcf0a:;
  /* 10bdcf0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdcf0d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10bdcf14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdcf17 pop edi */
  EDI = (pop32());
  /* 10bdcf18 pop esi */
  ESI = (pop32());
  /* 10bdcf19 pop ebx */
  EBX = (pop32());
  /* 10bdcf1a mov esp, ebp */
  ESP = (EBP);
  /* 10bdcf1c pop ebp */
  EBP = (pop32());
  /* 10bdcf1d ret  */
  ESPCHK(0x10bdce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x10bdcf20 (210 bytes, 63 insns) */
void f_10bdcf20(void) {
  FTRACE(0x10bdcf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdcf20 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdcf21 mov ebp, esp */
  EBP = (ESP);
  /* 10bdcf23 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcf24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcf27 cmp eax, dword ptr [0x10bfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcf2d jae 0x10bdcf51 */
  if (!C.cf) goto L_10bdcf51;
  /* 10bdcf2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcf32 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdcf35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcf38 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdcf3b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdcf3e mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdcf45 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10bdcf4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdcf4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdcf4f jne 0x10bdcf64 */
  if (!C.zf) goto L_10bdcf64;
L_10bdcf51:;
  /* 10bdcf51 call 0x10bda700 */
  push32(0x10bdcf56u); f_10bda700();
  /* 10bdcf56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdcf5c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcf5f jmp 0x10bdcfee */
  goto L_10bdcfee;
L_10bdcf64:;
  /* 10bdcf64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcf67 push edx */
  push32((uint32_t)(EDX));
  /* 10bdcf68 call 0x10bdbf20 */
  push32(0x10bdcf6du); f_10bdbf20();
  /* 10bdcf6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcf70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcf73 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdcf76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcf79 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdcf7c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdcf7f mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdcf86 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10bdcf8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdcf8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcf90 je 0x10bdcfcd */
  if (C.zf) goto L_10bdcfcd;
  /* 10bdcf92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcf95 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdcf96 call 0x10bdbda0 */
  push32(0x10bdcf9bu); f_10bdbda0();
  /* 10bdcf9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcf9e push eax */
  push32((uint32_t)(EAX));
  /* 10bdcf9f call dword ptr [0x10c00314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00314))), 0x10bdcfa5u);
  /* 10bdcfa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdcfa7 jne 0x10bdcfb4 */
  if (!C.zf) goto L_10bdcfb4;
  /* 10bdcfa9 call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bdcfafu);
  /* 10bdcfaf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdcfb2 jmp 0x10bdcfbb */
  goto L_10bdcfbb;
L_10bdcfb4:;
  /* 10bdcfb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bdcfbb:;
  /* 10bdcfbb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdcfbf jne 0x10bdcfc3 */
  if (!C.zf) goto L_10bdcfc3;
  /* 10bdcfc1 jmp 0x10bdcfdf */
  goto L_10bdcfdf;
L_10bdcfc3:;
  /* 10bdcfc3 call 0x10bda710 */
  push32(0x10bdcfc8u); f_10bda710();
  /* 10bdcfc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdcfcb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10bdcfcd:;
  /* 10bdcfcd call 0x10bda700 */
  push32(0x10bdcfd2u); f_10bda700();
  /* 10bdcfd2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdcfd8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10bdcfdf:;
  /* 10bdcfdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdcfe2 push eax */
  push32((uint32_t)(EAX));
  /* 10bdcfe3 call 0x10bdbfb0 */
  push32(0x10bdcfe8u); f_10bdbfb0();
  /* 10bdcfe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdcfeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bdcfee:;
  /* 10bdcfee mov esp, ebp */
  ESP = (EBP);
  /* 10bdcff0 pop ebp */
  EBP = (pop32());
  /* 10bdcff1 ret  */
  ESPCHK(0x10bdcf20u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10bdd000 (219 bytes, 64 insns) */
void f_10bdd000(void) {
  FTRACE(0x10bdd000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdd000 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdd001 mov ebp, esp */
  EBP = (ESP);
  /* 10bdd003 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd004 cmp dword ptr [0x10bfe61c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe61c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdd00b je 0x10bdd0a1 */
  if (C.zf) goto L_10bdd0a1;
  /* 10bdd011 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10bdd013 push 0x10bfa008 */
  push32((uint32_t)(0x10bfa008u));
  /* 10bdd018 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd01a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10bdd01f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd021 call 0x10bd2c40 */
  push32(0x10bdd026u); f_10bd2c40();
  /* 10bdd026 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd029 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdd02c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdd030 jne 0x10bdd03c */
  if (!C.zf) goto L_10bdd03c;
  /* 10bdd032 mov eax, 1 */
  EAX = (0x1u);
  /* 10bdd037 jmp 0x10bdd0d7 */
  goto L_10bdd0d7;
L_10bdd03c:;
  /* 10bdd03c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd03f push eax */
  push32((uint32_t)(EAX));
  /* 10bdd040 call 0x10bdd0e0 */
  push32(0x10bdd045u); f_10bdd0e0();
  /* 10bdd045 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdd04a je 0x10bdd06d */
  if (C.zf) goto L_10bdd06d;
  /* 10bdd04c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd04f push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd050 call 0x10bdd670 */
  push32(0x10bdd055u); f_10bdd670();
  /* 10bdd055 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd058 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd05a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd05d push edx */
  push32((uint32_t)(EDX));
  /* 10bdd05e call 0x10bd32c0 */
  push32(0x10bdd063u); f_10bd32c0();
  /* 10bdd063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd066 mov eax, 1 */
  EAX = (0x1u);
  /* 10bdd06b jmp 0x10bdd0d7 */
  goto L_10bdd0d7;
L_10bdd06d:;
  /* 10bdd06d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd070 mov dword ptr [0x10bfdc98], eax */
  w32((uint32_t)(0x10bfdc98), (EAX));
  /* 10bdd075 mov ecx, dword ptr [0x10bfe63c] */
  ECX = (r32((uint32_t)(0x10bfe63c)));
  /* 10bdd07b push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd07c call 0x10bdd670 */
  push32(0x10bdd081u); f_10bdd670();
  /* 10bdd081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd084 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd086 mov edx, dword ptr [0x10bfe63c] */
  EDX = (r32((uint32_t)(0x10bfe63c)));
  /* 10bdd08c push edx */
  push32((uint32_t)(EDX));
  /* 10bdd08d call 0x10bd32c0 */
  push32(0x10bdd092u); f_10bd32c0();
  /* 10bdd092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd098 mov dword ptr [0x10bfe63c], eax */
  w32((uint32_t)(0x10bfe63c), (EAX));
  /* 10bdd09d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdd09f jmp 0x10bdd0d7 */
  goto L_10bdd0d7;
L_10bdd0a1:;
  /* 10bdd0a1 mov dword ptr [0x10bfdc98], 0x10bfdca0 */
  w32((uint32_t)(0x10bfdc98), (0x10bfdca0u));
  /* 10bdd0ab mov ecx, dword ptr [0x10bfe63c] */
  ECX = (r32((uint32_t)(0x10bfe63c)));
  /* 10bdd0b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd0b2 call 0x10bdd670 */
  push32(0x10bdd0b7u); f_10bdd670();
  /* 10bdd0b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd0ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd0bc mov edx, dword ptr [0x10bfe63c] */
  EDX = (r32((uint32_t)(0x10bfe63c)));
  /* 10bdd0c2 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd0c3 call 0x10bd32c0 */
  push32(0x10bdd0c8u); f_10bd32c0();
  /* 10bdd0c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd0cb mov dword ptr [0x10bfe63c], 0 */
  w32((uint32_t)(0x10bfe63c), (0x0u));
  /* 10bdd0d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bdd0d7:;
  /* 10bdd0d7 mov esp, ebp */
  ESP = (EBP);
  /* 10bdd0d9 pop ebp */
  EBP = (pop32());
  /* 10bdd0da ret  */
  ESPCHK(0x10bdd000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0e0 @ 0x10bdd0e0 (1423 bytes, 533 insns) */
void f_10bdd0e0(void) {
  FTRACE(0x10bdd0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdd0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdd0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdd0e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdd0e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10bdd0ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdd0ef mov ax, word ptr [0x10bfe676] */
  AX = (r16((uint32_t)(0x10bfe676)));
  /* 10bdd0f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdd0f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd0fa mov cx, word ptr [0x10bfe678] */
  CX = (r16((uint32_t)(0x10bfe678)));
  /* 10bdd101 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdd104 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdd108 jne 0x10bdd112 */
  if (!C.zf) goto L_10bdd112;
  /* 10bdd10a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdd10d jmp 0x10bdd66b */
  goto L_10bdd66b;
L_10bdd112:;
  /* 10bdd112 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd115 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd118 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd119 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10bdd11b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd11e push eax */
  push32((uint32_t)(EAX));
  /* 10bdd11f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd121 call 0x10be09f0 */
  push32(0x10bdd126u); f_10be09f0();
  /* 10bdd126 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd129 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd12c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd12e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd131 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd134 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd137 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd138 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10bdd13a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd13d push eax */
  push32((uint32_t)(EAX));
  /* 10bdd13e push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd140 call 0x10be09f0 */
  push32(0x10bdd145u); f_10be09f0();
  /* 10bdd145 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd148 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd14b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd14d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd150 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd153 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd156 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd157 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10bdd159 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd15c push eax */
  push32((uint32_t)(EAX));
  /* 10bdd15d push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd15f call 0x10be09f0 */
  push32(0x10bdd164u); f_10be09f0();
  /* 10bdd164 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd16a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd16c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd16f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd172 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd175 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd176 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10bdd178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd17b push eax */
  push32((uint32_t)(EAX));
  /* 10bdd17c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd17e call 0x10be09f0 */
  push32(0x10bdd183u); f_10be09f0();
  /* 10bdd183 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd186 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd189 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd18b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd18e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd191 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd194 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd195 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10bdd197 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd19a push eax */
  push32((uint32_t)(EAX));
  /* 10bdd19b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd19d call 0x10be09f0 */
  push32(0x10bdd1a2u); f_10be09f0();
  /* 10bdd1a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd1a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd1a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd1aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd1ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd1b0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd1b3 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd1b4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10bdd1b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd1b9 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd1ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd1bc call 0x10be09f0 */
  push32(0x10bdd1c1u); f_10be09f0();
  /* 10bdd1c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd1c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd1c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd1c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd1cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd1cf push edx */
  push32((uint32_t)(EDX));
  /* 10bdd1d0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10bdd1d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd1d5 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd1d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd1d8 call 0x10be09f0 */
  push32(0x10bdd1ddu); f_10be09f0();
  /* 10bdd1dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd1e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd1e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd1e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd1e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd1eb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd1ee push edx */
  push32((uint32_t)(EDX));
  /* 10bdd1ef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10bdd1f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd1f4 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd1f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd1f7 call 0x10be09f0 */
  push32(0x10bdd1fcu); f_10be09f0();
  /* 10bdd1fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd1ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd202 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd204 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd20a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd20d push edx */
  push32((uint32_t)(EDX));
  /* 10bdd20e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10bdd210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd213 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd214 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd216 call 0x10be09f0 */
  push32(0x10bdd21bu); f_10be09f0();
  /* 10bdd21b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd21e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd221 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd223 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd226 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd229 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd22c push edx */
  push32((uint32_t)(EDX));
  /* 10bdd22d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10bdd22f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd232 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd233 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd235 call 0x10be09f0 */
  push32(0x10bdd23au); f_10be09f0();
  /* 10bdd23a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd23d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd240 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd242 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd245 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd248 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd24b push edx */
  push32((uint32_t)(EDX));
  /* 10bdd24c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10bdd24e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd251 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd252 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd254 call 0x10be09f0 */
  push32(0x10bdd259u); f_10be09f0();
  /* 10bdd259 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd25c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd25f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd261 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd264 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd267 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd26a push edx */
  push32((uint32_t)(EDX));
  /* 10bdd26b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10bdd26d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd270 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd271 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd273 call 0x10be09f0 */
  push32(0x10bdd278u); f_10be09f0();
  /* 10bdd278 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd27b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd27e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd280 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd283 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd286 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd289 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd28a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10bdd28c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd28f push eax */
  push32((uint32_t)(EAX));
  /* 10bdd290 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd292 call 0x10be09f0 */
  push32(0x10bdd297u); f_10be09f0();
  /* 10bdd297 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd29a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd29d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd29f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd2a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd2a5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd2a8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd2a9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10bdd2ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd2ae push eax */
  push32((uint32_t)(EAX));
  /* 10bdd2af push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd2b1 call 0x10be09f0 */
  push32(0x10bdd2b6u); f_10be09f0();
  /* 10bdd2b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd2b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd2bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd2be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd2c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd2c4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd2c7 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd2c8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10bdd2ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd2cd push eax */
  push32((uint32_t)(EAX));
  /* 10bdd2ce push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd2d0 call 0x10be09f0 */
  push32(0x10bdd2d5u); f_10be09f0();
  /* 10bdd2d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd2d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd2db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd2dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd2e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd2e3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd2e6 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd2e7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10bdd2e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd2ec push eax */
  push32((uint32_t)(EAX));
  /* 10bdd2ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd2ef call 0x10be09f0 */
  push32(0x10bdd2f4u); f_10be09f0();
  /* 10bdd2f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd2f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd2fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd2fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd2ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd302 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd305 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd306 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10bdd308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd30b push eax */
  push32((uint32_t)(EAX));
  /* 10bdd30c push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd30e call 0x10be09f0 */
  push32(0x10bdd313u); f_10be09f0();
  /* 10bdd313 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd316 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd319 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd31b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd31e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd321 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd324 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd325 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10bdd327 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd32a push eax */
  push32((uint32_t)(EAX));
  /* 10bdd32b push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd32d call 0x10be09f0 */
  push32(0x10bdd332u); f_10be09f0();
  /* 10bdd332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd338 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd33a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd33d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd340 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd343 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd344 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10bdd346 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd349 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd34a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd34c call 0x10be09f0 */
  push32(0x10bdd351u); f_10be09f0();
  /* 10bdd351 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd354 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd357 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd359 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd35c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd35f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd362 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd363 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10bdd365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd368 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd369 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd36b call 0x10be09f0 */
  push32(0x10bdd370u); f_10be09f0();
  /* 10bdd370 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd373 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd376 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd378 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd37b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd37e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd381 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd382 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10bdd384 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd387 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd388 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd38a call 0x10be09f0 */
  push32(0x10bdd38fu); f_10be09f0();
  /* 10bdd38f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd392 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd395 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd397 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd39a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd39d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd3a0 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd3a1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10bdd3a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd3a6 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd3a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd3a9 call 0x10be09f0 */
  push32(0x10bdd3aeu); f_10be09f0();
  /* 10bdd3ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd3b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd3b4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd3b6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd3b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd3bc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd3bf push edx */
  push32((uint32_t)(EDX));
  /* 10bdd3c0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10bdd3c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd3c5 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd3c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd3c8 call 0x10be09f0 */
  push32(0x10bdd3cdu); f_10be09f0();
  /* 10bdd3cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd3d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd3d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd3d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd3d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd3db add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd3de push edx */
  push32((uint32_t)(EDX));
  /* 10bdd3df push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10bdd3e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd3e4 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd3e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd3e7 call 0x10be09f0 */
  push32(0x10bdd3ecu); f_10be09f0();
  /* 10bdd3ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd3ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd3f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd3f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd3f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd3fa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd3fd push edx */
  push32((uint32_t)(EDX));
  /* 10bdd3fe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10bdd400 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd403 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd404 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd406 call 0x10be09f0 */
  push32(0x10bdd40bu); f_10be09f0();
  /* 10bdd40b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd40e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd411 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd413 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd416 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd419 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd41c push edx */
  push32((uint32_t)(EDX));
  /* 10bdd41d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10bdd41f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd422 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd423 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd425 call 0x10be09f0 */
  push32(0x10bdd42au); f_10be09f0();
  /* 10bdd42a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd42d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd430 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd432 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd435 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd438 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd43b push edx */
  push32((uint32_t)(EDX));
  /* 10bdd43c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10bdd43e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd441 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd442 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd444 call 0x10be09f0 */
  push32(0x10bdd449u); f_10be09f0();
  /* 10bdd449 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd44c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd44f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd451 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd457 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd45a push edx */
  push32((uint32_t)(EDX));
  /* 10bdd45b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10bdd45d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd460 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd461 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd463 call 0x10be09f0 */
  push32(0x10bdd468u); f_10be09f0();
  /* 10bdd468 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd46b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd46e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd470 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd473 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd476 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd479 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd47a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10bdd47c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd47f push eax */
  push32((uint32_t)(EAX));
  /* 10bdd480 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd482 call 0x10be09f0 */
  push32(0x10bdd487u); f_10be09f0();
  /* 10bdd487 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd48a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd48d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd48f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd495 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd498 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd499 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10bdd49b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd49e push eax */
  push32((uint32_t)(EAX));
  /* 10bdd49f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd4a1 call 0x10be09f0 */
  push32(0x10bdd4a6u); f_10be09f0();
  /* 10bdd4a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd4a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd4ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd4ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd4b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd4b4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd4b7 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd4b8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10bdd4ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd4bd push eax */
  push32((uint32_t)(EAX));
  /* 10bdd4be push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd4c0 call 0x10be09f0 */
  push32(0x10bdd4c5u); f_10be09f0();
  /* 10bdd4c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd4c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd4cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd4cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd4d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd4d3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd4d6 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd4d7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10bdd4d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd4dc push eax */
  push32((uint32_t)(EAX));
  /* 10bdd4dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd4df call 0x10be09f0 */
  push32(0x10bdd4e4u); f_10be09f0();
  /* 10bdd4e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd4e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd4ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd4ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd4ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd4f2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd4f8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd4f9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10bdd4fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd4fe push eax */
  push32((uint32_t)(EAX));
  /* 10bdd4ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd501 call 0x10be09f0 */
  push32(0x10bdd506u); f_10be09f0();
  /* 10bdd506 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd509 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd50c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd50e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd511 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd514 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd51a push edx */
  push32((uint32_t)(EDX));
  /* 10bdd51b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10bdd51d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd520 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd521 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd523 call 0x10be09f0 */
  push32(0x10bdd528u); f_10be09f0();
  /* 10bdd528 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd52b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd52e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd530 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd533 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd536 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd53c push edx */
  push32((uint32_t)(EDX));
  /* 10bdd53d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bdd53f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd542 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd543 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd545 call 0x10be09f0 */
  push32(0x10bdd54au); f_10be09f0();
  /* 10bdd54a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd54d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd550 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd552 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd558 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd55e push edx */
  push32((uint32_t)(EDX));
  /* 10bdd55f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10bdd561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd564 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd565 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd567 call 0x10be09f0 */
  push32(0x10bdd56cu); f_10be09f0();
  /* 10bdd56c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd56f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd572 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd574 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd577 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd57a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd580 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd581 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10bdd583 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd586 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd587 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd589 call 0x10be09f0 */
  push32(0x10bdd58eu); f_10be09f0();
  /* 10bdd58e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd591 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd594 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd596 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd59c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd5a2 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd5a3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10bdd5a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd5a8 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd5a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd5ab call 0x10be09f0 */
  push32(0x10bdd5b0u); f_10be09f0();
  /* 10bdd5b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd5b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd5b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd5b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd5bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd5be add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd5c4 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd5c5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10bdd5c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd5ca push eax */
  push32((uint32_t)(EAX));
  /* 10bdd5cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd5cd call 0x10be09f0 */
  push32(0x10bdd5d2u); f_10be09f0();
  /* 10bdd5d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd5d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd5d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd5da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd5dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd5e0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd5e6 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd5e7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10bdd5e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd5ec push eax */
  push32((uint32_t)(EAX));
  /* 10bdd5ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd5ef call 0x10be09f0 */
  push32(0x10bdd5f4u); f_10be09f0();
  /* 10bdd5f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd5f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd5fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd5fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd5ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd602 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd608 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd609 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10bdd60b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdd60e push eax */
  push32((uint32_t)(EAX));
  /* 10bdd60f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd611 call 0x10be09f0 */
  push32(0x10bdd616u); f_10be09f0();
  /* 10bdd616 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd619 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd61c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd61e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd624 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd62a push edx */
  push32((uint32_t)(EDX));
  /* 10bdd62b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10bdd62d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdd630 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd631 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd633 call 0x10be09f0 */
  push32(0x10bdd638u); f_10be09f0();
  /* 10bdd638 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd63b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd63e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd640 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd646 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd64c push edx */
  push32((uint32_t)(EDX));
  /* 10bdd64d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10bdd652 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdd655 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd656 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd658 call 0x10be09f0 */
  push32(0x10bdd65du); f_10be09f0();
  /* 10bdd65d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd660 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdd663 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd665 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10bdd668 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10bdd66b:;
  /* 10bdd66b mov esp, ebp */
  ESP = (EBP);
  /* 10bdd66d pop ebp */
  EBP = (pop32());
  /* 10bdd66e ret  */
  ESPCHK(0x10bdd0e0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10bdd670 (779 bytes, 265 insns) */
void f_10bdd670(void) {
  FTRACE(0x10bdd670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdd670 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdd671 mov ebp, esp */
  EBP = (ESP);
  /* 10bdd673 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdd677 jne 0x10bdd67e */
  if (!C.zf) goto L_10bdd67e;
  /* 10bdd679 jmp 0x10bdd979 */
  goto L_10bdd979;
L_10bdd67e:;
  /* 10bdd67e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd683 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bdd686 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd687 call 0x10bd32c0 */
  push32(0x10bdd68cu); f_10bd32c0();
  /* 10bdd68c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd68f push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd694 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bdd697 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd698 call 0x10bd32c0 */
  push32(0x10bdd69du); f_10bd32c0();
  /* 10bdd69d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd6a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd6a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd6a5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdd6a8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd6a9 call 0x10bd32c0 */
  push32(0x10bdd6aeu); f_10bd32c0();
  /* 10bdd6ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd6b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd6b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd6b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bdd6b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd6ba call 0x10bd32c0 */
  push32(0x10bdd6bfu); f_10bd32c0();
  /* 10bdd6bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd6c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd6c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd6c7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bdd6ca push eax */
  push32((uint32_t)(EAX));
  /* 10bdd6cb call 0x10bd32c0 */
  push32(0x10bdd6d0u); f_10bd32c0();
  /* 10bdd6d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd6d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd6d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd6d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bdd6db push edx */
  push32((uint32_t)(EDX));
  /* 10bdd6dc call 0x10bd32c0 */
  push32(0x10bdd6e1u); f_10bd32c0();
  /* 10bdd6e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd6e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd6e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd6e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bdd6eb push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd6ec call 0x10bd32c0 */
  push32(0x10bdd6f1u); f_10bd32c0();
  /* 10bdd6f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd6f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd6f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd6f9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10bdd6fc push eax */
  push32((uint32_t)(EAX));
  /* 10bdd6fd call 0x10bd32c0 */
  push32(0x10bdd702u); f_10bd32c0();
  /* 10bdd702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd705 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd707 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd70a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10bdd70d push edx */
  push32((uint32_t)(EDX));
  /* 10bdd70e call 0x10bd32c0 */
  push32(0x10bdd713u); f_10bd32c0();
  /* 10bdd713 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd716 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd718 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd71b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10bdd71e push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd71f call 0x10bd32c0 */
  push32(0x10bdd724u); f_10bd32c0();
  /* 10bdd724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd727 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd729 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd72c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10bdd72f push eax */
  push32((uint32_t)(EAX));
  /* 10bdd730 call 0x10bd32c0 */
  push32(0x10bdd735u); f_10bd32c0();
  /* 10bdd735 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd738 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd73a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd73d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10bdd740 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd741 call 0x10bd32c0 */
  push32(0x10bdd746u); f_10bd32c0();
  /* 10bdd746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd749 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd74b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd74e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10bdd751 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd752 call 0x10bd32c0 */
  push32(0x10bdd757u); f_10bd32c0();
  /* 10bdd757 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd75a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd75c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd75f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10bdd762 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd763 call 0x10bd32c0 */
  push32(0x10bdd768u); f_10bd32c0();
  /* 10bdd768 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd76b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd76d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd770 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10bdd773 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd774 call 0x10bd32c0 */
  push32(0x10bdd779u); f_10bd32c0();
  /* 10bdd779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd77c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd77e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd781 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10bdd784 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd785 call 0x10bd32c0 */
  push32(0x10bdd78au); f_10bd32c0();
  /* 10bdd78a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd78d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd78f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd792 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10bdd795 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd796 call 0x10bd32c0 */
  push32(0x10bdd79bu); f_10bd32c0();
  /* 10bdd79b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd79e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd7a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd7a3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10bdd7a6 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd7a7 call 0x10bd32c0 */
  push32(0x10bdd7acu); f_10bd32c0();
  /* 10bdd7ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd7af push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd7b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd7b4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10bdd7b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd7b8 call 0x10bd32c0 */
  push32(0x10bdd7bdu); f_10bd32c0();
  /* 10bdd7bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd7c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd7c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd7c5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10bdd7c8 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd7c9 call 0x10bd32c0 */
  push32(0x10bdd7ceu); f_10bd32c0();
  /* 10bdd7ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd7d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd7d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd7d6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10bdd7d9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd7da call 0x10bd32c0 */
  push32(0x10bdd7dfu); f_10bd32c0();
  /* 10bdd7df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd7e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd7e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd7e7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10bdd7ea push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd7eb call 0x10bd32c0 */
  push32(0x10bdd7f0u); f_10bd32c0();
  /* 10bdd7f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd7f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd7f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd7f8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10bdd7fb push eax */
  push32((uint32_t)(EAX));
  /* 10bdd7fc call 0x10bd32c0 */
  push32(0x10bdd801u); f_10bd32c0();
  /* 10bdd801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd804 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd806 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd809 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10bdd80c push edx */
  push32((uint32_t)(EDX));
  /* 10bdd80d call 0x10bd32c0 */
  push32(0x10bdd812u); f_10bd32c0();
  /* 10bdd812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd815 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd81a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10bdd81d push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd81e call 0x10bd32c0 */
  push32(0x10bdd823u); f_10bd32c0();
  /* 10bdd823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd826 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd828 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd82b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10bdd82e push eax */
  push32((uint32_t)(EAX));
  /* 10bdd82f call 0x10bd32c0 */
  push32(0x10bdd834u); f_10bd32c0();
  /* 10bdd834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd837 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd83c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10bdd83f push edx */
  push32((uint32_t)(EDX));
  /* 10bdd840 call 0x10bd32c0 */
  push32(0x10bdd845u); f_10bd32c0();
  /* 10bdd845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd848 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd84a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd84d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10bdd850 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd851 call 0x10bd32c0 */
  push32(0x10bdd856u); f_10bd32c0();
  /* 10bdd856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd859 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd85b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd85e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10bdd861 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd862 call 0x10bd32c0 */
  push32(0x10bdd867u); f_10bd32c0();
  /* 10bdd867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd86a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd86c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd86f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10bdd872 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd873 call 0x10bd32c0 */
  push32(0x10bdd878u); f_10bd32c0();
  /* 10bdd878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd87b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd87d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd880 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10bdd883 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd884 call 0x10bd32c0 */
  push32(0x10bdd889u); f_10bd32c0();
  /* 10bdd889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd88c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd88e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd891 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10bdd894 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd895 call 0x10bd32c0 */
  push32(0x10bdd89au); f_10bd32c0();
  /* 10bdd89a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd89d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd89f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd8a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10bdd8a8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd8a9 call 0x10bd32c0 */
  push32(0x10bdd8aeu); f_10bd32c0();
  /* 10bdd8ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd8b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd8b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd8b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10bdd8bc push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd8bd call 0x10bd32c0 */
  push32(0x10bdd8c2u); f_10bd32c0();
  /* 10bdd8c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd8c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd8c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd8ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10bdd8d0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd8d1 call 0x10bd32c0 */
  push32(0x10bdd8d6u); f_10bd32c0();
  /* 10bdd8d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd8d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd8db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd8de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10bdd8e4 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd8e5 call 0x10bd32c0 */
  push32(0x10bdd8eau); f_10bd32c0();
  /* 10bdd8ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd8ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd8ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd8f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10bdd8f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd8f9 call 0x10bd32c0 */
  push32(0x10bdd8feu); f_10bd32c0();
  /* 10bdd8fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd901 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd903 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd906 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10bdd90c push eax */
  push32((uint32_t)(EAX));
  /* 10bdd90d call 0x10bd32c0 */
  push32(0x10bdd912u); f_10bd32c0();
  /* 10bdd912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd915 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd917 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd91a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10bdd920 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd921 call 0x10bd32c0 */
  push32(0x10bdd926u); f_10bd32c0();
  /* 10bdd926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd929 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd92b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd92e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10bdd934 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd935 call 0x10bd32c0 */
  push32(0x10bdd93au); f_10bd32c0();
  /* 10bdd93a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd93d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd93f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd942 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10bdd948 push eax */
  push32((uint32_t)(EAX));
  /* 10bdd949 call 0x10bd32c0 */
  push32(0x10bdd94eu); f_10bd32c0();
  /* 10bdd94e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd951 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd953 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd956 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10bdd95c push edx */
  push32((uint32_t)(EDX));
  /* 10bdd95d call 0x10bd32c0 */
  push32(0x10bdd962u); f_10bd32c0();
  /* 10bdd962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd965 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdd967 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdd96a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10bdd970 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd971 call 0x10bd32c0 */
  push32(0x10bdd976u); f_10bd32c0();
  /* 10bdd976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdd979:;
  /* 10bdd979 pop ebp */
  EBP = (pop32());
  /* 10bdd97a ret  */
  ESPCHK(0x10bdd670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d980 @ 0x10bdd980 (678 bytes, 180 insns) */
void f_10bdd980(void) {
  FTRACE(0x10bdd980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdd980 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdd981 mov ebp, esp */
  EBP = (ESP);
  /* 10bdd983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdd986 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdd98d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdd98f mov ax, word ptr [0x10bfe672] */
  AX = (r16((uint32_t)(0x10bfe672)));
  /* 10bdd995 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdd998 cmp dword ptr [0x10bfe618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdd99f je 0x10bddafa */
  if (C.zf) goto L_10bddafa;
  /* 10bdd9a5 push 0x10bfe640 */
  push32((uint32_t)(0x10bfe640u));
  /* 10bdd9aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 10bdd9ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd9af push ecx */
  push32((uint32_t)(ECX));
  /* 10bdd9b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd9b2 call 0x10be09f0 */
  push32(0x10bdd9b7u); f_10be09f0();
  /* 10bdd9b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd9ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdd9bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10bdd9bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bdd9c2 push 0x10bfe644 */
  push32((uint32_t)(0x10bfe644u));
  /* 10bdd9c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10bdd9c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd9cc push eax */
  push32((uint32_t)(EAX));
  /* 10bdd9cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd9cf call 0x10be09f0 */
  push32(0x10bdd9d4u); f_10be09f0();
  /* 10bdd9d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd9d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdd9da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd9dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdd9df push 0x10bfe648 */
  push32((uint32_t)(0x10bfe648u));
  /* 10bdd9e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10bdd9e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdd9e9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdd9ea push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdd9ec call 0x10be09f0 */
  push32(0x10bdd9f1u); f_10be09f0();
  /* 10bdd9f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdd9f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdd9f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdd9f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdd9fc mov edx, dword ptr [0x10bfe648] */
  EDX = (r32((uint32_t)(0x10bfe648)));
  /* 10bdda02 push edx */
  push32((uint32_t)(EDX));
  /* 10bdda03 call 0x10bddc30 */
  push32(0x10bdda08u); f_10bddc30();
  /* 10bdda08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdda0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdda0f je 0x10bdda69 */
  if (C.zf) goto L_10bdda69;
  /* 10bdda11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdda13 mov eax, dword ptr [0x10bfe640] */
  EAX = (r32((uint32_t)(0x10bfe640)));
  /* 10bdda18 push eax */
  push32((uint32_t)(EAX));
  /* 10bdda19 call 0x10bd32c0 */
  push32(0x10bdda1eu); f_10bd32c0();
  /* 10bdda1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdda21 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdda23 mov ecx, dword ptr [0x10bfe644] */
  ECX = (r32((uint32_t)(0x10bfe644)));
  /* 10bdda29 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdda2a call 0x10bd32c0 */
  push32(0x10bdda2fu); f_10bd32c0();
  /* 10bdda2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdda32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdda34 mov edx, dword ptr [0x10bfe648] */
  EDX = (r32((uint32_t)(0x10bfe648)));
  /* 10bdda3a push edx */
  push32((uint32_t)(EDX));
  /* 10bdda3b call 0x10bd32c0 */
  push32(0x10bdda40u); f_10bd32c0();
  /* 10bdda40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdda43 mov dword ptr [0x10bfe640], 0 */
  w32((uint32_t)(0x10bfe640), (0x0u));
  /* 10bdda4d mov dword ptr [0x10bfe644], 0 */
  w32((uint32_t)(0x10bfe644), (0x0u));
  /* 10bdda57 mov dword ptr [0x10bfe648], 0 */
  w32((uint32_t)(0x10bfe648), (0x0u));
  /* 10bdda61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdda64 jmp 0x10bddc22 */
  goto L_10bddc22;
L_10bdda69:;
  /* 10bdda69 mov eax, dword ptr [0x10bfdd88] */
  EAX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bdda6e cmp dword ptr [eax], 0x10bfdd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10bfdd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdda74 je 0x10bddab0 */
  if (C.zf) goto L_10bddab0;
  /* 10bdda76 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdda78 mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bdda7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bdda80 push edx */
  push32((uint32_t)(EDX));
  /* 10bdda81 call 0x10bd32c0 */
  push32(0x10bdda86u); f_10bd32c0();
  /* 10bdda86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdda89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdda8b mov eax, dword ptr [0x10bfdd88] */
  EAX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bdda90 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bdda93 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdda94 call 0x10bd32c0 */
  push32(0x10bdda99u); f_10bd32c0();
  /* 10bdda99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdda9c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdda9e mov edx, dword ptr [0x10bfdd88] */
  EDX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddaa4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bddaa7 push eax */
  push32((uint32_t)(EAX));
  /* 10bddaa8 call 0x10bd32c0 */
  push32(0x10bddaadu); f_10bd32c0();
  /* 10bddaad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bddab0:;
  /* 10bddab0 mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddab6 mov edx, dword ptr [0x10bfe640] */
  EDX = (r32((uint32_t)(0x10bfe640)));
  /* 10bddabc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10bddabe mov eax, dword ptr [0x10bfdd88] */
  EAX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddac3 mov ecx, dword ptr [0x10bfe644] */
  ECX = (r32((uint32_t)(0x10bfe644)));
  /* 10bddac9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10bddacc mov edx, dword ptr [0x10bfdd88] */
  EDX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddad2 mov eax, dword ptr [0x10bfe648] */
  EAX = (r32((uint32_t)(0x10bfe648)));
  /* 10bddad7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10bddada mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddae0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bddae2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bddae4 mov byte ptr [0x10bfcea8], al */
  w8((uint32_t)(0x10bfcea8), (AL));
  /* 10bddae9 mov dword ptr [0x10bfceac], 1 */
  w32((uint32_t)(0x10bfceac), (0x1u));
  /* 10bddaf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bddaf5 jmp 0x10bddc22 */
  goto L_10bddc22;
L_10bddafa:;
  /* 10bddafa push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddafc mov ecx, dword ptr [0x10bfe640] */
  ECX = (r32((uint32_t)(0x10bfe640)));
  /* 10bddb02 push ecx */
  push32((uint32_t)(ECX));
  /* 10bddb03 call 0x10bd32c0 */
  push32(0x10bddb08u); f_10bd32c0();
  /* 10bddb08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddb0b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddb0d mov edx, dword ptr [0x10bfe644] */
  EDX = (r32((uint32_t)(0x10bfe644)));
  /* 10bddb13 push edx */
  push32((uint32_t)(EDX));
  /* 10bddb14 call 0x10bd32c0 */
  push32(0x10bddb19u); f_10bd32c0();
  /* 10bddb19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddb1c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddb1e mov eax, dword ptr [0x10bfe648] */
  EAX = (r32((uint32_t)(0x10bfe648)));
  /* 10bddb23 push eax */
  push32((uint32_t)(EAX));
  /* 10bddb24 call 0x10bd32c0 */
  push32(0x10bddb29u); f_10bd32c0();
  /* 10bddb29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddb2c mov dword ptr [0x10bfe640], 0 */
  w32((uint32_t)(0x10bfe640), (0x0u));
  /* 10bddb36 mov dword ptr [0x10bfe644], 0 */
  w32((uint32_t)(0x10bfe644), (0x0u));
  /* 10bddb40 mov dword ptr [0x10bfe648], 0 */
  w32((uint32_t)(0x10bfe648), (0x0u));
  /* 10bddb4a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10bddb4f push 0x10bfa014 */
  push32((uint32_t)(0x10bfa014u));
  /* 10bddb54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddb56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddb58 call 0x10bd2830 */
  push32(0x10bddb5du); f_10bd2830();
  /* 10bddb5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddb60 mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddb66 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10bddb68 mov edx, dword ptr [0x10bfdd88] */
  EDX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddb6e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bddb71 jne 0x10bddb7b */
  if (!C.zf) goto L_10bddb7b;
  /* 10bddb73 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bddb76 jmp 0x10bddc22 */
  goto L_10bddc22;
L_10bddb7b:;
  /* 10bddb7b push 0x10bf9fe4 */
  push32((uint32_t)(0x10bf9fe4u));
  /* 10bddb80 mov eax, dword ptr [0x10bfdd88] */
  EAX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddb85 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10bddb87 push ecx */
  push32((uint32_t)(ECX));
  /* 10bddb88 call 0x10bd57e0 */
  push32(0x10bddb8du); f_10bd57e0();
  /* 10bddb8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddb90 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10bddb95 push 0x10bfa014 */
  push32((uint32_t)(0x10bfa014u));
  /* 10bddb9a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddb9c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddb9e call 0x10bd2830 */
  push32(0x10bddba3u); f_10bd2830();
  /* 10bddba3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddba6 mov edx, dword ptr [0x10bfdd88] */
  EDX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddbac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10bddbaf mov eax, dword ptr [0x10bfdd88] */
  EAX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddbb4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bddbb8 jne 0x10bddbbf */
  if (!C.zf) goto L_10bddbbf;
  /* 10bddbba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bddbbd jmp 0x10bddc22 */
  goto L_10bddc22;
L_10bddbbf:;
  /* 10bddbbf mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddbc5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bddbc8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10bddbcb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10bddbd0 push 0x10bfa014 */
  push32((uint32_t)(0x10bfa014u));
  /* 10bddbd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddbd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddbd9 call 0x10bd2830 */
  push32(0x10bddbdeu); f_10bd2830();
  /* 10bddbde add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddbe1 mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddbe7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10bddbea mov edx, dword ptr [0x10bfdd88] */
  EDX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddbf0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bddbf4 jne 0x10bddbfb */
  if (!C.zf) goto L_10bddbfb;
  /* 10bddbf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bddbf9 jmp 0x10bddc22 */
  goto L_10bddc22;
L_10bddbfb:;
  /* 10bddbfb mov eax, dword ptr [0x10bfdd88] */
  EAX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddc00 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10bddc03 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10bddc06 mov edx, dword ptr [0x10bfdd88] */
  EDX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddc0c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bddc0e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bddc10 mov byte ptr [0x10bfcea8], cl */
  w8((uint32_t)(0x10bfcea8), (CL));
  /* 10bddc16 mov dword ptr [0x10bfceac], 1 */
  w32((uint32_t)(0x10bfceac), (0x1u));
  /* 10bddc20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bddc22:;
  /* 10bddc22 mov esp, ebp */
  ESP = (EBP);
  /* 10bddc24 pop ebp */
  EBP = (pop32());
  /* 10bddc25 ret  */
  ESPCHK(0x10bdd980u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10bddc30 (125 bytes, 49 insns) */
void f_10bddc30(void) {
  FTRACE(0x10bddc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bddc30 push ebp */
  push32((uint32_t)(EBP));
  /* 10bddc31 mov ebp, esp */
  EBP = (ESP);
  /* 10bddc33 push ecx */
  push32((uint32_t)(ECX));
L_10bddc34:;
  /* 10bddc34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddc37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bddc3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bddc3c je 0x10bddca9 */
  if (C.zf) goto L_10bddca9;
  /* 10bddc3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddc41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bddc44 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bddc47 jl 0x10bddc6d */
  if ((C.sf!=C.of)) goto L_10bddc6d;
  /* 10bddc49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddc4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bddc4f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bddc52 jg 0x10bddc6d */
  if ((!C.zf&&C.sf==C.of)) goto L_10bddc6d;
  /* 10bddc54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddc57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bddc5a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bddc5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddc60 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10bddc62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddc65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddc68 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bddc6b jmp 0x10bddca7 */
  goto L_10bddca7;
L_10bddc6d:;
  /* 10bddc6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddc70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bddc73 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bddc76 jne 0x10bddc9e */
  if (!C.zf) goto L_10bddc9e;
  /* 10bddc78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddc7b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bddc7e:;
  /* 10bddc7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddc81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddc84 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10bddc87 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10bddc89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddc8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddc8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bddc92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddc95 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bddc98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bddc9a jne 0x10bddc7e */
  if (!C.zf) goto L_10bddc7e;
  /* 10bddc9c jmp 0x10bddca7 */
  goto L_10bddca7;
L_10bddc9e:;
  /* 10bddc9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddca1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddca4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10bddca7:;
  /* 10bddca7 jmp 0x10bddc34 */
  goto L_10bddc34;
L_10bddca9:;
  /* 10bddca9 mov esp, ebp */
  ESP = (EBP);
  /* 10bddcab pop ebp */
  EBP = (pop32());
  /* 10bddcac ret  */
  ESPCHK(0x10bddc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x10bddcb0 (304 bytes, 85 insns) */
void f_10bddcb0(void) {
  FTRACE(0x10bddcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bddcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bddcb1 mov ebp, esp */
  EBP = (ESP);
  /* 10bddcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bddcb4 cmp dword ptr [0x10bfe614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bddcbb je 0x10bddd7c */
  if (C.zf) goto L_10bddd7c;
  /* 10bddcc1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10bddcc3 push 0x10bfa020 */
  push32((uint32_t)(0x10bfa020u));
  /* 10bddcc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddcca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10bddccc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bddcce call 0x10bd2c40 */
  push32(0x10bddcd3u); f_10bd2c40();
  /* 10bddcd3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddcd6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bddcd9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bddcdd jne 0x10bddce9 */
  if (!C.zf) goto L_10bddce9;
  /* 10bddcdf mov eax, 1 */
  EAX = (0x1u);
  /* 10bddce4 jmp 0x10bddddc */
  goto L_10bddddc;
L_10bddce9:;
  /* 10bddce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddcec push eax */
  push32((uint32_t)(EAX));
  /* 10bddced call 0x10bddde0 */
  push32(0x10bddcf2u); f_10bddde0();
  /* 10bddcf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddcf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bddcf7 je 0x10bddd1d */
  if (C.zf) goto L_10bddd1d;
  /* 10bddcf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddcfc push ecx */
  push32((uint32_t)(ECX));
  /* 10bddcfd call 0x10bde070 */
  push32(0x10bddd02u); f_10bde070();
  /* 10bddd02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddd05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddd07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddd0a push edx */
  push32((uint32_t)(EDX));
  /* 10bddd0b call 0x10bd32c0 */
  push32(0x10bddd10u); f_10bd32c0();
  /* 10bddd10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddd13 mov eax, 1 */
  EAX = (0x1u);
  /* 10bddd18 jmp 0x10bddddc */
  goto L_10bddddc;
L_10bddd1d:;
  /* 10bddd1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddd20 mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddd26 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bddd28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bddd2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddd2d mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddd33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10bddd36 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10bddd39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddd3c mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddd42 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10bddd45 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10bddd48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddd4b mov dword ptr [0x10bfdd88], eax */
  w32((uint32_t)(0x10bfdd88), (EAX));
  /* 10bddd50 mov ecx, dword ptr [0x10bfe64c] */
  ECX = (r32((uint32_t)(0x10bfe64c)));
  /* 10bddd56 push ecx */
  push32((uint32_t)(ECX));
  /* 10bddd57 call 0x10bde070 */
  push32(0x10bddd5cu); f_10bde070();
  /* 10bddd5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddd5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10bddd61 mov edx, dword ptr [0x10bfe64c] */
  EDX = (r32((uint32_t)(0x10bfe64c)));
  /* 10bddd67 push edx */
  push32((uint32_t)(EDX));
  /* 10bddd68 call 0x10bd32c0 */
  push32(0x10bddd6du); f_10bd32c0();
  /* 10bddd6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddd70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddd73 mov dword ptr [0x10bfe64c], eax */
  w32((uint32_t)(0x10bfe64c), (EAX));
  /* 10bddd78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bddd7a jmp 0x10bddddc */
  goto L_10bddddc;
L_10bddd7c:;
  /* 10bddd7c mov ecx, dword ptr [0x10bfdd88] */
  ECX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddd82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bddd84 mov dword ptr [0x10bfdd58], edx */
  w32((uint32_t)(0x10bfdd58), (EDX));
  /* 10bddd8a mov eax, dword ptr [0x10bfdd88] */
  EAX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddd8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10bddd92 mov dword ptr [0x10bfdd5c], ecx */
  w32((uint32_t)(0x10bfdd5c), (ECX));
  /* 10bddd98 mov edx, dword ptr [0x10bfdd88] */
  EDX = (r32((uint32_t)(0x10bfdd88)));
  /* 10bddd9e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bddda1 mov dword ptr [0x10bfdd60], eax */
  w32((uint32_t)(0x10bfdd60), (EAX));
  /* 10bddda6 mov dword ptr [0x10bfdd88], 0x10bfdd58 */
  w32((uint32_t)(0x10bfdd88), (0x10bfdd58u));
  /* 10bdddb0 mov ecx, dword ptr [0x10bfe64c] */
  ECX = (r32((uint32_t)(0x10bfe64c)));
  /* 10bdddb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdddb7 call 0x10bde070 */
  push32(0x10bdddbcu); f_10bde070();
  /* 10bdddbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdddbf push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdddc1 mov edx, dword ptr [0x10bfe64c] */
  EDX = (r32((uint32_t)(0x10bfe64c)));
  /* 10bdddc7 push edx */
  push32((uint32_t)(EDX));
  /* 10bdddc8 call 0x10bd32c0 */
  push32(0x10bdddcdu); f_10bd32c0();
  /* 10bdddcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdddd0 mov dword ptr [0x10bfe64c], 0 */
  w32((uint32_t)(0x10bfe64c), (0x0u));
  /* 10bdddda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bddddc:;
  /* 10bddddc mov esp, ebp */
  ESP = (EBP);
  /* 10bdddde pop ebp */
  EBP = (pop32());
  /* 10bddddf ret  */
  ESPCHK(0x10bddcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dde0 @ 0x10bddde0 (525 bytes, 200 insns) */
void f_10bddde0(void) {
  FTRACE(0x10bddde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bddde0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bddde1 mov ebp, esp */
  EBP = (ESP);
  /* 10bddde3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bddde6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bddded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdddef mov ax, word ptr [0x10bfe66c] */
  AX = (r16((uint32_t)(0x10bfe66c)));
  /* 10bdddf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdddf8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdddfc jne 0x10bdde06 */
  if (!C.zf) goto L_10bdde06;
  /* 10bdddfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdde01 jmp 0x10bddfe9 */
  goto L_10bddfe9;
L_10bdde06:;
  /* 10bdde06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdde09 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde0c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdde0d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10bdde0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdde12 push edx */
  push32((uint32_t)(EDX));
  /* 10bdde13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdde15 call 0x10be09f0 */
  push32(0x10bdde1au); f_10be09f0();
  /* 10bdde1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde1d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdde20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdde22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdde25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdde28 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde2b push edx */
  push32((uint32_t)(EDX));
  /* 10bdde2c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10bdde2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdde31 push eax */
  push32((uint32_t)(EAX));
  /* 10bdde32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdde34 call 0x10be09f0 */
  push32(0x10bdde39u); f_10be09f0();
  /* 10bdde39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdde3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdde41 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdde44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdde47 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde4a push edx */
  push32((uint32_t)(EDX));
  /* 10bdde4b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bdde4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdde50 push eax */
  push32((uint32_t)(EAX));
  /* 10bdde51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdde53 call 0x10be09f0 */
  push32(0x10bdde58u); f_10be09f0();
  /* 10bdde58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdde5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdde60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdde63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdde66 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde69 push edx */
  push32((uint32_t)(EDX));
  /* 10bdde6a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10bdde6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdde6f push eax */
  push32((uint32_t)(EAX));
  /* 10bdde70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdde72 call 0x10be09f0 */
  push32(0x10bdde77u); f_10be09f0();
  /* 10bdde77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde7a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdde7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdde7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdde82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdde85 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde88 push edx */
  push32((uint32_t)(EDX));
  /* 10bdde89 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10bdde8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdde8e push eax */
  push32((uint32_t)(EAX));
  /* 10bdde8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdde91 call 0x10be09f0 */
  push32(0x10bdde96u); f_10be09f0();
  /* 10bdde96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdde99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdde9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdde9e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddea1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddea4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10bddea7 push eax */
  push32((uint32_t)(EAX));
  /* 10bddea8 call 0x10bddff0 */
  push32(0x10bddeadu); f_10bddff0();
  /* 10bddead add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddeb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddeb3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddeb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bddeb7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10bddeb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddebc push edx */
  push32((uint32_t)(EDX));
  /* 10bddebd push 1 */
  push32((uint32_t)(0x1u));
  /* 10bddebf call 0x10be09f0 */
  push32(0x10bddec4u); f_10be09f0();
  /* 10bddec4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddec7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddeca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddecc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdded2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdded5 push edx */
  push32((uint32_t)(EDX));
  /* 10bdded6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10bdded8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddedb push eax */
  push32((uint32_t)(EAX));
  /* 10bddedc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bddede call 0x10be09f0 */
  push32(0x10bddee3u); f_10be09f0();
  /* 10bddee3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddee6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddee9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddeeb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddeee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddef1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddef4 push edx */
  push32((uint32_t)(EDX));
  /* 10bddef5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10bddef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddefa push eax */
  push32((uint32_t)(EAX));
  /* 10bddefb push 0 */
  push32((uint32_t)(0x0u));
  /* 10bddefd call 0x10be09f0 */
  push32(0x10bddf02u); f_10be09f0();
  /* 10bddf02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddf08 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddf0a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddf0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddf10 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf13 push edx */
  push32((uint32_t)(EDX));
  /* 10bddf14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10bddf16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddf19 push eax */
  push32((uint32_t)(EAX));
  /* 10bddf1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10bddf1c call 0x10be09f0 */
  push32(0x10bddf21u); f_10be09f0();
  /* 10bddf21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddf27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddf29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddf2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddf2f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf32 push edx */
  push32((uint32_t)(EDX));
  /* 10bddf33 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10bddf35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddf38 push eax */
  push32((uint32_t)(EAX));
  /* 10bddf39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bddf3b call 0x10be09f0 */
  push32(0x10bddf40u); f_10be09f0();
  /* 10bddf40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddf46 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddf48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddf4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddf4e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf51 push edx */
  push32((uint32_t)(EDX));
  /* 10bddf52 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10bddf54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddf57 push eax */
  push32((uint32_t)(EAX));
  /* 10bddf58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bddf5a call 0x10be09f0 */
  push32(0x10bddf5fu); f_10be09f0();
  /* 10bddf5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddf65 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddf67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddf6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddf6d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf70 push edx */
  push32((uint32_t)(EDX));
  /* 10bddf71 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10bddf73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddf76 push eax */
  push32((uint32_t)(EAX));
  /* 10bddf77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bddf79 call 0x10be09f0 */
  push32(0x10bddf7eu); f_10be09f0();
  /* 10bddf7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddf84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddf86 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddf89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddf8c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddf8f push edx */
  push32((uint32_t)(EDX));
  /* 10bddf90 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10bddf92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddf95 push eax */
  push32((uint32_t)(EAX));
  /* 10bddf96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bddf98 call 0x10be09f0 */
  push32(0x10bddf9du); f_10be09f0();
  /* 10bddf9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddfa0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddfa3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddfa5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddfa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddfab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddfae push edx */
  push32((uint32_t)(EDX));
  /* 10bddfaf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10bddfb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddfb4 push eax */
  push32((uint32_t)(EAX));
  /* 10bddfb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bddfb7 call 0x10be09f0 */
  push32(0x10bddfbcu); f_10be09f0();
  /* 10bddfbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddfbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddfc2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddfc4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddfc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddfca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddfcd push edx */
  push32((uint32_t)(EDX));
  /* 10bddfce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10bddfd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bddfd3 push eax */
  push32((uint32_t)(EAX));
  /* 10bddfd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bddfd6 call 0x10be09f0 */
  push32(0x10bddfdbu); f_10be09f0();
  /* 10bddfdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bddfde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bddfe1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10bddfe3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bddfe6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10bddfe9:;
  /* 10bddfe9 mov esp, ebp */
  ESP = (EBP);
  /* 10bddfeb pop ebp */
  EBP = (pop32());
  /* 10bddfec ret  */
  ESPCHK(0x10bddde0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10bddff0 (125 bytes, 49 insns) */
void f_10bddff0(void) {
  FTRACE(0x10bddff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bddff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bddff1 mov ebp, esp */
  EBP = (ESP);
  /* 10bddff3 push ecx */
  push32((uint32_t)(ECX));
L_10bddff4:;
  /* 10bddff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bddff7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bddffa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bddffc je 0x10bde069 */
  if (C.zf) goto L_10bde069;
  /* 10bddffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde001 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bde004 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde007 jl 0x10bde02d */
  if ((C.sf!=C.of)) goto L_10bde02d;
  /* 10bde009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde00c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bde00f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde012 jg 0x10bde02d */
  if ((!C.zf&&C.sf==C.of)) goto L_10bde02d;
  /* 10bde014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde017 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bde01a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde01d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde020 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10bde022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde025 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde028 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bde02b jmp 0x10bde067 */
  goto L_10bde067;
L_10bde02d:;
  /* 10bde02d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde030 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bde033 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde036 jne 0x10bde05e */
  if (!C.zf) goto L_10bde05e;
  /* 10bde038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde03b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bde03e:;
  /* 10bde03e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde041 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde044 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10bde047 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10bde049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde04c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde04f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bde052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde055 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bde058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde05a jne 0x10bde03e */
  if (!C.zf) goto L_10bde03e;
  /* 10bde05c jmp 0x10bde067 */
  goto L_10bde067;
L_10bde05e:;
  /* 10bde05e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde061 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde064 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10bde067:;
  /* 10bde067 jmp 0x10bddff4 */
  goto L_10bddff4;
L_10bde069:;
  /* 10bde069 mov esp, ebp */
  ESP = (EBP);
  /* 10bde06b pop ebp */
  EBP = (pop32());
  /* 10bde06c ret  */
  ESPCHK(0x10bddff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e070 @ 0x10bde070 (147 bytes, 52 insns) */
void f_10bde070(void) {
  FTRACE(0x10bde070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde070 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde071 mov ebp, esp */
  EBP = (ESP);
  /* 10bde073 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde077 jne 0x10bde07e */
  if (!C.zf) goto L_10bde07e;
  /* 10bde079 jmp 0x10bde101 */
  goto L_10bde101;
L_10bde07e:;
  /* 10bde07e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde081 cmp dword ptr [eax + 0xc], 0x10bfe6a8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10bfe6a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde088 je 0x10bde101 */
  if (C.zf) goto L_10bde101;
  /* 10bde08a push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde08c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde08f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bde092 push edx */
  push32((uint32_t)(EDX));
  /* 10bde093 call 0x10bd32c0 */
  push32(0x10bde098u); f_10bd32c0();
  /* 10bde098 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde09b push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde09d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde0a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10bde0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bde0a4 call 0x10bd32c0 */
  push32(0x10bde0a9u); f_10bd32c0();
  /* 10bde0a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde0ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde0ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde0b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10bde0b4 push eax */
  push32((uint32_t)(EAX));
  /* 10bde0b5 call 0x10bd32c0 */
  push32(0x10bde0bau); f_10bd32c0();
  /* 10bde0ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde0bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde0bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde0c2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10bde0c5 push edx */
  push32((uint32_t)(EDX));
  /* 10bde0c6 call 0x10bd32c0 */
  push32(0x10bde0cbu); f_10bd32c0();
  /* 10bde0cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde0ce push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde0d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde0d3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10bde0d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10bde0d7 call 0x10bd32c0 */
  push32(0x10bde0dcu); f_10bd32c0();
  /* 10bde0dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde0df push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde0e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde0e4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10bde0e7 push eax */
  push32((uint32_t)(EAX));
  /* 10bde0e8 call 0x10bd32c0 */
  push32(0x10bde0edu); f_10bd32c0();
  /* 10bde0ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde0f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde0f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde0f5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10bde0f8 push edx */
  push32((uint32_t)(EDX));
  /* 10bde0f9 call 0x10bd32c0 */
  push32(0x10bde0feu); f_10bd32c0();
  /* 10bde0fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bde101:;
  /* 10bde101 pop ebp */
  EBP = (pop32());
  /* 10bde102 ret  */
  ESPCHK(0x10bde070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e110 @ 0x10bde110 (928 bytes, 284 insns) */
void f_10bde110(void) {
  FTRACE(0x10bde110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde110 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde111 mov ebp, esp */
  EBP = (ESP);
  /* 10bde113 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde116 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10bde11d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10bde124 cmp dword ptr [0x10bfe610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde12b je 0x10bde461 */
  if (C.zf) goto L_10bde461;
  /* 10bde131 cmp dword ptr [0x10bfe620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde138 jne 0x10bde160 */
  if (!C.zf) goto L_10bde160;
  /* 10bde13a push 0x10bfe620 */
  push32((uint32_t)(0x10bfe620u));
  /* 10bde13f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10bde144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde146 mov ax, word ptr [0x10bfe664] */
  AX = (r16((uint32_t)(0x10bfe664)));
  /* 10bde14c push eax */
  push32((uint32_t)(EAX));
  /* 10bde14d push 0 */
  push32((uint32_t)(0x0u));
  /* 10bde14f call 0x10be09f0 */
  push32(0x10bde154u); f_10be09f0();
  /* 10bde154 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde157 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde159 je 0x10bde160 */
  if (C.zf) goto L_10bde160;
  /* 10bde15b jmp 0x10bde422 */
  goto L_10bde422;
L_10bde160:;
  /* 10bde160 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10bde162 push 0x10bfa02c */
  push32((uint32_t)(0x10bfa02cu));
  /* 10bde167 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde169 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10bde16e call 0x10bd2830 */
  push32(0x10bde173u); f_10bd2830();
  /* 10bde173 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde176 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10bde179 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10bde17b push 0x10bfa02c */
  push32((uint32_t)(0x10bfa02cu));
  /* 10bde180 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde182 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10bde187 call 0x10bd2830 */
  push32(0x10bde18cu); f_10bd2830();
  /* 10bde18c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde18f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10bde192 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10bde194 push 0x10bfa02c */
  push32((uint32_t)(0x10bfa02cu));
  /* 10bde199 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde19b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10bde1a0 call 0x10bd2830 */
  push32(0x10bde1a5u); f_10bd2830();
  /* 10bde1a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde1a8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10bde1ab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10bde1ad push 0x10bfa02c */
  push32((uint32_t)(0x10bfa02cu));
  /* 10bde1b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde1b4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10bde1b9 call 0x10bd2830 */
  push32(0x10bde1beu); f_10bd2830();
  /* 10bde1be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde1c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10bde1c4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde1c8 je 0x10bde1dc */
  if (C.zf) goto L_10bde1dc;
  /* 10bde1ca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde1ce je 0x10bde1dc */
  if (C.zf) goto L_10bde1dc;
  /* 10bde1d0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde1d4 je 0x10bde1dc */
  if (C.zf) goto L_10bde1dc;
  /* 10bde1d6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde1da jne 0x10bde1e1 */
  if (!C.zf) goto L_10bde1e1;
L_10bde1dc:;
  /* 10bde1dc jmp 0x10bde422 */
  goto L_10bde422;
L_10bde1e1:;
  /* 10bde1e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bde1e4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10bde1e7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10bde1ee jmp 0x10bde1f9 */
  goto L_10bde1f9;
L_10bde1f0:;
  /* 10bde1f0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bde1f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde1f6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10bde1f9:;
  /* 10bde1f9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde200 jge 0x10bde215 */
  if ((C.sf==C.of)) goto L_10bde215;
  /* 10bde202 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde205 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10bde208 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10bde20a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde20d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde210 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10bde213 jmp 0x10bde1f0 */
  goto L_10bde1f0;
L_10bde215:;
  /* 10bde215 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10bde218 push eax */
  push32((uint32_t)(EAX));
  /* 10bde219 mov ecx, dword ptr [0x10bfe620] */
  ECX = (r32((uint32_t)(0x10bfe620)));
  /* 10bde21f push ecx */
  push32((uint32_t)(ECX));
  /* 10bde220 call dword ptr [0x10c002b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002b4))), 0x10bde226u);
  /* 10bde226 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde228 jne 0x10bde22f */
  if (!C.zf) goto L_10bde22f;
  /* 10bde22a jmp 0x10bde422 */
  goto L_10bde422;
L_10bde22f:;
  /* 10bde22f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde233 jbe 0x10bde23a */
  if ((C.cf||C.zf)) goto L_10bde23a;
  /* 10bde235 jmp 0x10bde422 */
  goto L_10bde422;
L_10bde23a:;
  /* 10bde23a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bde23d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bde243 mov dword ptr [0x10bfcea4], edx */
  w32((uint32_t)(0x10bfcea4), (EDX));
  /* 10bde249 cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde250 jle 0x10bde2a9 */
  if ((C.zf||C.sf!=C.of)) goto L_10bde2a9;
  /* 10bde252 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10bde255 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10bde258 jmp 0x10bde263 */
  goto L_10bde263;
L_10bde25a:;
  /* 10bde25a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde25d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde260 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10bde263:;
  /* 10bde263 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde268 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bde26a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde26c je 0x10bde2a9 */
  if (C.zf) goto L_10bde2a9;
  /* 10bde26e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde271 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bde273 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10bde276 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bde278 je 0x10bde2a9 */
  if (C.zf) goto L_10bde2a9;
  /* 10bde27a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde27d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bde27f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bde281 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10bde284 jmp 0x10bde28f */
  goto L_10bde28f;
L_10bde286:;
  /* 10bde286 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bde289 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde28c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10bde28f:;
  /* 10bde28f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bde294 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10bde297 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde29a jg 0x10bde2a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bde2a7;
  /* 10bde29c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bde29f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde2a2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10bde2a5 jmp 0x10bde286 */
  goto L_10bde286;
L_10bde2a7:;
  /* 10bde2a7 jmp 0x10bde25a */
  goto L_10bde25a;
L_10bde2a9:;
  /* 10bde2a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bde2ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10bde2ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10bde2af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bde2b2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde2b5 push eax */
  push32((uint32_t)(EAX));
  /* 10bde2b6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bde2bb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bde2be push ecx */
  push32((uint32_t)(ECX));
  /* 10bde2bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10bde2c1 call 0x10bdaa60 */
  push32(0x10bde2c6u); f_10bdaa60();
  /* 10bde2c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde2c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde2cb jne 0x10bde2d2 */
  if (!C.zf) goto L_10bde2d2;
  /* 10bde2cd jmp 0x10bde422 */
  goto L_10bde422;
L_10bde2d2:;
  /* 10bde2d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bde2d5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10bde2da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bde2dd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10bde2e0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10bde2e7 jmp 0x10bde2f2 */
  goto L_10bde2f2;
L_10bde2e9:;
  /* 10bde2e9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bde2ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde2ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10bde2f2:;
  /* 10bde2f2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde2f9 jge 0x10bde310 */
  if ((C.sf==C.of)) goto L_10bde310;
  /* 10bde2fb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bde2fe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10bde302 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10bde305 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10bde308 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde30b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10bde30e jmp 0x10bde2e9 */
  goto L_10bde2e9;
L_10bde310:;
  /* 10bde310 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bde312 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bde314 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bde317 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde31a push edx */
  push32((uint32_t)(EDX));
  /* 10bde31b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10bde320 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bde323 push eax */
  push32((uint32_t)(EAX));
  /* 10bde324 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bde326 call 0x10be0c90 */
  push32(0x10bde32bu); f_10be0c90();
  /* 10bde32b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde32e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde330 jne 0x10bde337 */
  if (!C.zf) goto L_10bde337;
  /* 10bde332 jmp 0x10bde422 */
  goto L_10bde422;
L_10bde337:;
  /* 10bde337 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bde33a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10bde33f cmp dword ptr [0x10bfcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10bfcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde346 jle 0x10bde3a3 */
  if ((C.zf||C.sf!=C.of)) goto L_10bde3a3;
  /* 10bde348 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10bde34b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10bde34e jmp 0x10bde359 */
  goto L_10bde359;
L_10bde350:;
  /* 10bde350 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde353 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde356 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10bde359:;
  /* 10bde359 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde35c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10bde35e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10bde360 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bde362 je 0x10bde3a3 */
  if (C.zf) goto L_10bde3a3;
  /* 10bde364 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde367 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bde369 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10bde36c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bde36e je 0x10bde3a3 */
  if (C.zf) goto L_10bde3a3;
  /* 10bde370 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde375 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bde377 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10bde37a jmp 0x10bde385 */
  goto L_10bde385;
L_10bde37c:;
  /* 10bde37c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bde37f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde382 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10bde385:;
  /* 10bde385 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bde388 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde38a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10bde38d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde390 jg 0x10bde3a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bde3a1;
  /* 10bde392 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10bde395 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bde398 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10bde39f jmp 0x10bde37c */
  goto L_10bde37c;
L_10bde3a1:;
  /* 10bde3a1 jmp 0x10bde350 */
  goto L_10bde350;
L_10bde3a3:;
  /* 10bde3a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bde3a6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde3a9 mov dword ptr [0x10bfcc98], eax */
  w32((uint32_t)(0x10bfcc98), (EAX));
  /* 10bde3ae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bde3b1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde3b4 mov dword ptr [0x10bfcc9c], ecx */
  w32((uint32_t)(0x10bfcc9c), (ECX));
  /* 10bde3ba cmp dword ptr [0x10bfe650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde3c1 je 0x10bde3d4 */
  if (C.zf) goto L_10bde3d4;
  /* 10bde3c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde3c5 mov edx, dword ptr [0x10bfe650] */
  EDX = (r32((uint32_t)(0x10bfe650)));
  /* 10bde3cb push edx */
  push32((uint32_t)(EDX));
  /* 10bde3cc call 0x10bd32c0 */
  push32(0x10bde3d1u); f_10bd32c0();
  /* 10bde3d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bde3d4:;
  /* 10bde3d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bde3d7 mov dword ptr [0x10bfe650], eax */
  w32((uint32_t)(0x10bfe650), (EAX));
  /* 10bde3dc cmp dword ptr [0x10bfe654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde3e3 je 0x10bde3f6 */
  if (C.zf) goto L_10bde3f6;
  /* 10bde3e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde3e7 mov ecx, dword ptr [0x10bfe654] */
  ECX = (r32((uint32_t)(0x10bfe654)));
  /* 10bde3ed push ecx */
  push32((uint32_t)(ECX));
  /* 10bde3ee call 0x10bd32c0 */
  push32(0x10bde3f3u); f_10bd32c0();
  /* 10bde3f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bde3f6:;
  /* 10bde3f6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bde3f9 mov dword ptr [0x10bfe654], edx */
  w32((uint32_t)(0x10bfe654), (EDX));
  /* 10bde3ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde401 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bde404 push eax */
  push32((uint32_t)(EAX));
  /* 10bde405 call 0x10bd32c0 */
  push32(0x10bde40au); f_10bd32c0();
  /* 10bde40a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde40d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde40f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bde412 push ecx */
  push32((uint32_t)(ECX));
  /* 10bde413 call 0x10bd32c0 */
  push32(0x10bde418u); f_10bd32c0();
  /* 10bde418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde41b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde41d jmp 0x10bde4ac */
  goto L_10bde4ac;
L_10bde422:;
  /* 10bde422 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde424 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10bde427 push edx */
  push32((uint32_t)(EDX));
  /* 10bde428 call 0x10bd32c0 */
  push32(0x10bde42du); f_10bd32c0();
  /* 10bde42d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde430 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde432 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10bde435 push eax */
  push32((uint32_t)(EAX));
  /* 10bde436 call 0x10bd32c0 */
  push32(0x10bde43bu); f_10bd32c0();
  /* 10bde43b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde43e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde440 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10bde443 push ecx */
  push32((uint32_t)(ECX));
  /* 10bde444 call 0x10bd32c0 */
  push32(0x10bde449u); f_10bd32c0();
  /* 10bde449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde44c push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde44e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10bde451 push edx */
  push32((uint32_t)(EDX));
  /* 10bde452 call 0x10bd32c0 */
  push32(0x10bde457u); f_10bd32c0();
  /* 10bde457 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde45a mov eax, 1 */
  EAX = (0x1u);
  /* 10bde45f jmp 0x10bde4ac */
  goto L_10bde4ac;
L_10bde461:;
  /* 10bde461 mov dword ptr [0x10bfcc98], 0x10bfcca2 */
  w32((uint32_t)(0x10bfcc98), (0x10bfcca2u));
  /* 10bde46b mov dword ptr [0x10bfcc9c], 0x10bfcca2 */
  w32((uint32_t)(0x10bfcc9c), (0x10bfcca2u));
  /* 10bde475 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde477 mov eax, dword ptr [0x10bfe650] */
  EAX = (r32((uint32_t)(0x10bfe650)));
  /* 10bde47c push eax */
  push32((uint32_t)(EAX));
  /* 10bde47d call 0x10bd32c0 */
  push32(0x10bde482u); f_10bd32c0();
  /* 10bde482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde485 push 2 */
  push32((uint32_t)(0x2u));
  /* 10bde487 mov ecx, dword ptr [0x10bfe654] */
  ECX = (r32((uint32_t)(0x10bfe654)));
  /* 10bde48d push ecx */
  push32((uint32_t)(ECX));
  /* 10bde48e call 0x10bd32c0 */
  push32(0x10bde493u); f_10bd32c0();
  /* 10bde493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde496 mov dword ptr [0x10bfe650], 0 */
  w32((uint32_t)(0x10bfe650), (0x0u));
  /* 10bde4a0 mov dword ptr [0x10bfe654], 0 */
  w32((uint32_t)(0x10bfe654), (0x0u));
  /* 10bde4aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bde4ac:;
  /* 10bde4ac mov esp, ebp */
  ESP = (EBP);
  /* 10bde4ae pop ebp */
  EBP = (pop32());
  /* 10bde4af ret  */
  ESPCHK(0x10bde110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4b0 @ 0x10bde4b0 (7 bytes, 5 insns) */
void f_10bde4b0(void) {
  FTRACE(0x10bde4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde4b1 mov ebp, esp */
  EBP = (ESP);
  /* 10bde4b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde4b5 pop ebp */
  EBP = (pop32());
  /* 10bde4b6 ret  */
  ESPCHK(0x10bde4b0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10bde4c0 (129 bytes, 56 insns) */
void f_10bde4c0(void) {
  FTRACE(0x10bde4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde4c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10bde4c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10bde4c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10bde4ce jne 0x10bde50c */
  if (!C.zf) goto L_10bde50c;
L_10bde4d0:;
  /* 10bde4d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10bde4d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bde4d4 jne 0x10bde504 */
  if (!C.zf) goto L_10bde504;
  /* 10bde4d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10bde4d8 je 0x10bde500 */
  if (C.zf) goto L_10bde500;
  /* 10bde4da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bde4dd jne 0x10bde504 */
  if (!C.zf) goto L_10bde504;
  /* 10bde4df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10bde4e1 je 0x10bde500 */
  if (C.zf) goto L_10bde500;
  /* 10bde4e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10bde4e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bde4e9 jne 0x10bde504 */
  if (!C.zf) goto L_10bde504;
  /* 10bde4eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10bde4ed je 0x10bde500 */
  if (C.zf) goto L_10bde500;
  /* 10bde4ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bde4f2 jne 0x10bde504 */
  if (!C.zf) goto L_10bde504;
  /* 10bde4f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde4f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde4fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10bde4fc jne 0x10bde4d0 */
  if (!C.zf) goto L_10bde4d0;
  /* 10bde4fe mov edi, edi */
  EDI = (EDI);
L_10bde500:;
  /* 10bde500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde502 ret  */
  ESPCHK(0x10bde4c0u, _esp0);
  ESP += 4; return;
  /* 10bde503 nop  */
  /* nop */
L_10bde504:;
  /* 10bde504 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde506 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bde508 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10bde509 ret  */
  ESPCHK(0x10bde4c0u, _esp0);
  ESP += 4; return;
  /* 10bde50a mov edi, edi */
  EDI = (EDI);
L_10bde50c:;
  /* 10bde50c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10bde512 je 0x10bde528 */
  if (C.zf) goto L_10bde528;
  /* 10bde514 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bde516 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bde517 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bde519 jne 0x10bde504 */
  if (!C.zf) goto L_10bde504;
  /* 10bde51b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bde51c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10bde51e je 0x10bde500 */
  if (C.zf) goto L_10bde500;
  /* 10bde520 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10bde526 je 0x10bde4d0 */
  if (C.zf) goto L_10bde4d0;
L_10bde528:;
  /* 10bde528 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10bde52b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde52e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bde530 jne 0x10bde504 */
  if (!C.zf) goto L_10bde504;
  /* 10bde532 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10bde534 je 0x10bde500 */
  if (C.zf) goto L_10bde500;
  /* 10bde536 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bde539 jne 0x10bde504 */
  if (!C.zf) goto L_10bde504;
  /* 10bde53b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10bde53d je 0x10bde500 */
  if (C.zf) goto L_10bde500;
  /* 10bde53f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde542 jmp 0x10bde4d0 */
  goto L_10bde4d0;
}

/* FUN_1000e550 @ 0x10bde550 (62 bytes, 35 insns) */
void f_10bde550(void) {
  FTRACE(0x10bde550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde550 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde551 mov ebp, esp */
  EBP = (ESP);
  /* 10bde553 push esi */
  push32((uint32_t)(ESI));
  /* 10bde554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde556 push eax */
  push32((uint32_t)(EAX));
  /* 10bde557 push eax */
  push32((uint32_t)(EAX));
  /* 10bde558 push eax */
  push32((uint32_t)(EAX));
  /* 10bde559 push eax */
  push32((uint32_t)(EAX));
  /* 10bde55a push eax */
  push32((uint32_t)(EAX));
  /* 10bde55b push eax */
  push32((uint32_t)(EAX));
  /* 10bde55c push eax */
  push32((uint32_t)(EAX));
  /* 10bde55d push eax */
  push32((uint32_t)(EAX));
  /* 10bde55e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bde561 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bde564:;
  /* 10bde564 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bde566 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10bde568 je 0x10bde571 */
  if (C.zf) goto L_10bde571;
  /* 10bde56a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bde56b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10bde56b");
  /* 10bde56f jmp 0x10bde564 */
  goto L_10bde564;
L_10bde571:;
  /* 10bde571 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde574 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10bde577 nop  */
  /* nop */
L_10bde578:;
  /* 10bde578 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10bde579 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bde57b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10bde57d je 0x10bde586 */
  if (C.zf) goto L_10bde586;
  /* 10bde57f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bde580 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10bde580");
  /* 10bde584 jae 0x10bde578 */
  if (!C.cf) goto L_10bde578;
L_10bde586:;
  /* 10bde586 mov eax, ecx */
  EAX = (ECX);
  /* 10bde588 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde58b pop esi */
  ESI = (pop32());
  /* 10bde58c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bde58d ret  */
  ESPCHK(0x10bde550u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10bde590 (56 bytes, 31 insns) */
void f_10bde590(void) {
  FTRACE(0x10bde590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde590 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde591 mov ebp, esp */
  EBP = (ESP);
  /* 10bde593 push edi */
  push32((uint32_t)(EDI));
  /* 10bde594 push esi */
  push32((uint32_t)(ESI));
  /* 10bde595 push ebx */
  push32((uint32_t)(EBX));
  /* 10bde596 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bde599 jecxz 0x10bde5c1 */
  x86_unimpl("jecxz @ 0x10bde599");
  /* 10bde59b mov ebx, ecx */
  EBX = (ECX);
  /* 10bde59d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde5a0 mov esi, edi */
  ESI = (EDI);
  /* 10bde5a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde5a4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10bde5a6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bde5a8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde5aa mov edi, esi */
  EDI = (ESI);
  /* 10bde5ac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10bde5af repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10bde5b1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10bde5b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bde5b6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10bde5b9 ja 0x10bde5bf */
  if ((!C.cf&&!C.zf)) goto L_10bde5bf;
  /* 10bde5bb je 0x10bde5c1 */
  if (C.zf) goto L_10bde5c1;
  /* 10bde5bd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10bde5be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10bde5bf:;
  /* 10bde5bf not ecx */
  ECX = (~(ECX));
L_10bde5c1:;
  /* 10bde5c1 mov eax, ecx */
  EAX = (ECX);
  /* 10bde5c3 pop ebx */
  EBX = (pop32());
  /* 10bde5c4 pop esi */
  ESI = (pop32());
  /* 10bde5c5 pop edi */
  EDI = (pop32());
  /* 10bde5c6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bde5c7 ret  */
  ESPCHK(0x10bde590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5d0 @ 0x10bde5d0 (58 bytes, 32 insns) */
void f_10bde5d0(void) {
  FTRACE(0x10bde5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10bde5d3 push esi */
  push32((uint32_t)(ESI));
  /* 10bde5d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde5d6 push eax */
  push32((uint32_t)(EAX));
  /* 10bde5d7 push eax */
  push32((uint32_t)(EAX));
  /* 10bde5d8 push eax */
  push32((uint32_t)(EAX));
  /* 10bde5d9 push eax */
  push32((uint32_t)(EAX));
  /* 10bde5da push eax */
  push32((uint32_t)(EAX));
  /* 10bde5db push eax */
  push32((uint32_t)(EAX));
  /* 10bde5dc push eax */
  push32((uint32_t)(EAX));
  /* 10bde5dd push eax */
  push32((uint32_t)(EAX));
  /* 10bde5de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bde5e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10bde5e4:;
  /* 10bde5e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bde5e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10bde5e8 je 0x10bde5f1 */
  if (C.zf) goto L_10bde5f1;
  /* 10bde5ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10bde5eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10bde5eb");
  /* 10bde5ef jmp 0x10bde5e4 */
  goto L_10bde5e4;
L_10bde5f1:;
  /* 10bde5f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10bde5f4:;
  /* 10bde5f4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10bde5f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10bde5f8 je 0x10bde604 */
  if (C.zf) goto L_10bde604;
  /* 10bde5fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10bde5fb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10bde5fb");
  /* 10bde5ff jae 0x10bde5f4 */
  if (!C.cf) goto L_10bde5f4;
  /* 10bde601 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10bde604:;
  /* 10bde604 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde607 pop esi */
  ESI = (pop32());
  /* 10bde608 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10bde609 ret  */
  ESPCHK(0x10bde5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e610 @ 0x10bde610 (512 bytes, 147 insns) */
void f_10bde610(void) {
  FTRACE(0x10bde610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde610 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde611 mov ebp, esp */
  EBP = (ESP);
  /* 10bde613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde616 cmp dword ptr [0x10bfe69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde61d jne 0x10bde642 */
  if (!C.zf) goto L_10bde642;
  /* 10bde61f call 0x10bdf0e0 */
  push32(0x10bde624u); f_10bdf0e0();
  /* 10bde624 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde626 je 0x10bde632 */
  if (C.zf) goto L_10bde632;
  /* 10bde628 mov eax, dword ptr [0x10c0032c] */
  EAX = (r32((uint32_t)(0x10c0032c)));
  /* 10bde62d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bde630 jmp 0x10bde639 */
  goto L_10bde639;
L_10bde632:;
  /* 10bde632 mov dword ptr [ebp - 8], 0x10bdf130 */
  w32((uint32_t)(EBP + -0x8), (0x10bdf130u));
L_10bde639:;
  /* 10bde639 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bde63c mov dword ptr [0x10bfe69c], ecx */
  w32((uint32_t)(0x10bfe69c), (ECX));
L_10bde642:;
  /* 10bde642 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde646 jne 0x10bde652 */
  if (!C.zf) goto L_10bde652;
  /* 10bde648 call 0x10bdef30 */
  push32(0x10bde64du); f_10bdef30();
  /* 10bde64d jmp 0x10bde71e */
  goto L_10bde71e;
L_10bde652:;
  /* 10bde652 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde655 mov dword ptr [0x10bfe68c], edx */
  w32((uint32_t)(0x10bfe68c), (EDX));
  /* 10bde65b cmp dword ptr [0x10bfe68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde662 je 0x10bde684 */
  if (C.zf) goto L_10bde684;
  /* 10bde664 mov eax, dword ptr [0x10bfe68c] */
  EAX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bde669 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bde66c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bde66e je 0x10bde684 */
  if (C.zf) goto L_10bde684;
  /* 10bde670 push 0x10bfe68c */
  push32((uint32_t)(0x10bfe68cu));
  /* 10bde675 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bde677 push 0x10bfda90 */
  push32((uint32_t)(0x10bfda90u));
  /* 10bde67c call 0x10bde810 */
  push32(0x10bde681u); f_10bde810();
  /* 10bde681 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bde684:;
  /* 10bde684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde687 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde68a mov dword ptr [0x10bfe690], edx */
  w32((uint32_t)(0x10bfe690), (EDX));
  /* 10bde690 cmp dword ptr [0x10bfe690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde697 je 0x10bde6b9 */
  if (C.zf) goto L_10bde6b9;
  /* 10bde699 mov eax, dword ptr [0x10bfe690] */
  EAX = (r32((uint32_t)(0x10bfe690)));
  /* 10bde69e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bde6a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bde6a3 je 0x10bde6b9 */
  if (C.zf) goto L_10bde6b9;
  /* 10bde6a5 push 0x10bfe690 */
  push32((uint32_t)(0x10bfe690u));
  /* 10bde6aa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10bde6ac push 0x10bfd9d8 */
  push32((uint32_t)(0x10bfd9d8u));
  /* 10bde6b1 call 0x10bde810 */
  push32(0x10bde6b6u); f_10bde810();
  /* 10bde6b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bde6b9:;
  /* 10bde6b9 mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
  /* 10bde6c3 cmp dword ptr [0x10bfe68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde6ca je 0x10bde6fd */
  if (C.zf) goto L_10bde6fd;
  /* 10bde6cc mov edx, dword ptr [0x10bfe68c] */
  EDX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bde6d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10bde6d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde6d7 je 0x10bde6fd */
  if (C.zf) goto L_10bde6fd;
  /* 10bde6d9 cmp dword ptr [0x10bfe690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde6e0 je 0x10bde6f6 */
  if (C.zf) goto L_10bde6f6;
  /* 10bde6e2 mov ecx, dword ptr [0x10bfe690] */
  ECX = (r32((uint32_t)(0x10bfe690)));
  /* 10bde6e8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10bde6eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bde6ed je 0x10bde6f6 */
  if (C.zf) goto L_10bde6f6;
  /* 10bde6ef call 0x10bde8a0 */
  push32(0x10bde6f4u); f_10bde8a0();
  /* 10bde6f4 jmp 0x10bde6fb */
  goto L_10bde6fb;
L_10bde6f6:;
  /* 10bde6f6 call 0x10bdec90 */
  push32(0x10bde6fbu); f_10bdec90();
L_10bde6fb:;
  /* 10bde6fb jmp 0x10bde71e */
  goto L_10bde71e;
L_10bde6fd:;
  /* 10bde6fd cmp dword ptr [0x10bfe690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde704 je 0x10bde719 */
  if (C.zf) goto L_10bde719;
  /* 10bde706 mov eax, dword ptr [0x10bfe690] */
  EAX = (r32((uint32_t)(0x10bfe690)));
  /* 10bde70b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bde70e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bde710 je 0x10bde719 */
  if (C.zf) goto L_10bde719;
  /* 10bde712 call 0x10bdee30 */
  push32(0x10bde717u); f_10bdee30();
  /* 10bde717 jmp 0x10bde71e */
  goto L_10bde71e;
L_10bde719:;
  /* 10bde719 call 0x10bdef30 */
  push32(0x10bde71eu); f_10bdef30();
L_10bde71e:;
  /* 10bde71e cmp dword ptr [0x10bfe694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde725 jne 0x10bde72e */
  if (!C.zf) goto L_10bde72e;
  /* 10bde727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde729 jmp 0x10bde80c */
  goto L_10bde80c;
L_10bde72e:;
  /* 10bde72e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde731 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde737 push edx */
  push32((uint32_t)(EDX));
  /* 10bde738 call 0x10bdef60 */
  push32(0x10bde73du); f_10bdef60();
  /* 10bde73d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde740 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bde743 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde747 je 0x10bde75c */
  if (C.zf) goto L_10bde75c;
  /* 10bde749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde74c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bde751 push eax */
  push32((uint32_t)(EAX));
  /* 10bde752 call dword ptr [0x10c00328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00328))), 0x10bde758u);
  /* 10bde758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde75a jne 0x10bde763 */
  if (!C.zf) goto L_10bde763;
L_10bde75c:;
  /* 10bde75c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde75e jmp 0x10bde80c */
  goto L_10bde80c;
L_10bde763:;
  /* 10bde763 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bde765 mov ecx, dword ptr [0x10bfe67c] */
  ECX = (r32((uint32_t)(0x10bfe67c)));
  /* 10bde76b push ecx */
  push32((uint32_t)(ECX));
  /* 10bde76c call dword ptr [0x10c00324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00324))), 0x10bde772u);
  /* 10bde772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde774 jne 0x10bde77d */
  if (!C.zf) goto L_10bde77d;
  /* 10bde776 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde778 jmp 0x10bde80c */
  goto L_10bde80c;
L_10bde77d:;
  /* 10bde77d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde781 je 0x10bde7a8 */
  if (C.zf) goto L_10bde7a8;
  /* 10bde783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bde786 mov ax, word ptr [0x10bfe67c] */
  AX = (r16((uint32_t)(0x10bfe67c)));
  /* 10bde78c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10bde78f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bde792 mov dx, word ptr [0x10bfe698] */
  DX = (r16((uint32_t)(0x10bfe698)));
  /* 10bde799 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10bde79d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bde7a0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10bde7a4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10bde7a8:;
  /* 10bde7a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde7ac je 0x10bde807 */
  if (C.zf) goto L_10bde807;
  /* 10bde7ae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bde7b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bde7b3 push edx */
  push32((uint32_t)(EDX));
  /* 10bde7b4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10bde7b9 mov eax, dword ptr [0x10bfe67c] */
  EAX = (r32((uint32_t)(0x10bfe67c)));
  /* 10bde7be push eax */
  push32((uint32_t)(EAX));
  /* 10bde7bf call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bde7c5u);
  /* 10bde7c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde7c7 jne 0x10bde7cd */
  if (!C.zf) goto L_10bde7cd;
  /* 10bde7c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde7cb jmp 0x10bde80c */
  goto L_10bde80c;
L_10bde7cd:;
  /* 10bde7cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10bde7cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bde7d2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bde7d6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10bde7db mov edx, dword ptr [0x10bfe698] */
  EDX = (r32((uint32_t)(0x10bfe698)));
  /* 10bde7e1 push edx */
  push32((uint32_t)(EDX));
  /* 10bde7e2 call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bde7e8u);
  /* 10bde7e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde7ea jne 0x10bde7f0 */
  if (!C.zf) goto L_10bde7f0;
  /* 10bde7ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bde7ee jmp 0x10bde80c */
  goto L_10bde80c;
L_10bde7f0:;
  /* 10bde7f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10bde7f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bde7f5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde7fa push eax */
  push32((uint32_t)(EAX));
  /* 10bde7fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde7fe push ecx */
  push32((uint32_t)(ECX));
  /* 10bde7ff call 0x10bd5370 */
  push32(0x10bde804u); f_10bd5370();
  /* 10bde804 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bde807:;
  /* 10bde807 mov eax, 1 */
  EAX = (0x1u);
L_10bde80c:;
  /* 10bde80c mov esp, ebp */
  ESP = (EBP);
  /* 10bde80e pop ebp */
  EBP = (pop32());
  /* 10bde80f ret  */
  ESPCHK(0x10bde610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e810 @ 0x10bde810 (130 bytes, 47 insns) */
void f_10bde810(void) {
  FTRACE(0x10bde810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde810 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde811 mov ebp, esp */
  EBP = (ESP);
  /* 10bde813 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde816 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10bde81d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10bde824:;
  /* 10bde824 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bde827 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde82a jg 0x10bde88e */
  if ((!C.zf&&C.sf==C.of)) goto L_10bde88e;
  /* 10bde82c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde830 je 0x10bde88e */
  if (C.zf) goto L_10bde88e;
  /* 10bde832 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bde835 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde838 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bde839 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde83b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bde83d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bde840 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde843 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde846 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10bde849 push eax */
  push32((uint32_t)(EAX));
  /* 10bde84a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bde84d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10bde84f push edx */
  push32((uint32_t)(EDX));
  /* 10bde850 call 0x10be0f00 */
  push32(0x10bde855u); f_10be0f00();
  /* 10bde855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde858 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bde85b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde85f jne 0x10bde872 */
  if (!C.zf) goto L_10bde872;
  /* 10bde861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde867 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10bde86b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bde86e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10bde870 jmp 0x10bde88c */
  goto L_10bde88c;
L_10bde872:;
  /* 10bde872 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde876 jge 0x10bde883 */
  if ((C.sf==C.of)) goto L_10bde883;
  /* 10bde878 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde87b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde87e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10bde881 jmp 0x10bde88c */
  goto L_10bde88c;
L_10bde883:;
  /* 10bde883 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde886 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde889 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10bde88c:;
  /* 10bde88c jmp 0x10bde824 */
  goto L_10bde824;
L_10bde88e:;
  /* 10bde88e mov esp, ebp */
  ESP = (EBP);
  /* 10bde890 pop ebp */
  EBP = (pop32());
  /* 10bde891 ret  */
  ESPCHK(0x10bde810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8a0 @ 0x10bde8a0 (186 bytes, 50 insns) */
void f_10bde8a0(void) {
  FTRACE(0x10bde8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10bde8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bde8a4 mov eax, dword ptr [0x10bfe68c] */
  EAX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bde8a9 push eax */
  push32((uint32_t)(EAX));
  /* 10bde8aa call 0x10bd5660 */
  push32(0x10bde8afu); f_10bd5660();
  /* 10bde8af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde8b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bde8b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde8b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10bde8ba mov dword ptr [0x10bfe688], ecx */
  w32((uint32_t)(0x10bfe688), (ECX));
  /* 10bde8c0 mov edx, dword ptr [0x10bfe690] */
  EDX = (r32((uint32_t)(0x10bfe690)));
  /* 10bde8c6 push edx */
  push32((uint32_t)(EDX));
  /* 10bde8c7 call 0x10bd5660 */
  push32(0x10bde8ccu); f_10bd5660();
  /* 10bde8cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde8cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bde8d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde8d4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10bde8d7 mov dword ptr [0x10bfe680], ecx */
  w32((uint32_t)(0x10bfe680), (ECX));
  /* 10bde8dd mov dword ptr [0x10bfe67c], 0 */
  w32((uint32_t)(0x10bfe67c), (0x0u));
  /* 10bde8e7 cmp dword ptr [0x10bfe688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bde8ee je 0x10bde8f9 */
  if (C.zf) goto L_10bde8f9;
  /* 10bde8f0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10bde8f7 jmp 0x10bde90b */
  goto L_10bde90b;
L_10bde8f9:;
  /* 10bde8f9 mov edx, dword ptr [0x10bfe68c] */
  EDX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bde8ff push edx */
  push32((uint32_t)(EDX));
  /* 10bde900 call 0x10bdf340 */
  push32(0x10bde905u); f_10bdf340();
  /* 10bde905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde908 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bde90b:;
  /* 10bde90b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bde90e mov dword ptr [0x10bfe684], eax */
  w32((uint32_t)(0x10bfe684), (EAX));
  /* 10bde913 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bde915 push 0x10bde960 */
  push32((uint32_t)(0x10bde960u));
  /* 10bde91a call dword ptr [0x10c00330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00330))), 0x10bde920u);
  /* 10bde920 mov ecx, dword ptr [0x10bfe694] */
  ECX = (r32((uint32_t)(0x10bfe694)));
  /* 10bde926 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10bde92c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bde92e je 0x10bde94c */
  if (C.zf) goto L_10bde94c;
  /* 10bde930 mov edx, dword ptr [0x10bfe694] */
  EDX = (r32((uint32_t)(0x10bfe694)));
  /* 10bde936 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10bde93c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bde93e je 0x10bde94c */
  if (C.zf) goto L_10bde94c;
  /* 10bde940 mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bde945 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10bde948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde94a jne 0x10bde956 */
  if (!C.zf) goto L_10bde956;
L_10bde94c:;
  /* 10bde94c mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
L_10bde956:;
  /* 10bde956 mov esp, ebp */
  ESP = (EBP);
  /* 10bde958 pop ebp */
  EBP = (pop32());
  /* 10bde959 ret  */
  ESPCHK(0x10bde8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e960 @ 0x10bde960 (804 bytes, 220 insns) */
void f_10bde960(void) {
  FTRACE(0x10bde960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bde960 push ebp */
  push32((uint32_t)(EBP));
  /* 10bde961 mov ebp, esp */
  EBP = (ESP);
  /* 10bde963 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bde969 push eax */
  push32((uint32_t)(EAX));
  /* 10bde96a call 0x10bdf2c0 */
  push32(0x10bde96fu); f_10bdf2c0();
  /* 10bde96f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde972 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10bde975 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10bde977 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10bde97a push ecx */
  push32((uint32_t)(ECX));
  /* 10bde97b mov edx, dword ptr [0x10bfe680] */
  EDX = (r32((uint32_t)(0x10bfe680)));
  /* 10bde981 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bde983 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde985 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10bde98b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde991 push edx */
  push32((uint32_t)(EDX));
  /* 10bde992 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bde995 push eax */
  push32((uint32_t)(EAX));
  /* 10bde996 call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bde99cu);
  /* 10bde99c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde99e jne 0x10bde9b4 */
  if (!C.zf) goto L_10bde9b4;
  /* 10bde9a0 mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
  /* 10bde9aa mov eax, 1 */
  EAX = (0x1u);
  /* 10bde9af jmp 0x10bdec7e */
  goto L_10bdec7e;
L_10bde9b4:;
  /* 10bde9b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10bde9b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bde9b8 mov edx, dword ptr [0x10bfe690] */
  EDX = (r32((uint32_t)(0x10bfe690)));
  /* 10bde9be push edx */
  push32((uint32_t)(EDX));
  /* 10bde9bf call 0x10be0f00 */
  push32(0x10bde9c4u); f_10be0f00();
  /* 10bde9c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde9c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde9c9 jne 0x10bdeaef */
  if (!C.zf) goto L_10bdeaef;
  /* 10bde9cf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10bde9d1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10bde9d4 push eax */
  push32((uint32_t)(EAX));
  /* 10bde9d5 mov ecx, dword ptr [0x10bfe688] */
  ECX = (r32((uint32_t)(0x10bfe688)));
  /* 10bde9db neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bde9dd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bde9df and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10bde9e5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bde9eb push ecx */
  push32((uint32_t)(ECX));
  /* 10bde9ec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bde9ef push edx */
  push32((uint32_t)(EDX));
  /* 10bde9f0 call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bde9f6u);
  /* 10bde9f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bde9f8 jne 0x10bdea0e */
  if (!C.zf) goto L_10bdea0e;
  /* 10bde9fa mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
  /* 10bdea04 mov eax, 1 */
  EAX = (0x1u);
  /* 10bdea09 jmp 0x10bdec7e */
  goto L_10bdec7e;
L_10bdea0e:;
  /* 10bdea0e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10bdea11 push eax */
  push32((uint32_t)(EAX));
  /* 10bdea12 mov ecx, dword ptr [0x10bfe68c] */
  ECX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdea18 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdea19 call 0x10be0f00 */
  push32(0x10bdea1eu); f_10be0f00();
  /* 10bdea1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdea21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdea23 jne 0x10bdea50 */
  if (!C.zf) goto L_10bdea50;
  /* 10bdea25 mov edx, dword ptr [0x10bfe694] */
  EDX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdea2b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdea31 mov dword ptr [0x10bfe694], edx */
  w32((uint32_t)(0x10bfe694), (EDX));
  /* 10bdea37 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdea3a mov dword ptr [0x10bfe698], eax */
  w32((uint32_t)(0x10bfe698), (EAX));
  /* 10bdea3f mov ecx, dword ptr [0x10bfe698] */
  ECX = (r32((uint32_t)(0x10bfe698)));
  /* 10bdea45 mov dword ptr [0x10bfe67c], ecx */
  w32((uint32_t)(0x10bfe67c), (ECX));
  /* 10bdea4b jmp 0x10bdeaef */
  goto L_10bdeaef;
L_10bdea50:;
  /* 10bdea50 mov edx, dword ptr [0x10bfe694] */
  EDX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdea56 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdea59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdea5b jne 0x10bdeaef */
  if (!C.zf) goto L_10bdeaef;
  /* 10bdea61 cmp dword ptr [0x10bfe684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdea68 je 0x10bdeabd */
  if (C.zf) goto L_10bdeabd;
  /* 10bdea6a mov eax, dword ptr [0x10bfe684] */
  EAX = (r32((uint32_t)(0x10bfe684)));
  /* 10bdea6f push eax */
  push32((uint32_t)(EAX));
  /* 10bdea70 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10bdea73 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdea74 mov edx, dword ptr [0x10bfe68c] */
  EDX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdea7a push edx */
  push32((uint32_t)(EDX));
  /* 10bdea7b call 0x10be0fd0 */
  push32(0x10bdea80u); f_10be0fd0();
  /* 10bdea80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdea83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdea85 jne 0x10bdeabd */
  if (!C.zf) goto L_10bdeabd;
  /* 10bdea87 mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdea8c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10bdea8e mov dword ptr [0x10bfe694], eax */
  w32((uint32_t)(0x10bfe694), (EAX));
  /* 10bdea93 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdea96 mov dword ptr [0x10bfe698], ecx */
  w32((uint32_t)(0x10bfe698), (ECX));
  /* 10bdea9c mov edx, dword ptr [0x10bfe68c] */
  EDX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdeaa2 push edx */
  push32((uint32_t)(EDX));
  /* 10bdeaa3 call 0x10bd5660 */
  push32(0x10bdeaa8u); f_10bd5660();
  /* 10bdeaa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdeaab cmp eax, dword ptr [0x10bfe684] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfe684))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdeab1 jne 0x10bdeabb */
  if (!C.zf) goto L_10bdeabb;
  /* 10bdeab3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeab6 mov dword ptr [0x10bfe67c], eax */
  w32((uint32_t)(0x10bfe67c), (EAX));
L_10bdeabb:;
  /* 10bdeabb jmp 0x10bdeaef */
  goto L_10bdeaef;
L_10bdeabd:;
  /* 10bdeabd mov ecx, dword ptr [0x10bfe694] */
  ECX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdeac3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdeac6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdeac8 jne 0x10bdeaef */
  if (!C.zf) goto L_10bdeaef;
  /* 10bdeaca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeacd push edx */
  push32((uint32_t)(EDX));
  /* 10bdeace call 0x10bdf000 */
  push32(0x10bdead3u); f_10bdf000();
  /* 10bdead3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdead6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdead8 je 0x10bdeaef */
  if (C.zf) goto L_10bdeaef;
  /* 10bdeada mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdeadf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10bdeae1 mov dword ptr [0x10bfe694], eax */
  w32((uint32_t)(0x10bfe694), (EAX));
  /* 10bdeae6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeae9 mov dword ptr [0x10bfe698], ecx */
  w32((uint32_t)(0x10bfe698), (ECX));
L_10bdeaef:;
  /* 10bdeaef mov edx, dword ptr [0x10bfe694] */
  EDX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdeaf5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdeafb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdeb01 je 0x10bdec71 */
  if (C.zf) goto L_10bdec71;
  /* 10bdeb07 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10bdeb09 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10bdeb0c push eax */
  push32((uint32_t)(EAX));
  /* 10bdeb0d mov ecx, dword ptr [0x10bfe688] */
  ECX = (r32((uint32_t)(0x10bfe688)));
  /* 10bdeb13 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bdeb15 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdeb17 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdeb1d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdeb23 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdeb24 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeb27 push edx */
  push32((uint32_t)(EDX));
  /* 10bdeb28 call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bdeb2eu);
  /* 10bdeb2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdeb30 jne 0x10bdeb46 */
  if (!C.zf) goto L_10bdeb46;
  /* 10bdeb32 mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
  /* 10bdeb3c mov eax, 1 */
  EAX = (0x1u);
  /* 10bdeb41 jmp 0x10bdec7e */
  goto L_10bdec7e;
L_10bdeb46:;
  /* 10bdeb46 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10bdeb49 push eax */
  push32((uint32_t)(EAX));
  /* 10bdeb4a mov ecx, dword ptr [0x10bfe68c] */
  ECX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdeb50 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdeb51 call 0x10be0f00 */
  push32(0x10bdeb56u); f_10be0f00();
  /* 10bdeb56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdeb59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdeb5b jne 0x10bdec10 */
  if (!C.zf) goto L_10bdec10;
  /* 10bdeb61 mov edx, dword ptr [0x10bfe694] */
  EDX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdeb67 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10bdeb6a mov dword ptr [0x10bfe694], edx */
  w32((uint32_t)(0x10bfe694), (EDX));
  /* 10bdeb70 cmp dword ptr [0x10bfe688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdeb77 je 0x10bdeb9a */
  if (C.zf) goto L_10bdeb9a;
  /* 10bdeb79 mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdeb7e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10bdeb81 mov dword ptr [0x10bfe694], eax */
  w32((uint32_t)(0x10bfe694), (EAX));
  /* 10bdeb86 cmp dword ptr [0x10bfe67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdeb8d jne 0x10bdeb98 */
  if (!C.zf) goto L_10bdeb98;
  /* 10bdeb8f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeb92 mov dword ptr [0x10bfe67c], ecx */
  w32((uint32_t)(0x10bfe67c), (ECX));
L_10bdeb98:;
  /* 10bdeb98 jmp 0x10bdec0e */
  goto L_10bdec0e;
L_10bdeb9a:;
  /* 10bdeb9a cmp dword ptr [0x10bfe684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdeba1 je 0x10bdebef */
  if (C.zf) goto L_10bdebef;
  /* 10bdeba3 mov edx, dword ptr [0x10bfe68c] */
  EDX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdeba9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdebaa call 0x10bd5660 */
  push32(0x10bdebafu); f_10bd5660();
  /* 10bdebaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdebb2 cmp eax, dword ptr [0x10bfe684] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfe684))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdebb8 jne 0x10bdebef */
  if (!C.zf) goto L_10bdebef;
  /* 10bdebba push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdebbc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdebbf push eax */
  push32((uint32_t)(EAX));
  /* 10bdebc0 call 0x10bdf050 */
  push32(0x10bdebc5u); f_10bdf050();
  /* 10bdebc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdebc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdebca je 0x10bdebed */
  if (C.zf) goto L_10bdebed;
  /* 10bdebcc mov ecx, dword ptr [0x10bfe694] */
  ECX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdebd2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10bdebd5 mov dword ptr [0x10bfe694], ecx */
  w32((uint32_t)(0x10bfe694), (ECX));
  /* 10bdebdb cmp dword ptr [0x10bfe67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdebe2 jne 0x10bdebed */
  if (!C.zf) goto L_10bdebed;
  /* 10bdebe4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdebe7 mov dword ptr [0x10bfe67c], edx */
  w32((uint32_t)(0x10bfe67c), (EDX));
L_10bdebed:;
  /* 10bdebed jmp 0x10bdec0e */
  goto L_10bdec0e;
L_10bdebef:;
  /* 10bdebef mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdebf4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10bdebf7 mov dword ptr [0x10bfe694], eax */
  w32((uint32_t)(0x10bfe694), (EAX));
  /* 10bdebfc cmp dword ptr [0x10bfe67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdec03 jne 0x10bdec0e */
  if (!C.zf) goto L_10bdec0e;
  /* 10bdec05 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdec08 mov dword ptr [0x10bfe67c], ecx */
  w32((uint32_t)(0x10bfe67c), (ECX));
L_10bdec0e:;
  /* 10bdec0e jmp 0x10bdec71 */
  goto L_10bdec71;
L_10bdec10:;
  /* 10bdec10 cmp dword ptr [0x10bfe688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdec17 jne 0x10bdec71 */
  if (!C.zf) goto L_10bdec71;
  /* 10bdec19 cmp dword ptr [0x10bfe684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdec20 je 0x10bdec71 */
  if (C.zf) goto L_10bdec71;
  /* 10bdec22 mov edx, dword ptr [0x10bfe684] */
  EDX = (r32((uint32_t)(0x10bfe684)));
  /* 10bdec28 push edx */
  push32((uint32_t)(EDX));
  /* 10bdec29 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10bdec2c push eax */
  push32((uint32_t)(EAX));
  /* 10bdec2d mov ecx, dword ptr [0x10bfe68c] */
  ECX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdec33 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdec34 call 0x10be0fd0 */
  push32(0x10bdec39u); f_10be0fd0();
  /* 10bdec39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdec3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdec3e jne 0x10bdec71 */
  if (!C.zf) goto L_10bdec71;
  /* 10bdec40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdec42 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdec45 push edx */
  push32((uint32_t)(EDX));
  /* 10bdec46 call 0x10bdf050 */
  push32(0x10bdec4bu); f_10bdf050();
  /* 10bdec4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdec4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdec50 je 0x10bdec71 */
  if (C.zf) goto L_10bdec71;
  /* 10bdec52 mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdec57 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10bdec5a mov dword ptr [0x10bfe694], eax */
  w32((uint32_t)(0x10bfe694), (EAX));
  /* 10bdec5f cmp dword ptr [0x10bfe67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdec66 jne 0x10bdec71 */
  if (!C.zf) goto L_10bdec71;
  /* 10bdec68 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdec6b mov dword ptr [0x10bfe67c], ecx */
  w32((uint32_t)(0x10bfe67c), (ECX));
L_10bdec71:;
  /* 10bdec71 mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdec76 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdec79 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bdec7b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdec7d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10bdec7e:;
  /* 10bdec7e mov esp, ebp */
  ESP = (EBP);
  /* 10bdec80 pop ebp */
  EBP = (pop32());
  /* 10bdec81 ret 4 */
  ESPCHK(0x10bde960u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ec90 @ 0x10bdec90 (116 bytes, 33 insns) */
void f_10bdec90(void) {
  FTRACE(0x10bdec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdec90 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdec91 mov ebp, esp */
  EBP = (ESP);
  /* 10bdec93 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdec94 mov eax, dword ptr [0x10bfe68c] */
  EAX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdec99 push eax */
  push32((uint32_t)(EAX));
  /* 10bdec9a call 0x10bd5660 */
  push32(0x10bdec9fu); f_10bd5660();
  /* 10bdec9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdeca2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdeca4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdeca7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10bdecaa mov dword ptr [0x10bfe688], ecx */
  w32((uint32_t)(0x10bfe688), (ECX));
  /* 10bdecb0 cmp dword ptr [0x10bfe688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdecb7 je 0x10bdecc2 */
  if (C.zf) goto L_10bdecc2;
  /* 10bdecb9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10bdecc0 jmp 0x10bdecd4 */
  goto L_10bdecd4;
L_10bdecc2:;
  /* 10bdecc2 mov edx, dword ptr [0x10bfe68c] */
  EDX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdecc8 push edx */
  push32((uint32_t)(EDX));
  /* 10bdecc9 call 0x10bdf340 */
  push32(0x10bdecceu); f_10bdf340();
  /* 10bdecce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdecd1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bdecd4:;
  /* 10bdecd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdecd7 mov dword ptr [0x10bfe684], eax */
  w32((uint32_t)(0x10bfe684), (EAX));
  /* 10bdecdc push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdecde push 0x10bded10 */
  push32((uint32_t)(0x10bded10u));
  /* 10bdece3 call dword ptr [0x10c00330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00330))), 0x10bdece9u);
  /* 10bdece9 mov ecx, dword ptr [0x10bfe694] */
  ECX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdecef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdecf2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdecf4 jne 0x10bded00 */
  if (!C.zf) goto L_10bded00;
  /* 10bdecf6 mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
L_10bded00:;
  /* 10bded00 mov esp, ebp */
  ESP = (EBP);
  /* 10bded02 pop ebp */
  EBP = (pop32());
  /* 10bded03 ret  */
  ESPCHK(0x10bdec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed10 @ 0x10bded10 (287 bytes, 86 insns) */
void f_10bded10(void) {
  FTRACE(0x10bded10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bded10 push ebp */
  push32((uint32_t)(EBP));
  /* 10bded11 mov ebp, esp */
  EBP = (ESP);
  /* 10bded13 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bded16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bded19 push eax */
  push32((uint32_t)(EAX));
  /* 10bded1a call 0x10bdf2c0 */
  push32(0x10bded1fu); f_10bdf2c0();
  /* 10bded1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bded22 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10bded25 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10bded27 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10bded2a push ecx */
  push32((uint32_t)(ECX));
  /* 10bded2b mov edx, dword ptr [0x10bfe688] */
  EDX = (r32((uint32_t)(0x10bfe688)));
  /* 10bded31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bded33 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bded35 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10bded3b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bded41 push edx */
  push32((uint32_t)(EDX));
  /* 10bded42 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bded45 push eax */
  push32((uint32_t)(EAX));
  /* 10bded46 call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bded4cu);
  /* 10bded4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bded4e jne 0x10bded64 */
  if (!C.zf) goto L_10bded64;
  /* 10bded50 mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
  /* 10bded5a mov eax, 1 */
  EAX = (0x1u);
  /* 10bded5f jmp 0x10bdee29 */
  goto L_10bdee29;
L_10bded64:;
  /* 10bded64 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10bded67 push ecx */
  push32((uint32_t)(ECX));
  /* 10bded68 mov edx, dword ptr [0x10bfe68c] */
  EDX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bded6e push edx */
  push32((uint32_t)(EDX));
  /* 10bded6f call 0x10be0f00 */
  push32(0x10bded74u); f_10be0f00();
  /* 10bded74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bded77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bded79 jne 0x10bdedb9 */
  if (!C.zf) goto L_10bdedb9;
  /* 10bded7b cmp dword ptr [0x10bfe688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bded82 jne 0x10bded96 */
  if (!C.zf) goto L_10bded96;
  /* 10bded84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bded86 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bded89 push eax */
  push32((uint32_t)(EAX));
  /* 10bded8a call 0x10bdf050 */
  push32(0x10bded8fu); f_10bdf050();
  /* 10bded8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bded92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bded94 je 0x10bdedb7 */
  if (C.zf) goto L_10bdedb7;
L_10bded96:;
  /* 10bded96 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bded99 mov dword ptr [0x10bfe698], ecx */
  w32((uint32_t)(0x10bfe698), (ECX));
  /* 10bded9f mov edx, dword ptr [0x10bfe698] */
  EDX = (r32((uint32_t)(0x10bfe698)));
  /* 10bdeda5 mov dword ptr [0x10bfe67c], edx */
  w32((uint32_t)(0x10bfe67c), (EDX));
  /* 10bdedab mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdedb0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10bdedb2 mov dword ptr [0x10bfe694], eax */
  w32((uint32_t)(0x10bfe694), (EAX));
L_10bdedb7:;
  /* 10bdedb7 jmp 0x10bdee1c */
  goto L_10bdee1c;
L_10bdedb9:;
  /* 10bdedb9 cmp dword ptr [0x10bfe688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdedc0 jne 0x10bdee1c */
  if (!C.zf) goto L_10bdee1c;
  /* 10bdedc2 cmp dword ptr [0x10bfe684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10bfe684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdedc9 je 0x10bdee1c */
  if (C.zf) goto L_10bdee1c;
  /* 10bdedcb mov ecx, dword ptr [0x10bfe684] */
  ECX = (r32((uint32_t)(0x10bfe684)));
  /* 10bdedd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdedd2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10bdedd5 push edx */
  push32((uint32_t)(EDX));
  /* 10bdedd6 mov eax, dword ptr [0x10bfe68c] */
  EAX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdeddb push eax */
  push32((uint32_t)(EAX));
  /* 10bdeddc call 0x10be0fd0 */
  push32(0x10bdede1u); f_10be0fd0();
  /* 10bdede1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdede4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdede6 jne 0x10bdee1c */
  if (!C.zf) goto L_10bdee1c;
  /* 10bdede8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdedea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeded push ecx */
  push32((uint32_t)(ECX));
  /* 10bdedee call 0x10bdf050 */
  push32(0x10bdedf3u); f_10bdf050();
  /* 10bdedf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdedf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdedf8 je 0x10bdee1c */
  if (C.zf) goto L_10bdee1c;
  /* 10bdedfa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdedfd mov dword ptr [0x10bfe698], edx */
  w32((uint32_t)(0x10bfe698), (EDX));
  /* 10bdee03 mov eax, dword ptr [0x10bfe698] */
  EAX = (r32((uint32_t)(0x10bfe698)));
  /* 10bdee08 mov dword ptr [0x10bfe67c], eax */
  w32((uint32_t)(0x10bfe67c), (EAX));
  /* 10bdee0d mov ecx, dword ptr [0x10bfe694] */
  ECX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdee13 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdee16 mov dword ptr [0x10bfe694], ecx */
  w32((uint32_t)(0x10bfe694), (ECX));
L_10bdee1c:;
  /* 10bdee1c mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdee21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdee24 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bdee26 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdee28 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10bdee29:;
  /* 10bdee29 mov esp, ebp */
  ESP = (EBP);
  /* 10bdee2b pop ebp */
  EBP = (pop32());
  /* 10bdee2c ret 4 */
  ESPCHK(0x10bded10u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ee30 @ 0x10bdee30 (69 bytes, 20 insns) */
void f_10bdee30(void) {
  FTRACE(0x10bdee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdee30 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdee31 mov ebp, esp */
  EBP = (ESP);
  /* 10bdee33 mov eax, dword ptr [0x10bfe690] */
  EAX = (r32((uint32_t)(0x10bfe690)));
  /* 10bdee38 push eax */
  push32((uint32_t)(EAX));
  /* 10bdee39 call 0x10bd5660 */
  push32(0x10bdee3eu); f_10bd5660();
  /* 10bdee3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdee41 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdee43 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdee46 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10bdee49 mov dword ptr [0x10bfe680], ecx */
  w32((uint32_t)(0x10bfe680), (ECX));
  /* 10bdee4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdee51 push 0x10bdee80 */
  push32((uint32_t)(0x10bdee80u));
  /* 10bdee56 call dword ptr [0x10c00330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00330))), 0x10bdee5cu);
  /* 10bdee5c mov edx, dword ptr [0x10bfe694] */
  EDX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdee62 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdee65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdee67 jne 0x10bdee73 */
  if (!C.zf) goto L_10bdee73;
  /* 10bdee69 mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
L_10bdee73:;
  /* 10bdee73 pop ebp */
  EBP = (pop32());
  /* 10bdee74 ret  */
  ESPCHK(0x10bdee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee80 @ 0x10bdee80 (172 bytes, 54 insns) */
void f_10bdee80(void) {
  FTRACE(0x10bdee80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdee80 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdee81 mov ebp, esp */
  EBP = (ESP);
  /* 10bdee83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdee86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdee89 push eax */
  push32((uint32_t)(EAX));
  /* 10bdee8a call 0x10bdf2c0 */
  push32(0x10bdee8fu); f_10bdf2c0();
  /* 10bdee8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdee92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10bdee95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10bdee97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10bdee9a push ecx */
  push32((uint32_t)(ECX));
  /* 10bdee9b mov edx, dword ptr [0x10bfe680] */
  EDX = (r32((uint32_t)(0x10bfe680)));
  /* 10bdeea1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bdeea3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdeea5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdeeab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdeeb1 push edx */
  push32((uint32_t)(EDX));
  /* 10bdeeb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeeb5 push eax */
  push32((uint32_t)(EAX));
  /* 10bdeeb6 call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bdeebcu);
  /* 10bdeebc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdeebe jne 0x10bdeed1 */
  if (!C.zf) goto L_10bdeed1;
  /* 10bdeec0 mov dword ptr [0x10bfe694], 0 */
  w32((uint32_t)(0x10bfe694), (0x0u));
  /* 10bdeeca mov eax, 1 */
  EAX = (0x1u);
  /* 10bdeecf jmp 0x10bdef26 */
  goto L_10bdef26;
L_10bdeed1:;
  /* 10bdeed1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10bdeed4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdeed5 mov edx, dword ptr [0x10bfe690] */
  EDX = (r32((uint32_t)(0x10bfe690)));
  /* 10bdeedb push edx */
  push32((uint32_t)(EDX));
  /* 10bdeedc call 0x10be0f00 */
  push32(0x10bdeee1u); f_10be0f00();
  /* 10bdeee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdeee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdeee6 jne 0x10bdef19 */
  if (!C.zf) goto L_10bdef19;
  /* 10bdeee8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeeeb push eax */
  push32((uint32_t)(EAX));
  /* 10bdeeec call 0x10bdf000 */
  push32(0x10bdeef1u); f_10bdf000();
  /* 10bdeef1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdeef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdeef6 je 0x10bdef19 */
  if (C.zf) goto L_10bdef19;
  /* 10bdeef8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10bdeefb mov dword ptr [0x10bfe698], ecx */
  w32((uint32_t)(0x10bfe698), (ECX));
  /* 10bdef01 mov edx, dword ptr [0x10bfe698] */
  EDX = (r32((uint32_t)(0x10bfe698)));
  /* 10bdef07 mov dword ptr [0x10bfe67c], edx */
  w32((uint32_t)(0x10bfe67c), (EDX));
  /* 10bdef0d mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdef12 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10bdef14 mov dword ptr [0x10bfe694], eax */
  w32((uint32_t)(0x10bfe694), (EAX));
L_10bdef19:;
  /* 10bdef19 mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdef1e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdef21 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10bdef23 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdef25 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10bdef26:;
  /* 10bdef26 mov esp, ebp */
  ESP = (EBP);
  /* 10bdef28 pop ebp */
  EBP = (pop32());
  /* 10bdef29 ret 4 */
  ESPCHK(0x10bdee80u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ef30 @ 0x10bdef30 (43 bytes, 11 insns) */
void f_10bdef30(void) {
  FTRACE(0x10bdef30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdef30 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdef31 mov ebp, esp */
  EBP = (ESP);
  /* 10bdef33 mov eax, dword ptr [0x10bfe694] */
  EAX = (r32((uint32_t)(0x10bfe694)));
  /* 10bdef38 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10bdef3d mov dword ptr [0x10bfe694], eax */
  w32((uint32_t)(0x10bfe694), (EAX));
  /* 10bdef42 call dword ptr [0x10c00234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00234))), 0x10bdef48u);
  /* 10bdef48 mov dword ptr [0x10bfe698], eax */
  w32((uint32_t)(0x10bfe698), (EAX));
  /* 10bdef4d mov ecx, dword ptr [0x10bfe698] */
  ECX = (r32((uint32_t)(0x10bfe698)));
  /* 10bdef53 mov dword ptr [0x10bfe67c], ecx */
  w32((uint32_t)(0x10bfe67c), (ECX));
  /* 10bdef59 pop ebp */
  EBP = (pop32());
  /* 10bdef5a ret  */
  ESPCHK(0x10bdef30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef60 @ 0x10bdef60 (155 bytes, 57 insns) */
void f_10bdef60(void) {
  FTRACE(0x10bdef60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdef60 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdef61 mov ebp, esp */
  EBP = (ESP);
  /* 10bdef63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdef66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdef6a je 0x10bdef8b */
  if (C.zf) goto L_10bdef8b;
  /* 10bdef6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdef6f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10bdef72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdef74 je 0x10bdef8b */
  if (C.zf) goto L_10bdef8b;
  /* 10bdef76 push 0x10bfa6bc */
  push32((uint32_t)(0x10bfa6bcu));
  /* 10bdef7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdef7e push edx */
  push32((uint32_t)(EDX));
  /* 10bdef7f call 0x10bde4c0 */
  push32(0x10bdef84u); f_10bde4c0();
  /* 10bdef84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdef87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdef89 jne 0x10bdefb3 */
  if (!C.zf) goto L_10bdefb3;
L_10bdef8b:;
  /* 10bdef8b push 8 */
  push32((uint32_t)(0x8u));
  /* 10bdef8d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10bdef90 push eax */
  push32((uint32_t)(EAX));
  /* 10bdef91 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10bdef96 mov ecx, dword ptr [0x10bfe698] */
  ECX = (r32((uint32_t)(0x10bfe698)));
  /* 10bdef9c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdef9d call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bdefa3u);
  /* 10bdefa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdefa5 jne 0x10bdefab */
  if (!C.zf) goto L_10bdefab;
  /* 10bdefa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdefa9 jmp 0x10bdeff7 */
  goto L_10bdeff7;
L_10bdefab:;
  /* 10bdefab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10bdefae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10bdefb1 jmp 0x10bdefeb */
  goto L_10bdefeb;
L_10bdefb3:;
  /* 10bdefb3 push 0x10bfa6b8 */
  push32((uint32_t)(0x10bfa6b8u));
  /* 10bdefb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdefbb push eax */
  push32((uint32_t)(EAX));
  /* 10bdefbc call 0x10bde4c0 */
  push32(0x10bdefc1u); f_10bde4c0();
  /* 10bdefc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdefc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdefc6 jne 0x10bdefeb */
  if (!C.zf) goto L_10bdefeb;
  /* 10bdefc8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10bdefca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10bdefcd push ecx */
  push32((uint32_t)(ECX));
  /* 10bdefce push 0xb */
  push32((uint32_t)(0xbu));
  /* 10bdefd0 mov edx, dword ptr [0x10bfe698] */
  EDX = (r32((uint32_t)(0x10bfe698)));
  /* 10bdefd6 push edx */
  push32((uint32_t)(EDX));
  /* 10bdefd7 call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bdefddu);
  /* 10bdefdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdefdf jne 0x10bdefe5 */
  if (!C.zf) goto L_10bdefe5;
  /* 10bdefe1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdefe3 jmp 0x10bdeff7 */
  goto L_10bdeff7;
L_10bdefe5:;
  /* 10bdefe5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10bdefe8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10bdefeb:;
  /* 10bdefeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdefee push ecx */
  push32((uint32_t)(ECX));
  /* 10bdefef call 0x10be10e0 */
  push32(0x10bdeff4u); f_10be10e0();
  /* 10bdeff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10bdeff7:;
  /* 10bdeff7 mov esp, ebp */
  ESP = (EBP);
  /* 10bdeff9 pop ebp */
  EBP = (pop32());
  /* 10bdeffa ret  */
  ESPCHK(0x10bdef60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f000 @ 0x10bdf000 (79 bytes, 26 insns) */
void f_10bdf000(void) {
  FTRACE(0x10bdf000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf000 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf001 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf006 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10bdf00a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10bdf00e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdf015 jmp 0x10bdf020 */
  goto L_10bdf020;
L_10bdf017:;
  /* 10bdf017 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf01a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf01d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10bdf020:;
  /* 10bdf020 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf024 jae 0x10bdf046 */
  if (!C.cf) goto L_10bdf046;
  /* 10bdf026 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf029 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdf02f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf032 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10bdf034 mov cx, word ptr [eax*2 + 0x10bfd9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10bfd9c4)));
  /* 10bdf03c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf03e jne 0x10bdf044 */
  if (!C.zf) goto L_10bdf044;
  /* 10bdf040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf042 jmp 0x10bdf04b */
  goto L_10bdf04b;
L_10bdf044:;
  /* 10bdf044 jmp 0x10bdf017 */
  goto L_10bdf017;
L_10bdf046:;
  /* 10bdf046 mov eax, 1 */
  EAX = (0x1u);
L_10bdf04b:;
  /* 10bdf04b mov esp, ebp */
  ESP = (EBP);
  /* 10bdf04d pop ebp */
  EBP = (pop32());
  /* 10bdf04e ret  */
  ESPCHK(0x10bdf000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f050 @ 0x10bdf050 (135 bytes, 48 insns) */
void f_10bdf050(void) {
  FTRACE(0x10bdf050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf050 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf051 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf053 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf056 push esi */
  push32((uint32_t)(ESI));
  /* 10bdf057 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf05a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf05f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf064 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf069 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10bdf06c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf071 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdf074 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10bdf076 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10bdf079 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf07a push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdf07c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf07f push edx */
  push32((uint32_t)(EDX));
  /* 10bdf080 call dword ptr [0x10bfe69c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10bfe69c))), 0x10bdf086u);
  /* 10bdf086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdf088 jne 0x10bdf08e */
  if (!C.zf) goto L_10bdf08e;
  /* 10bdf08a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf08c jmp 0x10bdf0d2 */
  goto L_10bdf0d2;
L_10bdf08e:;
  /* 10bdf08e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10bdf091 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf092 call 0x10bdf2c0 */
  push32(0x10bdf097u); f_10bdf2c0();
  /* 10bdf097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf09a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf09d je 0x10bdf0cd */
  if (C.zf) goto L_10bdf0cd;
  /* 10bdf09f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf0a3 je 0x10bdf0cd */
  if (C.zf) goto L_10bdf0cd;
  /* 10bdf0a5 mov ecx, dword ptr [0x10bfe68c] */
  ECX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdf0ab push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf0ac call 0x10bdf340 */
  push32(0x10bdf0b1u); f_10bdf340();
  /* 10bdf0b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf0b4 mov esi, eax */
  ESI = (EAX);
  /* 10bdf0b6 mov edx, dword ptr [0x10bfe68c] */
  EDX = (r32((uint32_t)(0x10bfe68c)));
  /* 10bdf0bc push edx */
  push32((uint32_t)(EDX));
  /* 10bdf0bd call 0x10bd5660 */
  push32(0x10bdf0c2u); f_10bd5660();
  /* 10bdf0c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf0c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf0c7 jne 0x10bdf0cd */
  if (!C.zf) goto L_10bdf0cd;
  /* 10bdf0c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf0cb jmp 0x10bdf0d2 */
  goto L_10bdf0d2;
L_10bdf0cd:;
  /* 10bdf0cd mov eax, 1 */
  EAX = (0x1u);
L_10bdf0d2:;
  /* 10bdf0d2 pop esi */
  ESI = (pop32());
  /* 10bdf0d3 mov esp, ebp */
  ESP = (EBP);
  /* 10bdf0d5 pop ebp */
  EBP = (pop32());
  /* 10bdf0d6 ret  */
  ESPCHK(0x10bdf050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0e0 @ 0x10bdf0e0 (77 bytes, 18 insns) */
void f_10bdf0e0(void) {
  FTRACE(0x10bdf0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf0e3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf0e9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10bdf0f3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10bdf0f9 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf0fa call dword ptr [0x10c00230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00230))), 0x10bdf100u);
  /* 10bdf100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdf102 je 0x10bdf119 */
  if (C.zf) goto L_10bdf119;
  /* 10bdf104 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf10b jne 0x10bdf119 */
  if (!C.zf) goto L_10bdf119;
  /* 10bdf10d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10bdf117 jmp 0x10bdf123 */
  goto L_10bdf123;
L_10bdf119:;
  /* 10bdf119 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10bdf123:;
  /* 10bdf123 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10bdf129 mov esp, ebp */
  ESP = (EBP);
  /* 10bdf12b pop ebp */
  EBP = (pop32());
  /* 10bdf12c ret  */
  ESPCHK(0x10bdf0e0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10bdf130 (388 bytes, 118 insns) */
void f_10bdf130(void) {
  FTRACE(0x10bdf130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf130 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf131 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf133 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf136 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf13d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10bdf144 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10bdf14b:;
  /* 10bdf14b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf14e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf151 jg 0x10bdf298 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bdf298;
  /* 10bdf157 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf15a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf15d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10bdf15e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf160 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10bdf162 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdf165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf168 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf16b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf16e cmp edx, dword ptr [ecx + 0x10bfd520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10bfd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf174 jne 0x10bdf26e */
  if (!C.zf) goto L_10bdf26e;
  /* 10bdf17a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdf17d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bdf180 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf184 ja 0x10bdf1a7 */
  if ((!C.cf&&!C.zf)) goto L_10bdf1a7;
  /* 10bdf186 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf18a je 0x10bdf219 */
  if (C.zf) goto L_10bdf219;
  /* 10bdf190 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf194 je 0x10bdf1c4 */
  if (C.zf) goto L_10bdf1c4;
  /* 10bdf196 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf19a je 0x10bdf1e6 */
  if (C.zf) goto L_10bdf1e6;
  /* 10bdf19c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf1a0 je 0x10bdf208 */
  if (C.zf) goto L_10bdf208;
  /* 10bdf1a2 jmp 0x10bdf238 */
  goto L_10bdf238;
L_10bdf1a7:;
  /* 10bdf1a7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf1ae je 0x10bdf1d5 */
  if (C.zf) goto L_10bdf1d5;
  /* 10bdf1b0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf1b7 je 0x10bdf1f7 */
  if (C.zf) goto L_10bdf1f7;
  /* 10bdf1b9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf1c0 je 0x10bdf22a */
  if (C.zf) goto L_10bdf22a;
  /* 10bdf1c2 jmp 0x10bdf238 */
  goto L_10bdf238;
L_10bdf1c4:;
  /* 10bdf1c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf1c7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf1ca add ecx, 0x10bfd524 */
  { uint32_t _a=(ECX),_b=(0x10bfd524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf1d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdf1d3 jmp 0x10bdf238 */
  goto L_10bdf238;
L_10bdf1d5:;
  /* 10bdf1d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf1d8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf1db mov eax, dword ptr [edx + 0x10bfd52c] */
  EAX = (r32((uint32_t)(EDX + 0x10bfd52c)));
  /* 10bdf1e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdf1e4 jmp 0x10bdf238 */
  goto L_10bdf238;
L_10bdf1e6:;
  /* 10bdf1e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf1e9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf1ec add ecx, 0x10bfd530 */
  { uint32_t _a=(ECX),_b=(0x10bfd530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf1f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdf1f5 jmp 0x10bdf238 */
  goto L_10bdf238;
L_10bdf1f7:;
  /* 10bdf1f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf1fa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf1fd mov eax, dword ptr [edx + 0x10bfd534] */
  EAX = (r32((uint32_t)(EDX + 0x10bfd534)));
  /* 10bdf203 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdf206 jmp 0x10bdf238 */
  goto L_10bdf238;
L_10bdf208:;
  /* 10bdf208 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf20b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf20e add ecx, 0x10bfd538 */
  { uint32_t _a=(ECX),_b=(0x10bfd538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf214 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdf217 jmp 0x10bdf238 */
  goto L_10bdf238;
L_10bdf219:;
  /* 10bdf219 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf21c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf21f add edx, 0x10bfd53c */
  { uint32_t _a=(EDX),_b=(0x10bfd53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf225 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bdf228 jmp 0x10bdf238 */
  goto L_10bdf238;
L_10bdf22a:;
  /* 10bdf22a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf22d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf230 add eax, 0x10bfd544 */
  { uint32_t _a=(EAX),_b=(0x10bfd544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf235 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10bdf238:;
  /* 10bdf238 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf23c je 0x10bdf244 */
  if (C.zf) goto L_10bdf244;
  /* 10bdf23e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf242 jge 0x10bdf246 */
  if ((C.sf==C.of)) goto L_10bdf246;
L_10bdf244:;
  /* 10bdf244 jmp 0x10bdf298 */
  goto L_10bdf298;
L_10bdf246:;
  /* 10bdf246 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdf249 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf24c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf24d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf250 push edx */
  push32((uint32_t)(EDX));
  /* 10bdf251 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdf254 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf255 call 0x10bd6050 */
  push32(0x10bdf25au); f_10bd6050();
  /* 10bdf25a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf25d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdf260 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf263 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10bdf267 mov eax, 1 */
  EAX = (0x1u);
  /* 10bdf26c jmp 0x10bdf2ae */
  goto L_10bdf2ae;
L_10bdf26e:;
  /* 10bdf26e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf271 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf277 cmp eax, dword ptr [edx + 0x10bfd520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10bfd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf27d jae 0x10bdf28a */
  if (!C.cf) goto L_10bdf28a;
  /* 10bdf27f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf282 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf285 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10bdf288 jmp 0x10bdf293 */
  goto L_10bdf293;
L_10bdf28a:;
  /* 10bdf28a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf28d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf290 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10bdf293:;
  /* 10bdf293 jmp 0x10bdf14b */
  goto L_10bdf14b;
L_10bdf298:;
  /* 10bdf298 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdf29b push eax */
  push32((uint32_t)(EAX));
  /* 10bdf29c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdf29f push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf2a0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdf2a3 push edx */
  push32((uint32_t)(EDX));
  /* 10bdf2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf2a7 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf2a8 call dword ptr [0x10c0032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c0032c))), 0x10bdf2aeu);
L_10bdf2ae:;
  /* 10bdf2ae mov esp, ebp */
  ESP = (EBP);
  /* 10bdf2b0 pop ebp */
  EBP = (pop32());
  /* 10bdf2b1 ret 0x10 */
  ESPCHK(0x10bdf130u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f2c0 @ 0x10bdf2c0 (118 bytes, 42 insns) */
void f_10bdf2c0(void) {
  FTRACE(0x10bdf2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf2c1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf2c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf2c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10bdf2cd:;
  /* 10bdf2cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf2d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bdf2d2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10bdf2d5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdf2d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf2dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf2df mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10bdf2e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdf2e4 je 0x10bdf32f */
  if (C.zf) goto L_10bdf32f;
  /* 10bdf2e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdf2ea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf2ed jl 0x10bdf302 */
  if ((C.sf!=C.of)) goto L_10bdf302;
  /* 10bdf2ef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdf2f3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf2f6 jg 0x10bdf302 */
  if ((!C.zf&&C.sf==C.of)) goto L_10bdf302;
  /* 10bdf2f8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10bdf2fb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bdf2fd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10bdf300 jmp 0x10bdf31c */
  goto L_10bdf31c;
L_10bdf302:;
  /* 10bdf302 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdf306 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf309 jl 0x10bdf31c */
  if ((C.sf!=C.of)) goto L_10bdf31c;
  /* 10bdf30b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdf30f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf312 jg 0x10bdf31c */
  if ((!C.zf&&C.sf==C.of)) goto L_10bdf31c;
  /* 10bdf314 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10bdf317 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10bdf319 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10bdf31c:;
  /* 10bdf31c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf31f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10bdf322 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10bdf326 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10bdf32a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdf32d jmp 0x10bdf2cd */
  goto L_10bdf2cd;
L_10bdf32f:;
  /* 10bdf32f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf332 mov esp, ebp */
  ESP = (EBP);
  /* 10bdf334 pop ebp */
  EBP = (pop32());
  /* 10bdf335 ret  */
  ESPCHK(0x10bdf2c0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10bdf340 (101 bytes, 36 insns) */
void f_10bdf340(void) {
  FTRACE(0x10bdf340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf340 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf341 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf346 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdf34d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf350 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10bdf352 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10bdf355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf358 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf35b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10bdf35e:;
  /* 10bdf35e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10bdf362 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf365 jl 0x10bdf370 */
  if ((C.sf!=C.of)) goto L_10bdf370;
  /* 10bdf367 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10bdf36b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf36e jle 0x10bdf382 */
  if ((C.zf||C.sf!=C.of)) goto L_10bdf382;
L_10bdf370:;
  /* 10bdf370 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10bdf374 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf377 jl 0x10bdf39e */
  if ((C.sf!=C.of)) goto L_10bdf39e;
  /* 10bdf379 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10bdf37d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf380 jg 0x10bdf39e */
  if ((!C.zf&&C.sf==C.of)) goto L_10bdf39e;
L_10bdf382:;
  /* 10bdf382 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf388 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdf38b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf38e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10bdf390 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10bdf393 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf396 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf399 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10bdf39c jmp 0x10bdf35e */
  goto L_10bdf35e;
L_10bdf39e:;
  /* 10bdf39e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf3a1 mov esp, ebp */
  ESP = (EBP);
  /* 10bdf3a3 pop ebp */
  EBP = (pop32());
  /* 10bdf3a4 ret  */
  ESPCHK(0x10bdf340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f3b0 @ 0x10bdf3b0 (122 bytes, 39 insns) */
void f_10bdf3b0(void) {
  FTRACE(0x10bdf3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf3b1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf3b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf3b7 cmp eax, dword ptr [0x10bfff1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10bfff1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf3bd jae 0x10bdf3e1 */
  if (!C.cf) goto L_10bdf3e1;
  /* 10bdf3bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf3c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10bdf3c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf3c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10bdf3cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf3ce mov eax, dword ptr [ecx*4 + 0x10bffde0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10bffde0)));
  /* 10bdf3d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10bdf3da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdf3dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdf3df jne 0x10bdf3fc */
  if (!C.zf) goto L_10bdf3fc;
L_10bdf3e1:;
  /* 10bdf3e1 call 0x10bda700 */
  push32(0x10bdf3e6u); f_10bda700();
  /* 10bdf3e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10bdf3ec call 0x10bda710 */
  push32(0x10bdf3f1u); f_10bda710();
  /* 10bdf3f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10bdf3f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf3fa jmp 0x10bdf426 */
  goto L_10bdf426;
L_10bdf3fc:;
  /* 10bdf3fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf3ff push edx */
  push32((uint32_t)(EDX));
  /* 10bdf400 call 0x10bdbf20 */
  push32(0x10bdf405u); f_10bdbf20();
  /* 10bdf405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf40b push eax */
  push32((uint32_t)(EAX));
  /* 10bdf40c call 0x10bdf430 */
  push32(0x10bdf411u); f_10bdf430();
  /* 10bdf411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf414 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdf417 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf41a push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf41b call 0x10bdbfb0 */
  push32(0x10bdf420u); f_10bdbfb0();
  /* 10bdf420 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf423 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10bdf426:;
  /* 10bdf426 mov esp, ebp */
  ESP = (EBP);
  /* 10bdf428 pop ebp */
  EBP = (pop32());
  /* 10bdf429 ret  */
  ESPCHK(0x10bdf3b0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10bdf430 (170 bytes, 59 insns) */
void f_10bdf430(void) {
  FTRACE(0x10bdf430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf430 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf431 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf433 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf434 push esi */
  push32((uint32_t)(ESI));
  /* 10bdf435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf438 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf439 call 0x10bdbda0 */
  push32(0x10bdf43eu); f_10bdbda0();
  /* 10bdf43e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf441 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf444 je 0x10bdf483 */
  if (C.zf) goto L_10bdf483;
  /* 10bdf446 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf44a je 0x10bdf452 */
  if (C.zf) goto L_10bdf452;
  /* 10bdf44c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf450 jne 0x10bdf46c */
  if (!C.zf) goto L_10bdf46c;
L_10bdf452:;
  /* 10bdf452 push 1 */
  push32((uint32_t)(0x1u));
  /* 10bdf454 call 0x10bdbda0 */
  push32(0x10bdf459u); f_10bdbda0();
  /* 10bdf459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf45c mov esi, eax */
  ESI = (EAX);
  /* 10bdf45e push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdf460 call 0x10bdbda0 */
  push32(0x10bdf465u); f_10bdbda0();
  /* 10bdf465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf468 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf46a je 0x10bdf483 */
  if (C.zf) goto L_10bdf483;
L_10bdf46c:;
  /* 10bdf46c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf46f push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf470 call 0x10bdbda0 */
  push32(0x10bdf475u); f_10bdbda0();
  /* 10bdf475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf478 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf479 call dword ptr [0x10c002b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c002b8))), 0x10bdf47fu);
  /* 10bdf47f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdf481 je 0x10bdf48c */
  if (C.zf) goto L_10bdf48c;
L_10bdf483:;
  /* 10bdf483 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10bdf48a jmp 0x10bdf495 */
  goto L_10bdf495;
L_10bdf48c:;
  /* 10bdf48c call dword ptr [0x10c00288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10c00288))), 0x10bdf492u);
  /* 10bdf492 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10bdf495:;
  /* 10bdf495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf498 push edx */
  push32((uint32_t)(EDX));
  /* 10bdf499 call 0x10bdbcc0 */
  push32(0x10bdf49eu); f_10bdbcc0();
  /* 10bdf49e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf4a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf4a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10bdf4a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf4aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10bdf4ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10bdf4b0 mov edx, dword ptr [eax*4 + 0x10bffde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10bffde0)));
  /* 10bdf4b7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10bdf4bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf4c0 je 0x10bdf4d3 */
  if (C.zf) goto L_10bdf4d3;
  /* 10bdf4c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf4c5 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf4c6 call 0x10bda660 */
  push32(0x10bdf4cbu); f_10bda660();
  /* 10bdf4cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf4ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf4d1 jmp 0x10bdf4d5 */
  goto L_10bdf4d5;
L_10bdf4d3:;
  /* 10bdf4d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10bdf4d5:;
  /* 10bdf4d5 pop esi */
  ESI = (pop32());
  /* 10bdf4d6 mov esp, ebp */
  ESP = (EBP);
  /* 10bdf4d8 pop ebp */
  EBP = (pop32());
  /* 10bdf4d9 ret  */
  ESPCHK(0x10bdf430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4e0 @ 0x10bdf4e0 (146 bytes, 52 insns) */
void f_10bdf4e0(void) {
  FTRACE(0x10bdf4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf4e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf4e3 push ebx */
  push32((uint32_t)(EBX));
  /* 10bdf4e4 push esi */
  push32((uint32_t)(ESI));
  /* 10bdf4e5 push edi */
  push32((uint32_t)(EDI));
L_10bdf4e6:;
  /* 10bdf4e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf4ea jne 0x10bdf50a */
  if (!C.zf) goto L_10bdf50a;
  /* 10bdf4ec push 0x10bf9ff8 */
  push32((uint32_t)(0x10bf9ff8u));
  /* 10bdf4f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdf4f3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10bdf4f5 push 0x10bfa6c0 */
  push32((uint32_t)(0x10bfa6c0u));
  /* 10bdf4fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdf4fc call 0x10bd18f0 */
  push32(0x10bdf501u); f_10bd18f0();
  /* 10bdf501 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf504 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf507 jne 0x10bdf50a */
  if (!C.zf) goto L_10bdf50a;
  /* 10bdf509 int3  */
  x86_unimpl("int3 @ 0x10bdf509");
L_10bdf50a:;
  /* 10bdf50a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10bdf50c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10bdf50e jne 0x10bdf4e6 */
  if (!C.zf) goto L_10bdf4e6;
  /* 10bdf510 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf513 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdf516 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdf51c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10bdf51e je 0x10bdf56d */
  if (C.zf) goto L_10bdf56d;
  /* 10bdf520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf523 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10bdf526 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10bdf529 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10bdf52b je 0x10bdf56d */
  if (C.zf) goto L_10bdf56d;
  /* 10bdf52d push 2 */
  push32((uint32_t)(0x2u));
  /* 10bdf52f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf532 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10bdf535 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf536 call 0x10bd32c0 */
  push32(0x10bdf53bu); f_10bd32c0();
  /* 10bdf53b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf53e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf541 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10bdf544 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10bdf54a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf54d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10bdf550 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf553 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10bdf559 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf55c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10bdf563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdf566 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10bdf56d:;
  /* 10bdf56d pop edi */
  EDI = (pop32());
  /* 10bdf56e pop esi */
  ESI = (pop32());
  /* 10bdf56f pop ebx */
  EBX = (pop32());
  /* 10bdf570 pop ebp */
  EBP = (pop32());
  /* 10bdf571 ret  */
  ESPCHK(0x10bdf4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f580 @ 0x10bdf580 (289 bytes, 97 insns) */
void f_10bdf580(void) {
  FTRACE(0x10bdf580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf580 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf581 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf583 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf586 push esi */
  push32((uint32_t)(ESI));
  /* 10bdf587 mov eax, dword ptr [0x10bfdc98] */
  EAX = (r32((uint32_t)(0x10bfdc98)));
  /* 10bdf58c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdf58f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdf596 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf59d jmp 0x10bdf5a8 */
  goto L_10bdf5a8;
L_10bdf59f:;
  /* 10bdf59f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf5a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf5a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10bdf5a8:;
  /* 10bdf5a8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf5ac jae 0x10bdf5e1 */
  if (!C.cf) goto L_10bdf5e1;
  /* 10bdf5ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf5b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf5b4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10bdf5b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf5b8 call 0x10bd5660 */
  push32(0x10bdf5bdu); f_10bd5660();
  /* 10bdf5bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf5c0 mov esi, eax */
  ESI = (EAX);
  /* 10bdf5c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf5c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf5c8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10bdf5cc push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf5cd call 0x10bd5660 */
  push32(0x10bdf5d2u); f_10bd5660();
  /* 10bdf5d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf5d5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf5d8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10bdf5dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bdf5df jmp 0x10bdf59f */
  goto L_10bdf59f;
L_10bdf5e1:;
  /* 10bdf5e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf5e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf5e7 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf5e8 call 0x10bd2810 */
  push32(0x10bdf5edu); f_10bd2810();
  /* 10bdf5ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf5f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdf5f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf5f7 je 0x10bdf699 */
  if (C.zf) goto L_10bdf699;
  /* 10bdf5fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf600 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bdf603 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf60a jmp 0x10bdf615 */
  goto L_10bdf615;
L_10bdf60c:;
  /* 10bdf60c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf60f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf612 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10bdf615:;
  /* 10bdf615 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf619 jae 0x10bdf68a */
  if (!C.cf) goto L_10bdf68a;
  /* 10bdf61b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf61e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10bdf621 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf624 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf627 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bdf62a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf62d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf630 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10bdf633 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf634 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf637 push edx */
  push32((uint32_t)(EDX));
  /* 10bdf638 call 0x10bd57e0 */
  push32(0x10bdf63du); f_10bd57e0();
  /* 10bdf63d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf640 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf641 call 0x10bd5660 */
  push32(0x10bdf646u); f_10bd5660();
  /* 10bdf646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf649 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf64c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf64e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bdf651 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf654 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10bdf657 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf65a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf65d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bdf660 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf663 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf666 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10bdf66a push eax */
  push32((uint32_t)(EAX));
  /* 10bdf66b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf66e push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf66f call 0x10bd57e0 */
  push32(0x10bdf674u); f_10bd57e0();
  /* 10bdf674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf677 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf678 call 0x10bd5660 */
  push32(0x10bdf67du); f_10bd5660();
  /* 10bdf67d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf680 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf683 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf685 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bdf688 jmp 0x10bdf60c */
  goto L_10bdf60c;
L_10bdf68a:;
  /* 10bdf68a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf68d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10bdf690 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf693 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf696 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10bdf699:;
  /* 10bdf699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf69c pop esi */
  ESI = (pop32());
  /* 10bdf69d mov esp, ebp */
  ESP = (EBP);
  /* 10bdf69f pop ebp */
  EBP = (pop32());
  /* 10bdf6a0 ret  */
  ESPCHK(0x10bdf580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6b0 @ 0x10bdf6b0 (291 bytes, 97 insns) */
void f_10bdf6b0(void) {
  FTRACE(0x10bdf6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf6b1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf6b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf6b6 push esi */
  push32((uint32_t)(ESI));
  /* 10bdf6b7 mov eax, dword ptr [0x10bfdc98] */
  EAX = (r32((uint32_t)(0x10bfdc98)));
  /* 10bdf6bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdf6bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdf6c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf6cd jmp 0x10bdf6d8 */
  goto L_10bdf6d8;
L_10bdf6cf:;
  /* 10bdf6cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf6d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf6d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10bdf6d8:;
  /* 10bdf6d8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf6dc jae 0x10bdf712 */
  if (!C.cf) goto L_10bdf712;
  /* 10bdf6de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf6e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf6e4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10bdf6e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf6e9 call 0x10bd5660 */
  push32(0x10bdf6eeu); f_10bd5660();
  /* 10bdf6ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf6f1 mov esi, eax */
  ESI = (EAX);
  /* 10bdf6f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf6f6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf6f9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10bdf6fd push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf6fe call 0x10bd5660 */
  push32(0x10bdf703u); f_10bd5660();
  /* 10bdf703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf706 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf709 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10bdf70d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bdf710 jmp 0x10bdf6cf */
  goto L_10bdf6cf;
L_10bdf712:;
  /* 10bdf712 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf715 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf718 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf719 call 0x10bd2810 */
  push32(0x10bdf71eu); f_10bd2810();
  /* 10bdf71e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf721 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdf724 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf728 je 0x10bdf7cb */
  if (C.zf) goto L_10bdf7cb;
  /* 10bdf72e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf731 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bdf734 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf73b jmp 0x10bdf746 */
  goto L_10bdf746;
L_10bdf73d:;
  /* 10bdf73d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf740 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf743 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10bdf746:;
  /* 10bdf746 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf74a jae 0x10bdf7bc */
  if (!C.cf) goto L_10bdf7bc;
  /* 10bdf74c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf74f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10bdf752 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf755 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf758 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bdf75b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf75e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf761 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10bdf765 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf766 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf769 push edx */
  push32((uint32_t)(EDX));
  /* 10bdf76a call 0x10bd57e0 */
  push32(0x10bdf76fu); f_10bd57e0();
  /* 10bdf76f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf772 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf773 call 0x10bd5660 */
  push32(0x10bdf778u); f_10bd5660();
  /* 10bdf778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf77b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf77e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf780 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10bdf783 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf786 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10bdf789 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf78c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf78f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bdf792 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf795 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf798 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10bdf79c push eax */
  push32((uint32_t)(EAX));
  /* 10bdf79d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf7a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf7a1 call 0x10bd57e0 */
  push32(0x10bdf7a6u); f_10bd57e0();
  /* 10bdf7a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf7a9 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf7aa call 0x10bd5660 */
  push32(0x10bdf7afu); f_10bd5660();
  /* 10bdf7af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf7b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf7b5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf7b7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bdf7ba jmp 0x10bdf73d */
  goto L_10bdf73d;
L_10bdf7bc:;
  /* 10bdf7bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf7bf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10bdf7c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf7c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf7c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10bdf7cb:;
  /* 10bdf7cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf7ce pop esi */
  ESI = (pop32());
  /* 10bdf7cf mov esp, ebp */
  ESP = (EBP);
  /* 10bdf7d1 pop ebp */
  EBP = (pop32());
  /* 10bdf7d2 ret  */
  ESPCHK(0x10bdf6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7e0 @ 0x10bdf7e0 (878 bytes, 273 insns) */
void f_10bdf7e0(void) {
  FTRACE(0x10bdf7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdf7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdf7e1 mov ebp, esp */
  EBP = (ESP);
  /* 10bdf7e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10bdf7e6 push esi */
  push32((uint32_t)(ESI));
  /* 10bdf7e7 mov eax, dword ptr [0x10bfdc98] */
  EAX = (r32((uint32_t)(0x10bfdc98)));
  /* 10bdf7ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10bdf7ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10bdf7f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf7fd jmp 0x10bdf808 */
  goto L_10bdf808;
L_10bdf7ff:;
  /* 10bdf7ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf802 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf805 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10bdf808:;
  /* 10bdf808 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf80c jae 0x10bdf841 */
  if (!C.cf) goto L_10bdf841;
  /* 10bdf80e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf811 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf814 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10bdf817 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf818 call 0x10bd5660 */
  push32(0x10bdf81du); f_10bd5660();
  /* 10bdf81d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf820 mov esi, eax */
  ESI = (EAX);
  /* 10bdf822 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf825 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf828 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10bdf82c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf82d call 0x10bd5660 */
  push32(0x10bdf832u); f_10bd5660();
  /* 10bdf832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf835 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf838 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10bdf83c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bdf83f jmp 0x10bdf7ff */
  goto L_10bdf7ff;
L_10bdf841:;
  /* 10bdf841 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf848 jmp 0x10bdf853 */
  goto L_10bdf853;
L_10bdf84a:;
  /* 10bdf84a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf84d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf850 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10bdf853:;
  /* 10bdf853 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf857 jae 0x10bdf88d */
  if (!C.cf) goto L_10bdf88d;
  /* 10bdf859 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf85c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf85f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10bdf863 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf864 call 0x10bd5660 */
  push32(0x10bdf869u); f_10bd5660();
  /* 10bdf869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf86c mov esi, eax */
  ESI = (EAX);
  /* 10bdf86e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf871 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf874 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10bdf878 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf879 call 0x10bd5660 */
  push32(0x10bdf87eu); f_10bd5660();
  /* 10bdf87e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf881 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf884 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10bdf888 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10bdf88b jmp 0x10bdf84a */
  goto L_10bdf84a;
L_10bdf88d:;
  /* 10bdf88d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf890 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 10bdf896 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf897 call 0x10bd5660 */
  push32(0x10bdf89cu); f_10bd5660();
  /* 10bdf89c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf89f mov esi, eax */
  ESI = (EAX);
  /* 10bdf8a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf8a4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 10bdf8aa push edx */
  push32((uint32_t)(EDX));
  /* 10bdf8ab call 0x10bd5660 */
  push32(0x10bdf8b0u); f_10bd5660();
  /* 10bdf8b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf8b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf8b6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10bdf8ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdf8bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf8c0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10bdf8c6 push edx */
  push32((uint32_t)(EDX));
  /* 10bdf8c7 call 0x10bd5660 */
  push32(0x10bdf8ccu); f_10bd5660();
  /* 10bdf8cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf8cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf8d2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10bdf8d6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bdf8d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf8dc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 10bdf8e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf8e3 call 0x10bd5660 */
  push32(0x10bdf8e8u); f_10bd5660();
  /* 10bdf8e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf8eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf8ee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10bdf8f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10bdf8f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf8f8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 10bdf8fe push edx */
  push32((uint32_t)(EDX));
  /* 10bdf8ff call 0x10bd5660 */
  push32(0x10bdf904u); f_10bd5660();
  /* 10bdf904 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf907 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf90a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10bdf90e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10bdf911 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10bdf914 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf919 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf91a call 0x10bd2810 */
  push32(0x10bdf91fu); f_10bd2810();
  /* 10bdf91f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf922 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10bdf925 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf929 je 0x10bdfb46 */
  if (C.zf) goto L_10bdfb46;
  /* 10bdf92f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf932 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10bdf935 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf938 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf93e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bdf941 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10bdf946 mov eax, dword ptr [0x10bfdc98] */
  EAX = (r32((uint32_t)(0x10bfdc98)));
  /* 10bdf94b push eax */
  push32((uint32_t)(EAX));
  /* 10bdf94c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdf94f push ecx */
  push32((uint32_t)(ECX));
  /* 10bdf950 call 0x10bd9110 */
  push32(0x10bdf955u); f_10bd9110();
  /* 10bdf955 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf958 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf95f jmp 0x10bdf96a */
  goto L_10bdf96a;
L_10bdf961:;
  /* 10bdf961 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf964 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf967 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10bdf96a:;
  /* 10bdf96a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf96e jae 0x10bdf9de */
  if (!C.cf) goto L_10bdf9de;
  /* 10bdf970 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf973 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdf976 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf979 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 10bdf97c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf97f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf982 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10bdf985 push edx */
  push32((uint32_t)(EDX));
  /* 10bdf986 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf989 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf98a call 0x10bd57e0 */
  push32(0x10bdf98fu); f_10bd57e0();
  /* 10bdf98f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf992 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf993 call 0x10bd5660 */
  push32(0x10bdf998u); f_10bd5660();
  /* 10bdf998 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf99b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf99e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10bdf9a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bdf9a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf9a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdf9ab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf9ae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10bdf9b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf9b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdf9b8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 10bdf9bc push edx */
  push32((uint32_t)(EDX));
  /* 10bdf9bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf9c0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf9c1 call 0x10bd57e0 */
  push32(0x10bdf9c6u); f_10bd57e0();
  /* 10bdf9c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf9c9 push eax */
  push32((uint32_t)(EAX));
  /* 10bdf9ca call 0x10bd5660 */
  push32(0x10bdf9cfu); f_10bd5660();
  /* 10bdf9cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf9d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf9d5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10bdf9d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bdf9dc jmp 0x10bdf961 */
  goto L_10bdf961;
L_10bdf9de:;
  /* 10bdf9de mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10bdf9e5 jmp 0x10bdf9f0 */
  goto L_10bdf9f0;
L_10bdf9e7:;
  /* 10bdf9e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf9ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdf9ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10bdf9f0:;
  /* 10bdf9f0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10bdf9f4 jae 0x10bdfa66 */
  if (!C.cf) goto L_10bdfa66;
  /* 10bdf9f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdf9f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdf9fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdf9ff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 10bdfa03 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdfa06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfa09 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 10bdfa0d push eax */
  push32((uint32_t)(EAX));
  /* 10bdfa0e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfa11 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfa12 call 0x10bd57e0 */
  push32(0x10bdfa17u); f_10bd57e0();
  /* 10bdfa17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfa1a push eax */
  push32((uint32_t)(EAX));
  /* 10bdfa1b call 0x10bd5660 */
  push32(0x10bdfa20u); f_10bd5660();
  /* 10bdfa20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfa23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfa26 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10bdfa2a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bdfa2d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdfa30 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdfa33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfa36 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 10bdfa3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10bdfa3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfa40 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10bdfa44 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfa45 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfa48 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfa49 call 0x10bd57e0 */
  push32(0x10bdfa4eu); f_10bd57e0();
  /* 10bdfa4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfa51 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfa52 call 0x10bd5660 */
  push32(0x10bdfa57u); f_10bd5660();
  /* 10bdfa57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfa5a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfa5d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10bdfa61 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bdfa64 jmp 0x10bdf9e7 */
  goto L_10bdf9e7;
L_10bdfa66:;
  /* 10bdfa66 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdfa69 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfa6c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10bdfa72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfa75 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10bdfa7b push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfa7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfa7f push edx */
  push32((uint32_t)(EDX));
  /* 10bdfa80 call 0x10bd57e0 */
  push32(0x10bdfa85u); f_10bd57e0();
  /* 10bdfa85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfa88 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfa89 call 0x10bd5660 */
  push32(0x10bdfa8eu); f_10bd5660();
  /* 10bdfa8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfa91 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfa94 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10bdfa98 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bdfa9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdfa9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfaa1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10bdfaa7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfaaa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10bdfab0 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfab1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfab4 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfab5 call 0x10bd57e0 */
  push32(0x10bdfabau); f_10bd57e0();
  /* 10bdfaba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfabd push eax */
  push32((uint32_t)(EAX));
  /* 10bdfabe call 0x10bd5660 */
  push32(0x10bdfac3u); f_10bd5660();
  /* 10bdfac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfac6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfac9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10bdfacd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bdfad0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdfad3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfad6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 10bdfadc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfadf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 10bdfae5 push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfae6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfae9 push edx */
  push32((uint32_t)(EDX));
  /* 10bdfaea call 0x10bd57e0 */
  push32(0x10bdfaefu); f_10bd57e0();
  /* 10bdfaef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfaf2 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfaf3 call 0x10bd5660 */
  push32(0x10bdfaf8u); f_10bd5660();
  /* 10bdfaf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfafb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfafe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10bdfb02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10bdfb05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdfb08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfb0b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 10bdfb11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10bdfb14 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 10bdfb1a push eax */
  push32((uint32_t)(EAX));
  /* 10bdfb1b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfb1e push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfb1f call 0x10bd57e0 */
  push32(0x10bdfb24u); f_10bd57e0();
  /* 10bdfb24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfb27 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfb28 call 0x10bd5660 */
  push32(0x10bdfb2du); f_10bd5660();
  /* 10bdfb2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfb30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfb33 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10bdfb37 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10bdfb3a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10bdfb3d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10bdfb40 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10bdfb46:;
  /* 10bdfb46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10bdfb49 pop esi */
  ESI = (pop32());
  /* 10bdfb4a mov esp, ebp */
  ESP = (EBP);
  /* 10bdfb4c pop ebp */
  EBP = (pop32());
  /* 10bdfb4d ret  */
  ESPCHK(0x10bdf7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb50 @ 0x10bdfb50 (31 bytes, 15 insns) */
void f_10bdfb50(void) {
  FTRACE(0x10bdfb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10bdfb50 push ebp */
  push32((uint32_t)(EBP));
  /* 10bdfb51 mov ebp, esp */
  EBP = (ESP);
  /* 10bdfb53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10bdfb55 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10bdfb58 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfb59 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10bdfb5c push ecx */
  push32((uint32_t)(ECX));
  /* 10bdfb5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10bdfb60 push edx */
  push32((uint32_t)(EDX));
  /* 10bdfb61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10bdfb64 push eax */
  push32((uint32_t)(EAX));
  /* 10bdfb65 call 0x10bdfb70 */
  push32(0x10bdfb6au); f_10bdfb70();
  /* 10bdfb6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10bdfb6d pop ebp */
  EBP = (pop32());
  /* 10bdfb6e ret  */
  ESPCHK(0x10bdfb50u, _esp0);
  ESP += 4; return;
}

