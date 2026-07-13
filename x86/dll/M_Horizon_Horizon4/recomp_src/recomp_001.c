#include "recomp.h"

/* FUN_100089f0 @ 0x127a89f0 (10 bytes, 5 insns) */
void f_127a89f0(void) {
  FTRACE(0x127a89f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a89f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a89f1 mov ebp, esp */
  EBP = (ESP);
  /* 127a89f3 mov eax, dword ptr [0x127cec94] */
  EAX = (r32((uint32_t)(0x127cec94)));
  /* 127a89f8 pop ebp */
  EBP = (pop32());
  /* 127a89f9 ret  */
  ESPCHK(0x127a89f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a00 @ 0x127a8a00 (31 bytes, 11 insns) */
void f_127a8a00(void) {
  FTRACE(0x127a8a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8a00 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8a01 mov ebp, esp */
  EBP = (ESP);
  /* 127a8a03 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8a0a jbe 0x127a8a10 */
  if ((C.cf||C.zf)) goto L_127a8a10;
  /* 127a8a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a8a0e jmp 0x127a8a1d */
  goto L_127a8a1d;
L_127a8a10:;
  /* 127a8a10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8a13 mov dword ptr [0x127cec94], eax */
  w32((uint32_t)(0x127cec94), (EAX));
  /* 127a8a18 mov eax, 1 */
  EAX = (0x1u);
L_127a8a1d:;
  /* 127a8a1d pop ebp */
  EBP = (pop32());
  /* 127a8a1e ret  */
  ESPCHK(0x127a8a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a20 @ 0x127a8a20 (89 bytes, 20 insns) */
void f_127a8a20(void) {
  FTRACE(0x127a8a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8a20 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8a21 mov ebp, esp */
  EBP = (ESP);
  /* 127a8a23 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 127a8a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a8a2a mov eax, dword ptr [0x127d1ecc] */
  EAX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a8a2f push eax */
  push32((uint32_t)(EAX));
  /* 127a8a30 call dword ptr [0x127d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3338))), 0x127a8a36u);
  /* 127a8a36 mov dword ptr [0x127d1ec8], eax */
  w32((uint32_t)(0x127d1ec8), (EAX));
  /* 127a8a3b cmp dword ptr [0x127d1ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d1ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8a42 jne 0x127a8a48 */
  if (!C.zf) goto L_127a8a48;
  /* 127a8a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a8a46 jmp 0x127a8a77 */
  goto L_127a8a77;
L_127a8a48:;
  /* 127a8a48 mov ecx, dword ptr [0x127d1ec8] */
  ECX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a8a4e mov dword ptr [0x127d1ebc], ecx */
  w32((uint32_t)(0x127d1ebc), (ECX));
  /* 127a8a54 mov dword ptr [0x127d1ec0], 0 */
  w32((uint32_t)(0x127d1ec0), (0x0u));
  /* 127a8a5e mov dword ptr [0x127d1ec4], 0 */
  w32((uint32_t)(0x127d1ec4), (0x0u));
  /* 127a8a68 mov dword ptr [0x127d1ea8], 0x10 */
  w32((uint32_t)(0x127d1ea8), (0x10u));
  /* 127a8a72 mov eax, 1 */
  EAX = (0x1u);
L_127a8a77:;
  /* 127a8a77 pop ebp */
  EBP = (pop32());
  /* 127a8a78 ret  */
  ESPCHK(0x127a8a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a80 @ 0x127a8a80 (85 bytes, 29 insns) */
void f_127a8a80(void) {
  FTRACE(0x127a8a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8a80 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8a81 mov ebp, esp */
  EBP = (ESP);
  /* 127a8a83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8a86 mov eax, dword ptr [0x127d1ec4] */
  EAX = (r32((uint32_t)(0x127d1ec4)));
  /* 127a8a8b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a8a8e mov ecx, dword ptr [0x127d1ec8] */
  ECX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a8a94 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8a96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127a8a99 mov edx, dword ptr [0x127d1ec8] */
  EDX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a8a9f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127a8aa2:;
  /* 127a8aa2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8aa5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8aa8 jae 0x127a8acf */
  if (!C.cf) goto L_127a8acf;
  /* 127a8aaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8aad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8ab0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8ab3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a8ab6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8abd jae 0x127a8ac4 */
  if (!C.cf) goto L_127a8ac4;
  /* 127a8abf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8ac2 jmp 0x127a8ad1 */
  goto L_127a8ad1;
L_127a8ac4:;
  /* 127a8ac4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8ac7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8aca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a8acd jmp 0x127a8aa2 */
  goto L_127a8aa2;
L_127a8acf:;
  /* 127a8acf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127a8ad1:;
  /* 127a8ad1 mov esp, ebp */
  ESP = (EBP);
  /* 127a8ad3 pop ebp */
  EBP = (pop32());
  /* 127a8ad4 ret  */
  ESPCHK(0x127a8a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ae0 @ 0x127a8ae0 (95 bytes, 33 insns) */
void f_127a8ae0(void) {
  FTRACE(0x127a8ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8ae1 mov ebp, esp */
  EBP = (ESP);
  /* 127a8ae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8ae6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8ae9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8aec sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8aef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127a8af2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8af5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 127a8af8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a8afb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a8b00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8b03 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a8b05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8b08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a8b0b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a8b0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a8b0f jne 0x127a8b31 */
  if (!C.zf) goto L_127a8b31;
  /* 127a8b11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8b14 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 127a8b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a8b19 jne 0x127a8b31 */
  if (!C.zf) goto L_127a8b31;
  /* 127a8b1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8b1e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 127a8b24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a8b26 je 0x127a8b31 */
  if (C.zf) goto L_127a8b31;
  /* 127a8b28 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 127a8b2f jmp 0x127a8b38 */
  goto L_127a8b38;
L_127a8b31:;
  /* 127a8b31 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_127a8b38:;
  /* 127a8b38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a8b3b mov esp, ebp */
  ESP = (EBP);
  /* 127a8b3d pop ebp */
  EBP = (pop32());
  /* 127a8b3e ret  */
  ESPCHK(0x127a8ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b40 @ 0x127a8b40 (1485 bytes, 453 insns) */
void f_127a8b40(void) {
  FTRACE(0x127a8b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a8b40 push ebp */
  push32((uint32_t)(EBP));
  /* 127a8b41 mov ebp, esp */
  EBP = (ESP);
  /* 127a8b43 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8b46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8b49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a8b4c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 127a8b4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8b52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8b55 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8b58 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a8b5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a8b5e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 127a8b61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a8b64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8b67 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a8b6d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8b70 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 127a8b77 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127a8b7a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a8b7d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8b80 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127a8b83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8b86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a8b88 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8b8b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 127a8b8e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8b91 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8b94 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 127a8b97 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a8b9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a8b9c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127a8b9f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8ba2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 127a8ba5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127a8ba8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a8bab and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127a8bae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a8bb0 jne 0x127a8cd8 */
  if (!C.zf) goto L_127a8cd8;
  /* 127a8bb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a8bb9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127a8bbc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8bbf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127a8bc2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8bc6 jbe 0x127a8bcf */
  if ((C.cf||C.zf)) goto L_127a8bcf;
  /* 127a8bc8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_127a8bcf:;
  /* 127a8bcf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a8bd2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a8bd5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a8bd8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8bdb jne 0x127a8cb1 */
  if (!C.zf) goto L_127a8cb1;
  /* 127a8be1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8be5 jae 0x127a8c46 */
  if (!C.cf) goto L_127a8c46;
  /* 127a8be7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a8bec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a8bef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a8bf1 not eax */
  EAX = (~(EAX));
  /* 127a8bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8bf6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8bf9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 127a8bfd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8bff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8c02 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c05 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 127a8c09 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c0c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8c0f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127a8c12 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a8c15 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c18 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8c1b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127a8c1e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c21 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8c24 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a8c28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a8c2a jne 0x127a8c44 */
  if (!C.zf) goto L_127a8c44;
  /* 127a8c2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a8c31 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a8c34 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a8c36 not eax */
  EAX = (~(EAX));
  /* 127a8c38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8c3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a8c3d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a8c3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8c42 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127a8c44:;
  /* 127a8c44 jmp 0x127a8cb1 */
  goto L_127a8cb1;
L_127a8c46:;
  /* 127a8c46 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a8c49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8c4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a8c51 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a8c53 not edx */
  EDX = (~(EDX));
  /* 127a8c55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8c58 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c5b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127a8c62 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a8c64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8c67 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c6a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 127a8c71 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c74 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8c77 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a8c7a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a8c7d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c80 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8c83 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127a8c86 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8c89 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8c8c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a8c90 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a8c92 jne 0x127a8cb1 */
  if (!C.zf) goto L_127a8cb1;
  /* 127a8c94 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a8c97 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8c9a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a8c9f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a8ca1 not edx */
  EDX = (~(EDX));
  /* 127a8ca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8ca6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a8ca9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8cab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8cae mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127a8cb1:;
  /* 127a8cb1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a8cb4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a8cb7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a8cba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a8cbd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127a8cc0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a8cc3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a8cc6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a8cc9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a8ccc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127a8ccf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a8cd2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8cd5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_127a8cd8:;
  /* 127a8cd8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a8cdb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127a8cde sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8ce1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127a8ce4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8ce8 jbe 0x127a8cf1 */
  if ((C.cf||C.zf)) goto L_127a8cf1;
  /* 127a8cea mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_127a8cf1:;
  /* 127a8cf1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a8cf4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127a8cf7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a8cf9 jne 0x127a8e55 */
  if (!C.zf) goto L_127a8e55;
  /* 127a8cff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8d02 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8d05 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 127a8d08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a8d0b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127a8d0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8d11 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 127a8d14 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8d18 jbe 0x127a8d21 */
  if ((C.cf||C.zf)) goto L_127a8d21;
  /* 127a8d1a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_127a8d21:;
  /* 127a8d21 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a8d24 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8d27 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 127a8d2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a8d2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127a8d30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8d33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127a8d36 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8d3a jbe 0x127a8d43 */
  if ((C.cf||C.zf)) goto L_127a8d43;
  /* 127a8d3c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_127a8d43:;
  /* 127a8d43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a8d46 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8d49 je 0x127a8e4f */
  if (C.zf) goto L_127a8e4f;
  /* 127a8d4f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a8d52 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a8d55 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a8d58 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8d5b jne 0x127a8e31 */
  if (!C.zf) goto L_127a8e31;
  /* 127a8d61 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8d65 jae 0x127a8dc6 */
  if (!C.cf) goto L_127a8dc6;
  /* 127a8d67 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a8d6c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a8d6f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a8d71 not edx */
  EDX = (~(EDX));
  /* 127a8d73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8d76 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8d79 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127a8d7d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a8d7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8d82 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8d85 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127a8d89 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8d8c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8d8f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a8d92 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a8d95 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8d98 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8d9b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127a8d9e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8da1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8da4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a8da8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a8daa jne 0x127a8dc4 */
  if (!C.zf) goto L_127a8dc4;
  /* 127a8dac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a8db1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a8db4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a8db6 not edx */
  EDX = (~(EDX));
  /* 127a8db8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8dbb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a8dbd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8dbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8dc2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a8dc4:;
  /* 127a8dc4 jmp 0x127a8e31 */
  goto L_127a8e31;
L_127a8dc6:;
  /* 127a8dc6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a8dc9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8dcc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a8dd1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a8dd3 not eax */
  EAX = (~(EAX));
  /* 127a8dd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8dd8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8ddb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127a8de2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8de4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8de7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8dea mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 127a8df1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8df4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8df7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127a8dfa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a8dfd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8e00 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8e03 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127a8e06 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8e09 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8e0c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a8e10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a8e12 jne 0x127a8e31 */
  if (!C.zf) goto L_127a8e31;
  /* 127a8e14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a8e17 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8e1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a8e1f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a8e21 not eax */
  EAX = (~(EAX));
  /* 127a8e23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8e26 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a8e29 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a8e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8e2e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127a8e31:;
  /* 127a8e31 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a8e34 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a8e37 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a8e3a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a8e3d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127a8e40 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a8e43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a8e46 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a8e49 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a8e4c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_127a8e4f:;
  /* 127a8e4f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a8e52 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_127a8e55:;
  /* 127a8e55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a8e58 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127a8e5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a8e5d jne 0x127a8e6b */
  if (!C.zf) goto L_127a8e6b;
  /* 127a8e5f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a8e62 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8e65 je 0x127a8f7b */
  if (C.zf) goto L_127a8f7b;
L_127a8e6b:;
  /* 127a8e6b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a8e6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8e71 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 127a8e74 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127a8e77 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8e7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a8e7d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a8e80 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127a8e83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8e86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a8e89 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 127a8e8c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a8e8f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8e92 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 127a8e95 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8e98 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a8e9b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8e9e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127a8ea1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8ea4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8ea7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a8eaa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8ead jne 0x127a8f7b */
  if (!C.zf) goto L_127a8f7b;
  /* 127a8eb3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8eb7 jae 0x127a8f14 */
  if (!C.cf) goto L_127a8f14;
  /* 127a8eb9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8ebc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8ebf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a8ec3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8ec6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8ec9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a8ecc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a8ecf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8ed2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8ed5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127a8ed8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a8eda jne 0x127a8ef2 */
  if (!C.zf) goto L_127a8ef2;
  /* 127a8edc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a8ee1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a8ee4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a8ee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8ee9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a8eeb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8eed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8ef0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a8ef2:;
  /* 127a8ef2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a8ef7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a8efa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a8efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8eff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8f02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 127a8f06 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8f08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8f0b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8f0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 127a8f12 jmp 0x127a8f7b */
  goto L_127a8f7b;
L_127a8f14:;
  /* 127a8f14 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8f17 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8f1a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a8f1e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8f21 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8f24 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a8f27 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a8f2a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8f2d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8f30 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127a8f33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a8f35 jne 0x127a8f52 */
  if (!C.zf) goto L_127a8f52;
  /* 127a8f37 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a8f3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8f3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a8f42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a8f44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8f47 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a8f4a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8f4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a8f4f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127a8f52:;
  /* 127a8f52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a8f55 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8f58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a8f5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a8f5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8f62 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8f65 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127a8f6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8f6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a8f71 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 127a8f74 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_127a8f7b:;
  /* 127a8f7b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8f7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a8f81 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127a8f83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a8f86 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8f89 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a8f8c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 127a8f8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8f92 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a8f94 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a8f97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8f9a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127a8f9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a8f9f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8fa2 jne 0x127a9109 */
  if (!C.zf) goto L_127a9109;
  /* 127a8fa8 cmp dword ptr [0x127d1ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d1ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a8faf je 0x127a90f8 */
  if (C.zf) goto L_127a90f8;
  /* 127a8fb5 mov eax, dword ptr [0x127d1eb8] */
  EAX = (r32((uint32_t)(0x127d1eb8)));
  /* 127a8fba shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 127a8fbd mov ecx, dword ptr [0x127d1ec0] */
  ECX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a8fc3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127a8fc6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a8fc8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127a8fcb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 127a8fd0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127a8fd5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a8fd8 push eax */
  push32((uint32_t)(EAX));
  /* 127a8fd9 call dword ptr [0x127d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d331c))), 0x127a8fdfu);
  /* 127a8fdf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a8fe4 mov ecx, dword ptr [0x127d1eb8] */
  ECX = (r32((uint32_t)(0x127d1eb8)));
  /* 127a8fea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a8fec mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a8ff1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a8ff4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a8ff6 mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a8ffc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127a8fff mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9004 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a9007 mov edx, dword ptr [0x127d1eb8] */
  EDX = (r32((uint32_t)(0x127d1eb8)));
  /* 127a900d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 127a9018 mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a901d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a9020 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 127a9023 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a9026 mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a902b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a902e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 127a9031 mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9037 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a903a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 127a903e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9040 jne 0x127a9056 */
  if (!C.zf) goto L_127a9056;
  /* 127a9042 mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9048 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a904b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 127a904d mov ecx, dword ptr [0x127d1ec0] */
  ECX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9053 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_127a9056:;
  /* 127a9056 mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a905c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9060 jne 0x127a90f8 */
  if (!C.zf) goto L_127a90f8;
  /* 127a9066 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127a906b push 0 */
  push32((uint32_t)(0x0u));
  /* 127a906d mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9072 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127a9075 push ecx */
  push32((uint32_t)(ECX));
  /* 127a9076 call dword ptr [0x127d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d331c))), 0x127a907cu);
  /* 127a907c mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9082 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a9085 push eax */
  push32((uint32_t)(EAX));
  /* 127a9086 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a9088 mov ecx, dword ptr [0x127d1ecc] */
  ECX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a908e push ecx */
  push32((uint32_t)(ECX));
  /* 127a908f call dword ptr [0x127d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3318))), 0x127a9095u);
  /* 127a9095 mov edx, dword ptr [0x127d1ec4] */
  EDX = (r32((uint32_t)(0x127d1ec4)));
  /* 127a909b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a909e mov eax, dword ptr [0x127d1ec8] */
  EAX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a90a3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a90a5 mov ecx, dword ptr [0x127d1ec0] */
  ECX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a90ab add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a90ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a90b0 push eax */
  push32((uint32_t)(EAX));
  /* 127a90b1 mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a90b7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a90ba push edx */
  push32((uint32_t)(EDX));
  /* 127a90bb mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a90c0 push eax */
  push32((uint32_t)(EAX));
  /* 127a90c1 call 0x127ac670 */
  push32(0x127a90c6u); f_127ac670();
  /* 127a90c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a90c9 mov ecx, dword ptr [0x127d1ec4] */
  ECX = (r32((uint32_t)(0x127d1ec4)));
  /* 127a90cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a90d2 mov dword ptr [0x127d1ec4], ecx */
  w32((uint32_t)(0x127d1ec4), (ECX));
  /* 127a90d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a90db cmp edx, dword ptr [0x127d1ec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127d1ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a90e1 jbe 0x127a90ec */
  if ((C.cf||C.zf)) goto L_127a90ec;
  /* 127a90e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a90e6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a90e9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127a90ec:;
  /* 127a90ec mov ecx, dword ptr [0x127d1ec8] */
  ECX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a90f2 mov dword ptr [0x127d1ebc], ecx */
  w32((uint32_t)(0x127d1ebc), (ECX));
L_127a90f8:;
  /* 127a90f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a90fb mov dword ptr [0x127d1ec0], edx */
  w32((uint32_t)(0x127d1ec0), (EDX));
  /* 127a9101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9104 mov dword ptr [0x127d1eb8], eax */
  w32((uint32_t)(0x127d1eb8), (EAX));
L_127a9109:;
  /* 127a9109 mov esp, ebp */
  ESP = (EBP);
  /* 127a910b pop ebp */
  EBP = (pop32());
  /* 127a910c ret  */
  ESPCHK(0x127a8b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x127a9110 (1334 bytes, 427 insns) */
void f_127a9110(void) {
  FTRACE(0x127a9110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a9110 push ebp */
  push32((uint32_t)(EBP));
  /* 127a9111 mov ebp, esp */
  EBP = (ESP);
  /* 127a9113 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9116 push esi */
  push32((uint32_t)(ESI));
  /* 127a9117 mov eax, dword ptr [0x127d1ec4] */
  EAX = (r32((uint32_t)(0x127d1ec4)));
  /* 127a911c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a911f mov ecx, dword ptr [0x127d1ec8] */
  ECX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a9125 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9127 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127a912a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a912d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9130 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 127a9133 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127a9136 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9139 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127a913c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a913f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127a9142 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9146 jge 0x127a915c */
  if ((C.sf==C.of)) goto L_127a915c;
  /* 127a9148 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127a914b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a914e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9150 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127a9153 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 127a915a jmp 0x127a9171 */
  goto L_127a9171;
L_127a915c:;
  /* 127a915c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127a9163 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9166 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9169 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a916c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a916e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_127a9171:;
  /* 127a9171 mov ecx, dword ptr [0x127d1ebc] */
  ECX = (r32((uint32_t)(0x127d1ebc)));
  /* 127a9177 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_127a917a:;
  /* 127a917a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a917d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9180 jae 0x127a91a6 */
  if (!C.cf) goto L_127a91a6;
  /* 127a9182 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9185 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a9188 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 127a918a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a918d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a9190 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 127a9193 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9195 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9197 je 0x127a919b */
  if (C.zf) goto L_127a919b;
  /* 127a9199 jmp 0x127a91a6 */
  goto L_127a91a6;
L_127a919b:;
  /* 127a919b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a919e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a91a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127a91a4 jmp 0x127a917a */
  goto L_127a917a;
L_127a91a6:;
  /* 127a91a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a91a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a91ac jne 0x127a928d */
  if (!C.zf) goto L_127a928d;
  /* 127a91b2 mov eax, dword ptr [0x127d1ec8] */
  EAX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a91b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_127a91ba:;
  /* 127a91ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a91bd cmp ecx, dword ptr [0x127d1ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a91c3 jae 0x127a91e9 */
  if (!C.cf) goto L_127a91e9;
  /* 127a91c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a91c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a91cb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 127a91cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a91d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a91d3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 127a91d6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a91d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a91da je 0x127a91de */
  if (C.zf) goto L_127a91de;
  /* 127a91dc jmp 0x127a91e9 */
  goto L_127a91e9;
L_127a91de:;
  /* 127a91de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a91e1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a91e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a91e7 jmp 0x127a91ba */
  goto L_127a91ba;
L_127a91e9:;
  /* 127a91e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a91ec cmp ecx, dword ptr [0x127d1ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a91f2 jne 0x127a928d */
  if (!C.zf) goto L_127a928d;
L_127a91f8:;
  /* 127a91f8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a91fb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a91fe jae 0x127a9216 */
  if (!C.cf) goto L_127a9216;
  /* 127a9200 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9203 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9207 je 0x127a920b */
  if (C.zf) goto L_127a920b;
  /* 127a9209 jmp 0x127a9216 */
  goto L_127a9216;
L_127a920b:;
  /* 127a920b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a920e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9211 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127a9214 jmp 0x127a91f8 */
  goto L_127a91f8;
L_127a9216:;
  /* 127a9216 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9219 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a921c jne 0x127a9267 */
  if (!C.zf) goto L_127a9267;
  /* 127a921e mov eax, dword ptr [0x127d1ec8] */
  EAX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a9223 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_127a9226:;
  /* 127a9226 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9229 cmp ecx, dword ptr [0x127d1ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a922f jae 0x127a9247 */
  if (!C.cf) goto L_127a9247;
  /* 127a9231 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9234 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9238 je 0x127a923c */
  if (C.zf) goto L_127a923c;
  /* 127a923a jmp 0x127a9247 */
  goto L_127a9247;
L_127a923c:;
  /* 127a923c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a923f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9242 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a9245 jmp 0x127a9226 */
  goto L_127a9226;
L_127a9247:;
  /* 127a9247 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a924a cmp ecx, dword ptr [0x127d1ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9250 jne 0x127a9267 */
  if (!C.zf) goto L_127a9267;
  /* 127a9252 call 0x127a9650 */
  push32(0x127a9257u); f_127a9650();
  /* 127a9257 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a925a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a925e jne 0x127a9267 */
  if (!C.zf) goto L_127a9267;
  /* 127a9260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a9262 jmp 0x127a9641 */
  goto L_127a9641;
L_127a9267:;
  /* 127a9267 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a926a push edx */
  push32((uint32_t)(EDX));
  /* 127a926b call 0x127a9760 */
  push32(0x127a9270u); f_127a9760();
  /* 127a9270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9273 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9276 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127a9279 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127a927b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a927e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a9281 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9284 jne 0x127a928d */
  if (!C.zf) goto L_127a928d;
  /* 127a9286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a9288 jmp 0x127a9641 */
  goto L_127a9641;
L_127a928d:;
  /* 127a928d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9290 mov dword ptr [0x127d1ebc], edx */
  w32((uint32_t)(0x127d1ebc), (EDX));
  /* 127a9296 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9299 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a929c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 127a929f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a92a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a92a4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 127a92a7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a92ab je 0x127a92d0 */
  if (C.zf) goto L_127a92d0;
  /* 127a92ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a92b0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a92b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a92b6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 127a92ba mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a92bd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a92c0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 127a92c3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 127a92ca or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 127a92cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a92ce jne 0x127a9305 */
  if (!C.zf) goto L_127a9305;
L_127a92d0:;
  /* 127a92d0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_127a92d7:;
  /* 127a92d7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a92da mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a92dd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a92e0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 127a92e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a92e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a92ea mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 127a92ed and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 127a92f4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 127a92f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a92f8 jne 0x127a9305 */
  if (!C.zf) goto L_127a9305;
  /* 127a92fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a92fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9300 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 127a9303 jmp 0x127a92d7 */
  goto L_127a92d7;
L_127a9305:;
  /* 127a9305 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9308 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a930e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9311 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 127a9318 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a931b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127a9322 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9325 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9328 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a932b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 127a932f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127a9332 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9336 jne 0x127a9352 */
  if (!C.zf) goto L_127a9352;
  /* 127a9338 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 127a933f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9342 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9345 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127a9348 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 127a934f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_127a9352:;
  /* 127a9352 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9356 jl 0x127a936b */
  if ((C.sf!=C.of)) goto L_127a936b;
  /* 127a9358 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a935b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127a935d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127a9360 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9363 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9366 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127a9369 jmp 0x127a9352 */
  goto L_127a9352;
L_127a936b:;
  /* 127a936b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a936e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9371 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 127a9375 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127a9378 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a937b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a937d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9380 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a9383 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a9386 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127a9389 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a938c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127a938f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9393 jle 0x127a939c */
  if ((C.zf||C.sf!=C.of)) goto L_127a939c;
  /* 127a9395 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_127a939c:;
  /* 127a939c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a939f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a93a2 je 0x127a95c0 */
  if (C.zf) goto L_127a95c0;
  /* 127a93a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a93ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a93ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a93b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a93b4 jne 0x127a948a */
  if (!C.zf) goto L_127a948a;
  /* 127a93ba cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a93be jge 0x127a941f */
  if ((C.sf==C.of)) goto L_127a941f;
  /* 127a93c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a93c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a93c8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a93ca not eax */
  EAX = (~(EAX));
  /* 127a93cc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a93cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a93d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 127a93d6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a93d8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a93db mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a93de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 127a93e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a93e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a93e8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127a93eb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a93ee mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a93f1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a93f4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127a93f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a93fa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a93fd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a9401 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a9403 jne 0x127a941d */
  if (!C.zf) goto L_127a941d;
  /* 127a9405 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a940a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a940d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a940f not eax */
  EAX = (~(EAX));
  /* 127a9411 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9414 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a9416 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a9418 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a941b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127a941d:;
  /* 127a941d jmp 0x127a948a */
  goto L_127a948a;
L_127a941f:;
  /* 127a941f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9422 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9425 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a942a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a942c not edx */
  EDX = (~(EDX));
  /* 127a942e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9431 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9434 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127a943b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a943d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9440 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9443 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 127a944a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a944d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9450 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a9453 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a9456 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9459 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a945c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127a945f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9462 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9465 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a9469 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a946b jne 0x127a948a */
  if (!C.zf) goto L_127a948a;
  /* 127a946d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9470 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9473 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9478 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a947a not edx */
  EDX = (~(EDX));
  /* 127a947c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a947f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a9482 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9484 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9487 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127a948a:;
  /* 127a948a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a948d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a9490 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a9493 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a9496 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127a9499 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a949c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a949f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a94a2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a94a5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127a94a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a94ac je 0x127a95c0 */
  if (C.zf) goto L_127a95c0;
  /* 127a94b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a94b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a94b8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 127a94bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127a94be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a94c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a94c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a94c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127a94ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a94cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a94d0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127a94d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a94d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a94d9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 127a94dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a94df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a94e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a94e5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127a94e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a94eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a94ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a94f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a94f4 jne 0x127a95c0 */
  if (!C.zf) goto L_127a95c0;
  /* 127a94fa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a94fe jge 0x127a955a */
  if ((C.sf==C.of)) goto L_127a955a;
  /* 127a9500 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9503 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9506 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a950a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a950d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9510 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127a9513 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a9515 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9518 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a951b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 127a951e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9520 jne 0x127a9538 */
  if (!C.zf) goto L_127a9538;
  /* 127a9522 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9527 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a952a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a952c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a952f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a9531 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a9533 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9536 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127a9538:;
  /* 127a9538 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a953d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9540 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9542 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9545 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9548 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127a954c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a954e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9551 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9554 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127a9558 jmp 0x127a95c0 */
  goto L_127a95c0;
L_127a955a:;
  /* 127a955a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a955d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9560 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a9564 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9567 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a956a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127a956d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a956f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9572 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9575 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 127a9578 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a957a jne 0x127a9597 */
  if (!C.zf) goto L_127a9597;
  /* 127a957c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a957f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9582 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9587 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9589 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a958c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a958f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a9591 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9594 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127a9597:;
  /* 127a9597 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a959a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a959d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a95a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a95a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a95a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a95aa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127a95b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a95b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a95b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a95b9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_127a95c0:;
  /* 127a95c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a95c4 je 0x127a95da */
  if (C.zf) goto L_127a95da;
  /* 127a95c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a95c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a95cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127a95ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a95d1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a95d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a95d7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_127a95da:;
  /* 127a95da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a95dd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a95e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127a95e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a95e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a95e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a95ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127a95ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a95f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a95f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a95f7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a95fa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 127a95fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9600 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a9602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9605 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127a9607 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a960a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a960d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127a960f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9611 jne 0x127a9633 */
  if (!C.zf) goto L_127a9633;
  /* 127a9613 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9616 cmp eax, dword ptr [0x127d1ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d1ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a961c jne 0x127a9633 */
  if (!C.zf) goto L_127a9633;
  /* 127a961e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9621 cmp ecx, dword ptr [0x127d1eb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1eb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9627 jne 0x127a9633 */
  if (!C.zf) goto L_127a9633;
  /* 127a9629 mov dword ptr [0x127d1ec0], 0 */
  w32((uint32_t)(0x127d1ec0), (0x0u));
L_127a9633:;
  /* 127a9633 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 127a9636 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9639 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127a963b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a963e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_127a9641:;
  /* 127a9641 pop esi */
  ESI = (pop32());
  /* 127a9642 mov esp, ebp */
  ESP = (EBP);
  /* 127a9644 pop ebp */
  EBP = (pop32());
  /* 127a9645 ret  */
  ESPCHK(0x127a9110u, _esp0);
  ESP += 4; return;
}

/* FUN_10009650 @ 0x127a9650 (271 bytes, 78 insns) */
void f_127a9650(void) {
  FTRACE(0x127a9650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a9650 push ebp */
  push32((uint32_t)(EBP));
  /* 127a9651 mov ebp, esp */
  EBP = (ESP);
  /* 127a9653 push ecx */
  push32((uint32_t)(ECX));
  /* 127a9654 mov eax, dword ptr [0x127d1ec4] */
  EAX = (r32((uint32_t)(0x127d1ec4)));
  /* 127a9659 cmp eax, dword ptr [0x127d1ea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d1ea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a965f jne 0x127a96ab */
  if (!C.zf) goto L_127a96ab;
  /* 127a9661 mov ecx, dword ptr [0x127d1ea8] */
  ECX = (r32((uint32_t)(0x127d1ea8)));
  /* 127a9667 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a966a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a966d push ecx */
  push32((uint32_t)(ECX));
  /* 127a966e mov edx, dword ptr [0x127d1ec8] */
  EDX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a9674 push edx */
  push32((uint32_t)(EDX));
  /* 127a9675 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a9677 mov eax, dword ptr [0x127d1ecc] */
  EAX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a967c push eax */
  push32((uint32_t)(EAX));
  /* 127a967d call dword ptr [0x127d333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d333c))), 0x127a9683u);
  /* 127a9683 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127a9686 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a968a jne 0x127a9693 */
  if (!C.zf) goto L_127a9693;
  /* 127a968c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a968e jmp 0x127a975b */
  goto L_127a975b;
L_127a9693:;
  /* 127a9693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9696 mov dword ptr [0x127d1ec8], ecx */
  w32((uint32_t)(0x127d1ec8), (ECX));
  /* 127a969c mov edx, dword ptr [0x127d1ea8] */
  EDX = (r32((uint32_t)(0x127d1ea8)));
  /* 127a96a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a96a5 mov dword ptr [0x127d1ea8], edx */
  w32((uint32_t)(0x127d1ea8), (EDX));
L_127a96ab:;
  /* 127a96ab mov eax, dword ptr [0x127d1ec4] */
  EAX = (r32((uint32_t)(0x127d1ec4)));
  /* 127a96b0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a96b3 mov ecx, dword ptr [0x127d1ec8] */
  ECX = (r32((uint32_t)(0x127d1ec8)));
  /* 127a96b9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a96bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a96be push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 127a96c3 push 8 */
  push32((uint32_t)(0x8u));
  /* 127a96c5 mov edx, dword ptr [0x127d1ecc] */
  EDX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a96cb push edx */
  push32((uint32_t)(EDX));
  /* 127a96cc call dword ptr [0x127d3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3338))), 0x127a96d2u);
  /* 127a96d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a96d5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 127a96d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a96db cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a96df jne 0x127a96e5 */
  if (!C.zf) goto L_127a96e5;
  /* 127a96e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a96e3 jmp 0x127a975b */
  goto L_127a975b;
L_127a96e5:;
  /* 127a96e5 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a96e7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 127a96ec push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 127a96f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127a96f3 call dword ptr [0x127d3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3340))), 0x127a96f9u);
  /* 127a96f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a96fc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 127a96ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9702 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9706 jne 0x127a9722 */
  if (!C.zf) goto L_127a9722;
  /* 127a9708 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a970b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a970e push ecx */
  push32((uint32_t)(ECX));
  /* 127a970f push 0 */
  push32((uint32_t)(0x0u));
  /* 127a9711 mov edx, dword ptr [0x127d1ecc] */
  EDX = (r32((uint32_t)(0x127d1ecc)));
  /* 127a9717 push edx */
  push32((uint32_t)(EDX));
  /* 127a9718 call dword ptr [0x127d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3318))), 0x127a971eu);
  /* 127a971e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a9720 jmp 0x127a975b */
  goto L_127a975b;
L_127a9722:;
  /* 127a9722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9725 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127a972b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a972e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127a9735 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9738 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 127a973f mov eax, dword ptr [0x127d1ec4] */
  EAX = (r32((uint32_t)(0x127d1ec4)));
  /* 127a9744 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9747 mov dword ptr [0x127d1ec4], eax */
  w32((uint32_t)(0x127d1ec4), (EAX));
  /* 127a974c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a974f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127a9752 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 127a9758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127a975b:;
  /* 127a975b mov esp, ebp */
  ESP = (EBP);
  /* 127a975d pop ebp */
  EBP = (pop32());
  /* 127a975e ret  */
  ESPCHK(0x127a9650u, _esp0);
  ESP += 4; return;
}

/* FUN_10009760 @ 0x127a9760 (494 bytes, 149 insns) */
void f_127a9760(void) {
  FTRACE(0x127a9760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a9760 push ebp */
  push32((uint32_t)(EBP));
  /* 127a9761 mov ebp, esp */
  EBP = (ESP);
  /* 127a9763 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9769 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a976c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127a976f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9772 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127a9775 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127a9778 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_127a977f:;
  /* 127a977f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9783 jl 0x127a9798 */
  if ((C.sf!=C.of)) goto L_127a9798;
  /* 127a9785 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a9788 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127a978a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127a978d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9790 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9793 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127a9796 jmp 0x127a977f */
  goto L_127a977f;
L_127a9798:;
  /* 127a9798 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a979b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a97a1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a97a4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 127a97ab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127a97ae mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127a97b5 jmp 0x127a97c0 */
  goto L_127a97c0;
L_127a97b7:;
  /* 127a97b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a97ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a97bd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_127a97c0:;
  /* 127a97c0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a97c4 jge 0x127a97e6 */
  if ((C.sf==C.of)) goto L_127a97e6;
  /* 127a97c6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a97c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a97cc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 127a97cf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a97d2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a97d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a97d8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127a97db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a97de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a97e1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 127a97e4 jmp 0x127a97b7 */
  goto L_127a97b7;
L_127a97e6:;
  /* 127a97e6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a97e9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 127a97ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a97ef mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127a97f2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a97f4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127a97f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 127a97f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127a97fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127a9803 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a9806 push edx */
  push32((uint32_t)(EDX));
  /* 127a9807 call dword ptr [0x127d3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3340))), 0x127a980du);
  /* 127a980d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127a980f jne 0x127a9819 */
  if (!C.zf) goto L_127a9819;
  /* 127a9811 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127a9814 jmp 0x127a994a */
  goto L_127a994a;
L_127a9819:;
  /* 127a9819 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a981c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9821 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127a9824 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a9827 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127a982a jmp 0x127a9838 */
  goto L_127a9838;
L_127a982c:;
  /* 127a982c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a982f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9835 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127a9838:;
  /* 127a9838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a983b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a983e ja 0x127a989d */
  if ((!C.cf&&!C.zf)) goto L_127a989d;
  /* 127a9840 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9843 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 127a984a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a984d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 127a9857 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a985a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a985d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a9860 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9863 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 127a9869 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a986c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9872 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9875 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127a9878 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a987b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9881 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9884 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127a9887 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a988a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a988f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127a9892 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a9895 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 127a989b jmp 0x127a982c */
  goto L_127a982c;
L_127a989d:;
  /* 127a989d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a98a0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a98a6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127a98a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a98ac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a98af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a98b2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 127a98b5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a98b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a98bb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a98be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a98c1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a98c4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127a98c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a98ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a98cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a98d0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 127a98d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a98d6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127a98d9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127a98dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a98df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a98e2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 127a98e5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a98e8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a98eb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 127a98f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a98f6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a98f9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 127a9904 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9907 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 127a990b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a990e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 127a9911 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a9914 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9917 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 127a991a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a991c jne 0x127a992d */
  if (!C.zf) goto L_127a992d;
  /* 127a991e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9921 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9924 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127a9927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a992a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127a992d:;
  /* 127a992d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9932 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9935 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9937 not edx */
  EDX = (~(EDX));
  /* 127a9939 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a993c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a993f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9941 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9944 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127a9947 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_127a994a:;
  /* 127a994a mov esp, ebp */
  ESP = (EBP);
  /* 127a994c pop ebp */
  EBP = (pop32());
  /* 127a994d ret  */
  ESPCHK(0x127a9760u, _esp0);
  ESP += 4; return;
}

/* FUN_10009950 @ 0x127a9950 (1515 bytes, 489 insns) */
void f_127a9950(void) {
  FTRACE(0x127a9950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a9950 push ebp */
  push32((uint32_t)(EBP));
  /* 127a9951 mov ebp, esp */
  EBP = (ESP);
  /* 127a9953 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9956 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127a9959 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a995c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 127a995e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127a9961 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9964 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127a9967 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 127a996a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a996d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a9970 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9973 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127a9976 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127a9979 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 127a997c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a997f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9982 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127a9988 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a998b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 127a9992 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127a9995 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127a9998 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a999b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127a999e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a99a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a99a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a99a6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 127a99a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a99ac add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a99af mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 127a99b2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a99b5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a99b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127a99ba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a99bd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a99c0 jle 0x127a9c76 */
  if ((C.zf||C.sf!=C.of)) goto L_127a9c76;
  /* 127a99c6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a99c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127a99cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a99ce jne 0x127a99db */
  if (!C.zf) goto L_127a99db;
  /* 127a99d0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a99d3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a99d6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a99d9 jle 0x127a99e2 */
  if ((C.zf||C.sf!=C.of)) goto L_127a99e2;
L_127a99db:;
  /* 127a99db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127a99dd jmp 0x127a9f37 */
  goto L_127a9f37;
L_127a99e2:;
  /* 127a99e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a99e5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127a99e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a99eb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127a99ee cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a99f2 jbe 0x127a99fb */
  if ((C.cf||C.zf)) goto L_127a99fb;
  /* 127a99f4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_127a99fb:;
  /* 127a99fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a99fe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9a01 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9a04 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9a07 jne 0x127a9add */
  if (!C.zf) goto L_127a9add;
  /* 127a9a0d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9a11 jae 0x127a9a72 */
  if (!C.cf) goto L_127a9a72;
  /* 127a9a13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9a18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9a1b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9a1d not edx */
  EDX = (~(EDX));
  /* 127a9a1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9a22 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9a25 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127a9a29 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a9a2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9a2e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9a31 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127a9a35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9a38 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9a3b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a9a3e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a9a41 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9a44 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9a47 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127a9a4a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9a4d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9a50 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a9a54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9a56 jne 0x127a9a70 */
  if (!C.zf) goto L_127a9a70;
  /* 127a9a58 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9a5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9a60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9a62 not edx */
  EDX = (~(EDX));
  /* 127a9a64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9a67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a9a69 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9a6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9a6e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a9a70:;
  /* 127a9a70 jmp 0x127a9add */
  goto L_127a9add;
L_127a9a72:;
  /* 127a9a72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9a75 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9a78 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9a7d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9a7f not eax */
  EAX = (~(EAX));
  /* 127a9a81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9a84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9a87 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127a9a8e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9a90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9a93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9a96 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 127a9a9d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9aa0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9aa3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127a9aa6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a9aa9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9aac add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9aaf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127a9ab2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9ab5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9ab8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a9abc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a9abe jne 0x127a9add */
  if (!C.zf) goto L_127a9add;
  /* 127a9ac0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9ac3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9ac6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9acb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9acd not eax */
  EAX = (~(EAX));
  /* 127a9acf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9ad2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9ad5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a9ad7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9ada mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127a9add:;
  /* 127a9add mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9ae0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a9ae3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9ae6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a9ae9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127a9aec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9aef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a9af2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9af5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a9af8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 127a9afb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9afe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9b01 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9b04 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127a9b07 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9b0b jle 0x127a9c57 */
  if ((C.zf||C.sf!=C.of)) goto L_127a9c57;
  /* 127a9b11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9b14 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9b17 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127a9b1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a9b1d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127a9b20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9b23 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127a9b26 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9b2a jbe 0x127a9b33 */
  if ((C.cf||C.zf)) goto L_127a9b33;
  /* 127a9b2c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_127a9b33:;
  /* 127a9b33 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9b36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a9b39 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 127a9b3c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127a9b3f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9b42 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9b45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9b48 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127a9b4b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9b4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9b51 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 127a9b54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9b57 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9b5a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 127a9b5d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9b60 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9b63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9b66 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127a9b69 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9b6c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9b6f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9b72 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9b75 jne 0x127a9c43 */
  if (!C.zf) goto L_127a9c43;
  /* 127a9b7b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9b7f jae 0x127a9bdc */
  if (!C.cf) goto L_127a9bdc;
  /* 127a9b81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9b84 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9b87 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a9b8b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9b8e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9b91 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a9b94 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a9b97 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9b9a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9b9d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127a9ba0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a9ba2 jne 0x127a9bba */
  if (!C.zf) goto L_127a9bba;
  /* 127a9ba4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9ba9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9bac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9bae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9bb1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a9bb3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9bb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9bb8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a9bba:;
  /* 127a9bba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9bbf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9bc2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9bc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9bc7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9bca mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 127a9bce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9bd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9bd3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9bd6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 127a9bda jmp 0x127a9c43 */
  goto L_127a9c43;
L_127a9bdc:;
  /* 127a9bdc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9bdf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9be2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a9be6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9be9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9bec mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a9bef add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a9bf2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9bf5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9bf8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 127a9bfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a9bfd jne 0x127a9c1a */
  if (!C.zf) goto L_127a9c1a;
  /* 127a9bff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9c02 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9c05 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9c0a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9c0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a9c12 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9c17 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_127a9c1a:;
  /* 127a9c1a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9c1d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9c20 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9c25 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9c2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9c2d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127a9c34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9c36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9c39 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9c3c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_127a9c43:;
  /* 127a9c43 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9c46 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a9c49 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127a9c4b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9c4e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9c51 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a9c54 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_127a9c57:;
  /* 127a9c57 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a9c5a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9c5d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9c60 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127a9c62 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a9c65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9c68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9c6b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9c6e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 127a9c71 jmp 0x127a9f32 */
  goto L_127a9f32;
L_127a9c76:;
  /* 127a9c76 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a9c79 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9c7c jge 0x127a9f32 */
  if ((C.sf==C.of)) goto L_127a9f32;
  /* 127a9c82 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a9c85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9c88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9c8b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127a9c8d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127a9c90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9c93 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9c96 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9c99 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 127a9c9c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9c9f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9ca2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127a9ca5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9ca8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9cab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127a9cae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9cb1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127a9cb4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9cb7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127a9cba cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9cbe jbe 0x127a9cc7 */
  if ((C.cf||C.zf)) goto L_127a9cc7;
  /* 127a9cc0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_127a9cc7:;
  /* 127a9cc7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a9cca and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127a9ccd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a9ccf jne 0x127a9e10 */
  if (!C.zf) goto L_127a9e10;
  /* 127a9cd5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127a9cd8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 127a9cdb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9cde mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127a9ce1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9ce5 jbe 0x127a9cee */
  if ((C.cf||C.zf)) goto L_127a9cee;
  /* 127a9ce7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_127a9cee:;
  /* 127a9cee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9cf1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9cf4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9cf7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9cfa jne 0x127a9dd0 */
  if (!C.zf) goto L_127a9dd0;
  /* 127a9d00 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9d04 jae 0x127a9d65 */
  if (!C.cf) goto L_127a9d65;
  /* 127a9d06 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9d0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9d0e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9d10 not edx */
  EDX = (~(EDX));
  /* 127a9d12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9d15 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d18 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127a9d1c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a9d1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9d21 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d24 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127a9d28 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d2b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9d2e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 127a9d31 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a9d34 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d37 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9d3a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 127a9d3d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d40 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9d43 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a9d47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9d49 jne 0x127a9d63 */
  if (!C.zf) goto L_127a9d63;
  /* 127a9d4b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9d50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9d53 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9d55 not edx */
  EDX = (~(EDX));
  /* 127a9d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9d5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127a9d5c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9d5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9d61 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_127a9d63:;
  /* 127a9d63 jmp 0x127a9dd0 */
  goto L_127a9dd0;
L_127a9d65:;
  /* 127a9d65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9d68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9d6b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9d70 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9d72 not eax */
  EAX = (~(EAX));
  /* 127a9d74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9d77 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d7a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 127a9d81 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9d83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9d86 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d89 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 127a9d90 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d93 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9d96 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 127a9d99 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a9d9c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9d9f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9da2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 127a9da5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9da8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9dab movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127a9daf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127a9db1 jne 0x127a9dd0 */
  if (!C.zf) goto L_127a9dd0;
  /* 127a9db3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127a9db6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9db9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9dbe shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9dc0 not eax */
  EAX = (~(EAX));
  /* 127a9dc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9dc5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9dc8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a9dca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9dcd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127a9dd0:;
  /* 127a9dd0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9dd3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a9dd6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9dd9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a9ddc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127a9ddf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9de2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a9de5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127a9de8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127a9deb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 127a9dee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9df1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9df4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127a9df7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9dfa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127a9dfd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9e00 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127a9e03 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9e07 jbe 0x127a9e10 */
  if ((C.cf||C.zf)) goto L_127a9e10;
  /* 127a9e09 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_127a9e10:;
  /* 127a9e10 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a9e13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127a9e16 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 127a9e19 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127a9e1c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9e1f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9e22 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a9e25 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127a9e28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9e2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9e2e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127a9e31 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127a9e34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9e37 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 127a9e3a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9e3d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a9e40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9e43 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 127a9e46 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9e49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9e4c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 127a9e4f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9e52 jne 0x127a9f1e */
  if (!C.zf) goto L_127a9f1e;
  /* 127a9e58 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9e5c jae 0x127a9eb8 */
  if (!C.cf) goto L_127a9eb8;
  /* 127a9e5e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9e61 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9e64 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a9e68 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9e6b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9e6e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127a9e71 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a9e73 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9e76 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9e79 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 127a9e7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9e7e jne 0x127a9e96 */
  if (!C.zf) goto L_127a9e96;
  /* 127a9e80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9e85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a9e88 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9e8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9e8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127a9e8f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a9e91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9e94 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127a9e96:;
  /* 127a9e96 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9e9b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a9e9e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9ea0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9ea3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9ea6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 127a9eaa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a9eac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9eaf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9eb2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 127a9eb6 jmp 0x127a9f1e */
  goto L_127a9f1e;
L_127a9eb8:;
  /* 127a9eb8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9ebb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9ebe movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 127a9ec2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9ec5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9ec8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 127a9ecb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127a9ecd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9ed0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9ed3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 127a9ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9ed8 jne 0x127a9ef5 */
  if (!C.zf) goto L_127a9ef5;
  /* 127a9eda mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a9edd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9ee0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 127a9ee5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 127a9ee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9eea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127a9eed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127a9eef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127a9ef2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_127a9ef5:;
  /* 127a9ef5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127a9ef8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127a9efb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9f00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9f02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9f05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9f08 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 127a9f0f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127a9f11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9f14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127a9f17 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_127a9f1e:;
  /* 127a9f1e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9f21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9f24 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127a9f26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127a9f29 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9f2c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127a9f2f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_127a9f32:;
  /* 127a9f32 mov eax, 1 */
  EAX = (0x1u);
L_127a9f37:;
  /* 127a9f37 mov esp, ebp */
  ESP = (EBP);
  /* 127a9f39 pop ebp */
  EBP = (pop32());
  /* 127a9f3a ret  */
  ESPCHK(0x127a9950u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f40 @ 0x127a9f40 (304 bytes, 79 insns) */
void f_127a9f40(void) {
  FTRACE(0x127a9f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127a9f40 push ebp */
  push32((uint32_t)(EBP));
  /* 127a9f41 mov ebp, esp */
  EBP = (ESP);
  /* 127a9f43 push ecx */
  push32((uint32_t)(ECX));
  /* 127a9f44 cmp dword ptr [0x127d1ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d1ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9f4b je 0x127aa06c */
  if (C.zf) goto L_127aa06c;
  /* 127a9f51 mov eax, dword ptr [0x127d1eb8] */
  EAX = (r32((uint32_t)(0x127d1eb8)));
  /* 127a9f56 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 127a9f59 mov ecx, dword ptr [0x127d1ec0] */
  ECX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9f5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127a9f62 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127a9f64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127a9f67 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 127a9f6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127a9f71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127a9f74 push eax */
  push32((uint32_t)(EAX));
  /* 127a9f75 call dword ptr [0x127d331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d331c))), 0x127a9f7bu);
  /* 127a9f7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127a9f80 mov ecx, dword ptr [0x127d1eb8] */
  ECX = (r32((uint32_t)(0x127d1eb8)));
  /* 127a9f86 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127a9f88 mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9f8d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127a9f90 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 127a9f92 mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9f98 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127a9f9b mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9fa0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a9fa3 mov edx, dword ptr [0x127d1eb8] */
  EDX = (r32((uint32_t)(0x127d1eb8)));
  /* 127a9fa9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 127a9fb4 mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9fb9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a9fbc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 127a9fbf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127a9fc2 mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9fc7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127a9fca mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 127a9fcd mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9fd3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127a9fd6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 127a9fda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127a9fdc jne 0x127a9ff2 */
  if (!C.zf) goto L_127a9ff2;
  /* 127a9fde mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9fe4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127a9fe7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 127a9fe9 mov ecx, dword ptr [0x127d1ec0] */
  ECX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9fef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_127a9ff2:;
  /* 127a9ff2 mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127a9ff8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127a9ffc jne 0x127aa062 */
  if (!C.zf) goto L_127aa062;
  /* 127a9ffe cmp dword ptr [0x127d1ec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d1ec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa005 jle 0x127aa062 */
  if ((C.zf||C.sf!=C.of)) goto L_127aa062;
  /* 127aa007 mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127aa00c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127aa00f push ecx */
  push32((uint32_t)(ECX));
  /* 127aa010 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aa012 mov edx, dword ptr [0x127d1ecc] */
  EDX = (r32((uint32_t)(0x127d1ecc)));
  /* 127aa018 push edx */
  push32((uint32_t)(EDX));
  /* 127aa019 call dword ptr [0x127d3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3318))), 0x127aa01fu);
  /* 127aa01f mov eax, dword ptr [0x127d1ec4] */
  EAX = (r32((uint32_t)(0x127d1ec4)));
  /* 127aa024 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127aa027 mov ecx, dword ptr [0x127d1ec8] */
  ECX = (r32((uint32_t)(0x127d1ec8)));
  /* 127aa02d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa02f mov edx, dword ptr [0x127d1ec0] */
  EDX = (r32((uint32_t)(0x127d1ec0)));
  /* 127aa035 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa038 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa03a push ecx */
  push32((uint32_t)(ECX));
  /* 127aa03b mov eax, dword ptr [0x127d1ec0] */
  EAX = (r32((uint32_t)(0x127d1ec0)));
  /* 127aa040 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa043 push eax */
  push32((uint32_t)(EAX));
  /* 127aa044 mov ecx, dword ptr [0x127d1ec0] */
  ECX = (r32((uint32_t)(0x127d1ec0)));
  /* 127aa04a push ecx */
  push32((uint32_t)(ECX));
  /* 127aa04b call 0x127ac670 */
  push32(0x127aa050u); f_127ac670();
  /* 127aa050 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa053 mov edx, dword ptr [0x127d1ec4] */
  EDX = (r32((uint32_t)(0x127d1ec4)));
  /* 127aa059 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa05c mov dword ptr [0x127d1ec4], edx */
  w32((uint32_t)(0x127d1ec4), (EDX));
L_127aa062:;
  /* 127aa062 mov dword ptr [0x127d1ec0], 0 */
  w32((uint32_t)(0x127d1ec0), (0x0u));
L_127aa06c:;
  /* 127aa06c mov esp, ebp */
  ESP = (EBP);
  /* 127aa06e pop ebp */
  EBP = (pop32());
  /* 127aa06f ret  */
  ESPCHK(0x127a9f40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a070 @ 0x127aa070 (1565 bytes, 343 insns) */
void f_127aa070(void) {
  FTRACE(0x127aa070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aa070 push ebp */
  push32((uint32_t)(EBP));
  /* 127aa071 mov ebp, esp */
  EBP = (ESP);
  /* 127aa073 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa079 mov eax, dword ptr [0x127d1ec4] */
  EAX = (r32((uint32_t)(0x127d1ec4)));
  /* 127aa07e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127aa081 push eax */
  push32((uint32_t)(EAX));
  /* 127aa082 mov ecx, dword ptr [0x127d1ec8] */
  ECX = (r32((uint32_t)(0x127d1ec8)));
  /* 127aa088 push ecx */
  push32((uint32_t)(ECX));
  /* 127aa089 call dword ptr [0x127d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f4))), 0x127aa08fu);
  /* 127aa08f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aa091 je 0x127aa09b */
  if (C.zf) goto L_127aa09b;
  /* 127aa093 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127aa096 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa09b:;
  /* 127aa09b mov edx, dword ptr [0x127d1ec8] */
  EDX = (r32((uint32_t)(0x127d1ec8)));
  /* 127aa0a1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 127aa0a7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 127aa0b1 jmp 0x127aa0c2 */
  goto L_127aa0c2;
L_127aa0b3:;
  /* 127aa0b3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 127aa0b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa0bc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_127aa0c2:;
  /* 127aa0c2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 127aa0c8 cmp ecx, dword ptr [0x127d1ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa0ce jge 0x127aa687 */
  if ((C.sf==C.of)) goto L_127aa687;
  /* 127aa0d4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127aa0da mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127aa0dd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 127aa0e3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 127aa0e8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 127aa0ee push ecx */
  push32((uint32_t)(ECX));
  /* 127aa0ef call dword ptr [0x127d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f4))), 0x127aa0f5u);
  /* 127aa0f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aa0f7 je 0x127aa103 */
  if (C.zf) goto L_127aa103;
  /* 127aa0f9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 127aa0fe jmp 0x127aa689 */
  goto L_127aa689;
L_127aa103:;
  /* 127aa103 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127aa109 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127aa10c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 127aa112 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 127aa118 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa11e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127aa121 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127aa127 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127aa12a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aa12d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 127aa137 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 127aa141 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127aa148 jmp 0x127aa153 */
  goto L_127aa153;
L_127aa14a:;
  /* 127aa14a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa14d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa150 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127aa153:;
  /* 127aa153 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa157 jge 0x127aa64b */
  if ((C.sf==C.of)) goto L_127aa64b;
  /* 127aa15d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 127aa167 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 127aa171 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 127aa17b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 127aa185 jmp 0x127aa196 */
  goto L_127aa196;
L_127aa187:;
  /* 127aa187 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127aa18d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa190 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_127aa196:;
  /* 127aa196 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa19d jge 0x127aa1b2 */
  if ((C.sf==C.of)) goto L_127aa1b2;
  /* 127aa19f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127aa1a5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 127aa1b0 jmp 0x127aa187 */
  goto L_127aa187;
L_127aa1b2:;
  /* 127aa1b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa1b6 jl 0x127aa5ed */
  if ((C.sf!=C.of)) goto L_127aa5ed;
  /* 127aa1bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 127aa1c1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 127aa1c7 push ecx */
  push32((uint32_t)(ECX));
  /* 127aa1c8 call dword ptr [0x127d32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f4))), 0x127aa1ceu);
  /* 127aa1ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aa1d0 je 0x127aa1dc */
  if (C.zf) goto L_127aa1dc;
  /* 127aa1d2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 127aa1d7 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa1dc:;
  /* 127aa1dc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 127aa1e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127aa1e5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 127aa1ef jmp 0x127aa200 */
  goto L_127aa200;
L_127aa1f1:;
  /* 127aa1f1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 127aa1f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa1fa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_127aa200:;
  /* 127aa200 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa207 jge 0x127aa384 */
  if ((C.sf==C.of)) goto L_127aa384;
  /* 127aa20d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aa210 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa213 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 127aa219 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa21f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa225 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 127aa22b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa231 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa235 jne 0x127aa242 */
  if (!C.zf) goto L_127aa242;
  /* 127aa237 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 127aa23d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa240 je 0x127aa24c */
  if (C.zf) goto L_127aa24c;
L_127aa242:;
  /* 127aa242 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 127aa247 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa24c:;
  /* 127aa24c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa252 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127aa254 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 127aa25a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 127aa260 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 127aa266 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 127aa26c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127aa26f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127aa271 je 0x127aa2a9 */
  if (C.zf) goto L_127aa2a9;
  /* 127aa273 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 127aa279 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa27c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 127aa282 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa28c jle 0x127aa298 */
  if ((C.zf||C.sf!=C.of)) goto L_127aa298;
  /* 127aa28e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 127aa293 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa298:;
  /* 127aa298 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 127aa29e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa2a1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 127aa2a7 jmp 0x127aa2eb */
  goto L_127aa2eb;
L_127aa2a9:;
  /* 127aa2a9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 127aa2af sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127aa2b2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa2b5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 127aa2bb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa2c2 jle 0x127aa2ce */
  if ((C.zf||C.sf!=C.of)) goto L_127aa2ce;
  /* 127aa2c4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_127aa2ce:;
  /* 127aa2ce mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127aa2d4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 127aa2db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa2de mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127aa2e4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_127aa2eb:;
  /* 127aa2eb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa2f2 jl 0x127aa30d */
  if ((C.sf!=C.of)) goto L_127aa30d;
  /* 127aa2f4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 127aa2fa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 127aa2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aa2ff jne 0x127aa30d */
  if (!C.zf) goto L_127aa30d;
  /* 127aa301 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa30b jle 0x127aa317 */
  if ((C.zf||C.sf!=C.of)) goto L_127aa317;
L_127aa30d:;
  /* 127aa30d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 127aa312 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa317:;
  /* 127aa317 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa31d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa323 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 127aa326 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa32c je 0x127aa338 */
  if (C.zf) goto L_127aa338;
  /* 127aa32e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 127aa333 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa338:;
  /* 127aa338 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa33e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa344 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 127aa34a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa350 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa356 jb 0x127aa24c */
  if (C.cf) goto L_127aa24c;
  /* 127aa35c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa362 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa368 je 0x127aa374 */
  if (C.zf) goto L_127aa374;
  /* 127aa36a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 127aa36f jmp 0x127aa689 */
  goto L_127aa689;
L_127aa374:;
  /* 127aa374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aa377 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa37c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127aa37f jmp 0x127aa1f1 */
  goto L_127aa1f1;
L_127aa384:;
  /* 127aa384 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127aa387 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127aa389 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa38f je 0x127aa39b */
  if (C.zf) goto L_127aa39b;
  /* 127aa391 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 127aa396 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa39b:;
  /* 127aa39b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127aa39e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 127aa3a4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 127aa3ab jmp 0x127aa3b6 */
  goto L_127aa3b6;
L_127aa3ad:;
  /* 127aa3ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127aa3b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa3b3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_127aa3b6:;
  /* 127aa3b6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa3ba jge 0x127aa5ed */
  if ((C.sf==C.of)) goto L_127aa5ed;
  /* 127aa3c0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 127aa3ca mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 127aa3d0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_127aa3d6:;
  /* 127aa3d6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa3dc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127aa3df mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 127aa3e5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127aa3eb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa3f1 je 0x127aa51a */
  if (C.zf) goto L_127aa51a;
  /* 127aa3f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127aa3fa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 127aa400 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa407 je 0x127aa51a */
  if (C.zf) goto L_127aa51a;
  /* 127aa40d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127aa413 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa419 jb 0x127aa42e */
  if (C.cf) goto L_127aa42e;
  /* 127aa41b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 127aa421 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa426 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa42c jb 0x127aa438 */
  if (C.cf) goto L_127aa438;
L_127aa42e:;
  /* 127aa42e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 127aa433 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa438:;
  /* 127aa438 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127aa43e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 127aa444 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 127aa44a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 127aa450 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa453 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127aa456 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127aa459 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa45e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_127aa464:;
  /* 127aa464 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127aa467 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa46d je 0x127aa48e */
  if (C.zf) goto L_127aa48e;
  /* 127aa46f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127aa472 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa478 jne 0x127aa47c */
  if (!C.zf) goto L_127aa47c;
  /* 127aa47a jmp 0x127aa48e */
  goto L_127aa48e;
L_127aa47c:;
  /* 127aa47c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127aa47f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127aa481 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 127aa484 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127aa487 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa489 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127aa48c jmp 0x127aa464 */
  goto L_127aa464;
L_127aa48e:;
  /* 127aa48e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127aa491 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa497 jne 0x127aa4a3 */
  if (!C.zf) goto L_127aa4a3;
  /* 127aa499 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 127aa49e jmp 0x127aa689 */
  goto L_127aa689;
L_127aa4a3:;
  /* 127aa4a3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127aa4a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127aa4ab sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127aa4ae sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa4b1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 127aa4b7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa4be jle 0x127aa4ca */
  if ((C.zf||C.sf!=C.of)) goto L_127aa4ca;
  /* 127aa4c0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_127aa4ca:;
  /* 127aa4ca mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 127aa4d0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa4d3 je 0x127aa4df */
  if (C.zf) goto L_127aa4df;
  /* 127aa4d5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 127aa4da jmp 0x127aa689 */
  goto L_127aa689;
L_127aa4df:;
  /* 127aa4df mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127aa4e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127aa4e8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa4ee je 0x127aa4fa */
  if (C.zf) goto L_127aa4fa;
  /* 127aa4f0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 127aa4f5 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa4fa:;
  /* 127aa4fa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 127aa500 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 127aa506 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 127aa50c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa50f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 127aa515 jmp 0x127aa3d6 */
  goto L_127aa3d6;
L_127aa51a:;
  /* 127aa51a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa521 je 0x127aa591 */
  if (C.zf) goto L_127aa591;
  /* 127aa523 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa527 jge 0x127aa55b */
  if ((C.sf==C.of)) goto L_127aa55b;
  /* 127aa529 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127aa52e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127aa531 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127aa533 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 127aa539 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa53b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 127aa541 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127aa546 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127aa549 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127aa54b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 127aa551 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa553 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 127aa559 jmp 0x127aa591 */
  goto L_127aa591;
L_127aa55b:;
  /* 127aa55b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127aa55e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa561 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127aa566 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127aa568 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 127aa56e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa570 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 127aa576 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127aa579 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa57c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 127aa581 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 127aa583 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 127aa589 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa58b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_127aa591:;
  /* 127aa591 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 127aa597 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127aa59a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa5a0 jne 0x127aa5b4 */
  if (!C.zf) goto L_127aa5b4;
  /* 127aa5a2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127aa5a5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 127aa5ab cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa5b2 je 0x127aa5be */
  if (C.zf) goto L_127aa5be;
L_127aa5b4:;
  /* 127aa5b4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 127aa5b9 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa5be:;
  /* 127aa5be mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 127aa5c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127aa5c7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa5cd je 0x127aa5d9 */
  if (C.zf) goto L_127aa5d9;
  /* 127aa5cf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 127aa5d4 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa5d9:;
  /* 127aa5d9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 127aa5df add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa5e2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 127aa5e8 jmp 0x127aa3ad */
  goto L_127aa3ad;
L_127aa5ed:;
  /* 127aa5ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa5f0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 127aa5f6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 127aa5fc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa600 jne 0x127aa61a */
  if (!C.zf) goto L_127aa61a;
  /* 127aa602 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa605 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 127aa60b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 127aa611 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa618 je 0x127aa621 */
  if (C.zf) goto L_127aa621;
L_127aa61a:;
  /* 127aa61a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 127aa61f jmp 0x127aa689 */
  goto L_127aa689;
L_127aa621:;
  /* 127aa621 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 127aa627 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa62d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 127aa633 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127aa636 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa63b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127aa63e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aa641 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127aa643 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127aa646 jmp 0x127aa14a */
  goto L_127aa14a;
L_127aa64b:;
  /* 127aa64b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127aa651 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 127aa657 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa659 jne 0x127aa66c */
  if (!C.zf) goto L_127aa66c;
  /* 127aa65b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127aa661 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 127aa667 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa66a je 0x127aa673 */
  if (C.zf) goto L_127aa673;
L_127aa66c:;
  /* 127aa66c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 127aa671 jmp 0x127aa689 */
  goto L_127aa689;
L_127aa673:;
  /* 127aa673 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 127aa679 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa67c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 127aa682 jmp 0x127aa0b3 */
  goto L_127aa0b3;
L_127aa687:;
  /* 127aa687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127aa689:;
  /* 127aa689 mov esp, ebp */
  ESP = (EBP);
  /* 127aa68b pop ebp */
  EBP = (pop32());
  /* 127aa68c ret  */
  ESPCHK(0x127aa070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a690 @ 0x127aa690 (250 bytes, 92 insns) */
void f_127aa690(void) {
  FTRACE(0x127aa690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aa690 push ebp */
  push32((uint32_t)(EBP));
  /* 127aa691 mov ebp, esp */
  EBP = (ESP);
  /* 127aa693 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa696 push ebx */
  push32((uint32_t)(EBX));
  /* 127aa697 push esi */
  push32((uint32_t)(ESI));
  /* 127aa698 push edi */
  push32((uint32_t)(EDI));
  /* 127aa699 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 127aa69c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127aa69f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 127aa6a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_127aa6a5:;
  /* 127aa6a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa6a9 jne 0x127aa6c9 */
  if (!C.zf) goto L_127aa6c9;
  /* 127aa6ab push 0x127cbe94 */
  push32((uint32_t)(0x127cbe94u));
  /* 127aa6b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aa6b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 127aa6b4 push 0x127cbe88 */
  push32((uint32_t)(0x127cbe88u));
  /* 127aa6b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127aa6bb call 0x127a3840 */
  push32(0x127aa6c0u); f_127a3840();
  /* 127aa6c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa6c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa6c6 jne 0x127aa6c9 */
  if (!C.zf) goto L_127aa6c9;
  /* 127aa6c8 int3  */
  x86_unimpl("int3 @ 0x127aa6c8");
L_127aa6c9:;
  /* 127aa6c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127aa6cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127aa6cd jne 0x127aa6a5 */
  if (!C.zf) goto L_127aa6a5;
L_127aa6cf:;
  /* 127aa6cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa6d3 jne 0x127aa6f3 */
  if (!C.zf) goto L_127aa6f3;
  /* 127aa6d5 push 0x127cbe78 */
  push32((uint32_t)(0x127cbe78u));
  /* 127aa6da push 0 */
  push32((uint32_t)(0x0u));
  /* 127aa6dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 127aa6de push 0x127cbe88 */
  push32((uint32_t)(0x127cbe88u));
  /* 127aa6e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127aa6e5 call 0x127a3840 */
  push32(0x127aa6eau); f_127a3840();
  /* 127aa6ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa6ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa6f0 jne 0x127aa6f3 */
  if (!C.zf) goto L_127aa6f3;
  /* 127aa6f2 int3  */
  x86_unimpl("int3 @ 0x127aa6f2");
L_127aa6f3:;
  /* 127aa6f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa6f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aa6f7 jne 0x127aa6cf */
  if (!C.zf) goto L_127aa6cf;
  /* 127aa6f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa6fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 127aa703 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa709 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127aa70c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa70f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa712 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127aa714 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa717 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 127aa71e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127aa721 push ecx */
  push32((uint32_t)(ECX));
  /* 127aa722 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aa725 push edx */
  push32((uint32_t)(EDX));
  /* 127aa726 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa729 push eax */
  push32((uint32_t)(EAX));
  /* 127aa72a call 0x127ab710 */
  push32(0x127aa72fu); f_127ab710();
  /* 127aa72f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa732 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127aa735 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa738 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127aa73b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa73e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa741 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127aa744 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa747 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa74b jl 0x127aa76f */
  if ((C.sf!=C.of)) goto L_127aa76f;
  /* 127aa74d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa750 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127aa752 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127aa755 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aa757 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127aa75d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 127aa760 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa763 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127aa765 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa768 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa76b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127aa76d jmp 0x127aa780 */
  goto L_127aa780;
L_127aa76f:;
  /* 127aa76f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa772 push edx */
  push32((uint32_t)(EDX));
  /* 127aa773 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aa775 call 0x127ab490 */
  push32(0x127aa77au); f_127ab490();
  /* 127aa77a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa77d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_127aa780:;
  /* 127aa780 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127aa783 pop edi */
  EDI = (pop32());
  /* 127aa784 pop esi */
  ESI = (pop32());
  /* 127aa785 pop ebx */
  EBX = (pop32());
  /* 127aa786 mov esp, ebp */
  ESP = (EBP);
  /* 127aa788 pop ebp */
  EBP = (pop32());
  /* 127aa789 ret  */
  ESPCHK(0x127aa690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a790 @ 0x127aa790 (183 bytes, 58 insns) */
void f_127aa790(void) {
  FTRACE(0x127aa790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aa790 push ebp */
  push32((uint32_t)(EBP));
  /* 127aa791 mov ebp, esp */
  EBP = (ESP);
  /* 127aa793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa796 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa799 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa79c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa7a1 ja 0x127aa7ba */
  if ((!C.cf&&!C.zf)) goto L_127aa7ba;
  /* 127aa7a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa7a6 mov edx, dword ptr [0x127cec98] */
  EDX = (r32((uint32_t)(0x127cec98)));
  /* 127aa7ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa7ae mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 127aa7b2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 127aa7b5 jmp 0x127aa843 */
  goto L_127aa843;
L_127aa7ba:;
  /* 127aa7ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa7bd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 127aa7c0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127aa7c6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127aa7cc mov edx, dword ptr [0x127cec98] */
  EDX = (r32((uint32_t)(0x127cec98)));
  /* 127aa7d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa7d4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 127aa7d8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 127aa7dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aa7df je 0x127aa803 */
  if (C.zf) goto L_127aa803;
  /* 127aa7e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa7e4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 127aa7e7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127aa7ed mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 127aa7f0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 127aa7f3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 127aa7f6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 127aa7fa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 127aa801 jmp 0x127aa814 */
  goto L_127aa814;
L_127aa803:;
  /* 127aa803 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 127aa806 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 127aa809 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 127aa80d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_127aa814:;
  /* 127aa814 push 1 */
  push32((uint32_t)(0x1u));
  /* 127aa816 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aa818 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aa81a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 127aa81d push ecx */
  push32((uint32_t)(ECX));
  /* 127aa81e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aa821 push edx */
  push32((uint32_t)(EDX));
  /* 127aa822 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 127aa825 push eax */
  push32((uint32_t)(EAX));
  /* 127aa826 push 1 */
  push32((uint32_t)(0x1u));
  /* 127aa828 call 0x127ac9b0 */
  push32(0x127aa82du); f_127ac9b0();
  /* 127aa82d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aa832 jne 0x127aa838 */
  if (!C.zf) goto L_127aa838;
  /* 127aa834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa836 jmp 0x127aa843 */
  goto L_127aa843;
L_127aa838:;
  /* 127aa838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aa83b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127aa840 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_127aa843:;
  /* 127aa843 mov esp, ebp */
  ESP = (EBP);
  /* 127aa845 pop ebp */
  EBP = (pop32());
  /* 127aa846 ret  */
  ESPCHK(0x127aa790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a850 @ 0x127aa850 (836 bytes, 238 insns) */
void f_127aa850(void) {
  FTRACE(0x127aa850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aa850 push ebp */
  push32((uint32_t)(EBP));
  /* 127aa851 mov ebp, esp */
  EBP = (ESP);
  /* 127aa853 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aa856 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127aa858 call 0x127a8180 */
  push32(0x127aa85du); f_127a8180();
  /* 127aa85d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa863 push eax */
  push32((uint32_t)(EAX));
  /* 127aa864 call 0x127aaba0 */
  push32(0x127aa869u); f_127aaba0();
  /* 127aa869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa86c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127aa86f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa872 cmp ecx, dword ptr [0x127d1c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa878 jne 0x127aa88b */
  if (!C.zf) goto L_127aa88b;
  /* 127aa87a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127aa87c call 0x127a8220 */
  push32(0x127aa881u); f_127a8220();
  /* 127aa881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa886 jmp 0x127aab90 */
  goto L_127aab90;
L_127aa88b:;
  /* 127aa88b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa88f jne 0x127aa8ac */
  if (!C.zf) goto L_127aa8ac;
  /* 127aa891 call 0x127aac80 */
  push32(0x127aa896u); f_127aac80();
  /* 127aa896 call 0x127aad00 */
  push32(0x127aa89bu); f_127aad00();
  /* 127aa89b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127aa89d call 0x127a8220 */
  push32(0x127aa8a2u); f_127a8220();
  /* 127aa8a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa8a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa8a7 jmp 0x127aab90 */
  goto L_127aab90;
L_127aa8ac:;
  /* 127aa8ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127aa8b3 jmp 0x127aa8be */
  goto L_127aa8be;
L_127aa8b5:;
  /* 127aa8b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aa8b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa8bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127aa8be:;
  /* 127aa8be cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa8c2 jae 0x127aaa0f */
  if (!C.cf) goto L_127aaa0f;
  /* 127aa8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aa8cb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127aa8ce mov ecx, dword ptr [eax + 0x127ceeb8] */
  ECX = (r32((uint32_t)(EAX + 0x127ceeb8)));
  /* 127aa8d4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa8d7 jne 0x127aaa0a */
  if (!C.zf) goto L_127aaa0a;
  /* 127aa8dd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127aa8e4 jmp 0x127aa8ef */
  goto L_127aa8ef;
L_127aa8e6:;
  /* 127aa8e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa8e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa8ec mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_127aa8ef:;
  /* 127aa8ef cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa8f6 jae 0x127aa904 */
  if (!C.cf) goto L_127aa904;
  /* 127aa8f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa8fb mov byte ptr [eax + 0x127d1da0], 0 */
  w8((uint32_t)(EAX + 0x127d1da0), (0x0u));
  /* 127aa902 jmp 0x127aa8e6 */
  goto L_127aa8e6;
L_127aa904:;
  /* 127aa904 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127aa90b jmp 0x127aa916 */
  goto L_127aa916;
L_127aa90d:;
  /* 127aa90d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa910 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa913 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_127aa916:;
  /* 127aa916 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa91a jae 0x127aa997 */
  if (!C.cf) goto L_127aa997;
  /* 127aa91c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aa91f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127aa922 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa925 lea ecx, [edx + eax*8 + 0x127ceec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x127ceec8));
  /* 127aa92c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127aa92f jmp 0x127aa93a */
  goto L_127aa93a;
L_127aa931:;
  /* 127aa931 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aa934 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa937 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127aa93a:;
  /* 127aa93a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aa93d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aa93f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127aa941 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aa943 je 0x127aa992 */
  if (C.zf) goto L_127aa992;
  /* 127aa945 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aa948 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aa94a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127aa94d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aa94f je 0x127aa992 */
  if (C.zf) goto L_127aa992;
  /* 127aa951 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aa954 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127aa956 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127aa958 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127aa95b jmp 0x127aa966 */
  goto L_127aa966;
L_127aa95d:;
  /* 127aa95d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa960 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa963 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127aa966:;
  /* 127aa966 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aa969 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127aa96b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 127aa96e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa971 ja 0x127aa990 */
  if ((!C.cf&&!C.zf)) goto L_127aa990;
  /* 127aa973 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa976 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa979 mov dl, byte ptr [eax + 0x127d1da1] */
  DL = (r8((uint32_t)(EAX + 0x127d1da1)));
  /* 127aa97f or dl, byte ptr [ecx + 0x127ceeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x127ceeb0))); DL = (_r); fl_logic(_r,8); }
  /* 127aa985 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aa988 mov byte ptr [eax + 0x127d1da1], dl */
  w8((uint32_t)(EAX + 0x127d1da1), (DL));
  /* 127aa98e jmp 0x127aa95d */
  goto L_127aa95d;
L_127aa990:;
  /* 127aa990 jmp 0x127aa931 */
  goto L_127aa931;
L_127aa992:;
  /* 127aa992 jmp 0x127aa90d */
  goto L_127aa90d;
L_127aa997:;
  /* 127aa997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aa99a mov dword ptr [0x127d1c04], ecx */
  w32((uint32_t)(0x127d1c04), (ECX));
  /* 127aa9a0 mov dword ptr [0x127d1c8c], 1 */
  w32((uint32_t)(0x127d1c8c), (0x1u));
  /* 127aa9aa mov edx, dword ptr [0x127d1c04] */
  EDX = (r32((uint32_t)(0x127d1c04)));
  /* 127aa9b0 push edx */
  push32((uint32_t)(EDX));
  /* 127aa9b1 call 0x127aac00 */
  push32(0x127aa9b6u); f_127aac00();
  /* 127aa9b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa9b9 mov dword ptr [0x127d1ea4], eax */
  w32((uint32_t)(0x127d1ea4), (EAX));
  /* 127aa9be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127aa9c5 jmp 0x127aa9d0 */
  goto L_127aa9d0;
L_127aa9c7:;
  /* 127aa9c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa9ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aa9cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127aa9d0:;
  /* 127aa9d0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aa9d4 jae 0x127aa9f4 */
  if (!C.cf) goto L_127aa9f4;
  /* 127aa9d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aa9d9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127aa9dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa9df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aa9e2 mov cx, word ptr [ecx + eax*2 + 0x127ceebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x127ceebc)));
  /* 127aa9ea mov word ptr [edx*2 + 0x127d1c80], cx */
  w16((uint32_t)(EDX*2 + 0x127d1c80), (CX));
  /* 127aa9f2 jmp 0x127aa9c7 */
  goto L_127aa9c7;
L_127aa9f4:;
  /* 127aa9f4 call 0x127aad00 */
  push32(0x127aa9f9u); f_127aad00();
  /* 127aa9f9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127aa9fb call 0x127a8220 */
  push32(0x127aaa00u); f_127a8220();
  /* 127aaa00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aaa03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aaa05 jmp 0x127aab90 */
  goto L_127aab90;
L_127aaa0a:;
  /* 127aaa0a jmp 0x127aa8b5 */
  goto L_127aa8b5;
L_127aaa0f:;
  /* 127aaa0f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 127aaa12 push edx */
  push32((uint32_t)(EDX));
  /* 127aaa13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aaa16 push eax */
  push32((uint32_t)(EAX));
  /* 127aaa17 call dword ptr [0x127d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3344))), 0x127aaa1du);
  /* 127aaa1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aaa20 jne 0x127aab62 */
  if (!C.zf) goto L_127aab62;
  /* 127aaa26 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127aaa2d jmp 0x127aaa38 */
  goto L_127aaa38;
L_127aaa2f:;
  /* 127aaa2f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aaa32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aaa35 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_127aaa38:;
  /* 127aaa38 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aaa3f jae 0x127aaa4d */
  if (!C.cf) goto L_127aaa4d;
  /* 127aaa41 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aaa44 mov byte ptr [edx + 0x127d1da0], 0 */
  w8((uint32_t)(EDX + 0x127d1da0), (0x0u));
  /* 127aaa4b jmp 0x127aaa2f */
  goto L_127aaa2f;
L_127aaa4d:;
  /* 127aaa4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aaa50 mov dword ptr [0x127d1c04], eax */
  w32((uint32_t)(0x127d1c04), (EAX));
  /* 127aaa55 mov dword ptr [0x127d1ea4], 0 */
  w32((uint32_t)(0x127d1ea4), (0x0u));
  /* 127aaa5f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aaa63 jbe 0x127aab1e */
  if ((C.cf||C.zf)) goto L_127aab1e;
  /* 127aaa69 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 127aaa6c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 127aaa6f jmp 0x127aaa7a */
  goto L_127aaa7a;
L_127aaa71:;
  /* 127aaa71 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127aaa74 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aaa77 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_127aaa7a:;
  /* 127aaa7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127aaa7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aaa7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127aaa81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aaa83 je 0x127aaacc */
  if (C.zf) goto L_127aaacc;
  /* 127aaa85 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127aaa88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aaa8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127aaa8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aaa8f je 0x127aaacc */
  if (C.zf) goto L_127aaacc;
  /* 127aaa91 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127aaa94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127aaa96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127aaa98 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127aaa9b jmp 0x127aaaa6 */
  goto L_127aaaa6;
L_127aaa9d:;
  /* 127aaa9d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aaaa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aaaa3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127aaaa6:;
  /* 127aaaa6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127aaaa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127aaaab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 127aaaae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aaab1 ja 0x127aaaca */
  if ((!C.cf&&!C.zf)) goto L_127aaaca;
  /* 127aaab3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aaab6 mov cl, byte ptr [eax + 0x127d1da1] */
  CL = (r8((uint32_t)(EAX + 0x127d1da1)));
  /* 127aaabc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 127aaabf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aaac2 mov byte ptr [edx + 0x127d1da1], cl */
  w8((uint32_t)(EDX + 0x127d1da1), (CL));
  /* 127aaac8 jmp 0x127aaa9d */
  goto L_127aaa9d;
L_127aaaca:;
  /* 127aaaca jmp 0x127aaa71 */
  goto L_127aaa71;
L_127aaacc:;
  /* 127aaacc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 127aaad3 jmp 0x127aaade */
  goto L_127aaade;
L_127aaad5:;
  /* 127aaad5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aaad8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aaadb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127aaade:;
  /* 127aaade cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aaae5 jae 0x127aaafe */
  if (!C.cf) goto L_127aaafe;
  /* 127aaae7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aaaea mov dl, byte ptr [ecx + 0x127d1da1] */
  DL = (r8((uint32_t)(ECX + 0x127d1da1)));
  /* 127aaaf0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 127aaaf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127aaaf6 mov byte ptr [eax + 0x127d1da1], dl */
  w8((uint32_t)(EAX + 0x127d1da1), (DL));
  /* 127aaafc jmp 0x127aaad5 */
  goto L_127aaad5;
L_127aaafe:;
  /* 127aaafe mov ecx, dword ptr [0x127d1c04] */
  ECX = (r32((uint32_t)(0x127d1c04)));
  /* 127aab04 push ecx */
  push32((uint32_t)(ECX));
  /* 127aab05 call 0x127aac00 */
  push32(0x127aab0au); f_127aac00();
  /* 127aab0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aab0d mov dword ptr [0x127d1ea4], eax */
  w32((uint32_t)(0x127d1ea4), (EAX));
  /* 127aab12 mov dword ptr [0x127d1c8c], 1 */
  w32((uint32_t)(0x127d1c8c), (0x1u));
  /* 127aab1c jmp 0x127aab28 */
  goto L_127aab28;
L_127aab1e:;
  /* 127aab1e mov dword ptr [0x127d1c8c], 0 */
  w32((uint32_t)(0x127d1c8c), (0x0u));
L_127aab28:;
  /* 127aab28 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127aab2f jmp 0x127aab3a */
  goto L_127aab3a;
L_127aab31:;
  /* 127aab31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aab34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aab37 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127aab3a:;
  /* 127aab3a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aab3e jae 0x127aab4f */
  if (!C.cf) goto L_127aab4f;
  /* 127aab40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aab43 mov word ptr [eax*2 + 0x127d1c80], 0 */
  w16((uint32_t)(EAX*2 + 0x127d1c80), (0x0u));
  /* 127aab4d jmp 0x127aab31 */
  goto L_127aab31;
L_127aab4f:;
  /* 127aab4f call 0x127aad00 */
  push32(0x127aab54u); f_127aad00();
  /* 127aab54 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127aab56 call 0x127a8220 */
  push32(0x127aab5bu); f_127a8220();
  /* 127aab5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aab5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aab60 jmp 0x127aab90 */
  goto L_127aab90;
L_127aab62:;
  /* 127aab62 cmp dword ptr [0x127d0708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aab69 je 0x127aab83 */
  if (C.zf) goto L_127aab83;
  /* 127aab6b call 0x127aac80 */
  push32(0x127aab70u); f_127aac80();
  /* 127aab70 call 0x127aad00 */
  push32(0x127aab75u); f_127aad00();
  /* 127aab75 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127aab77 call 0x127a8220 */
  push32(0x127aab7cu); f_127a8220();
  /* 127aab7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aab7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aab81 jmp 0x127aab90 */
  goto L_127aab90;
L_127aab83:;
  /* 127aab83 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127aab85 call 0x127a8220 */
  push32(0x127aab8au); f_127a8220();
  /* 127aab8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aab8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127aab90:;
  /* 127aab90 mov esp, ebp */
  ESP = (EBP);
  /* 127aab92 pop ebp */
  EBP = (pop32());
  /* 127aab93 ret  */
  ESPCHK(0x127aa850u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x127aaba0 (89 bytes, 21 insns) */
void f_127aaba0(void) {
  FTRACE(0x127aaba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aaba0 push ebp */
  push32((uint32_t)(EBP));
  /* 127aaba1 mov ebp, esp */
  EBP = (ESP);
  /* 127aaba3 mov dword ptr [0x127d0708], 0 */
  w32((uint32_t)(0x127d0708), (0x0u));
  /* 127aabad cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aabb1 jne 0x127aabc5 */
  if (!C.zf) goto L_127aabc5;
  /* 127aabb3 mov dword ptr [0x127d0708], 1 */
  w32((uint32_t)(0x127d0708), (0x1u));
  /* 127aabbd call dword ptr [0x127d334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d334c))), 0x127aabc3u);
  /* 127aabc3 jmp 0x127aabf7 */
  goto L_127aabf7;
L_127aabc5:;
  /* 127aabc5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aabc9 jne 0x127aabdd */
  if (!C.zf) goto L_127aabdd;
  /* 127aabcb mov dword ptr [0x127d0708], 1 */
  w32((uint32_t)(0x127d0708), (0x1u));
  /* 127aabd5 call dword ptr [0x127d3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3348))), 0x127aabdbu);
  /* 127aabdb jmp 0x127aabf7 */
  goto L_127aabf7;
L_127aabdd:;
  /* 127aabdd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aabe1 jne 0x127aabf4 */
  if (!C.zf) goto L_127aabf4;
  /* 127aabe3 mov dword ptr [0x127d0708], 1 */
  w32((uint32_t)(0x127d0708), (0x1u));
  /* 127aabed mov eax, dword ptr [0x127d0728] */
  EAX = (r32((uint32_t)(0x127d0728)));
  /* 127aabf2 jmp 0x127aabf7 */
  goto L_127aabf7;
L_127aabf4:;
  /* 127aabf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_127aabf7:;
  /* 127aabf7 pop ebp */
  EBP = (pop32());
  /* 127aabf8 ret  */
  ESPCHK(0x127aaba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac00 @ 0x127aac00 (80 bytes, 26 insns) [1 switch table(s)] */
void f_127aac00(void) {
  FTRACE(0x127aac00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aac00 push ebp */
  push32((uint32_t)(EBP));
  /* 127aac01 mov ebp, esp */
  EBP = (ESP);
  /* 127aac03 push ecx */
  push32((uint32_t)(ECX));
  /* 127aac04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aac07 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aac0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aac0d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aac13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127aac16 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aac1a ja 0x127aac4a */
  if ((!C.cf&&!C.zf)) goto L_127aac4a;
  /* 127aac1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aac1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127aac21 mov dl, byte ptr [eax + 0x127aac64] */
  DL = (r8((uint32_t)(EAX + 0x127aac64)));
  /* 127aac27 jmp dword ptr [edx*4 + 0x127aac50] */
  switch (EDX) {
    case 0: goto L_127aac2e;
    case 1: goto L_127aac35;
    case 2: goto L_127aac3c;
    case 3: goto L_127aac43;
    case 4: goto L_127aac4a;
    default: x86_unimpl("switch@0x127aac27 out of table"); return;
  }
L_127aac2e:;
  /* 127aac2e mov eax, 0x411 */
  EAX = (0x411u);
  /* 127aac33 jmp 0x127aac4c */
  goto L_127aac4c;
L_127aac35:;
  /* 127aac35 mov eax, 0x804 */
  EAX = (0x804u);
  /* 127aac3a jmp 0x127aac4c */
  goto L_127aac4c;
L_127aac3c:;
  /* 127aac3c mov eax, 0x412 */
  EAX = (0x412u);
  /* 127aac41 jmp 0x127aac4c */
  goto L_127aac4c;
L_127aac43:;
  /* 127aac43 mov eax, 0x404 */
  EAX = (0x404u);
  /* 127aac48 jmp 0x127aac4c */
  goto L_127aac4c;
L_127aac4a:;
  /* 127aac4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127aac4c:;
  /* 127aac4c mov esp, ebp */
  ESP = (EBP);
  /* 127aac4e pop ebp */
  EBP = (pop32());
  /* 127aac4f ret  */
  ESPCHK(0x127aac00u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x127aac80 (116 bytes, 29 insns) */
void f_127aac80(void) {
  FTRACE(0x127aac80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aac80 push ebp */
  push32((uint32_t)(EBP));
  /* 127aac81 mov ebp, esp */
  EBP = (ESP);
  /* 127aac83 push ecx */
  push32((uint32_t)(ECX));
  /* 127aac84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127aac8b jmp 0x127aac96 */
  goto L_127aac96;
L_127aac8d:;
  /* 127aac8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aac90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aac93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127aac96:;
  /* 127aac96 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aac9d jge 0x127aacab */
  if ((C.sf==C.of)) goto L_127aacab;
  /* 127aac9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aaca2 mov byte ptr [ecx + 0x127d1da0], 0 */
  w8((uint32_t)(ECX + 0x127d1da0), (0x0u));
  /* 127aaca9 jmp 0x127aac8d */
  goto L_127aac8d;
L_127aacab:;
  /* 127aacab mov dword ptr [0x127d1c04], 0 */
  w32((uint32_t)(0x127d1c04), (0x0u));
  /* 127aacb5 mov dword ptr [0x127d1c8c], 0 */
  w32((uint32_t)(0x127d1c8c), (0x0u));
  /* 127aacbf mov dword ptr [0x127d1ea4], 0 */
  w32((uint32_t)(0x127d1ea4), (0x0u));
  /* 127aacc9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127aacd0 jmp 0x127aacdb */
  goto L_127aacdb;
L_127aacd2:;
  /* 127aacd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aacd5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aacd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127aacdb:;
  /* 127aacdb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aacdf jge 0x127aacf0 */
  if ((C.sf==C.of)) goto L_127aacf0;
  /* 127aace1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aace4 mov word ptr [eax*2 + 0x127d1c80], 0 */
  w16((uint32_t)(EAX*2 + 0x127d1c80), (0x0u));
  /* 127aacee jmp 0x127aacd2 */
  goto L_127aacd2;
L_127aacf0:;
  /* 127aacf0 mov esp, ebp */
  ESP = (EBP);
  /* 127aacf2 pop ebp */
  EBP = (pop32());
  /* 127aacf3 ret  */
  ESPCHK(0x127aac80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad00 @ 0x127aad00 (770 bytes, 175 insns) */
void f_127aad00(void) {
  FTRACE(0x127aad00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aad00 push ebp */
  push32((uint32_t)(EBP));
  /* 127aad01 mov ebp, esp */
  EBP = (ESP);
  /* 127aad03 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aad09 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 127aad0f push eax */
  push32((uint32_t)(EAX));
  /* 127aad10 mov ecx, dword ptr [0x127d1c04] */
  ECX = (r32((uint32_t)(0x127d1c04)));
  /* 127aad16 push ecx */
  push32((uint32_t)(ECX));
  /* 127aad17 call dword ptr [0x127d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3344))), 0x127aad1du);
  /* 127aad1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aad20 jne 0x127aaf39 */
  if (!C.zf) goto L_127aaf39;
  /* 127aad26 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 127aad30 jmp 0x127aad41 */
  goto L_127aad41;
L_127aad32:;
  /* 127aad32 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aad38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aad3b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_127aad41:;
  /* 127aad41 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aad4b jae 0x127aad62 */
  if (!C.cf) goto L_127aad62;
  /* 127aad4d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aad53 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 127aad59 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 127aad60 jmp 0x127aad32 */
  goto L_127aad32;
L_127aad62:;
  /* 127aad62 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 127aad69 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 127aad6f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127aad72 jmp 0x127aad7d */
  goto L_127aad7d;
L_127aad74:;
  /* 127aad74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aad77 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aad7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127aad7d:;
  /* 127aad7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aad80 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127aad82 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127aad84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127aad86 je 0x127aadc8 */
  if (C.zf) goto L_127aadc8;
  /* 127aad88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aad8b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aad8d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127aad8f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 127aad95 jmp 0x127aada6 */
  goto L_127aada6;
L_127aad97:;
  /* 127aad97 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aad9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aada0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_127aada6:;
  /* 127aada6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aada9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aadab mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127aadae cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aadb4 ja 0x127aadc6 */
  if ((!C.cf&&!C.zf)) goto L_127aadc6;
  /* 127aadb6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aadbc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 127aadc4 jmp 0x127aad97 */
  goto L_127aad97;
L_127aadc6:;
  /* 127aadc6 jmp 0x127aad74 */
  goto L_127aad74;
L_127aadc8:;
  /* 127aadc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aadca mov eax, dword ptr [0x127d1ea4] */
  EAX = (r32((uint32_t)(0x127d1ea4)));
  /* 127aadcf push eax */
  push32((uint32_t)(EAX));
  /* 127aadd0 mov ecx, dword ptr [0x127d1c04] */
  ECX = (r32((uint32_t)(0x127d1c04)));
  /* 127aadd6 push ecx */
  push32((uint32_t)(ECX));
  /* 127aadd7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 127aaddd push edx */
  push32((uint32_t)(EDX));
  /* 127aadde push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127aade3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 127aade9 push eax */
  push32((uint32_t)(EAX));
  /* 127aadea push 1 */
  push32((uint32_t)(0x1u));
  /* 127aadec call 0x127ac9b0 */
  push32(0x127aadf1u); f_127ac9b0();
  /* 127aadf1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aadf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aadf6 mov ecx, dword ptr [0x127d1c04] */
  ECX = (r32((uint32_t)(0x127d1c04)));
  /* 127aadfc push ecx */
  push32((uint32_t)(ECX));
  /* 127aadfd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127aae02 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 127aae08 push edx */
  push32((uint32_t)(EDX));
  /* 127aae09 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127aae0e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 127aae14 push eax */
  push32((uint32_t)(EAX));
  /* 127aae15 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127aae1a mov ecx, dword ptr [0x127d1ea4] */
  ECX = (r32((uint32_t)(0x127d1ea4)));
  /* 127aae20 push ecx */
  push32((uint32_t)(ECX));
  /* 127aae21 call 0x127acb70 */
  push32(0x127aae26u); f_127acb70();
  /* 127aae26 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aae29 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aae2b mov edx, dword ptr [0x127d1c04] */
  EDX = (r32((uint32_t)(0x127d1c04)));
  /* 127aae31 push edx */
  push32((uint32_t)(EDX));
  /* 127aae32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127aae37 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 127aae3d push eax */
  push32((uint32_t)(EAX));
  /* 127aae3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127aae43 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 127aae49 push ecx */
  push32((uint32_t)(ECX));
  /* 127aae4a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 127aae4f mov edx, dword ptr [0x127d1ea4] */
  EDX = (r32((uint32_t)(0x127d1ea4)));
  /* 127aae55 push edx */
  push32((uint32_t)(EDX));
  /* 127aae56 call 0x127acb70 */
  push32(0x127aae5bu); f_127acb70();
  /* 127aae5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aae5e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 127aae68 jmp 0x127aae79 */
  goto L_127aae79;
L_127aae6a:;
  /* 127aae6a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aae70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aae73 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_127aae79:;
  /* 127aae79 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aae83 jae 0x127aaf34 */
  if (!C.cf) goto L_127aaf34;
  /* 127aae89 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aae8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127aae91 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 127aae99 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127aae9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127aae9e je 0x127aaed6 */
  if (C.zf) goto L_127aaed6;
  /* 127aaea0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaea6 mov cl, byte ptr [eax + 0x127d1da1] */
  CL = (r8((uint32_t)(EAX + 0x127d1da1)));
  /* 127aaeac or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 127aaeaf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaeb5 mov byte ptr [edx + 0x127d1da1], cl */
  w8((uint32_t)(EDX + 0x127d1da1), (CL));
  /* 127aaebb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaec1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaec7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 127aaece mov byte ptr [eax + 0x127d1ca0], dl */
  w8((uint32_t)(EAX + 0x127d1ca0), (DL));
  /* 127aaed4 jmp 0x127aaf2f */
  goto L_127aaf2f;
L_127aaed6:;
  /* 127aaed6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaedc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aaede mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 127aaee6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 127aaee9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aaeeb je 0x127aaf22 */
  if (C.zf) goto L_127aaf22;
  /* 127aaeed mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaef3 mov al, byte ptr [edx + 0x127d1da1] */
  AL = (r8((uint32_t)(EDX + 0x127d1da1)));
  /* 127aaef9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 127aaefb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaf01 mov byte ptr [ecx + 0x127d1da1], al */
  w8((uint32_t)(ECX + 0x127d1da1), (AL));
  /* 127aaf07 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaf0d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaf13 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 127aaf1a mov byte ptr [edx + 0x127d1ca0], cl */
  w8((uint32_t)(EDX + 0x127d1ca0), (CL));
  /* 127aaf20 jmp 0x127aaf2f */
  goto L_127aaf2f;
L_127aaf22:;
  /* 127aaf22 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaf28 mov byte ptr [edx + 0x127d1ca0], 0 */
  w8((uint32_t)(EDX + 0x127d1ca0), (0x0u));
L_127aaf2f:;
  /* 127aaf2f jmp 0x127aae6a */
  goto L_127aae6a;
L_127aaf34:;
  /* 127aaf34 jmp 0x127aaffe */
  goto L_127aaffe;
L_127aaf39:;
  /* 127aaf39 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 127aaf43 jmp 0x127aaf54 */
  goto L_127aaf54;
L_127aaf45:;
  /* 127aaf45 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaf4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aaf4e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_127aaf54:;
  /* 127aaf54 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aaf5e jae 0x127aaffe */
  if (!C.cf) goto L_127aaffe;
  /* 127aaf64 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aaf6b jb 0x127aafa8 */
  if (C.cf) goto L_127aafa8;
  /* 127aaf6d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aaf74 ja 0x127aafa8 */
  if ((!C.cf&&!C.zf)) goto L_127aafa8;
  /* 127aaf76 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaf7c mov dl, byte ptr [ecx + 0x127d1da1] */
  DL = (r8((uint32_t)(ECX + 0x127d1da1)));
  /* 127aaf82 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 127aaf85 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaf8b mov byte ptr [eax + 0x127d1da1], dl */
  w8((uint32_t)(EAX + 0x127d1da1), (DL));
  /* 127aaf91 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaf97 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aaf9a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aafa0 mov byte ptr [edx + 0x127d1ca0], cl */
  w8((uint32_t)(EDX + 0x127d1ca0), (CL));
  /* 127aafa6 jmp 0x127aaff9 */
  goto L_127aaff9;
L_127aafa8:;
  /* 127aafa8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aafaf jb 0x127aafec */
  if (C.cf) goto L_127aafec;
  /* 127aafb1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aafb8 ja 0x127aafec */
  if ((!C.cf&&!C.zf)) goto L_127aafec;
  /* 127aafba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aafc0 mov cl, byte ptr [eax + 0x127d1da1] */
  CL = (r8((uint32_t)(EAX + 0x127d1da1)));
  /* 127aafc6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 127aafc9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aafcf mov byte ptr [edx + 0x127d1da1], cl */
  w8((uint32_t)(EDX + 0x127d1da1), (CL));
  /* 127aafd5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aafdb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aafde mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aafe4 mov byte ptr [ecx + 0x127d1ca0], al */
  w8((uint32_t)(ECX + 0x127d1ca0), (AL));
  /* 127aafea jmp 0x127aaff9 */
  goto L_127aaff9;
L_127aafec:;
  /* 127aafec mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 127aaff2 mov byte ptr [edx + 0x127d1ca0], 0 */
  w8((uint32_t)(EDX + 0x127d1ca0), (0x0u));
L_127aaff9:;
  /* 127aaff9 jmp 0x127aaf45 */
  goto L_127aaf45;
L_127aaffe:;
  /* 127aaffe mov esp, ebp */
  ESP = (EBP);
  /* 127ab000 pop ebp */
  EBP = (pop32());
  /* 127ab001 ret  */
  ESPCHK(0x127aad00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b010 @ 0x127ab010 (23 bytes, 9 insns) */
void f_127ab010(void) {
  FTRACE(0x127ab010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ab010 push ebp */
  push32((uint32_t)(EBP));
  /* 127ab011 mov ebp, esp */
  EBP = (ESP);
  /* 127ab013 cmp dword ptr [0x127d1c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d1c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab01a je 0x127ab023 */
  if (C.zf) goto L_127ab023;
  /* 127ab01c mov eax, dword ptr [0x127d1c04] */
  EAX = (r32((uint32_t)(0x127d1c04)));
  /* 127ab021 jmp 0x127ab025 */
  goto L_127ab025;
L_127ab023:;
  /* 127ab023 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127ab025:;
  /* 127ab025 pop ebp */
  EBP = (pop32());
  /* 127ab026 ret  */
  ESPCHK(0x127ab010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b030 @ 0x127ab030 (34 bytes, 10 insns) */
void f_127ab030(void) {
  FTRACE(0x127ab030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ab030 push ebp */
  push32((uint32_t)(EBP));
  /* 127ab031 mov ebp, esp */
  EBP = (ESP);
  /* 127ab033 cmp dword ptr [0x127d2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab03a jne 0x127ab050 */
  if (!C.zf) goto L_127ab050;
  /* 127ab03c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 127ab03e call 0x127aa850 */
  push32(0x127ab043u); f_127aa850();
  /* 127ab043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab046 mov dword ptr [0x127d2050], 1 */
  w32((uint32_t)(0x127d2050), (0x1u));
L_127ab050:;
  /* 127ab050 pop ebp */
  EBP = (pop32());
  /* 127ab051 ret  */
  ESPCHK(0x127ab030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b060 @ 0x127ab060 (664 bytes, 265 insns) [15 switch table(s)] */
void f_127ab060(void) {
  FTRACE(0x127ab060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ab060 push ebp */
  push32((uint32_t)(EBP));
  /* 127ab061 mov ebp, esp */
  EBP = (ESP);
  /* 127ab063 push edi */
  push32((uint32_t)(EDI));
  /* 127ab064 push esi */
  push32((uint32_t)(ESI));
  /* 127ab065 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127ab068 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ab06b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab06e mov eax, ecx */
  EAX = (ECX);
  /* 127ab070 mov edx, ecx */
  EDX = (ECX);
  /* 127ab072 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab074 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab076 jbe 0x127ab080 */
  if ((C.cf||C.zf)) goto L_127ab080;
  /* 127ab078 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab07a jb 0x127ab1f8 */
  if (C.cf) goto L_127ab1f8;
L_127ab080:;
  /* 127ab080 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127ab086 jne 0x127ab09c */
  if (!C.zf) goto L_127ab09c;
  /* 127ab088 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ab08b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127ab08e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab091 jb 0x127ab0bc */
  if (C.cf) goto L_127ab0bc;
  /* 127ab093 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ab095 jmp dword ptr [edx*4 + 0x127ab1a8] */
  switch (EDX) {
    case 0: goto L_127ab1b8;
    case 1: goto L_127ab1c0;
    case 2: goto L_127ab1cc;
    case 3: goto L_127ab1e0;
    default: x86_unimpl("switch@0x127ab095 out of table"); return;
  }
L_127ab09c:;
  /* 127ab09c mov eax, edi */
  EAX = (EDI);
  /* 127ab09e mov edx, 3 */
  EDX = (0x3u);
  /* 127ab0a3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab0a6 jb 0x127ab0b4 */
  if (C.cf) goto L_127ab0b4;
  /* 127ab0a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127ab0ab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab0ad jmp dword ptr [eax*4 + 0x127ab0c0] */
  switch (EAX) {
    case 1: goto L_127ab0d0;
    case 2: goto L_127ab0fc;
    case 3: goto L_127ab120;
    default: x86_unimpl("switch@0x127ab0ad out of table"); return;
  }
L_127ab0b4:;
  /* 127ab0b4 jmp dword ptr [ecx*4 + 0x127ab1b8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x127ab1b8)))); return;
  /* 127ab0bb nop  */
  /* nop */
L_127ab0bc:;
  /* 127ab0bc jmp dword ptr [ecx*4 + 0x127ab13c] */
  switch (ECX) {
    case 0: goto L_127ab19f;
    case 1: goto L_127ab18c;
    case 2: goto L_127ab184;
    case 3: goto L_127ab17c;
    case 4: goto L_127ab174;
    case 5: goto L_127ab16c;
    case 6: goto L_127ab164;
    case 7: goto L_127ab15c;
    default: x86_unimpl("switch@0x127ab0bc out of table"); return;
  }
  /* 127ab0c3 nop  */
  /* nop */
L_127ab0d0:;
  /* 127ab0d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab0d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ab0d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ab0d6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ab0d9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ab0dc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ab0df shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ab0e2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ab0e5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab0e8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab0eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab0ee jb 0x127ab0bc */
  if (C.cf) goto L_127ab0bc;
  /* 127ab0f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ab0f2 jmp dword ptr [edx*4 + 0x127ab1a8] */
  switch (EDX) {
    case 0: goto L_127ab1b8;
    case 1: goto L_127ab1c0;
    case 2: goto L_127ab1cc;
    case 3: goto L_127ab1e0;
    default: x86_unimpl("switch@0x127ab0f2 out of table"); return;
  }
  /* 127ab0f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ab0fc:;
  /* 127ab0fc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab0fe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ab100 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ab102 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ab105 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ab108 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ab10b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab10e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab111 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab114 jb 0x127ab0bc */
  if (C.cf) goto L_127ab0bc;
  /* 127ab116 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ab118 jmp dword ptr [edx*4 + 0x127ab1a8] */
  switch (EDX) {
    case 0: goto L_127ab1b8;
    case 1: goto L_127ab1c0;
    case 2: goto L_127ab1cc;
    case 3: goto L_127ab1e0;
    default: x86_unimpl("switch@0x127ab118 out of table"); return;
  }
  /* 127ab11f nop  */
  /* nop */
L_127ab120:;
  /* 127ab120 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab122 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ab124 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ab126 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127ab127 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ab12a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127ab12b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab12e jb 0x127ab0bc */
  if (C.cf) goto L_127ab0bc;
  /* 127ab130 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ab132 jmp dword ptr [edx*4 + 0x127ab1a8] */
  switch (EDX) {
    case 0: goto L_127ab1b8;
    case 1: goto L_127ab1c0;
    case 2: goto L_127ab1cc;
    case 3: goto L_127ab1e0;
    default: x86_unimpl("switch@0x127ab132 out of table"); return;
  }
  /* 127ab139 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ab15c:;
  /* 127ab15c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 127ab160 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_127ab164:;
  /* 127ab164 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 127ab168 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_127ab16c:;
  /* 127ab16c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 127ab170 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_127ab174:;
  /* 127ab174 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 127ab178 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_127ab17c:;
  /* 127ab17c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 127ab180 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_127ab184:;
  /* 127ab184 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 127ab188 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_127ab18c:;
  /* 127ab18c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 127ab190 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 127ab194 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 127ab19b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab19d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127ab19f:;
  /* 127ab19f jmp dword ptr [edx*4 + 0x127ab1a8] */
  switch (EDX) {
    case 0: goto L_127ab1b8;
    case 1: goto L_127ab1c0;
    case 2: goto L_127ab1cc;
    case 3: goto L_127ab1e0;
    default: x86_unimpl("switch@0x127ab19f out of table"); return;
  }
  /* 127ab1a6 mov edi, edi */
  EDI = (EDI);
L_127ab1b8:;
  /* 127ab1b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab1bb pop esi */
  ESI = (pop32());
  /* 127ab1bc pop edi */
  EDI = (pop32());
  /* 127ab1bd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ab1be ret  */
  ESPCHK(0x127ab060u, _esp0);
  ESP += 4; return;
  /* 127ab1bf nop  */
  /* nop */
L_127ab1c0:;
  /* 127ab1c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ab1c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ab1c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab1c7 pop esi */
  ESI = (pop32());
  /* 127ab1c8 pop edi */
  EDI = (pop32());
  /* 127ab1c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ab1ca ret  */
  ESPCHK(0x127ab060u, _esp0);
  ESP += 4; return;
  /* 127ab1cb nop  */
  /* nop */
L_127ab1cc:;
  /* 127ab1cc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ab1ce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ab1d0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ab1d3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ab1d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab1d9 pop esi */
  ESI = (pop32());
  /* 127ab1da pop edi */
  EDI = (pop32());
  /* 127ab1db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ab1dc ret  */
  ESPCHK(0x127ab060u, _esp0);
  ESP += 4; return;
  /* 127ab1dd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ab1e0:;
  /* 127ab1e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ab1e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ab1e4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ab1e7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ab1ea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ab1ed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ab1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab1f3 pop esi */
  ESI = (pop32());
  /* 127ab1f4 pop edi */
  EDI = (pop32());
  /* 127ab1f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ab1f6 ret  */
  ESPCHK(0x127ab060u, _esp0);
  ESP += 4; return;
  /* 127ab1f7 nop  */
  /* nop */
L_127ab1f8:;
  /* 127ab1f8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 127ab1fc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 127ab200 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127ab206 jne 0x127ab22c */
  if (!C.zf) goto L_127ab22c;
  /* 127ab208 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ab20b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127ab20e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab211 jb 0x127ab220 */
  if (C.cf) goto L_127ab220;
  /* 127ab213 std  */
  C.df=1;
  /* 127ab214 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ab216 cld  */
  C.df=0;
  /* 127ab217 jmp dword ptr [edx*4 + 0x127ab340] */
  switch (EDX) {
    case 0: goto L_127ab350;
    case 1: goto L_127ab358;
    case 2: goto L_127ab368;
    case 3: goto L_127ab37c;
    default: x86_unimpl("switch@0x127ab217 out of table"); return;
  }
  /* 127ab21e mov edi, edi */
  EDI = (EDI);
L_127ab220:;
  /* 127ab220 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127ab222 jmp dword ptr [ecx*4 + 0x127ab2f0] */
  switch (ECX) {
    case 0: goto L_127ab337;
    default: x86_unimpl("switch@0x127ab222 out of table"); return;
  }
  /* 127ab229 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ab22c:;
  /* 127ab22c mov eax, edi */
  EAX = (EDI);
  /* 127ab22e mov edx, 3 */
  EDX = (0x3u);
  /* 127ab233 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab236 jb 0x127ab244 */
  if (C.cf) goto L_127ab244;
  /* 127ab238 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127ab23b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab23d jmp dword ptr [eax*4 + 0x127ab248] */
  switch (EAX) {
    case 1: goto L_127ab258;
    case 2: goto L_127ab278;
    case 3: goto L_127ab2a0;
    default: x86_unimpl("switch@0x127ab23d out of table"); return;
  }
L_127ab244:;
  /* 127ab244 jmp dword ptr [ecx*4 + 0x127ab340] */
  switch (ECX) {
    case 0: goto L_127ab350;
    case 1: goto L_127ab358;
    case 2: goto L_127ab368;
    case 3: goto L_127ab37c;
    default: x86_unimpl("switch@0x127ab244 out of table"); return;
  }
  /* 127ab24b nop  */
  /* nop */
L_127ab258:;
  /* 127ab258 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ab25b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab25d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ab260 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 127ab261 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ab264 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 127ab265 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab268 jb 0x127ab220 */
  if (C.cf) goto L_127ab220;
  /* 127ab26a std  */
  C.df=1;
  /* 127ab26b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ab26d cld  */
  C.df=0;
  /* 127ab26e jmp dword ptr [edx*4 + 0x127ab340] */
  switch (EDX) {
    case 0: goto L_127ab350;
    case 1: goto L_127ab358;
    case 2: goto L_127ab368;
    case 3: goto L_127ab37c;
    default: x86_unimpl("switch@0x127ab26e out of table"); return;
  }
  /* 127ab275 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ab278:;
  /* 127ab278 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ab27b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab27d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ab280 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ab283 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ab286 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ab289 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab28c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab28f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab292 jb 0x127ab220 */
  if (C.cf) goto L_127ab220;
  /* 127ab294 std  */
  C.df=1;
  /* 127ab295 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ab297 cld  */
  C.df=0;
  /* 127ab298 jmp dword ptr [edx*4 + 0x127ab340] */
  switch (EDX) {
    case 0: goto L_127ab350;
    case 1: goto L_127ab358;
    case 2: goto L_127ab368;
    case 3: goto L_127ab37c;
    default: x86_unimpl("switch@0x127ab298 out of table"); return;
  }
  /* 127ab29f nop  */
  /* nop */
L_127ab2a0:;
  /* 127ab2a0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ab2a3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab2a5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ab2a8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ab2ab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ab2ae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ab2b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ab2b4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ab2b7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab2ba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab2bd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab2c0 jb 0x127ab220 */
  if (C.cf) goto L_127ab220;
  /* 127ab2c6 std  */
  C.df=1;
  /* 127ab2c7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ab2c9 cld  */
  C.df=0;
  /* 127ab2ca jmp dword ptr [edx*4 + 0x127ab340] */
  switch (EDX) {
    case 0: goto L_127ab350;
    case 1: goto L_127ab358;
    case 2: goto L_127ab368;
    case 3: goto L_127ab37c;
    default: x86_unimpl("switch@0x127ab2ca out of table"); return;
  }
  /* 127ab2d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 127ab2d4 hlt  */
  x86_unimpl("hlt @ 0x127ab2d4");
  /* 127ab2d5 mov dl, 0x7a */
  DL = (0x7au);
  /* 127ab2d7 adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 127ab2d9 mov dl, 0x7a */
  DL = (0x7au);
  /* 127ab2db adc al, byte ptr [ebx + esi*4] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBX + ESI*4))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ab2de jp 0x127ab2f2 */
  if (C.pf) goto L_127ab2f2;
  /* 127ab2e0 or al, 0xb3 */
  { uint32_t _r=(AL)|(0xb3u); AL = (_r); fl_logic(_r,8); }
  /* 127ab2e2 jp 0x127ab2f6 */
  if (C.pf) goto L_127ab2f6;
  /* 127ab2e4 adc al, 0xb3 */
  { uint32_t _a=(AL),_b=(0xb3u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ab2e6 jp 0x127ab2fa */
  if (C.pf) goto L_127ab2fa;
  /* 127ab2e8 sbb al, 0xb3 */
  { uint32_t _a=(AL),_b=(0xb3u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127ab2ea jp 0x127ab2fe */
  if (C.pf) goto L_127ab2fe;
  /* 127ab2ec and al, 0xb3 */
  { uint32_t _r=(AL)&(0xb3u); AL = (_r); fl_logic(_r,8); }
  /* 127ab2ee jp 0x127ab302 */
  if (C.pf) goto L_127ab302;
  /* 127ab2f4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 127ab2f8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 127ab2fc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 127ab300 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 127ab304 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 127ab308 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 127ab30c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 127ab310 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 127ab314 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 127ab318 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 127ab31c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 127ab320 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 127ab324 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 127ab328 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 127ab32c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 127ab333 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab335 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127ab337:;
  /* 127ab337 jmp dword ptr [edx*4 + 0x127ab340] */
  switch (EDX) {
    case 0: goto L_127ab350;
    case 1: goto L_127ab358;
    case 2: goto L_127ab368;
    case 3: goto L_127ab37c;
    default: x86_unimpl("switch@0x127ab337 out of table"); return;
  }
  /* 127ab33e mov edi, edi */
  EDI = (EDI);
L_127ab350:;
  /* 127ab350 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab353 pop esi */
  ESI = (pop32());
  /* 127ab354 pop edi */
  EDI = (pop32());
  /* 127ab355 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ab356 ret  */
  ESPCHK(0x127ab060u, _esp0);
  ESP += 4; return;
  /* 127ab357 nop  */
  /* nop */
L_127ab358:;
  /* 127ab358 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ab35b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ab35e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab361 pop esi */
  ESI = (pop32());
  /* 127ab362 pop edi */
  EDI = (pop32());
  /* 127ab363 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ab364 ret  */
  ESPCHK(0x127ab060u, _esp0);
  ESP += 4; return;
  /* 127ab365 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ab368:;
  /* 127ab368 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ab36b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ab36e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ab371 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ab374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab377 pop esi */
  ESI = (pop32());
  /* 127ab378 pop edi */
  EDI = (pop32());
  /* 127ab379 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ab37a ret  */
  ESPCHK(0x127ab060u, _esp0);
  ESP += 4; return;
  /* 127ab37b nop  */
  /* nop */
L_127ab37c:;
  /* 127ab37c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ab37f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ab382 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ab385 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ab388 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ab38b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ab38e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab391 pop esi */
  ESI = (pop32());
  /* 127ab392 pop edi */
  EDI = (pop32());
  /* 127ab393 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ab394 ret  */
  ESPCHK(0x127ab060u, _esp0);
  ESP += 4; return;
L_127ab2f2: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ab2f2 (unresolved jump table)"); return;
L_127ab2f6: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ab2f6 (unresolved jump table)"); return;
L_127ab2fa: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ab2fa (unresolved jump table)"); return;
L_127ab2fe: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ab2fe (unresolved jump table)"); return;
L_127ab302: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ab302 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x127ab3a0 (104 bytes, 43 insns) */
void f_127ab3a0(void) {
  FTRACE(0x127ab3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ab3a0 push ebx */
  push32((uint32_t)(EBX));
  /* 127ab3a1 push esi */
  push32((uint32_t)(ESI));
  /* 127ab3a2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 127ab3a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ab3a8 jne 0x127ab3c2 */
  if (!C.zf) goto L_127ab3c2;
  /* 127ab3aa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 127ab3ae mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 127ab3b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab3b4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127ab3b6 mov ebx, eax */
  EBX = (EAX);
  /* 127ab3b8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 127ab3bc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127ab3be mov edx, ebx */
  EDX = (EBX);
  /* 127ab3c0 jmp 0x127ab403 */
  goto L_127ab403;
L_127ab3c2:;
  /* 127ab3c2 mov ecx, eax */
  ECX = (EAX);
  /* 127ab3c4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 127ab3c8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 127ab3cc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_127ab3d0:;
  /* 127ab3d0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127ab3d2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 127ab3d4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127ab3d6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 127ab3d8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127ab3da jne 0x127ab3d0 */
  if (!C.zf) goto L_127ab3d0;
  /* 127ab3dc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127ab3de mov esi, eax */
  ESI = (EAX);
  /* 127ab3e0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127ab3e4 mov ecx, eax */
  ECX = (EAX);
  /* 127ab3e6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 127ab3ea mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127ab3ec add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab3ee jb 0x127ab3fe */
  if (C.cf) goto L_127ab3fe;
  /* 127ab3f0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab3f4 ja 0x127ab3fe */
  if ((!C.cf&&!C.zf)) goto L_127ab3fe;
  /* 127ab3f6 jb 0x127ab3ff */
  if (C.cf) goto L_127ab3ff;
  /* 127ab3f8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab3fc jbe 0x127ab3ff */
  if ((C.cf||C.zf)) goto L_127ab3ff;
L_127ab3fe:;
  /* 127ab3fe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_127ab3ff:;
  /* 127ab3ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab401 mov eax, esi */
  EAX = (ESI);
L_127ab403:;
  /* 127ab403 pop esi */
  ESI = (pop32());
  /* 127ab404 pop ebx */
  EBX = (pop32());
  /* 127ab405 ret 0x10 */
  ESPCHK(0x127ab3a0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x127ab410 (117 bytes, 44 insns) */
void f_127ab410(void) {
  FTRACE(0x127ab410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ab410 push ebx */
  push32((uint32_t)(EBX));
  /* 127ab411 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 127ab415 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ab417 jne 0x127ab431 */
  if (!C.zf) goto L_127ab431;
  /* 127ab419 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 127ab41d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 127ab421 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab423 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127ab425 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127ab429 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127ab42b mov eax, edx */
  EAX = (EDX);
  /* 127ab42d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127ab42f jmp 0x127ab481 */
  goto L_127ab481;
L_127ab431:;
  /* 127ab431 mov ecx, eax */
  ECX = (EAX);
  /* 127ab433 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 127ab437 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 127ab43b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_127ab43f:;
  /* 127ab43f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 127ab441 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 127ab443 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127ab445 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 127ab447 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127ab449 jne 0x127ab43f */
  if (!C.zf) goto L_127ab43f;
  /* 127ab44b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127ab44d mov ecx, eax */
  ECX = (EAX);
  /* 127ab44f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127ab453 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 127ab454 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 127ab458 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab45a jb 0x127ab46a */
  if (C.cf) goto L_127ab46a;
  /* 127ab45c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab460 ja 0x127ab46a */
  if ((!C.cf&&!C.zf)) goto L_127ab46a;
  /* 127ab462 jb 0x127ab472 */
  if (C.cf) goto L_127ab472;
  /* 127ab464 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab468 jbe 0x127ab472 */
  if ((C.cf||C.zf)) goto L_127ab472;
L_127ab46a:;
  /* 127ab46a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab46e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_127ab472:;
  /* 127ab472 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab476 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab47a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127ab47c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127ab47e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_127ab481:;
  /* 127ab481 pop ebx */
  EBX = (pop32());
  /* 127ab482 ret 0x10 */
  ESPCHK(0x127ab410u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b490 @ 0x127ab490 (628 bytes, 214 insns) */
void f_127ab490(void) {
  FTRACE(0x127ab490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ab490 push ebp */
  push32((uint32_t)(EBP));
  /* 127ab491 mov ebp, esp */
  EBP = (ESP);
  /* 127ab493 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab496 push ebx */
  push32((uint32_t)(EBX));
  /* 127ab497 push esi */
  push32((uint32_t)(ESI));
  /* 127ab498 push edi */
  push32((uint32_t)(EDI));
L_127ab499:;
  /* 127ab499 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab49d jne 0x127ab4bd */
  if (!C.zf) goto L_127ab4bd;
  /* 127ab49f push 0x127cbf40 */
  push32((uint32_t)(0x127cbf40u));
  /* 127ab4a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ab4a6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 127ab4a8 push 0x127cbf34 */
  push32((uint32_t)(0x127cbf34u));
  /* 127ab4ad push 2 */
  push32((uint32_t)(0x2u));
  /* 127ab4af call 0x127a3840 */
  push32(0x127ab4b4u); f_127a3840();
  /* 127ab4b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab4b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab4ba jne 0x127ab4bd */
  if (!C.zf) goto L_127ab4bd;
  /* 127ab4bc int3  */
  x86_unimpl("int3 @ 0x127ab4bc");
L_127ab4bd:;
  /* 127ab4bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ab4bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ab4c1 jne 0x127ab499 */
  if (!C.zf) goto L_127ab499;
  /* 127ab4c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ab4c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127ab4c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab4cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127ab4cf mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127ab4d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab4d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ab4d8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 127ab4de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ab4e0 je 0x127ab4ef */
  if (C.zf) goto L_127ab4ef;
  /* 127ab4e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab4e5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ab4e8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 127ab4eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ab4ed je 0x127ab505 */
  if (C.zf) goto L_127ab505;
L_127ab4ef:;
  /* 127ab4ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab4f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127ab4f5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 127ab4f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab4fa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 127ab4fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ab500 jmp 0x127ab6fd */
  goto L_127ab6fd;
L_127ab505:;
  /* 127ab505 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab508 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127ab50b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 127ab50e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ab510 je 0x127ab55c */
  if (C.zf) goto L_127ab55c;
  /* 127ab512 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab515 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127ab51c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab51f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127ab522 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 127ab525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ab527 je 0x127ab545 */
  if (C.zf) goto L_127ab545;
  /* 127ab529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab52c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab52f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127ab532 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127ab534 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab537 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ab53a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 127ab53d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab540 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127ab543 jmp 0x127ab55c */
  goto L_127ab55c;
L_127ab545:;
  /* 127ab545 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab548 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ab54b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 127ab54e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab551 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127ab554 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ab557 jmp 0x127ab6fd */
  goto L_127ab6fd;
L_127ab55c:;
  /* 127ab55c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab55f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ab562 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 127ab565 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab568 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127ab56b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab56e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ab571 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 127ab574 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab577 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127ab57a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab57d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127ab584 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ab58b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab58e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127ab591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab594 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ab597 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 127ab59d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ab59f jne 0x127ab5cf */
  if (!C.zf) goto L_127ab5cf;
  /* 127ab5a1 cmp dword ptr [ebp - 8], 0x127cf140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x127cf140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab5a8 je 0x127ab5b3 */
  if (C.zf) goto L_127ab5b3;
  /* 127ab5aa cmp dword ptr [ebp - 8], 0x127cf160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x127cf160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab5b1 jne 0x127ab5c3 */
  if (!C.zf) goto L_127ab5c3;
L_127ab5b3:;
  /* 127ab5b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ab5b6 push edx */
  push32((uint32_t)(EDX));
  /* 127ab5b7 call 0x127ad400 */
  push32(0x127ab5bcu); f_127ad400();
  /* 127ab5bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab5bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ab5c1 jne 0x127ab5cf */
  if (!C.zf) goto L_127ab5cf;
L_127ab5c3:;
  /* 127ab5c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab5c6 push eax */
  push32((uint32_t)(EAX));
  /* 127ab5c7 call 0x127ad330 */
  push32(0x127ab5ccu); f_127ad330();
  /* 127ab5cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ab5cf:;
  /* 127ab5cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab5d2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ab5d5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 127ab5db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ab5dd je 0x127ab6bb */
  if (C.zf) goto L_127ab6bb;
L_127ab5e3:;
  /* 127ab5e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab5e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab5e9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 127ab5eb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab5ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ab5f0 jge 0x127ab613 */
  if ((C.sf==C.of)) goto L_127ab613;
  /* 127ab5f2 push 0x127cbef4 */
  push32((uint32_t)(0x127cbef4u));
  /* 127ab5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ab5f9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 127ab5fe push 0x127cbf34 */
  push32((uint32_t)(0x127cbf34u));
  /* 127ab603 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ab605 call 0x127a3840 */
  push32(0x127ab60au); f_127a3840();
  /* 127ab60a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab60d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab610 jne 0x127ab613 */
  if (!C.zf) goto L_127ab613;
  /* 127ab612 int3  */
  x86_unimpl("int3 @ 0x127ab612");
L_127ab613:;
  /* 127ab613 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ab615 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ab617 jne 0x127ab5e3 */
  if (!C.zf) goto L_127ab5e3;
  /* 127ab619 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab61c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab61f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 127ab621 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab624 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ab627 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab62a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127ab62d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab630 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab633 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127ab635 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab638 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127ab63b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab63e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab641 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127ab644 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab648 jle 0x127ab666 */
  if ((C.zf||C.sf!=C.of)) goto L_127ab666;
  /* 127ab64a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab64d push ecx */
  push32((uint32_t)(ECX));
  /* 127ab64e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab651 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127ab654 push eax */
  push32((uint32_t)(EAX));
  /* 127ab655 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ab658 push ecx */
  push32((uint32_t)(ECX));
  /* 127ab659 call 0x127ad020 */
  push32(0x127ab65eu); f_127ad020();
  /* 127ab65e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab661 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127ab664 jmp 0x127ab6ae */
  goto L_127ab6ae;
L_127ab666:;
  /* 127ab666 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab66a je 0x127ab689 */
  if (C.zf) goto L_127ab689;
  /* 127ab66c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ab66f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127ab672 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ab675 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127ab678 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ab67b mov ecx, dword ptr [edx*4 + 0x127d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127ab682 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab684 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127ab687 jmp 0x127ab690 */
  goto L_127ab690;
L_127ab689:;
  /* 127ab689 mov dword ptr [ebp - 0x14], 0x127cea60 */
  w32((uint32_t)(EBP + -0x14), (0x127cea60u));
L_127ab690:;
  /* 127ab690 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127ab693 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 127ab697 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 127ab69a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ab69c je 0x127ab6ae */
  if (C.zf) goto L_127ab6ae;
  /* 127ab69e push 2 */
  push32((uint32_t)(0x2u));
  /* 127ab6a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ab6a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ab6a5 push ecx */
  push32((uint32_t)(ECX));
  /* 127ab6a6 call 0x127aced0 */
  push32(0x127ab6abu); f_127aced0();
  /* 127ab6ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ab6ae:;
  /* 127ab6ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab6b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127ab6b4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 127ab6b7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 127ab6b9 jmp 0x127ab6d9 */
  goto L_127ab6d9;
L_127ab6bb:;
  /* 127ab6bb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127ab6c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab6c5 push edx */
  push32((uint32_t)(EDX));
  /* 127ab6c6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 127ab6c9 push eax */
  push32((uint32_t)(EAX));
  /* 127ab6ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ab6cd push ecx */
  push32((uint32_t)(ECX));
  /* 127ab6ce call 0x127ad020 */
  push32(0x127ab6d3u); f_127ad020();
  /* 127ab6d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab6d6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127ab6d9:;
  /* 127ab6d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ab6dc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab6df je 0x127ab6f5 */
  if (C.zf) goto L_127ab6f5;
  /* 127ab6e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab6e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ab6e7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 127ab6ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab6ed mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 127ab6f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ab6f3 jmp 0x127ab6fd */
  goto L_127ab6fd;
L_127ab6f5:;
  /* 127ab6f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab6f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_127ab6fd:;
  /* 127ab6fd pop edi */
  EDI = (pop32());
  /* 127ab6fe pop esi */
  ESI = (pop32());
  /* 127ab6ff pop ebx */
  EBX = (pop32());
  /* 127ab700 mov esp, ebp */
  ESP = (EBP);
  /* 127ab702 pop ebp */
  EBP = (pop32());
  /* 127ab703 ret  */
  ESPCHK(0x127ab490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b710 @ 0x127ab710 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_127ab710(void) {
  FTRACE(0x127ab710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ab710 push ebp */
  push32((uint32_t)(EBP));
  /* 127ab711 mov ebp, esp */
  EBP = (ESP);
  /* 127ab713 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab719 push ebx */
  push32((uint32_t)(EBX));
  /* 127ab71a push esi */
  push32((uint32_t)(ESI));
  /* 127ab71b push edi */
  push32((uint32_t)(EDI));
  /* 127ab71c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127ab723 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 127ab72d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_127ab734:;
  /* 127ab734 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ab737 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127ab739 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 127ab73c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab740 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ab743 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab746 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 127ab749 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ab74b je 0x127ac327 */
  if (C.zf) goto L_127ac327;
  /* 127ab751 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab758 jl 0x127ac327 */
  if ((C.sf!=C.of)) goto L_127ac327;
  /* 127ab75e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab762 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab765 jl 0x127ab786 */
  if ((C.sf!=C.of)) goto L_127ab786;
  /* 127ab767 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab76b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab76e jg 0x127ab786 */
  if ((!C.zf&&C.sf==C.of)) goto L_127ab786;
  /* 127ab770 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab774 movsx ecx, byte ptr [eax + 0x127cbf2c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x127cbf2c))));
  /* 127ab77b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 127ab77e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 127ab784 jmp 0x127ab790 */
  goto L_127ab790;
L_127ab786:;
  /* 127ab786 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_127ab790:;
  /* 127ab790 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 127ab796 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127ab799 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ab79c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ab79f movsx edx, byte ptr [ecx + eax*8 + 0x127cbf4c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x127cbf4c))));
  /* 127ab7a7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 127ab7aa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127ab7ad mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ab7b0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 127ab7b6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab7bd ja 0x127ac322 */
  if ((!C.cf&&!C.zf)) goto L_127ac322;
  /* 127ab7c3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 127ab7c9 jmp dword ptr [ecx*4 + 0x127ac334] */
  switch (ECX) {
    case 0: goto L_127ab7d0;
    case 1: goto L_127ab86a;
    case 2: goto L_127ab8ac;
    case 3: goto L_127ab91b;
    case 4: goto L_127ab973;
    case 5: goto L_127ab982;
    case 6: goto L_127ab9ce;
    case 7: goto L_127aba61;
    case 8: goto L_127ab8f8;
    case 9: goto L_127ab903;
    case 10: goto L_127ab8ee;
    case 11: goto L_127ab8e3;
    case 12: goto L_127ab90e;
    case 13: goto L_127ab916;
    default: x86_unimpl("switch@0x127ab7c9 out of table"); return;
  }
L_127ab7d0:;
  /* 127ab7d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 127ab7d7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ab7da and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127ab7e0 mov eax, dword ptr [0x127cec98] */
  EAX = (r32((uint32_t)(0x127cec98)));
  /* 127ab7e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127ab7e7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 127ab7eb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 127ab7f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ab7f3 je 0x127ab84d */
  if (C.zf) goto L_127ab84d;
  /* 127ab7f5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 127ab7fb push edx */
  push32((uint32_t)(EDX));
  /* 127ab7fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab7ff push eax */
  push32((uint32_t)(EAX));
  /* 127ab800 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab804 push ecx */
  push32((uint32_t)(ECX));
  /* 127ab805 call 0x127ac440 */
  push32(0x127ab80au); f_127ac440();
  /* 127ab80a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab80d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ab810 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127ab812 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 127ab815 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ab818 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab81b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_127ab81e:;
  /* 127ab81e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab822 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ab824 jne 0x127ab847 */
  if (!C.zf) goto L_127ab847;
  /* 127ab826 push 0x127cbfcc */
  push32((uint32_t)(0x127cbfccu));
  /* 127ab82b push 0 */
  push32((uint32_t)(0x0u));
  /* 127ab82d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 127ab832 push 0x127cbfc0 */
  push32((uint32_t)(0x127cbfc0u));
  /* 127ab837 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ab839 call 0x127a3840 */
  push32(0x127ab83eu); f_127a3840();
  /* 127ab83e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab841 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab844 jne 0x127ab847 */
  if (!C.zf) goto L_127ab847;
  /* 127ab846 int3  */
  x86_unimpl("int3 @ 0x127ab846");
L_127ab847:;
  /* 127ab847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ab849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ab84b jne 0x127ab81e */
  if (!C.zf) goto L_127ab81e;
L_127ab84d:;
  /* 127ab84d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 127ab853 push ecx */
  push32((uint32_t)(ECX));
  /* 127ab854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ab857 push edx */
  push32((uint32_t)(EDX));
  /* 127ab858 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab85c push eax */
  push32((uint32_t)(EAX));
  /* 127ab85d call 0x127ac440 */
  push32(0x127ab862u); f_127ac440();
  /* 127ab862 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab865 jmp 0x127ac322 */
  goto L_127ac322;
L_127ab86a:;
  /* 127ab86a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127ab871 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ab874 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 127ab87a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 127ab880 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 127ab886 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 127ab88c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127ab88f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ab896 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 127ab8a0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 127ab8a7 jmp 0x127ac322 */
  goto L_127ac322;
L_127ab8ac:;
  /* 127ab8ac movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab8b0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 127ab8b6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 127ab8bc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab8bf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 127ab8c5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab8cc ja 0x127ab916 */
  if ((!C.cf&&!C.zf)) goto L_127ab916;
  /* 127ab8ce mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 127ab8d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ab8d6 mov al, byte ptr [ecx + 0x127ac36c] */
  AL = (r8((uint32_t)(ECX + 0x127ac36c)));
  /* 127ab8dc jmp dword ptr [eax*4 + 0x127ac354] */
  switch (EAX) {
    case 0: goto L_127ab8f8;
    case 1: goto L_127ab903;
    case 2: goto L_127ab8ee;
    case 3: goto L_127ab8e3;
    case 4: goto L_127ab90e;
    case 5: goto L_127ab916;
    default: x86_unimpl("switch@0x127ab8dc out of table"); return;
  }
L_127ab8e3:;
  /* 127ab8e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab8e6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127ab8e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127ab8ec jmp 0x127ab916 */
  goto L_127ab916;
L_127ab8ee:;
  /* 127ab8ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab8f1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 127ab8f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ab8f6 jmp 0x127ab916 */
  goto L_127ab916;
L_127ab8f8:;
  /* 127ab8f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab8fb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 127ab8fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127ab901 jmp 0x127ab916 */
  goto L_127ab916;
L_127ab903:;
  /* 127ab903 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab906 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 127ab909 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127ab90c jmp 0x127ab916 */
  goto L_127ab916;
L_127ab90e:;
  /* 127ab90e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab911 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 127ab913 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127ab916:;
  /* 127ab916 jmp 0x127ac322 */
  goto L_127ac322;
L_127ab91b:;
  /* 127ab91b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab91f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab922 jne 0x127ab957 */
  if (!C.zf) goto L_127ab957;
  /* 127ab924 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127ab927 push edx */
  push32((uint32_t)(EDX));
  /* 127ab928 call 0x127ac550 */
  push32(0x127ab92du); f_127ac550();
  /* 127ab92d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab930 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 127ab936 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab93d jge 0x127ab955 */
  if ((C.sf==C.of)) goto L_127ab955;
  /* 127ab93f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ab942 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 127ab944 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ab947 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 127ab94d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127ab94f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_127ab955:;
  /* 127ab955 jmp 0x127ab96e */
  goto L_127ab96e;
L_127ab957:;
  /* 127ab957 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 127ab95d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ab960 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab964 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 127ab968 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_127ab96e:;
  /* 127ab96e jmp 0x127ac322 */
  goto L_127ac322;
L_127ab973:;
  /* 127ab973 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 127ab97d jmp 0x127ac322 */
  goto L_127ac322;
L_127ab982:;
  /* 127ab982 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab986 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab989 jne 0x127ab9b2 */
  if (!C.zf) goto L_127ab9b2;
  /* 127ab98b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127ab98e push eax */
  push32((uint32_t)(EAX));
  /* 127ab98f call 0x127ac550 */
  push32(0x127ab994u); f_127ac550();
  /* 127ab994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ab997 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 127ab99d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab9a4 jge 0x127ab9b0 */
  if ((C.sf==C.of)) goto L_127ab9b0;
  /* 127ab9a6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_127ab9b0:;
  /* 127ab9b0 jmp 0x127ab9c9 */
  goto L_127ab9c9;
L_127ab9b2:;
  /* 127ab9b2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 127ab9b8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ab9bb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab9bf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 127ab9c3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_127ab9c9:;
  /* 127ab9c9 jmp 0x127ac322 */
  goto L_127ac322;
L_127ab9ce:;
  /* 127ab9ce movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127ab9d2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 127ab9d8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 127ab9de sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ab9e1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 127ab9e7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ab9ee ja 0x127aba5c */
  if ((!C.cf&&!C.zf)) goto L_127aba5c;
  /* 127ab9f0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 127ab9f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ab9f8 mov al, byte ptr [ecx + 0x127ac391] */
  AL = (r8((uint32_t)(ECX + 0x127ac391)));
  /* 127ab9fe jmp dword ptr [eax*4 + 0x127ac37d] */
  switch (EAX) {
    case 0: goto L_127aba10;
    case 1: goto L_127aba49;
    case 2: goto L_127aba05;
    case 3: goto L_127aba53;
    case 4: goto L_127aba5c;
    default: x86_unimpl("switch@0x127ab9fe out of table"); return;
  }
L_127aba05:;
  /* 127aba05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aba08 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 127aba0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127aba0e jmp 0x127aba5c */
  goto L_127aba5c;
L_127aba10:;
  /* 127aba10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aba13 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127aba16 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aba19 jne 0x127aba3b */
  if (!C.zf) goto L_127aba3b;
  /* 127aba1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aba1e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127aba22 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aba25 jne 0x127aba3b */
  if (!C.zf) goto L_127aba3b;
  /* 127aba27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aba2a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aba2d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127aba30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aba33 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127aba36 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127aba39 jmp 0x127aba47 */
  goto L_127aba47;
L_127aba3b:;
  /* 127aba3b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 127aba42 jmp 0x127ab7d0 */
  goto L_127ab7d0;
L_127aba47:;
  /* 127aba47 jmp 0x127aba5c */
  goto L_127aba5c;
L_127aba49:;
  /* 127aba49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aba4c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 127aba4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aba51 jmp 0x127aba5c */
  goto L_127aba5c;
L_127aba53:;
  /* 127aba53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aba56 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127aba59 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127aba5c:;
  /* 127aba5c jmp 0x127ac322 */
  goto L_127ac322;
L_127aba61:;
  /* 127aba61 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127aba65 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 127aba6b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 127aba71 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aba74 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 127aba7a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aba81 ja 0x127ac147 */
  if ((!C.cf&&!C.zf)) goto L_127ac147;
  /* 127aba87 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 127aba8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aba8f mov cl, byte ptr [edx + 0x127ac3fc] */
  CL = (r8((uint32_t)(EDX + 0x127ac3fc)));
  /* 127aba95 jmp dword ptr [ecx*4 + 0x127ac3c0] */
  switch (ECX) {
    case 0: goto L_127aba9c;
    case 1: goto L_127abd30;
    case 2: goto L_127abbc0;
    case 3: goto L_127abe69;
    case 4: goto L_127abb2b;
    case 5: goto L_127abab1;
    case 6: goto L_127abe3b;
    case 7: goto L_127abd40;
    case 8: goto L_127abce5;
    case 9: goto L_127abeb5;
    case 10: goto L_127abe5f;
    case 11: goto L_127abbd6;
    case 12: goto L_127abe53;
    case 13: goto L_127abe75;
    case 14: goto L_127ac147;
    default: x86_unimpl("switch@0x127aba95 out of table"); return;
  }
L_127aba9c:;
  /* 127aba9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aba9f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 127abaa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abaa6 jne 0x127abab1 */
  if (!C.zf) goto L_127abab1;
  /* 127abaa8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abaab or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127abaae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127abab1:;
  /* 127abab1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abab4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 127ababa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ababc je 0x127abaf7 */
  if (C.zf) goto L_127abaf7;
  /* 127ababe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127abac1 push eax */
  push32((uint32_t)(EAX));
  /* 127abac2 call 0x127ac590 */
  push32(0x127abac7u); f_127ac590();
  /* 127abac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abaca mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 127abace mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 127abad2 push ecx */
  push32((uint32_t)(ECX));
  /* 127abad3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 127abad9 push edx */
  push32((uint32_t)(EDX));
  /* 127abada call 0x127ad670 */
  push32(0x127abadfu); f_127ad670();
  /* 127abadf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abae2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127abae5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abae9 jge 0x127abaf5 */
  if ((C.sf==C.of)) goto L_127abaf5;
  /* 127abaeb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_127abaf5:;
  /* 127abaf5 jmp 0x127abb1d */
  goto L_127abb1d;
L_127abaf7:;
  /* 127abaf7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127abafa push eax */
  push32((uint32_t)(EAX));
  /* 127abafb call 0x127ac550 */
  push32(0x127abb00u); f_127ac550();
  /* 127abb00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abb03 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 127abb0a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 127abb10 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 127abb16 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_127abb1d:;
  /* 127abb1d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 127abb23 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127abb26 jmp 0x127ac147 */
  goto L_127ac147;
L_127abb2b:;
  /* 127abb2b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127abb2e push eax */
  push32((uint32_t)(EAX));
  /* 127abb2f call 0x127ac550 */
  push32(0x127abb34u); f_127ac550();
  /* 127abb34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abb37 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 127abb3d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abb44 je 0x127abb52 */
  if (C.zf) goto L_127abb52;
  /* 127abb46 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127abb4c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abb50 jne 0x127abb6c */
  if (!C.zf) goto L_127abb6c;
L_127abb52:;
  /* 127abb52 mov edx, dword ptr [0x127cefb0] */
  EDX = (r32((uint32_t)(0x127cefb0)));
  /* 127abb58 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127abb5b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abb5e push eax */
  push32((uint32_t)(EAX));
  /* 127abb5f call 0x127a75b0 */
  push32(0x127abb64u); f_127a75b0();
  /* 127abb64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abb67 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127abb6a jmp 0x127abbbb */
  goto L_127abbbb;
L_127abb6c:;
  /* 127abb6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abb6f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 127abb75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127abb77 je 0x127abb9c */
  if (C.zf) goto L_127abb9c;
  /* 127abb79 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127abb7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 127abb82 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127abb85 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127abb8b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 127abb8e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127abb90 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127abb93 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 127abb9a jmp 0x127abbbb */
  goto L_127abbbb;
L_127abb9c:;
  /* 127abb9c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 127abba3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127abba9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127abbac mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127abbaf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 127abbb5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 127abbb8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_127abbbb:;
  /* 127abbbb jmp 0x127ac147 */
  goto L_127ac147;
L_127abbc0:;
  /* 127abbc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abbc3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 127abbc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127abbcb jne 0x127abbd6 */
  if (!C.zf) goto L_127abbd6;
  /* 127abbcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abbd0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127abbd3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127abbd6:;
  /* 127abbd6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abbdd jne 0x127abbeb */
  if (!C.zf) goto L_127abbeb;
  /* 127abbdf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 127abbe9 jmp 0x127abbf7 */
  goto L_127abbf7;
L_127abbeb:;
  /* 127abbeb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 127abbf1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_127abbf7:;
  /* 127abbf7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 127abbfd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 127abc03 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127abc06 push edx */
  push32((uint32_t)(EDX));
  /* 127abc07 call 0x127ac550 */
  push32(0x127abc0cu); f_127ac550();
  /* 127abc0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abc0f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127abc12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abc15 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 127abc1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abc1c je 0x127abc86 */
  if (C.zf) goto L_127abc86;
  /* 127abc1e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abc22 jne 0x127abc2d */
  if (!C.zf) goto L_127abc2d;
  /* 127abc24 mov ecx, dword ptr [0x127cefb4] */
  ECX = (r32((uint32_t)(0x127cefb4)));
  /* 127abc2a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127abc2d:;
  /* 127abc2d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 127abc34 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abc37 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_127abc3d:;
  /* 127abc3d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 127abc43 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 127abc49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127abc4c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 127abc52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abc54 je 0x127abc76 */
  if (C.zf) goto L_127abc76;
  /* 127abc56 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 127abc5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127abc5e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 127abc61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abc63 je 0x127abc76 */
  if (C.zf) goto L_127abc76;
  /* 127abc65 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 127abc6b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127abc6e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 127abc74 jmp 0x127abc3d */
  goto L_127abc3d;
L_127abc76:;
  /* 127abc76 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 127abc7c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127abc7f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127abc81 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 127abc84 jmp 0x127abce0 */
  goto L_127abce0;
L_127abc86:;
  /* 127abc86 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abc8a jne 0x127abc94 */
  if (!C.zf) goto L_127abc94;
  /* 127abc8c mov eax, dword ptr [0x127cefb0] */
  EAX = (r32((uint32_t)(0x127cefb0)));
  /* 127abc91 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_127abc94:;
  /* 127abc94 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abc97 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_127abc9d:;
  /* 127abc9d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 127abca3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 127abca9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127abcac mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 127abcb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127abcb4 je 0x127abcd4 */
  if (C.zf) goto L_127abcd4;
  /* 127abcb6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 127abcbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127abcbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127abcc1 je 0x127abcd4 */
  if (C.zf) goto L_127abcd4;
  /* 127abcc3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 127abcc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127abccc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 127abcd2 jmp 0x127abc9d */
  goto L_127abc9d;
L_127abcd4:;
  /* 127abcd4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 127abcda sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127abcdd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_127abce0:;
  /* 127abce0 jmp 0x127ac147 */
  goto L_127ac147;
L_127abce5:;
  /* 127abce5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127abce8 push edx */
  push32((uint32_t)(EDX));
  /* 127abce9 call 0x127ac550 */
  push32(0x127abceeu); f_127ac550();
  /* 127abcee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abcf1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 127abcf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abcfa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 127abcfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abcff je 0x127abd13 */
  if (C.zf) goto L_127abd13;
  /* 127abd01 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 127abd07 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 127abd0e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 127abd11 jmp 0x127abd21 */
  goto L_127abd21;
L_127abd13:;
  /* 127abd13 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 127abd19 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 127abd1f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_127abd21:;
  /* 127abd21 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 127abd2b jmp 0x127ac147 */
  goto L_127ac147;
L_127abd30:;
  /* 127abd30 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127abd37 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 127abd3a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 127abd3d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_127abd40:;
  /* 127abd40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abd43 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 127abd45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127abd48 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 127abd4e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127abd51 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abd58 jge 0x127abd66 */
  if ((C.sf==C.of)) goto L_127abd66;
  /* 127abd5a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 127abd64 jmp 0x127abd82 */
  goto L_127abd82;
L_127abd66:;
  /* 127abd66 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abd6d jne 0x127abd82 */
  if (!C.zf) goto L_127abd82;
  /* 127abd6f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127abd73 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abd76 jne 0x127abd82 */
  if (!C.zf) goto L_127abd82;
  /* 127abd78 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_127abd82:;
  /* 127abd82 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127abd85 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127abd88 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 127abd8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127abd8e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127abd91 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127abd93 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 127abd96 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 127abd9c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 127abda2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127abda5 push ecx */
  push32((uint32_t)(ECX));
  /* 127abda6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 127abdac push edx */
  push32((uint32_t)(EDX));
  /* 127abdad movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127abdb1 push eax */
  push32((uint32_t)(EAX));
  /* 127abdb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abdb5 push ecx */
  push32((uint32_t)(ECX));
  /* 127abdb6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 127abdbc push edx */
  push32((uint32_t)(EDX));
  /* 127abdbd call dword ptr [0x127cf3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127cf3a0))), 0x127abdc3u);
  /* 127abdc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abdc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abdc9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 127abdce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abdd0 je 0x127abde8 */
  if (C.zf) goto L_127abde8;
  /* 127abdd2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abdd9 jne 0x127abde8 */
  if (!C.zf) goto L_127abde8;
  /* 127abddb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abdde push ecx */
  push32((uint32_t)(ECX));
  /* 127abddf call dword ptr [0x127cf3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127cf3ac))), 0x127abde5u);
  /* 127abde5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127abde8:;
  /* 127abde8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 127abdec cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abdef jne 0x127abe0a */
  if (!C.zf) goto L_127abe0a;
  /* 127abdf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abdf4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 127abdf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abdfb jne 0x127abe0a */
  if (!C.zf) goto L_127abe0a;
  /* 127abdfd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abe00 push ecx */
  push32((uint32_t)(ECX));
  /* 127abe01 call dword ptr [0x127cf3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127cf3a4))), 0x127abe07u);
  /* 127abe07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127abe0a:;
  /* 127abe0a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abe0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127abe10 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abe13 jne 0x127abe27 */
  if (!C.zf) goto L_127abe27;
  /* 127abe15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abe18 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127abe1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127abe1e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abe21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127abe24 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_127abe27:;
  /* 127abe27 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127abe2a push eax */
  push32((uint32_t)(EAX));
  /* 127abe2b call 0x127a75b0 */
  push32(0x127abe30u); f_127a75b0();
  /* 127abe30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abe33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127abe36 jmp 0x127ac147 */
  goto L_127ac147;
L_127abe3b:;
  /* 127abe3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abe3e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 127abe41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127abe44 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 127abe4e jmp 0x127abed5 */
  goto L_127abed5;
L_127abe53:;
  /* 127abe53 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 127abe5d jmp 0x127abed5 */
  goto L_127abed5;
L_127abe5f:;
  /* 127abe5f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_127abe69:;
  /* 127abe69 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 127abe73 jmp 0x127abe7f */
  goto L_127abe7f;
L_127abe75:;
  /* 127abe75 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_127abe7f:;
  /* 127abe7f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 127abe89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abe8c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 127abe92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127abe94 je 0x127abeb3 */
  if (C.zf) goto L_127abeb3;
  /* 127abe96 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 127abe9d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 127abea3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127abea6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 127abeac mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_127abeb3:;
  /* 127abeb3 jmp 0x127abed5 */
  goto L_127abed5;
L_127abeb5:;
  /* 127abeb5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 127abebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abec2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 127abec8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127abeca je 0x127abed5 */
  if (C.zf) goto L_127abed5;
  /* 127abecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abecf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127abed2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127abed5:;
  /* 127abed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abed8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 127abedd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abedf je 0x127abefe */
  if (C.zf) goto L_127abefe;
  /* 127abee1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 127abee4 push ecx */
  push32((uint32_t)(ECX));
  /* 127abee5 call 0x127ac570 */
  push32(0x127abeeau); f_127ac570();
  /* 127abeea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abeed mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127abef3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 127abef9 jmp 0x127abf8f */
  goto L_127abf8f;
L_127abefe:;
  /* 127abefe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abf01 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 127abf04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127abf06 je 0x127abf50 */
  if (C.zf) goto L_127abf50;
  /* 127abf08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abf0b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 127abf0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abf10 je 0x127abf30 */
  if (C.zf) goto L_127abf30;
  /* 127abf12 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 127abf15 push ecx */
  push32((uint32_t)(ECX));
  /* 127abf16 call 0x127ac550 */
  push32(0x127abf1bu); f_127ac550();
  /* 127abf1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abf1e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 127abf21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127abf22 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127abf28 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 127abf2e jmp 0x127abf4e */
  goto L_127abf4e;
L_127abf30:;
  /* 127abf30 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127abf33 push edx */
  push32((uint32_t)(EDX));
  /* 127abf34 call 0x127ac550 */
  push32(0x127abf39u); f_127ac550();
  /* 127abf39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abf3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127abf41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127abf42 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127abf48 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_127abf4e:;
  /* 127abf4e jmp 0x127abf8f */
  goto L_127abf8f;
L_127abf50:;
  /* 127abf50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abf53 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 127abf56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127abf58 je 0x127abf75 */
  if (C.zf) goto L_127abf75;
  /* 127abf5a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 127abf5d push ecx */
  push32((uint32_t)(ECX));
  /* 127abf5e call 0x127ac550 */
  push32(0x127abf63u); f_127ac550();
  /* 127abf63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abf66 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127abf67 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127abf6d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 127abf73 jmp 0x127abf8f */
  goto L_127abf8f;
L_127abf75:;
  /* 127abf75 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 127abf78 push edx */
  push32((uint32_t)(EDX));
  /* 127abf79 call 0x127ac550 */
  push32(0x127abf7eu); f_127ac550();
  /* 127abf7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127abf81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127abf83 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 127abf89 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_127abf8f:;
  /* 127abf8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abf92 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 127abf95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127abf97 je 0x127abfd7 */
  if (C.zf) goto L_127abfd7;
  /* 127abf99 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abfa0 jg 0x127abfd7 */
  if ((!C.zf&&C.sf==C.of)) goto L_127abfd7;
  /* 127abfa2 jl 0x127abfad */
  if ((C.sf!=C.of)) goto L_127abfad;
  /* 127abfa4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127abfab jae 0x127abfd7 */
  if (!C.cf) goto L_127abfd7;
L_127abfad:;
  /* 127abfad mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 127abfb3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127abfb5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 127abfbb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127abfbe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127abfc0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 127abfc6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 127abfcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abfcf or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127abfd2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127abfd5 jmp 0x127abfef */
  goto L_127abfef;
L_127abfd7:;
  /* 127abfd7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 127abfdd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 127abfe3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 127abfe9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_127abfef:;
  /* 127abfef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127abff2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 127abff8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127abffa jne 0x127ac017 */
  if (!C.zf) goto L_127ac017;
  /* 127abffc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127ac002 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 127ac008 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 127ac00b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 127ac011 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_127ac017:;
  /* 127ac017 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac01e jge 0x127ac02c */
  if ((C.sf==C.of)) goto L_127ac02c;
  /* 127ac020 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 127ac02a jmp 0x127ac035 */
  goto L_127ac035;
L_127ac02c:;
  /* 127ac02c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac02f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 127ac032 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127ac035:;
  /* 127ac035 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127ac03b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 127ac041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ac043 jne 0x127ac04c */
  if (!C.zf) goto L_127ac04c;
  /* 127ac045 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127ac04c:;
  /* 127ac04c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 127ac04f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127ac052:;
  /* 127ac052 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 127ac058 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 127ac05e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac061 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 127ac067 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ac069 jg 0x127ac07f */
  if ((!C.zf&&C.sf==C.of)) goto L_127ac07f;
  /* 127ac06b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127ac071 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 127ac077 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ac079 je 0x127ac100 */
  if (C.zf) goto L_127ac100;
L_127ac07f:;
  /* 127ac07f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 127ac085 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127ac086 push edx */
  push32((uint32_t)(EDX));
  /* 127ac087 push eax */
  push32((uint32_t)(EAX));
  /* 127ac088 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 127ac08e push edx */
  push32((uint32_t)(EDX));
  /* 127ac08f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127ac095 push eax */
  push32((uint32_t)(EAX));
  /* 127ac096 call 0x127ab410 */
  push32(0x127ac09bu); f_127ab410();
  /* 127ac09b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac09e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 127ac0a4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 127ac0aa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127ac0ab push edx */
  push32((uint32_t)(EDX));
  /* 127ac0ac push eax */
  push32((uint32_t)(EAX));
  /* 127ac0ad mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 127ac0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac0b4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 127ac0ba push edx */
  push32((uint32_t)(EDX));
  /* 127ac0bb call 0x127ab3a0 */
  push32(0x127ac0c0u); f_127ab3a0();
  /* 127ac0c0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 127ac0c6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 127ac0cc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac0d3 jle 0x127ac0e7 */
  if ((C.zf||C.sf!=C.of)) goto L_127ac0e7;
  /* 127ac0d5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 127ac0db add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac0e1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_127ac0e7:;
  /* 127ac0e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ac0ea mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 127ac0f0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 127ac0f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ac0f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac0f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127ac0fb jmp 0x127ac052 */
  goto L_127ac052;
L_127ac100:;
  /* 127ac100 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 127ac103 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac106 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127ac109 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ac10c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac10f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127ac112 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac115 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 127ac11a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ac11c je 0x127ac147 */
  if (C.zf) goto L_127ac147;
  /* 127ac11e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ac121 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127ac124 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac127 jne 0x127ac12f */
  if (!C.zf) goto L_127ac12f;
  /* 127ac129 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac12d jne 0x127ac147 */
  if (!C.zf) goto L_127ac147;
L_127ac12f:;
  /* 127ac12f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ac132 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac135 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127ac138 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ac13b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 127ac13e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ac141 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac144 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_127ac147:;
  /* 127ac147 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac14e jne 0x127ac322 */
  if (!C.zf) goto L_127ac322;
  /* 127ac154 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac157 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 127ac15a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ac15c je 0x127ac1ad */
  if (C.zf) goto L_127ac1ad;
  /* 127ac15e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac161 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 127ac167 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ac169 je 0x127ac17b */
  if (C.zf) goto L_127ac17b;
  /* 127ac16b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 127ac172 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 127ac179 jmp 0x127ac1ad */
  goto L_127ac1ad;
L_127ac17b:;
  /* 127ac17b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac17e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127ac181 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ac183 je 0x127ac195 */
  if (C.zf) goto L_127ac195;
  /* 127ac185 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 127ac18c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 127ac193 jmp 0x127ac1ad */
  goto L_127ac1ad;
L_127ac195:;
  /* 127ac195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac198 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 127ac19b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ac19d je 0x127ac1ad */
  if (C.zf) goto L_127ac1ad;
  /* 127ac19f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 127ac1a6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_127ac1ad:;
  /* 127ac1ad mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 127ac1b3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac1b6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac1b9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 127ac1bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac1c2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 127ac1c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ac1c7 jne 0x127ac1e5 */
  if (!C.zf) goto L_127ac1e5;
  /* 127ac1c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127ac1cf push eax */
  push32((uint32_t)(EAX));
  /* 127ac1d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac1d4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 127ac1da push edx */
  push32((uint32_t)(EDX));
  /* 127ac1db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127ac1dd call 0x127ac4c0 */
  push32(0x127ac1e2u); f_127ac4c0();
  /* 127ac1e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ac1e5:;
  /* 127ac1e5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127ac1eb push eax */
  push32((uint32_t)(EAX));
  /* 127ac1ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac1ef push ecx */
  push32((uint32_t)(ECX));
  /* 127ac1f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ac1f3 push edx */
  push32((uint32_t)(EDX));
  /* 127ac1f4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 127ac1fa push eax */
  push32((uint32_t)(EAX));
  /* 127ac1fb call 0x127ac500 */
  push32(0x127ac200u); f_127ac500();
  /* 127ac200 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac206 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 127ac209 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ac20b je 0x127ac233 */
  if (C.zf) goto L_127ac233;
  /* 127ac20d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac210 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127ac213 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ac215 jne 0x127ac233 */
  if (!C.zf) goto L_127ac233;
  /* 127ac217 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127ac21d push eax */
  push32((uint32_t)(EAX));
  /* 127ac21e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac221 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac222 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 127ac228 push edx */
  push32((uint32_t)(EDX));
  /* 127ac229 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127ac22b call 0x127ac4c0 */
  push32(0x127ac230u); f_127ac4c0();
  /* 127ac230 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ac233:;
  /* 127ac233 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac237 je 0x127ac2e1 */
  if (C.zf) goto L_127ac2e1;
  /* 127ac23d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac241 jle 0x127ac2e1 */
  if ((C.zf||C.sf!=C.of)) goto L_127ac2e1;
  /* 127ac247 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ac24a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 127ac250 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ac253 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_127ac259:;
  /* 127ac259 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 127ac25f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 127ac265 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac268 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 127ac26e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ac270 je 0x127ac2df */
  if (C.zf) goto L_127ac2df;
  /* 127ac272 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 127ac278 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 127ac27b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 127ac282 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 127ac289 push eax */
  push32((uint32_t)(EAX));
  /* 127ac28a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 127ac290 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac291 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 127ac297 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac29a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 127ac2a0 call 0x127ad670 */
  push32(0x127ac2a5u); f_127ad670();
  /* 127ac2a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac2a8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 127ac2ae cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac2b5 jg 0x127ac2b9 */
  if ((!C.zf&&C.sf==C.of)) goto L_127ac2b9;
  /* 127ac2b7 jmp 0x127ac2df */
  goto L_127ac2df;
L_127ac2b9:;
  /* 127ac2b9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127ac2bf push eax */
  push32((uint32_t)(EAX));
  /* 127ac2c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac2c4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 127ac2ca push edx */
  push32((uint32_t)(EDX));
  /* 127ac2cb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 127ac2d1 push eax */
  push32((uint32_t)(EAX));
  /* 127ac2d2 call 0x127ac500 */
  push32(0x127ac2d7u); f_127ac500();
  /* 127ac2d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac2da jmp 0x127ac259 */
  goto L_127ac259;
L_127ac2df:;
  /* 127ac2df jmp 0x127ac2fc */
  goto L_127ac2fc;
L_127ac2e1:;
  /* 127ac2e1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 127ac2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac2e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac2eb push edx */
  push32((uint32_t)(EDX));
  /* 127ac2ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127ac2ef push eax */
  push32((uint32_t)(EAX));
  /* 127ac2f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ac2f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac2f4 call 0x127ac500 */
  push32(0x127ac2f9u); f_127ac500();
  /* 127ac2f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ac2fc:;
  /* 127ac2fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac2ff and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127ac302 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ac304 je 0x127ac322 */
  if (C.zf) goto L_127ac322;
  /* 127ac306 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 127ac30c push eax */
  push32((uint32_t)(EAX));
  /* 127ac30d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac310 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac311 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 127ac317 push edx */
  push32((uint32_t)(EDX));
  /* 127ac318 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127ac31a call 0x127ac4c0 */
  push32(0x127ac31fu); f_127ac4c0();
  /* 127ac31f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ac322:;
  /* 127ac322 jmp 0x127ab734 */
  goto L_127ab734;
L_127ac327:;
  /* 127ac327 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 127ac32d pop edi */
  EDI = (pop32());
  /* 127ac32e pop esi */
  ESI = (pop32());
  /* 127ac32f pop ebx */
  EBX = (pop32());
  /* 127ac330 mov esp, ebp */
  ESP = (EBP);
  /* 127ac332 pop ebp */
  EBP = (pop32());
  /* 127ac333 ret  */
  ESPCHK(0x127ab710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c440 @ 0x127ac440 (119 bytes, 44 insns) */
void f_127ac440(void) {
  FTRACE(0x127ac440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac440 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac441 mov ebp, esp */
  EBP = (ESP);
  /* 127ac443 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac444 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac447 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127ac44a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac44d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac450 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 127ac453 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac456 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac45a jl 0x127ac482 */
  if ((C.sf!=C.of)) goto L_127ac482;
  /* 127ac45c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac45f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127ac461 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 127ac464 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 127ac466 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 127ac46a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 127ac470 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127ac473 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac476 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127ac478 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac47b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac47e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127ac480 jmp 0x127ac495 */
  goto L_127ac495;
L_127ac482:;
  /* 127ac482 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac485 push edx */
  push32((uint32_t)(EDX));
  /* 127ac486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac489 push eax */
  push32((uint32_t)(EAX));
  /* 127ac48a call 0x127ab490 */
  push32(0x127ac48fu); f_127ab490();
  /* 127ac48f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac492 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127ac495:;
  /* 127ac495 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac499 jne 0x127ac4a6 */
  if (!C.zf) goto L_127ac4a6;
  /* 127ac49b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ac49e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 127ac4a4 jmp 0x127ac4b3 */
  goto L_127ac4b3;
L_127ac4a6:;
  /* 127ac4a6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ac4a9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127ac4ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac4ae mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ac4b1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_127ac4b3:;
  /* 127ac4b3 mov esp, ebp */
  ESP = (EBP);
  /* 127ac4b5 pop ebp */
  EBP = (pop32());
  /* 127ac4b6 ret  */
  ESPCHK(0x127ac440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4c0 @ 0x127ac4c0 (53 bytes, 23 insns) */
void f_127ac4c0(void) {
  FTRACE(0x127ac4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac4c1 mov ebp, esp */
  EBP = (ESP);
L_127ac4c3:;
  /* 127ac4c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac4c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac4c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac4cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127ac4cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ac4d1 jle 0x127ac4f3 */
  if ((C.zf||C.sf!=C.of)) goto L_127ac4f3;
  /* 127ac4d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127ac4d6 push edx */
  push32((uint32_t)(EDX));
  /* 127ac4d7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ac4da push eax */
  push32((uint32_t)(EAX));
  /* 127ac4db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac4de push ecx */
  push32((uint32_t)(ECX));
  /* 127ac4df call 0x127ac440 */
  push32(0x127ac4e4u); f_127ac440();
  /* 127ac4e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac4e7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127ac4ea cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac4ed jne 0x127ac4f1 */
  if (!C.zf) goto L_127ac4f1;
  /* 127ac4ef jmp 0x127ac4f3 */
  goto L_127ac4f3;
L_127ac4f1:;
  /* 127ac4f1 jmp 0x127ac4c3 */
  goto L_127ac4c3;
L_127ac4f3:;
  /* 127ac4f3 pop ebp */
  EBP = (pop32());
  /* 127ac4f4 ret  */
  ESPCHK(0x127ac4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c500 @ 0x127ac500 (74 bytes, 31 insns) */
void f_127ac500(void) {
  FTRACE(0x127ac500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac500 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac501 mov ebp, esp */
  EBP = (ESP);
  /* 127ac503 push ecx */
  push32((uint32_t)(ECX));
L_127ac504:;
  /* 127ac504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac507 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac50a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac50d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127ac510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ac512 jle 0x127ac546 */
  if ((C.zf||C.sf!=C.of)) goto L_127ac546;
  /* 127ac514 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127ac517 push edx */
  push32((uint32_t)(EDX));
  /* 127ac518 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ac51b push eax */
  push32((uint32_t)(EAX));
  /* 127ac51c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac51f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127ac522 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127ac525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac528 push eax */
  push32((uint32_t)(EAX));
  /* 127ac529 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac52c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac52f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127ac532 call 0x127ac440 */
  push32(0x127ac537u); f_127ac440();
  /* 127ac537 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac53a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127ac53d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac540 jne 0x127ac544 */
  if (!C.zf) goto L_127ac544;
  /* 127ac542 jmp 0x127ac546 */
  goto L_127ac546;
L_127ac544:;
  /* 127ac544 jmp 0x127ac504 */
  goto L_127ac504;
L_127ac546:;
  /* 127ac546 mov esp, ebp */
  ESP = (EBP);
  /* 127ac548 pop ebp */
  EBP = (pop32());
  /* 127ac549 ret  */
  ESPCHK(0x127ac500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c550 @ 0x127ac550 (26 bytes, 12 insns) */
void f_127ac550(void) {
  FTRACE(0x127ac550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac550 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac551 mov ebp, esp */
  EBP = (ESP);
  /* 127ac553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac556 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ac558 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac55b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac55e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127ac560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac563 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ac565 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 127ac568 pop ebp */
  EBP = (pop32());
  /* 127ac569 ret  */
  ESPCHK(0x127ac550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c570 @ 0x127ac570 (31 bytes, 14 insns) */
void f_127ac570(void) {
  FTRACE(0x127ac570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac570 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac571 mov ebp, esp */
  EBP = (ESP);
  /* 127ac573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac576 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ac578 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac57b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac57e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127ac580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac583 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ac585 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac588 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 127ac58a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127ac58d pop ebp */
  EBP = (pop32());
  /* 127ac58e ret  */
  ESPCHK(0x127ac570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c590 @ 0x127ac590 (27 bytes, 12 insns) */
void f_127ac590(void) {
  FTRACE(0x127ac590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac590 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac591 mov ebp, esp */
  EBP = (ESP);
  /* 127ac593 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac596 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ac598 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac59b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac59e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 127ac5a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac5a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127ac5a5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 127ac5a9 pop ebp */
  EBP = (pop32());
  /* 127ac5aa ret  */
  ESPCHK(0x127ac590u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x127ac5b0 (145 bytes, 42 insns) */
void f_127ac5b0(void) {
  FTRACE(0x127ac5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac5b1 mov ebp, esp */
  EBP = (ESP);
  /* 127ac5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127ac5b4 call 0x127ac660 */
  push32(0x127ac5b9u); f_127ac660();
  /* 127ac5b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac5bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127ac5be mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ac5c5 jmp 0x127ac5d0 */
  goto L_127ac5d0;
L_127ac5c7:;
  /* 127ac5c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac5ca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac5cd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127ac5d0:;
  /* 127ac5d0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac5d4 jae 0x127ac5fa */
  if (!C.cf) goto L_127ac5fa;
  /* 127ac5d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac5d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac5dc cmp ecx, dword ptr [eax*8 + 0x127cefb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x127cefb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac5e3 jne 0x127ac5f8 */
  if (!C.zf) goto L_127ac5f8;
  /* 127ac5e5 call 0x127ac650 */
  push32(0x127ac5eau); f_127ac650();
  /* 127ac5ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ac5ed mov ecx, dword ptr [edx*8 + 0x127cefbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x127cefbc)));
  /* 127ac5f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127ac5f6 jmp 0x127ac63d */
  goto L_127ac63d;
L_127ac5f8:;
  /* 127ac5f8 jmp 0x127ac5c7 */
  goto L_127ac5c7;
L_127ac5fa:;
  /* 127ac5fa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac5fe jb 0x127ac613 */
  if (C.cf) goto L_127ac613;
  /* 127ac600 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac604 ja 0x127ac613 */
  if ((!C.cf&&!C.zf)) goto L_127ac613;
  /* 127ac606 call 0x127ac650 */
  push32(0x127ac60bu); f_127ac650();
  /* 127ac60b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 127ac611 jmp 0x127ac63d */
  goto L_127ac63d;
L_127ac613:;
  /* 127ac613 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac61a jb 0x127ac632 */
  if (C.cf) goto L_127ac632;
  /* 127ac61c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac623 ja 0x127ac632 */
  if ((!C.cf&&!C.zf)) goto L_127ac632;
  /* 127ac625 call 0x127ac650 */
  push32(0x127ac62au); f_127ac650();
  /* 127ac62a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 127ac630 jmp 0x127ac63d */
  goto L_127ac63d;
L_127ac632:;
  /* 127ac632 call 0x127ac650 */
  push32(0x127ac637u); f_127ac650();
  /* 127ac637 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_127ac63d:;
  /* 127ac63d mov esp, ebp */
  ESP = (EBP);
  /* 127ac63f pop ebp */
  EBP = (pop32());
  /* 127ac640 ret  */
  ESPCHK(0x127ac5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c650 @ 0x127ac650 (13 bytes, 6 insns) */
void f_127ac650(void) {
  FTRACE(0x127ac650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac650 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac651 mov ebp, esp */
  EBP = (ESP);
  /* 127ac653 call 0x127a41c0 */
  push32(0x127ac658u); f_127a41c0();
  /* 127ac658 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac65b pop ebp */
  EBP = (pop32());
  /* 127ac65c ret  */
  ESPCHK(0x127ac650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c660 @ 0x127ac660 (13 bytes, 6 insns) */
void f_127ac660(void) {
  FTRACE(0x127ac660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac660 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac661 mov ebp, esp */
  EBP = (ESP);
  /* 127ac663 call 0x127a41c0 */
  push32(0x127ac668u); f_127a41c0();
  /* 127ac668 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac66b pop ebp */
  EBP = (pop32());
  /* 127ac66c ret  */
  ESPCHK(0x127ac660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c670 @ 0x127ac670 (664 bytes, 265 insns) [15 switch table(s)] */
void f_127ac670(void) {
  FTRACE(0x127ac670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac670 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac671 mov ebp, esp */
  EBP = (ESP);
  /* 127ac673 push edi */
  push32((uint32_t)(EDI));
  /* 127ac674 push esi */
  push32((uint32_t)(ESI));
  /* 127ac675 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127ac678 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ac67b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac67e mov eax, ecx */
  EAX = (ECX);
  /* 127ac680 mov edx, ecx */
  EDX = (ECX);
  /* 127ac682 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac684 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac686 jbe 0x127ac690 */
  if ((C.cf||C.zf)) goto L_127ac690;
  /* 127ac688 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac68a jb 0x127ac808 */
  if (C.cf) goto L_127ac808;
L_127ac690:;
  /* 127ac690 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127ac696 jne 0x127ac6ac */
  if (!C.zf) goto L_127ac6ac;
  /* 127ac698 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ac69b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127ac69e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac6a1 jb 0x127ac6cc */
  if (C.cf) goto L_127ac6cc;
  /* 127ac6a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ac6a5 jmp dword ptr [edx*4 + 0x127ac7b8] */
  switch (EDX) {
    case 0: goto L_127ac7c8;
    case 1: goto L_127ac7d0;
    case 2: goto L_127ac7dc;
    case 3: goto L_127ac7f0;
    default: x86_unimpl("switch@0x127ac6a5 out of table"); return;
  }
L_127ac6ac:;
  /* 127ac6ac mov eax, edi */
  EAX = (EDI);
  /* 127ac6ae mov edx, 3 */
  EDX = (0x3u);
  /* 127ac6b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac6b6 jb 0x127ac6c4 */
  if (C.cf) goto L_127ac6c4;
  /* 127ac6b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127ac6bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac6bd jmp dword ptr [eax*4 + 0x127ac6d0] */
  switch (EAX) {
    case 1: goto L_127ac6e0;
    case 2: goto L_127ac70c;
    case 3: goto L_127ac730;
    default: x86_unimpl("switch@0x127ac6bd out of table"); return;
  }
L_127ac6c4:;
  /* 127ac6c4 jmp dword ptr [ecx*4 + 0x127ac7c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x127ac7c8)))); return;
  /* 127ac6cb nop  */
  /* nop */
L_127ac6cc:;
  /* 127ac6cc jmp dword ptr [ecx*4 + 0x127ac74c] */
  switch (ECX) {
    case 0: goto L_127ac7af;
    case 1: goto L_127ac79c;
    case 2: goto L_127ac794;
    case 3: goto L_127ac78c;
    case 4: goto L_127ac784;
    case 5: goto L_127ac77c;
    case 6: goto L_127ac774;
    case 7: goto L_127ac76c;
    default: x86_unimpl("switch@0x127ac6cc out of table"); return;
  }
  /* 127ac6d3 nop  */
  /* nop */
L_127ac6e0:;
  /* 127ac6e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ac6e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ac6e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ac6e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ac6e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ac6ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ac6ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ac6f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ac6f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac6f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac6fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac6fe jb 0x127ac6cc */
  if (C.cf) goto L_127ac6cc;
  /* 127ac700 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ac702 jmp dword ptr [edx*4 + 0x127ac7b8] */
  switch (EDX) {
    case 0: goto L_127ac7c8;
    case 1: goto L_127ac7d0;
    case 2: goto L_127ac7dc;
    case 3: goto L_127ac7f0;
    default: x86_unimpl("switch@0x127ac702 out of table"); return;
  }
  /* 127ac709 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ac70c:;
  /* 127ac70c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ac70e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ac710 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ac712 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ac715 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ac718 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ac71b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac71e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac721 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac724 jb 0x127ac6cc */
  if (C.cf) goto L_127ac6cc;
  /* 127ac726 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ac728 jmp dword ptr [edx*4 + 0x127ac7b8] */
  switch (EDX) {
    case 0: goto L_127ac7c8;
    case 1: goto L_127ac7d0;
    case 2: goto L_127ac7dc;
    case 3: goto L_127ac7f0;
    default: x86_unimpl("switch@0x127ac728 out of table"); return;
  }
  /* 127ac72f nop  */
  /* nop */
L_127ac730:;
  /* 127ac730 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ac732 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ac734 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ac736 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127ac737 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ac73a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 127ac73b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac73e jb 0x127ac6cc */
  if (C.cf) goto L_127ac6cc;
  /* 127ac740 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ac742 jmp dword ptr [edx*4 + 0x127ac7b8] */
  switch (EDX) {
    case 0: goto L_127ac7c8;
    case 1: goto L_127ac7d0;
    case 2: goto L_127ac7dc;
    case 3: goto L_127ac7f0;
    default: x86_unimpl("switch@0x127ac742 out of table"); return;
  }
  /* 127ac749 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ac76c:;
  /* 127ac76c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 127ac770 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_127ac774:;
  /* 127ac774 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 127ac778 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_127ac77c:;
  /* 127ac77c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 127ac780 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_127ac784:;
  /* 127ac784 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 127ac788 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_127ac78c:;
  /* 127ac78c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 127ac790 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_127ac794:;
  /* 127ac794 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 127ac798 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_127ac79c:;
  /* 127ac79c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 127ac7a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 127ac7a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 127ac7ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac7ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127ac7af:;
  /* 127ac7af jmp dword ptr [edx*4 + 0x127ac7b8] */
  switch (EDX) {
    case 0: goto L_127ac7c8;
    case 1: goto L_127ac7d0;
    case 2: goto L_127ac7dc;
    case 3: goto L_127ac7f0;
    default: x86_unimpl("switch@0x127ac7af out of table"); return;
  }
  /* 127ac7b6 mov edi, edi */
  EDI = (EDI);
L_127ac7c8:;
  /* 127ac7c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac7cb pop esi */
  ESI = (pop32());
  /* 127ac7cc pop edi */
  EDI = (pop32());
  /* 127ac7cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ac7ce ret  */
  ESPCHK(0x127ac670u, _esp0);
  ESP += 4; return;
  /* 127ac7cf nop  */
  /* nop */
L_127ac7d0:;
  /* 127ac7d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ac7d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ac7d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac7d7 pop esi */
  ESI = (pop32());
  /* 127ac7d8 pop edi */
  EDI = (pop32());
  /* 127ac7d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ac7da ret  */
  ESPCHK(0x127ac670u, _esp0);
  ESP += 4; return;
  /* 127ac7db nop  */
  /* nop */
L_127ac7dc:;
  /* 127ac7dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ac7de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ac7e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ac7e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ac7e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac7e9 pop esi */
  ESI = (pop32());
  /* 127ac7ea pop edi */
  EDI = (pop32());
  /* 127ac7eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ac7ec ret  */
  ESPCHK(0x127ac670u, _esp0);
  ESP += 4; return;
  /* 127ac7ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ac7f0:;
  /* 127ac7f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127ac7f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 127ac7f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ac7f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ac7fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ac7fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ac800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac803 pop esi */
  ESI = (pop32());
  /* 127ac804 pop edi */
  EDI = (pop32());
  /* 127ac805 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ac806 ret  */
  ESPCHK(0x127ac670u, _esp0);
  ESP += 4; return;
  /* 127ac807 nop  */
  /* nop */
L_127ac808:;
  /* 127ac808 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 127ac80c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 127ac810 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 127ac816 jne 0x127ac83c */
  if (!C.zf) goto L_127ac83c;
  /* 127ac818 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ac81b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127ac81e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac821 jb 0x127ac830 */
  if (C.cf) goto L_127ac830;
  /* 127ac823 std  */
  C.df=1;
  /* 127ac824 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ac826 cld  */
  C.df=0;
  /* 127ac827 jmp dword ptr [edx*4 + 0x127ac950] */
  switch (EDX) {
    case 0: goto L_127ac960;
    case 1: goto L_127ac968;
    case 2: goto L_127ac978;
    case 3: goto L_127ac98c;
    default: x86_unimpl("switch@0x127ac827 out of table"); return;
  }
  /* 127ac82e mov edi, edi */
  EDI = (EDI);
L_127ac830:;
  /* 127ac830 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127ac832 jmp dword ptr [ecx*4 + 0x127ac900] */
  switch (ECX) {
    case 0: goto L_127ac947;
    default: x86_unimpl("switch@0x127ac832 out of table"); return;
  }
  /* 127ac839 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ac83c:;
  /* 127ac83c mov eax, edi */
  EAX = (EDI);
  /* 127ac83e mov edx, 3 */
  EDX = (0x3u);
  /* 127ac843 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac846 jb 0x127ac854 */
  if (C.cf) goto L_127ac854;
  /* 127ac848 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 127ac84b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac84d jmp dword ptr [eax*4 + 0x127ac858] */
  switch (EAX) {
    case 1: goto L_127ac868;
    case 2: goto L_127ac888;
    case 3: goto L_127ac8b0;
    default: x86_unimpl("switch@0x127ac84d out of table"); return;
  }
L_127ac854:;
  /* 127ac854 jmp dword ptr [ecx*4 + 0x127ac950] */
  switch (ECX) {
    case 0: goto L_127ac960;
    case 1: goto L_127ac968;
    case 2: goto L_127ac978;
    case 3: goto L_127ac98c;
    default: x86_unimpl("switch@0x127ac854 out of table"); return;
  }
  /* 127ac85b nop  */
  /* nop */
L_127ac868:;
  /* 127ac868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ac86b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ac86d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ac870 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 127ac871 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ac874 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 127ac875 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac878 jb 0x127ac830 */
  if (C.cf) goto L_127ac830;
  /* 127ac87a std  */
  C.df=1;
  /* 127ac87b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ac87d cld  */
  C.df=0;
  /* 127ac87e jmp dword ptr [edx*4 + 0x127ac950] */
  switch (EDX) {
    case 0: goto L_127ac960;
    case 1: goto L_127ac968;
    case 2: goto L_127ac978;
    case 3: goto L_127ac98c;
    default: x86_unimpl("switch@0x127ac87e out of table"); return;
  }
  /* 127ac885 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ac888:;
  /* 127ac888 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ac88b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ac88d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ac890 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ac893 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ac896 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ac899 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac89c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac89f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac8a2 jb 0x127ac830 */
  if (C.cf) goto L_127ac830;
  /* 127ac8a4 std  */
  C.df=1;
  /* 127ac8a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ac8a7 cld  */
  C.df=0;
  /* 127ac8a8 jmp dword ptr [edx*4 + 0x127ac950] */
  switch (EDX) {
    case 0: goto L_127ac960;
    case 1: goto L_127ac968;
    case 2: goto L_127ac978;
    case 3: goto L_127ac98c;
    default: x86_unimpl("switch@0x127ac8a8 out of table"); return;
  }
  /* 127ac8af nop  */
  /* nop */
L_127ac8b0:;
  /* 127ac8b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ac8b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 127ac8b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ac8b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ac8bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ac8be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ac8c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 127ac8c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ac8c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac8ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ac8cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac8d0 jb 0x127ac830 */
  if (C.cf) goto L_127ac830;
  /* 127ac8d6 std  */
  C.df=1;
  /* 127ac8d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 127ac8d9 cld  */
  C.df=0;
  /* 127ac8da jmp dword ptr [edx*4 + 0x127ac950] */
  switch (EDX) {
    case 0: goto L_127ac960;
    case 1: goto L_127ac968;
    case 2: goto L_127ac978;
    case 3: goto L_127ac98c;
    default: x86_unimpl("switch@0x127ac8da out of table"); return;
  }
  /* 127ac8e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 127ac8e4 add al, 0xc9 */
  { uint32_t _a=(AL),_b=(0xc9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ac8e6 jp 0x127ac8fa */
  if (C.pf) goto L_127ac8fa;
  /* 127ac8e8 or al, 0xc9 */
  { uint32_t _r=(AL)|(0xc9u); AL = (_r); fl_logic(_r,8); }
  /* 127ac8ea jp 0x127ac8fe */
  if (C.pf) goto L_127ac8fe;
  /* 127ac8ec adc al, 0xc9 */
  { uint32_t _a=(AL),_b=(0xc9u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127ac8ee jp 0x127ac902 */
  if (C.pf) goto L_127ac902;
  /* 127ac8f0 sbb al, 0xc9 */
  { uint32_t _a=(AL),_b=(0xc9u),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 127ac8f2 jp 0x127ac906 */
  if (C.pf) goto L_127ac906;
  /* 127ac8f4 and al, 0xc9 */
  { uint32_t _r=(AL)&(0xc9u); AL = (_r); fl_logic(_r,8); }
  /* 127ac8f6 jp 0x127ac90a */
  if (C.pf) goto L_127ac90a;
  /* 127ac8f8 sub al, 0xc9 */
  { uint32_t _a=(AL),_b=(0xc9u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
L_127ac8fa:;
  /* 127ac8fa jp 0x127ac90e */
  if (C.pf) goto L_127ac90e;
  /* 127ac8fc xor al, 0xc9 */
  { uint32_t _r=(AL)^(0xc9u); AL = (_r); fl_logic(_r,8); }
L_127ac8fe:;
  /* 127ac8fe jp 0x127ac912 */
  if (C.pf) goto L_127ac912;
  /* 127ac904 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 127ac908 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 127ac90c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 127ac910 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 127ac914 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 127ac918 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 127ac91c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 127ac920 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 127ac924 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 127ac928 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 127ac92c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 127ac930 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 127ac934 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 127ac938 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 127ac93c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 127ac943 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac945 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_127ac947:;
  /* 127ac947 jmp dword ptr [edx*4 + 0x127ac950] */
  switch (EDX) {
    case 0: goto L_127ac960;
    case 1: goto L_127ac968;
    case 2: goto L_127ac978;
    case 3: goto L_127ac98c;
    default: x86_unimpl("switch@0x127ac947 out of table"); return;
  }
  /* 127ac94e mov edi, edi */
  EDI = (EDI);
L_127ac960:;
  /* 127ac960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac963 pop esi */
  ESI = (pop32());
  /* 127ac964 pop edi */
  EDI = (pop32());
  /* 127ac965 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ac966 ret  */
  ESPCHK(0x127ac670u, _esp0);
  ESP += 4; return;
  /* 127ac967 nop  */
  /* nop */
L_127ac968:;
  /* 127ac968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ac96b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ac96e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac971 pop esi */
  ESI = (pop32());
  /* 127ac972 pop edi */
  EDI = (pop32());
  /* 127ac973 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ac974 ret  */
  ESPCHK(0x127ac670u, _esp0);
  ESP += 4; return;
  /* 127ac975 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127ac978:;
  /* 127ac978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ac97b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ac97e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ac981 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ac984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac987 pop esi */
  ESI = (pop32());
  /* 127ac988 pop edi */
  EDI = (pop32());
  /* 127ac989 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ac98a ret  */
  ESPCHK(0x127ac670u, _esp0);
  ESP += 4; return;
  /* 127ac98b nop  */
  /* nop */
L_127ac98c:;
  /* 127ac98c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 127ac98f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 127ac992 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 127ac995 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 127ac998 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 127ac99b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 127ac99e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ac9a1 pop esi */
  ESI = (pop32());
  /* 127ac9a2 pop edi */
  EDI = (pop32());
  /* 127ac9a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127ac9a4 ret  */
  ESPCHK(0x127ac670u, _esp0);
  ESP += 4; return;
L_127ac902: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ac902 (unresolved jump table)"); return;
L_127ac906: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ac906 (unresolved jump table)"); return;
L_127ac90a: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ac90a (unresolved jump table)"); return;
L_127ac90e: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ac90e (unresolved jump table)"); return;
L_127ac912: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x127ac912 (unresolved jump table)"); return;
}

/* FUN_1000c9b0 @ 0x127ac9b0 (421 bytes, 148 insns) */
void f_127ac9b0(void) {
  FTRACE(0x127ac9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ac9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ac9b1 mov ebp, esp */
  EBP = (ESP);
  /* 127ac9b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127ac9b5 push 0x127cbfe8 */
  push32((uint32_t)(0x127cbfe8u));
  /* 127ac9ba push 0x127ad888 */
  push32((uint32_t)(0x127ad888u));
  /* 127ac9bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127ac9c5 push eax */
  push32((uint32_t)(EAX));
  /* 127ac9c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127ac9cd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ac9d0 push ebx */
  push32((uint32_t)(EBX));
  /* 127ac9d1 push esi */
  push32((uint32_t)(ESI));
  /* 127ac9d2 push edi */
  push32((uint32_t)(EDI));
  /* 127ac9d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127ac9d6 cmp dword ptr [0x127d070c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d070c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ac9dd jne 0x127aca2e */
  if (!C.zf) goto L_127aca2e;
  /* 127ac9df lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 127ac9e2 push eax */
  push32((uint32_t)(EAX));
  /* 127ac9e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127ac9e5 push 0x127cbfe0 */
  push32((uint32_t)(0x127cbfe0u));
  /* 127ac9ea push 1 */
  push32((uint32_t)(0x1u));
  /* 127ac9ec call dword ptr [0x127d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3358))), 0x127ac9f2u);
  /* 127ac9f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ac9f4 je 0x127aca02 */
  if (C.zf) goto L_127aca02;
  /* 127ac9f6 mov dword ptr [0x127d070c], 1 */
  w32((uint32_t)(0x127d070c), (0x1u));
  /* 127aca00 jmp 0x127aca2e */
  goto L_127aca2e;
L_127aca02:;
  /* 127aca02 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 127aca05 push ecx */
  push32((uint32_t)(ECX));
  /* 127aca06 push 1 */
  push32((uint32_t)(0x1u));
  /* 127aca08 push 0x127cbfdc */
  push32((uint32_t)(0x127cbfdcu));
  /* 127aca0d push 1 */
  push32((uint32_t)(0x1u));
  /* 127aca0f push 0 */
  push32((uint32_t)(0x0u));
  /* 127aca11 call dword ptr [0x127d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3354))), 0x127aca17u);
  /* 127aca17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aca19 je 0x127aca27 */
  if (C.zf) goto L_127aca27;
  /* 127aca1b mov dword ptr [0x127d070c], 2 */
  w32((uint32_t)(0x127d070c), (0x2u));
  /* 127aca25 jmp 0x127aca2e */
  goto L_127aca2e;
L_127aca27:;
  /* 127aca27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aca29 jmp 0x127acb58 */
  goto L_127acb58;
L_127aca2e:;
  /* 127aca2e cmp dword ptr [0x127d070c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127d070c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aca35 jne 0x127aca65 */
  if (!C.zf) goto L_127aca65;
  /* 127aca37 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aca3b jne 0x127aca46 */
  if (!C.zf) goto L_127aca46;
  /* 127aca3d mov edx, dword ptr [0x127d0718] */
  EDX = (r32((uint32_t)(0x127d0718)));
  /* 127aca43 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_127aca46:;
  /* 127aca46 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127aca49 push eax */
  push32((uint32_t)(EAX));
  /* 127aca4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127aca4d push ecx */
  push32((uint32_t)(ECX));
  /* 127aca4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aca51 push edx */
  push32((uint32_t)(EDX));
  /* 127aca52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aca55 push eax */
  push32((uint32_t)(EAX));
  /* 127aca56 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127aca59 push ecx */
  push32((uint32_t)(ECX));
  /* 127aca5a call dword ptr [0x127d3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3354))), 0x127aca60u);
  /* 127aca60 jmp 0x127acb58 */
  goto L_127acb58;
L_127aca65:;
  /* 127aca65 cmp dword ptr [0x127d070c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d070c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aca6c jne 0x127acb56 */
  if (!C.zf) goto L_127acb56;
  /* 127aca72 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aca76 jne 0x127aca81 */
  if (!C.zf) goto L_127aca81;
  /* 127aca78 mov edx, dword ptr [0x127d0728] */
  EDX = (r32((uint32_t)(0x127d0728)));
  /* 127aca7e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_127aca81:;
  /* 127aca81 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aca83 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aca85 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127aca88 push eax */
  push32((uint32_t)(EAX));
  /* 127aca89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aca8c push ecx */
  push32((uint32_t)(ECX));
  /* 127aca8d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 127aca90 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127aca92 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aca94 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127aca97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aca9a push edx */
  push32((uint32_t)(EDX));
  /* 127aca9b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127aca9e push eax */
  push32((uint32_t)(EAX));
  /* 127aca9f call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127acaa5u);
  /* 127acaa5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127acaa8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acaac jne 0x127acab5 */
  if (!C.zf) goto L_127acab5;
  /* 127acaae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acab0 jmp 0x127acb58 */
  goto L_127acb58;
L_127acab5:;
  /* 127acab5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127acabc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127acabf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127acac1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127acac4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127acac6 call 0x127a7920 */
  push32(0x127acacbu); f_127a7920();
  /* 127acacb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 127acace mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127acad1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127acad4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127acad7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127acada shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 127acadc push edx */
  push32((uint32_t)(EDX));
  /* 127acadd push 0 */
  push32((uint32_t)(0x0u));
  /* 127acadf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127acae2 push eax */
  push32((uint32_t)(EAX));
  /* 127acae3 call 0x127a84f0 */
  push32(0x127acae8u); f_127a84f0();
  /* 127acae8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127acaeb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127acaf2 jmp 0x127acb0b */
  goto L_127acb0b;
  /* 127acaf4 mov eax, 1 */
  EAX = (0x1u);
  /* 127acaf9 ret  */
  ESPCHK(0x127ac9b0u, _esp0);
  ESP += 4; return;
  /* 127acafa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127acafd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127acb04 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127acb0b:;
  /* 127acb0b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acb0f jne 0x127acb15 */
  if (!C.zf) goto L_127acb15;
  /* 127acb11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acb13 jmp 0x127acb58 */
  goto L_127acb58;
L_127acb15:;
  /* 127acb15 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127acb18 push ecx */
  push32((uint32_t)(ECX));
  /* 127acb19 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127acb1c push edx */
  push32((uint32_t)(EDX));
  /* 127acb1d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127acb20 push eax */
  push32((uint32_t)(EAX));
  /* 127acb21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127acb24 push ecx */
  push32((uint32_t)(ECX));
  /* 127acb25 push 1 */
  push32((uint32_t)(0x1u));
  /* 127acb27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127acb2a push edx */
  push32((uint32_t)(EDX));
  /* 127acb2b call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127acb31u);
  /* 127acb31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127acb34 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acb38 jne 0x127acb3e */
  if (!C.zf) goto L_127acb3e;
  /* 127acb3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acb3c jmp 0x127acb58 */
  goto L_127acb58;
L_127acb3e:;
  /* 127acb3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127acb41 push eax */
  push32((uint32_t)(EAX));
  /* 127acb42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127acb45 push ecx */
  push32((uint32_t)(ECX));
  /* 127acb46 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127acb49 push edx */
  push32((uint32_t)(EDX));
  /* 127acb4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acb4d push eax */
  push32((uint32_t)(EAX));
  /* 127acb4e call dword ptr [0x127d3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3358))), 0x127acb54u);
  /* 127acb54 jmp 0x127acb58 */
  goto L_127acb58;
L_127acb56:;
  /* 127acb56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127acb58:;
  /* 127acb58 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 127acb5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127acb5e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127acb65 pop edi */
  EDI = (pop32());
  /* 127acb66 pop esi */
  ESI = (pop32());
  /* 127acb67 pop ebx */
  EBX = (pop32());
  /* 127acb68 mov esp, ebp */
  ESP = (EBP);
  /* 127acb6a pop ebp */
  EBP = (pop32());
  /* 127acb6b ret  */
  ESPCHK(0x127ac9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb70 @ 0x127acb70 (727 bytes, 263 insns) */
void f_127acb70(void) {
  FTRACE(0x127acb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127acb70 push ebp */
  push32((uint32_t)(EBP));
  /* 127acb71 mov ebp, esp */
  EBP = (ESP);
  /* 127acb73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127acb75 push 0x127cbff8 */
  push32((uint32_t)(0x127cbff8u));
  /* 127acb7a push 0x127ad888 */
  push32((uint32_t)(0x127ad888u));
  /* 127acb7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 127acb85 push eax */
  push32((uint32_t)(EAX));
  /* 127acb86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 127acb8d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127acb90 push ebx */
  push32((uint32_t)(EBX));
  /* 127acb91 push esi */
  push32((uint32_t)(ESI));
  /* 127acb92 push edi */
  push32((uint32_t)(EDI));
  /* 127acb93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127acb96 cmp dword ptr [0x127d0730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acb9d jne 0x127acbf6 */
  if (!C.zf) goto L_127acbf6;
  /* 127acb9f push 0 */
  push32((uint32_t)(0x0u));
  /* 127acba1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127acba5 push 0x127cbfe0 */
  push32((uint32_t)(0x127cbfe0u));
  /* 127acbaa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127acbaf push 0 */
  push32((uint32_t)(0x0u));
  /* 127acbb1 call dword ptr [0x127d3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3288))), 0x127acbb7u);
  /* 127acbb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127acbb9 je 0x127acbc7 */
  if (C.zf) goto L_127acbc7;
  /* 127acbbb mov dword ptr [0x127d0730], 1 */
  w32((uint32_t)(0x127d0730), (0x1u));
  /* 127acbc5 jmp 0x127acbf6 */
  goto L_127acbf6;
L_127acbc7:;
  /* 127acbc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acbc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acbcb push 1 */
  push32((uint32_t)(0x1u));
  /* 127acbcd push 0x127cbfdc */
  push32((uint32_t)(0x127cbfdcu));
  /* 127acbd2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127acbd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acbd9 call dword ptr [0x127d335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d335c))), 0x127acbdfu);
  /* 127acbdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127acbe1 je 0x127acbef */
  if (C.zf) goto L_127acbef;
  /* 127acbe3 mov dword ptr [0x127d0730], 2 */
  w32((uint32_t)(0x127d0730), (0x2u));
  /* 127acbed jmp 0x127acbf6 */
  goto L_127acbf6;
L_127acbef:;
  /* 127acbef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acbf1 jmp 0x127ace61 */
  goto L_127ace61;
L_127acbf6:;
  /* 127acbf6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acbfa jle 0x127acc0f */
  if ((C.zf||C.sf!=C.of)) goto L_127acc0f;
  /* 127acbfc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127acbff push eax */
  push32((uint32_t)(EAX));
  /* 127acc00 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127acc03 push ecx */
  push32((uint32_t)(ECX));
  /* 127acc04 call 0x127ace80 */
  push32(0x127acc09u); f_127ace80();
  /* 127acc09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127acc0c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_127acc0f:;
  /* 127acc0f cmp dword ptr [0x127d0730], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127d0730))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acc16 jne 0x127acc3b */
  if (!C.zf) goto L_127acc3b;
  /* 127acc18 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127acc1b push edx */
  push32((uint32_t)(EDX));
  /* 127acc1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127acc1f push eax */
  push32((uint32_t)(EAX));
  /* 127acc20 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127acc23 push ecx */
  push32((uint32_t)(ECX));
  /* 127acc24 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127acc27 push edx */
  push32((uint32_t)(EDX));
  /* 127acc28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127acc2b push eax */
  push32((uint32_t)(EAX));
  /* 127acc2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acc2f push ecx */
  push32((uint32_t)(ECX));
  /* 127acc30 call dword ptr [0x127d335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d335c))), 0x127acc36u);
  /* 127acc36 jmp 0x127ace61 */
  goto L_127ace61;
L_127acc3b:;
  /* 127acc3b cmp dword ptr [0x127d0730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d0730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acc42 jne 0x127ace5f */
  if (!C.zf) goto L_127ace5f;
  /* 127acc48 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acc4c jne 0x127acc57 */
  if (!C.zf) goto L_127acc57;
  /* 127acc4e mov edx, dword ptr [0x127d0728] */
  EDX = (r32((uint32_t)(0x127d0728)));
  /* 127acc54 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_127acc57:;
  /* 127acc57 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acc59 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acc5b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127acc5e push eax */
  push32((uint32_t)(EAX));
  /* 127acc5f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127acc62 push ecx */
  push32((uint32_t)(ECX));
  /* 127acc63 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 127acc66 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127acc68 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127acc6a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 127acc6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127acc70 push edx */
  push32((uint32_t)(EDX));
  /* 127acc71 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127acc74 push eax */
  push32((uint32_t)(EAX));
  /* 127acc75 call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127acc7bu);
  /* 127acc7b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127acc7e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acc82 jne 0x127acc8b */
  if (!C.zf) goto L_127acc8b;
  /* 127acc84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acc86 jmp 0x127ace61 */
  goto L_127ace61;
L_127acc8b:;
  /* 127acc8b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127acc92 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127acc95 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127acc97 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127acc9a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127acc9c call 0x127a7920 */
  push32(0x127acca1u); f_127a7920();
  /* 127acca1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 127acca4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127acca7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 127accaa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127accad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127accb4 jmp 0x127acccd */
  goto L_127acccd;
  /* 127accb6 mov eax, 1 */
  EAX = (0x1u);
  /* 127accbb ret  */
  ESPCHK(0x127acb70u, _esp0);
  ESP += 4; return;
  /* 127accbc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127accbf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 127accc6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127acccd:;
  /* 127acccd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127accd1 jne 0x127accda */
  if (!C.zf) goto L_127accda;
  /* 127accd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127accd5 jmp 0x127ace61 */
  goto L_127ace61;
L_127accda:;
  /* 127accda mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127accdd push edx */
  push32((uint32_t)(EDX));
  /* 127accde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127acce1 push eax */
  push32((uint32_t)(EAX));
  /* 127acce2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127acce5 push ecx */
  push32((uint32_t)(ECX));
  /* 127acce6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127acce9 push edx */
  push32((uint32_t)(EDX));
  /* 127accea push 1 */
  push32((uint32_t)(0x1u));
  /* 127accec mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 127accef push eax */
  push32((uint32_t)(EAX));
  /* 127accf0 call dword ptr [0x127d3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3350))), 0x127accf6u);
  /* 127accf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127accf8 jne 0x127acd01 */
  if (!C.zf) goto L_127acd01;
  /* 127accfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127accfc jmp 0x127ace61 */
  goto L_127ace61;
L_127acd01:;
  /* 127acd01 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acd03 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acd05 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127acd08 push ecx */
  push32((uint32_t)(ECX));
  /* 127acd09 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127acd0c push edx */
  push32((uint32_t)(EDX));
  /* 127acd0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127acd10 push eax */
  push32((uint32_t)(EAX));
  /* 127acd11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acd14 push ecx */
  push32((uint32_t)(ECX));
  /* 127acd15 call dword ptr [0x127d3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3288))), 0x127acd1bu);
  /* 127acd1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127acd1e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acd22 jne 0x127acd2b */
  if (!C.zf) goto L_127acd2b;
  /* 127acd24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acd26 jmp 0x127ace61 */
  goto L_127ace61;
L_127acd2b:;
  /* 127acd2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127acd2e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 127acd34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127acd36 je 0x127acd7b */
  if (C.zf) goto L_127acd7b;
  /* 127acd38 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acd3c je 0x127acd76 */
  if (C.zf) goto L_127acd76;
  /* 127acd3e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127acd41 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acd44 jle 0x127acd4d */
  if ((C.zf||C.sf!=C.of)) goto L_127acd4d;
  /* 127acd46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acd48 jmp 0x127ace61 */
  goto L_127ace61;
L_127acd4d:;
  /* 127acd4d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127acd50 push ecx */
  push32((uint32_t)(ECX));
  /* 127acd51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 127acd54 push edx */
  push32((uint32_t)(EDX));
  /* 127acd55 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127acd58 push eax */
  push32((uint32_t)(EAX));
  /* 127acd59 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127acd5c push ecx */
  push32((uint32_t)(ECX));
  /* 127acd5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127acd60 push edx */
  push32((uint32_t)(EDX));
  /* 127acd61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acd64 push eax */
  push32((uint32_t)(EAX));
  /* 127acd65 call dword ptr [0x127d3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3288))), 0x127acd6bu);
  /* 127acd6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127acd6d jne 0x127acd76 */
  if (!C.zf) goto L_127acd76;
  /* 127acd6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acd71 jmp 0x127ace61 */
  goto L_127ace61;
L_127acd76:;
  /* 127acd76 jmp 0x127ace5a */
  goto L_127ace5a;
L_127acd7b:;
  /* 127acd7b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127acd7e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 127acd81 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127acd88 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127acd8b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127acd8d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127acd90 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 127acd92 call 0x127a7920 */
  push32(0x127acd97u); f_127a7920();
  /* 127acd97 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 127acd9a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 127acd9d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 127acda0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 127acda3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127acdaa jmp 0x127acdc3 */
  goto L_127acdc3;
  /* 127acdac mov eax, 1 */
  EAX = (0x1u);
  /* 127acdb1 ret  */
  ESPCHK(0x127acb70u, _esp0);
  ESP += 4; return;
  /* 127acdb2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 127acdb5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127acdbc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127acdc3:;
  /* 127acdc3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acdc7 jne 0x127acdd0 */
  if (!C.zf) goto L_127acdd0;
  /* 127acdc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acdcb jmp 0x127ace61 */
  goto L_127ace61;
L_127acdd0:;
  /* 127acdd0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127acdd3 push eax */
  push32((uint32_t)(EAX));
  /* 127acdd4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127acdd7 push ecx */
  push32((uint32_t)(ECX));
  /* 127acdd8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127acddb push edx */
  push32((uint32_t)(EDX));
  /* 127acddc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 127acddf push eax */
  push32((uint32_t)(EAX));
  /* 127acde0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127acde3 push ecx */
  push32((uint32_t)(ECX));
  /* 127acde4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acde7 push edx */
  push32((uint32_t)(EDX));
  /* 127acde8 call dword ptr [0x127d3288] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3288))), 0x127acdeeu);
  /* 127acdee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127acdf0 jne 0x127acdf6 */
  if (!C.zf) goto L_127acdf6;
  /* 127acdf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127acdf4 jmp 0x127ace61 */
  goto L_127ace61;
L_127acdf6:;
  /* 127acdf6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acdfa jne 0x127ace2a */
  if (!C.zf) goto L_127ace2a;
  /* 127acdfc push 0 */
  push32((uint32_t)(0x0u));
  /* 127acdfe push 0 */
  push32((uint32_t)(0x0u));
  /* 127ace00 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ace02 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ace04 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ace07 push eax */
  push32((uint32_t)(EAX));
  /* 127ace08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ace0b push ecx */
  push32((uint32_t)(ECX));
  /* 127ace0c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127ace11 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 127ace14 push edx */
  push32((uint32_t)(EDX));
  /* 127ace15 call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127ace1bu);
  /* 127ace1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127ace1e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ace22 jne 0x127ace28 */
  if (!C.zf) goto L_127ace28;
  /* 127ace24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ace26 jmp 0x127ace61 */
  goto L_127ace61;
L_127ace28:;
  /* 127ace28 jmp 0x127ace5a */
  goto L_127ace5a;
L_127ace2a:;
  /* 127ace2a push 0 */
  push32((uint32_t)(0x0u));
  /* 127ace2c push 0 */
  push32((uint32_t)(0x0u));
  /* 127ace2e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 127ace31 push eax */
  push32((uint32_t)(EAX));
  /* 127ace32 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127ace35 push ecx */
  push32((uint32_t)(ECX));
  /* 127ace36 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127ace39 push edx */
  push32((uint32_t)(EDX));
  /* 127ace3a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127ace3d push eax */
  push32((uint32_t)(EAX));
  /* 127ace3e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127ace43 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 127ace46 push ecx */
  push32((uint32_t)(ECX));
  /* 127ace47 call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127ace4du);
  /* 127ace4d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127ace50 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ace54 jne 0x127ace5a */
  if (!C.zf) goto L_127ace5a;
  /* 127ace56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ace58 jmp 0x127ace61 */
  goto L_127ace61;
L_127ace5a:;
  /* 127ace5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127ace5d jmp 0x127ace61 */
  goto L_127ace61;
L_127ace5f:;
  /* 127ace5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127ace61:;
  /* 127ace61 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 127ace64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ace67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 127ace6e pop edi */
  EDI = (pop32());
  /* 127ace6f pop esi */
  ESI = (pop32());
  /* 127ace70 pop ebx */
  EBX = (pop32());
  /* 127ace71 mov esp, ebp */
  ESP = (EBP);
  /* 127ace73 pop ebp */
  EBP = (pop32());
  /* 127ace74 ret  */
  ESPCHK(0x127acb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce80 @ 0x127ace80 (80 bytes, 32 insns) */
void f_127ace80(void) {
  FTRACE(0x127ace80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ace80 push ebp */
  push32((uint32_t)(EBP));
  /* 127ace81 mov ebp, esp */
  EBP = (ESP);
  /* 127ace83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ace86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ace89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ace8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ace8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127ace92:;
  /* 127ace92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ace95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ace98 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ace9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ace9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127acea0 je 0x127aceb7 */
  if (C.zf) goto L_127aceb7;
  /* 127acea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127acea5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127acea8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127aceaa je 0x127aceb7 */
  if (C.zf) goto L_127aceb7;
  /* 127aceac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aceaf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aceb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aceb5 jmp 0x127ace92 */
  goto L_127ace92;
L_127aceb7:;
  /* 127aceb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aceba movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127acebd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127acebf jne 0x127acec9 */
  if (!C.zf) goto L_127acec9;
  /* 127acec1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127acec4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127acec7 jmp 0x127acecc */
  goto L_127acecc;
L_127acec9:;
  /* 127acec9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_127acecc:;
  /* 127acecc mov esp, ebp */
  ESP = (EBP);
  /* 127acece pop ebp */
  EBP = (pop32());
  /* 127acecf ret  */
  ESPCHK(0x127ace80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ced0 @ 0x127aced0 (130 bytes, 43 insns) */
void f_127aced0(void) {
  FTRACE(0x127aced0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aced0 push ebp */
  push32((uint32_t)(EBP));
  /* 127aced1 mov ebp, esp */
  EBP = (ESP);
  /* 127aced3 push ecx */
  push32((uint32_t)(ECX));
  /* 127aced4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aced7 cmp eax, dword ptr [0x127d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acedd jae 0x127acf01 */
  if (!C.cf) goto L_127acf01;
  /* 127acedf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acee2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127acee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acee8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127aceeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127aceee mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127acef5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127acefa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127acefd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aceff jne 0x127acf1c */
  if (!C.zf) goto L_127acf1c;
L_127acf01:;
  /* 127acf01 call 0x127ac650 */
  push32(0x127acf06u); f_127ac650();
  /* 127acf06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127acf0c call 0x127ac660 */
  push32(0x127acf11u); f_127ac660();
  /* 127acf11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127acf17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127acf1a jmp 0x127acf4e */
  goto L_127acf4e;
L_127acf1c:;
  /* 127acf1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acf1f push edx */
  push32((uint32_t)(EDX));
  /* 127acf20 call 0x127ade70 */
  push32(0x127acf25u); f_127ade70();
  /* 127acf25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127acf28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127acf2b push eax */
  push32((uint32_t)(EAX));
  /* 127acf2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127acf2f push ecx */
  push32((uint32_t)(ECX));
  /* 127acf30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acf33 push edx */
  push32((uint32_t)(EDX));
  /* 127acf34 call 0x127acf60 */
  push32(0x127acf39u); f_127acf60();
  /* 127acf39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127acf3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127acf3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acf42 push eax */
  push32((uint32_t)(EAX));
  /* 127acf43 call 0x127adf00 */
  push32(0x127acf48u); f_127adf00();
  /* 127acf48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127acf4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127acf4e:;
  /* 127acf4e mov esp, ebp */
  ESP = (EBP);
  /* 127acf50 pop ebp */
  EBP = (pop32());
  /* 127acf51 ret  */
  ESPCHK(0x127aced0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf60 @ 0x127acf60 (178 bytes, 56 insns) */
void f_127acf60(void) {
  FTRACE(0x127acf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127acf60 push ebp */
  push32((uint32_t)(EBP));
  /* 127acf61 mov ebp, esp */
  EBP = (ESP);
  /* 127acf63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127acf66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acf69 push eax */
  push32((uint32_t)(EAX));
  /* 127acf6a call 0x127adcf0 */
  push32(0x127acf6fu); f_127adcf0();
  /* 127acf6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127acf72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127acf75 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acf79 jne 0x127acf8e */
  if (!C.zf) goto L_127acf8e;
  /* 127acf7b call 0x127ac650 */
  push32(0x127acf80u); f_127ac650();
  /* 127acf80 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127acf86 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127acf89 jmp 0x127ad00e */
  goto L_127ad00e;
L_127acf8e:;
  /* 127acf8e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127acf91 push ecx */
  push32((uint32_t)(ECX));
  /* 127acf92 push 0 */
  push32((uint32_t)(0x0u));
  /* 127acf94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127acf97 push edx */
  push32((uint32_t)(EDX));
  /* 127acf98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127acf9b push eax */
  push32((uint32_t)(EAX));
  /* 127acf9c call dword ptr [0x127d3284] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3284))), 0x127acfa2u);
  /* 127acfa2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127acfa5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acfa9 jne 0x127acfb6 */
  if (!C.zf) goto L_127acfb6;
  /* 127acfab call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127acfb1u);
  /* 127acfb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127acfb4 jmp 0x127acfbd */
  goto L_127acfbd;
L_127acfb6:;
  /* 127acfb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127acfbd:;
  /* 127acfbd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127acfc1 je 0x127acfd4 */
  if (C.zf) goto L_127acfd4;
  /* 127acfc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127acfc6 push ecx */
  push32((uint32_t)(ECX));
  /* 127acfc7 call 0x127ac5b0 */
  push32(0x127acfccu); f_127ac5b0();
  /* 127acfcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127acfcf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127acfd2 jmp 0x127ad00e */
  goto L_127ad00e;
L_127acfd4:;
  /* 127acfd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acfd7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127acfda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acfdd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127acfe0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127acfe3 mov ecx, dword ptr [edx*4 + 0x127d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127acfea mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 127acfee and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 127acff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acff4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127acff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127acffa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127acffd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad000 mov eax, dword ptr [eax*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127ad007 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 127ad00b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127ad00e:;
  /* 127ad00e mov esp, ebp */
  ESP = (EBP);
  /* 127ad010 pop ebp */
  EBP = (pop32());
  /* 127ad011 ret  */
  ESPCHK(0x127acf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d020 @ 0x127ad020 (130 bytes, 43 insns) */
void f_127ad020(void) {
  FTRACE(0x127ad020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad020 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad021 mov ebp, esp */
  EBP = (ESP);
  /* 127ad023 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad027 cmp eax, dword ptr [0x127d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad02d jae 0x127ad051 */
  if (!C.cf) goto L_127ad051;
  /* 127ad02f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad032 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127ad035 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad038 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127ad03b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad03e mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127ad045 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127ad04a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127ad04d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ad04f jne 0x127ad06c */
  if (!C.zf) goto L_127ad06c;
L_127ad051:;
  /* 127ad051 call 0x127ac650 */
  push32(0x127ad056u); f_127ac650();
  /* 127ad056 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127ad05c call 0x127ac660 */
  push32(0x127ad061u); f_127ac660();
  /* 127ad061 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127ad067 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ad06a jmp 0x127ad09e */
  goto L_127ad09e;
L_127ad06c:;
  /* 127ad06c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad06f push edx */
  push32((uint32_t)(EDX));
  /* 127ad070 call 0x127ade70 */
  push32(0x127ad075u); f_127ade70();
  /* 127ad075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad078 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ad07b push eax */
  push32((uint32_t)(EAX));
  /* 127ad07c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ad07f push ecx */
  push32((uint32_t)(ECX));
  /* 127ad080 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad083 push edx */
  push32((uint32_t)(EDX));
  /* 127ad084 call 0x127ad0b0 */
  push32(0x127ad089u); f_127ad0b0();
  /* 127ad089 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad08c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ad08f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad092 push eax */
  push32((uint32_t)(EAX));
  /* 127ad093 call 0x127adf00 */
  push32(0x127ad098u); f_127adf00();
  /* 127ad098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad09b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127ad09e:;
  /* 127ad09e mov esp, ebp */
  ESP = (EBP);
  /* 127ad0a0 pop ebp */
  EBP = (pop32());
  /* 127ad0a1 ret  */
  ESPCHK(0x127ad020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0b0 @ 0x127ad0b0 (627 bytes, 182 insns) */
void f_127ad0b0(void) {
  FTRACE(0x127ad0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad0b1 mov ebp, esp */
  EBP = (ESP);
  /* 127ad0b3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad0b9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127ad0c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ad0c3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 127ad0c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad0cd jne 0x127ad0d6 */
  if (!C.zf) goto L_127ad0d6;
  /* 127ad0cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ad0d1 jmp 0x127ad31f */
  goto L_127ad31f;
L_127ad0d6:;
  /* 127ad0d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad0d9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127ad0dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad0df and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127ad0e2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad0e5 mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127ad0ec movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127ad0f1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 127ad0f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ad0f6 je 0x127ad108 */
  if (C.zf) goto L_127ad108;
  /* 127ad0f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ad0fa push 0 */
  push32((uint32_t)(0x0u));
  /* 127ad0fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad0ff push edx */
  push32((uint32_t)(EDX));
  /* 127ad100 call 0x127acf60 */
  push32(0x127ad105u); f_127acf60();
  /* 127ad105 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ad108:;
  /* 127ad108 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad10b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127ad10e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad111 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127ad114 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad117 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127ad11e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 127ad123 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 127ad128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ad12a je 0x127ad23c */
  if (C.zf) goto L_127ad23c;
  /* 127ad130 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ad133 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127ad136 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_127ad13d:;
  /* 127ad13d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad140 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad143 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad146 jae 0x127ad23a */
  if (!C.cf) goto L_127ad23a;
  /* 127ad14c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 127ad152 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127ad155:;
  /* 127ad155 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ad158 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 127ad15e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad160 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad166 jge 0x127ad1c7 */
  if ((C.sf==C.of)) goto L_127ad1c7;
  /* 127ad168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad16b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad16e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad171 jae 0x127ad1c7 */
  if (!C.cf) goto L_127ad1c7;
  /* 127ad173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad176 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127ad178 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 127ad17e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad181 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad184 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ad187 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 127ad18e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad191 jne 0x127ad1b1 */
  if (!C.zf) goto L_127ad1b1;
  /* 127ad193 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 127ad199 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad19c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 127ad1a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ad1a5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 127ad1a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ad1ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad1ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127ad1b1:;
  /* 127ad1b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ad1b4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 127ad1ba mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 127ad1bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ad1bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad1c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127ad1c5 jmp 0x127ad155 */
  goto L_127ad155;
L_127ad1c7:;
  /* 127ad1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ad1c9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 127ad1cf push edx */
  push32((uint32_t)(EDX));
  /* 127ad1d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ad1d3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 127ad1d9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad1db push eax */
  push32((uint32_t)(EAX));
  /* 127ad1dc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 127ad1e2 push edx */
  push32((uint32_t)(EDX));
  /* 127ad1e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad1e6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127ad1e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad1ec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127ad1ef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad1f2 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127ad1f9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 127ad1fc push eax */
  push32((uint32_t)(EAX));
  /* 127ad1fd call dword ptr [0x127d329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d329c))), 0x127ad203u);
  /* 127ad203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ad205 je 0x127ad22a */
  if (C.zf) goto L_127ad22a;
  /* 127ad207 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ad20a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad210 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 127ad213 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ad216 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 127ad21c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad21e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad224 jge 0x127ad228 */
  if ((C.sf==C.of)) goto L_127ad228;
  /* 127ad226 jmp 0x127ad23a */
  goto L_127ad23a;
L_127ad228:;
  /* 127ad228 jmp 0x127ad235 */
  goto L_127ad235;
L_127ad22a:;
  /* 127ad22a call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127ad230u);
  /* 127ad230 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127ad233 jmp 0x127ad23a */
  goto L_127ad23a;
L_127ad235:;
  /* 127ad235 jmp 0x127ad13d */
  goto L_127ad13d;
L_127ad23a:;
  /* 127ad23a jmp 0x127ad28c */
  goto L_127ad28c;
L_127ad23c:;
  /* 127ad23c push 0 */
  push32((uint32_t)(0x0u));
  /* 127ad23e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 127ad244 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad245 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ad248 push edx */
  push32((uint32_t)(EDX));
  /* 127ad249 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ad24c push eax */
  push32((uint32_t)(EAX));
  /* 127ad24d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad250 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127ad253 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad256 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127ad259 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad25c mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127ad263 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 127ad266 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad267 call dword ptr [0x127d329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d329c))), 0x127ad26du);
  /* 127ad26d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ad26f je 0x127ad283 */
  if (C.zf) goto L_127ad283;
  /* 127ad271 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127ad278 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 127ad27e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 127ad281 jmp 0x127ad28c */
  goto L_127ad28c;
L_127ad283:;
  /* 127ad283 call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127ad289u);
  /* 127ad289 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127ad28c:;
  /* 127ad28c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad290 jne 0x127ad316 */
  if (!C.zf) goto L_127ad316;
  /* 127ad296 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad29a je 0x127ad2ca */
  if (C.zf) goto L_127ad2ca;
  /* 127ad29c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad2a0 jne 0x127ad2b9 */
  if (!C.zf) goto L_127ad2b9;
  /* 127ad2a2 call 0x127ac650 */
  push32(0x127ad2a7u); f_127ac650();
  /* 127ad2a7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127ad2ad call 0x127ac660 */
  push32(0x127ad2b2u); f_127ac660();
  /* 127ad2b2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ad2b5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 127ad2b7 jmp 0x127ad2c5 */
  goto L_127ad2c5;
L_127ad2b9:;
  /* 127ad2b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ad2bc push edx */
  push32((uint32_t)(EDX));
  /* 127ad2bd call 0x127ac5b0 */
  push32(0x127ad2c2u); f_127ac5b0();
  /* 127ad2c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ad2c5:;
  /* 127ad2c5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ad2c8 jmp 0x127ad31f */
  goto L_127ad31f;
L_127ad2ca:;
  /* 127ad2ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad2cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127ad2d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad2d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127ad2d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad2d9 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127ad2e0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 127ad2e5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 127ad2e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ad2ea je 0x127ad2fb */
  if (C.zf) goto L_127ad2fb;
  /* 127ad2ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ad2ef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127ad2f2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad2f5 jne 0x127ad2fb */
  if (!C.zf) goto L_127ad2fb;
  /* 127ad2f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ad2f9 jmp 0x127ad31f */
  goto L_127ad31f;
L_127ad2fb:;
  /* 127ad2fb call 0x127ac650 */
  push32(0x127ad300u); f_127ac650();
  /* 127ad300 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 127ad306 call 0x127ac660 */
  push32(0x127ad30bu); f_127ac660();
  /* 127ad30b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127ad311 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ad314 jmp 0x127ad31f */
  goto L_127ad31f;
L_127ad316:;
  /* 127ad316 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ad319 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_127ad31f:;
  /* 127ad31f mov esp, ebp */
  ESP = (EBP);
  /* 127ad321 pop ebp */
  EBP = (pop32());
  /* 127ad322 ret  */
  ESPCHK(0x127ad0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d330 @ 0x127ad330 (199 bytes, 68 insns) */
void f_127ad330(void) {
  FTRACE(0x127ad330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad330 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad331 mov ebp, esp */
  EBP = (ESP);
  /* 127ad333 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad334 push ebx */
  push32((uint32_t)(EBX));
  /* 127ad335 push esi */
  push32((uint32_t)(ESI));
  /* 127ad336 push edi */
  push32((uint32_t)(EDI));
L_127ad337:;
  /* 127ad337 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad33b jne 0x127ad35b */
  if (!C.zf) goto L_127ad35b;
  /* 127ad33d push 0x127cbf40 */
  push32((uint32_t)(0x127cbf40u));
  /* 127ad342 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ad344 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 127ad346 push 0x127cc010 */
  push32((uint32_t)(0x127cc010u));
  /* 127ad34b push 2 */
  push32((uint32_t)(0x2u));
  /* 127ad34d call 0x127a3840 */
  push32(0x127ad352u); f_127a3840();
  /* 127ad352 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad355 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad358 jne 0x127ad35b */
  if (!C.zf) goto L_127ad35b;
  /* 127ad35a int3  */
  x86_unimpl("int3 @ 0x127ad35a");
L_127ad35b:;
  /* 127ad35b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ad35d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ad35f jne 0x127ad337 */
  if (!C.zf) goto L_127ad337;
  /* 127ad361 mov ecx, dword ptr [0x127d0734] */
  ECX = (r32((uint32_t)(0x127d0734)));
  /* 127ad367 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad36a mov dword ptr [0x127d0734], ecx */
  w32((uint32_t)(0x127d0734), (ECX));
  /* 127ad370 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad373 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127ad376 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 127ad378 push 0x127cc010 */
  push32((uint32_t)(0x127cc010u));
  /* 127ad37d push 2 */
  push32((uint32_t)(0x2u));
  /* 127ad37f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127ad384 call 0x127a4780 */
  push32(0x127ad389u); f_127a4780();
  /* 127ad389 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad38c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad38f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 127ad392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad395 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad399 je 0x127ad3b6 */
  if (C.zf) goto L_127ad3b6;
  /* 127ad39b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad39e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ad3a1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 127ad3a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3a7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 127ad3aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3ad mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 127ad3b4 jmp 0x127ad3db */
  goto L_127ad3db;
L_127ad3b6:;
  /* 127ad3b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3b9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ad3bc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127ad3bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3c2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127ad3c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3c8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad3cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3ce mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 127ad3d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3d4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_127ad3db:;
  /* 127ad3db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127ad3e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127ad3e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad3e9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 127ad3f0 pop edi */
  EDI = (pop32());
  /* 127ad3f1 pop esi */
  ESI = (pop32());
  /* 127ad3f2 pop ebx */
  EBX = (pop32());
  /* 127ad3f3 mov esp, ebp */
  ESP = (EBP);
  /* 127ad3f5 pop ebp */
  EBP = (pop32());
  /* 127ad3f6 ret  */
  ESPCHK(0x127ad330u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x127ad400 (50 bytes, 17 insns) */
void f_127ad400(void) {
  FTRACE(0x127ad400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad400 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad401 mov ebp, esp */
  EBP = (ESP);
  /* 127ad403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad406 cmp eax, dword ptr [0x127d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad40c jb 0x127ad412 */
  if (C.cf) goto L_127ad412;
  /* 127ad40e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ad410 jmp 0x127ad430 */
  goto L_127ad430;
L_127ad412:;
  /* 127ad412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad415 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127ad418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad41b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127ad41e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad421 mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127ad428 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127ad42d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_127ad430:;
  /* 127ad430 pop ebp */
  EBP = (pop32());
  /* 127ad431 ret  */
  ESPCHK(0x127ad400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d440 @ 0x127ad440 (300 bytes, 80 insns) */
void f_127ad440(void) {
  FTRACE(0x127ad440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad440 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad441 mov ebp, esp */
  EBP = (ESP);
  /* 127ad443 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad444 cmp dword ptr [0x127d1c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d1c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad44b jne 0x127ad459 */
  if (!C.zf) goto L_127ad459;
  /* 127ad44d mov dword ptr [0x127d1c00], 0x200 */
  w32((uint32_t)(0x127d1c00), (0x200u));
  /* 127ad457 jmp 0x127ad46c */
  goto L_127ad46c;
L_127ad459:;
  /* 127ad459 cmp dword ptr [0x127d1c00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x127d1c00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad460 jge 0x127ad46c */
  if ((C.sf==C.of)) goto L_127ad46c;
  /* 127ad462 mov dword ptr [0x127d1c00], 0x14 */
  w32((uint32_t)(0x127d1c00), (0x14u));
L_127ad46c:;
  /* 127ad46c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 127ad471 push 0x127cc01c */
  push32((uint32_t)(0x127cc01cu));
  /* 127ad476 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ad478 push 4 */
  push32((uint32_t)(0x4u));
  /* 127ad47a mov eax, dword ptr [0x127d1c00] */
  EAX = (r32((uint32_t)(0x127d1c00)));
  /* 127ad47f push eax */
  push32((uint32_t)(EAX));
  /* 127ad480 call 0x127a4b90 */
  push32(0x127ad485u); f_127a4b90();
  /* 127ad485 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad488 mov dword ptr [0x127d08a8], eax */
  w32((uint32_t)(0x127d08a8), (EAX));
  /* 127ad48d cmp dword ptr [0x127d08a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d08a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad494 jne 0x127ad4d5 */
  if (!C.zf) goto L_127ad4d5;
  /* 127ad496 mov dword ptr [0x127d1c00], 0x14 */
  w32((uint32_t)(0x127d1c00), (0x14u));
  /* 127ad4a0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 127ad4a5 push 0x127cc01c */
  push32((uint32_t)(0x127cc01cu));
  /* 127ad4aa push 2 */
  push32((uint32_t)(0x2u));
  /* 127ad4ac push 4 */
  push32((uint32_t)(0x4u));
  /* 127ad4ae mov ecx, dword ptr [0x127d1c00] */
  ECX = (r32((uint32_t)(0x127d1c00)));
  /* 127ad4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad4b5 call 0x127a4b90 */
  push32(0x127ad4bau); f_127a4b90();
  /* 127ad4ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad4bd mov dword ptr [0x127d08a8], eax */
  w32((uint32_t)(0x127d08a8), (EAX));
  /* 127ad4c2 cmp dword ptr [0x127d08a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d08a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad4c9 jne 0x127ad4d5 */
  if (!C.zf) goto L_127ad4d5;
  /* 127ad4cb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 127ad4cd call 0x127a36f0 */
  push32(0x127ad4d2u); f_127a36f0();
  /* 127ad4d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ad4d5:;
  /* 127ad4d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ad4dc jmp 0x127ad4e7 */
  goto L_127ad4e7;
L_127ad4de:;
  /* 127ad4de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad4e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad4e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127ad4e7:;
  /* 127ad4e7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad4eb jge 0x127ad506 */
  if ((C.sf==C.of)) goto L_127ad506;
  /* 127ad4ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad4f0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127ad4f3 add eax, 0x127cf120 */
  { uint32_t _a=(EAX),_b=(0x127cf120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad4f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad4fb mov edx, dword ptr [0x127d08a8] */
  EDX = (r32((uint32_t)(0x127d08a8)));
  /* 127ad501 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 127ad504 jmp 0x127ad4de */
  goto L_127ad4de;
L_127ad506:;
  /* 127ad506 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ad50d jmp 0x127ad518 */
  goto L_127ad518;
L_127ad50f:;
  /* 127ad50f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad512 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad515 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127ad518:;
  /* 127ad518 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad51c jge 0x127ad568 */
  if ((C.sf==C.of)) goto L_127ad568;
  /* 127ad51e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad521 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127ad524 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad527 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127ad52a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad52d mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127ad534 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad538 je 0x127ad556 */
  if (C.zf) goto L_127ad556;
  /* 127ad53a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad53d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127ad540 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad543 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127ad546 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ad549 mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127ad550 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad554 jne 0x127ad566 */
  if (!C.zf) goto L_127ad566;
L_127ad556:;
  /* 127ad556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad559 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127ad55c mov dword ptr [ecx + 0x127cf130], 0xffffffff */
  w32((uint32_t)(ECX + 0x127cf130), (0xffffffffu));
L_127ad566:;
  /* 127ad566 jmp 0x127ad50f */
  goto L_127ad50f;
L_127ad568:;
  /* 127ad568 mov esp, ebp */
  ESP = (EBP);
  /* 127ad56a pop ebp */
  EBP = (pop32());
  /* 127ad56b ret  */
  ESPCHK(0x127ad440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d570 @ 0x127ad570 (26 bytes, 9 insns) */
void f_127ad570(void) {
  FTRACE(0x127ad570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad570 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad571 mov ebp, esp */
  EBP = (ESP);
  /* 127ad573 call 0x127ae170 */
  push32(0x127ad578u); f_127ae170();
  /* 127ad578 movsx eax, byte ptr [0x127d054c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x127d054c))));
  /* 127ad57f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ad581 je 0x127ad588 */
  if (C.zf) goto L_127ad588;
  /* 127ad583 call 0x127adf30 */
  push32(0x127ad588u); f_127adf30();
L_127ad588:;
  /* 127ad588 pop ebp */
  EBP = (pop32());
  /* 127ad589 ret  */
  ESPCHK(0x127ad570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d590 @ 0x127ad590 (61 bytes, 20 insns) */
void f_127ad590(void) {
  FTRACE(0x127ad590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad590 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad591 mov ebp, esp */
  EBP = (ESP);
  /* 127ad593 cmp dword ptr [ebp + 8], 0x127cf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x127cf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad59a jb 0x127ad5be */
  if (C.cf) goto L_127ad5be;
  /* 127ad59c cmp dword ptr [ebp + 8], 0x127cf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x127cf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad5a3 ja 0x127ad5be */
  if ((!C.cf&&!C.zf)) goto L_127ad5be;
  /* 127ad5a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad5a8 sub eax, 0x127cf120 */
  { uint32_t _a=(EAX),_b=(0x127cf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad5ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127ad5b0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad5b3 push eax */
  push32((uint32_t)(EAX));
  /* 127ad5b4 call 0x127a8180 */
  push32(0x127ad5b9u); f_127a8180();
  /* 127ad5b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad5bc jmp 0x127ad5cb */
  goto L_127ad5cb;
L_127ad5be:;
  /* 127ad5be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad5c1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad5c4 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad5c5 call dword ptr [0x127d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3328))), 0x127ad5cbu);
L_127ad5cb:;
  /* 127ad5cb pop ebp */
  EBP = (pop32());
  /* 127ad5cc ret  */
  ESPCHK(0x127ad590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5d0 @ 0x127ad5d0 (41 bytes, 16 insns) */
void f_127ad5d0(void) {
  FTRACE(0x127ad5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad5d1 mov ebp, esp */
  EBP = (ESP);
  /* 127ad5d3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad5d7 jge 0x127ad5ea */
  if ((C.sf==C.of)) goto L_127ad5ea;
  /* 127ad5d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad5dc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad5df push eax */
  push32((uint32_t)(EAX));
  /* 127ad5e0 call 0x127a8180 */
  push32(0x127ad5e5u); f_127a8180();
  /* 127ad5e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad5e8 jmp 0x127ad5f7 */
  goto L_127ad5f7;
L_127ad5ea:;
  /* 127ad5ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ad5ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad5f0 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad5f1 call dword ptr [0x127d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3328))), 0x127ad5f7u);
L_127ad5f7:;
  /* 127ad5f7 pop ebp */
  EBP = (pop32());
  /* 127ad5f8 ret  */
  ESPCHK(0x127ad5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d600 @ 0x127ad600 (61 bytes, 20 insns) */
void f_127ad600(void) {
  FTRACE(0x127ad600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad600 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad601 mov ebp, esp */
  EBP = (ESP);
  /* 127ad603 cmp dword ptr [ebp + 8], 0x127cf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x127cf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad60a jb 0x127ad62e */
  if (C.cf) goto L_127ad62e;
  /* 127ad60c cmp dword ptr [ebp + 8], 0x127cf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x127cf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad613 ja 0x127ad62e */
  if ((!C.cf&&!C.zf)) goto L_127ad62e;
  /* 127ad615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad618 sub eax, 0x127cf120 */
  { uint32_t _a=(EAX),_b=(0x127cf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad61d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127ad620 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad623 push eax */
  push32((uint32_t)(EAX));
  /* 127ad624 call 0x127a8220 */
  push32(0x127ad629u); f_127a8220();
  /* 127ad629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad62c jmp 0x127ad63b */
  goto L_127ad63b;
L_127ad62e:;
  /* 127ad62e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad631 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad634 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad635 call dword ptr [0x127d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d332c))), 0x127ad63bu);
L_127ad63b:;
  /* 127ad63b pop ebp */
  EBP = (pop32());
  /* 127ad63c ret  */
  ESPCHK(0x127ad600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d640 @ 0x127ad640 (41 bytes, 16 insns) */
void f_127ad640(void) {
  FTRACE(0x127ad640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad640 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad641 mov ebp, esp */
  EBP = (ESP);
  /* 127ad643 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad647 jge 0x127ad65a */
  if ((C.sf==C.of)) goto L_127ad65a;
  /* 127ad649 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad64c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad64f push eax */
  push32((uint32_t)(EAX));
  /* 127ad650 call 0x127a8220 */
  push32(0x127ad655u); f_127a8220();
  /* 127ad655 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad658 jmp 0x127ad667 */
  goto L_127ad667;
L_127ad65a:;
  /* 127ad65a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ad65d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad660 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad661 call dword ptr [0x127d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d332c))), 0x127ad667u);
L_127ad667:;
  /* 127ad667 pop ebp */
  EBP = (pop32());
  /* 127ad668 ret  */
  ESPCHK(0x127ad640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d670 @ 0x127ad670 (119 bytes, 34 insns) */
void f_127ad670(void) {
  FTRACE(0x127ad670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad670 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad671 mov ebp, esp */
  EBP = (ESP);
  /* 127ad673 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad676 push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127ad67b call dword ptr [0x127d32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32b0))), 0x127ad681u);
  /* 127ad681 cmp dword ptr [0x127d0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad688 je 0x127ad6a8 */
  if (C.zf) goto L_127ad6a8;
  /* 127ad68a push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127ad68f call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127ad695u);
  /* 127ad695 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127ad697 call 0x127a8180 */
  push32(0x127ad69cu); f_127a8180();
  /* 127ad69c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad69f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127ad6a6 jmp 0x127ad6af */
  goto L_127ad6af;
L_127ad6a8:;
  /* 127ad6a8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127ad6af:;
  /* 127ad6af mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 127ad6b3 push eax */
  push32((uint32_t)(EAX));
  /* 127ad6b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad6b7 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad6b8 call 0x127ad6f0 */
  push32(0x127ad6bdu); f_127ad6f0();
  /* 127ad6bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad6c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ad6c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad6c7 je 0x127ad6d5 */
  if (C.zf) goto L_127ad6d5;
  /* 127ad6c9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127ad6cb call 0x127a8220 */
  push32(0x127ad6d0u); f_127a8220();
  /* 127ad6d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad6d3 jmp 0x127ad6e0 */
  goto L_127ad6e0;
L_127ad6d5:;
  /* 127ad6d5 push 0x127d08a4 */
  push32((uint32_t)(0x127d08a4u));
  /* 127ad6da call dword ptr [0x127d32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32a0))), 0x127ad6e0u);
L_127ad6e0:;
  /* 127ad6e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ad6e3 mov esp, ebp */
  ESP = (EBP);
  /* 127ad6e5 pop ebp */
  EBP = (pop32());
  /* 127ad6e6 ret  */
  ESPCHK(0x127ad670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6f0 @ 0x127ad6f0 (160 bytes, 50 insns) */
void f_127ad6f0(void) {
  FTRACE(0x127ad6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad6f1 mov ebp, esp */
  EBP = (ESP);
  /* 127ad6f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad6f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad6fa jne 0x127ad703 */
  if (!C.zf) goto L_127ad703;
  /* 127ad6fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ad6fe jmp 0x127ad78c */
  goto L_127ad78c;
L_127ad703:;
  /* 127ad703 cmp dword ptr [0x127d0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad70a jne 0x127ad73a */
  if (!C.zf) goto L_127ad73a;
  /* 127ad70c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ad70f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ad714 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad719 jle 0x127ad72b */
  if ((C.zf||C.sf!=C.of)) goto L_127ad72b;
  /* 127ad71b call 0x127ac650 */
  push32(0x127ad720u); f_127ac650();
  /* 127ad720 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 127ad726 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ad729 jmp 0x127ad78c */
  goto L_127ad78c;
L_127ad72b:;
  /* 127ad72b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad72e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 127ad731 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 127ad733 mov eax, 1 */
  EAX = (0x1u);
  /* 127ad738 jmp 0x127ad78c */
  goto L_127ad78c;
L_127ad73a:;
  /* 127ad73a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127ad741 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127ad744 push eax */
  push32((uint32_t)(EAX));
  /* 127ad745 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ad747 mov ecx, dword ptr [0x127ceea4] */
  ECX = (r32((uint32_t)(0x127ceea4)));
  /* 127ad74d push ecx */
  push32((uint32_t)(ECX));
  /* 127ad74e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad751 push edx */
  push32((uint32_t)(EDX));
  /* 127ad752 push 1 */
  push32((uint32_t)(0x1u));
  /* 127ad754 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 127ad757 push eax */
  push32((uint32_t)(EAX));
  /* 127ad758 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 127ad75d mov ecx, dword ptr [0x127d0728] */
  ECX = (r32((uint32_t)(0x127d0728)));
  /* 127ad763 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad764 call dword ptr [0x127d3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3304))), 0x127ad76au);
  /* 127ad76a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ad76d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad771 je 0x127ad779 */
  if (C.zf) goto L_127ad779;
  /* 127ad773 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad777 je 0x127ad789 */
  if (C.zf) goto L_127ad789;
L_127ad779:;
  /* 127ad779 call 0x127ac650 */
  push32(0x127ad77eu); f_127ac650();
  /* 127ad77e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 127ad784 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ad787 jmp 0x127ad78c */
  goto L_127ad78c;
L_127ad789:;
  /* 127ad789 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127ad78c:;
  /* 127ad78c mov esp, ebp */
  ESP = (EBP);
  /* 127ad78e pop ebp */
  EBP = (pop32());
  /* 127ad78f ret  */
  ESPCHK(0x127ad6f0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x127ad790 (32 bytes, 18 insns) */
void f_127ad790(void) {
  FTRACE(0x127ad790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad790 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad791 mov ebp, esp */
  EBP = (ESP);
  /* 127ad793 push ebx */
  push32((uint32_t)(EBX));
  /* 127ad794 push esi */
  push32((uint32_t)(ESI));
  /* 127ad795 push edi */
  push32((uint32_t)(EDI));
  /* 127ad796 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad797 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ad799 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ad79b push 0x127ad7a8 */
  push32((uint32_t)(0x127ad7a8u));
  /* 127ad7a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 127ad7a3 call 0x127b4edc */
  push32(0x127ad7a8u); f_127b4edc();
  /* 127ad7a8 pop ebp */
  EBP = (pop32());
  /* 127ad7a9 pop edi */
  EDI = (pop32());
  /* 127ad7aa pop esi */
  ESI = (pop32());
  /* 127ad7ab pop ebx */
  EBX = (pop32());
  /* 127ad7ac mov esp, ebp */
  ESP = (EBP);
  /* 127ad7ae pop ebp */
  EBP = (pop32());
  /* 127ad7af ret  */
  ESPCHK(0x127ad790u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x127ad7d2 (104 bytes, 33 insns) */
void f_127ad7d2(void) {
  FTRACE(0x127ad7d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad7d2 push ebx */
  push32((uint32_t)(EBX));
  /* 127ad7d3 push esi */
  push32((uint32_t)(ESI));
  /* 127ad7d4 push edi */
  push32((uint32_t)(EDI));
  /* 127ad7d5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 127ad7d9 push eax */
  push32((uint32_t)(EAX));
  /* 127ad7da push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 127ad7dc push 0x127ad7b0 */
  push32((uint32_t)(0x127ad7b0u));
  /* 127ad7e1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 127ad7e8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_127ad7ef:;
  /* 127ad7ef mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 127ad7f3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 127ad7f6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 127ad7f9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad7fc je 0x127ad82c */
  if (C.zf) goto L_127ad82c;
  /* 127ad7fe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad802 je 0x127ad82c */
  if (C.zf) goto L_127ad82c;
  /* 127ad804 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 127ad807 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 127ad80a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 127ad80e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 127ad811 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad816 jne 0x127ad82a */
  if (!C.zf) goto L_127ad82a;
  /* 127ad818 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 127ad81d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 127ad821 call 0x127ad866 */
  push32(0x127ad826u); f_127ad866();
  /* 127ad826 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x127ad82au);
L_127ad82a:;
  /* 127ad82a jmp 0x127ad7ef */
  goto L_127ad7ef;
L_127ad82c:;
  /* 127ad82c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 127ad833 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad836 pop edi */
  EDI = (pop32());
  /* 127ad837 pop esi */
  ESI = (pop32());
  /* 127ad838 pop ebx */
  EBX = (pop32());
  /* 127ad839 ret  */
  ESPCHK(0x127ad7d2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d866 @ 0x127ad866 (24 bytes, 10 insns) */
void f_127ad866(void) {
  FTRACE(0x127ad866u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad866 push ebx */
  push32((uint32_t)(EBX));
  /* 127ad867 push ecx */
  push32((uint32_t)(ECX));
  /* 127ad868 mov ebx, 0x127cf3b8 */
  EBX = (0x127cf3b8u);
  /* 127ad86d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ad870 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 127ad873 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 127ad876 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 127ad879 pop ecx */
  ECX = (pop32());
  /* 127ad87a pop ebx */
  EBX = (pop32());
  /* 127ad87b ret 4 */
  ESPCHK(0x127ad866u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d945 @ 0x127ad945 (27 bytes, 11 insns) */
void f_127ad945(void) {
  FTRACE(0x127ad945u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad945 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad946 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 127ad94a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 127ad94c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 127ad94f push eax */
  push32((uint32_t)(EAX));
  /* 127ad950 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 127ad953 push eax */
  push32((uint32_t)(EAX));
  /* 127ad954 call 0x127ad7d2 */
  push32(0x127ad959u); f_127ad7d2();
  /* 127ad959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad95c pop ebp */
  EBP = (pop32());
  /* 127ad95d ret 4 */
  ESPCHK(0x127ad945u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d960 @ 0x127ad960 (482 bytes, 138 insns) */
void f_127ad960(void) {
  FTRACE(0x127ad960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ad960 push ebp */
  push32((uint32_t)(EBP));
  /* 127ad961 mov ebp, esp */
  EBP = (ESP);
  /* 127ad963 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ad966 push esi */
  push32((uint32_t)(ESI));
  /* 127ad967 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 127ad96e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 127ad970 call 0x127a8180 */
  push32(0x127ad975u); f_127a8180();
  /* 127ad975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad978 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127ad97f jmp 0x127ad98a */
  goto L_127ad98a;
L_127ad981:;
  /* 127ad981 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ad984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad987 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127ad98a:;
  /* 127ad98a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad98e jge 0x127adb30 */
  if ((C.sf==C.of)) goto L_127adb30;
  /* 127ad994 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ad997 cmp dword ptr [ecx*4 + 0x127d1f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x127d1f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad99f je 0x127ada96 */
  if (C.zf) goto L_127ada96;
  /* 127ad9a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ad9a8 mov eax, dword ptr [edx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127ad9af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ad9b2 jmp 0x127ad9bd */
  goto L_127ad9bd;
L_127ad9b4:;
  /* 127ad9b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad9b7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad9ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127ad9bd:;
  /* 127ad9bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ad9c0 mov eax, dword ptr [edx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127ad9c7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad9cc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad9cf jae 0x127ada86 */
  if (!C.cf) goto L_127ada86;
  /* 127ad9d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad9d8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127ad9dc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127ad9df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ad9e1 jne 0x127ada81 */
  if (!C.zf) goto L_127ada81;
  /* 127ad9e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad9ea cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ad9ee jne 0x127ada29 */
  if (!C.zf) goto L_127ada29;
  /* 127ad9f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127ad9f2 call 0x127a8180 */
  push32(0x127ad9f7u); f_127a8180();
  /* 127ad9f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ad9fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ad9fd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ada01 jne 0x127ada1f */
  if (!C.zf) goto L_127ada1f;
  /* 127ada03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ada06 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ada09 push edx */
  push32((uint32_t)(EDX));
  /* 127ada0a call dword ptr [0x127d3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3324))), 0x127ada10u);
  /* 127ada10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ada13 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127ada16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ada19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ada1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_127ada1f:;
  /* 127ada1f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127ada21 call 0x127a8220 */
  push32(0x127ada26u); f_127a8220();
  /* 127ada26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ada29:;
  /* 127ada29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ada2c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ada2f push eax */
  push32((uint32_t)(EAX));
  /* 127ada30 call dword ptr [0x127d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3328))), 0x127ada36u);
  /* 127ada36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ada39 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 127ada3d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 127ada40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ada42 je 0x127ada56 */
  if (C.zf) goto L_127ada56;
  /* 127ada44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ada47 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ada4a push eax */
  push32((uint32_t)(EAX));
  /* 127ada4b call dword ptr [0x127d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d332c))), 0x127ada51u);
  /* 127ada51 jmp 0x127ad9b4 */
  goto L_127ad9b4;
L_127ada56:;
  /* 127ada56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ada59 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 127ada5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ada62 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127ada65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ada68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ada6b sub eax, dword ptr [edx*4 + 0x127d1f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x127d1f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ada72 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127ada73 mov esi, 0x24 */
  ESI = (0x24u);
  /* 127ada78 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127ada7a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ada7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127ada7f jmp 0x127ada86 */
  goto L_127ada86;
L_127ada81:;
  /* 127ada81 jmp 0x127ad9b4 */
  goto L_127ad9b4;
L_127ada86:;
  /* 127ada86 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ada8a je 0x127ada91 */
  if (C.zf) goto L_127ada91;
  /* 127ada8c jmp 0x127adb30 */
  goto L_127adb30;
L_127ada91:;
  /* 127ada91 jmp 0x127adb2b */
  goto L_127adb2b;
L_127ada96:;
  /* 127ada96 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 127ada98 push 0x127cc024 */
  push32((uint32_t)(0x127cc024u));
  /* 127ada9d push 2 */
  push32((uint32_t)(0x2u));
  /* 127ada9f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 127adaa4 call 0x127a4780 */
  push32(0x127adaa9u); f_127a4780();
  /* 127adaa9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127adaac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127adaaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adab3 je 0x127adb29 */
  if (C.zf) goto L_127adb29;
  /* 127adab5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127adab8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adabb mov dword ptr [eax*4 + 0x127d1f00], ecx */
  w32((uint32_t)(EAX*4 + 0x127d1f00), (ECX));
  /* 127adac2 mov edx, dword ptr [0x127d203c] */
  EDX = (r32((uint32_t)(0x127d203c)));
  /* 127adac8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127adacb mov dword ptr [0x127d203c], edx */
  w32((uint32_t)(0x127d203c), (EDX));
  /* 127adad1 jmp 0x127adadc */
  goto L_127adadc;
L_127adad3:;
  /* 127adad3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adad6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127adad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127adadc:;
  /* 127adadc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127adadf mov edx, dword ptr [ecx*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127adae6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127adaec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adaef jae 0x127adb14 */
  if (!C.cf) goto L_127adb14;
  /* 127adaf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adaf4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 127adaf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adafb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 127adb01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adb04 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 127adb08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adb0b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 127adb12 jmp 0x127adad3 */
  goto L_127adad3;
L_127adb14:;
  /* 127adb14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127adb17 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127adb1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127adb1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adb20 push edx */
  push32((uint32_t)(EDX));
  /* 127adb21 call 0x127ade70 */
  push32(0x127adb26u); f_127ade70();
  /* 127adb26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127adb29:;
  /* 127adb29 jmp 0x127adb30 */
  goto L_127adb30;
L_127adb2b:;
  /* 127adb2b jmp 0x127ad981 */
  goto L_127ad981;
L_127adb30:;
  /* 127adb30 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 127adb32 call 0x127a8220 */
  push32(0x127adb37u); f_127a8220();
  /* 127adb37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127adb3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adb3d pop esi */
  ESI = (pop32());
  /* 127adb3e mov esp, ebp */
  ESP = (EBP);
  /* 127adb40 pop ebp */
  EBP = (pop32());
  /* 127adb41 ret  */
  ESPCHK(0x127ad960u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x127adb50 (183 bytes, 57 insns) */
void f_127adb50(void) {
  FTRACE(0x127adb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127adb50 push ebp */
  push32((uint32_t)(EBP));
  /* 127adb51 mov ebp, esp */
  EBP = (ESP);
  /* 127adb53 push ecx */
  push32((uint32_t)(ECX));
  /* 127adb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adb57 cmp eax, dword ptr [0x127d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adb5d jae 0x127adbea */
  if (!C.cf) goto L_127adbea;
  /* 127adb63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adb66 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127adb69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adb6c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127adb6f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127adb72 mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127adb79 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adb7d jne 0x127adbea */
  if (!C.zf) goto L_127adbea;
  /* 127adb7f cmp dword ptr [0x127d050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adb86 jne 0x127adbca */
  if (!C.zf) goto L_127adbca;
  /* 127adb88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adb8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127adb8e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adb92 je 0x127adba2 */
  if (C.zf) goto L_127adba2;
  /* 127adb94 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adb98 je 0x127adbb0 */
  if (C.zf) goto L_127adbb0;
  /* 127adb9a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adb9e je 0x127adbbe */
  if (C.zf) goto L_127adbbe;
  /* 127adba0 jmp 0x127adbca */
  goto L_127adbca;
L_127adba2:;
  /* 127adba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127adba5 push edx */
  push32((uint32_t)(EDX));
  /* 127adba6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 127adba8 call dword ptr [0x127d327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d327c))), 0x127adbaeu);
  /* 127adbae jmp 0x127adbca */
  goto L_127adbca;
L_127adbb0:;
  /* 127adbb0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127adbb3 push eax */
  push32((uint32_t)(EAX));
  /* 127adbb4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 127adbb6 call dword ptr [0x127d327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d327c))), 0x127adbbcu);
  /* 127adbbc jmp 0x127adbca */
  goto L_127adbca;
L_127adbbe:;
  /* 127adbbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127adbc1 push ecx */
  push32((uint32_t)(ECX));
  /* 127adbc2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 127adbc4 call dword ptr [0x127d327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d327c))), 0x127adbcau);
L_127adbca:;
  /* 127adbca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adbcd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127adbd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adbd3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127adbd6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127adbd9 mov ecx, dword ptr [edx*4 + 0x127d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127adbe0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127adbe3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 127adbe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127adbe8 jmp 0x127adc03 */
  goto L_127adc03;
L_127adbea:;
  /* 127adbea call 0x127ac650 */
  push32(0x127adbefu); f_127ac650();
  /* 127adbef mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127adbf5 call 0x127ac660 */
  push32(0x127adbfau); f_127ac660();
  /* 127adbfa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127adc00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127adc03:;
  /* 127adc03 mov esp, ebp */
  ESP = (EBP);
  /* 127adc05 pop ebp */
  EBP = (pop32());
  /* 127adc06 ret  */
  ESPCHK(0x127adb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc10 @ 0x127adc10 (216 bytes, 63 insns) */
void f_127adc10(void) {
  FTRACE(0x127adc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127adc10 push ebp */
  push32((uint32_t)(EBP));
  /* 127adc11 mov ebp, esp */
  EBP = (ESP);
  /* 127adc13 push ecx */
  push32((uint32_t)(ECX));
  /* 127adc14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adc17 cmp eax, dword ptr [0x127d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adc1d jae 0x127adccb */
  if (!C.cf) goto L_127adccb;
  /* 127adc23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adc26 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127adc29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adc2c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127adc2f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127adc32 mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127adc39 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127adc3e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127adc41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127adc43 je 0x127adccb */
  if (C.zf) goto L_127adccb;
  /* 127adc49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adc4c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127adc4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adc52 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127adc55 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127adc58 mov ecx, dword ptr [edx*4 + 0x127d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127adc5f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adc63 je 0x127adccb */
  if (C.zf) goto L_127adccb;
  /* 127adc65 cmp dword ptr [0x127d050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127d050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adc6c jne 0x127adcaa */
  if (!C.zf) goto L_127adcaa;
  /* 127adc6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adc71 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127adc74 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adc78 je 0x127adc88 */
  if (C.zf) goto L_127adc88;
  /* 127adc7a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adc7e je 0x127adc94 */
  if (C.zf) goto L_127adc94;
  /* 127adc80 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adc84 je 0x127adca0 */
  if (C.zf) goto L_127adca0;
  /* 127adc86 jmp 0x127adcaa */
  goto L_127adcaa;
L_127adc88:;
  /* 127adc88 push 0 */
  push32((uint32_t)(0x0u));
  /* 127adc8a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 127adc8c call dword ptr [0x127d327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d327c))), 0x127adc92u);
  /* 127adc92 jmp 0x127adcaa */
  goto L_127adcaa;
L_127adc94:;
  /* 127adc94 push 0 */
  push32((uint32_t)(0x0u));
  /* 127adc96 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 127adc98 call dword ptr [0x127d327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d327c))), 0x127adc9eu);
  /* 127adc9e jmp 0x127adcaa */
  goto L_127adcaa;
L_127adca0:;
  /* 127adca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127adca2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 127adca4 call dword ptr [0x127d327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d327c))), 0x127adcaau);
L_127adcaa:;
  /* 127adcaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adcad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127adcb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adcb3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127adcb6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127adcb9 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127adcc0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 127adcc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127adcc9 jmp 0x127adce4 */
  goto L_127adce4;
L_127adccb:;
  /* 127adccb call 0x127ac650 */
  push32(0x127adcd0u); f_127ac650();
  /* 127adcd0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127adcd6 call 0x127ac660 */
  push32(0x127adcdbu); f_127ac660();
  /* 127adcdb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127adce1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127adce4:;
  /* 127adce4 mov esp, ebp */
  ESP = (EBP);
  /* 127adce6 pop ebp */
  EBP = (pop32());
  /* 127adce7 ret  */
  ESPCHK(0x127adc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcf0 @ 0x127adcf0 (102 bytes, 30 insns) */
void f_127adcf0(void) {
  FTRACE(0x127adcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127adcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 127adcf1 mov ebp, esp */
  EBP = (ESP);
  /* 127adcf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adcf6 cmp eax, dword ptr [0x127d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adcfc jae 0x127add3b */
  if (!C.cf) goto L_127add3b;
  /* 127adcfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127add01 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127add04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127add07 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127add0a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127add0d mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127add14 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127add19 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127add1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127add1e je 0x127add3b */
  if (C.zf) goto L_127add3b;
  /* 127add20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127add23 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 127add26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127add29 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 127add2c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127add2f mov ecx, dword ptr [edx*4 + 0x127d1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x127d1f00)));
  /* 127add36 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 127add39 jmp 0x127add54 */
  goto L_127add54;
L_127add3b:;
  /* 127add3b call 0x127ac650 */
  push32(0x127add40u); f_127ac650();
  /* 127add40 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127add46 call 0x127ac660 */
  push32(0x127add4bu); f_127ac660();
  /* 127add4b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127add51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127add54:;
  /* 127add54 pop ebp */
  EBP = (pop32());
  /* 127add55 ret  */
  ESPCHK(0x127adcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd60 @ 0x127add60 (260 bytes, 83 insns) */
void f_127add60(void) {
  FTRACE(0x127add60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127add60 push ebp */
  push32((uint32_t)(EBP));
  /* 127add61 mov ebp, esp */
  EBP = (ESP);
  /* 127add63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127add66 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 127add6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127add6d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 127add70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127add72 je 0x127add7d */
  if (C.zf) goto L_127add7d;
  /* 127add74 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 127add77 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 127add7a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_127add7d:;
  /* 127add7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127add80 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 127add86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127add88 je 0x127add92 */
  if (C.zf) goto L_127add92;
  /* 127add8a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 127add8d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 127add8f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_127add92:;
  /* 127add92 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127add95 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 127add9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127add9d je 0x127adda8 */
  if (C.zf) goto L_127adda8;
  /* 127add9f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 127adda2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 127adda5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_127adda8:;
  /* 127adda8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127addab push eax */
  push32((uint32_t)(EAX));
  /* 127addac call dword ptr [0x127d32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32e8))), 0x127addb2u);
  /* 127addb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127addb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127addb9 jne 0x127addd2 */
  if (!C.zf) goto L_127addd2;
  /* 127addbb call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127addc1u);
  /* 127addc1 push eax */
  push32((uint32_t)(EAX));
  /* 127addc2 call 0x127ac5b0 */
  push32(0x127addc7u); f_127ac5b0();
  /* 127addc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127addca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127addcd jmp 0x127ade60 */
  goto L_127ade60;
L_127addd2:;
  /* 127addd2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127addd6 jne 0x127adde3 */
  if (!C.zf) goto L_127adde3;
  /* 127addd8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 127adddb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 127addde mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 127adde1 jmp 0x127addf2 */
  goto L_127addf2;
L_127adde3:;
  /* 127adde3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adde7 jne 0x127addf2 */
  if (!C.zf) goto L_127addf2;
  /* 127adde9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 127addec or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 127addef mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_127addf2:;
  /* 127addf2 call 0x127ad960 */
  push32(0x127addf7u); f_127ad960();
  /* 127addf7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127addfa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127addfe jne 0x127ade1b */
  if (!C.zf) goto L_127ade1b;
  /* 127ade00 call 0x127ac650 */
  push32(0x127ade05u); f_127ac650();
  /* 127ade05 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 127ade0b call 0x127ac660 */
  push32(0x127ade10u); f_127ac660();
  /* 127ade10 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127ade16 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ade19 jmp 0x127ade60 */
  goto L_127ade60;
L_127ade1b:;
  /* 127ade1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ade1e push eax */
  push32((uint32_t)(EAX));
  /* 127ade1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ade22 push ecx */
  push32((uint32_t)(ECX));
  /* 127ade23 call 0x127adb50 */
  push32(0x127ade28u); f_127adb50();
  /* 127ade28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ade2b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 127ade2e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 127ade31 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 127ade34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ade37 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127ade3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ade3d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127ade40 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ade43 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127ade4a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 127ade4d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 127ade51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ade54 push ecx */
  push32((uint32_t)(ECX));
  /* 127ade55 call 0x127adf00 */
  push32(0x127ade5au); f_127adf00();
  /* 127ade5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ade5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127ade60:;
  /* 127ade60 mov esp, ebp */
  ESP = (EBP);
  /* 127ade62 pop ebp */
  EBP = (pop32());
  /* 127ade63 ret  */
  ESPCHK(0x127add60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de70 @ 0x127ade70 (134 bytes, 44 insns) */
void f_127ade70(void) {
  FTRACE(0x127ade70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ade70 push ebp */
  push32((uint32_t)(EBP));
  /* 127ade71 mov ebp, esp */
  EBP = (ESP);
  /* 127ade73 push ecx */
  push32((uint32_t)(ECX));
  /* 127ade74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ade77 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127ade7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ade7d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127ade80 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ade83 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127ade8a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ade8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127ade8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ade92 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ade96 jne 0x127aded1 */
  if (!C.zf) goto L_127aded1;
  /* 127ade98 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127ade9a call 0x127a8180 */
  push32(0x127ade9fu); f_127a8180();
  /* 127ade9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127adea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adea5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adea9 jne 0x127adec7 */
  if (!C.zf) goto L_127adec7;
  /* 127adeab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adeae add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127adeb1 push edx */
  push32((uint32_t)(EDX));
  /* 127adeb2 call dword ptr [0x127d3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3324))), 0x127adeb8u);
  /* 127adeb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adebb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127adebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127adec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adec4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_127adec7:;
  /* 127adec7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127adec9 call 0x127a8220 */
  push32(0x127adeceu); f_127a8220();
  /* 127adece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127aded1:;
  /* 127aded1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aded4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127aded7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adeda and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127adedd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127adee0 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127adee7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 127adeeb push eax */
  push32((uint32_t)(EAX));
  /* 127adeec call dword ptr [0x127d3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3328))), 0x127adef2u);
  /* 127adef2 mov esp, ebp */
  ESP = (EBP);
  /* 127adef4 pop ebp */
  EBP = (pop32());
  /* 127adef5 ret  */
  ESPCHK(0x127ade70u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x127adf00 (38 bytes, 13 insns) */
void f_127adf00(void) {
  FTRACE(0x127adf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127adf00 push ebp */
  push32((uint32_t)(EBP));
  /* 127adf01 mov ebp, esp */
  EBP = (ESP);
  /* 127adf03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adf06 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127adf09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127adf0c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127adf0f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127adf12 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127adf19 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 127adf1d push eax */
  push32((uint32_t)(EAX));
  /* 127adf1e call dword ptr [0x127d332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d332c))), 0x127adf24u);
  /* 127adf24 pop ebp */
  EBP = (pop32());
  /* 127adf25 ret  */
  ESPCHK(0x127adf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df30 @ 0x127adf30 (218 bytes, 63 insns) */
void f_127adf30(void) {
  FTRACE(0x127adf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127adf30 push ebp */
  push32((uint32_t)(EBP));
  /* 127adf31 mov ebp, esp */
  EBP = (ESP);
  /* 127adf33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127adf36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127adf3d push 2 */
  push32((uint32_t)(0x2u));
  /* 127adf3f call 0x127a8180 */
  push32(0x127adf44u); f_127a8180();
  /* 127adf44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127adf47 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 127adf4e jmp 0x127adf59 */
  goto L_127adf59;
L_127adf50:;
  /* 127adf50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adf53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127adf56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127adf59:;
  /* 127adf59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adf5c cmp ecx, dword ptr [0x127d1c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adf62 jge 0x127adff9 */
  if ((C.sf==C.of)) goto L_127adff9;
  /* 127adf68 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adf6b mov eax, dword ptr [0x127d08a8] */
  EAX = (r32((uint32_t)(0x127d08a8)));
  /* 127adf70 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adf74 je 0x127adff4 */
  if (C.zf) goto L_127adff4;
  /* 127adf76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adf79 mov edx, dword ptr [0x127d08a8] */
  EDX = (r32((uint32_t)(0x127d08a8)));
  /* 127adf7f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127adf82 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127adf85 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 127adf8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127adf8d je 0x127adfb1 */
  if (C.zf) goto L_127adfb1;
  /* 127adf8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adf92 mov eax, dword ptr [0x127d08a8] */
  EAX = (r32((uint32_t)(0x127d08a8)));
  /* 127adf97 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127adf9a push ecx */
  push32((uint32_t)(ECX));
  /* 127adf9b call 0x127aed20 */
  push32(0x127adfa0u); f_127aed20();
  /* 127adfa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127adfa3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adfa6 je 0x127adfb1 */
  if (C.zf) goto L_127adfb1;
  /* 127adfa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127adfab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127adfae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127adfb1:;
  /* 127adfb1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127adfb5 jl 0x127adff4 */
  if ((C.sf!=C.of)) goto L_127adff4;
  /* 127adfb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adfba mov ecx, dword ptr [0x127d08a8] */
  ECX = (r32((uint32_t)(0x127d08a8)));
  /* 127adfc0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127adfc3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127adfc6 push edx */
  push32((uint32_t)(EDX));
  /* 127adfc7 call dword ptr [0x127d32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32f0))), 0x127adfcdu);
  /* 127adfcd push 2 */
  push32((uint32_t)(0x2u));
  /* 127adfcf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adfd2 mov ecx, dword ptr [0x127d08a8] */
  ECX = (r32((uint32_t)(0x127d08a8)));
  /* 127adfd8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127adfdb push edx */
  push32((uint32_t)(EDX));
  /* 127adfdc call 0x127a5210 */
  push32(0x127adfe1u); f_127a5210();
  /* 127adfe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127adfe4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127adfe7 mov ecx, dword ptr [0x127d08a8] */
  ECX = (r32((uint32_t)(0x127d08a8)));
  /* 127adfed mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_127adff4:;
  /* 127adff4 jmp 0x127adf50 */
  goto L_127adf50;
L_127adff9:;
  /* 127adff9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127adffb call 0x127a8220 */
  push32(0x127ae000u); f_127a8220();
  /* 127ae000 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae003 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae006 mov esp, ebp */
  ESP = (EBP);
  /* 127ae008 pop ebp */
  EBP = (pop32());
  /* 127ae009 ret  */
  ESPCHK(0x127adf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e010 @ 0x127ae010 (68 bytes, 26 insns) */
void f_127ae010(void) {
  FTRACE(0x127ae010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae010 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae011 mov ebp, esp */
  EBP = (ESP);
  /* 127ae013 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae014 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae018 jne 0x127ae026 */
  if (!C.zf) goto L_127ae026;
  /* 127ae01a push 0 */
  push32((uint32_t)(0x0u));
  /* 127ae01c call 0x127ae180 */
  push32(0x127ae021u); f_127ae180();
  /* 127ae021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae024 jmp 0x127ae050 */
  goto L_127ae050;
L_127ae026:;
  /* 127ae026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae029 push eax */
  push32((uint32_t)(EAX));
  /* 127ae02a call 0x127ad590 */
  push32(0x127ae02fu); f_127ad590();
  /* 127ae02f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae035 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae036 call 0x127ae060 */
  push32(0x127ae03bu); f_127ae060();
  /* 127ae03b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae03e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ae041 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae044 push edx */
  push32((uint32_t)(EDX));
  /* 127ae045 call 0x127ad600 */
  push32(0x127ae04au); f_127ad600();
  /* 127ae04a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae04d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127ae050:;
  /* 127ae050 mov esp, ebp */
  ESP = (EBP);
  /* 127ae052 pop ebp */
  EBP = (pop32());
  /* 127ae053 ret  */
  ESPCHK(0x127ae010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e060 @ 0x127ae060 (65 bytes, 26 insns) */
void f_127ae060(void) {
  FTRACE(0x127ae060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae060 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae061 mov ebp, esp */
  EBP = (ESP);
  /* 127ae063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae066 push eax */
  push32((uint32_t)(EAX));
  /* 127ae067 call 0x127ae0b0 */
  push32(0x127ae06cu); f_127ae0b0();
  /* 127ae06c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae06f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae071 je 0x127ae078 */
  if (C.zf) goto L_127ae078;
  /* 127ae073 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127ae076 jmp 0x127ae09f */
  goto L_127ae09f;
L_127ae078:;
  /* 127ae078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae07b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ae07e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 127ae084 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ae086 je 0x127ae09d */
  if (C.zf) goto L_127ae09d;
  /* 127ae088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae08b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127ae08e push ecx */
  push32((uint32_t)(ECX));
  /* 127ae08f call 0x127aee70 */
  push32(0x127ae094u); f_127aee70();
  /* 127ae094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae097 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127ae099 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae09b jmp 0x127ae09f */
  goto L_127ae09f;
L_127ae09d:;
  /* 127ae09d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127ae09f:;
  /* 127ae09f pop ebp */
  EBP = (pop32());
  /* 127ae0a0 ret  */
  ESPCHK(0x127ae060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0b0 @ 0x127ae0b0 (183 bytes, 62 insns) */
void f_127ae0b0(void) {
  FTRACE(0x127ae0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae0b1 mov ebp, esp */
  EBP = (ESP);
  /* 127ae0b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae0b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ae0bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae0c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ae0c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae0c6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ae0c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 127ae0cc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae0cf jne 0x127ae14b */
  if (!C.zf) goto L_127ae14b;
  /* 127ae0d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae0d4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ae0d7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 127ae0dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ae0df je 0x127ae14b */
  if (C.zf) goto L_127ae14b;
  /* 127ae0e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae0e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae0e7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 127ae0e9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae0ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127ae0ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae0f3 jle 0x127ae14b */
  if ((C.zf||C.sf!=C.of)) goto L_127ae14b;
  /* 127ae0f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae0f8 push edx */
  push32((uint32_t)(EDX));
  /* 127ae0f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae0fc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127ae0ff push ecx */
  push32((uint32_t)(ECX));
  /* 127ae100 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae103 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127ae106 push eax */
  push32((uint32_t)(EAX));
  /* 127ae107 call 0x127ad020 */
  push32(0x127ae10cu); f_127ad020();
  /* 127ae10c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae10f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae112 jne 0x127ae135 */
  if (!C.zf) goto L_127ae135;
  /* 127ae114 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae117 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ae11a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 127ae120 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ae122 je 0x127ae133 */
  if (C.zf) goto L_127ae133;
  /* 127ae124 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae127 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ae12a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 127ae12d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae130 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_127ae133:;
  /* 127ae133 jmp 0x127ae14b */
  goto L_127ae14b;
L_127ae135:;
  /* 127ae135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae138 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ae13b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 127ae13e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae141 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 127ae144 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127ae14b:;
  /* 127ae14b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae14e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae151 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127ae154 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127ae156 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae159 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 127ae160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae163 mov esp, ebp */
  ESP = (EBP);
  /* 127ae165 pop ebp */
  EBP = (pop32());
  /* 127ae166 ret  */
  ESPCHK(0x127ae0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e170 @ 0x127ae170 (15 bytes, 7 insns) */
void f_127ae170(void) {
  FTRACE(0x127ae170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae170 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae171 mov ebp, esp */
  EBP = (ESP);
  /* 127ae173 push 1 */
  push32((uint32_t)(0x1u));
  /* 127ae175 call 0x127ae180 */
  push32(0x127ae17au); f_127ae180();
  /* 127ae17a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae17d pop ebp */
  EBP = (pop32());
  /* 127ae17e ret  */
  ESPCHK(0x127ae170u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x127ae180 (319 bytes, 94 insns) */
void f_127ae180(void) {
  FTRACE(0x127ae180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae180 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae181 mov ebp, esp */
  EBP = (ESP);
  /* 127ae183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae186 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127ae18d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127ae194 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae196 call 0x127a8180 */
  push32(0x127ae19bu); f_127a8180();
  /* 127ae19b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae19e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127ae1a5 jmp 0x127ae1b0 */
  goto L_127ae1b0;
L_127ae1a7:;
  /* 127ae1a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae1aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae1ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127ae1b0:;
  /* 127ae1b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae1b3 cmp ecx, dword ptr [0x127d1c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127d1c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae1b9 jge 0x127ae2a3 */
  if ((C.sf==C.of)) goto L_127ae2a3;
  /* 127ae1bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae1c2 mov eax, dword ptr [0x127d08a8] */
  EAX = (r32((uint32_t)(0x127d08a8)));
  /* 127ae1c7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae1cb je 0x127ae29e */
  if (C.zf) goto L_127ae29e;
  /* 127ae1d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae1d4 mov edx, dword ptr [0x127d08a8] */
  EDX = (r32((uint32_t)(0x127d08a8)));
  /* 127ae1da mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127ae1dd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127ae1e0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 127ae1e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127ae1e8 je 0x127ae29e */
  if (C.zf) goto L_127ae29e;
  /* 127ae1ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae1f1 mov eax, dword ptr [0x127d08a8] */
  EAX = (r32((uint32_t)(0x127d08a8)));
  /* 127ae1f6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127ae1f9 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae1fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae1fd push edx */
  push32((uint32_t)(EDX));
  /* 127ae1fe call 0x127ad5d0 */
  push32(0x127ae203u); f_127ad5d0();
  /* 127ae203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae206 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae209 mov ecx, dword ptr [0x127d08a8] */
  ECX = (r32((uint32_t)(0x127d08a8)));
  /* 127ae20f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127ae212 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127ae215 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 127ae21a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae21c je 0x127ae285 */
  if (C.zf) goto L_127ae285;
  /* 127ae21e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae222 jne 0x127ae249 */
  if (!C.zf) goto L_127ae249;
  /* 127ae224 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae227 mov edx, dword ptr [0x127d08a8] */
  EDX = (r32((uint32_t)(0x127d08a8)));
  /* 127ae22d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 127ae230 push eax */
  push32((uint32_t)(EAX));
  /* 127ae231 call 0x127ae060 */
  push32(0x127ae236u); f_127ae060();
  /* 127ae236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae239 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae23c je 0x127ae247 */
  if (C.zf) goto L_127ae247;
  /* 127ae23e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae241 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae244 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127ae247:;
  /* 127ae247 jmp 0x127ae285 */
  goto L_127ae285;
L_127ae249:;
  /* 127ae249 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae24d jne 0x127ae285 */
  if (!C.zf) goto L_127ae285;
  /* 127ae24f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae252 mov eax, dword ptr [0x127d08a8] */
  EAX = (r32((uint32_t)(0x127d08a8)));
  /* 127ae257 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127ae25a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127ae25d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 127ae260 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127ae262 je 0x127ae285 */
  if (C.zf) goto L_127ae285;
  /* 127ae264 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae267 mov ecx, dword ptr [0x127d08a8] */
  ECX = (r32((uint32_t)(0x127d08a8)));
  /* 127ae26d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127ae270 push edx */
  push32((uint32_t)(EDX));
  /* 127ae271 call 0x127ae060 */
  push32(0x127ae276u); f_127ae060();
  /* 127ae276 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae279 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae27c jne 0x127ae285 */
  if (!C.zf) goto L_127ae285;
  /* 127ae27e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_127ae285:;
  /* 127ae285 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae288 mov ecx, dword ptr [0x127d08a8] */
  ECX = (r32((uint32_t)(0x127d08a8)));
  /* 127ae28e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127ae291 push edx */
  push32((uint32_t)(EDX));
  /* 127ae292 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae295 push eax */
  push32((uint32_t)(EAX));
  /* 127ae296 call 0x127ad640 */
  push32(0x127ae29bu); f_127ad640();
  /* 127ae29b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ae29e:;
  /* 127ae29e jmp 0x127ae1a7 */
  goto L_127ae1a7;
L_127ae2a3:;
  /* 127ae2a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae2a5 call 0x127a8220 */
  push32(0x127ae2aau); f_127a8220();
  /* 127ae2aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae2ad cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae2b1 jne 0x127ae2b8 */
  if (!C.zf) goto L_127ae2b8;
  /* 127ae2b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae2b6 jmp 0x127ae2bb */
  goto L_127ae2bb;
L_127ae2b8:;
  /* 127ae2b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127ae2bb:;
  /* 127ae2bb mov esp, ebp */
  ESP = (EBP);
  /* 127ae2bd pop ebp */
  EBP = (pop32());
  /* 127ae2be ret  */
  ESPCHK(0x127ae180u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x127ae2c0 (15 bytes, 7 insns) */
void f_127ae2c0(void) {
  FTRACE(0x127ae2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae2c1 mov ebp, esp */
  EBP = (ESP);
  /* 127ae2c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae2c5 call 0x127a36f0 */
  push32(0x127ae2cau); f_127a36f0();
  /* 127ae2ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae2cd pop ebp */
  EBP = (pop32());
  /* 127ae2ce ret  */
  ESPCHK(0x127ae2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2d0 @ 0x127ae2d0 (1007 bytes, 269 insns) */
void f_127ae2d0(void) {
  FTRACE(0x127ae2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae2d1 mov ebp, esp */
  EBP = (ESP);
  /* 127ae2d3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae2d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae2dd jl 0x127ae2e5 */
  if ((C.sf!=C.of)) goto L_127ae2e5;
  /* 127ae2df cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae2e3 jle 0x127ae2ec */
  if ((C.zf||C.sf!=C.of)) goto L_127ae2ec;
L_127ae2e5:;
  /* 127ae2e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ae2e7 jmp 0x127ae6bb */
  goto L_127ae6bb;
L_127ae2ec:;
  /* 127ae2ec push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127ae2ee call 0x127a8180 */
  push32(0x127ae2f3u); f_127a8180();
  /* 127ae2f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae2f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127ae2fd mov eax, dword ptr [0x127d0894] */
  EAX = (r32((uint32_t)(0x127d0894)));
  /* 127ae302 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae305 mov dword ptr [0x127d0894], eax */
  w32((uint32_t)(0x127d0894), (EAX));
L_127ae30a:;
  /* 127ae30a cmp dword ptr [0x127d08a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d08a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae311 je 0x127ae31d */
  if (C.zf) goto L_127ae31d;
  /* 127ae313 push 1 */
  push32((uint32_t)(0x1u));
  /* 127ae315 call dword ptr [0x127d3278] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3278))), 0x127ae31bu);
  /* 127ae31b jmp 0x127ae30a */
  goto L_127ae30a;
L_127ae31d:;
  /* 127ae31d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae321 je 0x127ae361 */
  if (C.zf) goto L_127ae361;
  /* 127ae323 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae327 je 0x127ae341 */
  if (C.zf) goto L_127ae341;
  /* 127ae329 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae32c push ecx */
  push32((uint32_t)(ECX));
  /* 127ae32d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae330 push edx */
  push32((uint32_t)(EDX));
  /* 127ae331 call 0x127ae6c0 */
  push32(0x127ae336u); f_127ae6c0();
  /* 127ae336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae339 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 127ae33f jmp 0x127ae353 */
  goto L_127ae353;
L_127ae341:;
  /* 127ae341 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae344 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae347 mov ecx, dword ptr [eax + 0x127cf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x127cf4dc)));
  /* 127ae34d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_127ae353:;
  /* 127ae353 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 127ae359 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127ae35c jmp 0x127ae69b */
  goto L_127ae69b;
L_127ae361:;
  /* 127ae361 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 127ae368 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127ae36f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae373 je 0x127ae693 */
  if (C.zf) goto L_127ae693;
  /* 127ae379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae37c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127ae37f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae382 jne 0x127ae5a4 */
  if (!C.zf) goto L_127ae5a4;
  /* 127ae388 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae38b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127ae38f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae392 jne 0x127ae5a4 */
  if (!C.zf) goto L_127ae5a4;
  /* 127ae398 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae39b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 127ae39f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae3a2 jne 0x127ae5a4 */
  if (!C.zf) goto L_127ae5a4;
  /* 127ae3a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae3ab mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_127ae3b1:;
  /* 127ae3b1 push 0x127cc074 */
  push32((uint32_t)(0x127cc074u));
  /* 127ae3b6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127ae3bc push ecx */
  push32((uint32_t)(ECX));
  /* 127ae3bd call 0x127b0520 */
  push32(0x127ae3c2u); f_127b0520();
  /* 127ae3c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae3c5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 127ae3cb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae3d2 je 0x127ae3fd */
  if (C.zf) goto L_127ae3fd;
  /* 127ae3d4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae3da sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae3e0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 127ae3e6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae3ed je 0x127ae3fd */
  if (C.zf) goto L_127ae3fd;
  /* 127ae3ef mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae3f5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127ae3f8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae3fb jne 0x127ae423 */
  if (!C.zf) goto L_127ae423;
L_127ae3fd:;
  /* 127ae3fd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae401 je 0x127ae41c */
  if (C.zf) goto L_127ae41c;
  /* 127ae403 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127ae405 call 0x127a8220 */
  push32(0x127ae40au); f_127a8220();
  /* 127ae40a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae40d mov edx, dword ptr [0x127d0894] */
  EDX = (r32((uint32_t)(0x127d0894)));
  /* 127ae413 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae416 mov dword ptr [0x127d0894], edx */
  w32((uint32_t)(0x127d0894), (EDX));
L_127ae41c:;
  /* 127ae41c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ae41e jmp 0x127ae6bb */
  goto L_127ae6bb;
L_127ae423:;
  /* 127ae423 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 127ae42a jmp 0x127ae435 */
  goto L_127ae435;
L_127ae42c:;
  /* 127ae42c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ae42f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae432 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127ae435:;
  /* 127ae435 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae439 jg 0x127ae483 */
  if ((!C.zf&&C.sf==C.of)) goto L_127ae483;
  /* 127ae43b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127ae441 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae442 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127ae448 push edx */
  push32((uint32_t)(EDX));
  /* 127ae449 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ae44c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae44f mov ecx, dword ptr [eax + 0x127cf4d8] */
  ECX = (r32((uint32_t)(EAX + 0x127cf4d8)));
  /* 127ae455 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae456 call 0x127b04e0 */
  push32(0x127ae45bu); f_127b04e0();
  /* 127ae45b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae45e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae460 jne 0x127ae481 */
  if (!C.zf) goto L_127ae481;
  /* 127ae462 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ae465 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae468 mov eax, dword ptr [edx + 0x127cf4d8] */
  EAX = (r32((uint32_t)(EDX + 0x127cf4d8)));
  /* 127ae46e push eax */
  push32((uint32_t)(EAX));
  /* 127ae46f call 0x127a75b0 */
  push32(0x127ae474u); f_127a75b0();
  /* 127ae474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae477 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae47d jne 0x127ae481 */
  if (!C.zf) goto L_127ae481;
  /* 127ae47f jmp 0x127ae483 */
  goto L_127ae483;
L_127ae481:;
  /* 127ae481 jmp 0x127ae42c */
  goto L_127ae42c;
L_127ae483:;
  /* 127ae483 push 0x127cc070 */
  push32((uint32_t)(0x127cc070u));
  /* 127ae488 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae48e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae491 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 127ae497 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae49d push edx */
  push32((uint32_t)(EDX));
  /* 127ae49e call 0x127b04a0 */
  push32(0x127ae4a3u); f_127b04a0();
  /* 127ae4a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae4a6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 127ae4ac cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae4b3 jne 0x127ae4e9 */
  if (!C.zf) goto L_127ae4e9;
  /* 127ae4b5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae4bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127ae4be cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae4c1 je 0x127ae4e9 */
  if (C.zf) goto L_127ae4e9;
  /* 127ae4c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae4c7 je 0x127ae4e2 */
  if (C.zf) goto L_127ae4e2;
  /* 127ae4c9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127ae4cb call 0x127a8220 */
  push32(0x127ae4d0u); f_127a8220();
  /* 127ae4d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae4d3 mov edx, dword ptr [0x127d0894] */
  EDX = (r32((uint32_t)(0x127d0894)));
  /* 127ae4d9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae4dc mov dword ptr [0x127d0894], edx */
  w32((uint32_t)(0x127d0894), (EDX));
L_127ae4e2:;
  /* 127ae4e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ae4e4 jmp 0x127ae6bb */
  goto L_127ae6bb;
L_127ae4e9:;
  /* 127ae4e9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae4ed jg 0x127ae53a */
  if ((!C.zf&&C.sf==C.of)) goto L_127ae53a;
  /* 127ae4ef mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127ae4f5 push eax */
  push32((uint32_t)(EAX));
  /* 127ae4f6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae4fc push ecx */
  push32((uint32_t)(ECX));
  /* 127ae4fd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 127ae503 push edx */
  push32((uint32_t)(EDX));
  /* 127ae504 call 0x127a7fa0 */
  push32(0x127ae509u); f_127a7fa0();
  /* 127ae509 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae50c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 127ae512 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 127ae51a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 127ae520 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae521 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ae524 push edx */
  push32((uint32_t)(EDX));
  /* 127ae525 call 0x127ae6c0 */
  push32(0x127ae52au); f_127ae6c0();
  /* 127ae52a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae52d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae52f je 0x127ae53a */
  if (C.zf) goto L_127ae53a;
  /* 127ae531 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae534 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae537 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127ae53a:;
  /* 127ae53a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae540 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae546 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 127ae54c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127ae552 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127ae555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae557 je 0x127ae568 */
  if (C.zf) goto L_127ae568;
  /* 127ae559 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127ae55f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae562 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_127ae568:;
  /* 127ae568 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 127ae56e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127ae571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae573 jne 0x127ae3b1 */
  if (!C.zf) goto L_127ae3b1;
  /* 127ae579 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae57d je 0x127ae58c */
  if (C.zf) goto L_127ae58c;
  /* 127ae57f call 0x127ae860 */
  push32(0x127ae584u); f_127ae860();
  /* 127ae584 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 127ae58a jmp 0x127ae596 */
  goto L_127ae596;
L_127ae58c:;
  /* 127ae58c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_127ae596:;
  /* 127ae596 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 127ae59c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127ae59f jmp 0x127ae691 */
  goto L_127ae691;
L_127ae5a4:;
  /* 127ae5a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae5a7 push edx */
  push32((uint32_t)(EDX));
  /* 127ae5a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127ae5aa push 0 */
  push32((uint32_t)(0x0u));
  /* 127ae5ac lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 127ae5b2 push eax */
  push32((uint32_t)(EAX));
  /* 127ae5b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae5b6 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae5b7 call 0x127ae960 */
  push32(0x127ae5bcu); f_127ae960();
  /* 127ae5bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae5bf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ae5c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae5c6 je 0x127ae691 */
  if (C.zf) goto L_127ae691;
  /* 127ae5cc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127ae5d3 jmp 0x127ae5de */
  goto L_127ae5de;
L_127ae5d5:;
  /* 127ae5d5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ae5d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae5db mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127ae5de:;
  /* 127ae5de cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae5e2 jg 0x127ae640 */
  if ((!C.zf&&C.sf==C.of)) goto L_127ae640;
  /* 127ae5e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae5e8 je 0x127ae63e */
  if (C.zf) goto L_127ae63e;
  /* 127ae5ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ae5ed imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae5f0 mov ecx, dword ptr [eax + 0x127cf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x127cf4dc)));
  /* 127ae5f6 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae5f7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 127ae5fd push edx */
  push32((uint32_t)(EDX));
  /* 127ae5fe call 0x127b0410 */
  push32(0x127ae603u); f_127b0410();
  /* 127ae603 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae608 je 0x127ae635 */
  if (C.zf) goto L_127ae635;
  /* 127ae60a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 127ae610 push eax */
  push32((uint32_t)(EAX));
  /* 127ae611 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127ae614 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae615 call 0x127ae6c0 */
  push32(0x127ae61au); f_127ae6c0();
  /* 127ae61a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae61d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae61f je 0x127ae62c */
  if (C.zf) goto L_127ae62c;
  /* 127ae621 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae624 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae627 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127ae62a jmp 0x127ae633 */
  goto L_127ae633;
L_127ae62c:;
  /* 127ae62c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_127ae633:;
  /* 127ae633 jmp 0x127ae63e */
  goto L_127ae63e;
L_127ae635:;
  /* 127ae635 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae638 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae63b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_127ae63e:;
  /* 127ae63e jmp 0x127ae5d5 */
  goto L_127ae5d5;
L_127ae640:;
  /* 127ae640 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae644 je 0x127ae66b */
  if (C.zf) goto L_127ae66b;
  /* 127ae646 call 0x127ae860 */
  push32(0x127ae64bu); f_127ae860();
  /* 127ae64b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ae64e push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae650 mov ecx, dword ptr [0x127cf4dc] */
  ECX = (r32((uint32_t)(0x127cf4dc)));
  /* 127ae656 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae657 call 0x127a5210 */
  push32(0x127ae65cu); f_127a5210();
  /* 127ae65c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae65f mov dword ptr [0x127cf4dc], 0 */
  w32((uint32_t)(0x127cf4dc), (0x0u));
  /* 127ae669 jmp 0x127ae691 */
  goto L_127ae691;
L_127ae66b:;
  /* 127ae66b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae66f je 0x127ae67e */
  if (C.zf) goto L_127ae67e;
  /* 127ae671 call 0x127ae860 */
  push32(0x127ae676u); f_127ae860();
  /* 127ae676 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 127ae67c jmp 0x127ae688 */
  goto L_127ae688;
L_127ae67e:;
  /* 127ae67e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_127ae688:;
  /* 127ae688 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 127ae68e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_127ae691:;
  /* 127ae691 jmp 0x127ae69b */
  goto L_127ae69b;
L_127ae693:;
  /* 127ae693 call 0x127ae860 */
  push32(0x127ae698u); f_127ae860();
  /* 127ae698 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127ae69b:;
  /* 127ae69b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae69f je 0x127ae6b8 */
  if (C.zf) goto L_127ae6b8;
  /* 127ae6a1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 127ae6a3 call 0x127a8220 */
  push32(0x127ae6a8u); f_127a8220();
  /* 127ae6a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae6ab mov eax, dword ptr [0x127d0894] */
  EAX = (r32((uint32_t)(0x127d0894)));
  /* 127ae6b0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae6b3 mov dword ptr [0x127d0894], eax */
  w32((uint32_t)(0x127d0894), (EAX));
L_127ae6b8:;
  /* 127ae6b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127ae6bb:;
  /* 127ae6bb mov esp, ebp */
  ESP = (EBP);
  /* 127ae6bd pop ebp */
  EBP = (pop32());
  /* 127ae6be ret  */
  ESPCHK(0x127ae2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6c0 @ 0x127ae6c0 (403 bytes, 117 insns) */
void f_127ae6c0(void) {
  FTRACE(0x127ae6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae6c1 mov ebp, esp */
  EBP = (ESP);
  /* 127ae6c3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae6c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae6cc push eax */
  push32((uint32_t)(EAX));
  /* 127ae6cd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 127ae6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae6d4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 127ae6da push edx */
  push32((uint32_t)(EDX));
  /* 127ae6db lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 127ae6e1 push eax */
  push32((uint32_t)(EAX));
  /* 127ae6e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae6e5 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae6e6 call 0x127ae960 */
  push32(0x127ae6ebu); f_127ae960();
  /* 127ae6eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae6ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae6f0 jne 0x127ae6f9 */
  if (!C.zf) goto L_127ae6f9;
  /* 127ae6f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ae6f4 jmp 0x127ae84f */
  goto L_127ae84f;
L_127ae6f9:;
  /* 127ae6f9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 127ae6fe push 0x127cc078 */
  push32((uint32_t)(0x127cc078u));
  /* 127ae703 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae705 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 127ae70b push edx */
  push32((uint32_t)(EDX));
  /* 127ae70c call 0x127a75b0 */
  push32(0x127ae711u); f_127a75b0();
  /* 127ae711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae714 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae717 push eax */
  push32((uint32_t)(EAX));
  /* 127ae718 call 0x127a4780 */
  push32(0x127ae71du); f_127a4780();
  /* 127ae71d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae720 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127ae723 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae727 jne 0x127ae730 */
  if (!C.zf) goto L_127ae730;
  /* 127ae729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ae72b jmp 0x127ae84f */
  goto L_127ae84f;
L_127ae730:;
  /* 127ae730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae733 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae736 mov ecx, dword ptr [eax + 0x127cf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x127cf4dc)));
  /* 127ae73c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127ae73f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae742 mov eax, dword ptr [edx*4 + 0x127d0710] */
  EAX = (r32((uint32_t)(EDX*4 + 0x127d0710)));
  /* 127ae749 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127ae74c push 6 */
  push32((uint32_t)(0x6u));
  /* 127ae74e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae751 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae754 add ecx, 0x127d0760 */
  { uint32_t _a=(ECX),_b=(0x127d0760u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae75a push ecx */
  push32((uint32_t)(ECX));
  /* 127ae75b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 127ae75e push edx */
  push32((uint32_t)(EDX));
  /* 127ae75f call 0x127ab060 */
  push32(0x127ae764u); f_127ab060();
  /* 127ae764 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae767 mov eax, dword ptr [0x127d0728] */
  EAX = (r32((uint32_t)(0x127d0728)));
  /* 127ae76c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127ae76f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 127ae775 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae776 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae779 push edx */
  push32((uint32_t)(EDX));
  /* 127ae77a call 0x127a7730 */
  push32(0x127ae77fu); f_127a7730();
  /* 127ae77f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae782 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae785 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae788 mov dword ptr [ecx + 0x127cf4dc], eax */
  w32((uint32_t)(ECX + 0x127cf4dc), (EAX));
  /* 127ae78e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 127ae794 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127ae79a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae79d mov dword ptr [eax*4 + 0x127d0710], edx */
  w32((uint32_t)(EAX*4 + 0x127d0710), (EDX));
  /* 127ae7a4 push 6 */
  push32((uint32_t)(0x6u));
  /* 127ae7a6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 127ae7ac push ecx */
  push32((uint32_t)(ECX));
  /* 127ae7ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae7b0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae7b3 add edx, 0x127d0760 */
  { uint32_t _a=(EDX),_b=(0x127d0760u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae7b9 push edx */
  push32((uint32_t)(EDX));
  /* 127ae7ba call 0x127ab060 */
  push32(0x127ae7bfu); f_127ab060();
  /* 127ae7bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae7c2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae7c6 jne 0x127ae7d3 */
  if (!C.zf) goto L_127ae7d3;
  /* 127ae7c8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae7ce mov dword ptr [0x127d0728], eax */
  w32((uint32_t)(0x127d0728), (EAX));
L_127ae7d3:;
  /* 127ae7d3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae7d7 jne 0x127ae7e5 */
  if (!C.zf) goto L_127ae7e5;
  /* 127ae7d9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 127ae7df mov dword ptr [0x127d072c], ecx */
  w32((uint32_t)(0x127d072c), (ECX));
L_127ae7e5:;
  /* 127ae7e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae7e8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae7eb call dword ptr [edx + 0x127cf4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x127cf4e0))), 0x127ae7f1u);
  /* 127ae7f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae7f3 je 0x127ae82c */
  if (C.zf) goto L_127ae82c;
  /* 127ae7f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae7f8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae7fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae7fe mov dword ptr [eax + 0x127cf4dc], ecx */
  w32((uint32_t)(EAX + 0x127cf4dc), (ECX));
  /* 127ae804 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae806 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127ae809 push edx */
  push32((uint32_t)(EDX));
  /* 127ae80a call 0x127a5210 */
  push32(0x127ae80fu); f_127a5210();
  /* 127ae80f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae812 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae815 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae818 mov dword ptr [eax*4 + 0x127d0710], ecx */
  w32((uint32_t)(EAX*4 + 0x127d0710), (ECX));
  /* 127ae81f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127ae822 mov dword ptr [0x127d0728], edx */
  w32((uint32_t)(0x127d0728), (EDX));
  /* 127ae828 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ae82a jmp 0x127ae84f */
  goto L_127ae84f;
L_127ae82c:;
  /* 127ae82c cmp dword ptr [ebp - 0xc], 0x127cf3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x127cf3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae833 je 0x127ae843 */
  if (C.zf) goto L_127ae843;
  /* 127ae835 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae837 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127ae83a push eax */
  push32((uint32_t)(EAX));
  /* 127ae83b call 0x127a5210 */
  push32(0x127ae840u); f_127a5210();
  /* 127ae840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127ae843:;
  /* 127ae843 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae846 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae849 mov eax, dword ptr [ecx + 0x127cf4dc] */
  EAX = (r32((uint32_t)(ECX + 0x127cf4dc)));
L_127ae84f:;
  /* 127ae84f mov esp, ebp */
  ESP = (EBP);
  /* 127ae851 pop ebp */
  EBP = (pop32());
  /* 127ae852 ret  */
  ESPCHK(0x127ae6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e860 @ 0x127ae860 (256 bytes, 72 insns) */
void f_127ae860(void) {
  FTRACE(0x127ae860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae860 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae861 mov ebp, esp */
  EBP = (ESP);
  /* 127ae863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae866 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127ae86d cmp dword ptr [0x127cf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127cf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae874 jne 0x127ae894 */
  if (!C.zf) goto L_127ae894;
  /* 127ae876 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 127ae87b push 0x127cc078 */
  push32((uint32_t)(0x127cc078u));
  /* 127ae880 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae882 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 127ae887 call 0x127a4780 */
  push32(0x127ae88cu); f_127a4780();
  /* 127ae88c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae88f mov dword ptr [0x127cf4dc], eax */
  w32((uint32_t)(0x127cf4dc), (EAX));
L_127ae894:;
  /* 127ae894 mov eax, dword ptr [0x127cf4dc] */
  EAX = (r32((uint32_t)(0x127cf4dc)));
  /* 127ae899 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127ae89c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127ae8a3 jmp 0x127ae8ae */
  goto L_127ae8ae;
L_127ae8a5:;
  /* 127ae8a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae8a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae8ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_127ae8ae:;
  /* 127ae8ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae8b1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae8b4 mov eax, dword ptr [edx + 0x127cf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x127cf4dc)));
  /* 127ae8ba push eax */
  push32((uint32_t)(EAX));
  /* 127ae8bb push 0x127cc084 */
  push32((uint32_t)(0x127cc084u));
  /* 127ae8c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae8c3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae8c6 mov edx, dword ptr [ecx + 0x127cf4d8] */
  EDX = (r32((uint32_t)(ECX + 0x127cf4d8)));
  /* 127ae8cc push edx */
  push32((uint32_t)(EDX));
  /* 127ae8cd push 3 */
  push32((uint32_t)(0x3u));
  /* 127ae8cf mov eax, dword ptr [0x127cf4dc] */
  EAX = (r32((uint32_t)(0x127cf4dc)));
  /* 127ae8d4 push eax */
  push32((uint32_t)(EAX));
  /* 127ae8d5 call 0x127aeb00 */
  push32(0x127ae8dau); f_127aeb00();
  /* 127ae8da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae8dd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae8e1 jge 0x127ae929 */
  if ((C.sf==C.of)) goto L_127ae929;
  /* 127ae8e3 push 0x127cc070 */
  push32((uint32_t)(0x127cc070u));
  /* 127ae8e8 mov ecx, dword ptr [0x127cf4dc] */
  ECX = (r32((uint32_t)(0x127cf4dc)));
  /* 127ae8ee push ecx */
  push32((uint32_t)(ECX));
  /* 127ae8ef call 0x127a7740 */
  push32(0x127ae8f4u); f_127a7740();
  /* 127ae8f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae8f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae8fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae8fd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae900 mov eax, dword ptr [edx + 0x127cf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x127cf4dc)));
  /* 127ae906 push eax */
  push32((uint32_t)(EAX));
  /* 127ae907 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127ae90a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127ae90d mov edx, dword ptr [ecx + 0x127cf4dc] */
  EDX = (r32((uint32_t)(ECX + 0x127cf4dc)));
  /* 127ae913 push edx */
  push32((uint32_t)(EDX));
  /* 127ae914 call 0x127b0410 */
  push32(0x127ae919u); f_127b0410();
  /* 127ae919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae91c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae91e je 0x127ae927 */
  if (C.zf) goto L_127ae927;
  /* 127ae920 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127ae927:;
  /* 127ae927 jmp 0x127ae957 */
  goto L_127ae957;
L_127ae929:;
  /* 127ae929 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae92d jne 0x127ae936 */
  if (!C.zf) goto L_127ae936;
  /* 127ae92f mov eax, dword ptr [0x127cf4dc] */
  EAX = (r32((uint32_t)(0x127cf4dc)));
  /* 127ae934 jmp 0x127ae95c */
  goto L_127ae95c;
L_127ae936:;
  /* 127ae936 push 2 */
  push32((uint32_t)(0x2u));
  /* 127ae938 mov eax, dword ptr [0x127cf4dc] */
  EAX = (r32((uint32_t)(0x127cf4dc)));
  /* 127ae93d push eax */
  push32((uint32_t)(EAX));
  /* 127ae93e call 0x127a5210 */
  push32(0x127ae943u); f_127a5210();
  /* 127ae943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae946 mov dword ptr [0x127cf4dc], 0 */
  w32((uint32_t)(0x127cf4dc), (0x0u));
  /* 127ae950 mov eax, dword ptr [0x127cf4f4] */
  EAX = (r32((uint32_t)(0x127cf4f4)));
  /* 127ae955 jmp 0x127ae95c */
  goto L_127ae95c;
L_127ae957:;
  /* 127ae957 jmp 0x127ae8a5 */
  goto L_127ae8a5;
L_127ae95c:;
  /* 127ae95c mov esp, ebp */
  ESP = (EBP);
  /* 127ae95e pop ebp */
  EBP = (pop32());
  /* 127ae95f ret  */
  ESPCHK(0x127ae860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e960 @ 0x127ae960 (388 bytes, 115 insns) */
void f_127ae960(void) {
  FTRACE(0x127ae960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127ae960 push ebp */
  push32((uint32_t)(EBP));
  /* 127ae961 mov ebp, esp */
  EBP = (ESP);
  /* 127ae963 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127ae969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae96d jne 0x127ae976 */
  if (!C.zf) goto L_127ae976;
  /* 127ae96f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127ae971 jmp 0x127aeae0 */
  goto L_127aeae0;
L_127ae976:;
  /* 127ae976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae979 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127ae97c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae97f jne 0x127ae9d0 */
  if (!C.zf) goto L_127ae9d0;
  /* 127ae981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae984 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127ae988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae98a jne 0x127ae9d0 */
  if (!C.zf) goto L_127ae9d0;
  /* 127ae98c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae98f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 127ae992 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae995 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 127ae999 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae99d je 0x127ae9b9 */
  if (C.zf) goto L_127ae9b9;
  /* 127ae99f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ae9a2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 127ae9a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ae9aa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 127ae9b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127ae9b3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_127ae9b9:;
  /* 127ae9b9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127ae9bd je 0x127ae9c8 */
  if (C.zf) goto L_127ae9c8;
  /* 127ae9bf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127ae9c2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_127ae9c8:;
  /* 127ae9c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127ae9cb jmp 0x127aeae0 */
  goto L_127aeae0;
L_127ae9d0:;
  /* 127ae9d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127ae9d4 push 0x127cf450 */
  push32((uint32_t)(0x127cf450u));
  /* 127ae9d9 call 0x127b0410 */
  push32(0x127ae9deu); f_127b0410();
  /* 127ae9de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae9e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae9e3 je 0x127aea98 */
  if (C.zf) goto L_127aea98;
  /* 127ae9e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127ae9ec push edx */
  push32((uint32_t)(EDX));
  /* 127ae9ed push 0x127cf3cc */
  push32((uint32_t)(0x127cf3ccu));
  /* 127ae9f2 call 0x127b0410 */
  push32(0x127ae9f7u); f_127b0410();
  /* 127ae9f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127ae9fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127ae9fc je 0x127aea98 */
  if (C.zf) goto L_127aea98;
  /* 127aea02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aea05 push eax */
  push32((uint32_t)(EAX));
  /* 127aea06 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 127aea0c push ecx */
  push32((uint32_t)(ECX));
  /* 127aea0d call 0x127aeb50 */
  push32(0x127aea12u); f_127aeb50();
  /* 127aea12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aea15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aea17 je 0x127aea20 */
  if (C.zf) goto L_127aea20;
  /* 127aea19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aea1b jmp 0x127aeae0 */
  goto L_127aeae0;
L_127aea20:;
  /* 127aea20 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 127aea26 push edx */
  push32((uint32_t)(EDX));
  /* 127aea27 push 0x127d0738 */
  push32((uint32_t)(0x127d0738u));
  /* 127aea2c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 127aea32 push eax */
  push32((uint32_t)(EAX));
  /* 127aea33 call 0x127b0560 */
  push32(0x127aea38u); f_127b0560();
  /* 127aea38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aea3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aea3d jne 0x127aea46 */
  if (!C.zf) goto L_127aea46;
  /* 127aea3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aea41 jmp 0x127aeae0 */
  goto L_127aeae0;
L_127aea46:;
  /* 127aea46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aea48 mov cx, word ptr [0x127d073c] */
  CX = (r16((uint32_t)(0x127d073c)));
  /* 127aea4f mov dword ptr [0x127d0740], ecx */
  w32((uint32_t)(0x127d0740), (ECX));
  /* 127aea55 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 127aea5b push edx */
  push32((uint32_t)(EDX));
  /* 127aea5c push 0x127cf450 */
  push32((uint32_t)(0x127cf450u));
  /* 127aea61 call 0x127aecb0 */
  push32(0x127aea66u); f_127aecb0();
  /* 127aea66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aea69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aea6c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127aea6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aea71 je 0x127aea86 */
  if (C.zf) goto L_127aea86;
  /* 127aea73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aea76 push edx */
  push32((uint32_t)(EDX));
  /* 127aea77 push 0x127cf3cc */
  push32((uint32_t)(0x127cf3ccu));
  /* 127aea7c call 0x127a7730 */
  push32(0x127aea81u); f_127a7730();
  /* 127aea81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aea84 jmp 0x127aea98 */
  goto L_127aea98;
L_127aea86:;
  /* 127aea86 push 0x127cf450 */
  push32((uint32_t)(0x127cf450u));
  /* 127aea8b push 0x127cf3cc */
  push32((uint32_t)(0x127cf3ccu));
  /* 127aea90 call 0x127a7730 */
  push32(0x127aea95u); f_127a7730();
  /* 127aea95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127aea98:;
  /* 127aea98 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aea9c je 0x127aeab1 */
  if (C.zf) goto L_127aeab1;
  /* 127aea9e push 6 */
  push32((uint32_t)(0x6u));
  /* 127aeaa0 push 0x127d0738 */
  push32((uint32_t)(0x127d0738u));
  /* 127aeaa5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127aeaa8 push eax */
  push32((uint32_t)(EAX));
  /* 127aeaa9 call 0x127ab060 */
  push32(0x127aeaaeu); f_127ab060();
  /* 127aeaae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127aeab1:;
  /* 127aeab1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aeab5 je 0x127aeaca */
  if (C.zf) goto L_127aeaca;
  /* 127aeab7 push 4 */
  push32((uint32_t)(0x4u));
  /* 127aeab9 push 0x127d0740 */
  push32((uint32_t)(0x127d0740u));
  /* 127aeabe mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127aeac1 push ecx */
  push32((uint32_t)(ECX));
  /* 127aeac2 call 0x127ab060 */
  push32(0x127aeac7u); f_127ab060();
  /* 127aeac7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127aeaca:;
  /* 127aeaca push 0x127cf450 */
  push32((uint32_t)(0x127cf450u));
  /* 127aeacf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aead2 push edx */
  push32((uint32_t)(EDX));
  /* 127aead3 call 0x127a7730 */
  push32(0x127aead8u); f_127a7730();
  /* 127aead8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeadb mov eax, 0x127cf450 */
  EAX = (0x127cf450u);
L_127aeae0:;
  /* 127aeae0 mov esp, ebp */
  ESP = (EBP);
  /* 127aeae2 pop ebp */
  EBP = (pop32());
  /* 127aeae3 ret  */
  ESPCHK(0x127ae960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaf0 @ 0x127aeaf0 (7 bytes, 5 insns) */
void f_127aeaf0(void) {
  FTRACE(0x127aeaf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aeaf0 push ebp */
  push32((uint32_t)(EBP));
  /* 127aeaf1 mov ebp, esp */
  EBP = (ESP);
  /* 127aeaf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aeaf5 pop ebp */
  EBP = (pop32());
  /* 127aeaf6 ret  */
  ESPCHK(0x127aeaf0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x127aeb00 (79 bytes, 28 insns) */
void f_127aeb00(void) {
  FTRACE(0x127aeb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aeb00 push ebp */
  push32((uint32_t)(EBP));
  /* 127aeb01 mov ebp, esp */
  EBP = (ESP);
  /* 127aeb03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aeb06 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 127aeb09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aeb0c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127aeb13 jmp 0x127aeb1e */
  goto L_127aeb1e;
L_127aeb15:;
  /* 127aeb15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aeb18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeb1b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127aeb1e:;
  /* 127aeb1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aeb21 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aeb24 jge 0x127aeb44 */
  if ((C.sf==C.of)) goto L_127aeb44;
  /* 127aeb26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aeb29 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeb2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aeb2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aeb32 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 127aeb35 push edx */
  push32((uint32_t)(EDX));
  /* 127aeb36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aeb39 push eax */
  push32((uint32_t)(EAX));
  /* 127aeb3a call 0x127a7740 */
  push32(0x127aeb3fu); f_127a7740();
  /* 127aeb3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeb42 jmp 0x127aeb15 */
  goto L_127aeb15;
L_127aeb44:;
  /* 127aeb44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127aeb4b mov esp, ebp */
  ESP = (EBP);
  /* 127aeb4d pop ebp */
  EBP = (pop32());
  /* 127aeb4e ret  */
  ESPCHK(0x127aeb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb50 @ 0x127aeb50 (349 bytes, 122 insns) */
void f_127aeb50(void) {
  FTRACE(0x127aeb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aeb50 push ebp */
  push32((uint32_t)(EBP));
  /* 127aeb51 mov ebp, esp */
  EBP = (ESP);
  /* 127aeb53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aeb56 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 127aeb5b push 0 */
  push32((uint32_t)(0x0u));
  /* 127aeb5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aeb60 push eax */
  push32((uint32_t)(EAX));
  /* 127aeb61 call 0x127a84f0 */
  push32(0x127aeb66u); f_127a84f0();
  /* 127aeb66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeb69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aeb6c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127aeb6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127aeb71 jne 0x127aeb7a */
  if (!C.zf) goto L_127aeb7a;
  /* 127aeb73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aeb75 jmp 0x127aeca9 */
  goto L_127aeca9;
L_127aeb7a:;
  /* 127aeb7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aeb7d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127aeb80 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aeb83 jne 0x127aebb0 */
  if (!C.zf) goto L_127aebb0;
  /* 127aeb85 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aeb88 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 127aeb8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aeb8e je 0x127aebb0 */
  if (C.zf) goto L_127aebb0;
  /* 127aeb90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aeb93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeb96 push ecx */
  push32((uint32_t)(ECX));
  /* 127aeb97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aeb9a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeba0 push edx */
  push32((uint32_t)(EDX));
  /* 127aeba1 call 0x127a7730 */
  push32(0x127aeba6u); f_127a7730();
  /* 127aeba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeba9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aebab jmp 0x127aeca9 */
  goto L_127aeca9;
L_127aebb0:;
  /* 127aebb0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127aebb7 jmp 0x127aebc2 */
  goto L_127aebc2;
L_127aebb9:;
  /* 127aebb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aebbc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aebbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127aebc2:;
  /* 127aebc2 push 0x127cc088 */
  push32((uint32_t)(0x127cc088u));
  /* 127aebc7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aebca push ecx */
  push32((uint32_t)(ECX));
  /* 127aebcb call 0x127b04a0 */
  push32(0x127aebd0u); f_127b04a0();
  /* 127aebd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aebd3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127aebd6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aebda jne 0x127aebe4 */
  if (!C.zf) goto L_127aebe4;
  /* 127aebdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127aebdf jmp 0x127aeca9 */
  goto L_127aeca9;
L_127aebe4:;
  /* 127aebe4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aebe7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aebea mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127aebec mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 127aebef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aebf3 jne 0x127aec1a */
  if (!C.zf) goto L_127aec1a;
  /* 127aebf5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aebf9 jge 0x127aec1a */
  if ((C.sf==C.of)) goto L_127aec1a;
  /* 127aebfb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127aebff cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aec02 je 0x127aec1a */
  if (C.zf) goto L_127aec1a;
  /* 127aec04 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aec07 push edx */
  push32((uint32_t)(EDX));
  /* 127aec08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aec0b push eax */
  push32((uint32_t)(EAX));
  /* 127aec0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aec0f push ecx */
  push32((uint32_t)(ECX));
  /* 127aec10 call 0x127a7fa0 */
  push32(0x127aec15u); f_127a7fa0();
  /* 127aec15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aec18 jmp 0x127aec80 */
  goto L_127aec80;
L_127aec1a:;
  /* 127aec1a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aec1e jne 0x127aec48 */
  if (!C.zf) goto L_127aec48;
  /* 127aec20 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aec24 jge 0x127aec48 */
  if ((C.sf==C.of)) goto L_127aec48;
  /* 127aec26 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127aec2a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aec2d je 0x127aec48 */
  if (C.zf) goto L_127aec48;
  /* 127aec2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aec32 push eax */
  push32((uint32_t)(EAX));
  /* 127aec33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aec36 push ecx */
  push32((uint32_t)(ECX));
  /* 127aec37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aec3a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aec3d push edx */
  push32((uint32_t)(EDX));
  /* 127aec3e call 0x127a7fa0 */
  push32(0x127aec43u); f_127a7fa0();
  /* 127aec43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aec46 jmp 0x127aec80 */
  goto L_127aec80;
L_127aec48:;
  /* 127aec48 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aec4c jne 0x127aec7b */
  if (!C.zf) goto L_127aec7b;
  /* 127aec4e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127aec52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aec54 je 0x127aec5f */
  if (C.zf) goto L_127aec5f;
  /* 127aec56 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127aec5a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aec5d jne 0x127aec7b */
  if (!C.zf) goto L_127aec7b;
L_127aec5f:;
  /* 127aec5f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aec62 push edx */
  push32((uint32_t)(EDX));
  /* 127aec63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aec66 push eax */
  push32((uint32_t)(EAX));
  /* 127aec67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aec6a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aec70 push ecx */
  push32((uint32_t)(ECX));
  /* 127aec71 call 0x127a7fa0 */
  push32(0x127aec76u); f_127a7fa0();
  /* 127aec76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aec79 jmp 0x127aec80 */
  goto L_127aec80;
L_127aec7b:;
  /* 127aec7b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127aec7e jmp 0x127aeca9 */
  goto L_127aeca9;
L_127aec80:;
  /* 127aec80 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127aec84 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aec87 jne 0x127aec8b */
  if (!C.zf) goto L_127aec8b;
  /* 127aec89 jmp 0x127aeca7 */
  goto L_127aeca7;
L_127aec8b:;
  /* 127aec8b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127aec8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aec91 jne 0x127aec95 */
  if (!C.zf) goto L_127aec95;
  /* 127aec93 jmp 0x127aeca7 */
  goto L_127aeca7;
L_127aec95:;
  /* 127aec95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127aec98 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aec9b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 127aec9f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 127aeca2 jmp 0x127aebb9 */
  goto L_127aebb9;
L_127aeca7:;
  /* 127aeca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127aeca9:;
  /* 127aeca9 mov esp, ebp */
  ESP = (EBP);
  /* 127aecab pop ebp */
  EBP = (pop32());
  /* 127aecac ret  */
  ESPCHK(0x127aeb50u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x127aecb0 (101 bytes, 36 insns) */
void f_127aecb0(void) {
  FTRACE(0x127aecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 127aecb1 mov ebp, esp */
  EBP = (ESP);
  /* 127aecb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aecb6 push eax */
  push32((uint32_t)(EAX));
  /* 127aecb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aecba push ecx */
  push32((uint32_t)(ECX));
  /* 127aecbb call 0x127a7730 */
  push32(0x127aecc0u); f_127a7730();
  /* 127aecc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aecc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aecc6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 127aecca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aeccc je 0x127aece8 */
  if (C.zf) goto L_127aece8;
  /* 127aecce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aecd1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aecd4 push ecx */
  push32((uint32_t)(ECX));
  /* 127aecd5 push 0x127cc090 */
  push32((uint32_t)(0x127cc090u));
  /* 127aecda push 2 */
  push32((uint32_t)(0x2u));
  /* 127aecdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aecdf push edx */
  push32((uint32_t)(EDX));
  /* 127aece0 call 0x127aeb00 */
  push32(0x127aece5u); f_127aeb00();
  /* 127aece5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127aece8:;
  /* 127aece8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aeceb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 127aecf2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aecf4 je 0x127aed13 */
  if (C.zf) goto L_127aed13;
  /* 127aecf6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127aecf9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aecff push edx */
  push32((uint32_t)(EDX));
  /* 127aed00 push 0x127cc08c */
  push32((uint32_t)(0x127cc08cu));
  /* 127aed05 push 2 */
  push32((uint32_t)(0x2u));
  /* 127aed07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aed0a push eax */
  push32((uint32_t)(EAX));
  /* 127aed0b call 0x127aeb00 */
  push32(0x127aed10u); f_127aeb00();
  /* 127aed10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127aed13:;
  /* 127aed13 pop ebp */
  EBP = (pop32());
  /* 127aed14 ret  */
  ESPCHK(0x127aecb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed20 @ 0x127aed20 (130 bytes, 50 insns) */
void f_127aed20(void) {
  FTRACE(0x127aed20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aed20 push ebp */
  push32((uint32_t)(EBP));
  /* 127aed21 mov ebp, esp */
  EBP = (ESP);
  /* 127aed23 push ecx */
  push32((uint32_t)(ECX));
  /* 127aed24 push ebx */
  push32((uint32_t)(EBX));
  /* 127aed25 push esi */
  push32((uint32_t)(ESI));
  /* 127aed26 push edi */
  push32((uint32_t)(EDI));
  /* 127aed27 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127aed2e:;
  /* 127aed2e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aed32 jne 0x127aed52 */
  if (!C.zf) goto L_127aed52;
  /* 127aed34 push 0x127cc0a0 */
  push32((uint32_t)(0x127cc0a0u));
  /* 127aed39 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aed3b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 127aed3d push 0x127cc094 */
  push32((uint32_t)(0x127cc094u));
  /* 127aed42 push 2 */
  push32((uint32_t)(0x2u));
  /* 127aed44 call 0x127a3840 */
  push32(0x127aed49u); f_127a3840();
  /* 127aed49 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aed4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aed4f jne 0x127aed52 */
  if (!C.zf) goto L_127aed52;
  /* 127aed51 int3  */
  x86_unimpl("int3 @ 0x127aed51");
L_127aed52:;
  /* 127aed52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aed54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aed56 jne 0x127aed2e */
  if (!C.zf) goto L_127aed2e;
  /* 127aed58 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aed5b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127aed5e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 127aed61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127aed63 je 0x127aed71 */
  if (C.zf) goto L_127aed71;
  /* 127aed65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aed68 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 127aed6f jmp 0x127aed98 */
  goto L_127aed98;
L_127aed71:;
  /* 127aed71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aed74 push ecx */
  push32((uint32_t)(ECX));
  /* 127aed75 call 0x127ad590 */
  push32(0x127aed7au); f_127ad590();
  /* 127aed7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aed7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aed80 push edx */
  push32((uint32_t)(EDX));
  /* 127aed81 call 0x127aedb0 */
  push32(0x127aed86u); f_127aedb0();
  /* 127aed86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aed89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aed8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aed8f push eax */
  push32((uint32_t)(EAX));
  /* 127aed90 call 0x127ad600 */
  push32(0x127aed95u); f_127ad600();
  /* 127aed95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127aed98:;
  /* 127aed98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aed9b pop edi */
  EDI = (pop32());
  /* 127aed9c pop esi */
  ESI = (pop32());
  /* 127aed9d pop ebx */
  EBX = (pop32());
  /* 127aed9e mov esp, ebp */
  ESP = (EBP);
  /* 127aeda0 pop ebp */
  EBP = (pop32());
  /* 127aeda1 ret  */
  ESPCHK(0x127aed20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edb0 @ 0x127aedb0 (190 bytes, 67 insns) */
void f_127aedb0(void) {
  FTRACE(0x127aedb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aedb0 push ebp */
  push32((uint32_t)(EBP));
  /* 127aedb1 mov ebp, esp */
  EBP = (ESP);
  /* 127aedb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aedb6 push ebx */
  push32((uint32_t)(EBX));
  /* 127aedb7 push esi */
  push32((uint32_t)(ESI));
  /* 127aedb8 push edi */
  push32((uint32_t)(EDI));
  /* 127aedb9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127aedc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aedc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127aedc6:;
  /* 127aedc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aedca jne 0x127aedea */
  if (!C.zf) goto L_127aedea;
  /* 127aedcc push 0x127cbf40 */
  push32((uint32_t)(0x127cbf40u));
  /* 127aedd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aedd3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 127aedd5 push 0x127cc094 */
  push32((uint32_t)(0x127cc094u));
  /* 127aedda push 2 */
  push32((uint32_t)(0x2u));
  /* 127aeddc call 0x127a3840 */
  push32(0x127aede1u); f_127a3840();
  /* 127aede1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aede4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aede7 jne 0x127aedea */
  if (!C.zf) goto L_127aedea;
  /* 127aede9 int3  */
  x86_unimpl("int3 @ 0x127aede9");
L_127aedea:;
  /* 127aedea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127aedec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aedee jne 0x127aedc6 */
  if (!C.zf) goto L_127aedc6;
  /* 127aedf0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aedf3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 127aedf6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 127aedfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aedfd je 0x127aee5a */
  if (C.zf) goto L_127aee5a;
  /* 127aedff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aee02 push ecx */
  push32((uint32_t)(ECX));
  /* 127aee03 call 0x127ae0b0 */
  push32(0x127aee08u); f_127ae0b0();
  /* 127aee08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aee0b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aee0e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aee11 push edx */
  push32((uint32_t)(EDX));
  /* 127aee12 call 0x127b1430 */
  push32(0x127aee17u); f_127b1430();
  /* 127aee17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aee1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aee1d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127aee20 push ecx */
  push32((uint32_t)(ECX));
  /* 127aee21 call 0x127b1300 */
  push32(0x127aee26u); f_127b1300();
  /* 127aee26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aee29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aee2b jge 0x127aee36 */
  if ((C.sf==C.of)) goto L_127aee36;
  /* 127aee2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 127aee34 jmp 0x127aee5a */
  goto L_127aee5a;
L_127aee36:;
  /* 127aee36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aee39 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aee3d je 0x127aee5a */
  if (C.zf) goto L_127aee5a;
  /* 127aee3f push 2 */
  push32((uint32_t)(0x2u));
  /* 127aee41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aee44 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127aee47 push ecx */
  push32((uint32_t)(ECX));
  /* 127aee48 call 0x127a5210 */
  push32(0x127aee4du); f_127a5210();
  /* 127aee4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aee50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aee53 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_127aee5a:;
  /* 127aee5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aee5d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 127aee64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aee67 pop edi */
  EDI = (pop32());
  /* 127aee68 pop esi */
  ESI = (pop32());
  /* 127aee69 pop ebx */
  EBX = (pop32());
  /* 127aee6a mov esp, ebp */
  ESP = (EBP);
  /* 127aee6c pop ebp */
  EBP = (pop32());
  /* 127aee6d ret  */
  ESPCHK(0x127aedb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee70 @ 0x127aee70 (210 bytes, 63 insns) */
void f_127aee70(void) {
  FTRACE(0x127aee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aee70 push ebp */
  push32((uint32_t)(EBP));
  /* 127aee71 mov ebp, esp */
  EBP = (ESP);
  /* 127aee73 push ecx */
  push32((uint32_t)(ECX));
  /* 127aee74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aee77 cmp eax, dword ptr [0x127d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aee7d jae 0x127aeea1 */
  if (!C.cf) goto L_127aeea1;
  /* 127aee7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aee82 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127aee85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aee88 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127aee8b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127aee8e mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127aee95 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127aee9a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127aee9d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aee9f jne 0x127aeeb4 */
  if (!C.zf) goto L_127aeeb4;
L_127aeea1:;
  /* 127aeea1 call 0x127ac650 */
  push32(0x127aeea6u); f_127ac650();
  /* 127aeea6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127aeeac or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127aeeaf jmp 0x127aef3e */
  goto L_127aef3e;
L_127aeeb4:;
  /* 127aeeb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aeeb7 push edx */
  push32((uint32_t)(EDX));
  /* 127aeeb8 call 0x127ade70 */
  push32(0x127aeebdu); f_127ade70();
  /* 127aeebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aeec3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127aeec6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aeec9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127aeecc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127aeecf mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127aeed6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 127aeedb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 127aeede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aeee0 je 0x127aef1d */
  if (C.zf) goto L_127aef1d;
  /* 127aeee2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aeee5 push ecx */
  push32((uint32_t)(ECX));
  /* 127aeee6 call 0x127adcf0 */
  push32(0x127aeeebu); f_127adcf0();
  /* 127aeeeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aeeee push eax */
  push32((uint32_t)(EAX));
  /* 127aeeef call dword ptr [0x127d3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3274))), 0x127aeef5u);
  /* 127aeef5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aeef7 jne 0x127aef04 */
  if (!C.zf) goto L_127aef04;
  /* 127aeef9 call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127aeeffu);
  /* 127aeeff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aef02 jmp 0x127aef0b */
  goto L_127aef0b;
L_127aef04:;
  /* 127aef04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127aef0b:;
  /* 127aef0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aef0f jne 0x127aef13 */
  if (!C.zf) goto L_127aef13;
  /* 127aef11 jmp 0x127aef2f */
  goto L_127aef2f;
L_127aef13:;
  /* 127aef13 call 0x127ac660 */
  push32(0x127aef18u); f_127ac660();
  /* 127aef18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aef1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_127aef1d:;
  /* 127aef1d call 0x127ac650 */
  push32(0x127aef22u); f_127ac650();
  /* 127aef22 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127aef28 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_127aef2f:;
  /* 127aef2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aef32 push eax */
  push32((uint32_t)(EAX));
  /* 127aef33 call 0x127adf00 */
  push32(0x127aef38u); f_127adf00();
  /* 127aef38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aef3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127aef3e:;
  /* 127aef3e mov esp, ebp */
  ESP = (EBP);
  /* 127aef40 pop ebp */
  EBP = (pop32());
  /* 127aef41 ret  */
  ESPCHK(0x127aee70u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x127aef50 (219 bytes, 64 insns) */
void f_127aef50(void) {
  FTRACE(0x127aef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aef50 push ebp */
  push32((uint32_t)(EBP));
  /* 127aef51 mov ebp, esp */
  EBP = (ESP);
  /* 127aef53 push ecx */
  push32((uint32_t)(ECX));
  /* 127aef54 cmp dword ptr [0x127d0724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aef5b je 0x127aeff1 */
  if (C.zf) goto L_127aeff1;
  /* 127aef61 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 127aef63 push 0x127cc0b0 */
  push32((uint32_t)(0x127cc0b0u));
  /* 127aef68 push 2 */
  push32((uint32_t)(0x2u));
  /* 127aef6a push 0xac */
  push32((uint32_t)(0xacu));
  /* 127aef6f push 1 */
  push32((uint32_t)(0x1u));
  /* 127aef71 call 0x127a4b90 */
  push32(0x127aef76u); f_127a4b90();
  /* 127aef76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aef79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127aef7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aef80 jne 0x127aef8c */
  if (!C.zf) goto L_127aef8c;
  /* 127aef82 mov eax, 1 */
  EAX = (0x1u);
  /* 127aef87 jmp 0x127af027 */
  goto L_127af027;
L_127aef8c:;
  /* 127aef8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aef8f push eax */
  push32((uint32_t)(EAX));
  /* 127aef90 call 0x127af030 */
  push32(0x127aef95u); f_127af030();
  /* 127aef95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aef98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127aef9a je 0x127aefbd */
  if (C.zf) goto L_127aefbd;
  /* 127aef9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aef9f push ecx */
  push32((uint32_t)(ECX));
  /* 127aefa0 call 0x127af5c0 */
  push32(0x127aefa5u); f_127af5c0();
  /* 127aefa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aefa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127aefaa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aefad push edx */
  push32((uint32_t)(EDX));
  /* 127aefae call 0x127a5210 */
  push32(0x127aefb3u); f_127a5210();
  /* 127aefb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aefb6 mov eax, 1 */
  EAX = (0x1u);
  /* 127aefbb jmp 0x127af027 */
  goto L_127af027;
L_127aefbd:;
  /* 127aefbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aefc0 mov dword ptr [0x127cfc98], eax */
  w32((uint32_t)(0x127cfc98), (EAX));
  /* 127aefc5 mov ecx, dword ptr [0x127d0744] */
  ECX = (r32((uint32_t)(0x127d0744)));
  /* 127aefcb push ecx */
  push32((uint32_t)(ECX));
  /* 127aefcc call 0x127af5c0 */
  push32(0x127aefd1u); f_127af5c0();
  /* 127aefd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aefd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127aefd6 mov edx, dword ptr [0x127d0744] */
  EDX = (r32((uint32_t)(0x127d0744)));
  /* 127aefdc push edx */
  push32((uint32_t)(EDX));
  /* 127aefdd call 0x127a5210 */
  push32(0x127aefe2u); f_127a5210();
  /* 127aefe2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aefe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aefe8 mov dword ptr [0x127d0744], eax */
  w32((uint32_t)(0x127d0744), (EAX));
  /* 127aefed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127aefef jmp 0x127af027 */
  goto L_127af027;
L_127aeff1:;
  /* 127aeff1 mov dword ptr [0x127cfc98], 0x127cfca0 */
  w32((uint32_t)(0x127cfc98), (0x127cfca0u));
  /* 127aeffb mov ecx, dword ptr [0x127d0744] */
  ECX = (r32((uint32_t)(0x127d0744)));
  /* 127af001 push ecx */
  push32((uint32_t)(ECX));
  /* 127af002 call 0x127af5c0 */
  push32(0x127af007u); f_127af5c0();
  /* 127af007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af00a push 2 */
  push32((uint32_t)(0x2u));
  /* 127af00c mov edx, dword ptr [0x127d0744] */
  EDX = (r32((uint32_t)(0x127d0744)));
  /* 127af012 push edx */
  push32((uint32_t)(EDX));
  /* 127af013 call 0x127a5210 */
  push32(0x127af018u); f_127a5210();
  /* 127af018 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af01b mov dword ptr [0x127d0744], 0 */
  w32((uint32_t)(0x127d0744), (0x0u));
  /* 127af025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127af027:;
  /* 127af027 mov esp, ebp */
  ESP = (EBP);
  /* 127af029 pop ebp */
  EBP = (pop32());
  /* 127af02a ret  */
  ESPCHK(0x127aef50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f030 @ 0x127af030 (1423 bytes, 533 insns) */
void f_127af030(void) {
  FTRACE(0x127af030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127af030 push ebp */
  push32((uint32_t)(EBP));
  /* 127af031 mov ebp, esp */
  EBP = (ESP);
  /* 127af033 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127af036 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127af03d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127af03f mov ax, word ptr [0x127d077e] */
  AX = (r16((uint32_t)(0x127d077e)));
  /* 127af045 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127af048 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127af04a mov cx, word ptr [0x127d0780] */
  CX = (r16((uint32_t)(0x127d0780)));
  /* 127af051 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127af054 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127af058 jne 0x127af062 */
  if (!C.zf) goto L_127af062;
  /* 127af05a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127af05d jmp 0x127af5bb */
  goto L_127af5bb;
L_127af062:;
  /* 127af062 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af065 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af068 push edx */
  push32((uint32_t)(EDX));
  /* 127af069 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 127af06b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af06e push eax */
  push32((uint32_t)(EAX));
  /* 127af06f push 1 */
  push32((uint32_t)(0x1u));
  /* 127af071 call 0x127b2940 */
  push32(0x127af076u); f_127b2940();
  /* 127af076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af079 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af07c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af07e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af084 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af087 push edx */
  push32((uint32_t)(EDX));
  /* 127af088 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 127af08a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af08d push eax */
  push32((uint32_t)(EAX));
  /* 127af08e push 1 */
  push32((uint32_t)(0x1u));
  /* 127af090 call 0x127b2940 */
  push32(0x127af095u); f_127b2940();
  /* 127af095 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af098 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af09b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af09d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af0a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af0a3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af0a6 push edx */
  push32((uint32_t)(EDX));
  /* 127af0a7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 127af0a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af0ac push eax */
  push32((uint32_t)(EAX));
  /* 127af0ad push 1 */
  push32((uint32_t)(0x1u));
  /* 127af0af call 0x127b2940 */
  push32(0x127af0b4u); f_127b2940();
  /* 127af0b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af0b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af0ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af0bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af0bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af0c2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af0c5 push edx */
  push32((uint32_t)(EDX));
  /* 127af0c6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 127af0c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af0cb push eax */
  push32((uint32_t)(EAX));
  /* 127af0cc push 1 */
  push32((uint32_t)(0x1u));
  /* 127af0ce call 0x127b2940 */
  push32(0x127af0d3u); f_127b2940();
  /* 127af0d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af0d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af0d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af0db mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af0de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af0e1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af0e4 push edx */
  push32((uint32_t)(EDX));
  /* 127af0e5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 127af0e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af0ea push eax */
  push32((uint32_t)(EAX));
  /* 127af0eb push 1 */
  push32((uint32_t)(0x1u));
  /* 127af0ed call 0x127b2940 */
  push32(0x127af0f2u); f_127b2940();
  /* 127af0f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af0f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af0f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af0fa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af0fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af100 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af103 push edx */
  push32((uint32_t)(EDX));
  /* 127af104 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 127af106 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af109 push eax */
  push32((uint32_t)(EAX));
  /* 127af10a push 1 */
  push32((uint32_t)(0x1u));
  /* 127af10c call 0x127b2940 */
  push32(0x127af111u); f_127b2940();
  /* 127af111 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af114 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af117 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af119 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af11c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af11f push edx */
  push32((uint32_t)(EDX));
  /* 127af120 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 127af122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af125 push eax */
  push32((uint32_t)(EAX));
  /* 127af126 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af128 call 0x127b2940 */
  push32(0x127af12du); f_127b2940();
  /* 127af12d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af130 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af133 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af135 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af138 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af13b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af13e push edx */
  push32((uint32_t)(EDX));
  /* 127af13f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 127af141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af144 push eax */
  push32((uint32_t)(EAX));
  /* 127af145 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af147 call 0x127b2940 */
  push32(0x127af14cu); f_127b2940();
  /* 127af14c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af14f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af152 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af154 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af157 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af15a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af15d push edx */
  push32((uint32_t)(EDX));
  /* 127af15e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 127af160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af163 push eax */
  push32((uint32_t)(EAX));
  /* 127af164 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af166 call 0x127b2940 */
  push32(0x127af16bu); f_127b2940();
  /* 127af16b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af16e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af171 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af173 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af176 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af179 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af17c push edx */
  push32((uint32_t)(EDX));
  /* 127af17d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 127af17f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af182 push eax */
  push32((uint32_t)(EAX));
  /* 127af183 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af185 call 0x127b2940 */
  push32(0x127af18au); f_127b2940();
  /* 127af18a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af18d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af190 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af192 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af198 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af19b push edx */
  push32((uint32_t)(EDX));
  /* 127af19c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 127af19e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af1a1 push eax */
  push32((uint32_t)(EAX));
  /* 127af1a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af1a4 call 0x127b2940 */
  push32(0x127af1a9u); f_127b2940();
  /* 127af1a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af1ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af1af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af1b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af1b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af1b7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af1ba push edx */
  push32((uint32_t)(EDX));
  /* 127af1bb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 127af1bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af1c0 push eax */
  push32((uint32_t)(EAX));
  /* 127af1c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af1c3 call 0x127b2940 */
  push32(0x127af1c8u); f_127b2940();
  /* 127af1c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af1cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af1ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af1d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af1d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af1d6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af1d9 push edx */
  push32((uint32_t)(EDX));
  /* 127af1da push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 127af1dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af1df push eax */
  push32((uint32_t)(EAX));
  /* 127af1e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af1e2 call 0x127b2940 */
  push32(0x127af1e7u); f_127b2940();
  /* 127af1e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af1ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af1ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af1ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af1f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af1f5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af1f8 push edx */
  push32((uint32_t)(EDX));
  /* 127af1f9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127af1fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af1fe push eax */
  push32((uint32_t)(EAX));
  /* 127af1ff push 1 */
  push32((uint32_t)(0x1u));
  /* 127af201 call 0x127b2940 */
  push32(0x127af206u); f_127b2940();
  /* 127af206 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af209 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af20c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af20e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af211 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af214 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af217 push edx */
  push32((uint32_t)(EDX));
  /* 127af218 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 127af21a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af21d push eax */
  push32((uint32_t)(EAX));
  /* 127af21e push 1 */
  push32((uint32_t)(0x1u));
  /* 127af220 call 0x127b2940 */
  push32(0x127af225u); f_127b2940();
  /* 127af225 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af228 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af22b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af22d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af230 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af233 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af236 push edx */
  push32((uint32_t)(EDX));
  /* 127af237 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 127af239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af23c push eax */
  push32((uint32_t)(EAX));
  /* 127af23d push 1 */
  push32((uint32_t)(0x1u));
  /* 127af23f call 0x127b2940 */
  push32(0x127af244u); f_127b2940();
  /* 127af244 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af247 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af24a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af24c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af24f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af252 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af255 push edx */
  push32((uint32_t)(EDX));
  /* 127af256 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 127af258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af25b push eax */
  push32((uint32_t)(EAX));
  /* 127af25c push 1 */
  push32((uint32_t)(0x1u));
  /* 127af25e call 0x127b2940 */
  push32(0x127af263u); f_127b2940();
  /* 127af263 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af266 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af269 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af26b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af26e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af271 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af274 push edx */
  push32((uint32_t)(EDX));
  /* 127af275 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 127af277 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af27a push eax */
  push32((uint32_t)(EAX));
  /* 127af27b push 1 */
  push32((uint32_t)(0x1u));
  /* 127af27d call 0x127b2940 */
  push32(0x127af282u); f_127b2940();
  /* 127af282 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af285 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af288 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af28a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af28d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af290 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af293 push edx */
  push32((uint32_t)(EDX));
  /* 127af294 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 127af296 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af299 push eax */
  push32((uint32_t)(EAX));
  /* 127af29a push 1 */
  push32((uint32_t)(0x1u));
  /* 127af29c call 0x127b2940 */
  push32(0x127af2a1u); f_127b2940();
  /* 127af2a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af2a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af2a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af2a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af2ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af2af add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af2b2 push edx */
  push32((uint32_t)(EDX));
  /* 127af2b3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 127af2b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af2b8 push eax */
  push32((uint32_t)(EAX));
  /* 127af2b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af2bb call 0x127b2940 */
  push32(0x127af2c0u); f_127b2940();
  /* 127af2c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af2c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af2c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af2c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af2cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af2ce add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af2d1 push edx */
  push32((uint32_t)(EDX));
  /* 127af2d2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 127af2d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af2d7 push eax */
  push32((uint32_t)(EAX));
  /* 127af2d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af2da call 0x127b2940 */
  push32(0x127af2dfu); f_127b2940();
  /* 127af2df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af2e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af2e5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af2e7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af2ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af2ed add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af2f0 push edx */
  push32((uint32_t)(EDX));
  /* 127af2f1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 127af2f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af2f6 push eax */
  push32((uint32_t)(EAX));
  /* 127af2f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af2f9 call 0x127b2940 */
  push32(0x127af2feu); f_127b2940();
  /* 127af2fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af301 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af304 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af306 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af309 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af30c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af30f push edx */
  push32((uint32_t)(EDX));
  /* 127af310 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 127af312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af315 push eax */
  push32((uint32_t)(EAX));
  /* 127af316 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af318 call 0x127b2940 */
  push32(0x127af31du); f_127b2940();
  /* 127af31d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af320 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af323 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af325 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af328 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af32b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af32e push edx */
  push32((uint32_t)(EDX));
  /* 127af32f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 127af331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af334 push eax */
  push32((uint32_t)(EAX));
  /* 127af335 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af337 call 0x127b2940 */
  push32(0x127af33cu); f_127b2940();
  /* 127af33c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af33f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af342 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af344 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af347 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af34a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af34d push edx */
  push32((uint32_t)(EDX));
  /* 127af34e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 127af350 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af353 push eax */
  push32((uint32_t)(EAX));
  /* 127af354 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af356 call 0x127b2940 */
  push32(0x127af35bu); f_127b2940();
  /* 127af35b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af35e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af361 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af363 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af366 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af369 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af36c push edx */
  push32((uint32_t)(EDX));
  /* 127af36d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 127af36f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af372 push eax */
  push32((uint32_t)(EAX));
  /* 127af373 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af375 call 0x127b2940 */
  push32(0x127af37au); f_127b2940();
  /* 127af37a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af37d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af380 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af382 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af388 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af38b push edx */
  push32((uint32_t)(EDX));
  /* 127af38c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 127af38e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af391 push eax */
  push32((uint32_t)(EAX));
  /* 127af392 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af394 call 0x127b2940 */
  push32(0x127af399u); f_127b2940();
  /* 127af399 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af39c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af39f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af3a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af3a7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af3aa push edx */
  push32((uint32_t)(EDX));
  /* 127af3ab push 0x39 */
  push32((uint32_t)(0x39u));
  /* 127af3ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af3b0 push eax */
  push32((uint32_t)(EAX));
  /* 127af3b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af3b3 call 0x127b2940 */
  push32(0x127af3b8u); f_127b2940();
  /* 127af3b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af3bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af3be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af3c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af3c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af3c6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af3c9 push edx */
  push32((uint32_t)(EDX));
  /* 127af3ca push 0x3a */
  push32((uint32_t)(0x3au));
  /* 127af3cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af3cf push eax */
  push32((uint32_t)(EAX));
  /* 127af3d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af3d2 call 0x127b2940 */
  push32(0x127af3d7u); f_127b2940();
  /* 127af3d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af3da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af3dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af3df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af3e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af3e5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af3e8 push edx */
  push32((uint32_t)(EDX));
  /* 127af3e9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 127af3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af3ee push eax */
  push32((uint32_t)(EAX));
  /* 127af3ef push 1 */
  push32((uint32_t)(0x1u));
  /* 127af3f1 call 0x127b2940 */
  push32(0x127af3f6u); f_127b2940();
  /* 127af3f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af3f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af3fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af3fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af404 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af407 push edx */
  push32((uint32_t)(EDX));
  /* 127af408 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 127af40a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af40d push eax */
  push32((uint32_t)(EAX));
  /* 127af40e push 1 */
  push32((uint32_t)(0x1u));
  /* 127af410 call 0x127b2940 */
  push32(0x127af415u); f_127b2940();
  /* 127af415 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af418 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af41b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af41d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af423 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af426 push edx */
  push32((uint32_t)(EDX));
  /* 127af427 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 127af429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af42c push eax */
  push32((uint32_t)(EAX));
  /* 127af42d push 1 */
  push32((uint32_t)(0x1u));
  /* 127af42f call 0x127b2940 */
  push32(0x127af434u); f_127b2940();
  /* 127af434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af437 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af43a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af43c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af43f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af442 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af448 push edx */
  push32((uint32_t)(EDX));
  /* 127af449 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 127af44b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af44e push eax */
  push32((uint32_t)(EAX));
  /* 127af44f push 1 */
  push32((uint32_t)(0x1u));
  /* 127af451 call 0x127b2940 */
  push32(0x127af456u); f_127b2940();
  /* 127af456 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af459 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af45c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af45e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af464 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af46a push edx */
  push32((uint32_t)(EDX));
  /* 127af46b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 127af46d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af470 push eax */
  push32((uint32_t)(EAX));
  /* 127af471 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af473 call 0x127b2940 */
  push32(0x127af478u); f_127b2940();
  /* 127af478 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af47b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af47e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af480 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af486 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af48c push edx */
  push32((uint32_t)(EDX));
  /* 127af48d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127af48f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af492 push eax */
  push32((uint32_t)(EAX));
  /* 127af493 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af495 call 0x127b2940 */
  push32(0x127af49au); f_127b2940();
  /* 127af49a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af49d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af4a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af4a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af4a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af4a8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af4ae push edx */
  push32((uint32_t)(EDX));
  /* 127af4af push 0x41 */
  push32((uint32_t)(0x41u));
  /* 127af4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af4b4 push eax */
  push32((uint32_t)(EAX));
  /* 127af4b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af4b7 call 0x127b2940 */
  push32(0x127af4bcu); f_127b2940();
  /* 127af4bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af4bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af4c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af4c4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af4c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af4ca add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af4d0 push edx */
  push32((uint32_t)(EDX));
  /* 127af4d1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 127af4d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af4d6 push eax */
  push32((uint32_t)(EAX));
  /* 127af4d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af4d9 call 0x127b2940 */
  push32(0x127af4deu); f_127b2940();
  /* 127af4de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af4e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af4e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af4e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af4e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af4ec add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af4f2 push edx */
  push32((uint32_t)(EDX));
  /* 127af4f3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 127af4f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af4f8 push eax */
  push32((uint32_t)(EAX));
  /* 127af4f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af4fb call 0x127b2940 */
  push32(0x127af500u); f_127b2940();
  /* 127af500 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af503 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af506 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af508 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af50b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af50e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af514 push edx */
  push32((uint32_t)(EDX));
  /* 127af515 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 127af517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af51a push eax */
  push32((uint32_t)(EAX));
  /* 127af51b push 1 */
  push32((uint32_t)(0x1u));
  /* 127af51d call 0x127b2940 */
  push32(0x127af522u); f_127b2940();
  /* 127af522 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af525 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af528 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af52a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af52d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af530 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af536 push edx */
  push32((uint32_t)(EDX));
  /* 127af537 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 127af539 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af53c push eax */
  push32((uint32_t)(EAX));
  /* 127af53d push 1 */
  push32((uint32_t)(0x1u));
  /* 127af53f call 0x127b2940 */
  push32(0x127af544u); f_127b2940();
  /* 127af544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af547 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af54a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af54c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af54f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af552 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af558 push edx */
  push32((uint32_t)(EDX));
  /* 127af559 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 127af55b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127af55e push eax */
  push32((uint32_t)(EAX));
  /* 127af55f push 1 */
  push32((uint32_t)(0x1u));
  /* 127af561 call 0x127b2940 */
  push32(0x127af566u); f_127b2940();
  /* 127af566 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af569 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af56c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af56e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af574 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af57a push edx */
  push32((uint32_t)(EDX));
  /* 127af57b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 127af57d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127af580 push eax */
  push32((uint32_t)(EAX));
  /* 127af581 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af583 call 0x127b2940 */
  push32(0x127af588u); f_127b2940();
  /* 127af588 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af58b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af58e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af590 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af593 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af596 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127af59c push edx */
  push32((uint32_t)(EDX));
  /* 127af59d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 127af5a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127af5a5 push eax */
  push32((uint32_t)(EAX));
  /* 127af5a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af5a8 call 0x127b2940 */
  push32(0x127af5adu); f_127b2940();
  /* 127af5ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af5b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127af5b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af5b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127af5b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_127af5bb:;
  /* 127af5bb mov esp, ebp */
  ESP = (EBP);
  /* 127af5bd pop ebp */
  EBP = (pop32());
  /* 127af5be ret  */
  ESPCHK(0x127af030u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x127af5c0 (779 bytes, 265 insns) */
void f_127af5c0(void) {
  FTRACE(0x127af5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127af5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127af5c1 mov ebp, esp */
  EBP = (ESP);
  /* 127af5c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127af5c7 jne 0x127af5ce */
  if (!C.zf) goto L_127af5ce;
  /* 127af5c9 jmp 0x127af8c9 */
  goto L_127af8c9;
L_127af5ce:;
  /* 127af5ce push 2 */
  push32((uint32_t)(0x2u));
  /* 127af5d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af5d3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127af5d6 push ecx */
  push32((uint32_t)(ECX));
  /* 127af5d7 call 0x127a5210 */
  push32(0x127af5dcu); f_127a5210();
  /* 127af5dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af5df push 2 */
  push32((uint32_t)(0x2u));
  /* 127af5e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af5e4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127af5e7 push eax */
  push32((uint32_t)(EAX));
  /* 127af5e8 call 0x127a5210 */
  push32(0x127af5edu); f_127a5210();
  /* 127af5ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af5f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af5f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af5f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127af5f8 push edx */
  push32((uint32_t)(EDX));
  /* 127af5f9 call 0x127a5210 */
  push32(0x127af5feu); f_127a5210();
  /* 127af5fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af601 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af603 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af606 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127af609 push ecx */
  push32((uint32_t)(ECX));
  /* 127af60a call 0x127a5210 */
  push32(0x127af60fu); f_127a5210();
  /* 127af60f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af612 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af614 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af617 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127af61a push eax */
  push32((uint32_t)(EAX));
  /* 127af61b call 0x127a5210 */
  push32(0x127af620u); f_127a5210();
  /* 127af620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af623 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af625 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af628 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127af62b push edx */
  push32((uint32_t)(EDX));
  /* 127af62c call 0x127a5210 */
  push32(0x127af631u); f_127a5210();
  /* 127af631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af634 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af636 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af639 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127af63b push ecx */
  push32((uint32_t)(ECX));
  /* 127af63c call 0x127a5210 */
  push32(0x127af641u); f_127a5210();
  /* 127af641 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af644 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af646 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af649 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 127af64c push eax */
  push32((uint32_t)(EAX));
  /* 127af64d call 0x127a5210 */
  push32(0x127af652u); f_127a5210();
  /* 127af652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af655 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af657 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af65a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 127af65d push edx */
  push32((uint32_t)(EDX));
  /* 127af65e call 0x127a5210 */
  push32(0x127af663u); f_127a5210();
  /* 127af663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af666 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af668 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af66b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 127af66e push ecx */
  push32((uint32_t)(ECX));
  /* 127af66f call 0x127a5210 */
  push32(0x127af674u); f_127a5210();
  /* 127af674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af677 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af679 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af67c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 127af67f push eax */
  push32((uint32_t)(EAX));
  /* 127af680 call 0x127a5210 */
  push32(0x127af685u); f_127a5210();
  /* 127af685 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af688 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af68a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af68d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 127af690 push edx */
  push32((uint32_t)(EDX));
  /* 127af691 call 0x127a5210 */
  push32(0x127af696u); f_127a5210();
  /* 127af696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af699 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af69b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af69e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 127af6a1 push ecx */
  push32((uint32_t)(ECX));
  /* 127af6a2 call 0x127a5210 */
  push32(0x127af6a7u); f_127a5210();
  /* 127af6a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af6aa push 2 */
  push32((uint32_t)(0x2u));
  /* 127af6ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af6af mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127af6b2 push eax */
  push32((uint32_t)(EAX));
  /* 127af6b3 call 0x127a5210 */
  push32(0x127af6b8u); f_127a5210();
  /* 127af6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af6bb push 2 */
  push32((uint32_t)(0x2u));
  /* 127af6bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af6c0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 127af6c3 push edx */
  push32((uint32_t)(EDX));
  /* 127af6c4 call 0x127a5210 */
  push32(0x127af6c9u); f_127a5210();
  /* 127af6c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af6cc push 2 */
  push32((uint32_t)(0x2u));
  /* 127af6ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af6d1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 127af6d4 push ecx */
  push32((uint32_t)(ECX));
  /* 127af6d5 call 0x127a5210 */
  push32(0x127af6dau); f_127a5210();
  /* 127af6da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af6dd push 2 */
  push32((uint32_t)(0x2u));
  /* 127af6df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af6e2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 127af6e5 push eax */
  push32((uint32_t)(EAX));
  /* 127af6e6 call 0x127a5210 */
  push32(0x127af6ebu); f_127a5210();
  /* 127af6eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af6ee push 2 */
  push32((uint32_t)(0x2u));
  /* 127af6f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af6f3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 127af6f6 push edx */
  push32((uint32_t)(EDX));
  /* 127af6f7 call 0x127a5210 */
  push32(0x127af6fcu); f_127a5210();
  /* 127af6fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af6ff push 2 */
  push32((uint32_t)(0x2u));
  /* 127af701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af704 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 127af707 push ecx */
  push32((uint32_t)(ECX));
  /* 127af708 call 0x127a5210 */
  push32(0x127af70du); f_127a5210();
  /* 127af70d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af710 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af712 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af715 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 127af718 push eax */
  push32((uint32_t)(EAX));
  /* 127af719 call 0x127a5210 */
  push32(0x127af71eu); f_127a5210();
  /* 127af71e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af721 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af723 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af726 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 127af729 push edx */
  push32((uint32_t)(EDX));
  /* 127af72a call 0x127a5210 */
  push32(0x127af72fu); f_127a5210();
  /* 127af72f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af732 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af737 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 127af73a push ecx */
  push32((uint32_t)(ECX));
  /* 127af73b call 0x127a5210 */
  push32(0x127af740u); f_127a5210();
  /* 127af740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af743 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af748 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 127af74b push eax */
  push32((uint32_t)(EAX));
  /* 127af74c call 0x127a5210 */
  push32(0x127af751u); f_127a5210();
  /* 127af751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af754 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af756 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af759 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 127af75c push edx */
  push32((uint32_t)(EDX));
  /* 127af75d call 0x127a5210 */
  push32(0x127af762u); f_127a5210();
  /* 127af762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af765 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af767 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af76a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 127af76d push ecx */
  push32((uint32_t)(ECX));
  /* 127af76e call 0x127a5210 */
  push32(0x127af773u); f_127a5210();
  /* 127af773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af776 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af77b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 127af77e push eax */
  push32((uint32_t)(EAX));
  /* 127af77f call 0x127a5210 */
  push32(0x127af784u); f_127a5210();
  /* 127af784 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af787 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af789 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af78c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 127af78f push edx */
  push32((uint32_t)(EDX));
  /* 127af790 call 0x127a5210 */
  push32(0x127af795u); f_127a5210();
  /* 127af795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af798 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af79a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af79d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 127af7a0 push ecx */
  push32((uint32_t)(ECX));
  /* 127af7a1 call 0x127a5210 */
  push32(0x127af7a6u); f_127a5210();
  /* 127af7a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af7a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af7ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af7ae mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 127af7b1 push eax */
  push32((uint32_t)(EAX));
  /* 127af7b2 call 0x127a5210 */
  push32(0x127af7b7u); f_127a5210();
  /* 127af7b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af7ba push 2 */
  push32((uint32_t)(0x2u));
  /* 127af7bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af7bf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 127af7c2 push edx */
  push32((uint32_t)(EDX));
  /* 127af7c3 call 0x127a5210 */
  push32(0x127af7c8u); f_127a5210();
  /* 127af7c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af7cb push 2 */
  push32((uint32_t)(0x2u));
  /* 127af7cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af7d0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 127af7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 127af7d4 call 0x127a5210 */
  push32(0x127af7d9u); f_127a5210();
  /* 127af7d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af7dc push 2 */
  push32((uint32_t)(0x2u));
  /* 127af7de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af7e1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 127af7e4 push eax */
  push32((uint32_t)(EAX));
  /* 127af7e5 call 0x127a5210 */
  push32(0x127af7eau); f_127a5210();
  /* 127af7ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af7ed push 2 */
  push32((uint32_t)(0x2u));
  /* 127af7ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af7f2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 127af7f8 push edx */
  push32((uint32_t)(EDX));
  /* 127af7f9 call 0x127a5210 */
  push32(0x127af7feu); f_127a5210();
  /* 127af7fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af801 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af803 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af806 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 127af80c push ecx */
  push32((uint32_t)(ECX));
  /* 127af80d call 0x127a5210 */
  push32(0x127af812u); f_127a5210();
  /* 127af812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af815 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af81a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 127af820 push eax */
  push32((uint32_t)(EAX));
  /* 127af821 call 0x127a5210 */
  push32(0x127af826u); f_127a5210();
  /* 127af826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af829 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af82b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af82e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 127af834 push edx */
  push32((uint32_t)(EDX));
  /* 127af835 call 0x127a5210 */
  push32(0x127af83au); f_127a5210();
  /* 127af83a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af83d push 2 */
  push32((uint32_t)(0x2u));
  /* 127af83f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af842 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 127af848 push ecx */
  push32((uint32_t)(ECX));
  /* 127af849 call 0x127a5210 */
  push32(0x127af84eu); f_127a5210();
  /* 127af84e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af851 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af856 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 127af85c push eax */
  push32((uint32_t)(EAX));
  /* 127af85d call 0x127a5210 */
  push32(0x127af862u); f_127a5210();
  /* 127af862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af865 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af867 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af86a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 127af870 push edx */
  push32((uint32_t)(EDX));
  /* 127af871 call 0x127a5210 */
  push32(0x127af876u); f_127a5210();
  /* 127af876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af879 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af87b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af87e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 127af884 push ecx */
  push32((uint32_t)(ECX));
  /* 127af885 call 0x127a5210 */
  push32(0x127af88au); f_127a5210();
  /* 127af88a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af88d push 2 */
  push32((uint32_t)(0x2u));
  /* 127af88f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af892 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 127af898 push eax */
  push32((uint32_t)(EAX));
  /* 127af899 call 0x127a5210 */
  push32(0x127af89eu); f_127a5210();
  /* 127af89e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af8a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af8a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af8a6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 127af8ac push edx */
  push32((uint32_t)(EDX));
  /* 127af8ad call 0x127a5210 */
  push32(0x127af8b2u); f_127a5210();
  /* 127af8b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af8b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af8b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127af8ba mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 127af8c0 push ecx */
  push32((uint32_t)(ECX));
  /* 127af8c1 call 0x127a5210 */
  push32(0x127af8c6u); f_127a5210();
  /* 127af8c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127af8c9:;
  /* 127af8c9 pop ebp */
  EBP = (pop32());
  /* 127af8ca ret  */
  ESPCHK(0x127af5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8d0 @ 0x127af8d0 (678 bytes, 180 insns) */
void f_127af8d0(void) {
  FTRACE(0x127af8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127af8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127af8d1 mov ebp, esp */
  EBP = (ESP);
  /* 127af8d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127af8d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127af8dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127af8df mov ax, word ptr [0x127d077a] */
  AX = (r16((uint32_t)(0x127d077a)));
  /* 127af8e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127af8e8 cmp dword ptr [0x127d0720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127af8ef je 0x127afa4a */
  if (C.zf) goto L_127afa4a;
  /* 127af8f5 push 0x127d0748 */
  push32((uint32_t)(0x127d0748u));
  /* 127af8fa push 0xe */
  push32((uint32_t)(0xeu));
  /* 127af8fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af8ff push ecx */
  push32((uint32_t)(ECX));
  /* 127af900 push 1 */
  push32((uint32_t)(0x1u));
  /* 127af902 call 0x127b2940 */
  push32(0x127af907u); f_127b2940();
  /* 127af907 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af90a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127af90d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 127af90f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127af912 push 0x127d074c */
  push32((uint32_t)(0x127d074cu));
  /* 127af917 push 0xf */
  push32((uint32_t)(0xfu));
  /* 127af919 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af91c push eax */
  push32((uint32_t)(EAX));
  /* 127af91d push 1 */
  push32((uint32_t)(0x1u));
  /* 127af91f call 0x127b2940 */
  push32(0x127af924u); f_127b2940();
  /* 127af924 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af927 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127af92a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af92c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127af92f push 0x127d0750 */
  push32((uint32_t)(0x127d0750u));
  /* 127af934 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 127af936 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127af939 push edx */
  push32((uint32_t)(EDX));
  /* 127af93a push 1 */
  push32((uint32_t)(0x1u));
  /* 127af93c call 0x127b2940 */
  push32(0x127af941u); f_127b2940();
  /* 127af941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af944 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127af947 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127af949 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127af94c mov edx, dword ptr [0x127d0750] */
  EDX = (r32((uint32_t)(0x127d0750)));
  /* 127af952 push edx */
  push32((uint32_t)(EDX));
  /* 127af953 call 0x127afb80 */
  push32(0x127af958u); f_127afb80();
  /* 127af958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af95b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127af95f je 0x127af9b9 */
  if (C.zf) goto L_127af9b9;
  /* 127af961 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af963 mov eax, dword ptr [0x127d0748] */
  EAX = (r32((uint32_t)(0x127d0748)));
  /* 127af968 push eax */
  push32((uint32_t)(EAX));
  /* 127af969 call 0x127a5210 */
  push32(0x127af96eu); f_127a5210();
  /* 127af96e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af971 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af973 mov ecx, dword ptr [0x127d074c] */
  ECX = (r32((uint32_t)(0x127d074c)));
  /* 127af979 push ecx */
  push32((uint32_t)(ECX));
  /* 127af97a call 0x127a5210 */
  push32(0x127af97fu); f_127a5210();
  /* 127af97f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af982 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af984 mov edx, dword ptr [0x127d0750] */
  EDX = (r32((uint32_t)(0x127d0750)));
  /* 127af98a push edx */
  push32((uint32_t)(EDX));
  /* 127af98b call 0x127a5210 */
  push32(0x127af990u); f_127a5210();
  /* 127af990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af993 mov dword ptr [0x127d0748], 0 */
  w32((uint32_t)(0x127d0748), (0x0u));
  /* 127af99d mov dword ptr [0x127d074c], 0 */
  w32((uint32_t)(0x127d074c), (0x0u));
  /* 127af9a7 mov dword ptr [0x127d0750], 0 */
  w32((uint32_t)(0x127d0750), (0x0u));
  /* 127af9b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127af9b4 jmp 0x127afb72 */
  goto L_127afb72;
L_127af9b9:;
  /* 127af9b9 mov eax, dword ptr [0x127cfd88] */
  EAX = (r32((uint32_t)(0x127cfd88)));
  /* 127af9be cmp dword ptr [eax], 0x127cfd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x127cfd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127af9c4 je 0x127afa00 */
  if (C.zf) goto L_127afa00;
  /* 127af9c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af9c8 mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127af9ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127af9d0 push edx */
  push32((uint32_t)(EDX));
  /* 127af9d1 call 0x127a5210 */
  push32(0x127af9d6u); f_127a5210();
  /* 127af9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af9d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127af9db mov eax, dword ptr [0x127cfd88] */
  EAX = (r32((uint32_t)(0x127cfd88)));
  /* 127af9e0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127af9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127af9e4 call 0x127a5210 */
  push32(0x127af9e9u); f_127a5210();
  /* 127af9e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127af9ec push 2 */
  push32((uint32_t)(0x2u));
  /* 127af9ee mov edx, dword ptr [0x127cfd88] */
  EDX = (r32((uint32_t)(0x127cfd88)));
  /* 127af9f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127af9f7 push eax */
  push32((uint32_t)(EAX));
  /* 127af9f8 call 0x127a5210 */
  push32(0x127af9fdu); f_127a5210();
  /* 127af9fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127afa00:;
  /* 127afa00 mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afa06 mov edx, dword ptr [0x127d0748] */
  EDX = (r32((uint32_t)(0x127d0748)));
  /* 127afa0c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127afa0e mov eax, dword ptr [0x127cfd88] */
  EAX = (r32((uint32_t)(0x127cfd88)));
  /* 127afa13 mov ecx, dword ptr [0x127d074c] */
  ECX = (r32((uint32_t)(0x127d074c)));
  /* 127afa19 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 127afa1c mov edx, dword ptr [0x127cfd88] */
  EDX = (r32((uint32_t)(0x127cfd88)));
  /* 127afa22 mov eax, dword ptr [0x127d0750] */
  EAX = (r32((uint32_t)(0x127d0750)));
  /* 127afa27 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 127afa2a mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afa30 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127afa32 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127afa34 mov byte ptr [0x127ceea8], al */
  w8((uint32_t)(0x127ceea8), (AL));
  /* 127afa39 mov dword ptr [0x127ceeac], 1 */
  w32((uint32_t)(0x127ceeac), (0x1u));
  /* 127afa43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127afa45 jmp 0x127afb72 */
  goto L_127afb72;
L_127afa4a:;
  /* 127afa4a push 2 */
  push32((uint32_t)(0x2u));
  /* 127afa4c mov ecx, dword ptr [0x127d0748] */
  ECX = (r32((uint32_t)(0x127d0748)));
  /* 127afa52 push ecx */
  push32((uint32_t)(ECX));
  /* 127afa53 call 0x127a5210 */
  push32(0x127afa58u); f_127a5210();
  /* 127afa58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afa5b push 2 */
  push32((uint32_t)(0x2u));
  /* 127afa5d mov edx, dword ptr [0x127d074c] */
  EDX = (r32((uint32_t)(0x127d074c)));
  /* 127afa63 push edx */
  push32((uint32_t)(EDX));
  /* 127afa64 call 0x127a5210 */
  push32(0x127afa69u); f_127a5210();
  /* 127afa69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afa6c push 2 */
  push32((uint32_t)(0x2u));
  /* 127afa6e mov eax, dword ptr [0x127d0750] */
  EAX = (r32((uint32_t)(0x127d0750)));
  /* 127afa73 push eax */
  push32((uint32_t)(EAX));
  /* 127afa74 call 0x127a5210 */
  push32(0x127afa79u); f_127a5210();
  /* 127afa79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afa7c mov dword ptr [0x127d0748], 0 */
  w32((uint32_t)(0x127d0748), (0x0u));
  /* 127afa86 mov dword ptr [0x127d074c], 0 */
  w32((uint32_t)(0x127d074c), (0x0u));
  /* 127afa90 mov dword ptr [0x127d0750], 0 */
  w32((uint32_t)(0x127d0750), (0x0u));
  /* 127afa9a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 127afa9f push 0x127cc0bc */
  push32((uint32_t)(0x127cc0bcu));
  /* 127afaa4 push 2 */
  push32((uint32_t)(0x2u));
  /* 127afaa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127afaa8 call 0x127a4780 */
  push32(0x127afaadu); f_127a4780();
  /* 127afaad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afab0 mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afab6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127afab8 mov edx, dword ptr [0x127cfd88] */
  EDX = (r32((uint32_t)(0x127cfd88)));
  /* 127afabe cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afac1 jne 0x127afacb */
  if (!C.zf) goto L_127afacb;
  /* 127afac3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127afac6 jmp 0x127afb72 */
  goto L_127afb72;
L_127afacb:;
  /* 127afacb push 0x127cc08c */
  push32((uint32_t)(0x127cc08cu));
  /* 127afad0 mov eax, dword ptr [0x127cfd88] */
  EAX = (r32((uint32_t)(0x127cfd88)));
  /* 127afad5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127afad7 push ecx */
  push32((uint32_t)(ECX));
  /* 127afad8 call 0x127a7730 */
  push32(0x127afaddu); f_127a7730();
  /* 127afadd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afae0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 127afae5 push 0x127cc0bc */
  push32((uint32_t)(0x127cc0bcu));
  /* 127afaea push 2 */
  push32((uint32_t)(0x2u));
  /* 127afaec push 2 */
  push32((uint32_t)(0x2u));
  /* 127afaee call 0x127a4780 */
  push32(0x127afaf3u); f_127a4780();
  /* 127afaf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afaf6 mov edx, dword ptr [0x127cfd88] */
  EDX = (r32((uint32_t)(0x127cfd88)));
  /* 127afafc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 127afaff mov eax, dword ptr [0x127cfd88] */
  EAX = (r32((uint32_t)(0x127cfd88)));
  /* 127afb04 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afb08 jne 0x127afb0f */
  if (!C.zf) goto L_127afb0f;
  /* 127afb0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127afb0d jmp 0x127afb72 */
  goto L_127afb72;
L_127afb0f:;
  /* 127afb0f mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afb15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127afb18 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127afb1b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 127afb20 push 0x127cc0bc */
  push32((uint32_t)(0x127cc0bcu));
  /* 127afb25 push 2 */
  push32((uint32_t)(0x2u));
  /* 127afb27 push 2 */
  push32((uint32_t)(0x2u));
  /* 127afb29 call 0x127a4780 */
  push32(0x127afb2eu); f_127a4780();
  /* 127afb2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afb31 mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afb37 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 127afb3a mov edx, dword ptr [0x127cfd88] */
  EDX = (r32((uint32_t)(0x127cfd88)));
  /* 127afb40 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afb44 jne 0x127afb4b */
  if (!C.zf) goto L_127afb4b;
  /* 127afb46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127afb49 jmp 0x127afb72 */
  goto L_127afb72;
L_127afb4b:;
  /* 127afb4b mov eax, dword ptr [0x127cfd88] */
  EAX = (r32((uint32_t)(0x127cfd88)));
  /* 127afb50 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 127afb53 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 127afb56 mov edx, dword ptr [0x127cfd88] */
  EDX = (r32((uint32_t)(0x127cfd88)));
  /* 127afb5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127afb5e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127afb60 mov byte ptr [0x127ceea8], cl */
  w8((uint32_t)(0x127ceea8), (CL));
  /* 127afb66 mov dword ptr [0x127ceeac], 1 */
  w32((uint32_t)(0x127ceeac), (0x1u));
  /* 127afb70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127afb72:;
  /* 127afb72 mov esp, ebp */
  ESP = (EBP);
  /* 127afb74 pop ebp */
  EBP = (pop32());
  /* 127afb75 ret  */
  ESPCHK(0x127af8d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x127afb80 (125 bytes, 49 insns) */
void f_127afb80(void) {
  FTRACE(0x127afb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127afb80 push ebp */
  push32((uint32_t)(EBP));
  /* 127afb81 mov ebp, esp */
  EBP = (ESP);
  /* 127afb83 push ecx */
  push32((uint32_t)(ECX));
L_127afb84:;
  /* 127afb84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afb87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127afb8a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127afb8c je 0x127afbf9 */
  if (C.zf) goto L_127afbf9;
  /* 127afb8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afb91 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127afb94 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afb97 jl 0x127afbbd */
  if ((C.sf!=C.of)) goto L_127afbbd;
  /* 127afb99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afb9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127afb9f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afba2 jg 0x127afbbd */
  if ((!C.zf&&C.sf==C.of)) goto L_127afbbd;
  /* 127afba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afba7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127afbaa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127afbad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afbb0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127afbb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afbb5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afbb8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127afbbb jmp 0x127afbf7 */
  goto L_127afbf7;
L_127afbbd:;
  /* 127afbbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afbc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127afbc3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afbc6 jne 0x127afbee */
  if (!C.zf) goto L_127afbee;
  /* 127afbc8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afbcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127afbce:;
  /* 127afbce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afbd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afbd4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127afbd7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127afbd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afbdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afbdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127afbe2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afbe5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127afbe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127afbea jne 0x127afbce */
  if (!C.zf) goto L_127afbce;
  /* 127afbec jmp 0x127afbf7 */
  goto L_127afbf7;
L_127afbee:;
  /* 127afbee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afbf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afbf4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_127afbf7:;
  /* 127afbf7 jmp 0x127afb84 */
  goto L_127afb84;
L_127afbf9:;
  /* 127afbf9 mov esp, ebp */
  ESP = (EBP);
  /* 127afbfb pop ebp */
  EBP = (pop32());
  /* 127afbfc ret  */
  ESPCHK(0x127afb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc00 @ 0x127afc00 (304 bytes, 85 insns) */
void f_127afc00(void) {
  FTRACE(0x127afc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127afc00 push ebp */
  push32((uint32_t)(EBP));
  /* 127afc01 mov ebp, esp */
  EBP = (ESP);
  /* 127afc03 push ecx */
  push32((uint32_t)(ECX));
  /* 127afc04 cmp dword ptr [0x127d071c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d071c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afc0b je 0x127afccc */
  if (C.zf) goto L_127afccc;
  /* 127afc11 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 127afc13 push 0x127cc0c8 */
  push32((uint32_t)(0x127cc0c8u));
  /* 127afc18 push 2 */
  push32((uint32_t)(0x2u));
  /* 127afc1a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127afc1c push 1 */
  push32((uint32_t)(0x1u));
  /* 127afc1e call 0x127a4b90 */
  push32(0x127afc23u); f_127a4b90();
  /* 127afc23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afc26 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127afc29 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afc2d jne 0x127afc39 */
  if (!C.zf) goto L_127afc39;
  /* 127afc2f mov eax, 1 */
  EAX = (0x1u);
  /* 127afc34 jmp 0x127afd2c */
  goto L_127afd2c;
L_127afc39:;
  /* 127afc39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afc3c push eax */
  push32((uint32_t)(EAX));
  /* 127afc3d call 0x127afd30 */
  push32(0x127afc42u); f_127afd30();
  /* 127afc42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afc45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127afc47 je 0x127afc6d */
  if (C.zf) goto L_127afc6d;
  /* 127afc49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afc4c push ecx */
  push32((uint32_t)(ECX));
  /* 127afc4d call 0x127affc0 */
  push32(0x127afc52u); f_127affc0();
  /* 127afc52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afc55 push 2 */
  push32((uint32_t)(0x2u));
  /* 127afc57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afc5a push edx */
  push32((uint32_t)(EDX));
  /* 127afc5b call 0x127a5210 */
  push32(0x127afc60u); f_127a5210();
  /* 127afc60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afc63 mov eax, 1 */
  EAX = (0x1u);
  /* 127afc68 jmp 0x127afd2c */
  goto L_127afd2c;
L_127afc6d:;
  /* 127afc6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afc70 mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afc76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127afc78 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127afc7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afc7d mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afc83 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127afc86 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 127afc89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afc8c mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afc92 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 127afc95 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 127afc98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afc9b mov dword ptr [0x127cfd88], eax */
  w32((uint32_t)(0x127cfd88), (EAX));
  /* 127afca0 mov ecx, dword ptr [0x127d0754] */
  ECX = (r32((uint32_t)(0x127d0754)));
  /* 127afca6 push ecx */
  push32((uint32_t)(ECX));
  /* 127afca7 call 0x127affc0 */
  push32(0x127afcacu); f_127affc0();
  /* 127afcac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afcaf push 2 */
  push32((uint32_t)(0x2u));
  /* 127afcb1 mov edx, dword ptr [0x127d0754] */
  EDX = (r32((uint32_t)(0x127d0754)));
  /* 127afcb7 push edx */
  push32((uint32_t)(EDX));
  /* 127afcb8 call 0x127a5210 */
  push32(0x127afcbdu); f_127a5210();
  /* 127afcbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afcc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afcc3 mov dword ptr [0x127d0754], eax */
  w32((uint32_t)(0x127d0754), (EAX));
  /* 127afcc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127afcca jmp 0x127afd2c */
  goto L_127afd2c;
L_127afccc:;
  /* 127afccc mov ecx, dword ptr [0x127cfd88] */
  ECX = (r32((uint32_t)(0x127cfd88)));
  /* 127afcd2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127afcd4 mov dword ptr [0x127cfd58], edx */
  w32((uint32_t)(0x127cfd58), (EDX));
  /* 127afcda mov eax, dword ptr [0x127cfd88] */
  EAX = (r32((uint32_t)(0x127cfd88)));
  /* 127afcdf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 127afce2 mov dword ptr [0x127cfd5c], ecx */
  w32((uint32_t)(0x127cfd5c), (ECX));
  /* 127afce8 mov edx, dword ptr [0x127cfd88] */
  EDX = (r32((uint32_t)(0x127cfd88)));
  /* 127afcee mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127afcf1 mov dword ptr [0x127cfd60], eax */
  w32((uint32_t)(0x127cfd60), (EAX));
  /* 127afcf6 mov dword ptr [0x127cfd88], 0x127cfd58 */
  w32((uint32_t)(0x127cfd88), (0x127cfd58u));
  /* 127afd00 mov ecx, dword ptr [0x127d0754] */
  ECX = (r32((uint32_t)(0x127d0754)));
  /* 127afd06 push ecx */
  push32((uint32_t)(ECX));
  /* 127afd07 call 0x127affc0 */
  push32(0x127afd0cu); f_127affc0();
  /* 127afd0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afd0f push 2 */
  push32((uint32_t)(0x2u));
  /* 127afd11 mov edx, dword ptr [0x127d0754] */
  EDX = (r32((uint32_t)(0x127d0754)));
  /* 127afd17 push edx */
  push32((uint32_t)(EDX));
  /* 127afd18 call 0x127a5210 */
  push32(0x127afd1du); f_127a5210();
  /* 127afd1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afd20 mov dword ptr [0x127d0754], 0 */
  w32((uint32_t)(0x127d0754), (0x0u));
  /* 127afd2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127afd2c:;
  /* 127afd2c mov esp, ebp */
  ESP = (EBP);
  /* 127afd2e pop ebp */
  EBP = (pop32());
  /* 127afd2f ret  */
  ESPCHK(0x127afc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd30 @ 0x127afd30 (525 bytes, 200 insns) */
void f_127afd30(void) {
  FTRACE(0x127afd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127afd30 push ebp */
  push32((uint32_t)(EBP));
  /* 127afd31 mov ebp, esp */
  EBP = (ESP);
  /* 127afd33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127afd36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127afd3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127afd3f mov ax, word ptr [0x127d0774] */
  AX = (r16((uint32_t)(0x127d0774)));
  /* 127afd45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127afd48 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127afd4c jne 0x127afd56 */
  if (!C.zf) goto L_127afd56;
  /* 127afd4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127afd51 jmp 0x127aff39 */
  goto L_127aff39;
L_127afd56:;
  /* 127afd56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afd59 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afd5c push ecx */
  push32((uint32_t)(ECX));
  /* 127afd5d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 127afd5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afd62 push edx */
  push32((uint32_t)(EDX));
  /* 127afd63 push 1 */
  push32((uint32_t)(0x1u));
  /* 127afd65 call 0x127b2940 */
  push32(0x127afd6au); f_127b2940();
  /* 127afd6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afd6d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afd70 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afd72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afd75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afd78 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afd7b push edx */
  push32((uint32_t)(EDX));
  /* 127afd7c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 127afd7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afd81 push eax */
  push32((uint32_t)(EAX));
  /* 127afd82 push 1 */
  push32((uint32_t)(0x1u));
  /* 127afd84 call 0x127b2940 */
  push32(0x127afd89u); f_127b2940();
  /* 127afd89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afd8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afd8f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afd91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afd94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afd97 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afd9a push edx */
  push32((uint32_t)(EDX));
  /* 127afd9b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 127afd9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afda0 push eax */
  push32((uint32_t)(EAX));
  /* 127afda1 push 1 */
  push32((uint32_t)(0x1u));
  /* 127afda3 call 0x127b2940 */
  push32(0x127afda8u); f_127b2940();
  /* 127afda8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afdab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afdae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afdb0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afdb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afdb6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afdb9 push edx */
  push32((uint32_t)(EDX));
  /* 127afdba push 0x17 */
  push32((uint32_t)(0x17u));
  /* 127afdbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afdbf push eax */
  push32((uint32_t)(EAX));
  /* 127afdc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127afdc2 call 0x127b2940 */
  push32(0x127afdc7u); f_127b2940();
  /* 127afdc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afdca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afdcd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afdcf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afdd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afdd5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afdd8 push edx */
  push32((uint32_t)(EDX));
  /* 127afdd9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 127afddb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afdde push eax */
  push32((uint32_t)(EAX));
  /* 127afddf push 1 */
  push32((uint32_t)(0x1u));
  /* 127afde1 call 0x127b2940 */
  push32(0x127afde6u); f_127b2940();
  /* 127afde6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afde9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afdec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afdee mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afdf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afdf4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 127afdf7 push eax */
  push32((uint32_t)(EAX));
  /* 127afdf8 call 0x127aff40 */
  push32(0x127afdfdu); f_127aff40();
  /* 127afdfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afe03 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe06 push ecx */
  push32((uint32_t)(ECX));
  /* 127afe07 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 127afe09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afe0c push edx */
  push32((uint32_t)(EDX));
  /* 127afe0d push 1 */
  push32((uint32_t)(0x1u));
  /* 127afe0f call 0x127b2940 */
  push32(0x127afe14u); f_127b2940();
  /* 127afe14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afe1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afe1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afe1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afe22 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe25 push edx */
  push32((uint32_t)(EDX));
  /* 127afe26 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 127afe28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afe2b push eax */
  push32((uint32_t)(EAX));
  /* 127afe2c push 1 */
  push32((uint32_t)(0x1u));
  /* 127afe2e call 0x127b2940 */
  push32(0x127afe33u); f_127b2940();
  /* 127afe33 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afe39 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afe3b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afe3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afe41 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe44 push edx */
  push32((uint32_t)(EDX));
  /* 127afe45 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 127afe47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afe4a push eax */
  push32((uint32_t)(EAX));
  /* 127afe4b push 0 */
  push32((uint32_t)(0x0u));
  /* 127afe4d call 0x127b2940 */
  push32(0x127afe52u); f_127b2940();
  /* 127afe52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afe58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afe5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afe5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afe60 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe63 push edx */
  push32((uint32_t)(EDX));
  /* 127afe64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127afe66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afe69 push eax */
  push32((uint32_t)(EAX));
  /* 127afe6a push 0 */
  push32((uint32_t)(0x0u));
  /* 127afe6c call 0x127b2940 */
  push32(0x127afe71u); f_127b2940();
  /* 127afe71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afe77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afe79 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afe7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afe7f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe82 push edx */
  push32((uint32_t)(EDX));
  /* 127afe83 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 127afe85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afe88 push eax */
  push32((uint32_t)(EAX));
  /* 127afe89 push 0 */
  push32((uint32_t)(0x0u));
  /* 127afe8b call 0x127b2940 */
  push32(0x127afe90u); f_127b2940();
  /* 127afe90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afe93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afe96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afe98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afe9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afe9e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afea1 push edx */
  push32((uint32_t)(EDX));
  /* 127afea2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 127afea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afea7 push eax */
  push32((uint32_t)(EAX));
  /* 127afea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127afeaa call 0x127b2940 */
  push32(0x127afeafu); f_127b2940();
  /* 127afeaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afeb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afeb5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afeb7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afeba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afebd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afec0 push edx */
  push32((uint32_t)(EDX));
  /* 127afec1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 127afec3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afec6 push eax */
  push32((uint32_t)(EAX));
  /* 127afec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127afec9 call 0x127b2940 */
  push32(0x127afeceu); f_127b2940();
  /* 127afece add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afed1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afed4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afed6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afedc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afedf push edx */
  push32((uint32_t)(EDX));
  /* 127afee0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 127afee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127afee5 push eax */
  push32((uint32_t)(EAX));
  /* 127afee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127afee8 call 0x127b2940 */
  push32(0x127afeedu); f_127b2940();
  /* 127afeed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afef0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127afef3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127afef5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127afef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afefb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127afefe push edx */
  push32((uint32_t)(EDX));
  /* 127afeff push 0x52 */
  push32((uint32_t)(0x52u));
  /* 127aff01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aff04 push eax */
  push32((uint32_t)(EAX));
  /* 127aff05 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aff07 call 0x127b2940 */
  push32(0x127aff0cu); f_127b2940();
  /* 127aff0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aff0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aff12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127aff14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127aff17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff1a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aff1d push edx */
  push32((uint32_t)(EDX));
  /* 127aff1e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 127aff20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aff23 push eax */
  push32((uint32_t)(EAX));
  /* 127aff24 push 0 */
  push32((uint32_t)(0x0u));
  /* 127aff26 call 0x127b2940 */
  push32(0x127aff2bu); f_127b2940();
  /* 127aff2b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127aff2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127aff31 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 127aff33 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127aff36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_127aff39:;
  /* 127aff39 mov esp, ebp */
  ESP = (EBP);
  /* 127aff3b pop ebp */
  EBP = (pop32());
  /* 127aff3c ret  */
  ESPCHK(0x127afd30u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x127aff40 (125 bytes, 49 insns) */
void f_127aff40(void) {
  FTRACE(0x127aff40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127aff40 push ebp */
  push32((uint32_t)(EBP));
  /* 127aff41 mov ebp, esp */
  EBP = (ESP);
  /* 127aff43 push ecx */
  push32((uint32_t)(ECX));
L_127aff44:;
  /* 127aff44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127aff4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127aff4c je 0x127affb9 */
  if (C.zf) goto L_127affb9;
  /* 127aff4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127aff54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aff57 jl 0x127aff7d */
  if ((C.sf!=C.of)) goto L_127aff7d;
  /* 127aff59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127aff5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aff62 jg 0x127aff7d */
  if ((!C.zf&&C.sf==C.of)) goto L_127aff7d;
  /* 127aff64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127aff6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127aff6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127aff72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aff78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127aff7b jmp 0x127affb7 */
  goto L_127affb7;
L_127aff7d:;
  /* 127aff7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127aff83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127aff86 jne 0x127affae */
  if (!C.zf) goto L_127affae;
  /* 127aff88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127aff8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127aff8e:;
  /* 127aff8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aff91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aff94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127aff97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 127aff99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127aff9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127aff9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127affa2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127affa5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127affa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127affaa jne 0x127aff8e */
  if (!C.zf) goto L_127aff8e;
  /* 127affac jmp 0x127affb7 */
  goto L_127affb7;
L_127affae:;
  /* 127affae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127affb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127affb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_127affb7:;
  /* 127affb7 jmp 0x127aff44 */
  goto L_127aff44;
L_127affb9:;
  /* 127affb9 mov esp, ebp */
  ESP = (EBP);
  /* 127affbb pop ebp */
  EBP = (pop32());
  /* 127affbc ret  */
  ESPCHK(0x127aff40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffc0 @ 0x127affc0 (147 bytes, 52 insns) */
void f_127affc0(void) {
  FTRACE(0x127affc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127affc0 push ebp */
  push32((uint32_t)(EBP));
  /* 127affc1 mov ebp, esp */
  EBP = (ESP);
  /* 127affc3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127affc7 jne 0x127affce */
  if (!C.zf) goto L_127affce;
  /* 127affc9 jmp 0x127b0051 */
  goto L_127b0051;
L_127affce:;
  /* 127affce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127affd1 cmp dword ptr [eax + 0xc], 0x127d07b0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x127d07b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127affd8 je 0x127b0051 */
  if (C.zf) goto L_127b0051;
  /* 127affda push 2 */
  push32((uint32_t)(0x2u));
  /* 127affdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127affdf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127affe2 push edx */
  push32((uint32_t)(EDX));
  /* 127affe3 call 0x127a5210 */
  push32(0x127affe8u); f_127a5210();
  /* 127affe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127affeb push 2 */
  push32((uint32_t)(0x2u));
  /* 127affed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127afff0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127afff3 push ecx */
  push32((uint32_t)(ECX));
  /* 127afff4 call 0x127a5210 */
  push32(0x127afff9u); f_127a5210();
  /* 127afff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127afffc push 2 */
  push32((uint32_t)(0x2u));
  /* 127afffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0001 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127b0004 push eax */
  push32((uint32_t)(EAX));
  /* 127b0005 call 0x127a5210 */
  push32(0x127b000au); f_127a5210();
  /* 127b000a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b000d push 2 */
  push32((uint32_t)(0x2u));
  /* 127b000f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0012 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127b0015 push edx */
  push32((uint32_t)(EDX));
  /* 127b0016 call 0x127a5210 */
  push32(0x127b001bu); f_127a5210();
  /* 127b001b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b001e push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0020 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0023 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 127b0026 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0027 call 0x127a5210 */
  push32(0x127b002cu); f_127a5210();
  /* 127b002c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b002f push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0031 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0034 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 127b0037 push eax */
  push32((uint32_t)(EAX));
  /* 127b0038 call 0x127a5210 */
  push32(0x127b003du); f_127a5210();
  /* 127b003d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0040 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0042 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0045 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 127b0048 push edx */
  push32((uint32_t)(EDX));
  /* 127b0049 call 0x127a5210 */
  push32(0x127b004eu); f_127a5210();
  /* 127b004e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b0051:;
  /* 127b0051 pop ebp */
  EBP = (pop32());
  /* 127b0052 ret  */
  ESPCHK(0x127affc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010060 @ 0x127b0060 (928 bytes, 284 insns) */
void f_127b0060(void) {
  FTRACE(0x127b0060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0060 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0061 mov ebp, esp */
  EBP = (ESP);
  /* 127b0063 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0066 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 127b006d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 127b0074 cmp dword ptr [0x127d0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b007b je 0x127b03b1 */
  if (C.zf) goto L_127b03b1;
  /* 127b0081 cmp dword ptr [0x127d0728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0088 jne 0x127b00b0 */
  if (!C.zf) goto L_127b00b0;
  /* 127b008a push 0x127d0728 */
  push32((uint32_t)(0x127d0728u));
  /* 127b008f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 127b0094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0096 mov ax, word ptr [0x127d076c] */
  AX = (r16((uint32_t)(0x127d076c)));
  /* 127b009c push eax */
  push32((uint32_t)(EAX));
  /* 127b009d push 0 */
  push32((uint32_t)(0x0u));
  /* 127b009f call 0x127b2940 */
  push32(0x127b00a4u); f_127b2940();
  /* 127b00a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b00a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b00a9 je 0x127b00b0 */
  if (C.zf) goto L_127b00b0;
  /* 127b00ab jmp 0x127b0372 */
  goto L_127b0372;
L_127b00b0:;
  /* 127b00b0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 127b00b2 push 0x127cc0d4 */
  push32((uint32_t)(0x127cc0d4u));
  /* 127b00b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b00b9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 127b00be call 0x127a4780 */
  push32(0x127b00c3u); f_127a4780();
  /* 127b00c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b00c6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 127b00c9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 127b00cb push 0x127cc0d4 */
  push32((uint32_t)(0x127cc0d4u));
  /* 127b00d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b00d2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 127b00d7 call 0x127a4780 */
  push32(0x127b00dcu); f_127a4780();
  /* 127b00dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b00df mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 127b00e2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 127b00e4 push 0x127cc0d4 */
  push32((uint32_t)(0x127cc0d4u));
  /* 127b00e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b00eb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 127b00f0 call 0x127a4780 */
  push32(0x127b00f5u); f_127a4780();
  /* 127b00f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b00f8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 127b00fb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 127b00fd push 0x127cc0d4 */
  push32((uint32_t)(0x127cc0d4u));
  /* 127b0102 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0104 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 127b0109 call 0x127a4780 */
  push32(0x127b010eu); f_127a4780();
  /* 127b010e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0111 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 127b0114 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0118 je 0x127b012c */
  if (C.zf) goto L_127b012c;
  /* 127b011a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b011e je 0x127b012c */
  if (C.zf) goto L_127b012c;
  /* 127b0120 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0124 je 0x127b012c */
  if (C.zf) goto L_127b012c;
  /* 127b0126 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b012a jne 0x127b0131 */
  if (!C.zf) goto L_127b0131;
L_127b012c:;
  /* 127b012c jmp 0x127b0372 */
  goto L_127b0372;
L_127b0131:;
  /* 127b0131 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127b0134 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127b0137 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127b013e jmp 0x127b0149 */
  goto L_127b0149;
L_127b0140:;
  /* 127b0140 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b0143 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0146 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_127b0149:;
  /* 127b0149 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0150 jge 0x127b0165 */
  if ((C.sf==C.of)) goto L_127b0165;
  /* 127b0152 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b0155 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 127b0158 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 127b015a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b015d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0160 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127b0163 jmp 0x127b0140 */
  goto L_127b0140;
L_127b0165:;
  /* 127b0165 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 127b0168 push eax */
  push32((uint32_t)(EAX));
  /* 127b0169 mov ecx, dword ptr [0x127d0728] */
  ECX = (r32((uint32_t)(0x127d0728)));
  /* 127b016f push ecx */
  push32((uint32_t)(ECX));
  /* 127b0170 call dword ptr [0x127d3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3344))), 0x127b0176u);
  /* 127b0176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0178 jne 0x127b017f */
  if (!C.zf) goto L_127b017f;
  /* 127b017a jmp 0x127b0372 */
  goto L_127b0372;
L_127b017f:;
  /* 127b017f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0183 jbe 0x127b018a */
  if ((C.cf||C.zf)) goto L_127b018a;
  /* 127b0185 jmp 0x127b0372 */
  goto L_127b0372;
L_127b018a:;
  /* 127b018a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b018d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127b0193 mov dword ptr [0x127ceea4], edx */
  w32((uint32_t)(0x127ceea4), (EDX));
  /* 127b0199 cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b01a0 jle 0x127b01f9 */
  if ((C.zf||C.sf!=C.of)) goto L_127b01f9;
  /* 127b01a2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 127b01a5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127b01a8 jmp 0x127b01b3 */
  goto L_127b01b3;
L_127b01aa:;
  /* 127b01aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b01ad add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b01b0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_127b01b3:;
  /* 127b01b3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b01b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b01b8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b01ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b01bc je 0x127b01f9 */
  if (C.zf) goto L_127b01f9;
  /* 127b01be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b01c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b01c3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 127b01c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b01c8 je 0x127b01f9 */
  if (C.zf) goto L_127b01f9;
  /* 127b01ca mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b01cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b01cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b01d1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127b01d4 jmp 0x127b01df */
  goto L_127b01df;
L_127b01d6:;
  /* 127b01d6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b01d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b01dc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_127b01df:;
  /* 127b01df mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b01e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b01e4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127b01e7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b01ea jg 0x127b01f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b01f7;
  /* 127b01ec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127b01ef add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b01f2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 127b01f5 jmp 0x127b01d6 */
  goto L_127b01d6;
L_127b01f7:;
  /* 127b01f7 jmp 0x127b01aa */
  goto L_127b01aa;
L_127b01f9:;
  /* 127b01f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b01fb push 0 */
  push32((uint32_t)(0x0u));
  /* 127b01fd push 0 */
  push32((uint32_t)(0x0u));
  /* 127b01ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127b0202 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0205 push eax */
  push32((uint32_t)(EAX));
  /* 127b0206 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127b020b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127b020e push ecx */
  push32((uint32_t)(ECX));
  /* 127b020f push 1 */
  push32((uint32_t)(0x1u));
  /* 127b0211 call 0x127ac9b0 */
  push32(0x127b0216u); f_127ac9b0();
  /* 127b0216 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0219 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b021b jne 0x127b0222 */
  if (!C.zf) goto L_127b0222;
  /* 127b021d jmp 0x127b0372 */
  goto L_127b0372;
L_127b0222:;
  /* 127b0222 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127b0225 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 127b022a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b022d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 127b0230 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 127b0237 jmp 0x127b0242 */
  goto L_127b0242;
L_127b0239:;
  /* 127b0239 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b023c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b023f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127b0242:;
  /* 127b0242 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0249 jge 0x127b0260 */
  if ((C.sf==C.of)) goto L_127b0260;
  /* 127b024b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b024e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 127b0252 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 127b0255 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 127b0258 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b025b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 127b025e jmp 0x127b0239 */
  goto L_127b0239;
L_127b0260:;
  /* 127b0260 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b0262 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b0264 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b0267 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b026a push edx */
  push32((uint32_t)(EDX));
  /* 127b026b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 127b0270 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b0273 push eax */
  push32((uint32_t)(EAX));
  /* 127b0274 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b0276 call 0x127b2be0 */
  push32(0x127b027bu); f_127b2be0();
  /* 127b027b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b027e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0280 jne 0x127b0287 */
  if (!C.zf) goto L_127b0287;
  /* 127b0282 jmp 0x127b0372 */
  goto L_127b0372;
L_127b0287:;
  /* 127b0287 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b028a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 127b028f cmp dword ptr [0x127ceea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127ceea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0296 jle 0x127b02f3 */
  if ((C.zf||C.sf!=C.of)) goto L_127b02f3;
  /* 127b0298 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 127b029b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 127b029e jmp 0x127b02a9 */
  goto L_127b02a9;
L_127b02a0:;
  /* 127b02a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b02a3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b02a6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_127b02a9:;
  /* 127b02a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b02ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127b02ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 127b02b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b02b2 je 0x127b02f3 */
  if (C.zf) goto L_127b02f3;
  /* 127b02b4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b02b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b02b9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 127b02bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b02be je 0x127b02f3 */
  if (C.zf) goto L_127b02f3;
  /* 127b02c0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b02c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b02c5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b02c7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127b02ca jmp 0x127b02d5 */
  goto L_127b02d5;
L_127b02cc:;
  /* 127b02cc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b02cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b02d2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_127b02d5:;
  /* 127b02d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b02d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b02da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 127b02dd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b02e0 jg 0x127b02f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b02f1;
  /* 127b02e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127b02e5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127b02e8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 127b02ef jmp 0x127b02cc */
  goto L_127b02cc;
L_127b02f1:;
  /* 127b02f1 jmp 0x127b02a0 */
  goto L_127b02a0;
L_127b02f3:;
  /* 127b02f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127b02f6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b02f9 mov dword ptr [0x127cec98], eax */
  w32((uint32_t)(0x127cec98), (EAX));
  /* 127b02fe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b0301 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0304 mov dword ptr [0x127cec9c], ecx */
  w32((uint32_t)(0x127cec9c), (ECX));
  /* 127b030a cmp dword ptr [0x127d0758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0311 je 0x127b0324 */
  if (C.zf) goto L_127b0324;
  /* 127b0313 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0315 mov edx, dword ptr [0x127d0758] */
  EDX = (r32((uint32_t)(0x127d0758)));
  /* 127b031b push edx */
  push32((uint32_t)(EDX));
  /* 127b031c call 0x127a5210 */
  push32(0x127b0321u); f_127a5210();
  /* 127b0321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b0324:;
  /* 127b0324 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 127b0327 mov dword ptr [0x127d0758], eax */
  w32((uint32_t)(0x127d0758), (EAX));
  /* 127b032c cmp dword ptr [0x127d075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0333 je 0x127b0346 */
  if (C.zf) goto L_127b0346;
  /* 127b0335 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0337 mov ecx, dword ptr [0x127d075c] */
  ECX = (r32((uint32_t)(0x127d075c)));
  /* 127b033d push ecx */
  push32((uint32_t)(ECX));
  /* 127b033e call 0x127a5210 */
  push32(0x127b0343u); f_127a5210();
  /* 127b0343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b0346:;
  /* 127b0346 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b0349 mov dword ptr [0x127d075c], edx */
  w32((uint32_t)(0x127d075c), (EDX));
  /* 127b034f push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0351 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127b0354 push eax */
  push32((uint32_t)(EAX));
  /* 127b0355 call 0x127a5210 */
  push32(0x127b035au); f_127a5210();
  /* 127b035a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b035d push 2 */
  push32((uint32_t)(0x2u));
  /* 127b035f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b0362 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0363 call 0x127a5210 */
  push32(0x127b0368u); f_127a5210();
  /* 127b0368 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b036b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b036d jmp 0x127b03fc */
  goto L_127b03fc;
L_127b0372:;
  /* 127b0372 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0374 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 127b0377 push edx */
  push32((uint32_t)(EDX));
  /* 127b0378 call 0x127a5210 */
  push32(0x127b037du); f_127a5210();
  /* 127b037d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0380 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0382 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 127b0385 push eax */
  push32((uint32_t)(EAX));
  /* 127b0386 call 0x127a5210 */
  push32(0x127b038bu); f_127a5210();
  /* 127b038b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b038e push 2 */
  push32((uint32_t)(0x2u));
  /* 127b0390 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 127b0393 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0394 call 0x127a5210 */
  push32(0x127b0399u); f_127a5210();
  /* 127b0399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b039c push 2 */
  push32((uint32_t)(0x2u));
  /* 127b039e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 127b03a1 push edx */
  push32((uint32_t)(EDX));
  /* 127b03a2 call 0x127a5210 */
  push32(0x127b03a7u); f_127a5210();
  /* 127b03a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b03aa mov eax, 1 */
  EAX = (0x1u);
  /* 127b03af jmp 0x127b03fc */
  goto L_127b03fc;
L_127b03b1:;
  /* 127b03b1 mov dword ptr [0x127cec98], 0x127ceca2 */
  w32((uint32_t)(0x127cec98), (0x127ceca2u));
  /* 127b03bb mov dword ptr [0x127cec9c], 0x127ceca2 */
  w32((uint32_t)(0x127cec9c), (0x127ceca2u));
  /* 127b03c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b03c7 mov eax, dword ptr [0x127d0758] */
  EAX = (r32((uint32_t)(0x127d0758)));
  /* 127b03cc push eax */
  push32((uint32_t)(EAX));
  /* 127b03cd call 0x127a5210 */
  push32(0x127b03d2u); f_127a5210();
  /* 127b03d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b03d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127b03d7 mov ecx, dword ptr [0x127d075c] */
  ECX = (r32((uint32_t)(0x127d075c)));
  /* 127b03dd push ecx */
  push32((uint32_t)(ECX));
  /* 127b03de call 0x127a5210 */
  push32(0x127b03e3u); f_127a5210();
  /* 127b03e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b03e6 mov dword ptr [0x127d0758], 0 */
  w32((uint32_t)(0x127d0758), (0x0u));
  /* 127b03f0 mov dword ptr [0x127d075c], 0 */
  w32((uint32_t)(0x127d075c), (0x0u));
  /* 127b03fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b03fc:;
  /* 127b03fc mov esp, ebp */
  ESP = (EBP);
  /* 127b03fe pop ebp */
  EBP = (pop32());
  /* 127b03ff ret  */
  ESPCHK(0x127b0060u, _esp0);
  ESP += 4; return;
}

/* FUN_10010400 @ 0x127b0400 (7 bytes, 5 insns) */
void f_127b0400(void) {
  FTRACE(0x127b0400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0400 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0401 mov ebp, esp */
  EBP = (ESP);
  /* 127b0403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0405 pop ebp */
  EBP = (pop32());
  /* 127b0406 ret  */
  ESPCHK(0x127b0400u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x127b0410 (129 bytes, 56 insns) */
void f_127b0410(void) {
  FTRACE(0x127b0410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0410 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 127b0414 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 127b0418 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 127b041e jne 0x127b045c */
  if (!C.zf) goto L_127b045c;
L_127b0420:;
  /* 127b0420 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127b0422 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b0424 jne 0x127b0454 */
  if (!C.zf) goto L_127b0454;
  /* 127b0426 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b0428 je 0x127b0450 */
  if (C.zf) goto L_127b0450;
  /* 127b042a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b042d jne 0x127b0454 */
  if (!C.zf) goto L_127b0454;
  /* 127b042f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127b0431 je 0x127b0450 */
  if (C.zf) goto L_127b0450;
  /* 127b0433 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127b0436 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b0439 jne 0x127b0454 */
  if (!C.zf) goto L_127b0454;
  /* 127b043b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b043d je 0x127b0450 */
  if (C.zf) goto L_127b0450;
  /* 127b043f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b0442 jne 0x127b0454 */
  if (!C.zf) goto L_127b0454;
  /* 127b0444 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0447 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b044a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127b044c jne 0x127b0420 */
  if (!C.zf) goto L_127b0420;
  /* 127b044e mov edi, edi */
  EDI = (EDI);
L_127b0450:;
  /* 127b0450 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0452 ret  */
  ESPCHK(0x127b0410u, _esp0);
  ESP += 4; return;
  /* 127b0453 nop  */
  /* nop */
L_127b0454:;
  /* 127b0454 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0456 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127b0458 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 127b0459 ret  */
  ESPCHK(0x127b0410u, _esp0);
  ESP += 4; return;
  /* 127b045a mov edi, edi */
  EDI = (EDI);
L_127b045c:;
  /* 127b045c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 127b0462 je 0x127b0478 */
  if (C.zf) goto L_127b0478;
  /* 127b0464 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b0466 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127b0467 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b0469 jne 0x127b0454 */
  if (!C.zf) goto L_127b0454;
  /* 127b046b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127b046c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b046e je 0x127b0450 */
  if (C.zf) goto L_127b0450;
  /* 127b0470 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 127b0476 je 0x127b0420 */
  if (C.zf) goto L_127b0420;
L_127b0478:;
  /* 127b0478 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 127b047b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b047e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b0480 jne 0x127b0454 */
  if (!C.zf) goto L_127b0454;
  /* 127b0482 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b0484 je 0x127b0450 */
  if (C.zf) goto L_127b0450;
  /* 127b0486 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b0489 jne 0x127b0454 */
  if (!C.zf) goto L_127b0454;
  /* 127b048b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 127b048d je 0x127b0450 */
  if (C.zf) goto L_127b0450;
  /* 127b048f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0492 jmp 0x127b0420 */
  goto L_127b0420;
}

/* FUN_100104a0 @ 0x127b04a0 (62 bytes, 35 insns) */
void f_127b04a0(void) {
  FTRACE(0x127b04a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b04a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b04a1 mov ebp, esp */
  EBP = (ESP);
  /* 127b04a3 push esi */
  push32((uint32_t)(ESI));
  /* 127b04a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b04a6 push eax */
  push32((uint32_t)(EAX));
  /* 127b04a7 push eax */
  push32((uint32_t)(EAX));
  /* 127b04a8 push eax */
  push32((uint32_t)(EAX));
  /* 127b04a9 push eax */
  push32((uint32_t)(EAX));
  /* 127b04aa push eax */
  push32((uint32_t)(EAX));
  /* 127b04ab push eax */
  push32((uint32_t)(EAX));
  /* 127b04ac push eax */
  push32((uint32_t)(EAX));
  /* 127b04ad push eax */
  push32((uint32_t)(EAX));
  /* 127b04ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b04b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127b04b4:;
  /* 127b04b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b04b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b04b8 je 0x127b04c1 */
  if (C.zf) goto L_127b04c1;
  /* 127b04ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127b04bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x127b04bb");
  /* 127b04bf jmp 0x127b04b4 */
  goto L_127b04b4;
L_127b04c1:;
  /* 127b04c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 127b04c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127b04c7 nop  */
  /* nop */
L_127b04c8:;
  /* 127b04c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 127b04c9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127b04cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b04cd je 0x127b04d6 */
  if (C.zf) goto L_127b04d6;
  /* 127b04cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127b04d0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x127b04d0");
  /* 127b04d4 jae 0x127b04c8 */
  if (!C.cf) goto L_127b04c8;
L_127b04d6:;
  /* 127b04d6 mov eax, ecx */
  EAX = (ECX);
  /* 127b04d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b04db pop esi */
  ESI = (pop32());
  /* 127b04dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127b04dd ret  */
  ESPCHK(0x127b04a0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x127b04e0 (56 bytes, 31 insns) */
void f_127b04e0(void) {
  FTRACE(0x127b04e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b04e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b04e1 mov ebp, esp */
  EBP = (ESP);
  /* 127b04e3 push edi */
  push32((uint32_t)(EDI));
  /* 127b04e4 push esi */
  push32((uint32_t)(ESI));
  /* 127b04e5 push ebx */
  push32((uint32_t)(EBX));
  /* 127b04e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b04e9 jecxz 0x127b0511 */
  x86_unimpl("jecxz @ 0x127b04e9");
  /* 127b04eb mov ebx, ecx */
  EBX = (ECX);
  /* 127b04ed mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 127b04f0 mov esi, edi */
  ESI = (EDI);
  /* 127b04f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b04f4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 127b04f6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b04f8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b04fa mov edi, esi */
  EDI = (ESI);
  /* 127b04fc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127b04ff repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 127b0501 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 127b0504 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b0506 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 127b0509 ja 0x127b050f */
  if ((!C.cf&&!C.zf)) goto L_127b050f;
  /* 127b050b je 0x127b0511 */
  if (C.zf) goto L_127b0511;
  /* 127b050d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127b050e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_127b050f:;
  /* 127b050f not ecx */
  ECX = (~(ECX));
L_127b0511:;
  /* 127b0511 mov eax, ecx */
  EAX = (ECX);
  /* 127b0513 pop ebx */
  EBX = (pop32());
  /* 127b0514 pop esi */
  ESI = (pop32());
  /* 127b0515 pop edi */
  EDI = (pop32());
  /* 127b0516 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127b0517 ret  */
  ESPCHK(0x127b04e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010520 @ 0x127b0520 (58 bytes, 32 insns) */
void f_127b0520(void) {
  FTRACE(0x127b0520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0520 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0521 mov ebp, esp */
  EBP = (ESP);
  /* 127b0523 push esi */
  push32((uint32_t)(ESI));
  /* 127b0524 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0526 push eax */
  push32((uint32_t)(EAX));
  /* 127b0527 push eax */
  push32((uint32_t)(EAX));
  /* 127b0528 push eax */
  push32((uint32_t)(EAX));
  /* 127b0529 push eax */
  push32((uint32_t)(EAX));
  /* 127b052a push eax */
  push32((uint32_t)(EAX));
  /* 127b052b push eax */
  push32((uint32_t)(EAX));
  /* 127b052c push eax */
  push32((uint32_t)(EAX));
  /* 127b052d push eax */
  push32((uint32_t)(EAX));
  /* 127b052e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b0531 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_127b0534:;
  /* 127b0534 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b0536 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b0538 je 0x127b0541 */
  if (C.zf) goto L_127b0541;
  /* 127b053a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 127b053b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x127b053b");
  /* 127b053f jmp 0x127b0534 */
  goto L_127b0534;
L_127b0541:;
  /* 127b0541 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_127b0544:;
  /* 127b0544 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 127b0546 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 127b0548 je 0x127b0554 */
  if (C.zf) goto L_127b0554;
  /* 127b054a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 127b054b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x127b054b");
  /* 127b054f jae 0x127b0544 */
  if (!C.cf) goto L_127b0544;
  /* 127b0551 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_127b0554:;
  /* 127b0554 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0557 pop esi */
  ESI = (pop32());
  /* 127b0558 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 127b0559 ret  */
  ESPCHK(0x127b0520u, _esp0);
  ESP += 4; return;
}

/* FUN_10010560 @ 0x127b0560 (512 bytes, 147 insns) */
void f_127b0560(void) {
  FTRACE(0x127b0560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0560 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0561 mov ebp, esp */
  EBP = (ESP);
  /* 127b0563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0566 cmp dword ptr [0x127d07a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d07a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b056d jne 0x127b0592 */
  if (!C.zf) goto L_127b0592;
  /* 127b056f call 0x127b1030 */
  push32(0x127b0574u); f_127b1030();
  /* 127b0574 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0576 je 0x127b0582 */
  if (C.zf) goto L_127b0582;
  /* 127b0578 mov eax, dword ptr [0x127d3268] */
  EAX = (r32((uint32_t)(0x127d3268)));
  /* 127b057d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b0580 jmp 0x127b0589 */
  goto L_127b0589;
L_127b0582:;
  /* 127b0582 mov dword ptr [ebp - 8], 0x127b1080 */
  w32((uint32_t)(EBP + -0x8), (0x127b1080u));
L_127b0589:;
  /* 127b0589 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b058c mov dword ptr [0x127d07a4], ecx */
  w32((uint32_t)(0x127d07a4), (ECX));
L_127b0592:;
  /* 127b0592 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0596 jne 0x127b05a2 */
  if (!C.zf) goto L_127b05a2;
  /* 127b0598 call 0x127b0e80 */
  push32(0x127b059du); f_127b0e80();
  /* 127b059d jmp 0x127b066e */
  goto L_127b066e;
L_127b05a2:;
  /* 127b05a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b05a5 mov dword ptr [0x127d0794], edx */
  w32((uint32_t)(0x127d0794), (EDX));
  /* 127b05ab cmp dword ptr [0x127d0794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b05b2 je 0x127b05d4 */
  if (C.zf) goto L_127b05d4;
  /* 127b05b4 mov eax, dword ptr [0x127d0794] */
  EAX = (r32((uint32_t)(0x127d0794)));
  /* 127b05b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b05bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b05be je 0x127b05d4 */
  if (C.zf) goto L_127b05d4;
  /* 127b05c0 push 0x127d0794 */
  push32((uint32_t)(0x127d0794u));
  /* 127b05c5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127b05c7 push 0x127cfa90 */
  push32((uint32_t)(0x127cfa90u));
  /* 127b05cc call 0x127b0760 */
  push32(0x127b05d1u); f_127b0760();
  /* 127b05d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b05d4:;
  /* 127b05d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b05d7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b05da mov dword ptr [0x127d0798], edx */
  w32((uint32_t)(0x127d0798), (EDX));
  /* 127b05e0 cmp dword ptr [0x127d0798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b05e7 je 0x127b0609 */
  if (C.zf) goto L_127b0609;
  /* 127b05e9 mov eax, dword ptr [0x127d0798] */
  EAX = (r32((uint32_t)(0x127d0798)));
  /* 127b05ee movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b05f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b05f3 je 0x127b0609 */
  if (C.zf) goto L_127b0609;
  /* 127b05f5 push 0x127d0798 */
  push32((uint32_t)(0x127d0798u));
  /* 127b05fa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 127b05fc push 0x127cf9d8 */
  push32((uint32_t)(0x127cf9d8u));
  /* 127b0601 call 0x127b0760 */
  push32(0x127b0606u); f_127b0760();
  /* 127b0606 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b0609:;
  /* 127b0609 mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
  /* 127b0613 cmp dword ptr [0x127d0794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b061a je 0x127b064d */
  if (C.zf) goto L_127b064d;
  /* 127b061c mov edx, dword ptr [0x127d0794] */
  EDX = (r32((uint32_t)(0x127d0794)));
  /* 127b0622 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127b0625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0627 je 0x127b064d */
  if (C.zf) goto L_127b064d;
  /* 127b0629 cmp dword ptr [0x127d0798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0630 je 0x127b0646 */
  if (C.zf) goto L_127b0646;
  /* 127b0632 mov ecx, dword ptr [0x127d0798] */
  ECX = (r32((uint32_t)(0x127d0798)));
  /* 127b0638 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127b063b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b063d je 0x127b0646 */
  if (C.zf) goto L_127b0646;
  /* 127b063f call 0x127b07f0 */
  push32(0x127b0644u); f_127b07f0();
  /* 127b0644 jmp 0x127b064b */
  goto L_127b064b;
L_127b0646:;
  /* 127b0646 call 0x127b0be0 */
  push32(0x127b064bu); f_127b0be0();
L_127b064b:;
  /* 127b064b jmp 0x127b066e */
  goto L_127b066e;
L_127b064d:;
  /* 127b064d cmp dword ptr [0x127d0798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0654 je 0x127b0669 */
  if (C.zf) goto L_127b0669;
  /* 127b0656 mov eax, dword ptr [0x127d0798] */
  EAX = (r32((uint32_t)(0x127d0798)));
  /* 127b065b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b065e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b0660 je 0x127b0669 */
  if (C.zf) goto L_127b0669;
  /* 127b0662 call 0x127b0d80 */
  push32(0x127b0667u); f_127b0d80();
  /* 127b0667 jmp 0x127b066e */
  goto L_127b066e;
L_127b0669:;
  /* 127b0669 call 0x127b0e80 */
  push32(0x127b066eu); f_127b0e80();
L_127b066e:;
  /* 127b066e cmp dword ptr [0x127d079c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d079c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0675 jne 0x127b067e */
  if (!C.zf) goto L_127b067e;
  /* 127b0677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0679 jmp 0x127b075c */
  goto L_127b075c;
L_127b067e:;
  /* 127b067e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0681 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0687 push edx */
  push32((uint32_t)(EDX));
  /* 127b0688 call 0x127b0eb0 */
  push32(0x127b068du); f_127b0eb0();
  /* 127b068d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0690 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b0693 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0697 je 0x127b06ac */
  if (C.zf) goto L_127b06ac;
  /* 127b0699 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b069c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b06a1 push eax */
  push32((uint32_t)(EAX));
  /* 127b06a2 call dword ptr [0x127d326c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d326c))), 0x127b06a8u);
  /* 127b06a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b06aa jne 0x127b06b3 */
  if (!C.zf) goto L_127b06b3;
L_127b06ac:;
  /* 127b06ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b06ae jmp 0x127b075c */
  goto L_127b075c;
L_127b06b3:;
  /* 127b06b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b06b5 mov ecx, dword ptr [0x127d0784] */
  ECX = (r32((uint32_t)(0x127d0784)));
  /* 127b06bb push ecx */
  push32((uint32_t)(ECX));
  /* 127b06bc call dword ptr [0x127d3270] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3270))), 0x127b06c2u);
  /* 127b06c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b06c4 jne 0x127b06cd */
  if (!C.zf) goto L_127b06cd;
  /* 127b06c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b06c8 jmp 0x127b075c */
  goto L_127b075c;
L_127b06cd:;
  /* 127b06cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b06d1 je 0x127b06f8 */
  if (C.zf) goto L_127b06f8;
  /* 127b06d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b06d6 mov ax, word ptr [0x127d0784] */
  AX = (r16((uint32_t)(0x127d0784)));
  /* 127b06dc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 127b06df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b06e2 mov dx, word ptr [0x127d07a0] */
  DX = (r16((uint32_t)(0x127d07a0)));
  /* 127b06e9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 127b06ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b06f0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 127b06f4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_127b06f8:;
  /* 127b06f8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b06fc je 0x127b0757 */
  if (C.zf) goto L_127b0757;
  /* 127b06fe push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127b0700 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b0703 push edx */
  push32((uint32_t)(EDX));
  /* 127b0704 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 127b0709 mov eax, dword ptr [0x127d0784] */
  EAX = (r32((uint32_t)(0x127d0784)));
  /* 127b070e push eax */
  push32((uint32_t)(EAX));
  /* 127b070f call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0715u);
  /* 127b0715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0717 jne 0x127b071d */
  if (!C.zf) goto L_127b071d;
  /* 127b0719 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b071b jmp 0x127b075c */
  goto L_127b075c;
L_127b071d:;
  /* 127b071d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127b071f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b0722 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0725 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0726 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 127b072b mov edx, dword ptr [0x127d07a0] */
  EDX = (r32((uint32_t)(0x127d07a0)));
  /* 127b0731 push edx */
  push32((uint32_t)(EDX));
  /* 127b0732 call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0738u);
  /* 127b0738 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b073a jne 0x127b0740 */
  if (!C.zf) goto L_127b0740;
  /* 127b073c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b073e jmp 0x127b075c */
  goto L_127b075c;
L_127b0740:;
  /* 127b0740 push 0xa */
  push32((uint32_t)(0xau));
  /* 127b0742 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b0745 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b074a push eax */
  push32((uint32_t)(EAX));
  /* 127b074b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b074e push ecx */
  push32((uint32_t)(ECX));
  /* 127b074f call 0x127a72c0 */
  push32(0x127b0754u); f_127a72c0();
  /* 127b0754 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b0757:;
  /* 127b0757 mov eax, 1 */
  EAX = (0x1u);
L_127b075c:;
  /* 127b075c mov esp, ebp */
  ESP = (EBP);
  /* 127b075e pop ebp */
  EBP = (pop32());
  /* 127b075f ret  */
  ESPCHK(0x127b0560u, _esp0);
  ESP += 4; return;
}

/* FUN_10010760 @ 0x127b0760 (130 bytes, 47 insns) */
void f_127b0760(void) {
  FTRACE(0x127b0760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0760 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0761 mov ebp, esp */
  EBP = (ESP);
  /* 127b0763 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0766 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127b076d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_127b0774:;
  /* 127b0774 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b0777 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b077a jg 0x127b07de */
  if ((!C.zf&&C.sf==C.of)) goto L_127b07de;
  /* 127b077c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0780 je 0x127b07de */
  if (C.zf) goto L_127b07de;
  /* 127b0782 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b0785 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0788 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b0789 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b078b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127b078d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b0790 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b0793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0796 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 127b0799 push eax */
  push32((uint32_t)(EAX));
  /* 127b079a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b079d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127b079f push edx */
  push32((uint32_t)(EDX));
  /* 127b07a0 call 0x127b2e50 */
  push32(0x127b07a5u); f_127b2e50();
  /* 127b07a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b07a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b07ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b07af jne 0x127b07c2 */
  if (!C.zf) goto L_127b07c2;
  /* 127b07b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b07b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b07b7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 127b07bb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b07be mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 127b07c0 jmp 0x127b07dc */
  goto L_127b07dc;
L_127b07c2:;
  /* 127b07c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b07c6 jge 0x127b07d3 */
  if ((C.sf==C.of)) goto L_127b07d3;
  /* 127b07c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b07cb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b07ce mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 127b07d1 jmp 0x127b07dc */
  goto L_127b07dc;
L_127b07d3:;
  /* 127b07d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b07d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b07d9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_127b07dc:;
  /* 127b07dc jmp 0x127b0774 */
  goto L_127b0774;
L_127b07de:;
  /* 127b07de mov esp, ebp */
  ESP = (EBP);
  /* 127b07e0 pop ebp */
  EBP = (pop32());
  /* 127b07e1 ret  */
  ESPCHK(0x127b0760u, _esp0);
  ESP += 4; return;
}

/* FUN_100107f0 @ 0x127b07f0 (186 bytes, 50 insns) */
void f_127b07f0(void) {
  FTRACE(0x127b07f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b07f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b07f1 mov ebp, esp */
  EBP = (ESP);
  /* 127b07f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b07f4 mov eax, dword ptr [0x127d0794] */
  EAX = (r32((uint32_t)(0x127d0794)));
  /* 127b07f9 push eax */
  push32((uint32_t)(EAX));
  /* 127b07fa call 0x127a75b0 */
  push32(0x127b07ffu); f_127a75b0();
  /* 127b07ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0802 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b0804 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0807 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 127b080a mov dword ptr [0x127d0790], ecx */
  w32((uint32_t)(0x127d0790), (ECX));
  /* 127b0810 mov edx, dword ptr [0x127d0798] */
  EDX = (r32((uint32_t)(0x127d0798)));
  /* 127b0816 push edx */
  push32((uint32_t)(EDX));
  /* 127b0817 call 0x127a75b0 */
  push32(0x127b081cu); f_127a75b0();
  /* 127b081c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b081f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b0821 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0824 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 127b0827 mov dword ptr [0x127d0788], ecx */
  w32((uint32_t)(0x127d0788), (ECX));
  /* 127b082d mov dword ptr [0x127d0784], 0 */
  w32((uint32_t)(0x127d0784), (0x0u));
  /* 127b0837 cmp dword ptr [0x127d0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b083e je 0x127b0849 */
  if (C.zf) goto L_127b0849;
  /* 127b0840 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127b0847 jmp 0x127b085b */
  goto L_127b085b;
L_127b0849:;
  /* 127b0849 mov edx, dword ptr [0x127d0794] */
  EDX = (r32((uint32_t)(0x127d0794)));
  /* 127b084f push edx */
  push32((uint32_t)(EDX));
  /* 127b0850 call 0x127b1290 */
  push32(0x127b0855u); f_127b1290();
  /* 127b0855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0858 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127b085b:;
  /* 127b085b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b085e mov dword ptr [0x127d078c], eax */
  w32((uint32_t)(0x127d078c), (EAX));
  /* 127b0863 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b0865 push 0x127b08b0 */
  push32((uint32_t)(0x127b08b0u));
  /* 127b086a call dword ptr [0x127d3264] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3264))), 0x127b0870u);
  /* 127b0870 mov ecx, dword ptr [0x127d079c] */
  ECX = (r32((uint32_t)(0x127d079c)));
  /* 127b0876 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 127b087c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b087e je 0x127b089c */
  if (C.zf) goto L_127b089c;
  /* 127b0880 mov edx, dword ptr [0x127d079c] */
  EDX = (r32((uint32_t)(0x127d079c)));
  /* 127b0886 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 127b088c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b088e je 0x127b089c */
  if (C.zf) goto L_127b089c;
  /* 127b0890 mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0895 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 127b0898 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b089a jne 0x127b08a6 */
  if (!C.zf) goto L_127b08a6;
L_127b089c:;
  /* 127b089c mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
L_127b08a6:;
  /* 127b08a6 mov esp, ebp */
  ESP = (EBP);
  /* 127b08a8 pop ebp */
  EBP = (pop32());
  /* 127b08a9 ret  */
  ESPCHK(0x127b07f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108b0 @ 0x127b08b0 (804 bytes, 220 insns) */
void f_127b08b0(void) {
  FTRACE(0x127b08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b08b1 mov ebp, esp */
  EBP = (ESP);
  /* 127b08b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b08b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b08b9 push eax */
  push32((uint32_t)(EAX));
  /* 127b08ba call 0x127b1210 */
  push32(0x127b08bfu); f_127b1210();
  /* 127b08bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b08c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127b08c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127b08c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127b08ca push ecx */
  push32((uint32_t)(ECX));
  /* 127b08cb mov edx, dword ptr [0x127d0788] */
  EDX = (r32((uint32_t)(0x127d0788)));
  /* 127b08d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b08d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b08d5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 127b08db add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b08e1 push edx */
  push32((uint32_t)(EDX));
  /* 127b08e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b08e5 push eax */
  push32((uint32_t)(EAX));
  /* 127b08e6 call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b08ecu);
  /* 127b08ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b08ee jne 0x127b0904 */
  if (!C.zf) goto L_127b0904;
  /* 127b08f0 mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
  /* 127b08fa mov eax, 1 */
  EAX = (0x1u);
  /* 127b08ff jmp 0x127b0bce */
  goto L_127b0bce;
L_127b0904:;
  /* 127b0904 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127b0907 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0908 mov edx, dword ptr [0x127d0798] */
  EDX = (r32((uint32_t)(0x127d0798)));
  /* 127b090e push edx */
  push32((uint32_t)(EDX));
  /* 127b090f call 0x127b2e50 */
  push32(0x127b0914u); f_127b2e50();
  /* 127b0914 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0919 jne 0x127b0a3f */
  if (!C.zf) goto L_127b0a3f;
  /* 127b091f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127b0921 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127b0924 push eax */
  push32((uint32_t)(EAX));
  /* 127b0925 mov ecx, dword ptr [0x127d0790] */
  ECX = (r32((uint32_t)(0x127d0790)));
  /* 127b092b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b092d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b092f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 127b0935 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b093b push ecx */
  push32((uint32_t)(ECX));
  /* 127b093c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b093f push edx */
  push32((uint32_t)(EDX));
  /* 127b0940 call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0946u);
  /* 127b0946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0948 jne 0x127b095e */
  if (!C.zf) goto L_127b095e;
  /* 127b094a mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
  /* 127b0954 mov eax, 1 */
  EAX = (0x1u);
  /* 127b0959 jmp 0x127b0bce */
  goto L_127b0bce;
L_127b095e:;
  /* 127b095e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127b0961 push eax */
  push32((uint32_t)(EAX));
  /* 127b0962 mov ecx, dword ptr [0x127d0794] */
  ECX = (r32((uint32_t)(0x127d0794)));
  /* 127b0968 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0969 call 0x127b2e50 */
  push32(0x127b096eu); f_127b2e50();
  /* 127b096e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0973 jne 0x127b09a0 */
  if (!C.zf) goto L_127b09a0;
  /* 127b0975 mov edx, dword ptr [0x127d079c] */
  EDX = (r32((uint32_t)(0x127d079c)));
  /* 127b097b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 127b0981 mov dword ptr [0x127d079c], edx */
  w32((uint32_t)(0x127d079c), (EDX));
  /* 127b0987 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b098a mov dword ptr [0x127d07a0], eax */
  w32((uint32_t)(0x127d07a0), (EAX));
  /* 127b098f mov ecx, dword ptr [0x127d07a0] */
  ECX = (r32((uint32_t)(0x127d07a0)));
  /* 127b0995 mov dword ptr [0x127d0784], ecx */
  w32((uint32_t)(0x127d0784), (ECX));
  /* 127b099b jmp 0x127b0a3f */
  goto L_127b0a3f;
L_127b09a0:;
  /* 127b09a0 mov edx, dword ptr [0x127d079c] */
  EDX = (r32((uint32_t)(0x127d079c)));
  /* 127b09a6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 127b09a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b09ab jne 0x127b0a3f */
  if (!C.zf) goto L_127b0a3f;
  /* 127b09b1 cmp dword ptr [0x127d078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b09b8 je 0x127b0a0d */
  if (C.zf) goto L_127b0a0d;
  /* 127b09ba mov eax, dword ptr [0x127d078c] */
  EAX = (r32((uint32_t)(0x127d078c)));
  /* 127b09bf push eax */
  push32((uint32_t)(EAX));
  /* 127b09c0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127b09c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b09c4 mov edx, dword ptr [0x127d0794] */
  EDX = (r32((uint32_t)(0x127d0794)));
  /* 127b09ca push edx */
  push32((uint32_t)(EDX));
  /* 127b09cb call 0x127b2f20 */
  push32(0x127b09d0u); f_127b2f20();
  /* 127b09d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b09d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b09d5 jne 0x127b0a0d */
  if (!C.zf) goto L_127b0a0d;
  /* 127b09d7 mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b09dc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 127b09de mov dword ptr [0x127d079c], eax */
  w32((uint32_t)(0x127d079c), (EAX));
  /* 127b09e3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b09e6 mov dword ptr [0x127d07a0], ecx */
  w32((uint32_t)(0x127d07a0), (ECX));
  /* 127b09ec mov edx, dword ptr [0x127d0794] */
  EDX = (r32((uint32_t)(0x127d0794)));
  /* 127b09f2 push edx */
  push32((uint32_t)(EDX));
  /* 127b09f3 call 0x127a75b0 */
  push32(0x127b09f8u); f_127a75b0();
  /* 127b09f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b09fb cmp eax, dword ptr [0x127d078c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d078c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0a01 jne 0x127b0a0b */
  if (!C.zf) goto L_127b0a0b;
  /* 127b0a03 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0a06 mov dword ptr [0x127d0784], eax */
  w32((uint32_t)(0x127d0784), (EAX));
L_127b0a0b:;
  /* 127b0a0b jmp 0x127b0a3f */
  goto L_127b0a3f;
L_127b0a0d:;
  /* 127b0a0d mov ecx, dword ptr [0x127d079c] */
  ECX = (r32((uint32_t)(0x127d079c)));
  /* 127b0a13 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127b0a16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b0a18 jne 0x127b0a3f */
  if (!C.zf) goto L_127b0a3f;
  /* 127b0a1a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0a1d push edx */
  push32((uint32_t)(EDX));
  /* 127b0a1e call 0x127b0f50 */
  push32(0x127b0a23u); f_127b0f50();
  /* 127b0a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0a28 je 0x127b0a3f */
  if (C.zf) goto L_127b0a3f;
  /* 127b0a2a mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0a2f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 127b0a31 mov dword ptr [0x127d079c], eax */
  w32((uint32_t)(0x127d079c), (EAX));
  /* 127b0a36 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0a39 mov dword ptr [0x127d07a0], ecx */
  w32((uint32_t)(0x127d07a0), (ECX));
L_127b0a3f:;
  /* 127b0a3f mov edx, dword ptr [0x127d079c] */
  EDX = (r32((uint32_t)(0x127d079c)));
  /* 127b0a45 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 127b0a4b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0a51 je 0x127b0bc1 */
  if (C.zf) goto L_127b0bc1;
  /* 127b0a57 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127b0a59 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127b0a5c push eax */
  push32((uint32_t)(EAX));
  /* 127b0a5d mov ecx, dword ptr [0x127d0790] */
  ECX = (r32((uint32_t)(0x127d0790)));
  /* 127b0a63 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b0a65 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0a67 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 127b0a6d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0a73 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0a74 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0a77 push edx */
  push32((uint32_t)(EDX));
  /* 127b0a78 call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0a7eu);
  /* 127b0a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0a80 jne 0x127b0a96 */
  if (!C.zf) goto L_127b0a96;
  /* 127b0a82 mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
  /* 127b0a8c mov eax, 1 */
  EAX = (0x1u);
  /* 127b0a91 jmp 0x127b0bce */
  goto L_127b0bce;
L_127b0a96:;
  /* 127b0a96 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127b0a99 push eax */
  push32((uint32_t)(EAX));
  /* 127b0a9a mov ecx, dword ptr [0x127d0794] */
  ECX = (r32((uint32_t)(0x127d0794)));
  /* 127b0aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0aa1 call 0x127b2e50 */
  push32(0x127b0aa6u); f_127b2e50();
  /* 127b0aa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0aa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0aab jne 0x127b0b60 */
  if (!C.zf) goto L_127b0b60;
  /* 127b0ab1 mov edx, dword ptr [0x127d079c] */
  EDX = (r32((uint32_t)(0x127d079c)));
  /* 127b0ab7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 127b0aba mov dword ptr [0x127d079c], edx */
  w32((uint32_t)(0x127d079c), (EDX));
  /* 127b0ac0 cmp dword ptr [0x127d0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0ac7 je 0x127b0aea */
  if (C.zf) goto L_127b0aea;
  /* 127b0ac9 mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0ace or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 127b0ad1 mov dword ptr [0x127d079c], eax */
  w32((uint32_t)(0x127d079c), (EAX));
  /* 127b0ad6 cmp dword ptr [0x127d0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0add jne 0x127b0ae8 */
  if (!C.zf) goto L_127b0ae8;
  /* 127b0adf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0ae2 mov dword ptr [0x127d0784], ecx */
  w32((uint32_t)(0x127d0784), (ECX));
L_127b0ae8:;
  /* 127b0ae8 jmp 0x127b0b5e */
  goto L_127b0b5e;
L_127b0aea:;
  /* 127b0aea cmp dword ptr [0x127d078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0af1 je 0x127b0b3f */
  if (C.zf) goto L_127b0b3f;
  /* 127b0af3 mov edx, dword ptr [0x127d0794] */
  EDX = (r32((uint32_t)(0x127d0794)));
  /* 127b0af9 push edx */
  push32((uint32_t)(EDX));
  /* 127b0afa call 0x127a75b0 */
  push32(0x127b0affu); f_127a75b0();
  /* 127b0aff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0b02 cmp eax, dword ptr [0x127d078c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d078c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0b08 jne 0x127b0b3f */
  if (!C.zf) goto L_127b0b3f;
  /* 127b0b0a push 1 */
  push32((uint32_t)(0x1u));
  /* 127b0b0c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0b0f push eax */
  push32((uint32_t)(EAX));
  /* 127b0b10 call 0x127b0fa0 */
  push32(0x127b0b15u); f_127b0fa0();
  /* 127b0b15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0b1a je 0x127b0b3d */
  if (C.zf) goto L_127b0b3d;
  /* 127b0b1c mov ecx, dword ptr [0x127d079c] */
  ECX = (r32((uint32_t)(0x127d079c)));
  /* 127b0b22 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 127b0b25 mov dword ptr [0x127d079c], ecx */
  w32((uint32_t)(0x127d079c), (ECX));
  /* 127b0b2b cmp dword ptr [0x127d0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0b32 jne 0x127b0b3d */
  if (!C.zf) goto L_127b0b3d;
  /* 127b0b34 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0b37 mov dword ptr [0x127d0784], edx */
  w32((uint32_t)(0x127d0784), (EDX));
L_127b0b3d:;
  /* 127b0b3d jmp 0x127b0b5e */
  goto L_127b0b5e;
L_127b0b3f:;
  /* 127b0b3f mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0b44 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 127b0b47 mov dword ptr [0x127d079c], eax */
  w32((uint32_t)(0x127d079c), (EAX));
  /* 127b0b4c cmp dword ptr [0x127d0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0b53 jne 0x127b0b5e */
  if (!C.zf) goto L_127b0b5e;
  /* 127b0b55 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0b58 mov dword ptr [0x127d0784], ecx */
  w32((uint32_t)(0x127d0784), (ECX));
L_127b0b5e:;
  /* 127b0b5e jmp 0x127b0bc1 */
  goto L_127b0bc1;
L_127b0b60:;
  /* 127b0b60 cmp dword ptr [0x127d0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0b67 jne 0x127b0bc1 */
  if (!C.zf) goto L_127b0bc1;
  /* 127b0b69 cmp dword ptr [0x127d078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0b70 je 0x127b0bc1 */
  if (C.zf) goto L_127b0bc1;
  /* 127b0b72 mov edx, dword ptr [0x127d078c] */
  EDX = (r32((uint32_t)(0x127d078c)));
  /* 127b0b78 push edx */
  push32((uint32_t)(EDX));
  /* 127b0b79 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 127b0b7c push eax */
  push32((uint32_t)(EAX));
  /* 127b0b7d mov ecx, dword ptr [0x127d0794] */
  ECX = (r32((uint32_t)(0x127d0794)));
  /* 127b0b83 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0b84 call 0x127b2f20 */
  push32(0x127b0b89u); f_127b2f20();
  /* 127b0b89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0b8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0b8e jne 0x127b0bc1 */
  if (!C.zf) goto L_127b0bc1;
  /* 127b0b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b0b92 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0b95 push edx */
  push32((uint32_t)(EDX));
  /* 127b0b96 call 0x127b0fa0 */
  push32(0x127b0b9bu); f_127b0fa0();
  /* 127b0b9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0ba0 je 0x127b0bc1 */
  if (C.zf) goto L_127b0bc1;
  /* 127b0ba2 mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0ba7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 127b0baa mov dword ptr [0x127d079c], eax */
  w32((uint32_t)(0x127d079c), (EAX));
  /* 127b0baf cmp dword ptr [0x127d0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0bb6 jne 0x127b0bc1 */
  if (!C.zf) goto L_127b0bc1;
  /* 127b0bb8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0bbb mov dword ptr [0x127d0784], ecx */
  w32((uint32_t)(0x127d0784), (ECX));
L_127b0bc1:;
  /* 127b0bc1 mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0bc6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127b0bc9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b0bcb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0bcd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127b0bce:;
  /* 127b0bce mov esp, ebp */
  ESP = (EBP);
  /* 127b0bd0 pop ebp */
  EBP = (pop32());
  /* 127b0bd1 ret 4 */
  ESPCHK(0x127b08b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010be0 @ 0x127b0be0 (116 bytes, 33 insns) */
void f_127b0be0(void) {
  FTRACE(0x127b0be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0be0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0be1 mov ebp, esp */
  EBP = (ESP);
  /* 127b0be3 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0be4 mov eax, dword ptr [0x127d0794] */
  EAX = (r32((uint32_t)(0x127d0794)));
  /* 127b0be9 push eax */
  push32((uint32_t)(EAX));
  /* 127b0bea call 0x127a75b0 */
  push32(0x127b0befu); f_127a75b0();
  /* 127b0bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0bf2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b0bf4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0bf7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 127b0bfa mov dword ptr [0x127d0790], ecx */
  w32((uint32_t)(0x127d0790), (ECX));
  /* 127b0c00 cmp dword ptr [0x127d0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0c07 je 0x127b0c12 */
  if (C.zf) goto L_127b0c12;
  /* 127b0c09 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 127b0c10 jmp 0x127b0c24 */
  goto L_127b0c24;
L_127b0c12:;
  /* 127b0c12 mov edx, dword ptr [0x127d0794] */
  EDX = (r32((uint32_t)(0x127d0794)));
  /* 127b0c18 push edx */
  push32((uint32_t)(EDX));
  /* 127b0c19 call 0x127b1290 */
  push32(0x127b0c1eu); f_127b1290();
  /* 127b0c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0c21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127b0c24:;
  /* 127b0c24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b0c27 mov dword ptr [0x127d078c], eax */
  w32((uint32_t)(0x127d078c), (EAX));
  /* 127b0c2c push 1 */
  push32((uint32_t)(0x1u));
  /* 127b0c2e push 0x127b0c60 */
  push32((uint32_t)(0x127b0c60u));
  /* 127b0c33 call dword ptr [0x127d3264] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3264))), 0x127b0c39u);
  /* 127b0c39 mov ecx, dword ptr [0x127d079c] */
  ECX = (r32((uint32_t)(0x127d079c)));
  /* 127b0c3f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127b0c42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b0c44 jne 0x127b0c50 */
  if (!C.zf) goto L_127b0c50;
  /* 127b0c46 mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
L_127b0c50:;
  /* 127b0c50 mov esp, ebp */
  ESP = (EBP);
  /* 127b0c52 pop ebp */
  EBP = (pop32());
  /* 127b0c53 ret  */
  ESPCHK(0x127b0be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c60 @ 0x127b0c60 (287 bytes, 86 insns) */
void f_127b0c60(void) {
  FTRACE(0x127b0c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0c60 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0c61 mov ebp, esp */
  EBP = (ESP);
  /* 127b0c63 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0c66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0c69 push eax */
  push32((uint32_t)(EAX));
  /* 127b0c6a call 0x127b1210 */
  push32(0x127b0c6fu); f_127b1210();
  /* 127b0c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0c72 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127b0c75 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127b0c77 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127b0c7a push ecx */
  push32((uint32_t)(ECX));
  /* 127b0c7b mov edx, dword ptr [0x127d0790] */
  EDX = (r32((uint32_t)(0x127d0790)));
  /* 127b0c81 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b0c83 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0c85 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 127b0c8b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0c91 push edx */
  push32((uint32_t)(EDX));
  /* 127b0c92 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0c95 push eax */
  push32((uint32_t)(EAX));
  /* 127b0c96 call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0c9cu);
  /* 127b0c9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0c9e jne 0x127b0cb4 */
  if (!C.zf) goto L_127b0cb4;
  /* 127b0ca0 mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
  /* 127b0caa mov eax, 1 */
  EAX = (0x1u);
  /* 127b0caf jmp 0x127b0d79 */
  goto L_127b0d79;
L_127b0cb4:;
  /* 127b0cb4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127b0cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0cb8 mov edx, dword ptr [0x127d0794] */
  EDX = (r32((uint32_t)(0x127d0794)));
  /* 127b0cbe push edx */
  push32((uint32_t)(EDX));
  /* 127b0cbf call 0x127b2e50 */
  push32(0x127b0cc4u); f_127b2e50();
  /* 127b0cc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0cc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0cc9 jne 0x127b0d09 */
  if (!C.zf) goto L_127b0d09;
  /* 127b0ccb cmp dword ptr [0x127d0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0cd2 jne 0x127b0ce6 */
  if (!C.zf) goto L_127b0ce6;
  /* 127b0cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b0cd6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0cd9 push eax */
  push32((uint32_t)(EAX));
  /* 127b0cda call 0x127b0fa0 */
  push32(0x127b0cdfu); f_127b0fa0();
  /* 127b0cdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0ce4 je 0x127b0d07 */
  if (C.zf) goto L_127b0d07;
L_127b0ce6:;
  /* 127b0ce6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0ce9 mov dword ptr [0x127d07a0], ecx */
  w32((uint32_t)(0x127d07a0), (ECX));
  /* 127b0cef mov edx, dword ptr [0x127d07a0] */
  EDX = (r32((uint32_t)(0x127d07a0)));
  /* 127b0cf5 mov dword ptr [0x127d0784], edx */
  w32((uint32_t)(0x127d0784), (EDX));
  /* 127b0cfb mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0d00 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 127b0d02 mov dword ptr [0x127d079c], eax */
  w32((uint32_t)(0x127d079c), (EAX));
L_127b0d07:;
  /* 127b0d07 jmp 0x127b0d6c */
  goto L_127b0d6c;
L_127b0d09:;
  /* 127b0d09 cmp dword ptr [0x127d0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0d10 jne 0x127b0d6c */
  if (!C.zf) goto L_127b0d6c;
  /* 127b0d12 cmp dword ptr [0x127d078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127d078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0d19 je 0x127b0d6c */
  if (C.zf) goto L_127b0d6c;
  /* 127b0d1b mov ecx, dword ptr [0x127d078c] */
  ECX = (r32((uint32_t)(0x127d078c)));
  /* 127b0d21 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0d22 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 127b0d25 push edx */
  push32((uint32_t)(EDX));
  /* 127b0d26 mov eax, dword ptr [0x127d0794] */
  EAX = (r32((uint32_t)(0x127d0794)));
  /* 127b0d2b push eax */
  push32((uint32_t)(EAX));
  /* 127b0d2c call 0x127b2f20 */
  push32(0x127b0d31u); f_127b2f20();
  /* 127b0d31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0d36 jne 0x127b0d6c */
  if (!C.zf) goto L_127b0d6c;
  /* 127b0d38 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b0d3a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0d3d push ecx */
  push32((uint32_t)(ECX));
  /* 127b0d3e call 0x127b0fa0 */
  push32(0x127b0d43u); f_127b0fa0();
  /* 127b0d43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0d48 je 0x127b0d6c */
  if (C.zf) goto L_127b0d6c;
  /* 127b0d4a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0d4d mov dword ptr [0x127d07a0], edx */
  w32((uint32_t)(0x127d07a0), (EDX));
  /* 127b0d53 mov eax, dword ptr [0x127d07a0] */
  EAX = (r32((uint32_t)(0x127d07a0)));
  /* 127b0d58 mov dword ptr [0x127d0784], eax */
  w32((uint32_t)(0x127d0784), (EAX));
  /* 127b0d5d mov ecx, dword ptr [0x127d079c] */
  ECX = (r32((uint32_t)(0x127d079c)));
  /* 127b0d63 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127b0d66 mov dword ptr [0x127d079c], ecx */
  w32((uint32_t)(0x127d079c), (ECX));
L_127b0d6c:;
  /* 127b0d6c mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0d71 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127b0d74 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b0d76 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0d78 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127b0d79:;
  /* 127b0d79 mov esp, ebp */
  ESP = (EBP);
  /* 127b0d7b pop ebp */
  EBP = (pop32());
  /* 127b0d7c ret 4 */
  ESPCHK(0x127b0c60u, _esp0);
  ESP += 8; return;
}

/* FUN_10010d80 @ 0x127b0d80 (69 bytes, 20 insns) */
void f_127b0d80(void) {
  FTRACE(0x127b0d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0d80 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0d81 mov ebp, esp */
  EBP = (ESP);
  /* 127b0d83 mov eax, dword ptr [0x127d0798] */
  EAX = (r32((uint32_t)(0x127d0798)));
  /* 127b0d88 push eax */
  push32((uint32_t)(EAX));
  /* 127b0d89 call 0x127a75b0 */
  push32(0x127b0d8eu); f_127a75b0();
  /* 127b0d8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0d91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b0d93 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0d96 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 127b0d99 mov dword ptr [0x127d0788], ecx */
  w32((uint32_t)(0x127d0788), (ECX));
  /* 127b0d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 127b0da1 push 0x127b0dd0 */
  push32((uint32_t)(0x127b0dd0u));
  /* 127b0da6 call dword ptr [0x127d3264] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3264))), 0x127b0dacu);
  /* 127b0dac mov edx, dword ptr [0x127d079c] */
  EDX = (r32((uint32_t)(0x127d079c)));
  /* 127b0db2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 127b0db5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b0db7 jne 0x127b0dc3 */
  if (!C.zf) goto L_127b0dc3;
  /* 127b0db9 mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
L_127b0dc3:;
  /* 127b0dc3 pop ebp */
  EBP = (pop32());
  /* 127b0dc4 ret  */
  ESPCHK(0x127b0d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010dd0 @ 0x127b0dd0 (172 bytes, 54 insns) */
void f_127b0dd0(void) {
  FTRACE(0x127b0dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0dd1 mov ebp, esp */
  EBP = (ESP);
  /* 127b0dd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0dd9 push eax */
  push32((uint32_t)(EAX));
  /* 127b0dda call 0x127b1210 */
  push32(0x127b0ddfu); f_127b1210();
  /* 127b0ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0de2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 127b0de5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127b0de7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127b0dea push ecx */
  push32((uint32_t)(ECX));
  /* 127b0deb mov edx, dword ptr [0x127d0788] */
  EDX = (r32((uint32_t)(0x127d0788)));
  /* 127b0df1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b0df3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0df5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 127b0dfb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0e01 push edx */
  push32((uint32_t)(EDX));
  /* 127b0e02 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0e05 push eax */
  push32((uint32_t)(EAX));
  /* 127b0e06 call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0e0cu);
  /* 127b0e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0e0e jne 0x127b0e21 */
  if (!C.zf) goto L_127b0e21;
  /* 127b0e10 mov dword ptr [0x127d079c], 0 */
  w32((uint32_t)(0x127d079c), (0x0u));
  /* 127b0e1a mov eax, 1 */
  EAX = (0x1u);
  /* 127b0e1f jmp 0x127b0e76 */
  goto L_127b0e76;
L_127b0e21:;
  /* 127b0e21 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 127b0e24 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0e25 mov edx, dword ptr [0x127d0798] */
  EDX = (r32((uint32_t)(0x127d0798)));
  /* 127b0e2b push edx */
  push32((uint32_t)(EDX));
  /* 127b0e2c call 0x127b2e50 */
  push32(0x127b0e31u); f_127b2e50();
  /* 127b0e31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0e36 jne 0x127b0e69 */
  if (!C.zf) goto L_127b0e69;
  /* 127b0e38 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0e3b push eax */
  push32((uint32_t)(EAX));
  /* 127b0e3c call 0x127b0f50 */
  push32(0x127b0e41u); f_127b0f50();
  /* 127b0e41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0e44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0e46 je 0x127b0e69 */
  if (C.zf) goto L_127b0e69;
  /* 127b0e48 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 127b0e4b mov dword ptr [0x127d07a0], ecx */
  w32((uint32_t)(0x127d07a0), (ECX));
  /* 127b0e51 mov edx, dword ptr [0x127d07a0] */
  EDX = (r32((uint32_t)(0x127d07a0)));
  /* 127b0e57 mov dword ptr [0x127d0784], edx */
  w32((uint32_t)(0x127d0784), (EDX));
  /* 127b0e5d mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0e62 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 127b0e64 mov dword ptr [0x127d079c], eax */
  w32((uint32_t)(0x127d079c), (EAX));
L_127b0e69:;
  /* 127b0e69 mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0e6e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127b0e71 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127b0e73 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0e75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_127b0e76:;
  /* 127b0e76 mov esp, ebp */
  ESP = (EBP);
  /* 127b0e78 pop ebp */
  EBP = (pop32());
  /* 127b0e79 ret 4 */
  ESPCHK(0x127b0dd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010e80 @ 0x127b0e80 (43 bytes, 11 insns) */
void f_127b0e80(void) {
  FTRACE(0x127b0e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0e80 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0e81 mov ebp, esp */
  EBP = (ESP);
  /* 127b0e83 mov eax, dword ptr [0x127d079c] */
  EAX = (r32((uint32_t)(0x127d079c)));
  /* 127b0e88 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 127b0e8d mov dword ptr [0x127d079c], eax */
  w32((uint32_t)(0x127d079c), (EAX));
  /* 127b0e92 call dword ptr [0x127d3260] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3260))), 0x127b0e98u);
  /* 127b0e98 mov dword ptr [0x127d07a0], eax */
  w32((uint32_t)(0x127d07a0), (EAX));
  /* 127b0e9d mov ecx, dword ptr [0x127d07a0] */
  ECX = (r32((uint32_t)(0x127d07a0)));
  /* 127b0ea3 mov dword ptr [0x127d0784], ecx */
  w32((uint32_t)(0x127d0784), (ECX));
  /* 127b0ea9 pop ebp */
  EBP = (pop32());
  /* 127b0eaa ret  */
  ESPCHK(0x127b0e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x127b0eb0 (155 bytes, 57 insns) */
void f_127b0eb0(void) {
  FTRACE(0x127b0eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0eb1 mov ebp, esp */
  EBP = (ESP);
  /* 127b0eb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0eb6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0eba je 0x127b0edb */
  if (C.zf) goto L_127b0edb;
  /* 127b0ebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0ebf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127b0ec2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b0ec4 je 0x127b0edb */
  if (C.zf) goto L_127b0edb;
  /* 127b0ec6 push 0x127cc764 */
  push32((uint32_t)(0x127cc764u));
  /* 127b0ecb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0ece push edx */
  push32((uint32_t)(EDX));
  /* 127b0ecf call 0x127b0410 */
  push32(0x127b0ed4u); f_127b0410();
  /* 127b0ed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0ed9 jne 0x127b0f03 */
  if (!C.zf) goto L_127b0f03;
L_127b0edb:;
  /* 127b0edb push 8 */
  push32((uint32_t)(0x8u));
  /* 127b0edd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127b0ee0 push eax */
  push32((uint32_t)(EAX));
  /* 127b0ee1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 127b0ee6 mov ecx, dword ptr [0x127d07a0] */
  ECX = (r32((uint32_t)(0x127d07a0)));
  /* 127b0eec push ecx */
  push32((uint32_t)(ECX));
  /* 127b0eed call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0ef3u);
  /* 127b0ef3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0ef5 jne 0x127b0efb */
  if (!C.zf) goto L_127b0efb;
  /* 127b0ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0ef9 jmp 0x127b0f47 */
  goto L_127b0f47;
L_127b0efb:;
  /* 127b0efb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 127b0efe mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 127b0f01 jmp 0x127b0f3b */
  goto L_127b0f3b;
L_127b0f03:;
  /* 127b0f03 push 0x127cc760 */
  push32((uint32_t)(0x127cc760u));
  /* 127b0f08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0f0b push eax */
  push32((uint32_t)(EAX));
  /* 127b0f0c call 0x127b0410 */
  push32(0x127b0f11u); f_127b0410();
  /* 127b0f11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0f16 jne 0x127b0f3b */
  if (!C.zf) goto L_127b0f3b;
  /* 127b0f18 push 8 */
  push32((uint32_t)(0x8u));
  /* 127b0f1a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 127b0f1d push ecx */
  push32((uint32_t)(ECX));
  /* 127b0f1e push 0xb */
  push32((uint32_t)(0xbu));
  /* 127b0f20 mov edx, dword ptr [0x127d07a0] */
  EDX = (r32((uint32_t)(0x127d07a0)));
  /* 127b0f26 push edx */
  push32((uint32_t)(EDX));
  /* 127b0f27 call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0f2du);
  /* 127b0f2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0f2f jne 0x127b0f35 */
  if (!C.zf) goto L_127b0f35;
  /* 127b0f31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0f33 jmp 0x127b0f47 */
  goto L_127b0f47;
L_127b0f35:;
  /* 127b0f35 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 127b0f38 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127b0f3b:;
  /* 127b0f3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0f3e push ecx */
  push32((uint32_t)(ECX));
  /* 127b0f3f call 0x127b3030 */
  push32(0x127b0f44u); f_127b3030();
  /* 127b0f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127b0f47:;
  /* 127b0f47 mov esp, ebp */
  ESP = (EBP);
  /* 127b0f49 pop ebp */
  EBP = (pop32());
  /* 127b0f4a ret  */
  ESPCHK(0x127b0eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f50 @ 0x127b0f50 (79 bytes, 26 insns) */
void f_127b0f50(void) {
  FTRACE(0x127b0f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0f50 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0f51 mov ebp, esp */
  EBP = (ESP);
  /* 127b0f53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0f56 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 127b0f5a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 127b0f5e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127b0f65 jmp 0x127b0f70 */
  goto L_127b0f70;
L_127b0f67:;
  /* 127b0f67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b0f6a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0f6d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127b0f70:;
  /* 127b0f70 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0f74 jae 0x127b0f96 */
  if (!C.cf) goto L_127b0f96;
  /* 127b0f76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b0f79 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127b0f7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b0f82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127b0f84 mov cx, word ptr [eax*2 + 0x127cf9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x127cf9c4)));
  /* 127b0f8c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0f8e jne 0x127b0f94 */
  if (!C.zf) goto L_127b0f94;
  /* 127b0f90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0f92 jmp 0x127b0f9b */
  goto L_127b0f9b;
L_127b0f94:;
  /* 127b0f94 jmp 0x127b0f67 */
  goto L_127b0f67;
L_127b0f96:;
  /* 127b0f96 mov eax, 1 */
  EAX = (0x1u);
L_127b0f9b:;
  /* 127b0f9b mov esp, ebp */
  ESP = (EBP);
  /* 127b0f9d pop ebp */
  EBP = (pop32());
  /* 127b0f9e ret  */
  ESPCHK(0x127b0f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fa0 @ 0x127b0fa0 (135 bytes, 48 insns) */
void f_127b0fa0(void) {
  FTRACE(0x127b0fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b0fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b0fa1 mov ebp, esp */
  EBP = (ESP);
  /* 127b0fa3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b0fa6 push esi */
  push32((uint32_t)(ESI));
  /* 127b0fa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b0faa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b0faf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b0fb4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b0fb9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 127b0fbc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b0fc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b0fc4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 127b0fc6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 127b0fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 127b0fca push 1 */
  push32((uint32_t)(0x1u));
  /* 127b0fcc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b0fcf push edx */
  push32((uint32_t)(EDX));
  /* 127b0fd0 call dword ptr [0x127d07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d07a4))), 0x127b0fd6u);
  /* 127b0fd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b0fd8 jne 0x127b0fde */
  if (!C.zf) goto L_127b0fde;
  /* 127b0fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b0fdc jmp 0x127b1022 */
  goto L_127b1022;
L_127b0fde:;
  /* 127b0fde lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 127b0fe1 push eax */
  push32((uint32_t)(EAX));
  /* 127b0fe2 call 0x127b1210 */
  push32(0x127b0fe7u); f_127b1210();
  /* 127b0fe7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b0fea cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0fed je 0x127b101d */
  if (C.zf) goto L_127b101d;
  /* 127b0fef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b0ff3 je 0x127b101d */
  if (C.zf) goto L_127b101d;
  /* 127b0ff5 mov ecx, dword ptr [0x127d0794] */
  ECX = (r32((uint32_t)(0x127d0794)));
  /* 127b0ffb push ecx */
  push32((uint32_t)(ECX));
  /* 127b0ffc call 0x127b1290 */
  push32(0x127b1001u); f_127b1290();
  /* 127b1001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1004 mov esi, eax */
  ESI = (EAX);
  /* 127b1006 mov edx, dword ptr [0x127d0794] */
  EDX = (r32((uint32_t)(0x127d0794)));
  /* 127b100c push edx */
  push32((uint32_t)(EDX));
  /* 127b100d call 0x127a75b0 */
  push32(0x127b1012u); f_127a75b0();
  /* 127b1012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1015 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1017 jne 0x127b101d */
  if (!C.zf) goto L_127b101d;
  /* 127b1019 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b101b jmp 0x127b1022 */
  goto L_127b1022;
L_127b101d:;
  /* 127b101d mov eax, 1 */
  EAX = (0x1u);
L_127b1022:;
  /* 127b1022 pop esi */
  ESI = (pop32());
  /* 127b1023 mov esp, ebp */
  ESP = (EBP);
  /* 127b1025 pop ebp */
  EBP = (pop32());
  /* 127b1026 ret  */
  ESPCHK(0x127b0fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x127b1030 (77 bytes, 18 insns) */
void f_127b1030(void) {
  FTRACE(0x127b1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1030 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1031 mov ebp, esp */
  EBP = (ESP);
  /* 127b1033 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1039 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 127b1043 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 127b1049 push eax */
  push32((uint32_t)(EAX));
  /* 127b104a call dword ptr [0x127d325c] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d325c))), 0x127b1050u);
  /* 127b1050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b1052 je 0x127b1069 */
  if (C.zf) goto L_127b1069;
  /* 127b1054 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b105b jne 0x127b1069 */
  if (!C.zf) goto L_127b1069;
  /* 127b105d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 127b1067 jmp 0x127b1073 */
  goto L_127b1073;
L_127b1069:;
  /* 127b1069 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_127b1073:;
  /* 127b1073 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 127b1079 mov esp, ebp */
  ESP = (EBP);
  /* 127b107b pop ebp */
  EBP = (pop32());
  /* 127b107c ret  */
  ESPCHK(0x127b1030u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x127b1080 (388 bytes, 118 insns) */
void f_127b1080(void) {
  FTRACE(0x127b1080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1080 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1081 mov ebp, esp */
  EBP = (ESP);
  /* 127b1083 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1086 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b108d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 127b1094 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_127b109b:;
  /* 127b109b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b109e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b10a1 jg 0x127b11e8 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b11e8;
  /* 127b10a7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b10aa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b10ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 127b10ae sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b10b0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 127b10b2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b10b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b10b8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b10bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b10be cmp edx, dword ptr [ecx + 0x127cf520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x127cf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b10c4 jne 0x127b11be */
  if (!C.zf) goto L_127b11be;
  /* 127b10ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b10cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b10d0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b10d4 ja 0x127b10f7 */
  if ((!C.cf&&!C.zf)) goto L_127b10f7;
  /* 127b10d6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b10da je 0x127b1169 */
  if (C.zf) goto L_127b1169;
  /* 127b10e0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b10e4 je 0x127b1114 */
  if (C.zf) goto L_127b1114;
  /* 127b10e6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b10ea je 0x127b1136 */
  if (C.zf) goto L_127b1136;
  /* 127b10ec cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b10f0 je 0x127b1158 */
  if (C.zf) goto L_127b1158;
  /* 127b10f2 jmp 0x127b1188 */
  goto L_127b1188;
L_127b10f7:;
  /* 127b10f7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b10fe je 0x127b1125 */
  if (C.zf) goto L_127b1125;
  /* 127b1100 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1107 je 0x127b1147 */
  if (C.zf) goto L_127b1147;
  /* 127b1109 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1110 je 0x127b117a */
  if (C.zf) goto L_127b117a;
  /* 127b1112 jmp 0x127b1188 */
  goto L_127b1188;
L_127b1114:;
  /* 127b1114 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1117 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b111a add ecx, 0x127cf524 */
  { uint32_t _a=(ECX),_b=(0x127cf524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1120 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b1123 jmp 0x127b1188 */
  goto L_127b1188;
L_127b1125:;
  /* 127b1125 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1128 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b112b mov eax, dword ptr [edx + 0x127cf52c] */
  EAX = (r32((uint32_t)(EDX + 0x127cf52c)));
  /* 127b1131 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b1134 jmp 0x127b1188 */
  goto L_127b1188;
L_127b1136:;
  /* 127b1136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1139 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b113c add ecx, 0x127cf530 */
  { uint32_t _a=(ECX),_b=(0x127cf530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1142 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b1145 jmp 0x127b1188 */
  goto L_127b1188;
L_127b1147:;
  /* 127b1147 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b114a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b114d mov eax, dword ptr [edx + 0x127cf534] */
  EAX = (r32((uint32_t)(EDX + 0x127cf534)));
  /* 127b1153 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b1156 jmp 0x127b1188 */
  goto L_127b1188;
L_127b1158:;
  /* 127b1158 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b115b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b115e add ecx, 0x127cf538 */
  { uint32_t _a=(ECX),_b=(0x127cf538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1164 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b1167 jmp 0x127b1188 */
  goto L_127b1188;
L_127b1169:;
  /* 127b1169 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b116c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b116f add edx, 0x127cf53c */
  { uint32_t _a=(EDX),_b=(0x127cf53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1175 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b1178 jmp 0x127b1188 */
  goto L_127b1188;
L_127b117a:;
  /* 127b117a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b117d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b1180 add eax, 0x127cf544 */
  { uint32_t _a=(EAX),_b=(0x127cf544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1185 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_127b1188:;
  /* 127b1188 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b118c je 0x127b1194 */
  if (C.zf) goto L_127b1194;
  /* 127b118e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1192 jge 0x127b1196 */
  if ((C.sf==C.of)) goto L_127b1196;
L_127b1194:;
  /* 127b1194 jmp 0x127b11e8 */
  goto L_127b11e8;
L_127b1196:;
  /* 127b1196 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1199 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b119c push ecx */
  push32((uint32_t)(ECX));
  /* 127b119d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b11a0 push edx */
  push32((uint32_t)(EDX));
  /* 127b11a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b11a4 push eax */
  push32((uint32_t)(EAX));
  /* 127b11a5 call 0x127a7fa0 */
  push32(0x127b11aau); f_127a7fa0();
  /* 127b11aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b11ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b11b0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b11b3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 127b11b7 mov eax, 1 */
  EAX = (0x1u);
  /* 127b11bc jmp 0x127b11fe */
  goto L_127b11fe;
L_127b11be:;
  /* 127b11be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b11c1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b11c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b11c7 cmp eax, dword ptr [edx + 0x127cf520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x127cf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b11cd jae 0x127b11da */
  if (!C.cf) goto L_127b11da;
  /* 127b11cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b11d2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b11d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127b11d8 jmp 0x127b11e3 */
  goto L_127b11e3;
L_127b11da:;
  /* 127b11da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b11dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b11e0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127b11e3:;
  /* 127b11e3 jmp 0x127b109b */
  goto L_127b109b;
L_127b11e8:;
  /* 127b11e8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b11eb push eax */
  push32((uint32_t)(EAX));
  /* 127b11ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b11ef push ecx */
  push32((uint32_t)(ECX));
  /* 127b11f0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b11f3 push edx */
  push32((uint32_t)(EDX));
  /* 127b11f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b11f7 push eax */
  push32((uint32_t)(EAX));
  /* 127b11f8 call dword ptr [0x127d3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3268))), 0x127b11feu);
L_127b11fe:;
  /* 127b11fe mov esp, ebp */
  ESP = (EBP);
  /* 127b1200 pop ebp */
  EBP = (pop32());
  /* 127b1201 ret 0x10 */
  ESPCHK(0x127b1080u, _esp0);
  ESP += 20; return;
}

/* FUN_10011210 @ 0x127b1210 (118 bytes, 42 insns) */
void f_127b1210(void) {
  FTRACE(0x127b1210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1210 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1211 mov ebp, esp */
  EBP = (ESP);
  /* 127b1213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1216 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127b121d:;
  /* 127b121d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1220 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b1222 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 127b1225 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127b1229 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b122c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b122f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127b1232 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b1234 je 0x127b127f */
  if (C.zf) goto L_127b127f;
  /* 127b1236 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127b123a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b123d jl 0x127b1252 */
  if ((C.sf!=C.of)) goto L_127b1252;
  /* 127b123f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127b1243 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1246 jg 0x127b1252 */
  if ((!C.zf&&C.sf==C.of)) goto L_127b1252;
  /* 127b1248 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 127b124b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127b124d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 127b1250 jmp 0x127b126c */
  goto L_127b126c;
L_127b1252:;
  /* 127b1252 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127b1256 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1259 jl 0x127b126c */
  if ((C.sf!=C.of)) goto L_127b126c;
  /* 127b125b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127b125f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1262 jg 0x127b126c */
  if ((!C.zf&&C.sf==C.of)) goto L_127b126c;
  /* 127b1264 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 127b1267 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 127b1269 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_127b126c:;
  /* 127b126c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b126f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 127b1272 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 127b1276 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 127b127a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b127d jmp 0x127b121d */
  goto L_127b121d;
L_127b127f:;
  /* 127b127f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1282 mov esp, ebp */
  ESP = (EBP);
  /* 127b1284 pop ebp */
  EBP = (pop32());
  /* 127b1285 ret  */
  ESPCHK(0x127b1210u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x127b1290 (101 bytes, 36 insns) */
void f_127b1290(void) {
  FTRACE(0x127b1290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1290 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1291 mov ebp, esp */
  EBP = (ESP);
  /* 127b1293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1296 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127b129d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b12a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127b12a2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 127b12a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b12a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b12ab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_127b12ae:;
  /* 127b12ae movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 127b12b2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b12b5 jl 0x127b12c0 */
  if ((C.sf!=C.of)) goto L_127b12c0;
  /* 127b12b7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 127b12bb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b12be jle 0x127b12d2 */
  if ((C.zf||C.sf!=C.of)) goto L_127b12d2;
L_127b12c0:;
  /* 127b12c0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 127b12c4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b12c7 jl 0x127b12ee */
  if ((C.sf!=C.of)) goto L_127b12ee;
  /* 127b12c9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 127b12cd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b12d0 jg 0x127b12ee */
  if ((!C.zf&&C.sf==C.of)) goto L_127b12ee;
L_127b12d2:;
  /* 127b12d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b12d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b12d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b12db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b12de mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127b12e0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 127b12e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b12e6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b12e9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 127b12ec jmp 0x127b12ae */
  goto L_127b12ae;
L_127b12ee:;
  /* 127b12ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b12f1 mov esp, ebp */
  ESP = (EBP);
  /* 127b12f3 pop ebp */
  EBP = (pop32());
  /* 127b12f4 ret  */
  ESPCHK(0x127b1290u, _esp0);
  ESP += 4; return;
}

/* FUN_10011300 @ 0x127b1300 (122 bytes, 39 insns) */
void f_127b1300(void) {
  FTRACE(0x127b1300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1300 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1301 mov ebp, esp */
  EBP = (ESP);
  /* 127b1303 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1304 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1307 cmp eax, dword ptr [0x127d203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x127d203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b130d jae 0x127b1331 */
  if (!C.cf) goto L_127b1331;
  /* 127b130f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1312 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 127b1315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1318 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 127b131b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b131e mov eax, dword ptr [ecx*4 + 0x127d1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x127d1f00)));
  /* 127b1325 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 127b132a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 127b132d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b132f jne 0x127b134c */
  if (!C.zf) goto L_127b134c;
L_127b1331:;
  /* 127b1331 call 0x127ac650 */
  push32(0x127b1336u); f_127ac650();
  /* 127b1336 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 127b133c call 0x127ac660 */
  push32(0x127b1341u); f_127ac660();
  /* 127b1341 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127b1347 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b134a jmp 0x127b1376 */
  goto L_127b1376;
L_127b134c:;
  /* 127b134c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b134f push edx */
  push32((uint32_t)(EDX));
  /* 127b1350 call 0x127ade70 */
  push32(0x127b1355u); f_127ade70();
  /* 127b1355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b135b push eax */
  push32((uint32_t)(EAX));
  /* 127b135c call 0x127b1380 */
  push32(0x127b1361u); f_127b1380();
  /* 127b1361 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1364 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b1367 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b136a push ecx */
  push32((uint32_t)(ECX));
  /* 127b136b call 0x127adf00 */
  push32(0x127b1370u); f_127adf00();
  /* 127b1370 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1373 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127b1376:;
  /* 127b1376 mov esp, ebp */
  ESP = (EBP);
  /* 127b1378 pop ebp */
  EBP = (pop32());
  /* 127b1379 ret  */
  ESPCHK(0x127b1300u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x127b1380 (170 bytes, 59 insns) */
void f_127b1380(void) {
  FTRACE(0x127b1380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1380 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1381 mov ebp, esp */
  EBP = (ESP);
  /* 127b1383 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1384 push esi */
  push32((uint32_t)(ESI));
  /* 127b1385 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1388 push eax */
  push32((uint32_t)(EAX));
  /* 127b1389 call 0x127adcf0 */
  push32(0x127b138eu); f_127adcf0();
  /* 127b138e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1391 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1394 je 0x127b13d3 */
  if (C.zf) goto L_127b13d3;
  /* 127b1396 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b139a je 0x127b13a2 */
  if (C.zf) goto L_127b13a2;
  /* 127b139c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b13a0 jne 0x127b13bc */
  if (!C.zf) goto L_127b13bc;
L_127b13a2:;
  /* 127b13a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127b13a4 call 0x127adcf0 */
  push32(0x127b13a9u); f_127adcf0();
  /* 127b13a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b13ac mov esi, eax */
  ESI = (EAX);
  /* 127b13ae push 2 */
  push32((uint32_t)(0x2u));
  /* 127b13b0 call 0x127adcf0 */
  push32(0x127b13b5u); f_127adcf0();
  /* 127b13b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b13b8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b13ba je 0x127b13d3 */
  if (C.zf) goto L_127b13d3;
L_127b13bc:;
  /* 127b13bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b13bf push ecx */
  push32((uint32_t)(ECX));
  /* 127b13c0 call 0x127adcf0 */
  push32(0x127b13c5u); f_127adcf0();
  /* 127b13c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b13c8 push eax */
  push32((uint32_t)(EAX));
  /* 127b13c9 call dword ptr [0x127d3258] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d3258))), 0x127b13cfu);
  /* 127b13cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b13d1 je 0x127b13dc */
  if (C.zf) goto L_127b13dc;
L_127b13d3:;
  /* 127b13d3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127b13da jmp 0x127b13e5 */
  goto L_127b13e5;
L_127b13dc:;
  /* 127b13dc call dword ptr [0x127d32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127d32dc))), 0x127b13e2u);
  /* 127b13e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127b13e5:;
  /* 127b13e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b13e8 push edx */
  push32((uint32_t)(EDX));
  /* 127b13e9 call 0x127adc10 */
  push32(0x127b13eeu); f_127adc10();
  /* 127b13ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b13f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b13f4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 127b13f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b13fa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 127b13fd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127b1400 mov edx, dword ptr [eax*4 + 0x127d1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x127d1f00)));
  /* 127b1407 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 127b140c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1410 je 0x127b1423 */
  if (C.zf) goto L_127b1423;
  /* 127b1412 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1415 push eax */
  push32((uint32_t)(EAX));
  /* 127b1416 call 0x127ac5b0 */
  push32(0x127b141bu); f_127ac5b0();
  /* 127b141b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b141e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127b1421 jmp 0x127b1425 */
  goto L_127b1425;
L_127b1423:;
  /* 127b1423 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127b1425:;
  /* 127b1425 pop esi */
  ESI = (pop32());
  /* 127b1426 mov esp, ebp */
  ESP = (EBP);
  /* 127b1428 pop ebp */
  EBP = (pop32());
  /* 127b1429 ret  */
  ESPCHK(0x127b1380u, _esp0);
  ESP += 4; return;
}

/* FUN_10011430 @ 0x127b1430 (146 bytes, 52 insns) */
void f_127b1430(void) {
  FTRACE(0x127b1430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1430 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1431 mov ebp, esp */
  EBP = (ESP);
  /* 127b1433 push ebx */
  push32((uint32_t)(EBX));
  /* 127b1434 push esi */
  push32((uint32_t)(ESI));
  /* 127b1435 push edi */
  push32((uint32_t)(EDI));
L_127b1436:;
  /* 127b1436 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b143a jne 0x127b145a */
  if (!C.zf) goto L_127b145a;
  /* 127b143c push 0x127cc0a0 */
  push32((uint32_t)(0x127cc0a0u));
  /* 127b1441 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b1443 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 127b1445 push 0x127cc768 */
  push32((uint32_t)(0x127cc768u));
  /* 127b144a push 2 */
  push32((uint32_t)(0x2u));
  /* 127b144c call 0x127a3840 */
  push32(0x127b1451u); f_127a3840();
  /* 127b1451 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1457 jne 0x127b145a */
  if (!C.zf) goto L_127b145a;
  /* 127b1459 int3  */
  x86_unimpl("int3 @ 0x127b1459");
L_127b145a:;
  /* 127b145a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127b145c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127b145e jne 0x127b1436 */
  if (!C.zf) goto L_127b1436;
  /* 127b1460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1463 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127b1466 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 127b146c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127b146e je 0x127b14bd */
  if (C.zf) goto L_127b14bd;
  /* 127b1470 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1473 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 127b1476 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 127b1479 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127b147b je 0x127b14bd */
  if (C.zf) goto L_127b14bd;
  /* 127b147d push 2 */
  push32((uint32_t)(0x2u));
  /* 127b147f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1482 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 127b1485 push eax */
  push32((uint32_t)(EAX));
  /* 127b1486 call 0x127a5210 */
  push32(0x127b148bu); f_127a5210();
  /* 127b148b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b148e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1491 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 127b1494 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 127b149a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b149d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 127b14a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b14a3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 127b14a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b14ac mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 127b14b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b14b6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_127b14bd:;
  /* 127b14bd pop edi */
  EDI = (pop32());
  /* 127b14be pop esi */
  ESI = (pop32());
  /* 127b14bf pop ebx */
  EBX = (pop32());
  /* 127b14c0 pop ebp */
  EBP = (pop32());
  /* 127b14c1 ret  */
  ESPCHK(0x127b1430u, _esp0);
  ESP += 4; return;
}

/* FUN_100114d0 @ 0x127b14d0 (289 bytes, 97 insns) */
void f_127b14d0(void) {
  FTRACE(0x127b14d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b14d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b14d1 mov ebp, esp */
  EBP = (ESP);
  /* 127b14d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b14d6 push esi */
  push32((uint32_t)(ESI));
  /* 127b14d7 mov eax, dword ptr [0x127cfc98] */
  EAX = (r32((uint32_t)(0x127cfc98)));
  /* 127b14dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b14df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127b14e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b14ed jmp 0x127b14f8 */
  goto L_127b14f8;
L_127b14ef:;
  /* 127b14ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b14f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b14f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127b14f8:;
  /* 127b14f8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b14fc jae 0x127b1531 */
  if (!C.cf) goto L_127b1531;
  /* 127b14fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1504 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127b1507 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1508 call 0x127a75b0 */
  push32(0x127b150du); f_127a75b0();
  /* 127b150d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1510 mov esi, eax */
  ESI = (EAX);
  /* 127b1512 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1515 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1518 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 127b151c push ecx */
  push32((uint32_t)(ECX));
  /* 127b151d call 0x127a75b0 */
  push32(0x127b1522u); f_127a75b0();
  /* 127b1522 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1525 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1528 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127b152c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b152f jmp 0x127b14ef */
  goto L_127b14ef;
L_127b1531:;
  /* 127b1531 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b1534 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1537 push eax */
  push32((uint32_t)(EAX));
  /* 127b1538 call 0x127a4760 */
  push32(0x127b153du); f_127a4760();
  /* 127b153d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1540 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b1543 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1547 je 0x127b15e9 */
  if (C.zf) goto L_127b15e9;
  /* 127b154d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1550 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127b1553 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b155a jmp 0x127b1565 */
  goto L_127b1565;
L_127b155c:;
  /* 127b155c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b155f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1562 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127b1565:;
  /* 127b1565 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1569 jae 0x127b15da */
  if (!C.cf) goto L_127b15da;
  /* 127b156b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b156e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 127b1571 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1574 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1577 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127b157a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b157d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1580 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127b1583 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1584 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1587 push edx */
  push32((uint32_t)(EDX));
  /* 127b1588 call 0x127a7730 */
  push32(0x127b158du); f_127a7730();
  /* 127b158d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1590 push eax */
  push32((uint32_t)(EAX));
  /* 127b1591 call 0x127a75b0 */
  push32(0x127b1596u); f_127a75b0();
  /* 127b1596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1599 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b159c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b159e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127b15a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b15a4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 127b15a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b15aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b15ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b15b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b15b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b15b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 127b15ba push eax */
  push32((uint32_t)(EAX));
  /* 127b15bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b15be push ecx */
  push32((uint32_t)(ECX));
  /* 127b15bf call 0x127a7730 */
  push32(0x127b15c4u); f_127a7730();
  /* 127b15c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b15c7 push eax */
  push32((uint32_t)(EAX));
  /* 127b15c8 call 0x127a75b0 */
  push32(0x127b15cdu); f_127a75b0();
  /* 127b15cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b15d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b15d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b15d5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127b15d8 jmp 0x127b155c */
  goto L_127b155c;
L_127b15da:;
  /* 127b15da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b15dd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127b15e0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b15e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b15e6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_127b15e9:;
  /* 127b15e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b15ec pop esi */
  ESI = (pop32());
  /* 127b15ed mov esp, ebp */
  ESP = (EBP);
  /* 127b15ef pop ebp */
  EBP = (pop32());
  /* 127b15f0 ret  */
  ESPCHK(0x127b14d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011600 @ 0x127b1600 (291 bytes, 97 insns) */
void f_127b1600(void) {
  FTRACE(0x127b1600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1600 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1601 mov ebp, esp */
  EBP = (ESP);
  /* 127b1603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1606 push esi */
  push32((uint32_t)(ESI));
  /* 127b1607 mov eax, dword ptr [0x127cfc98] */
  EAX = (r32((uint32_t)(0x127cfc98)));
  /* 127b160c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b160f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127b1616 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b161d jmp 0x127b1628 */
  goto L_127b1628;
L_127b161f:;
  /* 127b161f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1622 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1625 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127b1628:;
  /* 127b1628 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b162c jae 0x127b1662 */
  if (!C.cf) goto L_127b1662;
  /* 127b162e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1631 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1634 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 127b1638 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1639 call 0x127a75b0 */
  push32(0x127b163eu); f_127a75b0();
  /* 127b163e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1641 mov esi, eax */
  ESI = (EAX);
  /* 127b1643 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1646 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1649 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 127b164d push ecx */
  push32((uint32_t)(ECX));
  /* 127b164e call 0x127a75b0 */
  push32(0x127b1653u); f_127a75b0();
  /* 127b1653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1656 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1659 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127b165d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b1660 jmp 0x127b161f */
  goto L_127b161f;
L_127b1662:;
  /* 127b1662 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b1665 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1668 push eax */
  push32((uint32_t)(EAX));
  /* 127b1669 call 0x127a4760 */
  push32(0x127b166eu); f_127a4760();
  /* 127b166e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1671 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b1674 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1678 je 0x127b171b */
  if (C.zf) goto L_127b171b;
  /* 127b167e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1681 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127b1684 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b168b jmp 0x127b1696 */
  goto L_127b1696;
L_127b168d:;
  /* 127b168d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1690 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1693 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127b1696:;
  /* 127b1696 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b169a jae 0x127b170c */
  if (!C.cf) goto L_127b170c;
  /* 127b169c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b169f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 127b16a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b16a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b16a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127b16ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b16ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b16b1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 127b16b5 push ecx */
  push32((uint32_t)(ECX));
  /* 127b16b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b16b9 push edx */
  push32((uint32_t)(EDX));
  /* 127b16ba call 0x127a7730 */
  push32(0x127b16bfu); f_127a7730();
  /* 127b16bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b16c2 push eax */
  push32((uint32_t)(EAX));
  /* 127b16c3 call 0x127a75b0 */
  push32(0x127b16c8u); f_127a75b0();
  /* 127b16c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b16cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b16ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b16d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127b16d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b16d6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 127b16d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b16dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b16df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b16e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b16e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b16e8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127b16ec push eax */
  push32((uint32_t)(EAX));
  /* 127b16ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b16f0 push ecx */
  push32((uint32_t)(ECX));
  /* 127b16f1 call 0x127a7730 */
  push32(0x127b16f6u); f_127a7730();
  /* 127b16f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b16f9 push eax */
  push32((uint32_t)(EAX));
  /* 127b16fa call 0x127a75b0 */
  push32(0x127b16ffu); f_127a75b0();
  /* 127b16ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1702 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1705 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1707 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127b170a jmp 0x127b168d */
  goto L_127b168d;
L_127b170c:;
  /* 127b170c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b170f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 127b1712 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1715 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1718 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_127b171b:;
  /* 127b171b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b171e pop esi */
  ESI = (pop32());
  /* 127b171f mov esp, ebp */
  ESP = (EBP);
  /* 127b1721 pop ebp */
  EBP = (pop32());
  /* 127b1722 ret  */
  ESPCHK(0x127b1600u, _esp0);
  ESP += 4; return;
}

/* FUN_10011730 @ 0x127b1730 (878 bytes, 273 insns) */
void f_127b1730(void) {
  FTRACE(0x127b1730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1730 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1731 mov ebp, esp */
  EBP = (ESP);
  /* 127b1733 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127b1736 push esi */
  push32((uint32_t)(ESI));
  /* 127b1737 mov eax, dword ptr [0x127cfc98] */
  EAX = (r32((uint32_t)(0x127cfc98)));
  /* 127b173c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127b173f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 127b1746 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b174d jmp 0x127b1758 */
  goto L_127b1758;
L_127b174f:;
  /* 127b174f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1755 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_127b1758:;
  /* 127b1758 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b175c jae 0x127b1791 */
  if (!C.cf) goto L_127b1791;
  /* 127b175e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1761 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1764 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 127b1767 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1768 call 0x127a75b0 */
  push32(0x127b176du); f_127a75b0();
  /* 127b176d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1770 mov esi, eax */
  ESI = (EAX);
  /* 127b1772 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1775 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1778 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 127b177c push ecx */
  push32((uint32_t)(ECX));
  /* 127b177d call 0x127a75b0 */
  push32(0x127b1782u); f_127a75b0();
  /* 127b1782 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1785 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1788 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127b178c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b178f jmp 0x127b174f */
  goto L_127b174f;
L_127b1791:;
  /* 127b1791 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b1798 jmp 0x127b17a3 */
  goto L_127b17a3;
L_127b179a:;
  /* 127b179a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b179d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b17a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127b17a3:;
  /* 127b17a3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b17a7 jae 0x127b17dd */
  if (!C.cf) goto L_127b17dd;
  /* 127b17a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b17ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b17af mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 127b17b3 push eax */
  push32((uint32_t)(EAX));
  /* 127b17b4 call 0x127a75b0 */
  push32(0x127b17b9u); f_127a75b0();
  /* 127b17b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b17bc mov esi, eax */
  ESI = (EAX);
  /* 127b17be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b17c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b17c4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127b17c8 push eax */
  push32((uint32_t)(EAX));
  /* 127b17c9 call 0x127a75b0 */
  push32(0x127b17ceu); f_127a75b0();
  /* 127b17ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b17d1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b17d4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127b17d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127b17db jmp 0x127b179a */
  goto L_127b179a;
L_127b17dd:;
  /* 127b17dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b17e0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 127b17e6 push eax */
  push32((uint32_t)(EAX));
  /* 127b17e7 call 0x127a75b0 */
  push32(0x127b17ecu); f_127a75b0();
  /* 127b17ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b17ef mov esi, eax */
  ESI = (EAX);
  /* 127b17f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b17f4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 127b17fa push edx */
  push32((uint32_t)(EDX));
  /* 127b17fb call 0x127a75b0 */
  push32(0x127b1800u); f_127a75b0();
  /* 127b1800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1803 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1806 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 127b180a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b180d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1810 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 127b1816 push edx */
  push32((uint32_t)(EDX));
  /* 127b1817 call 0x127a75b0 */
  push32(0x127b181cu); f_127a75b0();
  /* 127b181c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b181f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b1822 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127b1826 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b1829 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b182c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 127b1832 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1833 call 0x127a75b0 */
  push32(0x127b1838u); f_127a75b0();
  /* 127b1838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b183b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b183e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127b1842 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127b1845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1848 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 127b184e push edx */
  push32((uint32_t)(EDX));
  /* 127b184f call 0x127a75b0 */
  push32(0x127b1854u); f_127a75b0();
  /* 127b1854 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1857 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b185a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127b185e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 127b1861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127b1864 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1869 push eax */
  push32((uint32_t)(EAX));
  /* 127b186a call 0x127a4760 */
  push32(0x127b186fu); f_127a4760();
  /* 127b186f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127b1875 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1879 je 0x127b1a96 */
  if (C.zf) goto L_127b1a96;
  /* 127b187f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1882 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 127b1885 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1888 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b188e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127b1891 push 0xac */
  push32((uint32_t)(0xacu));
  /* 127b1896 mov eax, dword ptr [0x127cfc98] */
  EAX = (r32((uint32_t)(0x127cfc98)));
  /* 127b189b push eax */
  push32((uint32_t)(EAX));
  /* 127b189c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b189f push ecx */
  push32((uint32_t)(ECX));
  /* 127b18a0 call 0x127ab060 */
  push32(0x127b18a5u); f_127ab060();
  /* 127b18a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b18a8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b18af jmp 0x127b18ba */
  goto L_127b18ba;
L_127b18b1:;
  /* 127b18b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b18b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b18b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_127b18ba:;
  /* 127b18ba cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b18be jae 0x127b192e */
  if (!C.cf) goto L_127b192e;
  /* 127b18c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b18c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b18c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b18c9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 127b18cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b18cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b18d2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 127b18d5 push edx */
  push32((uint32_t)(EDX));
  /* 127b18d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b18d9 push eax */
  push32((uint32_t)(EAX));
  /* 127b18da call 0x127a7730 */
  push32(0x127b18dfu); f_127a7730();
  /* 127b18df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b18e2 push eax */
  push32((uint32_t)(EAX));
  /* 127b18e3 call 0x127a75b0 */
  push32(0x127b18e8u); f_127a75b0();
  /* 127b18e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b18eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b18ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127b18f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127b18f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b18f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b18fb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b18fe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 127b1902 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1905 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1908 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 127b190c push edx */
  push32((uint32_t)(EDX));
  /* 127b190d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1910 push eax */
  push32((uint32_t)(EAX));
  /* 127b1911 call 0x127a7730 */
  push32(0x127b1916u); f_127a7730();
  /* 127b1916 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1919 push eax */
  push32((uint32_t)(EAX));
  /* 127b191a call 0x127a75b0 */
  push32(0x127b191fu); f_127a75b0();
  /* 127b191f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1922 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1925 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127b1929 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127b192c jmp 0x127b18b1 */
  goto L_127b18b1;
L_127b192e:;
  /* 127b192e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 127b1935 jmp 0x127b1940 */
  goto L_127b1940;
L_127b1937:;
  /* 127b1937 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b193a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127b193d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_127b1940:;
  /* 127b1940 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127b1944 jae 0x127b19b6 */
  if (!C.cf) goto L_127b19b6;
  /* 127b1946 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1949 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b194c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b194f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 127b1953 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1956 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1959 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 127b195d push eax */
  push32((uint32_t)(EAX));
  /* 127b195e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1961 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1962 call 0x127a7730 */
  push32(0x127b1967u); f_127a7730();
  /* 127b1967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b196a push eax */
  push32((uint32_t)(EAX));
  /* 127b196b call 0x127a75b0 */
  push32(0x127b1970u); f_127a75b0();
  /* 127b1970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1973 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1976 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127b197a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b197d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b1980 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b1983 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1986 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 127b198a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127b198d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1990 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 127b1994 push eax */
  push32((uint32_t)(EAX));
  /* 127b1995 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1998 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1999 call 0x127a7730 */
  push32(0x127b199eu); f_127a7730();
  /* 127b199e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b19a1 push eax */
  push32((uint32_t)(EAX));
  /* 127b19a2 call 0x127a75b0 */
  push32(0x127b19a7u); f_127a75b0();
  /* 127b19a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b19aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b19ad lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127b19b1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b19b4 jmp 0x127b1937 */
  goto L_127b1937;
L_127b19b6:;
  /* 127b19b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b19b9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b19bc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 127b19c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b19c5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 127b19cb push ecx */
  push32((uint32_t)(ECX));
  /* 127b19cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b19cf push edx */
  push32((uint32_t)(EDX));
  /* 127b19d0 call 0x127a7730 */
  push32(0x127b19d5u); f_127a7730();
  /* 127b19d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b19d8 push eax */
  push32((uint32_t)(EAX));
  /* 127b19d9 call 0x127a75b0 */
  push32(0x127b19deu); f_127a75b0();
  /* 127b19de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b19e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b19e4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127b19e8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127b19eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b19ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b19f1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 127b19f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b19fa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 127b1a00 push eax */
  push32((uint32_t)(EAX));
  /* 127b1a01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a04 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1a05 call 0x127a7730 */
  push32(0x127b1a0au); f_127a7730();
  /* 127b1a0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1a0d push eax */
  push32((uint32_t)(EAX));
  /* 127b1a0e call 0x127a75b0 */
  push32(0x127b1a13u); f_127a75b0();
  /* 127b1a13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1a16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a19 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127b1a1d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b1a20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b1a23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a26 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 127b1a2c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1a2f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 127b1a35 push ecx */
  push32((uint32_t)(ECX));
  /* 127b1a36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a39 push edx */
  push32((uint32_t)(EDX));
  /* 127b1a3a call 0x127a7730 */
  push32(0x127b1a3fu); f_127a7730();
  /* 127b1a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1a42 push eax */
  push32((uint32_t)(EAX));
  /* 127b1a43 call 0x127a75b0 */
  push32(0x127b1a48u); f_127a75b0();
  /* 127b1a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1a4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a4e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 127b1a52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 127b1a55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b1a58 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a5b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 127b1a61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127b1a64 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 127b1a6a push eax */
  push32((uint32_t)(EAX));
  /* 127b1a6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a6e push ecx */
  push32((uint32_t)(ECX));
  /* 127b1a6f call 0x127a7730 */
  push32(0x127b1a74u); f_127a7730();
  /* 127b1a74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1a77 push eax */
  push32((uint32_t)(EAX));
  /* 127b1a78 call 0x127a75b0 */
  push32(0x127b1a7du); f_127a75b0();
  /* 127b1a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1a80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a83 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 127b1a87 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127b1a8a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127b1a8d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127b1a90 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_127b1a96:;
  /* 127b1a96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127b1a99 pop esi */
  ESI = (pop32());
  /* 127b1a9a mov esp, ebp */
  ESP = (EBP);
  /* 127b1a9c pop ebp */
  EBP = (pop32());
  /* 127b1a9d ret  */
  ESPCHK(0x127b1730u, _esp0);
  ESP += 4; return;
}

/* FUN_10011aa0 @ 0x127b1aa0 (31 bytes, 15 insns) */
void f_127b1aa0(void) {
  FTRACE(0x127b1aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127b1aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 127b1aa1 mov ebp, esp */
  EBP = (ESP);
  /* 127b1aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127b1aa5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 127b1aa8 push eax */
  push32((uint32_t)(EAX));
  /* 127b1aa9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127b1aac push ecx */
  push32((uint32_t)(ECX));
  /* 127b1aad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127b1ab0 push edx */
  push32((uint32_t)(EDX));
  /* 127b1ab1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127b1ab4 push eax */
  push32((uint32_t)(EAX));
  /* 127b1ab5 call 0x127b1ac0 */
  push32(0x127b1abau); f_127b1ac0();
  /* 127b1aba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127b1abd pop ebp */
  EBP = (pop32());
  /* 127b1abe ret  */
  ESPCHK(0x127b1aa0u, _esp0);
  ESP += 4; return;
}

